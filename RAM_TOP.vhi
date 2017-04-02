
-- VHDL Instantiation Created from source file RAM_TOP.vhd -- 02:07:17 10/02/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

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

	Inst_RAM_TOP: RAM_TOP PORT MAP(
		din => ,
		dout => ,
		adr => ,
		ce => ,
		we => ,
		clk => 
	);


