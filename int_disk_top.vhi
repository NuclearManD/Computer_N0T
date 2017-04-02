
-- VHDL Instantiation Created from source file int_disk_top.vhd -- 17:57:33 07/19/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT int_disk_top
	PORT(
		rst : IN std_logic;
		clk : IN std_logic;
		sodi : IN std_logic_vector(7 downto 0);
		we : IN std_logic;
		ce : IN std_logic;
		adr : IN std_logic_vector(2 downto 0);          
		sido : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_int_disk_top: int_disk_top PORT MAP(
		rst => ,
		clk => ,
		sido => ,
		sodi => ,
		we => ,
		ce => ,
		adr => 
	);


