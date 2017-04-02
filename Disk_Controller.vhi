
-- VHDL Instantiation Created from source file Disk_Controller.vhd -- 19:30:56 10/17/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Disk_Controller
	PORT(
		din : IN std_logic_vector(7 downto 0);
		adr : IN std_logic_vector(2 downto 0);
		we : IN std_logic;
		ce : IN std_logic;    
		NF_D : INOUT std_logic_vector(7 downto 0);      
		dout : OUT std_logic_vector(7 downto 0);
		NF_A : OUT std_logic_vector(24 downto 0);
		NF_CE : OUT std_logic;
		NF_WE : OUT std_logic;
		NF_OE : OUT std_logic
		);
	END COMPONENT;

	Inst_Disk_Controller: Disk_Controller PORT MAP(
		din => ,
		dout => ,
		adr => ,
		we => ,
		ce => ,
		NF_A => ,
		NF_D => ,
		NF_CE => ,
		NF_WE => ,
		NF_OE => 
	);


