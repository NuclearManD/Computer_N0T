
-- VHDL Instantiation Created from source file biosram.vhd -- 02:44:31 07/20/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

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

	Inst_biosram: biosram PORT MAP(
		clka => ,
		ena => ,
		wea => ,
		addra => ,
		dina => ,
		douta => 
	);


