----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:54:32 07/19/2016 
-- Design Name: 
-- Module Name:    Top_Module - SYSTEM 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Top_Module is
	Port ( 
		clk  : in  STD_LOGIC;
		ps2c : in  STD_LOGIC;
		ps2d : in  STD_LOGIC;
		rx   : in  STD_LOGIC;
		tx   : out  STD_LOGIC;
		led  : out  STD_LOGIC_VECTOR (7 downto 0);
		sw   : in  STD_LOGIC_VECTOR (7 downto 0);
		NF_A : out std_logic_vector (24 downto 0);
		NF_D : inout std_logic_vector (7 downto 0);
		NF_CE: out std_logic;
		NF_WE: out std_logic;
		NF_OE: out std_logic;
		NF_BYTE: out std_logic;
		NF_WP: out std_logic;
		NF_RP: out std_logic
	);
end Top_Module;

architecture SYSTEM of Top_Module is
	COMPONENT Disk_Controller
	PORT(
				din : in  STD_LOGIC_VECTOR (7 downto 0);
            dout : out  STD_LOGIC_VECTOR (7 downto 0);
            adr : in  STD_LOGIC_VECTOR (2 downto 0);
            we : in  STD_LOGIC;
            ce : in  STD_LOGIC;
			   NF_A : out std_logic_vector (24 downto 0);
				NF_D : inout std_logic_vector (7 downto 0);
				NF_CE: out std_logic;
				NF_WE: out std_logic;
				NF_OE: out std_logic
		);
	END COMPONENT;
	COMPONENT RAM_TOP
	PORT(
		din : IN std_logic_vector(7 downto 0);
		adr : IN std_logic_vector(14 downto 0);
		ce : IN std_logic;
		we : IN std_logic;
		clk : IN std_logic;          
		dout : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;
	COMPONENT kbd_main_ctrl
	PORT(
		clk : IN std_logic;
		rst : IN std_logic;
		ps2d : IN std_logic;
		ps2c : IN std_logic;
		ce : IN std_logic;
		we : IN std_logic;          
		siko : OUT std_logic_vector(7 downto 0);
		empty : out std_logic
		);
	END COMPONENT;
	COMPONENT n016
	PORT(
		pimo : IN std_logic_vector(7 downto 0);
		skdclk : IN std_logic;
		CLK : IN std_logic;
		waitb : IN std_logic;
		rst : IN std_logic;          
		pomi : OUT std_logic_vector(7 downto 0);
		A : OUT std_logic_vector(15 downto 0);
		WR : OUT std_logic;
		output : OUT std_logic_vector(15 downto 0);
		meme : OUT std_logic;
		ioe : OUT std_logic
		);
	END COMPONENT;
	COMPONENT uart_top
	PORT(
		clk : IN std_logic;
		rst : IN std_logic;
		rx : IN std_logic;
		din : IN std_logic_vector(7 downto 0);
		ce : IN std_logic;
		we : IN std_logic;          
		tx : OUT std_logic;
		empty : OUT std_logic;
		dout : OUT std_logic_vector(7 downto 0);
		busy : OUT std_logic
		);
	END COMPONENT;
	COMPONENT biosram
	PORT(
		clka : IN std_logic;
		ena : IN std_logic;
		wea : IN std_logic;
		addra : IN std_logic_vector(13 downto 0);
		dina : IN std_logic_vector(7 downto 0);          
		douta : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;
	signal rst       : std_logic:='1';
	signal started   : std_logic:='0';
	signal uart_busy : std_logic;
	signal busy      : std_logic;
	signal we        : std_logic;
	signal io        : std_logic;
	signal uart_en   : std_logic;
	signal disk_en   : std_logic;
	signal kbd_en    : std_logic;
	signal kbde      : std_logic;
	signal mem       : std_logic;
	signal me        : std_logic;
	signal bre       : std_logic;
	signal adr       : std_logic_vector(15 downto 0);
	signal posi      : std_logic_vector(7 downto 0);
	signal piso      : std_logic_vector(7 downto 0);
	signal sido      : std_logic_vector(7 downto 0);
	signal siko      : std_logic_vector(7 downto 0);
	signal siuo      : std_logic_vector(7 downto 0);
	signal simo      : std_logic_vector(7 downto 0);
	signal siro      : std_logic_vector(7 downto 0);
	signal ledt      : std_logic_vector(15 downto 0);
	signal uart_empty: std_logic;
begin
		
		a_kbd_main_ctrl: kbd_main_ctrl PORT MAP(
			clk => clk,
			rst => rst,
			ps2d => ps2d,
			ps2c => ps2c,
			siko => siko,
			ce => kbd_en,
			we => we,
			empty=>kbde
		);
		a_n016: n016 PORT MAP(
			pimo => piso,
			pomi => posi,
			A => adr,
			skdclk => clk,
			CLK => clk,
			WR => we,
			output => ledt,
			meme => mem,
			waitb => busy,
			ioe => io,
			rst => not rst
		);
		a_uart_top: uart_top PORT MAP(
			clk => clk,
			rst => rst,
			rx => rx,
			tx => tx,
			empty => uart_empty,
			din => posi,
			dout => siuo,
			ce => uart_en,
			we => we,
			busy => uart_busy
		);
		a_instance_name : biosram
		PORT MAP (
			clka => clk,
			ena => bre,
			wea => we,
			addra => adr(13 downto 0),
			dina => posi,
			douta => siro
		);
		Inst_RAM_TOP: RAM_TOP PORT MAP(
			din => posi,
			dout => simo,
			adr => adr(14 downto 0),
			ce => me,
			we => we,
			clk => clk
		);	
		Inst_Disk_Controller: Disk_Controller PORT MAP(
			din => posi,
			dout => sido,
			adr => adr(2 downto 0),
			we => we,
			ce => disk_en,
			NF_A => NF_A,
			NF_D => NF_D,
			NF_CE => NF_CE,
			NF_WE => NF_WE,
			NF_OE => NF_OE
		);
		NF_BYTE<='0';
		NF_WP<='1';
		NF_RP<='1';
		busy<=uart_busy;
		disk_en<='1' when adr(4 downto 3)="10" and io='0' else
					'0';
		uart_en<='1' when adr(4 downto 3)="00" and io='0' else
					'0';
		kbd_en<= '1' when adr(4 downto 3)="01" and io='0' else
					'0';
		bre<=(not (mem or adr(15)));
		me<=(not mem) and adr(15);
		piso<=siuo when uart_en='1' else
				sido when disk_en='1' else
				siko when kbd_en='1' else
				simo when me='1' else
				siro when bre='1' else
				"000000"&not kbde&not uart_empty when io='0' and adr(4 downto 2)="111" else
				"00010011";
		led<=ledt(7 downto 0);
		process(clk)
		begin
			if(rising_edge(clk))then
				if(started='0')then
					started<='1';
				else
					rst<=sw(0);
				end if;
			end if;
		end process;
end SYSTEM;

