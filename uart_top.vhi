
-- VHDL Instantiation Created from source file uart_top.vhd -- 17:59:25 07/19/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

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

	Inst_uart_top: uart_top PORT MAP(
		clk => ,
		rst => ,
		rx => ,
		tx => ,
		empty => ,
		din => ,
		dout => ,
		ce => ,
		we => ,
		busy => 
	);


