--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   01:19:15 07/20/2016
-- Design Name:   
-- Module Name:   G:/dylanbrophy/VHDL_computer_parts/Computer_N0T/top_tb_n0t.vhd
-- Project Name:  Computer_N0T
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Top_Module
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY top_tb_n0t IS
END top_tb_n0t;
 
ARCHITECTURE behavior OF top_tb_n0t IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Top_Module
    PORT(
         clk : IN  std_logic;
         ps2c : IN  std_logic;
         ps2d : IN  std_logic;
         rx : IN  std_logic;
         tx : OUT  std_logic;
         led : OUT  std_logic_vector(7 downto 0);
         sw : IN  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal ps2c : std_logic := '1';
   signal ps2d : std_logic := '1';
   signal rx : std_logic := '1';
   signal sw : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal tx : std_logic;
   signal led : std_logic_vector(7 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Top_Module PORT MAP (
          clk => clk,
          ps2c => ps2c,
          ps2d => ps2d,
          rx => rx,
          tx => tx,
          led => led,
          sw => sw
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for 10 ns;
		clk <= '1';
		wait for 10 ns;
   end process;
	ps2_process :process
   begin
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 2 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 0.25 ms;
		ps2c <= '0';
		wait for 0.25 ms;
		ps2c <= '1';
		wait for 100000 ms;
   end process;
	process
  begin
	 ps2d <= '0'; wait for 0.5 ms;

    -- 8 data bits (LSB first)            
    ps2d <= '1'; wait for 0.5 ms;
    ps2d <= '1'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    ps2d <= '1'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    -- parity bit
    ps2d <= '1'; wait for 0.5 ms;
    -- stop bit
    ps2d <= '1'; wait for 0.5 ms;
    wait for 2 ms;
	 ps2d <= '0'; wait for 0.5 ms;

    -- 8 data bits (LSB first)            
    ps2d <= '1'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    ps2d <= '1'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    ps2d <= '1'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    ps2d <= '0'; wait for 0.5 ms;
    -- parity bit
    ps2d <= '1'; wait for 0.5 ms;
    -- stop bit
    ps2d <= '1'; wait for 0.5 ms;
    wait for 200000 ms;
  end process;
END;
