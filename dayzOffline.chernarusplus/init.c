//<START>..................................<START>	
//-------[ CAR SPAWNER FUNCTION -NZJOCKO- ]-------
void spawncar( string type, vector position, bool spawnfood, bool spawndrink, bool spawngun, bool spawnmed )
{
	
//can edit arrays BUT if adding to gun array may need xtra code for mags etc
		ref TStringArray foodArray = {"BoxCerealCrunchin","PowderedMilk","Rice","BakedBeansCan_Opened","PeachesCan_Opened","SpaghettiCan_Opened","SardinesCan_Opened","TunaCan_Opened","Apple","Tomato","GreenBellPepper","Zucchini","SlicedPumpkin","Potato","Plum","Pear"};
		ref TStringArray drinkArray = {"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","SodaCan_Kvass","WaterBottle"};
	    ref TStringArray gunArray = {"SKS","Mosin9130","CZ527","FNX45","MP5K","Mp133Shotgun","CZ61","UMP45","MakarovIJ70"};
		ref TStringArray medArray = {"SalineBagIV","Epinephrine","BandageDressing"};
        bool allowspawn = true;
// Need to do a better a object check here maybe only check for cars?
		ref array<Object> nearest_objects = new array<Object>;
		ref array<CargoBase> cargo_objects = new array<CargoBase>;
		GetGame().GetObjectsAtPosition3D( position, 15, nearest_objects, cargo_objects );

		//new check if car is spawned
		for (int i = 0; i < nearest_objects.Count(); ++i) {
			if (nearest_objects[i].IsKindOf("CarScript")) {
				allowspawn = false;
			}
		}	
		
		//if (nearest_objects.Count() < 1) {
		if (allowspawn) {	
			
		EntityAI myVeh = EntityAI.Cast(GetGame().CreateObject(type, position, false, true));
		if (type == "OffroadHatchback" || "OffroadHatchback_Blue" || "OffroadHatchback_White")
		{
        myVeh.GetInventory().CreateAttachment("HatchbackWheel");
        myVeh.GetInventory().CreateAttachment("HatchbackWheel");
        myVeh.GetInventory().CreateAttachment("HatchbackWheel");
        myVeh.GetInventory().CreateAttachment("HatchbackWheel");
        myVeh.GetInventory().CreateAttachment("HatchbackWheel");
		if (type == "OffroadHatchback")
		{
        myVeh.GetInventory().CreateAttachment("HatchbackDoors_Driver");
        myVeh.GetInventory().CreateAttachment("HatchbackDoors_CoDriver");
        myVeh.GetInventory().CreateAttachment("HatchbackHood");
		myVeh.GetInventory().CreateAttachment("HatchbackTrunk");
		}
		if (type == "OffroadHatchback_Blue")
		{
        myVeh.GetInventory().CreateAttachment("HatchbackDoors_Driver_Blue");
        myVeh.GetInventory().CreateAttachment("HatchbackDoors_CoDriver_Blue");
        myVeh.GetInventory().CreateAttachment("HatchbackHood_Blue");
		myVeh.GetInventory().CreateAttachment("HatchbackTrunk_Blue");
		}
		
		if (type == "OffroadHatchback_White")
		{
        myVeh.GetInventory().CreateAttachment("HatchbackDoors_Driver_White");
        myVeh.GetInventory().CreateAttachment("HatchbackDoors_CoDriver_White");
        myVeh.GetInventory().CreateAttachment("HatchbackHood_White");
		myVeh.GetInventory().CreateAttachment("HatchbackTrunk_White");
		}
		
		}
		
		if (type == "CivilianSedan" || "CivilianSedan_Wine" || "CivilianSedan_Black")	
		{
		myVeh.GetInventory().CreateAttachment("CivSedanWheel");
        myVeh.GetInventory().CreateAttachment("CivSedanWheel");
        myVeh.GetInventory().CreateAttachment("CivSedanWheel");
        myVeh.GetInventory().CreateAttachment("CivSedanWheel");
		if (type == "CivilianSedan")
		{
        myVeh.GetInventory().CreateAttachment("CivSedanDoors_Driver");
        myVeh.GetInventory().CreateAttachment("CivSedanDoors_CoDriver");
		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackLeft");
		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackRight");
        myVeh.GetInventory().CreateAttachment("CivSedanHood");
		myVeh.GetInventory().CreateAttachment("CivSedanTrunk");
		}
		if (type == "CivilianSedan_Wine")
		{
        myVeh.GetInventory().CreateAttachment("CivSedanDoors_Driver_Wine");
        myVeh.GetInventory().CreateAttachment("CivSedanDoors_CoDriver_Wine");
		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackLeft_Wine");
		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackRight_Wine");
        myVeh.GetInventory().CreateAttachment("CivSedanHood_Wine");
		myVeh.GetInventory().CreateAttachment("CivSedanTrunk_Wine");
		}
		
		if (type == "CivilianSedan_Black")
		{
        myVeh.GetInventory().CreateAttachment("CivSedanDoors_Driver_Black");
        myVeh.GetInventory().CreateAttachment("CivSedanDoors_CoDriver_Black");
		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackLeft_Black");
		myVeh.GetInventory().CreateAttachment("CivSedanDoors_BackRight_Black");		
        myVeh.GetInventory().CreateAttachment("CivSedanHood_Black");
		myVeh.GetInventory().CreateAttachment("CivSedanTrunk_Black");
		}
			
		}
		
		
		if (type == "Sedan_02" || "Sedan_02_Red" || "Sedan_02_Grey")	
		{
		myVeh.GetInventory().CreateAttachment("Sedan_02_Wheel");
        myVeh.GetInventory().CreateAttachment("Sedan_02_Wheel");
        myVeh.GetInventory().CreateAttachment("Sedan_02_Wheel");
        myVeh.GetInventory().CreateAttachment("Sedan_02_Wheel");
		if (type == "Sedan_02")
		{
        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_1");
        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_1");
		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_2");
		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_2");
        myVeh.GetInventory().CreateAttachment("Sedan_02_Hood");
		myVeh.GetInventory().CreateAttachment("Sedan_02_Trunk");
		}
		if (type == "Sedan_02_Red")
		{
        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_1_Red");
        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_1_Red");
		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_2_Red");
		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_2_Red");
        myVeh.GetInventory().CreateAttachment("Sedan_02_Hood_Red");
		myVeh.GetInventory().CreateAttachment("Sedan_02_Trunk_Red");
		}
		
		if (type == "Sedan_02_Grey")
		{
        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_1_Grey");
        myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_1_Grey");
		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_1_2_Grey");
		myVeh.GetInventory().CreateAttachment("Sedan_02_Door_2_2_Grey");		
        myVeh.GetInventory().CreateAttachment("Sedan_02_Hood_Grey");
		myVeh.GetInventory().CreateAttachment("Sedan_02_Trunk_Grey");
		}
			
		}

		if (type == "Hatchback_02" || "Hatchback_02_Black" || "Hatchback_02_Blue")	
		{
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Wheel");
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Wheel");
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Wheel");
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Wheel");
		if (type == "Hatchback_02")
		{
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_1");
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_1");
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_2");
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_2");
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Hood");
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Trunk");
		}
		if (type == "Hatchback_02_Black")
		{
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_1_Black");
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_1_Black");
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_2_Black");
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_2_Black");
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Hood_Black");
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Trunk_Black");
		}
		
		if (type == "Hatchback_02_Blue")
		{
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_1_Blue");
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_1_Blue");
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_1_2_Blue");
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Door_2_2_Blue");		
        myVeh.GetInventory().CreateAttachment("Hatchback_02_Hood_Blue");
		myVeh.GetInventory().CreateAttachment("Hatchback_02_Trunk_Blue");
		}
			
		}		
		
		
        myVeh.GetInventory().CreateAttachment("SparkPlug");
        myVeh.GetInventory().CreateAttachment("EngineBelt");
        myVeh.GetInventory().CreateAttachment("CarRadiator");
        myVeh.GetInventory().CreateAttachment("CarBattery");
        myVeh.GetInventory().CreateAttachment("HeadlightH7");	
		myVeh.GetInventory().CreateAttachment("HeadlightH7");
		
		//Change to spawning in car inventory?
		if (spawnfood)
		{
			myVeh.SpawnEntityOnGroundPos(foodArray.GetRandomElement(), position); 
		}
		if (spawndrink)
		{
			myVeh.SpawnEntityOnGroundPos(drinkArray.GetRandomElement(), position); 
		}
		if (spawnmed)
		{
			myVeh.SpawnEntityOnGroundPos(medArray.GetRandomElement(), position); 	
		}
		
		
		if (spawngun)
		{
		string selectedGun = gunArray.GetRandomElement(); //Random choice
		//"SKS","Mosin9130","CZ527","FNX45","MP5K","Mp133Shotgun","CZ61","UMP45","MakarovIJ70"	
		//string selectedGun = "Mosin9130"; //force choice for testing
		EntityAI myGun = EntityAI.Cast(myVeh.SpawnEntityOnGroundPos(selectedGun, position)); 
		
		if ( selectedGun == "MakarovIJ70")
		{
		myGun.GetInventory().CreateAttachment("PistolSuppressor");
		myVeh.SpawnEntityOnGroundPos("Mag_IJ70_8Rnd", position);
		myVeh.SpawnEntityOnGroundPos("Mag_IJ70_8Rnd", position);
		myVeh.SpawnEntityOnGroundPos("Ammo_380", position);
		}
		
		if ( selectedGun == "UMP45")
		{
		myVeh.SpawnEntityOnGroundPos("Mag_UMP_25Rnd", position);
		myVeh.SpawnEntityOnGroundPos("Ammo_45ACP", position);
		}
		
		if ( selectedGun == "FNX45")
		{
		ItemBase fnxAtt = myGun.GetInventory().CreateAttachment("FNP45_MRDSOptic");
		fnxAtt.GetInventory().CreateAttachment("Battery9V");
		myVeh.SpawnEntityOnGroundPos("Mag_FNX45_15Rnd", position);
		myVeh.SpawnEntityOnGroundPos("Ammo_45ACP", position);
		}
		
		if ( selectedGun == "CZ527")
		{
		myGun.GetInventory().CreateAttachment("HuntingOptic");
		myVeh.SpawnEntityOnGroundPos("Ammo_762x39", position);
		}
			
		if ( selectedGun == "Mp133Shotgun")
		{
		myVeh.SpawnEntityOnGroundPos("Ammo_12gaSlug", position);
		myVeh.SpawnEntityOnGroundPos("Ammo_12gaSlug", position);
		}
		
		if ( selectedGun == "MP5K")
		{
		myGun.GetInventory().CreateAttachment("MP5_RailHndgrd");
		myGun.GetInventory().CreateAttachment("MP5_Compensator");
		myGun.GetInventory().CreateAttachment("MP5k_StockBttstck");
		myVeh.SpawnEntityOnGroundPos("Mag_MP5_30Rnd", position);
		myVeh.SpawnEntityOnGroundPos("Mag_MP5_30Rnd", position);
		}
		
		if ( selectedGun == "SKS")
		{
		myGun.GetInventory().CreateAttachment("PUScopeOptic");
		myVeh.SpawnEntityOnGroundPos("Ammo_762x39", position);
		}
		
		if ( selectedGun == "Mosin9130")
		{
		myGun.GetInventory().CreateAttachment("PUScopeOptic");
		myVeh.SpawnEntityOnGroundPos("Ammo_762x54", position);
		}

		
		if ( selectedGun == "CZ61")
		{
		myVeh.SpawnEntityOnGroundPos("Mag_CZ61_20Rnd", position);
		myVeh.SpawnEntityOnGroundPos("Mag_CZ61_20Rnd", position);
		myVeh.SpawnEntityOnGroundPos("Ammo_380", position);
		}	
			
			
		}
		
		
		auto carfluids = Car.Cast( myVeh );
		carfluids.Fill( CarFluid.FUEL, 1000 );
		carfluids.Fill( CarFluid.OIL, 1000 );
		carfluids.Fill( CarFluid.BRAKE, 1000 );
		carfluids.Fill( CarFluid.COOLANT, 1000 );
		
			
		}

	

}
//<END>..................................<END>


//Spawn helper function
void SpawnObject( string type, vector position, vector orientation )
{
    auto obj = GetGame().CreateObject( type, position );
    obj.SetPosition( position );
    obj.SetOrientation( orientation );
    obj.SetOrientation( obj.GetOrientation() ); //Collision fix
    obj.Update();
    obj.SetAffectPathgraph( true, false );
    if( obj.CanAffectPathgraph() ) GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( GetGame().UpdatePathgraphRegionByObject, 100, false, obj );
}

