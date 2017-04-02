
-- VHDL Instantiation Created from source file n016.vhd -- 17:58:08 07/19/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

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

	Inst_n016: n016 PORT MAP(
		pimo => ,
		pomi => ,
		A => ,
		skdclk => ,
		CLK => ,
		WR => ,
		output => ,
		meme => ,
		waitb => ,
		ioe => ,
		rst => 
	);


