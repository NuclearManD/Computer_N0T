
-- VHDL Instantiation Created from source file kbd_main_ctrl.vhd -- 17:57:55 07/19/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT kbd_main_ctrl
	PORT(
		clk : IN std_logic;
		rst : IN std_logic;
		ps2d : IN std_logic;
		ps2c : IN std_logic;
		ce : IN std_logic;
		we : IN std_logic;          
		siko : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_kbd_main_ctrl: kbd_main_ctrl PORT MAP(
		clk => ,
		rst => ,
		ps2d => ,
		ps2c => ,
		siko => ,
		ce => ,
		we => 
	);


