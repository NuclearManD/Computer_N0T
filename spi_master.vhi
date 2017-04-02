
-- VHDL Instantiation Created from source file spi_master.vhd -- 01:05:30 10/02/2016
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT spi_master
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		cs : IN std_logic;
		rw : IN std_logic;
		addr : IN std_logic_vector(1 downto 0);
		data_in : IN std_logic_vector(7 downto 0);
		spi_miso : IN std_logic;          
		data_out : OUT std_logic_vector(7 downto 0);
		irq : OUT std_logic;
		spi_mosi : OUT std_logic;
		spi_clk : OUT std_logic;
		spi_cs_n : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_spi_master: spi_master PORT MAP(
		clk => ,
		reset => ,
		cs => ,
		rw => ,
		addr => ,
		data_in => ,
		data_out => ,
		irq => ,
		spi_miso => ,
		spi_mosi => ,
		spi_clk => ,
		spi_cs_n => 
	);


