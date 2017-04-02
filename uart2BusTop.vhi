
-- VHDL Instantiation Created from source file uart2BusTop.vhd -- 17:59:15 07/19/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT uart2BusTop
	PORT(
		clr : IN std_logic;
		clk : IN std_logic;
		serIn : IN std_logic;
		intAccessGnt : IN std_logic;
		intRdData : IN std_logic_vector(7 downto 0);          
		serOut : OUT std_logic;
		intAccessReq : OUT std_logic;
		intAddress : OUT std_logic_vector(7 downto 0);
		intWrData : OUT std_logic_vector(7 downto 0);
		intWrite : OUT std_logic;
		intRead : OUT std_logic
		);
	END COMPONENT;

	Inst_uart2BusTop: uart2BusTop PORT MAP(
		clr => ,
		clk => ,
		serIn => ,
		serOut => ,
		intAccessReq => ,
		intAccessGnt => ,
		intRdData => ,
		intAddress => ,
		intWrData => ,
		intWrite => ,
		intRead => 
	);