void main()
{

//Your custom spawned objects
//prison bridge
SpawnObject( "bldr_Platform1_Block", "2712.823730 3.260230 1982.408691", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2712.800049 3.270670 1992.386108", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2712.802246 2.920380 2001.972412", "0.000000 -4.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2702.840088 3.260231 1982.418213", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2702.777832 3.260230 1992.395508", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2702.766602 2.912740 2002.140137", "0.000000 -4.500000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2692.885986 3.260231 1982.409180", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2692.780029 3.260230 1992.400024", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2692.807129 2.899940 2002.024658", "0.000000 -4.500000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2712.786865 3.273120 1972.450928", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2702.830078 3.273780 1972.479980", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2692.870117 3.235950 1972.469971", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2712.800049 3.280030 1962.510010", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2702.860107 3.261988 1962.498291", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2692.869385 3.253740 1962.461792", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2682.939697 3.260230 1992.420044", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2682.929688 3.260230 1982.430542", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2683.224854 2.462310 2002.119995", "0.000000 -4.500000 -4.999999" );
SpawnObject( "bldr_Platform1_Block", "2722.833496 3.260230 1982.439941", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2722.794678 3.268150 1972.480591", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2722.780029 3.285467 1962.519775", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2682.918213 3.212203 1972.458130", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2683.630859 3.239650 1962.448853", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2722.770020 3.283820 1952.550049", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2712.771729 3.296150 1952.520630", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2702.820068 3.249630 1952.501831", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2692.853027 3.274140 1952.500366", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2683.590088 3.283180 1952.520386", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform2_Block", "2683.620117 3.284330 1942.580444", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform2_Block", "2692.840088 3.287070 1942.468262", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2702.889893 3.323189 1942.469971", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2712.869141 3.325982 1942.459595", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2722.760010 3.281300 1942.507935", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.260010 -1.330000 1928.250000", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.260010 -1.330000 1903.309814", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.270020 -1.330000 1878.329956", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Cementworks_Conveyorhall", "2655.919922 10.733400 1979.181885", "-86.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Guardhouse2", "2706.340088 7.979080 1993.681885", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Prison_Wall_Small", "2727.666260 11.478702 1946.059204", "100.000008 0.000000 0.000000" );
SpawnObject( "bldr_Prison_Wall_Small", "2727.716309 11.465160 1963.209961", "100.000008 0.000000 0.000000" );
SpawnObject( "bldr_Prison_Wall_Small", "2727.780029 11.465200 1970.689941", "100.000008 0.000000 0.000000" );
SpawnObject( "bldr_Prison_Wall_Small", "2718.695313 11.453700 1937.904907", "10.000004 0.000000 0.000000" );
SpawnObject( "bldr_Prison_Wall_Small", "2687.679932 11.438447 1937.804565", "10.000004 0.000000 0.000000" );
SpawnObject( "bldr_Prison_Wall_Small", "2679.000000 11.357903 1946.181519", "100.000008 0.000000 0.000000" );
SpawnObject( "bldr_Prison_Wall_Small", "2679.076660 11.340500 1956.369995", "100.000008 0.000000 0.000000" );
SpawnObject( "bldr_rail_tracke_turnoutr", "2573.777100 6.114159 1994.079956", "99.000008 0.000000 0.000000" );
SpawnObject( "bldr_rail_tracke_r25_10", "2595.479980 5.795209 1983.930054", "122.999992 0.000000 0.000000" );
SpawnObject( "bldr_rail_tracke_r25_10", "2615.166260 5.795209 1968.810059", "131.999985 0.000000 0.000000" );
SpawnObject( "bldr_rail_tracke_l30_20", "2630.540039 5.791750 1952.558350", "-38.000004 0.000000 0.000000" );
SpawnObject( "Land_Mil_GuardTower", "2718.929932 13.259365 1945.582764", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_GuardTower", "2687.919922 12.970452 1945.914795", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_BusStation_building", "2694.669678 7.088780 1946.589966", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2627.175049 3.237990 1957.520020", "-44.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2620.563965 3.237961 1963.989990", "-46.999977 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2632.727783 3.226830 1950.530029", "-33.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2632.727783 3.226830 1950.530029", "-33.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2613.260010 3.224290 1970.532593", "40.999996 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2606.000244 2.916800 1976.725464", "40.000000 0.000000 -4.000000" );
SpawnObject( "bldr_rail_bridge_40", "2676.300049 2.696310 1855.000244", "-20.000006 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.280029 -1.330000 1853.341797", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.290039 -1.330000 1828.334106", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_40", "2686.209961 2.703854 1816.604370", "-9.000004 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.290039 -1.337557 1803.338989", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.300049 -1.347000 1778.437012", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_40", "2690.703369 -1.831480 1773.796631", "0.000000 11.000000 13.000002" );
SpawnObject( "bldr_rail_bridge_40", "2691.889893 -2.664289 1734.529663", "0.000000 -10.000000 -12.999999" );
SpawnObject( "bldr_bridge_stone_25", "2703.312012 -1.362015 1753.487915", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.320068 -1.360060 1728.529297", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Train_742_Blue", "2691.937256 1.363871 1757.819702", "-179.999985 -11.000000 -12.000000" );
SpawnObject( "Land_Train_Wagon_Box", "2692.750488 3.084080 1771.371460", "-12.999999 14.000000 18.000010" );
SpawnObject( "Land_Train_Wagon_Box", "2692.340088 5.415000 1782.800049", "16.000002 9.000000 9.000003" );
SpawnObject( "Land_Train_Wagon_Box", "2690.229980 7.657508 1791.040039", "0.000000 10.000002 -1.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Medium2", "2686.979492 6.951770 1794.889404", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "2689.751465 7.264223 1796.170288", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Medium1", "2690.674561 6.418674 1792.109375", "-75.000000 11.000000 -15.000015" );
SpawnObject( "bldr_Rubble_DirtPile_Medium1", "2692.122803 6.248490 1791.959351", "95.000000 -7.000001 17.000025" );
SpawnObject( "bldr_Rubble_DirtPile_Medium1", "2694.240723 5.619480 1791.659546", "-1.000000 25.000002 19.999994" );
SpawnObject( "Land_Train_Wagon_Box", "2682.539551 8.365619 1837.114868", "-16.000004 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "2684.187988 6.731608 1837.313843", "72.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.329346 -1.337195 1703.611694", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.300049 -1.348441 1678.633789", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.289063 -1.345594 1653.871460", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.290039 -1.361449 1628.900635", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.290039 -1.389390 1603.914063", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.300049 -1.389810 1578.942261", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.300049 -1.361878 1553.976440", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.320068 -1.377300 1529.117676", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.300049 -1.369247 1504.148193", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.260986 -1.384160 1479.180054", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2673.071777 4.459590 1385.342896", "3.000026 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Ramp", "2656.969727 7.602989 1380.660400", "178.999954 0.000000 -14.000000" );
SpawnObject( "bldr_Platform1_Block", "2672.322998 4.448822 1375.390015", "3.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2682.250000 4.477911 1374.853027", "3.000026 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2682.760010 4.480000 1384.825806", "3.000026 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2692.179932 4.485538 1374.290039", "3.000026 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2692.689941 4.494731 1384.232788", "3.000020 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2702.149902 4.475020 1373.789917", "3.000012 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2702.633301 4.510170 1383.689819", "3.000026 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2712.530762 4.515410 1383.160034", "3.000026 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2711.983398 4.485390 1373.182129", "3.000026 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.266846 -1.394950 1454.550049", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.255127 -1.409760 1429.666992", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "2703.270020 -1.417941 1410.969971", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2708.400879 4.528140 1393.450195", "2.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2698.439941 4.509017 1393.865112", "2.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Ramp", "2701.159668 6.774180 1411.796143", "-90.000000 0.000000 -10.000004" );
SpawnObject( "bldr_Platform1_Ramp", "2705.820068 6.775255 1411.770020", "-89.000000 0.000000 -10.000004" );
SpawnObject( "bldr_rail_bridge_40", "2645.939697 2.665780 1927.467896", "-29.000008 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_40", "2662.709961 2.698325 1891.390015", "-21.000010 0.000000 0.000000" );
SpawnObject( "Land_Airfield_ServiceHangar_R", "2628.038086 1.722998 1478.089966", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Airfield_ServiceHangar_L", "2628.029785 1.690750 1428.109985", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Train_742_Red", "2678.600098 8.888300 1849.215698", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_40", "2691.461670 1.350720 1690.430054", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "2692.439209 5.609888 1713.349976", "0.000000 -10.000002 -6.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "2689.319580 5.043850 1711.912476", "-179.999985 5.000000 20.000006" );
SpawnObject( "bldr_rail_bridge_40", "2691.498535 1.342950 1650.459961", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_40", "2691.470215 1.345799 1610.450073", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_40", "2691.476563 1.312180 1570.510010", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_15_end", "2653.343506 -4.712580 1447.189941", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_40", "2684.952637 -5.058339 1525.608643", "10.000002 16.000002 -18.000010" );
SpawnObject( "bldr_rail_bridge_40", "2669.137939 -6.867790 1489.741455", "30.000004 -12.000000 21.999998" );
SpawnObject( "bldr_rail_bridge_15_end", "2653.345947 -4.717490 1458.379761", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_15_end", "2653.335449 -4.732200 1434.949951", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_bridge_15_end", "2653.367676 -4.751830 1423.568848", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2652.219971 -1.767690 1415.604614", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Block", "2652.229980 -2.820760 1406.515747", "0.000000 13.000002 0.000000" );
SpawnObject( "bldr_rail_linebreak_concrete", "2653.409912 2.301160 1415.489014", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Train_Wagon_Box", "2653.315430 3.429230 1441.293457", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_obstacle_ramp", "2631.584473 3.326264 1501.390869", "179.999985 59.000004 179.999985" );
SpawnObject( "bldr_misc_obstacle_ramp", "2607.922852 3.296897 1428.945313", "90.000000 58.000011 -179.999985" );
SpawnObject( "bldr_misc_obstacle_ramp", "2613.136719 0.859152 1403.035278", "-179.999985 0.000000 0.000000" );
SpawnObject( "bldr_misc_obstacle_ramp", "2607.981934 3.255833 1487.881958", "90.000000 -63.000011 0.000000" );
SpawnObject( "bldr_ship_medium_front", "2849.159912 3.786206 1109.191650", "139.000061 -7.000001 0.000000" );
SpawnObject( "bldr_ship_medium_back", "2888.143799 7.378095 1051.033203", "155.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "2689.489990 5.498692 1546.623047", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "2693.535156 6.027518 1546.997925", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_Monument_Wall", "2697.229980 7.711825 1993.790527", "-179.999985 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2694.090576 7.454870 1993.810059", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2691.529785 7.454870 1993.795898", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2688.968262 7.454870 1993.822754", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2686.383545 7.454865 1993.805176", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2684.929688 7.504866 1995.250000", "-90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2683.430176 7.504866 1997.043457", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_pole", "2684.945068 7.563948 1996.689941", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_pole", "2684.929932 7.613948 1993.810059", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_pole", "2684.919922 7.563948 1997.040039", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2680.876709 7.504870 1997.063354", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2679.527100 7.504866 1997.069946", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_pole", "2678.129639 7.563948 1997.052002", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2678.128418 7.304860 1995.625977", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2678.139893 7.304865 1993.057983", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2678.110107 7.304865 1990.482910", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2678.112549 7.304865 1987.954346", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fen2_6", "2677.965576 7.518342 1983.680054", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2713.909912 7.515310 1996.948120", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2716.461670 7.515310 1996.949951", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_pole", "2717.622559 7.524390 1996.647583", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2717.580078 7.465305 1995.213989", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2717.600098 7.465706 1992.683472", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2717.576416 7.465305 1990.140015", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2717.592773 7.465305 1988.657104", "-90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_pole", "2717.580078 7.513950 1987.199829", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2719.050049 7.505678 1987.239380", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2721.584717 7.504866 1987.206299", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2724.120117 7.504866 1987.205078", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fenr_3", "2726.519775 7.504866 1987.192383", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fen2_6", "2727.879883 7.767530 1984.150879", "-90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_fen2_6", "2727.789795 7.767530 1980.077393", "-87.000000 0.000000 0.000000" );
SpawnObject( "bldr_rail_crossing_barrier", "2698.760010 9.732681 1986.366455", "-179.999985 0.000000 0.000000" );
SpawnObject( "bldr_BusStop_Village", "2660.172119 7.197911 2010.435669", "-175.999969 0.000000 0.000000" );
SpawnObject( "bldr_BusStop_Village_Sign", "2657.681885 7.025216 2010.745605", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_BusStop_City_Sign", "2662.602295 6.889129 2010.254272", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_Lamp_City1", "2650.708008 10.255400 2010.740234", "98.999985 -38.999992 22.000021" );
SpawnObject( "Land_Wreck_Ikarus", "2644.600098 7.395010 2013.900757", "-68.000000 0.000000 0.000000" );
SpawnObject( "bldr_sign_rail_crossing25", "2737.794678 6.780422 1987.222290", "-90.000000 0.000000 0.000000" );
SpawnObject( "bldr_sign_rail_crossing25", "2737.752441 6.780422 1979.457153", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_sign_rail_crossing25", "2556.925781 6.780422 1994.163940", "90.000000 0.000000 -0.000000" );
SpawnObject( "bldr_sign_rail_crossing25", "2557.649170 6.780422 2002.437988", "-90.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_range_single", "2728.469482 7.261670 1983.406982", "-90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_bmp2", "2712.166260 7.817610 1950.013428", "0.000000 0.000000 10.000003" );
SpawnObject( "bldr_wreck_t72_chassis", "2675.916992 6.690366 2003.367676", "-50.000004 0.000000 0.000000" );
SpawnObject( "bldr_wreck_t72_turret", "2674.274658 7.660660 2003.220093", "-96.000023 -14.999999 0.000000" );
SpawnObject( "bldr_wreck_ural", "2661.965820 7.191035 1991.908203", "-179.999985 0.000000 -0.000000" );
SpawnObject( "Land_Train_742_Red", "2546.419922 8.036325 2012.236816", "90.000000 0.000000 -102.000000" );
SpawnObject( "bldr_plnt_t_BetulaPendula_3fb", "2533.096680 16.027084 2017.466309", "0.000000 0.000000 17.000004" );
SpawnObject( "bldr_plnt_t_BetulaPendula_3s", "2479.553223 15.588962 2011.228516", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Train_Wagon_Box", "2529.209961 10.862270 2017.529907", "90.000000 59.999996 0.000000" );
SpawnObject( "Land_Train_Wagon_Box", "2554.374512 8.506650 2016.673096", "-128.999969 20.000000 115.000000" );
SpawnObject( "Land_Train_Wagon_Box", "2534.577148 7.674497 2005.729980", "0.000000 -7.000000 0.000000" );
SpawnObject( "Land_Train_Wagon_Box", "2513.849854 8.314050 2006.410034", "104.000000 0.000000 0.000000" );
SpawnObject( "bldr_HouseB_Tenement_DayZ_airplane", "2534.622559 -18.650000 1986.398560", "176.999969 0.000000 21.000023" );
SpawnObject( "bldr_Hotel_Damaged_Airplane_Wing", "2547.642090 7.491198 2002.708740", "-4.000000 -11.000002 0.000000" );
SpawnObject( "bldr_Hotel_Damaged_Airplane_Back", "2518.764893 6.000000 2016.344727", "142.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "2520.003174 6.388670 2014.839966", "132.999939 0.000000 0.000000" );
SpawnObject( "CraterLong", "2515.747314 5.918130 2018.186157", "120.999947 0.000000 0.000000" );
SpawnObject( "CraterLong", "2502.476563 6.741749 2032.790405", "138.999985 0.000000 0.000000" );
SpawnObject( "CraterLong", "2500.429932 6.561759 2035.867554", "139.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "2533.479980 6.077028 1994.429810", "151.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "2542.345703 5.977028 1980.510010", "153.999985 0.000000 0.000000" );
SpawnObject( "CraterLong", "2539.080078 5.993562 1985.318604", "145.000015 0.000000 0.000000" );
SpawnObject( "CraterLong", "2553.159912 6.027028 2003.274536", "-12.000008 0.000000 0.000000" );
SpawnObject( "CraterLong", "2556.370117 5.907968 2019.456055", "44.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "2543.666992 6.226826 2012.758789", "96.000023 0.000000 0.000000" );
SpawnObject( "CraterLong", "2549.439209 6.369166 2012.739990", "96.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "2550.520020 6.065180 2012.360596", "91.000015 0.000000 0.000000" );
SpawnObject( "CraterLong", "2534.458496 5.708690 2013.025879", "-1.000000 -6.000000 0.000000" );
SpawnObject( "CraterLong", "2524.507080 5.653798 2017.927734", "87.000008 11.000000 0.000000" );
SpawnObject( "CraterLong", "2507.157715 6.800964 2027.390991", "139.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "2543.340576 5.577030 2011.218262", "-83.999992 0.000000 13.000002" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "2535.419922 6.756520 2001.781616", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Medium2", "2524.070068 6.400730 2001.971191", "0.000000 18.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Medium1", "2516.806885 6.679410 2004.030884", "41.000008 15.000003 7.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Medium1", "2546.475830 6.779410 1999.930786", "2.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "2553.072021 6.405979 2000.532715", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "2528.430664 6.571201 2000.905762", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Medium2", "2522.900391 6.636065 2005.705811", "0.000000 -12.999999 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Medium2", "2520.597656 6.250904 2006.668091", "-57.999992 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "2531.851563 6.747797 2003.231201", "90.000000 0.000000 0.000000" );
SpawnObject( "Wreck_UH1Y", "2537.207275 3.851010 1989.213745", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Lada_Green", "2543.965088 6.237370 2014.386597", "-179.999985 -35.999992 0.000000" );
SpawnObject( "Land_Wreck_Volha_Grey", "2556.164795 6.113135 2021.800049", "-27.000010 25.999994 0.000000" );
SpawnObject( "Land_Wreck_Uaz", "2686.552246 7.471796 1961.384277", "13.000002 0.000000 0.000000" );
SpawnObject( "bldr_wreck_decal_big", "2645.056396 6.130795 2014.635010", "-69.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_decal_small2", "2646.886963 6.091567 2014.250610", "108.999985 0.000000 0.000000" );
SpawnObject( "bldr_wreck_decal_small2", "2642.401123 6.083860 2015.973755", "-61.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_decal_small2", "2676.901367 5.922935 2005.305908", "-51.999996 0.000000 0.000000" );
SpawnObject( "Land_Wreck_V3S", "2581.086914 8.139707 2021.176514", "-87.000008 -3.000000 0.000000" );
SpawnObject( "bldr_wreck_ural", "2491.820801 7.981027 2034.435547", "-58.999989 0.000000 -90.000000" );
SpawnObject( "bldr_wreck_ural", "2694.905029 7.954140 1953.402100", "-14.000003 0.000000 0.000000" );
SpawnObject( "Land_Pipe_Big_Ground1", "2624.919922 6.430040 1975.461914", "95.000023 0.000000 0.000000" );
SpawnObject( "bldr_ship_medium_front", "2657.290039 12.102000 1739.098755", "-113.999977 0.000000 0.000000" );
SpawnObject( "bldr_ship_medium_back", "2585.631104 7.486680 1706.540039", "-119.999954 1.000000 -22.999998" );
SpawnObject( "bldr_HouseB_Tenement_DayZ_airplane", "2681.668701 -24.977800 1516.355835", "152.000015 -16.999985 39.999977" );
SpawnObject( "bldr_Hotel_Damaged_Airplane_Wing", "2690.740234 3.670180 1514.702515", "31.000006 -27.999992 -30.000004" );
SpawnObject( "bldr_Hotel_Damaged_Airplane_Back", "2718.121826 7.467743 1471.529907", "96.999977 -45.000031 179.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2717.322754 7.654369 1383.930298", "-87.000008 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2715.284180 7.566880 1387.800049", "3.000021 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2713.179932 7.567099 1391.549805", "-88.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2713.343018 7.579210 1396.300293", "-88.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2693.669922 7.547976 1394.596191", "-88.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2711.256836 7.529610 1398.109863", "2.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2695.616455 7.560087 1398.739990", "2.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2693.570068 7.560087 1391.142456", "-88.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2689.720947 7.533690 1389.220337", "4.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2681.761963 7.482250 1389.655273", "3.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2673.739990 7.497319 1390.070068", "3.000013 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2670.076416 7.509430 1390.272827", "3.000026 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2668.163574 7.509830 1388.578369", "-87.000008 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2668.050049 7.509830 1386.619263", "-87.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2667.366699 7.499892 1372.659668", "-87.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2667.510010 7.499892 1375.128296", "-87.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2671.479980 7.487781 1370.699951", "3.000015 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2679.522949 7.487781 1370.310059", "3.000026 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2687.520020 7.524497 1369.884766", "3.000016 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2695.511719 7.474897 1369.489990", "3.000010 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2703.539307 7.513979 1369.039307", "3.000015 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2711.517822 7.524349 1368.628784", "3.000006 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2714.709961 7.536860 1368.469971", "3.000025 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2716.875488 7.524750 1375.937500", "-87.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2716.600098 7.536460 1370.589966", "-87.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2709.550049 7.417499 1402.349976", "-89.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2697.430176 7.547976 1402.640015", "-89.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2664.250488 7.371480 1384.296387", "-1.000000 0.000000 -2.000006" );
SpawnObject( "bldr_wall_cncsmall_8", "2656.226807 7.086070 1384.148560", "-1.000000 0.000000 -2.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2651.981934 6.950990 1384.082764", "-1.000000 0.000000 -2.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2663.909912 7.371260 1377.283936", "-1.000000 0.000000 -2.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "2655.924561 7.109927 1377.170044", "-1.000000 0.000000 -2.000000" );
SpawnObject( "bldr_wall_cncsmall_4", "2651.091064 6.992190 1377.099976", "-1.000000 0.000000 -2.000000" );
SpawnObject( "bldr_box_c_multi", "2655.430420 6.694114 1909.514893", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Train_Wagon_Box", "2694.409912 8.620410 1797.540039", "112.999992 5.999985 63.000011" );
SpawnObject( "Land_Wreck_Caravan_WBrown", "2748.298096 7.818328 2005.555664", "92.000031 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Uaz", "2789.998535 6.622473 2010.286133", "-43.000000 0.000000 -0.000000" );
SpawnObject( "bldr_wreck_brdm", "2810.167725 6.090181 2028.123169", "-116.999947 0.000000 0.000000" );
SpawnObject( "bldr_wreck_bmp2", "2694.029785 7.150830 2005.968384", "143.000000 3.000000 8.000010" );
SpawnObject( "Land_Garage_Office", "2719.743408 10.434888 1966.359375", "-179.999985 0.000000 0.000000" );
SpawnObject( "Land_Repair_Center", "2723.423340 8.474616 1998.511597", "-179.999985 0.000000 0.000000" );
SpawnObject( "ClutterCutter2x2", "2722.574219 5.981635 1996.439819", "0.000000 0.000000 -0.000000" );
SpawnObject( "ClutterCutter2x2", "2722.574219 5.981635 1996.439819", "0.000000 0.000000 -0.000000" );
SpawnObject( "Land_Container_1Aoh", "2685.473145 7.858430 1977.549316", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Container_1Aoh", "2689.186279 7.684550 1972.574219", "51.000000 0.000000 -0.000000" );
SpawnObject( "bldr_hospital_transport_bed", "2716.746826 6.010000 2006.814087", "0.000000 -3.000000 0.000000" );
SpawnObject( "bldr_hospital_transport_bed", "2685.611328 7.022540 1956.342529", "38.000004 0.000000 90.000000" );
SpawnObject( "bldr_hospital_transport_bed", "2718.713867 7.757510 1973.669556", "0.000000 -15.000002 -179.999985" );
SpawnObject( "bldr_hospital_transport_bed", "2683.520752 6.951160 1968.491333", "0.000000 0.000000 90.000000" );
SpawnObject( "bldr_hospital_transport_bed", "2657.028564 6.000000 1994.107910", "-41.000008 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2649.515869 6.745452 2014.193237", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2661.628174 6.707561 2010.857544", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus_f", "2657.741943 6.717924 2010.381226", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2685.141357 7.364424 1996.984375", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2700.943115 6.654528 2007.926758", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2706.676758 6.904598 2006.035645", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2718.350098 6.572249 2006.477173", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2723.891602 6.677090 2004.620117", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2728.295654 7.455687 1982.652954", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2721.826172 6.715234 1989.985718", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2712.997314 7.374864 1992.376831", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2687.522217 7.364424 1978.409912", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2704.455322 7.366181 1960.667236", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2713.598633 7.400344 1953.218750", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2708.169922 7.430176 1940.274536", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2699.885986 7.427382 1943.048584", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2692.702393 7.391264 1946.820068", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Carduus", "2687.717285 7.387374 1951.857178", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaForest", "2710.543701 6.195425 2018.260986", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2711.956543 6.344409 2017.823242", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2721.546387 6.357434 2006.013794", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2721.092285 6.362686 2001.516235", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2723.490234 6.358755 2006.064331", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2701.998047 6.380549 2006.336792", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2695.195801 6.377978 2006.091431", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2687.998779 7.046625 1996.616333", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2674.056152 6.397434 1988.678101", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2656.685791 6.397434 1994.818237", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2656.085205 6.404541 2012.513916", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2640.088623 6.506311 2017.266113", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_ElytrigiaTall", "2642.933838 6.477815 2015.811279", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Elytrigia_green", "2636.786621 6.471215 2011.493774", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Elytrigia_green", "2631.748535 6.559491 2014.615723", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Hypericum_f", "2634.225098 6.857290 2014.761963", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Polypodiophyta_tall", "2627.755371 6.716086 2007.616577", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Polypodiophyta_b", "2664.828125 6.270202 2012.860840", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_leafs_spread", "2692.050049 5.973969 2008.670044", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2692.045410 6.481186 2008.568237", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2705.666992 6.492083 2008.523193", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2717.010010 7.194156 1997.393433", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2711.441895 6.891237 1998.040161", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2707.245361 7.183716 1997.477173", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2703.114258 7.029408 1999.839722", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2706.520264 7.170504 1998.075562", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2706.362305 7.140872 1998.423340", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2688.372559 7.034117 1995.856689", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2698.207031 7.183716 1994.152832", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2696.099365 7.183717 1994.183960", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2705.509277 7.183716 1990.480469", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2703.005127 7.183716 1988.533081", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2703.202881 7.183716 1988.968506", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2699.184814 7.183717 1986.206177", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2692.200439 7.009836 1974.045288", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2690.322510 7.183717 1977.488647", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2682.382813 7.274979 1982.716675", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2673.489258 6.500081 1986.314575", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Twigs", "2683.836182 6.611125 1969.135376", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Twigs", "2683.836182 6.611125 1969.135376", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2683.554688 7.135689 1969.300293", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2680.345459 7.027031 1970.557617", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2686.066406 7.163136 1963.015991", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2697.814941 7.185473 1960.608643", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2704.418457 7.185473 1962.924683", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2716.944580 7.219636 1954.880371", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2717.822510 7.249468 1943.882202", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2717.984131 7.207306 1951.505493", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2706.068359 7.173116 1949.124268", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2703.441895 7.173116 1951.217407", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2696.746338 7.048026 1951.412109", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2697.628418 7.060956 1942.809448", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2685.813721 7.207816 1945.253174", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2681.781738 7.207816 1942.398560", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2685.293213 7.057066 1955.961060", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2710.040283 7.196606 1972.561035", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2708.003174 7.203516 1966.631714", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2700.756348 7.173116 1955.971191", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2699.827148 7.197266 1971.624390", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2699.956787 7.183717 1981.206421", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2711.505859 7.194156 1989.545654", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2708.078613 7.194156 1989.636108", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2716.615234 6.494526 2007.147583", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2689.110352 6.484298 2008.901733", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2658.643555 6.534811 2010.112915", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2642.223633 6.618843 2013.786011", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2660.330322 6.514657 2008.928589", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2677.437744 6.504609 2010.514160", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2685.682617 6.490186 2009.532471", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2705.481445 8.451626 1393.633789", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2701.485107 7.066155 1411.842041", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2710.963623 8.259275 1375.640869", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2712.470703 8.438895 1379.068604", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2699.737793 8.248905 1377.462036", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2700.896973 8.398505 1376.901245", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2697.265381 8.418217 1379.324829", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2702.957031 8.433656 1386.259644", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2699.981201 8.433656 1387.346924", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2696.147949 8.432503 1393.634277", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2696.990723 8.282903 1396.615112", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2690.443604 8.409023 1379.058228", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2708.572998 8.289295 1382.671997", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2705.980225 8.398505 1374.295410", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2677.965332 8.381845 1387.990845", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2671.029053 8.115059 1374.834351", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2675.559570 8.372308 1373.991943", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2678.461182 8.416776 1383.323364", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2674.344482 8.381845 1381.288818", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2671.037598 8.381845 1381.477905", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2662.633057 7.984043 1381.299072", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2647.926758 7.971301 1382.256836", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2637.500977 12.337249 1367.204468", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2635.866455 12.125590 1369.777466", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2634.685547 12.525590 1368.563599", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2635.223145 15.085168 1356.176514", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2638.000977 14.648696 1357.523926", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2585.406006 15.697995 1388.085083", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2612.949219 22.058277 1320.379883", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2609.867432 21.984194 1318.888306", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2616.934814 22.214396 1317.873047", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2631.494873 23.083437 1317.631714", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2634.202148 23.191166 1318.630859", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2634.780518 23.216183 1315.190430", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2650.834961 23.897671 1313.302124", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2651.697754 23.934525 1311.933960", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2651.367432 23.934525 1310.438843", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2654.316162 23.903204 1313.789917", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2652.791504 23.871107 1313.871338", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2659.661865 23.943697 1311.355713", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2721.234863 23.919462 1310.063477", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2726.474854 23.880224 1299.582886", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2739.083740 24.343906 1310.565674", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2740.812744 25.695566 1284.842651", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2745.835693 26.504524 1282.249878", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2754.187256 26.507126 1284.317871", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2753.817871 26.502768 1281.487061", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2758.180420 26.496950 1281.056152", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2762.292236 26.495909 1283.538696", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2761.922607 26.494524 1280.301147", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2762.044434 26.494524 1280.576538", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2741.134766 25.753767 1285.857910", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2641.510498 23.397848 1322.911255", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2708.845703 0.330510 1484.512939", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2704.236572 7.114850 1512.403809", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2706.388672 6.252701 1509.319580", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2691.943115 0.688453 1617.932739", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2702.218018 7.246675 1942.084473", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2705.308105 7.246675 1945.389282", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_plnt_c_Lolium", "2704.149658 7.246675 1946.537476", "0.000000 0.000000 -0.000000" );
SpawnObject( "bldr_rail_crossing_barrier", "2706.380127 9.696230 1977.188110", "0.000000 0.000000 -0.000000" );
SpawnObject( "Land_Workshop2", "2622.680420 2.964150 1454.174194", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Workshop1", "2640.762939 2.975700 1486.459961", "-179.999939 0.000000 0.000000" );
SpawnObject( "bldr_Platform1_Wall", "2696.840088 11.102404 1937.828247", "90.000000 -90.000000 0.000009" );
SpawnObject( "bldr_Platform1_Wall", "2709.742920 11.102404 1937.949951", "90.000000 90.000000 0.000009" );
SpawnObject( "bldr_Platform1_Wall", "2703.290039 13.082188 1937.839966", "90.000015 0.000000 -179.999985" );
SpawnObject( "bldr_Platform1_Wall", "2697.879883 11.102404 1937.799561", "90.000000 -90.000000 0.000009" );
SpawnObject( "bldr_Platform1_Wall", "2708.733154 11.105196 1937.949951", "-89.999992 90.000000 -179.999985" );
SpawnObject( "bldr_Platform1_Wall", "2703.369873 15.652421 1937.825317", "90.000000 0.000000 0.000000" );
//kamenka,balota extra tents. balota gas station houses
SpawnObject( "bldr_hbarrier_6m", "1263.932739 6.783570 2422.122803", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1269.533325 6.776289 2422.262939", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1275.125610 6.869320 2422.265625", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1280.770630 6.853560 2422.593018", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1282.955566 6.758585 2437.593018", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1282.952881 6.853457 2426.058105", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1277.272095 6.742249 2447.650635", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1271.830078 6.746222 2447.746094", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1266.301025 6.751861 2447.796387", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "1253.709839 6.729467 2448.048096", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "1279.866333 6.705699 2451.352539", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_4", "1274.820923 8.132804 2439.222168", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "1264.469727 6.153280 2430.569824", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "1276.074829 6.212294 2429.570557", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_4", "1258.432251 8.140640 2439.943604", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "1255.384644 7.075523 2415.834717", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "1245.658325 6.844575 2426.568604", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "1253.904541 6.794574 2454.535889", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "1293.507568 6.841175 2428.911621", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tower_Small", "1271.169189 9.878871 2451.439941", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "1270.010010 9.655918 2415.839111", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_pallets", "1250.817993 6.335219 2429.032227", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_pallets", "1249.662109 6.333678 2427.270508", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_bags_long", "1260.563599 6.166518 2414.667725", "40.000000 0.000000 0.000000" );
SpawnObject( "Land_HouseBlock_1F3", "5924.683105 14.455013 2182.062744", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_House_2W02", "5890.350586 14.155231 2173.114502", "160.000000 0.000000 0.000000" );
SpawnObject( "Land_Camp_House_red", "5980.691895 12.576238 2198.664795", "160.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile1", "5879.512207 9.537195 2174.065186", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile3", "5911.850586 9.383721 2187.901611", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile4", "5904.559082 9.139012 2182.024414", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile4", "5906.072266 9.269566 2182.189697", "100.000008 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "5918.761230 9.184264 2182.695313", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container", "5916.942383 10.002282 2186.202148", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Paper", "5920.222168 10.662896 2174.713867", "130.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Plastic", "5918.889648 10.622860 2172.472900", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "5893.690918 9.595201 2176.047607", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "5928.488770 9.457253 2187.556641", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "5931.180176 10.354466 2177.387939", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "5891.022949 9.810305 2177.097412", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "5986.083496 10.407302 2186.322266", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wheel_cart_dz", "5985.437012 10.384097 2205.113770", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_woodpile_forest1", "5985.244629 11.225288 2198.047119", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_woodpile_forest1", "5977.426270 11.089205 2194.366699", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Ground_6m", "5930.162109 9.198093 2189.511475", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Ground_6m", "5905.557129 9.093679 2184.036133", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5900.012695 9.067820 2183.397217", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5908.700195 9.274743 2180.409180", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5895.938965 9.244301 2178.114990", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5878.701660 9.045435 2176.639893", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "5958.813477 9.819823 2197.217285", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5958.329590 9.520118 2199.063232", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5958.474121 9.669080 2194.663818", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tower_Small", "4902.919434 11.034092 2222.027832", "29.999998 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tower_Small", "4875.229492 11.758496 2239.055908", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4900.544434 8.075800 2229.533203", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4896.531738 8.277970 2232.726807", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4887.718262 8.426841 2239.264893", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4883.381348 8.433611 2242.852539", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4878.395508 8.422370 2245.269043", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4906.458008 7.636681 2219.905273", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4873.109863 8.606161 2239.514160", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4870.303223 8.665937 2234.507568", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4864.523926 8.608741 2226.066650", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4859.709473 8.550236 2229.317383", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4861.536621 8.458745 2218.555420", "130.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4889.418457 7.923731 2206.387451", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4886.751465 7.788207 2201.398438", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4860.718262 8.494532 2236.286377", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4903.642578 7.746847 2217.093262", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4896.845703 8.051312 2217.255127", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4861.686523 8.110685 2209.634277", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4880.525879 7.308904 2189.895996", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_artilery_rampart", "4906.736816 7.070142 2237.428467", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_artilery_rampart", "4885.871094 7.236923 2257.153076", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "4878.724609 6.781845 2272.756348", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "4906.710449 6.842725 2251.079590", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "4924.909180 5.886234 2244.032715", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "4876.718750 7.997020 2228.648682", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "4868.582520 7.702598 2214.140625", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "4889.741211 7.741622 2220.557129", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "4880.514648 7.373035 2205.949463", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_medical_table", "4878.300293 7.867821 2220.826172", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_medical_table", "4868.607910 7.430377 2207.283203", "80.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c", "4884.585938 7.747550 2218.218262", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c", "4873.241699 7.745305 2216.282959", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "4877.298828 7.769948 2217.319824", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "4892.024414 7.780609 2228.000977", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_boxwooden", "4880.628418 8.449139 2231.389893", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_boxwooden", "4875.607910 7.716606 2202.046387", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_bulldozer", "4855.681152 9.087331 2240.689941", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_hmmwv", "4895.286621 7.717674 2196.347656", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_hmmwv", "4869.639160 8.082154 2260.605225", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "4891.999023 7.914042 2251.589844", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "4855.920410 8.398137 2236.230225", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets3", "4870.246094 8.136673 2240.704346", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets3", "4902.779785 7.496305 2230.006592", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets3", "4892.744629 7.350393 2204.877686", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4893.275391 7.475307 2204.173584", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4886.251953 8.231180 2230.622314", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4871.792969 8.281126 2242.642578", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4880.979492 7.585314 2202.371338", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4874.674316 8.319366 2225.722412", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_boardspack2", "4845.770996 7.687158 2223.035156", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_boardspack2", "4850.292480 8.140657 2226.380127", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_boardspack2", "4901.393066 7.692161 2206.362793", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "4888.650879 7.428646 2202.732910", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "4887.863770 8.023035 2240.894287", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "4868.076172 8.289068 2235.006592", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "4860.644531 7.595070 2208.645996", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "1257.633423 6.160000 2423.712646", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "1252.162476 6.159550 2424.273682", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile1", "1276.776489 6.681421 2420.628174", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile1", "1283.867676 6.579197 2437.970459", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big3", "4864.171875 7.741805 2193.326660", "29.999998 0.000000 0.000000" );
//balota
SpawnObject( "Land_City_FireStation", "4752.363770 8.760956 2575.952148", "-179.999985 0.000000 0.000000" );
SpawnObject( "Land_Mil_Guardhouse2", "4847.837402 11.153448 2580.158936", "-10.000001 0.000000 0.000000" );
SpawnObject( "bldr_Airfield_Lamp", "4857.051758 22.120039 2570.510010", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container", "4857.665527 10.457524 2567.965820", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "4836.189453 9.838602 2574.301758", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "4834.982422 10.238881 2562.523193", "88.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "4836.643555 11.092972 2539.591797", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "4842.920410 11.015287 2526.713867", "76.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "4850.791504 10.796358 2507.444092", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "4863.315918 10.025118 2487.645752", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "4855.421875 10.445539 2497.960449", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "4837.750488 11.181894 2520.279053", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "4831.958496 9.979462 2568.625732", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "4831.630371 10.812863 2548.584961", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "4859.089355 10.236279 2530.586914", "98.999992 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "4872.809570 9.977926 2539.843506", "22.999998 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "4868.606445 10.059797 2507.927979", "-59.999962 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "4888.831543 9.983765 2520.255127", "33.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "4846.132813 10.255177 2552.527100", "55.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "4863.143066 9.995918 2560.537354", "88.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "4862.462402 9.745950 2515.938477", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "4872.117676 9.497766 2551.207520", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "4844.784668 9.307096 2564.624512", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_1", "4885.865723 11.497149 2529.356445", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_1", "4870.632813 11.441567 2497.966553", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_1", "4867.658203 11.560353 2566.165283", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_5", "4884.309082 11.492998 2510.940430", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big3", "4859.330078 10.888555 2542.703125", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "4858.109375 10.431466 2519.113037", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "4850.103516 10.224619 2552.244873", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "4883.792969 10.065725 2516.233154", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Ikarus", "4825.307129 10.210465 2594.982178", "100.000008 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Lada_Red", "4825.027344 9.532630 2578.625488", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Lada_Green", "4830.094727 9.571982 2587.392090", "66.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_S1023_Beige", "4807.511230 9.685947 2588.347656", "-137.999985 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Blue", "4825.396484 9.512877 2586.171631", "-100.000008 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Grey", "4831.338867 9.746671 2583.075439", "-79.999977 0.000000 0.000000" );
SpawnObject( "bldr_wreck_s120_red", "4808.779785 9.340745 2582.626221", "-100.000008 0.000000 0.000000" );
SpawnObject( "bldr_wreck_s120_red", "4796.289551 9.327969 2582.133789", "-129.999985 0.000000 0.000000" );
SpawnObject( "bldr_wreck_ural", "4827.025391 11.073459 2552.433594", "59.999996 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Caravan_MGreen", "4791.247559 11.971975 2544.703613", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Police", "4836.391602 11.242345 2525.288818", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Police", "4838.193848 10.515440 2590.376709", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_guardshed", "4833.677246 10.862244 2546.437988", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_mil_guardshed", "4844.394043 10.960979 2517.165039", "59.999996 0.000000 0.000000" );
SpawnObject( "Land_Mil_ATC_Small", "5007.414063 19.946209 2527.607178", "50.000004 0.000000 0.000000" );
SpawnObject( "Land_Mil_Barracks2", "4961.131836 11.046027 2579.094238", "140.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Barracks2", "4986.522949 10.950942 2554.383057", "140.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_flagpole", "4996.725098 12.997725 2535.958496", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Barracks5", "5159.621094 14.809422 2340.632324", "-130.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "5142.165527 8.976948 2354.630859", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_boxwooden", "5166.102539 10.520731 2354.664063", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_boxwooden", "5162.039551 9.486649 2324.251709", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Conc1_Amp", "5169.441406 12.514999 2323.656982", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Barracks_Round", "5105.729492 10.588394 2413.614258", "50.000004 0.000000 0.000000" );
SpawnObject( "Land_Mil_Barracks_Round", "5114.878418 10.477352 2402.710449", "50.000004 0.000000 0.000000" );
SpawnObject( "Land_Mil_Barracks_Round", "5124.668457 10.528580 2391.750732", "50.000004 0.000000 0.000000" );
SpawnObject( "Land_City_Hospital", "5143.650391 17.001099 2223.372803", "-129.999985 0.000000 0.000000" );
SpawnObject( "bldr_rds_runwayold_40_main", "5139.839844 9.000000 2219.870117", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_hospital_bench", "5159.913574 9.500000 2220.015869", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_hospital_transport_bed", "5155.417969 9.500000 2226.843506", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hospital_transport_bed", "5150.176758 9.500000 2238.942627", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_hospital_bench", "5142.939941 9.362671 2240.420654", "-179.999985 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile1", "5160.622559 9.822398 2224.496826", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile4", "5143.748047 9.694919 2234.255859", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_MassGrave", "5126.075684 9.204092 2247.107666", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Ikarus", "5133.737305 10.360390 2210.233154", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "5127.500977 9.000000 2229.708496", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container", "5134.562012 9.841518 2228.351807", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile4", "5135.805176 9.000000 2226.312256", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile5", "5161.166016 9.588645 2207.669434", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_S1023_Blue", "5152.280273 10.499133 2237.187256", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile3", "5160.615234 9.838595 2215.544434", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5069.629883 9.424844 2389.534424", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5070.437988 9.381974 2385.467529", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5070.437988 9.381965 2385.466797", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5073.074707 9.377151 2380.640869", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5076.458496 9.427972 2381.135498", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5074.508789 9.463143 2387.077148", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5069.255859 9.338154 2381.218506", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5071.840332 9.343065 2377.749268", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5075.876465 9.386206 2376.955322", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5079.959473 9.478495 2382.101074", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5081.518555 9.460639 2378.406250", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5073.334961 9.477071 2391.646973", "0.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "5056.660156 9.339850 2381.219971", "0.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "5083.370117 9.527030 2389.909912", "0.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "5070.140137 9.369190 2359.060059", "0.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "5048.689941 9.518200 2410.500000", "3.000030 0.000000 0.000000" );
SpawnObject( "CraterLong", "5077.640137 9.521010 2385.270020", "179.999985 0.000000 0.000000" );
SpawnObject( "CraterLong", "5077.359863 9.527030 2422.080078", "0.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "5072.740234 9.527030 2407.469971", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Ruin_Rubble", "5096.640137 9.388590 2389.110107", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete1", "5059.905762 10.078014 2409.008789", "112.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Bricks3", "5075.317871 8.917331 2380.229980", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Bricks1", "5033.930176 9.757930 2402.870117", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Bricks1", "4412.990234 6.863010 2427.929932", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Bricks1", "4412.990234 6.863010 2427.929932", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Bricks1", "5055.189941 9.680660 2387.469971", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Bricks1", "5063.479980 9.863820 2423.389893", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Bricks1", "5059.479980 9.863820 2424.580078", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Bricks1", "5079.850098 9.729130 2357.639893", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete2", "5090.029785 9.700000 2370.570068", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete2", "5039.799805 9.690000 2404.040039", "-72.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete2", "5098.759766 9.701190 2379.120117", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "5095.240234 10.195500 2373.500000", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "5075.299805 10.024800 2358.030029", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "5073.310059 10.030700 2367.439941", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "5070.259766 10.195500 2402.909912", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "5067.549805 10.195500 2409.870117", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete2", "5053.600098 9.600000 2403.330078", "150.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete1", "5062.279785 9.888190 2377.550049", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete3", "5079.020020 9.578900 2397.260010", "20.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete3", "5092.109863 9.578900 2397.189941", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete3", "5073.729980 9.578900 2420.320068", "77.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete3", "5051.029785 9.419240 2394.449951", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete3", "5063.959961 9.406960 2369.459961", "80.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Bricks1", "5045.359863 9.862940 2414.669922", "0.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "5067.620117 9.423490 2461.580078", "0.000000 0.000000 0.000000" );
SpawnObject( "CraterLong", "5119.379883 9.393260 2285.939941", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5074.810059 9.488540 2394.899902", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5071.089844 9.489080 2398.820068", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5064.560059 9.420450 2394.110107", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5059.750000 9.396190 2395.830078", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5061.049805 9.345010 2390.669922", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5066.339844 9.400200 2390.969971", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5067.870117 9.416910 2390.699951", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5067.839844 9.400370 2389.489990", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5054.439941 9.358710 2395.729980", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5064.330078 9.476880 2398.169922", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5069.089844 9.479250 2396.679932", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5067.229980 9.433700 2392.590088", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5072.520020 9.485380 2396.000000", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5069.720215 9.476690 2395.409912", "0.000000 0.000000 0.000000" );
SpawnObject( "ChristmasTree", "5064.339844 17.157200 2394.250000", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete2", "5073.009766 9.200000 2377.820068", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete2", "5082.140137 9.700000 2377.040039", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete2", "5043.129883 9.600000 2394.370117", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5064.169922 9.485600 2403.040039", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5059.330078 9.459610 2400.600098", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5067.669922 9.398950 2389.550049", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5070.930176 9.453580 2390.290039", "0.000000 0.000000 0.000000" );
SpawnObject( "Mosin9130", "5055.990234 9.388166 2394.820068", "0.000000 89.965729 0.000000" );
SpawnObject( "Mosin9130", "5065.990234 9.520626 2404.850098", "45.000000 -89.886353 -31.277702" );
SpawnObject( "Mosin9130", "5075.220215 9.520626 2395.709961", "45.000000 -89.886353 50.353195" );
SpawnObject( "AmmoBox_762x54_20Rnd", "5064.580078 9.511994 2405.550049", "0.000000 -89.965729 0.000000" );
SpawnObject( "AmmoBox_762x54_20Rnd", "5065.020020 9.511994 2405.500000", "0.000000 -89.965729 0.000000" );
SpawnObject( "AmmoBox_762x54_20Rnd", "5075.770020 9.511994 2395.629883", "0.000000 -89.965729 0.000000" );
SpawnObject( "AmmoBox_762x54_20Rnd", "5075.669922 9.512136 2396.330078", "0.000000 -89.965729 -179.999985" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "5075.879883 9.511207 2395.860107", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "5075.790039 9.510928 2395.959961", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "5064.799805 9.511207 2405.199951", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "5055.180176 9.388543 2395.979980", "-153.434998 89.145218 -42.456089" );
SpawnObject( "AmmoBox_762x54_20Rnd", "5055.959961 9.385610 2395.280029", "26.564999 -89.145218 146.725006" );
SpawnObject( "AmmoBox_762x54_20Rnd", "5055.299805 9.383999 2395.500000", "-153.434998 89.145218 -121.967010" );
SpawnObject( "Ammo_762x54", "5055.540039 9.388491 2396.060059", "156.335007 -0.546363 0.656438" );
SpawnObject( "Ammo_762x54", "5065.459961 9.507420 2404.610107", "170.545990 0.000000 0.000000" );
SpawnObject( "Ammo_762x54", "5075.569824 9.507420 2394.860107", "-62.371300 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5079.430176 9.489310 2397.280029", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5078.740234 9.489310 2398.770020", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5033.799805 9.887300 2401.679932", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5091.830078 9.489310 2396.939941", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5091.839844 9.489310 2396.850098", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5073.310059 9.361170 2377.820068", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5075.459961 9.389700 2378.229980", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter2x2", "5073.560059 9.367490 2378.310059", "0.000000 0.000000 0.000000" );
SpawnObject( "M4A1", "5060.080078 9.387667 2391.989990", "39.805500 -89.402252 56.677902" );
SpawnObject( "M4A1", "5060.290039 9.415947 2394.209961", "26.564999 -89.145218 116.050003" );
SpawnObject( "M4_PlasticHndgrd", "5060.629883 9.396462 2392.060059", "39.805500 -89.402252 -97.750710" );
SpawnObject( "M4_PlasticHndgrd", "5060.660156 9.420986 2394.060059", "26.564999 -89.145218 -79.369499" );
SpawnObject( "M4_PlasticHndgrd", "5070.299805 9.515459 2393.330078", "28.610298 -89.042633 -124.428001" );
SpawnObject( "M4_OEBttstck_Black", "5070.560059 9.506101 2393.040039", "-151.389999 89.042633 128.257004" );
SpawnObject( "M4_OEBttstck_Black", "5060.399902 9.414621 2394.469971", "26.564999 -89.145218 170.929001" );
SpawnObject( "M4_OEBttstck_Black", "5060.430176 9.384269 2391.860107", "39.805500 -89.402252 -87.851700" );
SpawnObject( "M4_CarryHandleOptic", "5060.379883 9.382057 2392.129883", "-140.195007 89.402252 -133.248993" );
SpawnObject( "M4_CarryHandleOptic", "5060.390137 9.404971 2393.989990", "-153.434998 89.145218 154.897003" );
SpawnObject( "M4_CarryHandleOptic", "5070.560059 9.500933 2392.639893", "-151.389999 89.042633 -78.962303" );
SpawnObject( "Mag_STANAG_30Rnd", "5060.390137 9.369032 2391.169922", "39.805500 -89.402252 102.163002" );
SpawnObject( "Mag_STANAGCoupled_30Rnd", "5060.810059 9.422435 2392.229980", "-140.195007 89.402252 40.933102" );
SpawnObject( "Mag_STANAGCoupled_30Rnd", "5069.706543 9.606219 2392.574463", "-153.434998 89.824165 118.870003" );
SpawnObject( "Mag_STANAG_30Rnd", "5070.029785 9.494123 2392.969971", "45.000000 -89.780594 -47.593102" );
SpawnObject( "M4A1", "5070.169922 9.508291 2392.469971", "-135.000015 89.780594 -84.043602" );
SpawnObject( "SKS", "5059.220215 9.344637 2387.530029", "-140.195007 89.402252 -68.603897" );
SpawnObject( "SKS", "5069.958008 9.610763 2398.986572", "-178.855988 80.398697 -137.320999" );
SpawnObject( "SKS", "5059.000000 9.509193 2401.030029", "40.601200 -89.294731 173.505005" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "5058.689941 9.509229 2400.800049", "40.601200 -89.294731 79.898399" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "5059.120117 9.511176 2400.639893", "-139.399002 89.294731 113.330002" );
SpawnObject( "Ammo_762x39", "5059.250000 9.477350 2401.110107", "67.457703 0.628324 0.318159" );
SpawnObject( "Ammo_762x39", "5059.109863 9.478284 2401.330078", "-146.444000 -0.698964 0.086378" );
SpawnObject( "ClutterCutter6x6", "5073.618164 9.489314 2420.330811", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5063.199707 9.336987 2367.904541", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5058.910156 9.310354 2387.185059", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5069.243164 9.426715 2390.061523", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5070.229004 9.470606 2392.755127", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5063.768555 9.330126 2386.332520", "0.000000 0.000000 0.000000" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "5059.543457 9.364201 2387.213135", "-153.436050 89.824165 17.439648" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "5058.902832 9.364150 2387.514893", "-153.436050 89.824165 -129.671799" );
SpawnObject( "Ammo_762x39", "5058.937500 9.323999 2387.162109", "30.498877 0.170414 0.011722" );
SpawnObject( "Ammo_762x39", "5059.378418 9.324054 2386.962158", "106.010262 0.031286 0.167927" );
SpawnObject( "AmmoBox_762x39_20Rnd", "5059.504883 9.375623 2387.195801", "-153.436050 89.824165 -169.454483" );
SpawnObject( "AmmoBox_762x39_20Rnd", "5058.776855 9.345898 2386.661865", "-153.436050 89.824165 146.653778" );
SpawnObject( "Ammo_762x39", "5059.043945 9.469478 2400.443115", "-163.408386 -0.643351 0.286558" );
SpawnObject( "Ammo_762x39", "5059.192383 9.491968 2401.154785", "-83.872292 -0.398654 -0.580597" );
SpawnObject( "AmmoBox_762x39_20Rnd", "5058.676270 9.490098 2400.376221", "40.601166 -89.294731 4.826568" );
SpawnObject( "AmmoBox_762x39_20Rnd", "5059.611816 9.502743 2401.008545", "-139.398834 89.294731 -118.719803" );
SpawnObject( "AmmoBox_762x39_20Rnd", "5070.401855 9.524181 2398.478027", "45.000000 -89.780594 -20.455988" );
SpawnObject( "AmmoBox_762x39_20Rnd", "5069.445313 9.522924 2398.962402", "-137.200562 77.356514 -102.626923" );
SpawnObject( "Ammo_762x39", "5070.703125 9.502460 2399.099365", "-32.689838 7.998430 -5.328541" );
SpawnObject( "Ammo_762x39", "5069.979492 9.499180 2398.581299", "-51.626480 0.034958 -0.167211" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "5070.201172 9.539024 2398.592773", "-135.000015 89.780594 123.175819" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "5070.046387 9.537087 2398.020752", "45.000000 -89.780594 -85.310272" );
SpawnObject( "AKM", "5063.616699 9.356597 2386.644531", "45.000000 -89.350777 -67.260811" );
SpawnObject( "AKM", "5063.873047 9.526170 2400.599121", "-135.000015 89.886353 -17.926039" );
SpawnObject( "AKM", "5074.408691 9.523385 2391.065430", "-116.565041 89.824165 84.293228" );
SpawnObject( "AK_WoodHndgrd", "5074.918457 9.512276 2391.069580", "-116.565041 89.824165 11.495595" );
SpawnObject( "AK_WoodBttstck", "5074.631836 9.510350 2391.664795", "63.434948 -89.824165 -155.602173" );
SpawnObject( "AK_WoodBttstck", "5062.586914 9.354088 2386.713135", "-135.000015 89.350777 -23.439571" );
SpawnObject( "AK_WoodBttstck", "5063.499512 9.512013 2401.176270", "45.000000 -89.886353 -13.688037" );
SpawnObject( "AK_WoodHndgrd", "5063.128906 9.354586 2386.198486", "45.000000 -89.350777 -92.815788" );
SpawnObject( "AK_WoodHndgrd", "5063.507813 9.512814 2400.302734", "-135.000015 89.886353 -177.276627" );
SpawnObject( "Mag_AKM_Drum75Rnd_Black", "5064.622070 9.549389 2404.211914", "-70.833778 -0.047080 -90.097237" );
SpawnObject( "Mag_AKM_Drum75Rnd_Black", "5053.622070 9.464026 2396.503906", "165.665039 -0.055103 -89.907066" );
SpawnObject( "Mag_AKM_Drum75Rnd_Black", "5067.972656 9.586760 2400.043701", "-108.875099 -0.097002 89.952423" );
SpawnObject( "Mag_AKM_Palm30Rnd", "5063.943359 9.511216 2399.921631", "-153.434952 89.824165 -22.462824" );
SpawnObject( "Mag_AKM_Palm30Rnd", "5064.004883 9.513092 2401.186279", "45.000000 -89.886353 -35.232887" );
SpawnObject( "Mag_AKM_Palm30Rnd", "5064.865234 9.512152 2399.811523", "-153.434952 89.824165 172.912994" );
SpawnObject( "Mag_AKM_Palm30Rnd", "5075.173828 9.512029 2391.545410", "63.434948 -89.824165 116.691292" );
SpawnObject( "Mag_AKM_Palm30Rnd", "5074.192871 9.509634 2391.711426", "63.434948 -89.824165 143.443817" );
SpawnObject( "Mag_AKM_Palm30Rnd", "5074.795898 9.509807 2390.638428", "-116.565041 89.824165 91.632309" );
SpawnObject( "Mag_AKM_Palm30Rnd", "5062.240234 9.345140 2385.920654", "39.805485 -89.402252 -60.945343" );
SpawnObject( "Mag_AKM_Palm30Rnd", "5063.143066 9.361554 2387.113525", "-135.000015 89.350777 171.002365" );
SpawnObject( "Mag_AKM_Palm30Rnd", "5063.663086 9.358619 2386.226074", "45.000000 -89.350777 30.092012" );
SpawnObject( "UMP45", "5060.264648 9.461417 2398.134033", "-151.389679 89.042633 -177.161026" );
SpawnObject( "UMP45", "5067.315918 9.358178 2382.470703", "50.194519 -89.402252 167.306931" );
SpawnObject( "UMP45", "5073.202637 9.516128 2397.400146", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_UMP_25Rnd", "13141.093750 8.080108 5476.217285", "138.813782 89.187469 -65.145477" );
SpawnObject( "Mag_UMP_25Rnd", "5067.848145 9.363896 2382.586182", "50.194519 -89.402252 69.679413" );
SpawnObject( "Mag_UMP_25Rnd", "5067.195313 9.354362 2381.916504", "-129.805466 89.402252 30.612316" );
SpawnObject( "Mag_UMP_25Rnd", "5067.240723 9.363303 2383.203125", "-129.805466 89.402252 48.762283" );
SpawnObject( "Mag_UMP_25Rnd", "5060.299805 9.468581 2398.556396", "-151.389679 89.042633 145.055817" );
SpawnObject( "Mag_UMP_25Rnd", "5059.586914 9.455209 2398.033447", "-151.389679 89.042633 96.220100" );
SpawnObject( "Mag_UMP_25Rnd", "5061.208984 9.466408 2397.912354", "-151.389679 89.042633 -0.978900" );
SpawnObject( "Mag_UMP_25Rnd", "5073.108887 9.517330 2397.928467", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_UMP_25Rnd", "5072.372559 9.516486 2397.365234", "45.000000 -89.780594 -75.510162" );
SpawnObject( "Mag_UMP_25Rnd", "5073.158691 9.517330 2397.039063", "0.000000 89.965729 0.000000" );
SpawnObject( "SVD", "5064.999023 9.414904 2390.906982", "-135.000015 88.919716 80.442574" );
SpawnObject( "Mag_SVD_10Rnd", "5065.500488 9.414517 2391.013672", "45.000000 -88.919716 162.126480" );
SpawnObject( "Mag_SVD_10Rnd", "5065.128906 9.401219 2390.384277", "-135.000015 88.919716 89.649384" );
SpawnObject( "Mag_SVD_10Rnd", "5064.365723 9.398752 2390.966064", "45.000000 -88.919716 -171.099014" );
SpawnObject( "Mag_SVD_10Rnd", "5065.024902 9.415203 2391.540771", "45.000000 -88.919716 -35.842205" );
SpawnObject( "SVD", "5066.649414 9.511936 2397.595215", "-153.434952 89.824165 -63.289276" );
SpawnObject( "Mag_SVD_10Rnd", "5066.372559 9.504674 2398.211914", "-153.434952 89.824165 -156.126572" );
SpawnObject( "Mag_SVD_10Rnd", "5067.205078 9.504253 2397.656494", "26.565048 -89.824165 -160.986969" );
SpawnObject( "Mag_SVD_10Rnd", "5066.817383 9.505507 2398.302246", "-153.434952 89.824165 -129.989334" );
SpawnObject( "Mag_SVD_10Rnd", "5066.981445 9.504756 2397.938232", "-153.434952 89.824165 117.935738" );
SpawnObject( "AK74", "5056.017090 9.447890 2398.317627", "-153.434952 89.145218 58.027912" );
SpawnObject( "AK74_Hndgrd", "5056.027832 9.430196 2398.003174", "26.565048 -89.145218 29.739048" );
SpawnObject( "AK74_WoodBttstck", "5056.083008 9.445743 2399.140137", "-151.389679 89.042633 98.076851" );
SpawnObject( "Mag_AK74_30Rnd", "5055.536133 9.431681 2398.750000", "-153.434952 89.145218 103.534668" );
SpawnObject( "Mag_AK74_30Rnd", "5055.259766 9.421665 2398.136963", "-153.434952 89.145218 -90.588692" );
SpawnObject( "Mag_AK74_30Rnd", "5056.817871 9.438149 2398.587646", "28.610321 -89.042633 69.409332" );
SpawnObject( "Mag_AK74_30Rnd", "5056.296387 9.423491 2397.789551", "26.565048 -89.145218 -55.132919" );
SpawnObject( "AK74", "5072.722656 9.526522 2394.645264", "-135.000015 89.780594 -159.785706" );
SpawnObject( "AK74_WoodBttstck", "5073.223633 9.513564 2394.695801", "45.000000 -89.780594 -94.143547" );
SpawnObject( "AK74_Hndgrd", "5072.638672 9.511111 2394.040771", "45.000000 -89.780594 126.721336" );
SpawnObject( "Mag_AK74_30Rnd", "5072.207031 9.505210 2394.208008", "-135.000015 89.780594 9.903312" );
SpawnObject( "Mag_AK74_30Rnd", "5072.851563 9.508439 2394.944092", "45.000000 -89.780594 174.952789" );
SpawnObject( "Mag_AK74_30Rnd", "5071.942383 9.506309 2395.054688", "45.000000 -89.780594 -133.343964" );
SpawnObject( "ClutterCutter6x6", "5070.522461 9.383553 2385.492676", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "5067.722656 9.377182 2387.866943", "0.000000 0.000000 0.000000" );
SpawnObject( "AK74", "5067.213867 9.422372 2388.448242", "-135.000015 88.919716 -125.150848" );
SpawnObject( "Mag_AK74_30Rnd", "5066.926270 9.392157 2387.803467", "45.000000 -89.350777 82.652237" );
SpawnObject( "Mag_AK74_30Rnd", "5066.144531 9.390430 2388.369385", "45.000000 -89.350777 141.925247" );
SpawnObject( "Mag_AK74_30Rnd", "5067.364258 9.411918 2388.955322", "45.000000 -88.919716 98.370888" );
SpawnObject( "AK74_WoodBttstck", "5067.127930 9.409945 2388.641113", "-135.000015 88.919716 136.342712" );
SpawnObject( "AK74_Hndgrd", "5066.256348 9.391742 2387.715576", "45.000000 -89.350777 49.252743" );
SpawnObject( "FAL", "5058.757813 9.426611 2396.193604", "26.565048 -89.145218 -92.850136" );
SpawnObject( "Mag_FAL_20Rnd", "5058.194824 9.416039 2396.284180", "26.565048 -89.145218 78.739563" );
SpawnObject( "Mag_FAL_20Rnd", "5058.632324 9.423914 2396.628906", "28.610321 -89.042633 -83.931526" );
SpawnObject( "Mag_FAL_20Rnd", "5058.860352 9.412228 2395.665527", "26.565048 -89.145218 156.393326" );
SpawnObject( "Fal_FoldingBttstck", "5059.159668 9.433228 2396.731934", "28.610321 -89.042633 -48.323753" );
SpawnObject( "FAL", "5067.682617 9.473592 2392.648682", "42.273613 -88.864250 -11.340757" );
SpawnObject( "Mag_FAL_20Rnd", "5067.234863 9.457991 2392.534912", "42.273613 -88.864250 82.452377" );
SpawnObject( "Mag_FAL_20Rnd", "5067.957031 9.464860 2392.331299", "45.000000 -88.919716 -79.624062" );
SpawnObject( "Mag_FAL_20Rnd", "5067.466309 9.473665 2393.393066", "42.273613 -88.864250 19.729528" );
SpawnObject( "Fal_FoldingBttstck", "5067.509277 9.458487 2392.030029", "45.000000 -88.919716 81.934845" );
SpawnObject( "VSS", "5065.708496 9.365766 2384.917480", "50.194519 -89.402252 -110.886375" );
SpawnObject( "Mag_VSS_10Rnd", "5068.686035 9.595545 2376.159668", "-66.635986 75.003792 160.743958" );
SpawnObject( "Mag_VSS_10Rnd", "5065.083496 9.358694 2385.062256", "-135.000015 89.350777 111.542557" );
SpawnObject( "Mag_VSS_10Rnd", "5065.987793 9.362578 2384.600830", "50.194519 -89.402252 100.398148" );
SpawnObject( "Mag_VSS_10Rnd", "5064.802246 9.352986 2384.556396", "-129.805466 89.402252 103.992241" );
SpawnObject( "Mag_VSS_10Rnd", "5054.557617 9.408370 2397.299561", "26.565048 -89.145218 36.089352" );
SpawnObject( "Mag_VSS_10Rnd", "5054.542480 9.400029 2396.667480", "-153.434952 89.145218 82.308434" );
SpawnObject( "Mag_VSS_10Rnd", "5055.258301 9.406719 2396.825439", "26.565048 -89.145218 138.045578" );
SpawnObject( "VSS", "5054.811523 9.409039 2396.973633", "26.565048 -89.145218 -114.779510" );
SpawnObject( "AKS74U", "5057.530762 9.377501 2392.697266", "26.565048 -89.145218 -83.939957" );
SpawnObject( "Mag_AK74_30Rnd", "5057.097168 9.366391 2393.072754", "-153.434952 89.145218 49.194626" );
SpawnObject( "Mag_AK74_30Rnd", "5058.006836 9.370038 2392.891602", "-153.434952 89.145218 -143.379593" );
SpawnObject( "Mag_AK74_30Rnd", "5057.697754 9.360728 2392.246338", "-140.194519 89.402252 93.493332" );
SpawnObject( "Mag_AK74_30Rnd", "5072.313477 9.618197 2388.586182", "45.000000 -88.919716 5.544561" );
SpawnObject( "Mag_AK74_30Rnd", "5073.236816 9.494148 2388.892334", "-132.273621 88.864250 -21.061014" );
SpawnObject( "Mag_AK74_30Rnd", "5073.458984 9.481853 2387.760010", "47.726387 -88.864250 23.791204" );
SpawnObject( "AKS74U", "5072.791504 9.485298 2387.726318", "47.726387 -88.864250 4.344809" );
SpawnObject( "ClutterCutter6x6", "5060.960449 9.483188 2402.904785", "0.000000 0.000000 0.000000" );
SpawnObject( "AKS74U", "5061.366211 9.521521 2402.641846", "0.000000 -89.913765 -41.386757" );
SpawnObject( "Mag_AK74_30Rnd", "5060.689941 9.508852 2403.061768", "-179.999985 89.913765 -36.470226" );
SpawnObject( "Mag_AK74_30Rnd", "5060.929199 9.507528 2402.069092", "-179.999985 89.913765 -35.997810" );
SpawnObject( "Mag_AK74_30Rnd", "5061.853516 9.508277 2402.970703", "0.000000 -89.913765 -141.079742" );
SpawnObject( "AKS74U_Bttstck", "5061.226563 9.513968 2403.210693", "-179.999985 89.913765 64.497192" );
SpawnObject( "AKS74U_Bttstck", "5073.144531 9.470576 2386.857178", "-132.273621 88.864250 -179.510666" );
SpawnObject( "AKS74U_Bttstck", "5057.282227 9.378083 2393.488525", "-153.434952 89.145218 104.490501" );
SpawnObject( "CZ61", "5068.493652 9.400395 2386.833984", "45.000000 -88.919716 -138.270859" );
SpawnObject( "Mag_CZ61_20Rnd", "5068.026855 9.386513 2386.494873", "45.000000 -89.350777 174.533646" );
SpawnObject( "Mag_CZ61_20Rnd", "5068.840332 9.395344 2386.534912", "45.000000 -88.919716 -45.246788" );
SpawnObject( "Mag_CZ61_20Rnd", "5068.474609 9.387475 2386.099854", "-135.000015 89.350777 -98.445511" );
SpawnObject( "CZ61", "5061.616699 9.364166 2389.237549", "-140.194519 89.402252 -6.957718" );
SpawnObject( "Mag_CZ61_20Rnd", "5061.555664 9.355296 2388.906494", "39.805485 -89.402252 153.580246" );
SpawnObject( "Mag_CZ61_20Rnd", "5061.101074 9.357424 2389.483643", "-140.194519 89.402252 178.738861" );
SpawnObject( "Mag_CZ61_20Rnd", "5061.887695 9.364660 2389.800537", "39.805485 -89.402252 60.149658" );
SpawnObject( "Mag_CZ61_20Rnd", "5065.584961 9.507724 2402.050049", "-135.000015 89.886353 177.098206" );
SpawnObject( "Mag_CZ61_20Rnd", "5065.141113 9.508033 2402.725342", "-135.000015 89.886353 99.960823" );
SpawnObject( "Mag_CZ61_20Rnd", "5065.893066 9.508460 2402.700195", "45.000000 -89.886353 -118.863373" );
SpawnObject( "CZ61", "5065.537598 9.513369 2402.504883", "45.000000 -89.886353 -97.406433" );
SpawnObject( "MP5K", "5069.190430 9.456702 2390.352295", "-135.000015 88.919716 -149.145737" );
SpawnObject( "MP5k_StockBttstck", "5068.839355 9.458893 2390.867676", "-135.000015 88.919716 -57.473038" );
SpawnObject( "MP5_RailHndgrd", "5068.809082 9.451944 2389.798828", "45.000000 -88.919716 -55.618195" );
SpawnObject( "Mag_MP5_30Rnd", "5069.735352 9.452312 2390.324951", "-135.000015 88.919716 59.128433" );
SpawnObject( "Mag_MP5_30Rnd", "5069.296875 9.454093 2390.896729", "-135.000015 88.919716 5.700289" );
SpawnObject( "Mag_MP5_30Rnd", "5069.441895 9.441328 2389.818115", "45.000000 -88.919716 -54.398685" );
SpawnObject( "Mag_MP5_30Rnd", "5057.958984 9.329613 2389.177979", "26.563955 -89.824165 -162.787674" );
SpawnObject( "MP5K", "5058.168945 9.344351 2389.656006", "39.805485 -89.402252 -114.593231" );
SpawnObject( "Mag_MP5_30Rnd", "5057.520020 9.330892 2389.760010", "-153.436050 89.824165 152.235016" );
SpawnObject( "Mag_MP5_30Rnd", "5058.448730 9.339027 2390.149658", "-140.194519 89.402252 137.033478" );
SpawnObject( "MP5k_StockBttstck", "5058.548828 9.347320 2389.691162", "-140.194519 89.402252 3.611455" );
SpawnObject( "MP5_PlasticHndgrd", "5057.870605 9.347858 2390.342773", "39.805485 -89.402252 38.824543" );
SpawnObject( "MP5K", "5066.051270 9.511005 2400.107178", "-135.000015 89.886353 -108.972542" );
SpawnObject( "MP5_PlasticHndgrd", "5065.889160 9.511044 2400.412842", "45.000000 -89.886353 -8.128811" );
SpawnObject( "MP5k_StockBttstck", "5066.584961 9.511187 2399.854736", "-153.434952 89.824165 34.514015" );
SpawnObject( "Mag_MP5_30Rnd", "5066.183594 9.498689 2399.602051", "-153.434952 89.824165 128.384048" );
SpawnObject( "Mag_MP5_30Rnd", "5065.785645 9.498439 2399.707520", "-153.434952 89.824165 -53.774799" );
SpawnObject( "Mag_MP5_30Rnd", "5066.298828 9.500788 2400.664063", "-135.000015 89.886353 78.580803" );
SpawnObject( "Mp133Shotgun", "5070.456543 9.514310 2396.037598", "45.000000 -89.780594 -119.544708" );
SpawnObject( "Mp133Shotgun", "5072.829590 9.609663 2390.138672", "-129.805466 89.402252 -39.317783" );
SpawnObject( "Mp133Shotgun", "5056.878418 9.424349 2396.839844", "-153.434952 89.145218 20.695242" );
SpawnObject( "Ammo_12gaPellets", "5057.150879 9.420760 2397.268799", "-55.694786 0.115033 -0.846273" );
SpawnObject( "Ammo_12gaPellets", "5056.418457 9.406057 2396.532227", "159.806259 -0.585112 0.622148" );
SpawnObject( "Ammo_12gaPellets", "5057.204590 9.413677 2396.710693", "-91.925278 -0.407417 -0.750621" );
SpawnObject( "Ammo_12gaPellets", "5070.180664 9.503817 2396.437744", "-105.208298 -0.187522 -0.107359" );
SpawnObject( "Ammo_12gaPellets", "5070.613281 9.502774 2395.614258", "-85.750900 -0.141051 -0.163692" );
SpawnObject( "Ammo_12gaPellets", "5069.694336 9.501032 2395.727051", "172.754074 -0.141936 0.095057" );
SpawnObject( "Ammo_12gaPellets", "5072.606934 9.496379 2389.944580", "16.172144 0.115929 -0.125468" );
SpawnObject( "Ammo_12gaPellets", "5073.019043 9.498988 2391.076904", "134.784363 0.054630 0.161856" );
SpawnObject( "Ammo_12gaPellets", "5073.460938 9.499158 2390.321045", "65.073914 0.170756 0.004886" );
SpawnObject( "PlateCarrierVest", "5063.078125 9.366395 2389.950195", "-27.711233 0.192646 -0.618917" );
SpawnObject( "PlateCarrierVest", "5075.879883 9.498872 2392.885498", "-101.066330 -0.179278 -0.120623" );
SpawnObject( "PlateCarrierVest", "5061.254395 9.481602 2399.958984", "17.365034 0.938753 -0.186640" );
SpawnObject( "BallisticHelmet_Green", "5060.970215 9.510552 2404.350586", "73.829758 -15.758923 27.233200" );
SpawnObject( "BallisticHelmet_Green", "5072.258789 9.514740 2398.886963", "40.551777 0.000000 0.000000" );
SpawnObject( "BallisticHelmet_Green", "5067.764160 9.374579 2384.650146", "-112.668861 -0.570155 -0.175798" );
SpawnObject( "M68Optic", "5064.653809 9.392539 2389.004150", "45.000000 -89.350777 176.994659" );
SpawnObject( "M68Optic", "5069.107422 9.514112 2397.084229", "26.565048 -89.824165 -80.674469" );
SpawnObject( "ReflexOptic", "5071.454590 9.512082 2395.653809", "45.000000 -89.780594 -137.661713" );
SpawnObject( "ReflexOptic", "5070.321777 9.438846 2387.556641", "47.726387 -88.864250 -144.590393" );
SpawnObject( "ReflexOptic", "5059.857910 9.350914 2388.581787", "39.805485 -89.402252 30.178043" );
SpawnObject( "ACOGOptic", "5061.903809 9.350516 2384.243164", "45.000000 -89.886353 -22.675144" );
SpawnObject( "ACOGOptic", "5062.354492 9.524874 2401.948730", "0.000000 -89.913765 -91.529884" );
SpawnObject( "PUScopeOptic", "5057.770996 9.465115 2398.423096", "28.610321 -89.042633 145.986374" );
SpawnObject( "PUScopeOptic", "5060.364258 9.362582 2387.606201", "39.805485 -89.402252 10.797579" );
SpawnObject( "KashtanOptic", "5067.205078 9.458334 2390.820313", "45.000000 -88.919716 -24.888487" );
SpawnObject( "KashtanOptic", "5061.013184 9.472396 2397.039063", "28.610321 -89.042633 27.429293" );
SpawnObject( "PSO1Optic", "5055.623535 9.394243 2393.768066", "26.565048 -89.145218 7.677843" );
SpawnObject( "PSO1Optic", "5068.427246 9.534999 2397.804932", "26.565048 -89.824165 165.580597" );
SpawnObject( "KobraOptic", "5061.254395 9.392323 2390.658691", "39.805485 -89.402252 -8.692775" );
SpawnObject( "KobraOptic", "5071.873047 9.519990 2392.286377", "63.434948 -89.824165 39.367157" );
SpawnObject( "M4_T3NRDSOptic", "5060.532715 9.327949 2385.549316", "104.106827 0.036847 -89.833199" );
SpawnObject( "M4_T3NRDSOptic", "5063.937988 9.504435 2402.563721", "-101.003159 -0.089573 -90.060402" );
SpawnObject( "Sword", "5067.088867 9.502913 2398.967529", "-18.965963 0.119668 -90.121902" );
SpawnObject( "Sword", "5059.526367 9.351826 2390.220703", "129.435120 0.003857 90.596626" );
SpawnObject( "Sword", "5063.368164 9.505454 2403.561768", "-157.265930 -0.099984 -89.959053" );
SpawnObject( "Canteen", "5070.626465 9.602044 2390.904541", "-23.641319 0.362837 -1.076008" );
SpawnObject( "Canteen", "5070.496094 9.629020 2397.592773", "-127.566292 -0.214264 -0.027956" );
SpawnObject( "Canteen", "5058.922363 9.581842 2399.067871", "65.601837 0.764505 0.575882" );
SpawnObject( "Canteen", "5060.907227 9.469423 2388.239746", "-110.350235 -0.517520 -0.296911" );
SpawnObject( "BakedBeansCan_Opened", "5058.176270 9.396399 2391.339111", "-9.594419 0.388287 -0.453008" );
SpawnObject( "BakedBeansCan_Opened", "5058.025879 9.510034 2400.140869", "-8.310201 0.462885 -0.530807" );
SpawnObject( "BakedBeansCan_Opened", "5065.190918 9.550101 2401.503906", "178.478256 -0.074340 0.078398" );
SpawnObject( "BakedBeansCan_Opened", "5072.187012 9.548865 2395.697021", "26.774166 0.205239 -0.067582" );
SpawnObject( "BakedBeansCan_Opened", "5069.613281 9.457847 2387.136719", "16.283833 0.947413 -0.519003" );
SpawnObject( "bldr_Rubble_Concrete3", "5104.086426 9.578901 2367.301270", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete3", "5112.185547 9.578901 2378.149170", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete3", "5032.989258 9.422511 2398.801514", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete3", "5069.985840 9.578901 2428.835938", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_wreck_bmp2", "5003.159180 10.332497 2468.997070", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_brdm", "5101.117188 9.872794 2332.747314", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runway_dirt_3", "5113.306152 9.500000 2338.029053", "-40.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runway_dirt_2", "5164.572754 9.500000 2276.946289", "140.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runway_dirt_1", "5215.930664 9.500000 2215.722412", "-40.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runway_main", "4970.729492 9.500000 2507.842529", "140.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runway_main", "5022.009766 9.500000 2446.830078", "140.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runway_main", "4919.509277 9.504936 2568.749756", "140.000000 0.000000 0.000000" );
SpawnObject( "Land_Airfield_Hangar_Green", "4913.168457 15.454706 2577.160156", "-40.000000 0.000000 0.000000" );
//cap galova
SpawnObject( "bldr_FuelStation_Sign", "8643.586914 10.324471 2538.139648", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_FuelStation_Sign", "8686.565430 8.720629 2472.272461", "70.000000 0.000000 0.000000" );
SpawnObject( "Land_FuelStation_Feed", "8652.840820 7.448754 2494.696777", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_FuelStation_Feed", "8648.862305 7.448754 2500.358398", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_FuelStation_Feed", "8656.227539 7.448754 2488.494141", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Misc_Well_Pump_Yellow", "8665.400391 7.281307 2479.700439", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runway_beton_end1", "8660.145508 6.068900 2504.098633", "-170.000015 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "8662.380859 7.100467 2479.659180", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container", "8655.941406 7.094246 2479.264404", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Glass", "8652.942383 6.943743 2478.443848", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Paper", "8649.442383 6.775728 2480.906250", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Plastic", "8645.807617 6.647160 2477.284912", "33.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "8646.992188 5.815938 2477.352051", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "8650.386719 5.980405 2481.028076", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "8650.386719 5.980405 2481.028076", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile3", "8664.269531 6.886634 2475.274170", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile4", "8671.301758 6.652269 2475.532227", "140.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "8668.666016 6.654905 2474.593018", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "8668.549805 6.622232 2477.060791", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_TrafficLights", "8673.455078 9.276825 2473.395752", "-109.999985 0.000000 0.000000" );
SpawnObject( "bldr_Misc_TrafficLights", "8676.523438 9.024852 2492.864990", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_corner", "8623.187500 6.528347 2537.559082", "-179.999985 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_round", "8659.966797 8.435597 2535.449707", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "8656.087891 8.703893 2538.057129", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "8614.662109 6.031327 2530.791504", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "8614.362305 6.437587 2538.356201", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "8608.690430 8.368562 2554.481445", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_BusStop_City_Sign", "8642.024414 8.903579 2537.779297", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Lamp_City1", "8643.261719 12.404643 2541.743408", "150.000000 0.000000 0.000000" );
SpawnObject( "bldr_Lamp_City1", "8684.232422 10.700466 2479.103516", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Lamp_City2", "8667.043945 10.811535 2479.772705", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Lamp_City3", "8647.233398 10.770330 2512.129639", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runway_beton", "8629.099609 5.696990 2419.220703", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Uaz", "8610.557617 6.950577 2443.719482", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Lada_Green", "8656.561523 6.719455 2403.094727", "98.999992 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Police", "8632.232422 6.688423 2434.542969", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Police", "8642.026367 6.748462 2418.546387", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_Dead_MassGrave_15m", "8651.165039 6.231419 2374.064941", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile1", "8638.380859 6.312211 2420.447510", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile4", "8635.690430 6.263837 2427.726563", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Ikarus", "8635.708984 7.451089 2395.176270", "21.999998 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Lada_Red", "8620.518555 6.789852 2459.153564", "150.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Tree_Pavement1", "8635.193359 5.958540 2439.830078", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Tree_Pavement1", "8650.253906 5.958650 2415.011230", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_Lamp_City3", "8616.804688 10.256552 2441.911133", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Lamp_City3", "8641.358398 10.270749 2397.294189", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_FagusSylvatica_fallenb", "8640.970703 6.544853 2452.566162", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_FagusSylvatica_fallen", "8661.927734 6.716828 2398.099609", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_FagusSylvatica_fallenb", "8638.963867 6.567613 2444.645752", "110.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_FagusSylvatica_stumpc", "8608.353516 6.869186 2459.988281", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_fallenb", "8612.149414 6.601516 2453.922607", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_fallenc", "8594.418945 7.166705 2457.903076", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_stump", "8590.808594 7.108485 2429.144775", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_stump", "8598.821289 7.708234 2457.421387", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_stump", "8644.785156 6.940874 2444.371582", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_stump", "8662.288086 7.085669 2404.516602", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_stump", "8639.959961 6.914246 2367.064209", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_stump", "8615.930664 6.638007 2374.352539", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_BetulaPendula_1fb", "8661.758789 8.366423 2410.025635", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_BetulaPendula_1f", "8650.437500 11.512386 2414.957520", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_BetulaPendula_1f", "8635.474609 11.512276 2439.614502", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_BetulaPendula_1fb", "8629.343750 8.274752 2461.224854", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_piceaabies_stump", "8617.385742 5.985693 2395.124512", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_piceaabies_fallenc", "8588.981445 6.684533 2427.278809", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_piceaabies_fallenc", "8597.272461 6.822897 2439.305908", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_BetulaPendula_3fb", "8621.930664 16.165882 2367.963867", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_BetulaPendula_3fb", "8583.749023 16.793045 2438.734863", "44.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_2d", "8603.254883 15.156435 2454.416992", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_2d", "8634.397461 14.244779 2368.086182", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_2d", "8616.035156 14.161795 2377.241211", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_quercusRobur_2d", "8659.945313 16.917557 2422.014160", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_quercusRobur_2d", "9101.963867 39.759235 2252.942383", "66.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_sambucusNigra_2s", "8597.341797 8.751847 2428.336914", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_sambucusNigra_2s", "8628.915039 8.318613 2370.808838", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_sambucusNigra_2s", "8635.861328 8.608969 2450.407471", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile1", "8653.052734 6.342044 2377.618896", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile1", "8615.202148 6.277926 2413.277588", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile4", "8617.984375 6.241920 2407.888184", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container", "8611.918945 6.844449 2428.356689", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile4", "8617.488281 5.983797 2434.684814", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile4", "8640.790039 6.037257 2410.347168", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "8657.062500 6.018069 2420.505371", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "8643.367188 6.043677 2396.327637", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Plastic", "8638.442383 6.841750 2387.418701", "140.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Plastic", "8650.950195 6.892089 2407.072266", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Plastic", "8650.950195 6.892089 2407.072266", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Plastic", "8650.950195 6.892089 2407.072266", "40.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_S1023_Blue", "8610.994141 7.003252 2434.082031", "-129.999985 0.000000 0.000000" );
SpawnObject( "Land_Wreck_S1023_Blue", "8649.608398 7.040803 2386.208496", "160.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile1", "8640.893555 6.391702 2437.802490", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "8616.715820 6.269207 2440.613037", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_fallenb", "8610.539063 6.750804 2468.676270", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_d_PinusSylvestris_fallenb", "8592.603516 6.303701 2420.540527", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_naked_1s", "8586.413086 10.282751 2414.330322", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_quercusRobur_2d", "8591.061523 16.763420 2414.965332", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_naked_2s", "8603.901367 8.911922 2456.212891", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_naked_2s", "8592.875977 8.148624 2416.268311", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_naked_2s", "8638.039063 8.196758 2372.652100", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_naked_2s", "8664.753906 8.364108 2392.866455", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Village_Pub", "8739.680664 10.693256 2390.649902", "65.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_StadiumBenches", "8634.655273 6.858581 2385.494141", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "8743.655273 7.005590 2383.131104", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "8730.904297 7.052288 2404.096436", "33.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Sunshade", "8733.001953 7.940024 2401.048828", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Sunshade", "8743.449219 7.869087 2379.833008", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Chair_Camp2", "8729.943359 7.192761 2397.570068", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Chair_Camp2", "8738.297852 7.194084 2379.377441", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Chair_Camp2", "8735.874023 7.229714 2382.990967", "55.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "8733.470703 7.346995 2388.321045", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "8743.360352 6.553289 2381.344727", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "8728.769531 6.711555 2400.019287", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "8567.798828 7.030474 2484.168945", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "8587.514648 6.706036 2487.176758", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "8603.056641 6.457069 2489.414795", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "8573.851563 6.834712 2468.394043", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "8589.200195 6.762826 2469.190186", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "8605.749023 6.459675 2474.682129", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "8610.762695 6.374827 2478.930908", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "8578.849609 6.844706 2472.804932", "66.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c", "8593.551758 6.703167 2469.848633", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c", "8590.221680 6.647739 2493.022949", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c", "8591.308594 6.632281 2492.296875", "66.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "8618.095703 6.843909 2485.674072", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "8613.594727 6.993225 2497.416748", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_misc_flagpole", "8607.491211 9.849238 2496.260742", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_CamoNet_Roof_east", "8340.097656 4.947400 2427.011475", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_CamoNet_Roof_east", "8595.212891 7.729712 2478.500732", "59.999996 0.000000 0.000000" );
SpawnObject( "Land_Train_742_Red", "8731.121094 9.522465 2443.420654", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Train_Wagon_Box", "8731.456055 8.750587 2455.717773", "29.999998 0.000000 0.000000" );
SpawnObject( "Land_Train_Wagon_Box", "8732.824219 8.414491 2465.905029", "150.000000 0.000000 0.000000" );
SpawnObject( "Land_Barn_Wood1", "8703.032227 8.557472 2280.208740", "59.999996 0.000000 0.000000" );
SpawnObject( "Land_Farm_Hopper", "8780.386719 13.956738 2370.592773", "59.999996 0.000000 0.000000" );
SpawnObject( "Land_Farm_WaterTower_Small", "8673.384766 10.622058 2281.234375", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_farm_strawstack", "8696.263672 7.112345 2299.563721", "140.000000 0.000000 0.000000" );
SpawnObject( "Land_City_Store_WithStairs", "8632.640625 8.341388 2518.195557", "100.000008 0.000000 0.000000" );
SpawnObject( "Land_Office1", "8630.173828 10.991259 2419.427979", "-119.999985 0.000000 0.000000" );
SpawnObject( "bldr_sign_build_bar", "8730.759766 9.653580 2395.046875", "160.000000 0.000000 0.000000" );
SpawnObject( "bldr_sign_build_produkty", "8634.909180 16.573959 2421.882080", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_sign_roof_crr", "8638.812500 7.681129 2443.727783", "-119.999985 0.000000 0.000000" );
SpawnObject( "bldr_Decal_Heli_Army", "8318.651367 2.892397 2417.796143", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Decal_Heli_Army", "8292.283203 2.074357 2397.672852", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_1", "8315.678711 3.637901 2399.625000", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_1", "8301.766602 6.803185 2440.268311", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_5", "8293.593750 4.373731 2417.066895", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big3", "8341.433594 3.266116 2404.245605", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "8641.070313 7.517996 2527.558105", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_FuelStation_Build", "8660.018555 8.106958 2477.412109", "-169.999969 0.000000 0.000000" );
SpawnObject( "bldr_FuelStation_Shed", "8652.862305 9.444623 2494.539795", "59.999996 0.000000 0.000000" );
SpawnObject( "ChristmasTree", "10466.905273 13.731251 2379.298340", "0.000000 0.000000 0.000000" );
//elektro
//elektro cache
SpawnObject( "AKM", "10478.594727 6.278938 2380.326416", "0.000000 -89.965729 0.000000" );
SpawnObject( "AKM", "10463.437500 6.251680 2383.831299", "0.000000 89.965729 0.000000" );
SpawnObject( "AKM", "10461.817383 6.139314 2376.459717", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_AKM_30Rnd", "10478.609375 6.245926 2381.046143", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_AKM_30Rnd", "10479.014648 6.406378 2380.267334", "0.001967 -89.947662 7.908446" );
SpawnObject( "Mag_AKM_30Rnd", "10479.014648 6.246039 2380.267334", "-179.995605 89.934380 161.392975" );
SpawnObject( "Mag_AKM_30Rnd", "10463.662109 6.220184 2383.875488", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_AKM_30Rnd", "10463.703125 6.250137 2383.892822", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_AKM_30Rnd", "10463.423828 6.249957 2384.007080", "0.000000 89.947662 -64.271973" );
SpawnObject( "Mag_AKM_30Rnd", "10461.519531 6.146592 2376.605713", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_AKM_30Rnd", "10461.613281 6.146717 2376.770264", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_AKM_30Rnd", "10462.110352 6.075995 2376.721191", "-179.999985 -89.947662 15.112157" );
SpawnObject( "AK_WoodBttstck", "10479.215820 6.224388 2380.257324", "0.000000 89.965729 0.000000" );
SpawnObject( "AK_WoodBttstck", "10463.522461 6.230818 2383.631592", "0.000000 89.965729 0.000000" );
SpawnObject( "AK_WoodBttstck", "10461.424805 6.125028 2376.649170", "0.000000 -89.965729 0.000000" );
SpawnObject( "AK_WoodHndgrd", "10478.750000 6.183566 2380.255859", "0.000000 89.965729 0.000000" );
SpawnObject( "AK_WoodHndgrd", "7545.810547 3.957635 3329.907959", "-106.484444 -82.240120 156.221054" );
SpawnObject( "AK_WoodHndgrd", "10463.174805 6.229827 2383.338135", "0.000000 89.965729 0.000000" );
SpawnObject( "AK_WoodHndgrd", "10462.357422 6.083010 2376.330811", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_AKM_30Rnd", "10461.927734 6.015578 2376.058350", "-90.000000 89.913765 112.099670" );
SpawnObject( "Mag_AKM_30Rnd", "10463.141602 6.249220 2383.414551", "0.000000 -89.965729 179.999985" );
SpawnObject( "Mag_AKM_30Rnd", "10478.792969 6.246175 2380.316406", "-179.995605 89.934380 90.968468" );
SpawnObject( "Mag_AKM_Drum75Rnd", "10470.953125 6.119535 2384.133057", "-128.706039 0.059617 89.952225" );
SpawnObject( "Mag_AKM_Drum75Rnd", "10460.693359 6.108439 2372.929199", "-44.119656 -0.053184 89.945152" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "10455.009766 6.361030 2378.286621", "158.005432 -55.462891 30.175716" );
SpawnObject( "AmmoBox_762x54Tracer_20Rnd", "10458.538086 6.007215 2377.711426", "47.109249 0.000000 -0.000000" );
SpawnObject( "Mosin9130", "10455.461914 6.133718 2377.764160", "90.000000 -89.913765 -70.267944" );
SpawnObject( "AmmoBox_762x54_20Rnd", "10454.768555 6.100437 2377.801270", "0.000000 -89.965729 179.999985" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "10455.448242 6.100789 2378.689453", "0.000000 -89.965729 0.000000" );
SpawnObject( "Ammo_762x54", "10455.521484 6.097436 2378.791016", "25.423122 0.000000 0.000000" );
SpawnObject( "Ammo_762x54", "10455.202148 6.096681 2378.258057", "13.843196 0.000000 0.000000" );
SpawnObject( "Ammo_762x54", "10474.443359 6.011494 2384.802490", "-43.232491 0.052328 0.055661" );
SpawnObject( "AmmoBox_762x54_20Rnd", "10474.471680 6.033009 2384.822266", "90.000000 89.913765 82.529060" );
SpawnObject( "Ammo_762x54", "10474.532227 6.011376 2384.701416", "68.633675 -0.071145 0.027833" );
SpawnObject( "Ammo_762x54", "10474.673828 6.011187 2384.591064", "-9.096948 0.012079 0.075435" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "10474.635742 6.015026 2384.783691", "90.000000 89.913765 -25.162209" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "10474.790039 6.014819 2384.985840", "90.000000 89.913765 1.579328" );
SpawnObject( "Mosin9130", "10474.923828 6.024338 2384.986572", "45.000000 89.886353 -81.808029" );
SpawnObject( "Mosin_Compensator", "10475.008789 6.016165 2384.881348", "-90.000000 -89.913765 -12.263860" );
SpawnObject( "Mosin9130", "10470.436523 6.023886 2372.444824", "-179.999985 89.913765 75.483864" );
SpawnObject( "Mosin_Compensator", "10470.424805 6.016127 2372.461426", "0.000000 -89.913765 129.730530" );
SpawnObject( "Mosin_Bayonet", "10470.696289 6.014686 2372.625732", "103.639938 -0.018016 90.074234" );
SpawnObject( "AmmoBox_762x54_20Rnd", "10470.972656 6.016048 2372.933594", "-179.999985 89.913765 -93.282288" );
SpawnObject( "Ammo_762x54", "10470.855469 6.011119 2372.774658", "-118.952576 -0.036982 -0.066848" );
SpawnObject( "Ammo_762x54", "10470.497070 6.025802 2372.912354", "-113.426285 -0.034282 -0.079121" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "10470.479492 6.021909 2372.801514", "0.000005 -89.905121 141.958679" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "10470.459961 6.014468 2372.654785", "0.000000 -89.913765 0.494414" );
SpawnObject( "AmmoBox_762x54_20Rnd", "10470.401367 6.044829 2372.785400", "-179.999985 89.905121 -73.011864" );
SpawnObject( "AmmoBox_762x54_20Rnd", "10474.736328 6.015431 2385.291992", "45.000000 89.886353 25.191092" );
SpawnObject( "AmmoBox_762x54_20Rnd", "10454.577148 6.099705 2377.118652", "0.000000 -89.965729 179.999985" );
SpawnObject( "SKS", "10471.614258 6.043921 2380.975830", "45.000000 -89.886353 -42.758770" );
SpawnObject( "SKS_Bayonet", "10471.516602 6.036199 2381.139893", "45.000000 89.886353 167.512299" );
SpawnObject( "SKS", "10467.346680 6.138923 2386.987549", "0.000000 -89.965729 179.999985" );
SpawnObject( "SKS", "10462.416992 6.156592 2374.501953", "0.000000 89.965729 0.000000" );
SpawnObject( "SKS_Bayonet", "10467.640625 6.444679 2386.759033", "0.000000 89.965729 0.000000" );
SpawnObject( "AmmoBox_762x39_20Rnd", "10466.850586 6.131893 2386.375244", "0.000000 -89.965729 0.000000" );
SpawnObject( "AmmoBox_762x39_20Rnd", "10467.442383 6.131273 2386.599121", "0.000000 -89.965729 0.000000" );
SpawnObject( "Ammo_762x39", "10467.353516 6.107078 2386.740967", "-130.158997 0.000000 0.000000" );
SpawnObject( "Ammo_762x39", "10467.034180 6.107135 2387.094971", "178.357483 0.000000 0.000000" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "10467.315430 6.200821 2386.929932", "-179.993454 89.947662 -64.183014" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "10467.592773 6.145977 2387.016602", "0.000000 89.965729 0.000000" );
SpawnObject( "AmmoBox_762x39_20Rnd", "10471.154297 6.059542 2381.087891", "-93.387032 89.376610 -0.813201" );
SpawnObject( "AmmoBox_762x39_20Rnd", "10471.224609 6.034796 2380.970215", "90.000000 89.913765 94.131004" );
SpawnObject( "AmmoBox_762x39_20Rnd", "10471.634766 6.034987 2381.490234", "-90.000000 -89.913765 73.278297" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "10471.523438 6.050209 2381.427490", "90.000000 89.913765 -169.845581" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "10471.742188 6.049917 2380.853271", "-90.000000 -89.913765 -50.222786" );
SpawnObject( "Ammo_762x39", "10471.413086 6.011098 2380.481445", "-88.684341 0.076376 0.001754" );
SpawnObject( "Ammo_762x39", "10471.439453 6.011063 2380.583984", "13.491592 -0.017823 0.074288" );
SpawnObject( "Ammo_762x39", "10461.547852 6.001719 2374.460205", "101.835381 0.074772 0.015669" );
SpawnObject( "Ammo_762x39", "10461.832031 6.002098 2374.443359", "-8.470708 -0.011253 -0.075563" );
SpawnObject( "AmmoBox_762x39_20Rnd", "10462.016602 6.026524 2374.067383", "90.000000 -89.913765 -115.950493" );
SpawnObject( "AmmoBox_762x39_20Rnd", "10462.291992 6.026152 2373.970459", "-90.000000 89.913765 -154.590591" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "10462.403320 6.042112 2374.099854", "-90.000000 89.913765 90.192276" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "10462.490234 6.042228 2374.117432", "-90.000000 89.913765 -2.183585" );
SpawnObject( "SKS_Bayonet", "10462.384766 6.020040 2374.630615", "-90.000000 89.913765 -55.897392" );
SpawnObject( "SVD", "10464.139648 6.025522 2378.735840", "90.000000 -89.913765 -65.170135" );
SpawnObject( "Mag_SVD_10Rnd", "10463.912109 6.016110 2378.603027", "90.000000 -89.913765 -122.124992" );
SpawnObject( "Mag_SVD_10Rnd", "10463.835938 6.016009 2378.876465", "90.000000 -89.913765 -20.201702" );
SpawnObject( "Mag_SVD_10Rnd", "10463.826172 6.044042 2378.845215", "-30.749674 89.294174 106.592697" );
SpawnObject( "Mag_SVD_10Rnd", "10463.605469 6.015701 2378.862549", "90.000000 -89.913765 -149.295029" );
SpawnObject( "SVD", "10469.639648 6.157995 2382.860596", "-90.000000 89.913765 -159.292892" );
SpawnObject( "Mag_SVD_10Rnd", "10469.657227 6.067033 2382.984619", "90.000000 -89.913765 -138.253418" );
SpawnObject( "Mag_SVD_10Rnd", "10470.015625 6.072756 2382.825439", "-90.000000 89.913765 74.470360" );
SpawnObject( "Mag_SVD_10Rnd", "10469.949219 6.067556 2383.262695", "-67.471107 -89.414154 155.552246" );
SpawnObject( "Mag_SVD_10Rnd", "10470.228516 6.067165 2382.841553", "90.000000 -89.913765 -118.510384" );
SpawnObject( "FAL", "10460.827148 6.121646 2383.231689", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_FAL_20Rnd", "10460.618164 6.172710 2383.107666", "-0.000073 89.947662 -112.942955" );
SpawnObject( "Mag_FAL_20Rnd", "10460.403320 6.112393 2382.839600", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_FAL_20Rnd", "10460.662109 6.112484 2382.670898", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_FAL_20Rnd", "10460.875000 6.112896 2382.943115", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_FAL_20Rnd", "10468.296875 6.019184 2375.378906", "-135.000015 89.886353 2.443194" );
SpawnObject( "Mag_FAL_20Rnd", "10468.137695 6.018785 2375.239014", "-135.000015 89.886353 149.752380" );
SpawnObject( "Mag_FAL_20Rnd", "10467.909180 6.018559 2375.336670", "45.000000 -89.886353 -72.071182" );
SpawnObject( "Mag_FAL_20Rnd", "10467.593750 6.017938 2375.148193", "-135.000015 89.886353 88.985153" );
SpawnObject( "FAL", "10467.436523 6.026307 2375.563477", "45.000000 -89.886353 -19.719751" );
SpawnObject( "M4A1", "10472.122070 6.144553 2386.716064", "45.000000 89.886353 114.391846" );
SpawnObject( "M4_OEBttstck_Black", "10472.525391 6.092111 2386.622559", "45.000000 89.886353 -3.132525" );
SpawnObject( "M4_Suppressor", "10472.764648 6.080781 2384.231445", "-135.000015 -89.886353 -8.529817" );
SpawnObject( "M4_PlasticHndgrd_Black", "10472.170898 6.097540 2386.344482", "-135.000015 -89.886353 28.385376" );
SpawnObject( "M4_PlasticHndgrd", "10472.539063 6.039059 2376.598633", "-90.000000 -89.913765 133.748901" );
SpawnObject( "M4_CarryHandleOptic", "10472.431641 6.104053 2386.197998", "90.000000 89.913765 9.171118" );
SpawnObject( "M4_OEBttstck_Black", "10472.225586 6.079661 2376.613037", "88.038712 45.354134 -174.251556" );
SpawnObject( "M4_CarryHandleOptic", "10472.216797 6.091730 2376.249268", "90.000000 89.913765 -96.026192" );
SpawnObject( "M4A1", "10471.563477 6.146556 2375.916992", "90.000000 89.913765 -139.687180" );
SpawnObject( "M67Grenade", "10471.083008 6.042262 2375.732422", "143.529770 -0.061435 0.045410" );
SpawnObject( "M67Grenade", "10471.325195 6.042850 2379.443359", "-16.523922 0.021728 0.073241" );
SpawnObject( "M67Grenade", "10472.701172 6.041015 2380.053711", "154.999847 -0.032287 -0.069238" );
SpawnObject( "M67Grenade", "10478.277344 6.032121 2386.092773", "-29.466307 -0.028934 0.104094" );
SpawnObject( "M67Grenade", "10475.393555 6.034851 2386.928955", "29.773798 -0.104248 0.028375" );
SpawnObject( "M67Grenade", "10468.146484 6.042590 2385.332520", "-6.020792 0.067962 -0.083988" );
SpawnObject( "M67Grenade", "10466.770508 6.038752 2376.330078", "-94.946739 -0.082699 -0.069524" );
SpawnObject( "M67Grenade", "10464.349609 6.034616 2374.898682", "-40.771503 0.000000 0.000000" );
SpawnObject( "M67Grenade", "10463.058594 6.035204 2377.381592", "-21.874529 0.042432 -0.099359" );
SpawnObject( "M67Grenade", "10461.035156 6.032663 2375.779297", "-72.039520 -0.072673 -0.023558" );
SpawnObject( "M67Grenade", "10460.432617 6.031788 2376.438965", "-92.749413 -0.076308 0.003665" );
SpawnObject( "M18SmokeGrenade_Red", "10460.614258 6.086333 2377.020508", "-90.000000 89.913765 88.731033" );
SpawnObject( "M18SmokeGrenade_Red", "10462.884766 6.036000 2375.074219", "0.000000 89.965729 0.000000" );
SpawnObject( "M18SmokeGrenade_Red", "10467.982422 6.041174 2375.897461", "-135.000015 89.886353 128.042740" );
SpawnObject( "M18SmokeGrenade_Red", "10470.489258 6.038796 2372.096924", "0.000000 -89.913765 -55.010227" );
SpawnObject( "M18SmokeGrenade_Red", "10471.442383 6.135295 2389.172607", "0.000000 -89.965729 0.000000" );
SpawnObject( "M18SmokeGrenade_Red", "10471.551758 6.043930 2383.944580", "-90.000000 -89.913765 100.854828" );
SpawnObject( "M18SmokeGrenade_Red", "10473.845703 6.040872 2381.318359", "-90.000000 -89.913765 162.171402" );
SpawnObject( "Mag_CMAG_20Rnd_Black", "10473.168945 6.022497 2386.057373", "45.000000 89.886353 -20.106913" );
SpawnObject( "Mag_CMAG_20Rnd_Black", "10472.525391 6.115160 2386.552246", "-66.984924 -54.992466 -73.307457" );
SpawnObject( "Mag_CMAG_20Rnd_Black", "10472.546875 6.133097 2386.541504", "-65.757492 -58.596260 -47.284996" );
SpawnObject( "Mag_CMAG_20Rnd_Black", "10473.289063 6.021186 2386.920898", "45.000000 89.886353 -67.898903" );
SpawnObject( "Mag_CMAG_20Rnd_Black", "10472.144531 6.049530 2376.176514", "-90.000000 -89.913765 -29.765619" );
SpawnObject( "Mag_CMAG_20Rnd_Black", "10472.924805 6.025238 2376.387207", "-90.000000 -89.913765 -130.524323" );
SpawnObject( "Mag_CMAG_20Rnd_Black", "10473.610352 6.023319 2377.028809", "90.000000 89.913765 81.738029" );
SpawnObject( "Mag_CMAG_20Rnd_Black", "10473.356445 6.023657 2376.888428", "90.000000 89.913765 -153.420517" );
SpawnObject( "Mag_CMAG_40Rnd_Green", "10468.986328 6.027172 2377.032959", "45.000000 -89.886353 -35.705338" );
SpawnObject( "Mag_CMAG_40Rnd_Green", "10460.569336 6.016570 2377.301025", "90.000000 -89.913765 -160.171829" );
SpawnObject( "UMP45", "10474.810547 9.036675 2352.237549", "90.000000 -89.913765 105.727432" );
SpawnObject( "AtlasBipod", "10463.953125 6.140262 2385.675537", "-25.195143 -0.036708 -90.078026" );
SpawnObject( "AtlasBipod", "10473.107422 6.041780 2382.841309", "-161.720947 0.023961 89.927452" );
SpawnObject( "MP5K", "10473.939453 6.020753 2383.296143", "-90.000000 -89.913765 132.364563" );
SpawnObject( "Mag_MP5_30Rnd", "10474.268555 6.009173 2383.238525", "90.000000 89.913765 60.797443" );
SpawnObject( "Mag_MP5_30Rnd", "10474.242188 6.009209 2383.311768", "90.000000 89.913765 139.659729" );
SpawnObject( "Mag_MP5_30Rnd", "10474.242188 6.009209 2383.312256", "90.000000 89.913765 105.447227" );
SpawnObject( "Mag_MP5_30Rnd", "10474.242188 6.009209 2383.312256", "90.000000 89.913765 -16.669512" );
SpawnObject( "MP5_RailHndgrd", "10452.103516 6.003833 2367.103760", "0.000000 -89.965729 0.000000" );
SpawnObject( "MP5_RailHndgrd", "10474.017578 6.028479 2383.626221", "-90.000000 -89.913765 -140.390335" );
SpawnObject( "MP5k_StockBttstck", "10474.083008 6.020694 2383.567627", "90.000000 89.913765 172.817474" );
SpawnObject( "MP5K", "10459.125977 6.011630 2374.641113", "-90.000000 89.913765 97.289665" );
SpawnObject( "Mag_MP5_30Rnd", "10459.081055 5.999969 2374.399658", "90.000000 -89.913765 82.336815" );
SpawnObject( "Mag_MP5_30Rnd", "10459.074219 6.000270 2374.395264", "-90.000000 89.913765 113.593857" );
SpawnObject( "Mag_MP5_30Rnd", "10459.074219 5.999960 2374.394775", "90.000000 -89.913765 -57.842037" );
SpawnObject( "Mag_MP5_30Rnd", "10459.074219 5.999960 2374.394775", "90.000000 -89.913765 111.912918" );
SpawnObject( "Mag_MP5_30Rnd", "10459.074219 5.999960 2374.394775", "90.000000 -89.913765 73.964966" );
SpawnObject( "MP5_PlasticHndgrd", "10459.295898 6.011703 2374.983643", "90.000000 -89.913765 91.290939" );
SpawnObject( "MP5k_StockBttstck", "10459.043945 6.010832 2374.869141", "90.000000 -89.913765 88.643150" );
SpawnObject( "MP5K", "10465.458984 6.115973 2371.064697", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_MP5_30Rnd", "10465.296875 6.104525 2370.751465", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_MP5_30Rnd", "10465.277344 6.106836 2370.736816", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_MP5_30Rnd", "10465.275391 6.106525 2370.735352", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_MP5_30Rnd", "10465.275391 6.106525 2370.735352", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_MP5_30Rnd", "10465.275391 6.106836 2370.735352", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_MP5_30Rnd", "10465.275391 6.106525 2370.735352", "0.000000 -89.965729 179.999985" );
SpawnObject( "MP5_PlasticHndgrd", "10466.205078 6.115973 2371.083252", "0.000000 -89.965729 0.000000" );
SpawnObject( "MP5k_StockBttstck", "10465.672852 6.115438 2371.562012", "0.000000 -89.965729 0.000000" );
SpawnObject( "CZ61", "10463.594727 6.015975 2372.775635", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_CZ61_20Rnd", "10463.883789 6.010877 2373.183350", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_CZ61_20Rnd", "10463.874023 6.033720 2373.169922", "-179.993896 -89.947662 135.278183" );
SpawnObject( "Mag_CZ61_20Rnd", "10463.865234 6.056567 2373.157471", "-179.991058 -89.934380 60.126556" );
SpawnObject( "Mag_CZ61_20Rnd", "10463.744141 6.010336 2373.090088", "0.000000 -89.965729 0.000000" );
SpawnObject( "CZ61", "10465.355469 6.120499 2384.721680", "0.000000 -89.965729 179.999985" );
SpawnObject( "Mag_CZ61_20Rnd", "10465.372070 6.115530 2384.882568", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_CZ61_20Rnd", "10465.363281 6.138374 2384.867920", "-179.993896 -89.947662 -44.035175" );
SpawnObject( "Mag_CZ61_20Rnd", "10465.354492 6.138381 2384.854736", "-179.993896 -89.947662 -151.319901" );
SpawnObject( "Mag_CZ61_20Rnd", "10465.354492 6.156049 2384.854004", "0.009593 89.934380 30.893108" );
SpawnObject( "AK74", "10475.861328 6.135881 2378.382568", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_AK74_30Rnd", "10475.683594 6.116606 2378.437012", "0.000000 -89.965729 179.999985" );
SpawnObject( "Mag_AK74_30Rnd", "10458.504883 9.233145 2385.764893", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_AK74_30Rnd", "10475.493164 6.117135 2378.597168", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_AK74_30Rnd", "10476.181641 6.116261 2378.260986", "0.000000 -89.965729 0.000000" );
SpawnObject( "AK74_Hndgrd", "10476.019531 6.122868 2378.733154", "0.000000 89.965729 0.000000" );
SpawnObject( "AK74_WoodBttstck_Black", "10475.009766 6.122484 2378.627197", "0.000000 89.965729 0.000000" );
SpawnObject( "AK74_WoodBttstck_Black", "10459.973633 6.016319 2379.990967", "-90.000000 89.913765 103.628960" );
SpawnObject( "AK74_Hndgrd_Black", "10460.381836 6.017142 2379.833496", "90.000000 -89.913765 -135.803421" );
SpawnObject( "AK74", "10460.053711 6.011243 2379.524658", "90.000000 -89.913765 -114.181641" );
SpawnObject( "Mag_AK74_30Rnd", "10460.342773 6.011439 2379.364990", "90.000000 -89.913765 -158.413956" );
SpawnObject( "Mag_AK74_30Rnd", "10460.059570 6.011062 2379.339111", "90.000000 -89.913765 -1.348608" );
SpawnObject( "Mag_AK74_30Rnd", "10459.601563 6.010906 2379.679932", "-90.000000 89.913765 -42.493641" );
SpawnObject( "Mag_AK74_30Rnd", "10459.341797 6.010560 2379.169189", "-90.000000 89.913765 -53.117756" );
SpawnObject( "Mag_AK74_30Rnd", "10468.114258 6.016637 2373.285400", "-135.000015 89.886353 155.806046" );
SpawnObject( "Mag_AK74_30Rnd", "10468.054688 6.030249 2373.285889", "-135.000015 89.886353 13.177193" );
SpawnObject( "Mag_AK74_30Rnd", "10468.029297 6.057853 2373.285156", "119.518105 89.267509 162.704666" );
SpawnObject( "Mag_AK74_30Rnd", "10467.979492 6.050750 2373.285889", "-135.000015 89.886353 100.477188" );
SpawnObject( "AK74", "10467.447266 6.034766 2373.471680", "-135.000015 89.886353 119.418228" );
SpawnObject( "AK74_Hndgrd_Black", "10467.235352 6.022053 2373.503906", "-135.000015 89.886353 176.471954" );
SpawnObject( "AK74_WoodBttstck_Black", "10467.279297 6.021159 2373.823730", "-135.000015 89.886353 143.292236" );
SpawnObject( "Mp133Shotgun", "10459.228516 6.019206 2372.979004", "-116.564499 89.824165 -39.558865" );
SpawnObject( "Mp133Shotgun", "10473.834961 6.053552 2388.238525", "0.000000 -89.965729 0.000000" );
SpawnObject( "Ammo_12gaPellets", "10458.806641 6.007126 2373.105225", "131.774017 0.063054 0.158758" );
SpawnObject( "Ammo_12gaPellets", "10458.861328 6.023501 2373.070313", "-35.234291 -0.025769 -0.168873" );
SpawnObject( "Ammo_12gaPellets", "10458.924805 6.027686 2373.030762", "150.110718 0.009906 0.170537" );
SpawnObject( "Ammo_12gaPellets", "10458.985352 6.028811 2372.991455", "-65.041016 -0.106301 -0.133720" );
SpawnObject( "Ammo_12gaPellets", "10473.490234 6.013898 2388.211914", "126.324615 -0.016296 -0.106804" );
SpawnObject( "Ammo_12gaPellets", "10473.538086 6.030166 2388.168945", "9.679171 -0.088162 0.062446" );
SpawnObject( "Ammo_12gaPellets", "10473.599609 6.034224 2388.115234", "-175.215378 0.082492 -0.069738" );
SpawnObject( "Ammo_12gaPellets", "10473.605469 6.099321 2388.110840", "169.337357 0.060957 -0.089196" );
SpawnObject( "BallisticHelmet_Green", "10474.456055 6.018798 2382.028076", "-174.600037 0.007189 -0.076057" );
SpawnObject( "BallisticHelmet_Green", "10471.733398 6.022428 2378.435547", "24.829836 -0.032081 0.069334" );
SpawnObject( "BallisticHelmet_Green", "10461.962891 6.014025 2378.343262", "52.900761 0.060933 -0.046082" );
SpawnObject( "BallisticHelmet_Black", "10465.261719 6.015604 2375.376953", "87.882309 0.079167 0.073521" );
SpawnObject( "FlashGrenade", "10465.410156 6.026635 2373.203125", "0.000000 89.965729 0.000000" );
SpawnObject( "FlashGrenade", "0.000000 -51.573040 0.000000", "144.129227 87.900063 12.809361" );
SpawnObject( "FlashGrenade", "0.000000 -51.573040 0.000000", "144.129227 87.900063 177.147858" );
SpawnObject( "FlashGrenade", "10462.092773 6.026104 2380.123779", "-90.000000 89.913765 102.101807" );
SpawnObject( "FlashGrenade", "10471.369141 6.034468 2385.361572", "-135.000015 -89.886353 122.530090" );
SpawnObject( "FlashGrenade", "10476.686523 6.027860 2382.556641", "-90.000000 -89.913765 38.099003" );
SpawnObject( "FirefighterAxe", "10477.917969 6.021077 2384.606445", "145.828751 -0.042909 89.936790" );
SpawnObject( "FirefighterAxe", "10468.492188 6.123557 2388.853271", "74.261612 0.000000 90.000000" );
SpawnObject( "FirefighterAxe", "10462.097656 6.022977 2381.443848", "-104.661728 -0.073908 -89.980659" );
SpawnObject( "FirefighterAxe", "10464.021484 6.024806 2376.947510", "-106.815109 -0.095230 -90.051025" );
SpawnObject( "Sword", "10457.741211 6.003203 2375.568359", "73.454048 0.073233 -90.021751" );
SpawnObject( "Sword", "10478.548828 6.006234 2386.684570", "-28.156141 -0.031306 90.103409" );
SpawnObject( "M68Optic", "10471.433594 6.031137 2382.606201", "-90.000000 -89.913765 170.048828" );
SpawnObject( "M68Optic", "10470.287109 6.028489 2374.080078", "0.000000 -89.913765 -144.276855" );
SpawnObject( "M68Optic", "10465.402344 6.123046 2372.580322", "0.000000 -89.965729 179.999985" );
SpawnObject( "M68Optic", "10462.756836 6.023436 2379.590332", "90.000000 -89.913765 59.506538" );
SpawnObject( "ACOGOptic", "10461.607422 6.031132 2377.637939", "90.000000 -89.913765 -159.139053" );
SpawnObject( "ACOGOptic", "10470.293945 6.040202 2375.944580", "0.000000 -89.913765 -144.046127" );
SpawnObject( "ACOGOptic", "10473.539063 6.037556 2382.170654", "-90.000000 -89.913765 -165.231171" );
SpawnObject( "PSO1Optic", "10476.231445 6.034177 2381.401123", "90.000000 89.913765 -154.046753" );
SpawnObject( "PSO1Optic", "10457.262695 6.136379 2380.811279", "0.000000 -89.965729 0.000000" );
SpawnObject( "KobraOptic", "10464.012695 6.035232 2372.393066", "0.000000 -89.965729 179.999985" );
SpawnObject( "KobraOptic", "10467.528320 6.041960 2381.779541", "90.000000 -89.913765 31.611374" );
SpawnObject( "KashtanOptic", "10467.528320 6.113027 2381.779541", "90.000000 -89.905121 -141.263779" );
SpawnObject( "KashtanOptic", "10467.528320 6.151546 2381.779541", "38.999306 -74.846161 -83.798309" );
SpawnObject( "KashtanOptic", "10467.528320 6.190002 2381.779541", "42.266434 -62.911697 -48.458351" );
SpawnObject( "KashtanOptic", "10470.703125 6.046495 2383.313477", "-90.000000 -89.913765 -179.975266" );
SpawnObject( "KashtanOptic", "10470.390625 6.043986 2374.914063", "0.000000 -89.913765 78.082214" );
SpawnObject( "KashtanOptic", "10460.633789 6.134724 2381.308105", "0.000000 -89.965729 0.000000" );
SpawnObject( "PUScopeOptic", "10462.864258 6.035717 2376.244141", "0.000000 -89.965729 0.000000" );
SpawnObject( "PUScopeOptic", "10472.714844 6.042096 2381.475098", "-90.000000 -89.913765 78.233276" );
SpawnObject( "ReflexOptic", "10473.666992 6.025322 2375.753906", "90.000000 89.913765 92.900497" );
SpawnObject( "GhillieTop_Woodland", "10469.958984 6.175254 2377.908203", "90.000000 -89.913765 -36.714699" );
SpawnObject( "GhillieHood_Woodland", "10464.198242 6.000779 2378.215820", "98.242737 0.075607 0.010953" );
SpawnObject( "PlateCarrierVest", "10464.618164 6.002164 2374.545654", "116.546509 0.000000 0.000000" );
SpawnObject( "PlateCarrierVest", "10465.860352 6.107726 2386.342041", "-131.971786 0.000000 0.000000" );
SpawnObject( "PlateCarrierVest", "10473.711914 6.007231 2379.974365", "0.021983 -0.000029 0.076396" );
SpawnObject( "BalaclavaMask_Blackskull", "10473.476563 6.086026 2377.628174", "90.000000 89.913765 62.555317" );
SpawnObject( "BalaclavaMask_Blackskull", "10462.177734 6.182186 2384.928955", "0.000000 89.965729 0.000000" );
SpawnObject( "NailedBaseballBat", "10471.813477 6.053891 2383.285645", "90.000000 89.913765 57.787098" );
SpawnObject( "NailedBaseballBat", "10461.888672 6.045495 2372.554443", "-90.000000 89.913765 -31.836607" );
SpawnObject( "Mag_UMP_25Rnd", "10461.264648 6.015598 2371.165283", "-116.564499 89.824165 140.820145" );
SpawnObject( "Mag_UMP_25Rnd", "10461.309570 6.015590 2371.197510", "90.000000 -89.913765 -23.827333" );
SpawnObject( "Mag_UMP_25Rnd", "10461.382813 6.023777 2371.250244", "90.000000 -89.913765 115.769196" );
SpawnObject( "Mag_UMP_25Rnd", "10461.408203 6.056305 2371.268555", "-89.993935 89.905121 -70.086113" );
SpawnObject( "Mag_UMP_25Rnd", "10469.100586 6.022059 2374.443359", "-135.000015 89.886353 -111.136917" );
SpawnObject( "Mag_UMP_25Rnd", "10469.058594 6.037367 2374.438721", "-135.000015 89.886353 72.285423" );
SpawnObject( "Mag_UMP_25Rnd", "10469.005859 6.033293 2374.433105", "45.000000 -89.886353 -158.437347" );
SpawnObject( "Mag_UMP_25Rnd", "10469.306641 6.126088 2374.058350", "45.002556 -89.882965 13.830988" );
SpawnObject( "UMP45", "10469.637695 6.021687 2374.602295", "45.000000 -89.886353 -116.589142" );
SpawnObject( "UMP45", "10460.887695 6.012893 2370.779297", "63.435497 -89.824165 22.809710" );
SpawnObject( "UMP45", "10470.756836 6.116182 2388.581055", "0.000000 -89.965729 179.999985" );
SpawnObject( "Mag_UMP_25Rnd", "10470.592773 6.117332 2388.902100", "0.000000 -89.965729 0.000000" );
SpawnObject( "Mag_UMP_25Rnd", "10470.576172 6.134625 2388.868896", "0.000000 89.965729 0.000000" );
SpawnObject( "Mag_UMP_25Rnd", "10470.569336 6.165217 2388.855225", "-179.997589 -89.947662 -99.393250" );
SpawnObject( "Mag_UMP_25Rnd", "10470.555664 6.170082 2388.827148", "-0.002959 89.934380 -145.741058" );
SpawnObject( "Mag_UMP_25Rnd", "10470.553711 6.200822 2388.824463", "-0.007084 89.923386 -8.192146" );
//killhaus
SpawnObject( "Land_Tisy_Barracks", "7504.378418 10.277354 3552.409180", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_3m", "7497.770020 14.398100 3555.780029", "160.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_corner", "7491.359863 14.398100 3543.120117", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_3m", "7494.859863 14.398100 3542.949951", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_antenna", "7490.089844 17.583799 3546.860107", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_pillbox", "7496.689941 15.080300 3549.810059", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_bags_long", "7506.990234 16.577999 3550.909912", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_fortified_nest_small", "7516.140137 15.004600 3556.929932", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_razorwire", "7500.541016 6.735067 3542.596436", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_case_cans_b", "7496.959961 10.613900 3543.030029", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_case_cans_b", "7517.180176 10.613900 3552.570068", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_case_cans_b", "7502.359863 6.463210 3545.010010", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_case_a", "7493.029785 6.463310 3541.709961", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_case_cans_b", "7512.850098 6.463210 3559.850098", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_case_cans_b", "7515.970215 10.613900 3560.919922", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_case_cans_b", "7516.189941 10.613900 3556.149902", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_corner", "7519.390137 14.398100 3555.270020", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_bags_endl", "7512.850098 14.626600 3551.570068", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_bags_endr", "7508.839844 14.195000 3552.219971", "-170.000015 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_corner", "7488.299805 14.398100 3550.879883", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_corner", "7501.129883 14.398100 3555.909912", "160.000000 0.000000 0.000000" );
SpawnObject( "bldr_bridge_stone_25", "7594.609863 7.132390 3581.699951", "-20.000000 0.000000 90.000000" );
SpawnObject( "bldr_bridge_stone_25", "7559.640137 7.083420 3569.080078", "160.000000 0.000000 90.000000" );
SpawnObject( "Land_Castle_Gate", "7582.189941 9.389470 3561.229980", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Gate", "7571.209961 9.429650 3589.850098", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Stairs", "7593.879883 7.009420 3566.639893", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Castle_Stairs", "7556.680176 6.614880 3583.570068", "160.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_StadiumBenches", "7600.089844 14.912200 3585.159912", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_StadiumBenches", "7553.729980 14.297700 3566.830078", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_StadiumBenches", "7553.729980 14.297700 3566.830078", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_Statue_General", "7554.979980 6.882220 3567.409912", "-90.000000 40.000000 0.000000" );
SpawnObject( "bldr_Statue_General", "7599.830078 6.912090 3581.770020", "90.000000 40.000000 0.000000" );
SpawnObject( "bldr_rds_runway_beton", "7504.439941 5.981750 3552.360107", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_gate_cgry", "7569.450195 7.940370 3594.870117", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_gate_cgry", "7583.939941 7.923600 3555.949951", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_dragonteeth_big", "7579.640137 9.500000 3585.639893", "70.000000 0.000000 90.000000" );
SpawnObject( "bldr_misc_dragonteeth_big", "7567.439941 9.788540 3581.370117", "70.000000 0.000000 90.000000" );
SpawnObject( "bldr_misc_dragonteeth_big", "7586.350098 8.787300 3569.689941", "70.000000 0.000000 -90.000000" );
SpawnObject( "bldr_misc_dragonteeth_big", "7574.720215 8.761310 3565.610107", "70.000000 0.000000 -90.000000" );
SpawnObject( "Land_Wall_Gate_FenG_Big", "7584.140137 6.894810 3555.560059", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Wall_Gate_FenG_Big", "7569.470215 6.993580 3594.879883", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Wall_Gate_FenG_Open", "7585.399902 7.557800 3560.149902", "70.000000 0.000000 0.000000" );
SpawnObject( "Land_Wall_Gate_FenG", "7574.439941 7.617810 3588.790039", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_Monument_Soldiers", "7581.160156 21.579500 3560.159912", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_gate_cgry", "7580.240234 7.897170 3566.270020", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_gate_cgry", "7572.979980 7.991450 3584.770020", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Wall_Gate_FenG_Big", "7573.240234 6.973800 3584.479980", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Wall_Gate_FenG_Big", "7580.069824 6.916710 3566.530029", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_flag_chernarus_wall", "7583.959961 16.000299 3555.250000", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_flag_chernarus_wall", "7569.419922 16.023500 3595.590088", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_StadiumBenches", "7559.700195 14.383500 3558.909912", "-140.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_StadiumBenches", "7595.459961 14.467200 3592.239990", "20.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_camonet_roof_nato", "7571.439941 18.557199 3589.639893", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_flag_chernarus_pole", "7557.839844 7.200270 3566.350098", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_flag_chernarus_pole", "7596.609863 7.648250 3582.800049", "179.999985 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "7554.430176 17.000000 3575.219971", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "7600.120117 16.544201 3574.969971", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "7569.899902 6.019480 3572.610107", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "7566.259766 6.010520 3571.070068", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "7582.540039 6.044550 3575.689941", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_City_Stand_FastFood", "7574.520020 7.768190 3599.489990", "160.000000 0.000000 0.000000" );
SpawnObject( "Land_City_Stand_Grocery", "7578.359863 7.759310 3551.879883", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Sunshade", "7570.990234 7.285540 3540.350098", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Sunshade", "7604.049805 7.291800 3552.189941", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Sunshade", "7550.169922 7.297400 3605.729980", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Sunshade", "7579.859863 7.041750 3616.870117", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "7571.029785 6.473760 3540.530029", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "7604.009766 6.479900 3552.100098", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "7579.799805 6.228800 3617.070068", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "7550.149902 6.482990 3606.120117", "70.000000 0.000000 0.000000" );
SpawnObject( "Land_City_Stand_News2", "7561.930176 7.620600 3595.169922", "160.000000 0.000000 0.000000" );
SpawnObject( "Land_City_Stand_News2", "7590.740234 7.582780 3556.870117", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_bags_endl", "7505.500000 14.626600 3547.199951", "-59.999996 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_3m", "7511.540039 14.398100 3559.209961", "160.000000 0.000000 0.000000" );
SpawnObject( "Land_Radio_PanelPAS", "7506.439941 10.614000 3550.889893", "70.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "7510.490234 9.481050 3537.699951", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "7519.529785 9.477990 3540.800049", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_mud_7_100", "7510.520020 5.998720 3525.149902", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_mud_22_50", "7520.850098 5.997960 3529.070068", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_mud_22_50", "7525.939941 6.000000 3516.709961", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_mud_22_50", "7527.930176 6.000000 3514.290039", "-29.999998 0.000000 0.000000" );
SpawnObject( "bldr_rds_mud_22_50", "7518.319824 6.000000 3525.040039", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_mud_22_50", "7521.649902 6.000000 3501.169922", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_mud_25", "7529.939941 6.000000 3486.320068", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_mud_60_10", "7529.410156 6.000000 3502.489990", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_case_a", "7505.600098 6.463220 3546.110107", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_case_a", "7505.490234 10.614000 3546.149902", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Uaz", "7522.379883 6.828690 3535.870117", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Police", "7486.700195 6.712640 3544.750000", "-179.999985 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Police", "7515.439941 6.712640 3547.070068", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_wreck_brdm", "7513.129883 6.547330 3516.439941", "70.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Blue", "7503.229980 6.736940 3501.959961", "140.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_S1023_Beige", "7544.310059 6.999130 3479.169922", "-29.999998 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_2sb_Trail_G", "7466.914551 13.819901 3490.677490", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_2sb_Trail_G", "7447.359863 13.847200 3463.399902", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wall_Gate_Camp", "7515.220215 7.514900 3536.909912", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7507.529785 6.488690 3534.159912", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9_2", "7490.770020 6.490610 3527.969971", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9_2", "7523.279785 6.482430 3539.320068", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7531.680176 6.480000 3542.530029", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7540.080078 6.481390 3545.669922", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7499.189941 6.490000 3531.169922", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7482.279785 6.491320 3525.000000", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7473.299805 6.489250 3536.030029", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7470.120117 6.478940 3544.449951", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7467.029785 6.485010 3552.770020", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7476.350098 6.492810 3527.649902", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7542.649902 6.480630 3551.580078", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7539.709961 6.494770 3559.969971", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7533.379883 6.530450 3576.979980", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9_2", "7536.669922 6.506810 3568.550049", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7527.589844 6.542160 3579.719971", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7519.109863 6.535830 3576.610107", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7510.569824 6.519490 3573.600098", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7502.129883 6.511290 3570.540039", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7493.750000 6.505810 3567.370117", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7476.770020 6.497600 3561.209961", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9", "7485.169922 6.501820 3564.370117", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_tincom_9_2", "7469.580078 6.494600 3558.500000", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Metal1", "7500.299805 6.219210 3530.560059", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Metal3", "7503.910156 5.938560 3531.239990", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Metal2", "8662.559570 87.790298 3008.260010", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile3", "7532.540039 6.249190 3542.070068", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "7506.140137 6.545730 3545.000000", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_gcontainer_big", "7474.310059 6.711770 3552.469971", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container", "7520.879883 6.838630 3560.330078", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Glass", "7504.220215 6.835410 3557.919922", "-37.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Plastic", "7506.370117 6.836690 3558.879883", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Glass", "7509.390137 6.837650 3559.600098", "50.000004 0.000000 0.000000" );
SpawnObject( "ChristmasTree", "7527.672852 13.727050 3563.755371", "0.000000 0.000000 0.000000" );
SpawnObject( "AK74", "7530.004883 6.001973 3557.769287", "0.000000 -89.842979 -69.073143" );
SpawnObject( "AK74", "7530.876953 6.032471 3571.991455", "0.000000 -89.768448 -92.320930" );
SpawnObject( "AK74_Hndgrd", "7530.446289 6.038370 3571.825684", "-179.999985 89.768448 -16.946938" );
SpawnObject( "AK74_Hndgrd", "7530.289063 6.009613 3558.060059", "-153.435486 89.824165 -3.335601" );
SpawnObject( "AK74_WoodBttstck", "7530.063477 6.006473 3557.512451", "-153.435486 89.824165 151.971878" );
SpawnObject( "AK74_WoodBttstck", "7530.989258 6.035864 3571.687744", "0.000000 -89.768448 -40.474861" );
SpawnObject( "Mag_AK74_30Rnd", "7531.425781 6.032533 3572.054199", "0.000000 -89.768448 -169.381393" );
SpawnObject( "Mag_AK74_30Rnd", "7531.296387 6.034158 3572.460449", "0.000000 -89.768448 171.666611" );
SpawnObject( "Mag_AK74_30Rnd", "7530.412109 6.033998 3572.420410", "0.000000 -89.768448 49.165298" );
SpawnObject( "Mag_AK74_30Rnd", "7530.779785 6.036202 3572.971680", "0.000000 -89.768448 -46.924042" );
SpawnObject( "Mag_AK74_30Rnd", "7529.523438 6.001606 3557.734131", "0.000000 -89.842979 123.874619" );
SpawnObject( "Mag_AK74_30Rnd", "7529.730469 6.002494 3558.066895", "0.000000 -89.842979 -10.162663" );
SpawnObject( "Mag_AK74_30Rnd", "7530.086426 6.003389 3558.359131", "26.564503 -89.824165 74.765388" );
SpawnObject( "Mag_AK74_30Rnd", "7530.424316 6.002646 3557.740967", "-153.435486 89.824165 -157.368607" );
SpawnObject( "Mosin9130", "7526.269043 6.010068 3558.077148", "-44.998634 -89.886353 164.225937" );
SpawnObject( "Mosin9130", "7534.484375 6.026912 3567.214600", "-179.999985 89.913765 -133.581345" );
SpawnObject( "Ammo_762x54", "7534.249023 6.013575 3567.116455", "-157.504776 -0.070583 -0.029230" );
SpawnObject( "Ammo_762x54", "7534.409180 6.012826 3566.554443", "-86.904495 0.004125 -0.076285" );
SpawnObject( "AmmoBox_762x54_20Rnd", "7534.706055 6.017939 3566.957764", "0.000000 -89.913765 167.843262" );
SpawnObject( "AmmoBox_762x54_20Rnd", "7533.729004 6.018650 3567.384277", "-179.999985 89.913765 -171.166702" );
SpawnObject( "AmmoBox_762x54_20Rnd", "7525.852539 6.001917 3558.294678", "-44.998634 -89.886353 97.899475" );
SpawnObject( "AmmoBox_762x54_20Rnd", "7526.805176 6.000420 3558.017578", "135.001358 89.886353 170.477219" );
SpawnObject( "Ammo_762x54", "7526.297852 5.996966 3558.458008", "33.003994 0.022457 0.105678" );
SpawnObject( "Ammo_762x54", "7526.475098 5.995947 3557.871338", "153.615585 -0.102386 -0.034485" );
SpawnObject( "SKS", "7519.399414 6.055523 3571.979004", "0.000000 -89.768448 -37.991882" );
SpawnObject( "SKS", "7536.127930 6.032386 3558.600342", "0.000000 -89.913765 -66.776932" );
SpawnObject( "AmmoBox_762x39_20Rnd", "7535.287109 6.020932 3558.376465", "-179.999985 89.913765 134.372391" );
SpawnObject( "AmmoBox_762x39_20Rnd", "7536.154297 6.020275 3557.884277", "-179.999985 89.913765 77.791061" );
SpawnObject( "Ammo_762x39", "7536.391113 5.997269 3558.214355", "69.040207 0.027328 0.071341" );
SpawnObject( "Ammo_762x39", "7535.855469 5.997940 3558.717529", "149.945969 -0.066125 0.038260" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "7535.852539 6.037488 3558.935547", "-179.999985 89.913765 -143.667084" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "7535.983887 6.036216 3557.981689", "-179.999985 89.913765 147.995850" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "7519.288086 6.058125 3571.470947", "0.000000 -89.768448 161.767624" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "7519.395020 6.061535 3572.323486", "0.000000 -89.768448 -52.724995" );
SpawnObject( "AmmoBox_762x39_20Rnd", "7519.538086 6.043396 3571.740967", "-179.999985 89.768448 -14.452973" );
SpawnObject( "AmmoBox_762x39_20Rnd", "7518.448730 6.045350 3572.044922", "0.000000 -89.768448 -98.836014" );
SpawnObject( "Ammo_762x39", "7518.958008 6.018977 3571.498291", "-8.745452 0.226515 -0.034846" );
SpawnObject( "Ammo_762x39", "7519.167969 6.022248 3572.316162", "168.260651 -0.224386 0.046629" );
SpawnObject( "SVD", "7524.415527 6.023151 3562.430908", "0.000000 -89.842979 121.633324" );
SpawnObject( "Mag_SVD_10Rnd", "7524.394043 6.014326 3562.581055", "0.000000 -89.913765 80.037834" );
SpawnObject( "Mag_SVD_10Rnd", "7525.181152 6.013577 3562.240479", "-179.999985 89.842979 -59.498287" );
SpawnObject( "Mag_SVD_10Rnd", "7525.020996 6.014233 3562.486572", "-179.999985 89.842979 42.578812" );
SpawnObject( "Mag_SVD_10Rnd", "7524.255371 6.015080 3563.108398", "-179.999985 89.913765 -98.632759" );
SpawnObject( "SVD", "7530.396484 6.023845 3562.882324", "0.000000 -89.913765 -140.761124" );
SpawnObject( "Mag_SVD_10Rnd", "7529.937988 6.013897 3562.360352", "-179.999985 89.842979 168.431030" );
SpawnObject( "Mag_SVD_10Rnd", "7530.327148 6.013329 3561.999023", "26.564503 -89.824165 153.737534" );
SpawnObject( "Mag_SVD_10Rnd", "7530.610352 6.014917 3562.985840", "-179.999985 89.913765 134.537186" );
SpawnObject( "Mag_SVD_10Rnd", "7531.541016 6.014373 3562.578125", "-179.999985 89.913765 -0.917368" );
SpawnObject( "FAL", "7527.715820 6.030812 3568.497314", "-179.999985 89.913765 146.589554" );
SpawnObject( "Mag_FAL_20Rnd", "7527.923340 6.022364 3568.609863", "0.000000 -89.913765 75.621231" );
SpawnObject( "Mag_FAL_20Rnd", "7527.036133 6.021791 3568.180664", "0.000000 -89.913765 2.768648" );
SpawnObject( "Mag_FAL_20Rnd", "7527.047852 6.023283 3569.260254", "-179.999985 89.913765 117.441925" );
SpawnObject( "Mag_FAL_20Rnd", "7527.499512 6.037483 3568.739746", "-179.999985 89.913765 -93.952438" );
SpawnObject( "Fal_FoldingBttstck", "7526.640625 6.025759 3568.701904", "-179.999985 89.913765 -114.112976" );
SpawnObject( "Fal_FoldingBttstck", "7527.946777 6.014287 3561.198242", "0.000000 -89.842979 134.817352" );
SpawnObject( "FAL", "7527.829590 6.017988 3560.880615", "0.000000 -89.842979 24.082773" );
SpawnObject( "Mag_FAL_20Rnd", "7527.388672 6.009174 3560.589355", "-179.999985 89.842979 -130.439178" );
SpawnObject( "Mag_FAL_20Rnd", "7527.750977 6.009030 3560.535400", "-179.999985 89.842979 167.244476" );
SpawnObject( "Mag_FAL_20Rnd", "7528.260742 6.010334 3561.024414", "-179.999985 89.842979 97.116615" );
SpawnObject( "Mag_FAL_20Rnd", "7528.116211 6.008925 3560.515381", "0.000000 -89.842979 -41.529583" );
SpawnObject( "M4A1", "7523.561035 6.023969 3560.582764", "135.001358 89.886353 145.087067" );
SpawnObject( "M4A1", "7522.232910 6.035400 3568.141602", "-179.999985 89.913765 113.519699" );
SpawnObject( "M4_PlasticHndgrd", "7521.898926 6.039742 3567.972656", "0.000000 -89.913765 67.853630" );
SpawnObject( "M4_CQBBttstck", "7522.016113 6.033090 3567.790771", "0.000000 -89.913765 100.440102" );
SpawnObject( "M4_CarryHandleOptic", "7522.401367 6.026547 3568.146973", "-179.999985 89.913765 47.401958" );
SpawnObject( "M4_CarryHandleOptic", "7523.316406 6.015460 3560.651855", "135.001358 89.886353 -71.811615" );
SpawnObject( "M4_OEBttstck", "7523.658203 6.017861 3560.311768", "-44.998634 -89.886353 -9.088664" );
SpawnObject( "M4_PlasticHndgrd", "7523.253418 6.028298 3560.144043", "135.001358 89.886353 39.340446" );
SpawnObject( "Mag_STANAGCoupled_30Rnd", "7522.894531 6.052176 3560.133545", "135.001358 89.886353 -70.394356" );
SpawnObject( "Mag_STANAGCoupled_30Rnd", "7522.617188 6.024848 3567.877686", "0.000000 -89.913765 -45.638599" );
SpawnObject( "Mag_STANAG_30Rnd", "7521.793457 6.021687 3568.467529", "-179.999985 89.913765 -81.614433" );
SpawnObject( "Mag_STANAG_30Rnd", "7524.335449 6.007330 3560.242676", "-44.998634 -89.886353 -8.835963" );
SpawnObject( "Mag_STANAG_30Rnd", "7523.073242 6.011086 3561.090576", "135.001358 89.886353 118.037903" );
SpawnObject( "Mag_STANAG_30Rnd", "7521.412598 6.020860 3567.847168", "-179.999985 89.913765 -48.489635" );
SpawnObject( "AKM", "7524.328613 6.030210 3571.426514", "0.000000 -89.768448 86.530960" );
SpawnObject( "Mag_AKM_30Rnd", "7524.054688 6.029838 3571.567383", "0.000000 -89.768448 -142.793640" );
SpawnObject( "Mag_AKM_30Rnd", "7524.928223 6.030547 3571.051758", "-179.999985 89.768448 74.626907" );
SpawnObject( "Mag_AKM_30Rnd", "7524.879395 6.033324 3571.745850", "-179.999985 89.768448 -84.481918" );
SpawnObject( "Mag_AKM_30Rnd", "7524.849609 6.030848 3571.819824", "0.000000 -89.768448 -99.341408" );
SpawnObject( "AKM", "7533.426270 6.034004 3562.847656", "-179.999985 89.913765 -116.914574" );
SpawnObject( "Mag_AKM_30Rnd", "7533.795410 6.016242 3562.426514", "-179.999985 89.913765 -13.760800" );
SpawnObject( "Mag_AKM_30Rnd", "7534.012207 6.016890 3562.912842", "-179.999985 89.913765 -45.808880" );
SpawnObject( "Mag_AKM_30Rnd", "7533.635254 6.014786 3563.413818", "0.000000 -89.913765 145.562302" );
SpawnObject( "Mag_AKM_30Rnd", "7532.763672 6.013243 3562.257080", "0.000000 -89.913765 151.923584" );
SpawnObject( "Mag_AKM_Drum75Rnd", "7522.729004 6.060625 3569.790771", "-106.221786 -0.021342 -90.073357" );
SpawnObject( "Mag_AKM_Drum75Rnd", "7535.476563 6.054455 3565.162842", "69.169281 0.027167 -89.928604" );
SpawnObject( "AK_WoodHndgrd", "7533.292480 6.021334 3563.525879", "0.000000 -89.913765 -70.677200" );
SpawnObject( "AK_WoodHndgrd", "7524.270508 6.039755 3572.171875", "-179.999985 89.768448 -83.690933" );
SpawnObject( "AK_WoodBttstck", "7524.388672 6.033908 3571.054932", "-179.999985 89.768448 -93.095505" );
SpawnObject( "AK_WoodBttstck", "7533.417969 6.018382 3561.952881", "0.000000 -89.913765 -62.525101" );
SpawnObject( "CZ61", "7531.109375 6.011214 3560.157959", "26.564503 -89.824165 -40.968117" );
SpawnObject( "CZ61", "7528.056152 6.057736 3571.760986", "0.000000 -89.842979 -123.369232" );
SpawnObject( "Mag_CZ61_20Rnd", "7530.741699 6.005478 3560.104248", "-153.435486 89.824165 -60.213535" );
SpawnObject( "Mag_CZ61_20Rnd", "7531.316895 6.004820 3559.772705", "26.564503 -89.824165 -91.232101" );
SpawnObject( "Mag_CZ61_20Rnd", "7531.710938 6.007656 3560.436523", "-153.435486 89.824165 52.685383" );
SpawnObject( "Mag_CZ61_20Rnd", "7530.868652 6.006273 3560.541748", "26.564503 -89.824165 -170.105347" );
SpawnObject( "Mag_CZ61_20Rnd", "7527.652344 6.027909 3571.757813", "-179.999985 89.768448 167.277435" );
SpawnObject( "Mag_CZ61_20Rnd", "7528.429199 6.028775 3572.109619", "0.000000 -89.768448 113.316429" );
SpawnObject( "Mag_CZ61_20Rnd", "7528.228516 6.026725 3571.596924", "0.000000 -89.768448 112.580322" );
SpawnObject( "Mag_CZ61_20Rnd", "7527.754883 6.030448 3572.392822", "-179.999985 89.768448 124.616234" );
SpawnObject( "MP5K", "7531.973633 6.024039 3568.432617", "-179.999985 89.913765 -81.998947" );
SpawnObject( "MP5_PlasticHndgrd", "7531.879883 6.023304 3567.997070", "0.000000 -89.913765 -85.476234" );
SpawnObject( "bldr_MP5k_StockBttstck", "7532.431152 6.007994 3568.494873", "0.000000 0.000000 0.000000" );
SpawnObject( "Mag_MP5_30Rnd", "7531.652832 6.012391 3568.397949", "0.000000 -89.913765 -32.289803" );
SpawnObject( "Mag_MP5_30Rnd", "7532.160156 6.013438 3568.950195", "-179.999985 89.913765 -37.744682" );
SpawnObject( "Mag_MP5_30Rnd", "7531.801758 6.012738 3568.657959", "0.000000 -89.913765 -103.867905" );
SpawnObject( "Mag_MP5_30Rnd", "7532.305176 6.011705 3567.883301", "0.000000 -89.913765 170.227356" );
SpawnObject( "Mag_MP5_30Rnd", "7522.848633 6.008713 3565.406982", "-179.999985 89.913765 52.115238" );
SpawnObject( "Mag_MP5_30Rnd", "7522.904785 6.009215 3565.783447", "-179.999985 89.913765 -28.384031" );
SpawnObject( "Mag_MP5_30Rnd", "7522.699219 6.007659 3564.849365", "0.000000 -89.913765 -92.936180" );
SpawnObject( "Mag_MP5_30Rnd", "7522.286133 6.008384 3565.393066", "0.000000 -89.913765 154.417557" );
SpawnObject( "MP5K", "7522.659668 6.019593 3565.213867", "0.000000 -89.913765 -132.576050" );
SpawnObject( "MP5_RailHndgrd", "7522.291992 6.026953 3564.839355", "0.000000 -89.913765 -79.851067" );
SpawnObject( "MP5k_StockBttstck", "7523.486816 6.020086 3565.468262", "-179.999985 89.913765 18.375196" );
SpawnObject( "UMP45", "7525.989746 6.043401 3574.318115", "-179.999985 89.768448 107.147438" );
SpawnObject( "UMP45", "7528.368164 5.998312 3555.120850", "-44.998634 -89.886353 56.820332" );
SpawnObject( "Mag_UMP_25Rnd", "7528.551758 5.999261 3554.983154", "90.000000 89.913765 -26.755266" );
SpawnObject( "Mag_UMP_25Rnd", "7527.904297 6.000600 3555.472168", "-44.998634 -89.886353 83.759636" );
SpawnObject( "Mag_UMP_25Rnd", "7528.457520 5.999915 3555.511230", "-44.998634 -89.886353 158.194260" );
SpawnObject( "Mag_UMP_25Rnd", "7526.519043 6.044964 3574.408203", "-179.999985 89.768448 -30.032053" );
SpawnObject( "Mag_UMP_25Rnd", "7525.804199 6.047595 3575.065918", "-179.999985 89.768448 143.095795" );
SpawnObject( "Mag_UMP_25Rnd", "7525.605469 6.043914 3574.145752", "-179.999985 89.768448 164.816422" );
SpawnObject( "VSS", "7525.939453 6.025507 3566.596924", "-179.999985 89.913765 -121.880554" );
SpawnObject( "Mag_VSS_10Rnd", "7525.446289 6.022675 3566.420166", "-179.999985 89.913765 139.316376" );
SpawnObject( "Mag_VSS_10Rnd", "7526.387207 6.022577 3566.488281", "0.000000 -89.913765 81.477119" );
SpawnObject( "Mag_VSS_10Rnd", "7525.677734 6.023464 3567.011963", "-179.999985 89.913765 -139.316360" );
SpawnObject( "Mag_VSS_10Rnd", "7526.411133 6.023455 3567.146973", "0.000000 -89.913765 109.987488" );
SpawnObject( "Mp133Shotgun", "7524.691895 6.012035 3555.858643", "-44.998634 -89.886353 -6.715535" );
SpawnObject( "Mp133Shotgun", "7518.462402 6.030770 3567.609375", "-179.999985 89.913765 131.647675" );
SpawnObject( "Ammo_12gaPellets", "7518.619629 6.020294 3568.094971", "-127.478218 -0.046484 -0.060627" );
SpawnObject( "Ammo_12gaPellets", "7518.353027 6.019018 3567.138184", "-93.463539 -0.004615 -0.076257" );
SpawnObject( "Ammo_12gaPellets", "7517.983887 6.019347 3567.385254", "129.554718 -0.048650 0.058903" );
SpawnObject( "Ammo_12gaPellets", "7517.996582 6.035724 3567.463623", "-13.843207 0.074177 -0.018279" );
SpawnObject( "Ammo_12gaPellets", "7524.057617 6.001926 3555.877930", "129.027435 -0.107451 0.011244" );
SpawnObject( "Ammo_12gaPellets", "7524.867676 6.000478 3555.601318", "116.821228 -0.102644 0.033708" );
SpawnObject( "Ammo_12gaPellets", "7525.499512 5.999674 3555.630615", "66.436363 -0.039482 0.100565" );
SpawnObject( "Ammo_12gaPellets", "7524.149414 6.002240 3556.204834", "142.189453 -0.107189 -0.013518" );
SpawnObject( "PlateCarrierVest", "7532.736328 5.996860 3559.142578", "-89.815964 -0.075901 -0.153033" );
SpawnObject( "PlateCarrierVest", "7524.812500 6.009813 3568.236572", "100.692757 -0.014175 0.075070" );
SpawnObject( "ACOGOptic", "7520.198242 6.040603 3568.745850", "0.000000 -89.913765 -42.002010" );
SpawnObject( "ACOGOptic", "7532.848633 6.023129 3557.629150", "26.564503 -89.824165 -82.124161" );
SpawnObject( "PUScopeOptic", "7534.966309 6.034048 3561.238525", "0.000000 -89.913765 87.146210" );
SpawnObject( "PUScopeOptic", "7520.032715 6.038893 3564.871582", "0.000000 -89.913765 10.613120" );
SpawnObject( "KashtanOptic", "7529.260742 6.029585 3559.556396", "0.000000 -89.842979 -173.534332" );
SpawnObject( "KashtanOptic", "7525.870117 6.051054 3570.904785", "0.000000 -89.768448 137.948547" );
SpawnObject( "LongrangeOptic", "7521.486816 6.009536 3562.682373", "130.870361 -0.049990 -89.942230" );
SpawnObject( "PSO1Optic", "7525.730957 6.031787 3557.402588", "-44.998634 -89.886353 72.608147" );
SpawnObject( "PSO1Optic", "7531.772461 6.069236 3574.080566", "0.000000 -89.768448 95.166466" );
SpawnObject( "KobraOptic", "7526.746582 6.021733 3556.622559", "-44.998634 -89.886353 -8.934850" );
SpawnObject( "KobraOptic", "7527.919434 6.048321 3570.770996", "0.000000 -89.768448 46.100048" );
SpawnObject( "M4_T3NRDSOptic", "7524.499023 6.018984 3569.941650", "-101.706268 -0.015500 -90.074806" );
SpawnObject( "M4_T3NRDSOptic", "7536.241211 6.010859 3563.847412", "146.669174 -0.063830 -89.958023" );
SpawnObject( "M68Optic", "7528.395996 6.011299 3558.093750", "0.000000 -89.842979 -76.060661" );
SpawnObject( "M68Optic", "7525.896484 6.032548 3569.625000", "0.000000 -89.913765 -50.747395" );
SpawnObject( "GhillieHood_Woodland", "7524.745605 5.994328 3560.931641", "64.997177 0.064578 0.138470" );
SpawnObject( "GhillieTop_Woodland", "7531.463379 6.168285 3564.733154", "0.000000 -89.913765 65.172890" );
SpawnObject( "BallisticHelmet_Green", "7533.209961 6.012219 3560.600586", "-21.544859 0.071058 -0.028055" );
SpawnObject( "BallisticHelmet_Green", "7526.136230 6.034606 3572.457275", "27.818417 0.202694 0.106951" );
SpawnObject( "BallisticHelmet_Green", "7521.617676 6.012435 3560.762695", "3.153162 0.076280 0.004202" );
SpawnObject( "BakedBeansCan_Opened", "7532.978516 6.058045 3565.152832", "66.425369 0.030554 0.070020" );
SpawnObject( "BakedBeansCan_Opened", "7530.987305 6.038691 3556.074707", "72.116486 0.119620 0.121947" );
SpawnObject( "BakedBeansCan_Opened", "7520.060059 6.060887 3567.284180", "-24.324488 0.069614 -0.031468" );
SpawnObject( "BakedBeansCan_Opened", "7525.297363 6.063735 3569.419922", "72.522942 0.022944 0.072869" );
SpawnObject( "Canteen", "7528.157227 6.157744 3573.405762", "-74.511665 0.061201 -0.220857" );
SpawnObject( "Canteen", "7522.907715 6.135291 3563.381348", "79.763161 0.013577 0.075180" );
SpawnObject( "Canteen", "7532.331055 6.131009 3560.171631", "-125.885162 -0.044781 -0.061896" );
SpawnObject( "Canteen", "7525.343262 6.125883 3559.167969", "-93.496506 0.071591 -0.080913" );
SpawnObject( "M67Grenade", "7528.306641 6.021470 3557.568115", "30.268328 0.131959 0.077013" );
SpawnObject( "M67Grenade", "7537.240723 6.032827 3561.156006", "-124.248131 -0.042994 -0.063150" );
SpawnObject( "M67Grenade", "7530.979492 6.046791 3570.541260", "112.657059 -0.088284 0.211493" );
SpawnObject( "M67Grenade", "7520.896484 6.044338 3569.789551", "-29.894726 0.066231 -0.038076" );
SpawnObject( "M18SmokeGrenade_Red", "7524.495117 6.058803 3573.200439", "0.000000 -89.768448 18.138979" );
SpawnObject( "M18SmokeGrenade_Red", "7529.137207 6.045467 3569.600342", "0.000000 -89.913765 32.916039" );
SpawnObject( "M18SmokeGrenade_Red", "7535.608398 6.032416 3559.812256", "0.000000 -89.913765 110.295113" );
SpawnObject( "M18SmokeGrenade_Red", "7527.827148 6.025227 3558.459961", "-179.999985 89.842979 19.353010" );
SpawnObject( "FlashGrenade", "7523.321777 6.019163 3557.718262", "135.001358 89.886353 37.714409" );
SpawnObject( "FlashGrenade", "7532.292480 6.040637 3570.964844", "0.000000 -89.768448 -103.109833" );
SpawnObject( "FlashGrenade", "7526.792480 6.040502 3570.931152", "0.000000 -89.768448 127.489235" );
SpawnObject( "Sword", "7529.339844 6.041177 3575.323975", "150.607727 -0.199680 90.112465" );
SpawnObject( "Sword", "7532.067383 5.995480 3556.065918", "-112.511650 -0.129070 89.888100" );
SpawnObject( "Sword", "7519.643555 6.011039 3563.369629", "-145.449661 -0.062922 89.956665" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_2sb", "7437.104980 14.330023 3424.810791", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_2s", "7445.726563 13.825905 3432.614502", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_2s", "7477.624023 13.648427 3467.681152", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_betulaHumilis_1s", "7471.602539 6.845202 3489.185547", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_betulaHumilis_1s", "7465.698730 6.845202 3488.420410", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_betulaHumilis_1s", "7450.376953 6.845202 3471.145996", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_betulaHumilis_1s", "7441.887695 7.144314 3434.331299", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_betulaHumilis_1s", "7449.432617 6.933586 3426.715576", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_betulaHumilis_1s", "7431.058594 7.150532 3459.296875", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_betulaHumilis_1s", "7424.791504 6.857305 3503.063477", "0.000000 0.000000 0.000000" );
//Solnichny Cache
//Your custom spawned objects
SpawnObject( "Land_Tower_TC3_Red", "13328.362305 8.801027 6629.551758", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_ship_medium_front", "13415.840820 3.500773 6820.849121", "10.000001 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container", "13354.120117 6.513427 6662.096191", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_container_2b", "13334.032227 6.572506 6965.573730", "-90.000000 0.000000 0.000000" );
SpawnObject( "bldr_container_1b", "13402.147461 2.557530 6784.193848", "-29.999998 0.000000 0.000000" );
SpawnObject( "bldr_container_1a", "13392.196289 4.070590 6759.578125", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_container_2e", "13409.627930 3.062238 6766.172363", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_gcontainer_big", "13304.575195 7.039513 6774.726074", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Container_1Moh", "13373.368164 4.162440 6848.363281", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Container_1Bo", "13383.200195 3.943748 6812.013184", "-29.999998 0.000000 0.000000" );
SpawnObject( "Land_Mil_Guardhouse1", "13292.605469 8.866461 6917.188477", "160.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Airfield_HQ", "13229.156250 12.666901 6671.869629", "-19.999987 0.000000 0.000000" );
SpawnObject( "Land_Mil_GuardShed", "13301.242188 6.737242 6902.607910", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_radar_mobile_head", "13251.761719 12.158026 6627.399414", "-119.999992 0.000000 0.000000" );
SpawnObject( "bldr_mil_radar_mobile_generator", "13262.268555 9.242492 6587.797363", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_radar_mobile_base", "13251.709961 8.198139 6627.263184", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Decal_Heli_Army", "13243.313477 6.892344 6597.217285", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_radar_mobile_generator", "13319.793945 10.157712 6629.862793", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runwayold_40_main", "13229.355469 15.684891 6674.062988", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_tirepile_group", "13228.104492 11.500539 6687.842285", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "13285.711914 6.700000 6788.822266", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Medium1", "13289.889648 6.110050 6781.718262", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Dead_MassGrave", "13301.756836 6.333302 6781.437988", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile1", "13306.885742 6.353143 6782.668945", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile1", "13300.103516 6.218172 6785.190430", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Dead_pile4", "13294.155273 6.191925 6779.440918", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_bulldozer", "13305.588867 7.335482 6791.013672", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_wreck_digger", "13292.420898 9.090452 6777.260742", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_misc_concretepanels", "13320.485352 7.434826 6747.717285", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_misc_concretepipe", "13286.058594 6.973014 6716.230469", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_concretepipe", "13290.425781 6.722343 6723.563965", "10.000004 0.000000 0.000000" );
SpawnObject( "bldr_misc_concretepipe", "13284.526367 6.546565 6731.893066", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_concretepipe", "13291.878906 6.712326 6731.398926", "-70.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_Concrete1", "13314.237305 7.386637 6742.061523", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Train_742_Red", "13248.038086 8.303229 6783.057129", "-17.000000 0.000000 0.000000" );
SpawnObject( "Land_Train_Wagon_Box", "13244.521484 7.624497 6794.791016", "-17.000000 0.000000 0.000000" );
SpawnObject( "Land_Train_Wagon_Box", "13241.066406 7.624497 6806.332031", "-17.000000 0.000000 0.000000" );
SpawnObject( "Land_Farm_Hopper", "13250.427734 12.406260 6758.969238", "70.000000 0.000000 0.000000" );
SpawnObject( "Land_Radio_building", "13370.059570 9.745758 6663.784180", "165.000000 0.000000 0.000000" );
SpawnObject( "bldr_radio_building_logo", "13380.874023 6.789790 6678.416504", "169.999969 0.000000 0.000000" );
SpawnObject( "Land_Radio_PanelBig", "13367.582031 9.153126 6668.140137", "-109.999985 0.000000 0.000000" );
SpawnObject( "Land_Radio_PanelPAS", "13370.204102 9.153126 6668.856934", "-110.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_cncblocks_long", "13347.492188 6.178947 6777.845703", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_coil", "13273.280273 6.998095 6755.907227", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_boardspack3", "13276.692383 6.522775 6764.890625", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_boardspack3", "13270.357422 6.662675 6761.117188", "20.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_pallets", "13313.353516 6.625578 6767.342285", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_pallets", "13310.817383 6.624511 6768.733887", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_container_1c", "13421.575195 3.124446 6716.859863", "-59.999996 0.000000 0.000000" );
SpawnObject( "bldr_container_1a", "13451.026367 2.878659 6654.206055", "100.000008 0.000000 0.000000" );
SpawnObject( "bldr_container_1d", "13366.036133 4.328621 6904.836914", "80.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_antenna", "13264.838867 10.636163 6584.605469", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rds_runway_poj_spoj_2", "13369.677734 5.316929 6669.688477", "75.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13374.812500 5.579772 6678.247559", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13360.835938 5.453756 6674.221191", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13361.671875 5.165164 6665.336426", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Lada_Green", "13363.829102 5.933681 6675.741211", "98.999992 0.000000 0.000000" );
SpawnObject( "Land_Wreck_S1023_Blue", "13371.848633 6.631717 6679.822266", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_RoadBarrier", "13300.706055 6.672661 6912.635742", "170.000015 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_cncblocks_short", "13380.456055 6.159687 6678.419434", "80.000000 0.000000 0.000000" );
SpawnObject( "bldr_wheel_cart_dz", "13316.584961 6.625789 6754.295898", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Construction_House1", "13291.229492 8.332523 6747.900879", "-14.999999 0.000000 0.000000" );
SpawnObject( "Land_Train_742_Blue", "13237.292969 8.321898 6817.814941", "162.999985 0.000000 0.000000" );
SpawnObject( "Land_Rail_Station_Small", "13312.056641 7.711267 6516.057617", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_ship_medium_back", "13424.834961 7.367987 6880.610352", "10.000001 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13293.801758 6.696996 6920.360840", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13298.787109 6.843781 6923.230957", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Ikarus", "13312.377930 7.398865 6890.332520", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "13297.741211 6.998866 6931.673340", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "13300.446289 6.803916 6899.111816", "59.999996 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Uaz", "13314.128906 6.777920 6882.678711", "110.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_decal_big", "13311.809570 6.089461 6908.979980", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_hmmwv", "13306.864258 6.956643 6905.928223", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_s120_red", "13323.629883 6.559358 6900.885742", "-66.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_t72_chassis", "13233.842773 7.213923 6960.979492", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_trailer_cistern", "13247.461914 6.312447 6663.673340", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_ural", "13272.382813 7.193790 6662.065430", "33.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c", "13237.190430 6.990940 6679.941406", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c", "13240.656250 7.000000 6688.918457", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "13238.092773 7.097016 6674.083008", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile1", "13230.168945 7.291160 6659.280273", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container", "13219.414063 7.769890 6669.930664", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_powgen", "13216.831055 7.635877 6660.352051", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pipes", "13222.019531 7.897281 6683.007813", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pipes", "13320.176758 7.086828 6762.636230", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "13237.970703 6.827649 6687.125977", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_boxwooden", "13240.358398 6.882403 6668.104492", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_boxwooden", "13238.348633 7.127883 6663.155762", "21.999998 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "13247.376953 7.038860 6691.156250", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "13255.770508 6.651818 6672.430664", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "13246.808594 7.468804 6653.383789", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "13226.160156 8.133786 6704.096191", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_razorwire", "13245.196289 7.145256 6690.188477", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_misc_razorwire", "13251.101563 6.658540 6673.513184", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_flag_chernarus_pole", "13232.153320 15.793295 6679.504883", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "13241.697266 10.286644 6699.889648", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "13254.928711 9.687183 6662.134277", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "13207.221680 10.759937 6688.020020", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "13221.124023 10.337985 6649.887207", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Lamp_City1", "13375.475586 9.780542 6674.878418", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_cncsmall_8", "13276.804688 5.246451 6740.421875", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_9", "13295.066406 6.792149 6739.347168", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_9", "13311.908203 7.412755 6745.358398", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_3_d", "13300.667969 7.024034 6740.328613", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_3_hole", "13305.743164 7.241642 6743.120605", "-20.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_9", "13314.828125 7.393525 6751.513672", "-100.000008 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_9", "13283.168945 6.466087 6744.499023", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_9", "13302.197266 7.098853 6769.976074", "-19.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_3_d", "13295.990234 6.911150 6767.855957", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_3_hole", "13289.980469 6.708825 6766.262695", "-19.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_3_d", "13292.936523 6.814852 6766.896973", "-19.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_pole", "13284.448242 6.626439 6763.095215", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_corner", "13285.201172 6.327708 6739.418457", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_pole", "13312.640625 7.261996 6760.018066", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_pole", "13309.965820 7.195055 6765.908691", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wall_indfnc_pole", "13280.054688 6.569655 6753.901367", "0.000000 0.000000 0.000000" );
SpawnObject( "ChristmasTree", "13303.094727 14.306023 6755.385254", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Misc_Toilet_Mobile", "13296.841797 7.354452 6738.186035", "-10.000001 0.000000 0.000000" );
SpawnObject( "bldr_misc_concretepanels", "13309.490234 7.435526 6737.416016", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_through_trailer", "13300.546875 6.384009 6727.764160", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_timbers3", "13275.129883 6.490741 6774.820801", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_Misc_BoxWooden", "13321.281250 7.089054 6751.793457", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_BoxWooden", "13323.420898 6.990298 6753.551758", "10.000004 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_2", "13188.431641 5.387524 6572.978516", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_2", "13215.283203 5.173722 6584.352539", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_2", "13226.382813 6.708867 6623.678711", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "13182.417969 5.935702 6595.982910", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "13199.940430 5.369491 6590.168457", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "13206.583984 6.585630 6617.444336", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_5", "13208.914063 8.020096 6603.421875", "0.000000 0.000000 0.000000" );
SpawnObject( "Wreck_Mi8", "13244.550781 8.682472 6597.289063", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rock_apart2", "13292.889648 6.795344 6877.180664", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_rock_apart2", "13317.047852 6.469751 6676.846680", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_3s", "13173.222656 19.275377 6817.982910", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FagusSylvatica_3s", "13250.531250 20.610607 6936.830078", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_crataegusLaevigata_1s", "13295.498047 8.807531 6829.550293", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_crataegusLaevigata_1s", "13261.635742 9.356652 6854.780273", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_crataegusLaevigata_1s", "13296.722656 8.460488 6879.168945", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_t_FraxinusExcelsior_3s", "13234.249023 17.715513 6882.716309", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_crataegusLaevigata_2s", "13247.769531 12.142290 6931.344238", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_crataegusLaevigata_1s", "13257.428711 10.831900 6931.479980", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_plnt_b_crataegusLaevigata_1s", "13298.903320 8.718539 6832.081055", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Barn_Brick1", "13271.312500 12.909525 6863.561035", "80.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_haybale_decayed", "13250.222656 7.131027 6845.868164", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_haybale_decayed", "13266.607422 7.913448 6839.437988", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_misc_haybale_decayed", "13256.831055 7.198661 6837.210449", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_misc_haybale_decayed", "13255.888672 6.776379 6822.834473", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_haybale_decayed", "13267.879883 7.447893 6822.204590", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_farm_strawstack", "13280.283203 8.885869 6841.177246", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_Boogieman", "13254.879883 6.752002 6814.832520", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_woodpile_forest2", "13281.457031 8.334558 6859.822266", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_woodpile_forest2", "13276.802734 8.325793 6870.453125", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Farm_WaterTower_Small", "13230.331055 11.489030 6863.440430", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13306.940430 6.597666 6758.632324", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13307.502930 6.634113 6753.563477", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13311.137695 6.609930 6756.766113", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13309.776367 6.552915 6762.340820", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13297.682617 6.428638 6761.178711", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13302.624023 6.530964 6760.960449", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13304.368164 6.545393 6763.807617", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13303.713867 6.576272 6751.999023", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13303.970703 6.567420 6748.886230", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13299.723633 6.474790 6752.018555", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13298.492188 6.475554 6756.221680", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13310.323242 6.666012 6752.109375", "0.000000 0.000000 0.000000" );
SpawnObject( "ClutterCutter6x6", "13298.035156 6.344313 6745.267578", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_round", "13235.341797 6.999815 6634.192383", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_round", "13231.290039 5.940220 6581.450684", "80.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "13230.078125 6.727431 6594.623535", "80.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "13231.635742 7.305666 6611.584473", "80.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_pillbox", "13227.802734 7.296893 6604.096680", "0.000000 0.000000 0.000000" );
SpawnObject( "SVD", "13306.479492 6.655587 6753.365723", "83.659943 -89.307610 -50.293919" );
SpawnObject( "Mag_SVD_10Rnd", "13306.171875 6.642144 6752.827637", "83.659943 -89.307610 16.790688" );
SpawnObject( "Mag_SVD_10Rnd", "13305.805664 6.638400 6753.276855", "-96.340057 89.307610 146.960052" );
SpawnObject( "Mag_SVD_10Rnd", "13306.036133 6.641072 6753.243652", "83.659943 -89.307610 158.057205" );
SpawnObject( "Mag_SVD_10Rnd", "13306.374023 6.644932 6753.098145", "83.659943 -89.307610 -107.160873" );
SpawnObject( "SVD", "13299.560547 6.523776 6758.654297", "115.016777 -88.735451 -79.876091" );
SpawnObject( "Mag_SVD_10Rnd", "13298.444336 6.495027 6758.381836", "115.016777 -88.735451 175.201279" );
SpawnObject( "Mag_SVD_10Rnd", "13298.996094 6.504295 6758.571777", "115.016777 -88.735451 -120.548721" );
SpawnObject( "Mag_SVD_10Rnd", "13299.150391 6.512388 6758.035156", "115.016777 -88.735451 -16.614901" );
SpawnObject( "Mag_SVD_10Rnd", "13299.916992 6.516531 6759.233398", "115.016777 -88.735451 4.688241" );
SpawnObject( "Mag_SVD_10Rnd", "13306.726563 6.650255 6753.879395", "-96.340057 89.307610 4.913490" );
SpawnObject( "Mag_SVD_10Rnd", "13298.449219 6.490077 6758.928223", "-64.983215 88.735451 -74.590912" );
SpawnObject( "VSS", "13305.875977 6.627942 6758.948730", "-170.537888 -89.533958 129.568314" );
SpawnObject( "Mag_VSS_10Rnd", "13305.506836 6.621857 6759.340332", "-170.537888 -89.533958 105.540489" );
SpawnObject( "Mag_VSS_10Rnd", "13305.317383 6.625391 6758.930176", "-170.537888 -89.533958 -110.600121" );
SpawnObject( "Mag_VSS_10Rnd", "13305.730469 6.628022 6758.532227", "-170.537888 -89.533958 80.435974" );
SpawnObject( "Mag_VSS_10Rnd", "13306.023438 6.626182 6758.736816", "9.462100 89.533958 -16.400196" );
SpawnObject( "Mag_VSS_10Rnd", "13305.457031 6.623483 6759.145508", "-170.537888 -89.533958 -122.048210" );
SpawnObject( "Mag_VSS_10Rnd", "13300.954102 6.532823 6751.624023", "-106.699203 88.405037 24.476679" );
SpawnObject( "Mag_VSS_10Rnd", "13301.693359 6.548413 6751.109863", "-106.699203 88.405037 -43.201172" );
SpawnObject( "Mag_VSS_10Rnd", "13301.749023 6.555146 6751.789063", "73.300789 -88.405037 156.589035" );
SpawnObject( "Mag_VSS_10Rnd", "13301.287109 6.543712 6751.877441", "-106.699203 88.405037 -154.210419" );
SpawnObject( "VSS", "13301.313477 6.543293 6751.441895", "-106.699203 88.405037 68.412338" );
SpawnObject( "Mag_VSS_10Rnd", "13301.389648 6.540044 6751.100586", "73.300789 -88.405037 -69.099022" );
SpawnObject( "AKM", "13299.295898 6.517591 6753.268555", "-106.699203 88.405037 32.749611" );
SpawnObject( "AKM", "13304.970703 6.612314 6762.577148", "-69.443947 88.694481 -113.054909" );
SpawnObject( "Mag_AKM_30Rnd", "13299.248047 6.494888 6753.085938", "73.300789 -88.405037 -164.540146" );
SpawnObject( "Mag_AKM_30Rnd", "13299.802734 6.517391 6754.049316", "73.300789 -88.405037 156.830750" );
SpawnObject( "Mag_AKM_30Rnd", "13298.991211 6.499346 6754.150879", "-106.699203 88.405037 -39.531586" );
SpawnObject( "Mag_AKM_30Rnd", "13298.792969 6.483032 6753.120605", "73.300789 -88.405037 154.226898" );
SpawnObject( "Mag_AKM_Drum75Rnd", "13309.722656 6.768867 6753.803223", "44.621162 -0.543016 89.571465" );
SpawnObject( "Mag_AKM_Drum75Rnd", "13296.784180 6.448846 6762.182617", "136.233627 2.023490 -88.660736" );
SpawnObject( "Mag_AKM_30Rnd", "13304.783203 6.588085 6762.955078", "-69.443947 88.694481 70.554214" );
SpawnObject( "Mag_AKM_30Rnd", "13304.120117 6.571216 6763.296387", "-69.443947 88.694481 -48.156693" );
SpawnObject( "Mag_AKM_30Rnd", "13304.015625 6.570234 6762.793945", "110.556038 -88.694481 55.160694" );
SpawnObject( "Mag_AKM_30Rnd", "13304.342773 6.582378 6762.147949", "110.556038 -88.694481 41.844852" );
SpawnObject( "Mag_AKM_30Rnd", "13305.257813 6.588976 6763.032227", "-170.537888 -89.533958 170.647476" );
SpawnObject( "AK_WoodHndgrd", "13304.776367 6.589197 6763.388184", "-69.443947 88.694481 98.295532" );
SpawnObject( "AK_WoodBttstck", "13305.679688 6.598514 6762.462891", "-170.537888 -89.533958 -61.346912" );
SpawnObject( "AK_WoodBttstck", "13299.220703 6.495027 6752.501953", "73.300789 -88.405037 11.301376" );
SpawnObject( "AK_WoodHndgrd", "13298.655273 6.494209 6754.038086", "-106.699203 88.405037 -164.669724" );
SpawnObject( "Mag_AKM_30Rnd", "13298.821289 6.482493 6752.612305", "-106.699203 88.405037 176.422211" );
SpawnObject( "Mag_AKM_30Rnd", "13304.186523 6.598524 6748.465820", "-98.530807 88.455025 26.434561" );
SpawnObject( "Mag_AKM_30Rnd", "13304.408203 6.603368 6748.199707", "-98.530807 88.455025 148.990784" );
SpawnObject( "Mag_AKM_30Rnd", "13304.000000 6.591350 6747.917480", "-98.530807 88.455025 -19.467728" );
SpawnObject( "Mag_AKM_30Rnd", "13305.173828 6.624107 6748.217773", "-98.130150 88.379601 167.585526" );
SpawnObject( "Mag_AKM_30Rnd", "13304.503906 6.600539 6747.544434", "81.469185 -88.455025 155.290344" );
SpawnObject( "AKM", "13304.705078 6.608215 6747.886719", "81.469185 -88.455025 -34.954727" );
SpawnObject( "AK_WoodHndgrd", "13305.080078 6.627190 6748.741699", "81.869835 -88.379601 112.590889" );
SpawnObject( "AK_WoodBttstck", "13305.125000 6.623708 6747.770996", "81.869835 -88.379601 49.351658" );
SpawnObject( "AK74", "13310.201172 6.605942 6760.095215", "-170.537888 -89.533958 135.534073" );
SpawnObject( "AK74_Hndgrd", "13310.116211 6.614108 6759.878906", "-170.537888 -89.533958 -139.440125" );
SpawnObject( "AK74_WoodBttstck", "13310.501953 6.600597 6760.685547", "26.564939 89.145218 141.509949" );
SpawnObject( "Mag_AK74_30Rnd", "13310.058594 6.599651 6760.570313", "-153.435059 -89.145218 74.526299" );
SpawnObject( "Mag_AK74_30Rnd", "13309.798828 6.604625 6760.361328", "26.564939 89.145218 -178.212921" );
SpawnObject( "Mag_AK74_30Rnd", "13310.639648 6.600716 6760.200195", "-153.435059 -89.145218 -59.005619" );
SpawnObject( "Mag_AK74_30Rnd", "13310.301758 6.610055 6759.648438", "-170.537888 -89.533958 -123.311699" );
SpawnObject( "Mag_AK74_30Rnd", "13309.807617 6.610482 6759.677734", "-170.537888 -89.533958 101.277679" );
SpawnObject( "AK74", "13299.706055 6.479907 6746.940430", "-112.479408 87.603630 -60.527752" );
SpawnObject( "AK74_Hndgrd", "13299.848633 6.468611 6746.737793", "67.520576 -87.603630 33.473099" );
SpawnObject( "AK74_WoodBttstck", "13299.226563 6.444215 6746.732422", "-112.479408 87.603630 -168.043274" );
SpawnObject( "Mag_AK74_30Rnd", "13299.233398 6.434073 6746.418945", "67.520576 -87.603630 -168.989120" );
SpawnObject( "Mag_AK74_30Rnd", "13299.632813 6.446403 6746.225098", "67.520576 -87.603630 -152.981567" );
SpawnObject( "Mag_AK74_30Rnd", "13299.434570 6.454693 6747.221191", "67.520576 -87.603630 -144.906357" );
SpawnObject( "Mag_AK74_30Rnd", "13300.071289 6.478066 6747.144043", "67.520576 -87.603630 134.869019" );
SpawnObject( "Mag_AK74_30Rnd", "13300.191406 6.476112 6746.731934", "67.520576 -87.603630 -24.031082" );
SpawnObject( "AK74", "13293.535156 6.328880 6757.207031", "78.310638 -87.738678 127.482674" );
SpawnObject( "AK74_Hndgrd", "13293.715820 6.344707 6757.503906", "-72.758598 87.681412 153.608322" );
SpawnObject( "AK74_WoodBttstck", "13292.815430 6.302788 6756.847656", "78.310638 -87.738678 148.697937" );
SpawnObject( "Mag_AK74_30Rnd", "13293.119141 6.314398 6757.584473", "-72.758598 87.681412 -1.127813" );
SpawnObject( "Mag_AK74_30Rnd", "13293.342773 6.316556 6756.562500", "-101.689362 87.738678 -70.236649" );
SpawnObject( "Mag_AK74_30Rnd", "13293.868164 6.342353 6757.304199", "78.310638 -87.738678 -83.428284" );
SpawnObject( "Mag_AK74_30Rnd", "13294.073242 6.346713 6756.801270", "-101.689362 87.738678 75.874969" );
SpawnObject( "Mag_AK74_30Rnd", "13292.285156 6.281682 6757.585449", "107.241402 -87.681412 98.749832" );
SpawnObject( "M4_CarryHandleOptic", "13310.891602 6.678751 6754.118652", "-173.659927 -89.307610 2.948700" );
SpawnObject( "M4_OEBttstck", "13311.786133 6.679094 6753.750488", "6.340059 89.307610 -171.775269" );
SpawnObject( "M4_PlasticHndgrd", "13311.766602 6.682728 6754.224121", "6.340059 89.307610 -55.723141" );
SpawnObject( "M4A1", "13311.386719 6.682339 6753.923340", "6.340059 89.307610 -41.934883" );
SpawnObject( "M4A1", "13302.118164 6.565060 6760.199219", "-64.983215 88.735451 105.337669" );
SpawnObject( "M4_OEBttstck_Black", "13302.093750 6.556026 6760.552734", "110.556038 -88.694481 133.418701" );
SpawnObject( "M4_PlasticHndgrd", "13302.044922 6.572202 6759.767090", "-64.983215 88.735451 -10.989094" );
SpawnObject( "M4_CarryHandleOptic", "13301.618164 6.546560 6760.190918", "-64.983215 88.735451 -67.119965" );
SpawnObject( "M4_CarryHandleOptic", "13296.257813 6.420026 6753.917969", "78.310638 -87.738678 75.724510" );
SpawnObject( "M4_OEBttstck", "13296.132813 6.415434 6754.364746", "-101.689362 87.738678 -20.829657" );
SpawnObject( "M4_PlasticHndgrd", "13296.566406 6.441397 6754.375488", "-101.689362 87.738678 -5.821875" );
SpawnObject( "M4A1", "13296.113281 6.422464 6754.772461", "78.310638 -87.738678 178.790405" );
SpawnObject( "Mag_STANAGCoupled_30Rnd", "13296.432617 6.425342 6754.862793", "78.310638 -87.738678 92.819763" );
SpawnObject( "Mag_STANAG_30Rnd", "13295.647461 6.391749 6755.065430", "78.310638 -87.738678 113.002251" );
SpawnObject( "Mag_STANAG_30Rnd", "13295.833008 6.395607 6754.531738", "-101.689362 87.738678 -27.586466" );
SpawnObject( "Mag_STANAG_30Rnd", "13311.382813 6.672645 6753.469238", "-173.659927 -89.307610 -163.883789" );
SpawnObject( "Mag_STANAG_30Rnd", "13311.585938 6.660286 6754.476563", "-173.659927 -89.307610 23.372919" );
SpawnObject( "Mag_STANAG_30Rnd", "13312.397461 6.667922 6753.828613", "6.340059 89.307610 -103.822746" );
SpawnObject( "Mag_STANAGCoupled_30Rnd", "13311.032227 6.714725 6753.609375", "6.340059 89.307610 20.348513" );
SpawnObject( "Mag_STANAGCoupled_30Rnd", "13301.283203 6.575502 6760.307129", "-64.983215 88.735451 -64.911659" );
SpawnObject( "Mag_STANAG_30Rnd", "13302.416992 6.554140 6760.566406", "-69.443947 88.694481 -46.168095" );
SpawnObject( "Mag_STANAG_30Rnd", "13301.651367 6.545715 6759.758789", "-64.983215 88.735451 -0.881367" );
SpawnObject( "Mag_STANAG_30Rnd", "13301.644531 6.534807 6760.812988", "115.016777 -88.735451 -16.966463" );
SpawnObject( "MP5K", "13296.235352 6.434615 6757.705566", "107.241402 -87.681412 109.703545" );
SpawnObject( "Mag_MP5_30Rnd", "13296.388672 6.427472 6757.842285", "107.241402 -87.681412 -62.600311" );
SpawnObject( "Mag_MP5_30Rnd", "13296.288086 6.419568 6758.176758", "107.241402 -87.681412 96.772232" );
SpawnObject( "Mag_MP5_30Rnd", "13295.624023 6.398080 6757.854492", "-72.758598 87.681412 -176.529907" );
SpawnObject( "Mag_MP5_30Rnd", "13296.700195 6.443306 6757.551758", "-72.758598 87.681412 -165.883835" );
SpawnObject( "MP5_PlasticHndgrd", "13296.633789 6.446918 6757.979492", "-72.758598 87.681412 -59.181385" );
SpawnObject( "MP5k_StockBttstck", "13295.885742 6.421790 6757.254395", "-101.689362 87.738678 -46.197849" );
SpawnObject( "MP5k_StockBttstck", "13308.630859 6.577801 6763.062988", "26.564939 89.145218 147.168091" );
SpawnObject( "MP5_PlasticHndgrd", "13308.027344 6.578105 6763.326172", "-153.435059 -89.145218 175.350906" );
SpawnObject( "MP5K", "13308.379883 6.574901 6763.413574", "26.564939 89.145218 -56.590561" );
SpawnObject( "Mag_MP5_30Rnd", "13308.145508 6.575186 6762.637695", "-153.435059 -89.145218 34.941353" );
SpawnObject( "Mag_MP5_30Rnd", "13308.740234 6.557892 6763.637695", "-153.435059 -89.145218 54.970036" );
SpawnObject( "Mag_MP5_30Rnd", "13308.099609 6.558981 6763.875977", "-153.435059 -89.145218 -144.459869" );
SpawnObject( "Mag_MP5_30Rnd", "13309.046875 6.563955 6763.052734", "26.564939 89.145218 -127.981911" );
SpawnObject( "Mag_MP5_30Rnd", "13310.831055 6.685871 6750.788086", "-96.340057 89.307610 119.658203" );
SpawnObject( "Mag_MP5_30Rnd", "13310.596680 6.681885 6750.140625", "83.659943 -89.307610 39.829708" );
SpawnObject( "Mag_MP5_30Rnd", "13309.957031 6.674794 6750.582031", "83.659943 -89.307610 -0.722078" );
SpawnObject( "Mag_MP5_30Rnd", "13309.778320 6.673616 6751.072754", "-96.340057 89.307610 52.167122" );
SpawnObject( "MP5K", "13310.255859 6.690271 6750.794434", "-96.340057 89.307610 6.660379" );
SpawnObject( "MP5_PlasticHndgrd", "13310.629883 6.695395 6751.271484", "-96.340057 89.307610 -98.613831" );
SpawnObject( "MP5k_StockBttstck", "13309.458008 6.680595 6751.238770", "83.659943 -89.307610 -17.806318" );
SpawnObject( "Mosin9130", "13305.788086 6.642334 6751.617188", "83.659943 -89.307610 122.416451" );
SpawnObject( "Mosin9130", "13296.814453 6.418763 6751.816406", "78.310638 -87.738678 -23.990456" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "13296.789063 6.406459 6751.581543", "-101.689362 87.738678 -114.095451" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "13296.386719 6.393076 6751.890625", "78.310638 -87.738678 56.552784" );
SpawnObject( "AmmoBox_762x54_20Rnd", "13297.052734 6.424510 6752.471191", "78.310638 -87.738678 60.442066" );
SpawnObject( "AmmoBox_762x54_20Rnd", "13297.438477 6.430150 6751.311035", "78.310638 -87.738678 167.946564" );
SpawnObject( "Ammo_762x54", "13296.996094 6.407884 6751.238281", "48.774765 1.967583 -1.114472" );
SpawnObject( "Ammo_762x54", "13297.292969 6.424572 6751.889160", "-6.352289 0.210432 -2.251374" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "13306.379883 6.639899 6751.790039", "83.659943 -89.307610 -71.058678" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "13306.151367 6.636239 6750.891602", "-96.340057 89.307610 167.461166" );
SpawnObject( "Ammo_762x54", "13305.893555 6.629617 6751.094727", "2.899378 0.111072 -0.682769" );
SpawnObject( "Ammo_762x54", "13305.929688 6.631004 6751.813477", "-71.587967 -0.628197 -0.289623" );
SpawnObject( "AmmoBox_762x54_20Rnd", "13305.419922 6.628844 6751.350586", "83.659943 -89.307610 -51.601295" );
SpawnObject( "AmmoBox_762x54_20Rnd", "13306.965820 6.647411 6751.256836", "-96.340057 89.307610 -17.444368" );
SpawnObject( "AmmoBox_762x54_20Rnd", "13305.757813 6.603361 6760.970215", "9.462100 89.533958 -28.837101" );
SpawnObject( "AmmoBox_762x54_20Rnd", "13306.289063 6.603683 6760.841309", "9.462100 89.533958 168.823944" );
SpawnObject( "Ammo_762x54", "13305.885742 6.600664 6760.697266", "89.321587 -0.081814 -0.457419" );
SpawnObject( "Ammo_762x54", "13305.708008 6.596282 6761.274902", "-28.423712 -0.366744 0.285352" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "13306.019531 6.599703 6761.232910", "-170.537888 -89.533958 -22.146496" );
SpawnObject( "Mag_CLIP762x54_5Rnd", "13306.087891 6.605250 6760.562988", "9.462100 89.533958 114.275177" );
SpawnObject( "Mosin9130", "13306.082031 6.611704 6760.969727", "9.462100 89.533958 -177.102097" );
SpawnObject( "SKS", "13308.087891 6.664240 6756.611328", "-173.659927 -89.307610 24.834156" );
SpawnObject( "SKS", "13296.660156 6.427001 6760.773926", "-77.275688 87.573433 33.480812" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "13297.040039 6.460924 6760.962402", "102.724304 -87.573433 131.555344" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "13297.083008 6.476521 6760.948730", "-77.275505 87.575371 130.877777" );
SpawnObject( "Ammo_762x39", "13296.387695 6.397195 6760.716309", "-0.889095 -0.571423 -2.358192" );
SpawnObject( "Ammo_762x39", "13297.325195 6.440216 6760.258789", "-107.856552 -2.089239 1.234167" );
SpawnObject( "AmmoBox_762x39_20Rnd", "13296.522461 6.431138 6760.248047", "102.724304 -87.573433 79.775208" );
SpawnObject( "AmmoBox_762x39_20Rnd", "13296.847656 6.444384 6760.190430", "-77.275688 87.573433 -6.752360" );
SpawnObject( "AmmoBox_762x39_20Rnd", "13297.250000 6.457488 6760.647949", "102.724304 -87.573433 64.393890" );
SpawnObject( "AmmoBox_762x39_20Rnd", "13308.474609 6.662891 6755.803223", "-173.659927 -89.307610 -100.139160" );
SpawnObject( "AmmoBox_762x39_20Rnd", "13308.313477 6.654185 6756.546387", "-173.659927 -89.307610 -171.200882" );
SpawnObject( "AmmoBox_762x39_20Rnd", "13307.945313 6.646463 6757.230957", "-173.659927 -89.307610 -177.584152" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "13308.074219 6.665342 6756.899414", "6.340059 89.307610 104.451408" );
SpawnObject( "Mag_CLIP762x39_10Rnd", "13307.881836 6.674102 6756.190918", "6.340059 89.307610 -169.083527" );
SpawnObject( "Ammo_762x39", "13308.308594 6.635558 6756.085938", "97.099594 0.009170 -0.691683" );
SpawnObject( "Ammo_762x39", "13307.815430 6.625952 6756.941406", "-23.085224 -0.602514 0.339839" );
SpawnObject( "UMP45", "13309.553711 6.626206 6757.980957", "9.462100 89.533958 127.536057" );
SpawnObject( "Mag_UMP_25Rnd", "13309.916992 6.630118 6757.581543", "9.462100 89.533958 115.066216" );
SpawnObject( "Mag_UMP_25Rnd", "13309.007813 6.629056 6757.865723", "9.462100 89.533958 -0.656310" );
SpawnObject( "Mag_UMP_25Rnd", "13310.159180 6.623379 6758.364258", "-170.537888 -89.533958 140.049591" );
SpawnObject( "Mag_UMP_25Rnd", "13310.291992 6.627040 6757.903809", "9.462100 89.533958 4.485447" );
SpawnObject( "Mag_UMP_25Rnd", "13301.497070 6.530959 6749.237793", "-98.530807 88.455025 -52.328835" );
SpawnObject( "Mag_UMP_25Rnd", "13301.897461 6.540606 6749.020508", "81.469185 -88.455025 -27.868326" );
SpawnObject( "Mag_UMP_25Rnd", "13302.048828 6.546741 6749.505371", "-98.530807 88.455025 -68.929657" );
SpawnObject( "Mag_UMP_25Rnd", "13301.200195 6.525366 6749.819824", "-98.530807 88.455025 -168.622681" );
SpawnObject( "UMP45", "13301.518555 6.533520 6749.607910", "-98.530807 88.455025 121.732872" );
SpawnObject( "BallisticHelmet_Black", "13303.892578 6.605080 6751.848145", "-175.975708 -0.156623 1.137576" );
SpawnObject( "BallisticHelmet_Black", "13303.682617 6.583429 6760.402832", "-110.264626 -0.987796 0.853159" );
SpawnObject( "BallisticHelmet_Black", "13310.199219 6.581234 6761.912598", "91.947258 -0.355786 -0.776418" );
SpawnObject( "PlateCarrierVest", "13305.559570 6.562590 6764.716309", "-10.256157 -0.683694 0.511836" );
SpawnObject( "PlateCarrierVest", "13297.873047 6.454772 6754.080566", "-98.762184 -1.579482 -0.220182" );
SpawnObject( "PlateCarrierVest", "13305.435547 6.619569 6749.818359", "-138.306488 0.056084 0.970628" );
SpawnObject( "GhillieHood_Woodland", "13307.462891 6.644173 6754.557617", "171.809113 0.022343 0.691383" );
SpawnObject( "GhillieHood_Woodland", "13299.071289 6.456636 6750.774902", "12.695971 0.782906 -1.389392" );
SpawnObject( "GhillieTop_Tan", "13304.255859 6.749489 6759.994629", "110.556038 -88.694481 159.347214" );
SpawnObject( "Sword", "13308.807617 6.669901 6753.238770", "121.330040 0.547555 90.422722" );
SpawnObject( "Sword", "13298.752930 6.467092 6761.520996", "21.361559 -0.080618 -91.261765" );
SpawnObject( "ClutterCutter6x6", "13293.926758 6.316912 6756.965820", "0.000000 0.000000 0.000000" );
SpawnObject( "M67Grenade", "13297.736328 6.496946 6755.750488", "-71.793533 -1.307958 -0.912481" );
SpawnObject( "M67Grenade", "13295.127930 6.398646 6758.689941", "51.387081 1.301805 -1.918578" );
SpawnObject( "M67Grenade", "13306.789063 6.602318 6763.526855", "-53.706417 -0.144329 0.841767" );
SpawnObject( "M67Grenade", "13311.844727 6.660089 6756.282715", "26.423845 -0.649684 -0.237536" );
SpawnObject( "M67Grenade", "13308.108398 6.682200 6750.205566", "12.116562 0.219006 -0.656162" );
SpawnObject( "FlashGrenade", "13308.957031 6.673779 6754.797852", "6.340059 89.307610 -83.035988" );
SpawnObject( "FlashGrenade", "13308.448242 6.618360 6760.477051", "-170.537888 -89.533958 -126.047379" );
SpawnObject( "FlashGrenade", "13302.040039 6.542087 6762.698242", "-69.443947 88.694481 -101.914421" );
SpawnObject( "FlashGrenade", "13296.882813 6.463806 6756.318848", "78.310638 -87.738678 -89.954361" );
SpawnObject( "RDG2SmokeGrenade_Black", "13296.324219 6.440143 6759.351563", "102.724304 -87.573433 -176.873245" );
SpawnObject( "RDG2SmokeGrenade_Black", "13307.246094 6.614717 6762.285645", "-170.537888 -89.533958 -61.171131" );
SpawnObject( "M18SmokeGrenade_Red", "13308.088867 6.641063 6758.852051", "9.462100 89.533958 -124.300201" );
SpawnObject( "M18SmokeGrenade_Red", "13310.884766 6.661463 6756.390625", "-173.659927 -89.307610 -175.837234" );
SpawnObject( "M18SmokeGrenade_Red", "13306.417969 6.669983 6749.419922", "-44.999844 89.027222 119.433426" );
SpawnObject( "Canteen", "13307.114258 6.710553 6762.592285", "101.846016 0.019329 -0.464276" );
SpawnObject( "Canteen", "13312.209961 6.810461 6752.002930", "149.998459 0.557208 -0.409920" );
SpawnObject( "Canteen", "13311.731445 6.761842 6756.107422", "46.013752 -0.532441 -0.441613" );
SpawnObject( "Canteen", "13301.871094 6.649779 6747.271973", "-71.407913 -1.374818 -0.704120" );
SpawnObject( "Canteen", "13297.807617 6.603978 6758.175293", "-21.774246 -0.921603 -0.865611" );
SpawnObject( "BakedBeansCan_Opened", "13298.360352 6.541195 6757.106934", "3.194989 0.140140 -1.139724" );
SpawnObject( "BakedBeansCan_Opened", "13297.045898 6.448236 6750.007813", "140.629517 1.072049 1.787496" );
SpawnObject( "BakedBeansCan_Opened", "13304.218750 6.644260 6750.071777", "-56.620445 -1.023561 -1.222993" );
SpawnObject( "BakedBeansCan_Opened", "13311.165039 6.695550 6755.061035", "49.397644 -0.505447 -0.472271" );
SpawnObject( "BakedBeansCan_Opened", "13309.034180 6.651715 6759.676270", "40.826992 -0.396777 -0.241857" );
SpawnObject( "ReflexOptic", "13309.936523 6.654646 6755.708984", "-173.659927 -89.307610 -48.589722" );
SpawnObject( "ReflexOptic", "13308.481445 6.673520 6751.309570", "83.659943 -89.307610 98.597351" );
SpawnObject( "ReflexOptic", "13303.161133 6.577733 6749.116699", "81.469185 -88.455025 140.458344" );
SpawnObject( "ReflexOptic", "13299.401367 6.487596 6750.823242", "73.300789 -88.405037 -66.297417" );
SpawnObject( "ACOGOptic", "13302.413086 6.566676 6748.111328", "81.469185 -88.455025 -62.025829" );
SpawnObject( "ACOGOptic", "13302.721680 6.548968 6764.432129", "110.556038 -88.694481 -154.267075" );
SpawnObject( "ACOGOptic", "13297.663086 6.502115 6756.819824", "73.300789 -88.405037 124.727707" );
SpawnObject( "KashtanOptic", "13296.434570 6.451872 6758.966309", "102.724304 -87.573433 153.638550" );
SpawnObject( "KashtanOptic", "13300.487305 6.533088 6761.268555", "115.016777 -88.735451 115.104240" );
SpawnObject( "KashtanOptic", "13307.567383 6.648755 6758.156738", "-170.537888 -89.533958 -117.752449" );
SpawnObject( "PUScopeOptic", "13312.456055 6.649756 6757.167969", "-173.659927 -89.307610 -152.765244" );
SpawnObject( "PUScopeOptic", "13302.362305 6.582609 6750.806152", "73.300789 -88.405037 179.770859" );
SpawnObject( "PUScopeOptic", "13298.139648 6.489394 6753.229004", "73.300789 -88.405037 -59.672466" );
SpawnObject( "PSO1Optic", "13294.541016 6.376137 6758.593750", "-72.758598 87.681412 -102.523758" );
SpawnObject( "PSO1Optic", "13298.501953 6.503521 6760.714355", "115.016777 -88.735451 -12.758575" );
SpawnObject( "PSO1Optic", "13312.562500 6.628396 6758.480469", "50.194538 88.806786 94.410973" );
SpawnObject( "KobraOptic", "13310.320313 6.711424 6752.225586", "-173.659927 -89.307610 26.086620" );
SpawnObject( "KobraOptic", "13299.846680 6.509565 6750.159180", "73.300789 -88.405037 -97.334724" );
SpawnObject( "FAL", "13307.710938 6.668553 6752.396484", "-96.340057 89.307610 -79.914536" );
SpawnObject( "Mag_FAL_20Rnd", "13340.243164 5.806117 6839.218262", "153.434952 89.655647 -141.304672" );
SpawnObject( "Mag_FAL_20Rnd", "13307.673828 6.659120 6751.979004", "-96.340057 89.307610 90.532555" );
SpawnObject( "Mag_FAL_20Rnd", "13307.377930 6.656451 6752.639160", "-96.340057 89.307610 95.981941" );
SpawnObject( "Mag_FAL_20Rnd", "13307.218750 6.654158 6752.353027", "-96.340057 89.307610 20.558475" );
SpawnObject( "Mag_FAL_20Rnd", "13307.319336 6.654822 6751.983398", "83.659943 -89.307610 142.060593" );
SpawnObject( "Fal_FoldingBttstck", "13307.674805 6.663486 6752.784668", "-96.340057 89.307610 28.271128" );
SpawnObject( "Fal_FoldingBttstck", "13306.894531 6.613909 6760.131348", "9.462100 89.533958 133.545776" );
SpawnObject( "FAL", "13307.041016 6.620359 6759.945801", "-170.537888 -89.533958 -121.180313" );
SpawnObject( "Mag_FAL_20Rnd", "13307.328125 6.611325 6759.979492", "9.462100 89.533958 24.656973" );
SpawnObject( "Mag_FAL_20Rnd", "13307.137695 6.614948 6759.551758", "-170.537888 -89.533958 25.876207" );
SpawnObject( "Mag_FAL_20Rnd", "13306.739258 6.613862 6759.753906", "-170.537888 -89.533958 -95.834045" );
SpawnObject( "Mag_FAL_20Rnd", "13307.231445 6.607496 6760.467773", "-170.537888 -89.533958 -93.351074" );
SpawnObject( "CZ61", "13309.662109 6.586059 6761.923340", "26.564939 89.145218 -79.541718" );
SpawnObject( "Mag_CZ61_20Rnd", "13309.371094 6.585315 6761.735840", "26.564939 89.145218 -163.117264" );
SpawnObject( "Mag_CZ61_20Rnd", "13309.529297 6.576694 6762.303711", "26.564939 89.145218 -132.014023" );
SpawnObject( "Mag_CZ61_20Rnd", "13309.240234 6.579705 6762.181641", "-153.435059 -89.145218 -49.908634" );
SpawnObject( "Mag_CZ61_20Rnd", "13309.468750 6.580044 6762.082520", "26.564939 89.145218 94.695778" );
SpawnObject( "Mag_CZ61_20Rnd", "13298.683594 6.465232 6751.662598", "73.300789 -88.405037 -16.132298" );
SpawnObject( "Mag_CZ61_20Rnd", "13298.403320 6.458560 6751.765625", "73.300789 -88.405037 76.650070" );
SpawnObject( "Mag_CZ61_20Rnd", "13298.435547 6.456985 6751.391113", "-106.699203 88.405037 149.768585" );
SpawnObject( "Mag_CZ61_20Rnd", "13298.088867 6.450799 6751.842285", "73.300789 -88.405037 87.988289" );
SpawnObject( "CZ61", "13298.678711 6.468990 6751.432129", "73.300789 -88.405037 -45.422745" );
SpawnObject( "CZ61", "13301.734375 6.518649 6763.488281", "-69.443947 88.694481 106.162003" );
SpawnObject( "Mag_CZ61_20Rnd", "13301.525391 6.509484 6763.343262", "110.556038 -88.694481 130.199600" );
SpawnObject( "Mag_CZ61_20Rnd", "13301.837891 6.510273 6764.077148", "110.556038 -88.694481 152.414627" );
SpawnObject( "Mag_CZ61_20Rnd", "13302.062500 6.517998 6763.777344", "-69.443947 88.694481 -105.188454" );
SpawnObject( "Mag_CZ61_20Rnd", "13301.515625 6.505155 6763.925293", "-69.443947 88.694481 -87.170326" );
//kamenka,balota extra tents. balota gas station houses
SpawnObject( "bldr_hbarrier_6m", "1263.932739 6.783570 2422.122803", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1269.533325 6.776289 2422.262939", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1275.125610 6.869320 2422.265625", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1280.770630 6.853560 2422.593018", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1282.955566 6.758585 2437.593018", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1282.952881 6.853457 2426.058105", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1277.272095 6.742249 2447.650635", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1271.830078 6.746222 2447.746094", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "1266.301025 6.751861 2447.796387", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "1253.709839 6.729467 2448.048096", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "1279.866333 6.705699 2451.352539", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_4", "1274.820923 8.132804 2439.222168", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "1264.469727 6.153280 2430.569824", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "1276.074829 6.212294 2429.570557", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big2_4", "1258.432251 8.140640 2439.943604", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "1255.384644 7.075523 2415.834717", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "1245.658325 6.844575 2426.568604", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "1253.904541 6.794574 2454.535889", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_iron", "1293.507568 6.841175 2428.911621", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tower_Small", "1271.169189 9.878871 2451.439941", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "1270.010010 9.655918 2415.839111", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_pallets", "1250.817993 6.335219 2429.032227", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_pallets", "1249.662109 6.333678 2427.270508", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_bags_long", "1260.563599 6.166518 2414.667725", "40.000000 0.000000 0.000000" );
SpawnObject( "Land_HouseBlock_1F3", "5924.683105 14.455013 2182.062744", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_House_2W02", "5890.350586 14.155231 2173.114502", "160.000000 0.000000 0.000000" );
SpawnObject( "Land_Camp_House_red", "5980.691895 12.576238 2198.664795", "160.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile1", "5879.512207 9.537195 2174.065186", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile3", "5911.850586 9.383721 2187.901611", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile4", "5904.559082 9.139012 2182.024414", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile4", "5906.072266 9.269566 2182.189697", "100.000008 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "5918.761230 9.184264 2182.695313", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container", "5916.942383 10.002282 2186.202148", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Paper", "5920.222168 10.662896 2174.713867", "130.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Container_Plastic", "5918.889648 10.622860 2172.472900", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "5893.690918 9.595201 2176.047607", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "5928.488770 9.457253 2187.556641", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "5931.180176 10.354466 2177.387939", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Bin", "5891.022949 9.810305 2177.097412", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "5986.083496 10.407302 2186.322266", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wheel_cart_dz", "5985.437012 10.384097 2205.113770", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_woodpile_forest1", "5985.244629 11.225288 2198.047119", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_woodpile_forest1", "5977.426270 11.089205 2194.366699", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Ground_6m", "5930.162109 9.198093 2189.511475", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Ground_6m", "5905.557129 9.093679 2184.036133", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5900.012695 9.067820 2183.397217", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5908.700195 9.274743 2180.409180", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5895.938965 9.244301 2178.114990", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5878.701660 9.045435 2176.639893", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "5958.813477 9.819823 2197.217285", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5958.329590 9.520118 2199.063232", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "5958.474121 9.669080 2194.663818", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tower_Small", "4902.919434 11.034092 2222.027832", "29.999998 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tower_Small", "4875.229492 11.758496 2239.055908", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4900.544434 8.075800 2229.533203", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4896.531738 8.277970 2232.726807", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4887.718262 8.426841 2239.264893", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4883.381348 8.433611 2242.852539", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4878.395508 8.422370 2245.269043", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4906.458008 7.636681 2219.905273", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4873.109863 8.606161 2239.514160", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4870.303223 8.665937 2234.507568", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4864.523926 8.608741 2226.066650", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4859.709473 8.550236 2229.317383", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4861.536621 8.458745 2218.555420", "130.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4889.418457 7.923731 2206.387451", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4886.751465 7.788207 2201.398438", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4860.718262 8.494532 2236.286377", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4903.642578 7.746847 2217.093262", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_1m", "4896.845703 8.051312 2217.255127", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4861.686523 8.110685 2209.634277", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_hbarrier_6m", "4880.525879 7.308904 2189.895996", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_artilery_rampart", "4906.736816 7.070142 2237.428467", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_artilery_rampart", "4885.871094 7.236923 2257.153076", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "4878.724609 6.781845 2272.756348", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "4906.710449 6.842725 2251.079590", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_hedgehog_concrete", "4924.909180 5.886234 2244.032715", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "4876.718750 7.997020 2228.648682", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "4868.582520 7.702598 2214.140625", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "4889.741211 7.741622 2220.557129", "119.999992 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_4", "4880.514648 7.373035 2205.949463", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_medical_table", "4878.300293 7.867821 2220.826172", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_medical_table", "4868.607910 7.430377 2207.283203", "80.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c", "4884.585938 7.747550 2218.218262", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c", "4873.241699 7.745305 2216.282959", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "4877.298828 7.769948 2217.319824", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "4892.024414 7.780609 2228.000977", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_boxwooden", "4880.628418 8.449139 2231.389893", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_boxwooden", "4875.607910 7.716606 2202.046387", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_bulldozer", "4855.681152 9.087331 2240.689941", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_hmmwv", "4895.286621 7.717674 2196.347656", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_wreck_hmmwv", "4869.639160 8.082154 2260.605225", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "4891.999023 7.914042 2251.589844", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Rubble_DirtPile_Large", "4855.920410 8.398137 2236.230225", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets3", "4870.246094 8.136673 2240.704346", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets3", "4902.779785 7.496305 2230.006592", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets3", "4892.744629 7.350393 2204.877686", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4893.275391 7.475307 2204.173584", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4886.251953 8.231180 2230.622314", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4871.792969 8.281126 2242.642578", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4880.979492 7.585314 2202.371338", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_pallets1", "4874.674316 8.319366 2225.722412", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_boardspack2", "4845.770996 7.687158 2223.035156", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_boardspack2", "4850.292480 8.140657 2226.380127", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_boardspack2", "4901.393066 7.692161 2206.362793", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "4888.650879 7.428646 2202.732910", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "4887.863770 8.023035 2240.894287", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "4868.076172 8.289068 2235.006592", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "4860.644531 7.595070 2208.645996", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "1257.633423 6.160000 2423.712646", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_box_c_multi", "1252.162476 6.159550 2424.273682", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile1", "1276.776489 6.681421 2420.628174", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile1", "1283.867676 6.579197 2437.970459", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big3", "4864.171875 7.741805 2193.326660", "29.999998 0.000000 0.000000" );
//elektro island tent area
SpawnObject( "bldr_ship_big_lifeboat", "11555.201172 0.358757 3234.497070", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Boat_Small1", "11580.046875 1.919588 3241.256104", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_ship_big_lifeboat", "11580.924805 0.287474 3258.246094", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_ship_big_lifeboat", "11476.326172 0.579321 3212.012207", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_ship_big_lifeboat", "11479.612305 0.307411 3220.066162", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_ship_big_lifeboat", "11491.975586 0.987426 3210.658203", "-179.999985 0.000000 0.000000" );
SpawnObject( "Land_Ship_Big_FrontA", "11339.535156 0.859150 2947.738281", "0.000000 0.000000 -29.999998" );
SpawnObject( "bldr_ship_big_lifeboat", "11348.271484 0.555628 3016.785156", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_ship_big_lifeboat", "11553.972656 0.309453 3256.772461", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_ship_big_lifeboat", "11452.638672 0.720658 3005.318115", "-90.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_GuardTower", "11698.928711 8.587754 3206.570801", "-20.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "11699.176758 5.534165 3276.837158", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "11589.199219 6.023508 3229.258301", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Wood1_Lamp_Amp", "11503.029297 6.288902 3188.106689", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_radar_mobile_generator", "11591.536133 4.178370 3229.594971", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Fortified_Nest_Watchtower", "11432.970703 3.712255 3159.457275", "59.999996 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Conc1_Amp", "11535.055664 5.510832 3203.290527", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Conc1_Amp", "11648.533203 5.406380 3264.921875", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Pole_Conc1_Amp", "11593.523438 6.113595 3227.285156", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_power_transformerstation_cables", "11646.079102 5.868950 3316.969482", "-179.999985 0.000000 0.000000" );
SpawnObject( "bldr_power_hv_tower", "11646.576172 9.957767 3361.831787", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_power_transformer_small", "11644.981445 5.379382 3354.844238", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_power_transformer_small", "11648.619141 5.315228 3354.616699", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Ikarus", "11617.281250 3.544933 3341.273926", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_hospital_transport_bed", "11651.537109 2.175963 3220.527832", "59.999996 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_pillbox", "11586.193359 3.712952 3223.522949", "-139.999985 0.000000 0.000000" );
SpawnObject( "bldr_tent_stretcher", "11482.760742 2.480109 3185.363037", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_stretcher", "11488.212891 2.658619 3177.925781", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_table", "11650.643555 2.546701 3227.325195", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_antenna", "11595.789063 6.061111 3232.192139", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_bagfence_3m", "11573.875977 2.892942 3215.597168", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "11587.158203 2.539371 3243.673584", "150.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "11617.081055 2.225599 3268.833740", "140.000000 0.000000 0.000000" );
SpawnObject( "bldr_misc_barbedwire", "11565.666016 2.404447 3225.605225", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_misc_razorwire", "11577.600586 2.713484 3233.878418", "119.999992 0.000000 0.000000" );
SpawnObject( "bldr_Dead_MassGrave_15m", "11478.552734 2.697727 3180.392822", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Power_Station", "11654.155273 3.852535 3362.024414", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Lada_Green", "11600.602539 2.867575 3355.033447", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Wreck_Volha_Blue", "11629.513672 2.940609 3345.608887", "-40.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "11643.600586 2.096231 3217.548584", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_1", "11600.187500 1.972488 3155.410889", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_2", "11616.391602 1.712750 3215.559814", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_2", "11676.476563 1.865923 3221.023193", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_radar_mobile_generator", "11649.230469 3.244215 3278.127930", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_mil_radar_mobile_generator", "11643.327148 3.165764 3278.138428", "90.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_2", "11661.055664 2.000585 3239.608887", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_2", "11626.533203 1.805956 3231.723389", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big3", "11678.089844 3.400788 3202.334961", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big3", "11603.585938 3.581647 3196.992920", "-179.999985 0.000000 0.000000" );
SpawnObject( "Land_Misc_Toilet_Mobile", "11590.665039 3.431093 3132.767822", "-179.999985 0.000000 0.000000" );
SpawnObject( "Land_Misc_Toilet_Mobile", "11588.417969 3.446178 3132.243164", "-179.999985 0.000000 0.000000" );
SpawnObject( "Land_Misc_Toilet_Mobile", "11585.816406 3.465132 3131.939697", "-179.999985 0.000000 0.000000" );
SpawnObject( "Land_Misc_Toilet_Mobile", "11583.184570 3.460114 3133.241699", "-179.999985 0.000000 0.000000" );
SpawnObject( "Land_Misc_Toilet_Mobile", "11594.000000 3.407354 3133.624268", "-179.999985 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "11575.209961 2.390922 3127.688721", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11576.680664 2.326362 3130.140869", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11584.379883 2.223860 3133.583008", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11592.712891 2.180318 3134.101807", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "11599.477539 2.223857 3131.128906", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "11612.249023 0.893235 3273.135254", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile5", "11481.942383 2.534711 3175.507324", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile5", "11477.124023 2.450562 3174.351318", "-179.999985 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11478.492188 2.461909 3176.352783", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11473.959961 2.394476 3173.730469", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11485.112305 2.580030 3175.450928", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11609.610352 1.031885 3270.037598", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11619.003906 1.209042 3272.908203", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "11643.572266 2.303529 3222.457031", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile2", "11671.741211 2.117934 3212.219727", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "11626.803711 1.851156 3236.698486", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_hospital_transport_bed", "11635.523438 2.005109 3220.522217", "-50.000004 0.000000 0.000000" );
SpawnObject( "bldr_hospital_transport_bed", "11634.642578 1.917008 3217.923096", "40.000000 0.000000 0.000000" );
SpawnObject( "bldr_medical_table", "11653.750977 2.185719 3220.594727", "90.000000 0.000000 0.000000" );
SpawnObject( "bldr_medical_table", "11632.822266 1.903705 3218.880127", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "11651.035156 2.563604 3235.031006", "29.999998 0.000000 0.000000" );
SpawnObject( "bldr_tent_ltable", "11628.673828 2.517136 3211.634521", "-29.999998 0.000000 0.000000" );
SpawnObject( "bldr_Misc_WoodTable_Indoor", "11648.796875 2.349068 3198.886719", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Misc_BoxWooden", "11675.102539 2.477007 3226.671631", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_pillbox", "11755.728516 3.307910 3281.143555", "-100.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_pillbox", "11690.677734 2.949604 3274.310547", "-109.999985 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_bags_long", "11571.957031 2.518525 3213.204102", "50.000004 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_bags_long", "11687.103516 1.907173 3271.567383", "70.000000 0.000000 0.000000" );
SpawnObject( "bldr_roadblock_bags_long", "11759.775391 2.178830 3281.068848", "100.000008 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "11558.558594 1.315759 3223.331055", "150.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile6", "11596.337891 1.236930 3258.134033", "66.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11562.079102 1.679826 3221.137207", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11558.199219 1.167573 3225.125732", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11593.275391 0.855807 3260.433105", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_GroundSq_5m", "11598.232422 1.312503 3258.301514", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile3", "11617.147461 2.469019 3345.114258", "0.000000 0.000000 0.000000" );
SpawnObject( "bldr_Garbage_Pile3", "11620.121094 2.478380 3346.902100", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_5", "11712.071289 2.433609 3194.774658", "0.000000 0.000000 0.000000" );
SpawnObject( "Land_Mil_Tent_Big1_5", "11704.607422 2.135967 3226.235352", "0.000000 0.000000 0.000000" );	




//INIT WEATHER BEFORE ECONOMY INIT------------------------

	Weather weather = g_Game.GetWeather();
 
    weather.MissionWeather(true);    // false = use weather controller from Weather.c
 
    weather.GetRain().SetLimits( 0.0 , 0.0 );
    weather.GetOvercast().SetLimits( 0.0 , 0.0 );
    weather.GetFog().SetLimits( 0.0 , 0.01 );
 
    weather.GetOvercast().SetForecastChangeLimits( 0.0, 0.1 );
    weather.GetRain().SetForecastChangeLimits( 0.0, 0.0 );
    weather.GetFog().SetForecastChangeLimits( 0.0, 0.0 );
 
    weather.GetOvercast().SetForecastTimeLimits( 1800 , 1800 );
    weather.GetRain().SetForecastTimeLimits( 600 , 600 );
    weather.GetFog().SetForecastTimeLimits( 1800 , 1800 );
 
    weather.GetOvercast().Set( Math.RandomFloatInclusive(0.0, 0.3), 0, 0);
    weather.GetRain().Set( Math.RandomFloatInclusive(0.0, 0.0), 0, 0);
    weather.GetFog().Set( Math.RandomFloatInclusive(0.0, 0.1), 0, 0);
 
    weather.SetWindMaximumSpeed(15);
    weather.SetWindFunctionParams(0.1, 0.3, 50);

	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();
	
//<START>..................................<START>	
//-------[ CAR SPAWNER FUNCTION -NZJOCKO- ]-------
//
//-SUPPORTED CAR TYPES-	 
//"OffroadHatchback" "OffroadHatchback_Blue" "OffroadHatchback_White"
//"CivilianSedan"  "CivilianSedan_Wine"  "CivilianSedan_Black"
//"Sedan_02"  "Sedan_02_Red"  "Sedan_02_Grey"
//"Hatchback_02" "Hatchback_02_Black" "Hatchback_02_Blue"
//	
//-OPTIONS- [true|flase]	
//spawnfood, spawndrink, spawngun, spawnmed
//	
//-FORMAT-	
// spawncar("TYPE","POSITION",SPAWNFOOD,SPAWNDRINK,SPAWNGUN,SPAWNMED)	
//
// maybe add random postion finder		
//----RANDOM CAR & LOOT SPAWN-----------
ref TVectorArray posArray = {
	
"13378.400391 13.593865 5354.807617",
"13377.716797 13.615818 5399.776855",
"13377.977539 13.403805 5474.424805",
"13384.493164 13.775370 5592.401367",
"13400.566406 13.086131 5737.411133",
"13402.302734 13.042225 5862.562500",
"13423.070313 13.380334 5918.410156",
"13437.546875 13.543036 6039.528320",
"13462.195313 13.841402 6238.553223",
"13458.839844 13.629889 6304.648438",
"13458.139648 13.438540 6388.108887",
"13411.912109 11.854989 6577.077148",
"13398.323242 12.017178 6624.640137",
"13305.069336 13.785369 6911.054688",
"13223.308594 14.028213 7109.537109",
"13112.709961 13.840961 7323.310547",
"13070.388672 13.650106 7474.458496",
"13046.087891 13.295677 7706.354980",
"13054.078125 13.389065 7879.652344",
"13029.888672 13.393518 8043.809082",
"13030.575195 13.024841 8179.512207",
"12969.327148 13.630613 8376.537109",
"12878.361328 13.428210 8600.958008",
"12826.874023 13.640017 8905.519531",
"12837.111328 13.788157 9118.408203",
"12892.862305 14.024980 9359.450195",
"12917.668945 13.726631 9500.704102",
"12938.987305 13.720031 9731.149414",
"12933.824219 13.975368 9622.827148",
"12981.100586 13.725368 9940.872070",
"13010.642578 13.771626 10092.137695",
"13045.556641 13.725368 10168.349609",
"13069.584961 13.705369 10275.333008",
"13115.291016 13.715368 10372.708008",
"13136.167969 13.715368 10464.437500",
"13315.009766 12.930610 10830.304688",
"13486.001953 18.132900 11155.740234",
"13597.342773 19.891787 11441.316406",
"13556.083008 40.944126 11722.144531",
"13748.042969 31.776249 11902.288086",
"13942.803711 22.016745 12061.898438",
"14016.227539 21.076069 12459.113281",
"13406.806641 13.669063 5167.066895",
"13457.603516 13.678348 4941.940430",
"13500.058594 13.175369 4833.057617",
"13480.140625 13.931520 4465.391113",
"13388.028320 14.152663 4161.603027",
"13265.280273 13.147535 4018.677734",
"13110.897461 12.345148 3885.845947",
"13004.620117 13.558879 3803.738770",
"12828.891602 13.721838 3691.691895",
"12677.934570 17.219028 3612.846436",
"12474.954102 14.500712 3535.997314",
"12397.681641 13.881529 3537.766602",
"12251.086914 13.344837 3517.833252",
"12097.717773 13.919704 3488.500977",
"12053.749023 13.812867 3492.400879",
"11926.049805 13.960073 3463.755615",
"11794.273438 13.860085 3453.125488",
"11619.164063 13.259303 3393.057129",
"11309.750000 13.886429 3290.006104",
"11456.541016 13.503228 3361.583496",
"11182.081055 13.798353 3215.838623",
"11063.112305 13.924171 3065.717529",
"10934.022461 13.905682 2903.679443",
"10878.000977 13.725368 2714.633789",
"10880.433594 13.664233 2755.444580",
"10828.401367 13.553866 2566.842041",
"10777.967773 13.724751 2581.930176",
"10731.032227 14.482494 2473.650146",
"10684.890625 14.156656 2461.118896",
"10581.369141 13.725368 2390.803711",
"10600.503906 13.715368 2308.842041",
"10467.498047 13.732040 2379.507080",
"10556.876953 14.102830 2207.568115",
"10444.402344 13.725368 2112.367188",
"10415.811523 13.725368 2176.535645",
"10343.572266 13.532728 2177.857178",
"10387.782227 13.724998 2357.667480",
"10470.192383 13.725368 2298.451416",
"10253.264648 13.663191 2129.212891",
"10162.532227 13.656370 2118.527100",
"10102.478516 13.501806 2102.703369",
"10011.188477 13.725368 2062.002197",
"9866.813477 13.739872 2038.681519",
"10039.605469 13.735369 1949.058838",
"9719.445313 13.844351 2019.525024",
"9623.361328 14.098691 2035.961548",
"9509.885742 13.219825 2023.745361",
"9478.249023 13.436851 2011.161621",
"9387.729492 14.942156 2065.137695",
"9221.975586 13.841501 2053.839844",
"9071.189453 15.140113 2105.837891",
"8998.046875 15.230686 2171.033936",
"8782.011719 14.754785 2294.450195",
"8884.301758 15.718011 2253.903809",
"8722.939453 14.604044 2400.179199",
"8670.707031 14.359440 2478.039551",
"8607.737305 22.631315 2617.831055",
"8509.970703 19.024900 2780.803711",
"8434.777344 21.148914 2862.580078",
"8368.125977 21.633272 2998.538086",
"8314.220703 18.325037 3043.736816",
"8211.693359 13.931085 3088.149902",
"8590.668945 21.535126 2653.411621",
"8108.298340 14.037168 3145.720215",
"8024.704590 14.332909 3158.549316",
"7946.879883 14.633928 3182.901611",
"7760.607422 11.810726 3166.652344",
"7794.770508 12.383276 3183.120850",
"7578.311523 13.981759 3155.165771",
"7477.080566 14.341011 3172.748291",
"7365.393066 23.175081 3170.652832",
"7004.773926 15.745676 3173.125244",
"6969.028809 15.426296 3122.587646",
"6909.992188 15.005369 3085.891602",
"6868.997559 15.025370 3066.114502",
"6751.591309 15.580328 3029.134277",
"6575.273438 21.722406 3041.955811",
"6582.219238 17.068005 2938.783447",
"6488.060547 16.415369 2879.222900",
"6413.418457 17.045368 2744.479980",
"6349.077148 16.911804 2761.434082",
"6270.419434 15.995369 2673.292236",
"6255.062988 16.005369 2626.156250",
"6281.038574 16.540493 2568.661621",
"6263.507324 16.671968 2495.310547",
"6221.658203 18.816265 2378.547852",
"6279.922363 16.978565 2396.435547",
"6682.815430 17.202610 3026.992188",
"6538.452148 15.987349 2933.576416"

};
ref TBoolArray boolArray = {true,false};
ref TStringArray carArray = {"OffroadHatchback","OffroadHatchback_Blue","OffroadHatchback_White","CivilianSedan","CivilianSedan_Wine","CivilianSedan_Black","Sedan_02_Grey","Sedan_02","Sedan_02_Red","Hatchback_02","Hatchback_02_Blue","Hatchback_02_Black"};


//spawning every car with random chance of loot
	for ( int i = 0; i < posArray.Count(); ++i )
		{
			//spawncar(carArray.GetRandomElement(), posArray.Get(i),true,true,true,true);
			//spawn all pos candom car random chance of loot types
			spawncar(carArray.GetRandomElement(), posArray.Get(i),boolArray.GetRandomElement(),boolArray.GetRandomElement(),boolArray.GetRandomElement(),boolArray.GetRandomElement());
		}

//--------------------------------------
//---SET CAR & LOOT SPAWN---------------
//spawncar("Hatchback_02_Blue", "12010.000000 145.675003 12511.099609",true,true,true,true);
//spawncar("OffroadHatchback", "12010.000000 145.675003 12511.099609",false,false,true,false);	
//spawncar(carArray.GetRandomElement(), "5064.339844 17.157200 2394.250000",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10466.905273 13.731251 2379.298340",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "7527.672852 13.727050 3563.755371",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "13303.094727 14.306023 6755.385254",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10685.333984 14.115663 2460.562988",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10581.024414 13.725368 2391.847900",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10730.566406 14.482880 2473.381104",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10525.765625 13.725368 2252.337158",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10331.084961 13.515369 2159.247559",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10385.747070 13.737221 2352.013428",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10449.214844 13.725368 2111.314697",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10448.708984 13.715824 2419.765869",true,true,true,true);
//spawncar(carArray.GetRandomElement(), "10600.845703 13.715368 2310.001709",true,true,true,true);
//--------------------------------------	
//<END>..................................<END>	
	
	

//GetCEApi().ExportProxyData( "7500 0 7500", 10000 );  //Center of map, radius of how far to go out and find buildings

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			int rndHlt = Math.RandomInt(55,100);
			itemEnt.SetHealth("","",rndHlt);
		}
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
	    player.RemoveAllItems();
		player.GetInventory().CreateInInventory("CargoPants_Beige");
		player.GetInventory().CreateInInventory("CZ527");
		player.GetInventory().CreateInInventory("Mag_CZ527_5rnd");
		player.GetInventory().CreateInInventory("Mag_CZ527_5rnd");
		player.GetInventory().CreateInInventory("Mag_CZ527_5rnd");
	    player.GetInventory().CreateInInventory("Hoodie_Brown");
		player.GetInventory().CreateInInventory("Rag");
		player.GetInventory().CreateInInventory("AthleticShoes_Black");
		player.GetInventory().CreateInInventory("Battery9V");
		player.GetInventory().CreateInInventory("WaterBottle");
		player.GetInventory().CreateInInventory("SpaghettiCan");
		player.GetInventory().CreateInInventory("HuntingKnife");
	    player.GetInventory().CreateInInventory("M67Grenade");
		player.GetInventory().CreateInInventory("Mag_IJ70_8Rnd");
		player.GetInventory().CreateInInventory("BaseballCap_Black");
		player.GetInventory().CreateInInventory("ChernarusMap");
		player.GetInventory().CreateInInventory("MakarovIJ70");
		
	}
	
	

};


Mission CreateCustomMission(string path)
{
	return new CustomMission();
}