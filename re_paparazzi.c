#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	struct<3> Local_41 = { 0, 0, 0 } ;
	float fLocal_44 = 0f;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	struct<6> Local_73 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	float fLocal_93 = 0f;
	int iLocal_94 = 0;
	var uLocal_95 = 15;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 1;
	struct<18> Local_129[4];
	struct<18> Local_202[8];
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	bool bLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	char* sLocal_369 = NULL;
	char[] cLocal_370[8] = 0;
	char* sLocal_371 = NULL;
	char* sLocal_372 = NULL;
	int iLocal_373[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_383 = 0;
	int iLocal_384[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_393[16];
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	int iLocal_558[3] = { 0, 0, 0 };
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	float fLocal_567 = 0f;
	float fLocal_568 = 0f;
	int iLocal_569[2] = { 0, 0 };
	float fLocal_572 = 0f;
	struct<3> Local_573 = { 0, 0, 0 } ;
	struct<3> Local_576 = { 0, 0, 0 } ;
	struct<3> Local_579 = { 0, 0, 0 } ;
	struct<3> Local_582 = { 0, 0, 0 } ;
	struct<3> Local_585 = { 0, 0, 0 } ;
	struct<3> Local_588 = { 0, 0, 0 } ;
	struct<3> Local_591 = { 0, 0, 0 } ;
	struct<3> Local_594[4];
	float fLocal_607[4] = { 0f, 0f, 0f, 0f };
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	var uLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	char* sLocal_624[3] = { NULL, NULL, NULL };
	int iLocal_628 = 0;
	char* sLocal_629 = NULL;
	struct<3> Local_630 = { 0, 0, 0 } ;
	struct<3> Local_633 = { 0, 0, 0 } ;
	float fLocal_636 = 0f;
	struct<3> Local_637 = { 0, 0, 0 } ;
	struct<3> Local_640 = { 0, 0, 0 } ;
	float fLocal_643 = 0f;
	struct<3> Local_644 = { 0, 0, 0 } ;
	struct<3> Local_647 = { 0, 0, 0 } ;
	float fLocal_650 = 0f;
	struct<3> Local_651 = { 0, 0, 0 } ;
	struct<3> Local_654 = { 0, 0, 0 } ;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	float fLocal_659 = 0f;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	bool bLocal_662 = 0;
	float fLocal_663 = 0f;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	bool bLocal_666 = 0;
	bool bLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	iLocal_16 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_44 = -1f;
	Local_51 = { 226.6825f, 681.0297f, 188.4987f };
	Local_54 = { 231.8002f, 672.5261f, 188.9459f };
	fLocal_57 = 32.0905f;
	StringCopy(&Local_73, "", 24);
	Local_85 = { 259.4603f, 125.8718f, 100.9754f };
	fLocal_88 = 283.0367f;
	Local_90 = { 245.1998f, 76.8231f, 90.7069f };
	fLocal_93 = -18.4743f;
	cLocal_370 = "REPAPAU";
	sLocal_371 = "random@escape_paparazzi@standing@";
	sLocal_372 = "random@escape_paparazzi@incar@";
	iLocal_563 = 4000;
	fLocal_567 = 0f;
	fLocal_568 = 0f;
	fLocal_572 = 0f;
	Local_573 = { 272.6356f, 155.5618f, 103.3306f };
	Local_576 = { 247.5795f, 88.7094f, 92.9859f };
	Local_579 = { 259.0348f, 114.0369f, 98.9984f };
	Local_582 = { 255.4971f, 116.8744f, 99.8162f };
	Local_585 = { 266.8217f, 139.7698f, 103.2269f };
	Local_588 = { 270.0174f, 139.1181f, 103.2195f };
	Local_591 = { 265.4954f, 144.6143f, 103.3326f };
	sLocal_629 = "left_";
	Local_630 = { 261.93405f, 126.24293f, 95.15405f };
	Local_633 = { 270.67587f, 152.47626f, 109.235565f };
	fLocal_636 = 16f;
	Local_637 = { 261.93405f, 126.24293f, 107.65405f };
	Local_640 = { 248.35399f, 87.01792f, 92.389f };
	fLocal_643 = 16f;
	Local_644 = { 256.6779f, 126.57297f, 99.547844f };
	Local_647 = { 266.44714f, 123.411964f, 105.67284f };
	fLocal_650 = 5.75f;
	Local_651 = { 260.242f, 127.423f, 101.65f };
	Local_654 = { 0f, 0f, -20f };
	Local_48 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_282();
	}
	func_281(&uLocal_95, 3);
	if (!Global_3)
	{
		if (func_239(Local_48, -1, 0, 0, 0))
		{
			func_236(-1);
		}
		else
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	iLocal_363 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.3633f, 82.5239f, 276.3459f) + Vector(10f, 10f, 10f), Vector(93.3633f, 82.5239f, 276.3459f) - Vector(10f, 10f, 10f), false, true, true, true);
	iLocal_364 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(188.5935f, 675.8706f, 227.8598f) + Vector(4f, 4f, 4f), Vector(188.5935f, 675.8706f, 227.8598f) - Vector(4f, 4f, 4f), false, true, true, true);
	iLocal_365 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, true, true, true);
	if (Global_3)
	{
		MISC::CLEAR_AREA(246.1673f, 92.1704f, 93.8361f, 6f, true, false, false, false);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), false, true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_233(&uLocal_95);
		if (!func_232())
		{
			if (func_231())
			{
				func_282();
			}
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_EP", 0);
		iVar0 = 0;
		while (iVar0 < Local_129.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_129[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_129[iVar0 /*18*/], false))
			{
				Local_129[iVar0 /*18*/].f_8 = { ENTITY::GET_ENTITY_COORDS(Local_129[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_202.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]) && !ENTITY::IS_ENTITY_DEAD(Local_202[iVar0 /*18*/], false))
			{
				Local_202[iVar0 /*18*/].f_6 = { ENTITY::GET_ENTITY_COORDS(Local_202[iVar0 /*18*/], true) };
			}
			iVar0++;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_58 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			Local_61 = { ENTITY::GET_ENTITY_COORDS(iLocal_84, true) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_89) && !ENTITY::IS_ENTITY_DEAD(iLocal_89, false))
		{
			Local_64 = { ENTITY::GET_ENTITY_COORDS(iLocal_89, true) };
		}
		if (!func_232())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_367)
				{
					case 0:
						if (func_222())
						{
							func_215();
							iLocal_367++;
						}
						else if (func_203())
						{
							func_282();
						}
						break;
					
					case 1:
						if ((func_202() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
						{
							if (!Global_3 && !bLocal_68)
							{
								func_201();
								func_282();
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.00742f, 192.48048f, 58.088165f, 228.82909f, 50.88667f, 111.61044f, 82.75f, false, true, 0))
						{
							func_192(1);
							iLocal_358 = func_191(iLocal_84, 0, 145);
							func_190("MAG_2_ESCAPE_PAP_GET_CAR");
							func_189(0);
						}
						break;
				}
			}
			else
			{
				func_282();
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			switch (iLocal_45)
			{
				case 0:
					func_186();
					break;
				
				case 1:
					func_183();
					break;
				
				case 2:
					func_161();
					break;
				
				case 3:
					func_148();
					break;
				
				case 4:
					func_112();
					break;
				
				case 10:
					func_282();
					break;
				
				case 5:
					func_111();
					break;
				
				case 6:
					func_108(sLocal_369);
					break;
				
				case 7:
					func_107();
					break;
				
				case 9:
					break;
				
				case 8:
					if (func_106())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
						{
							PED::DELETE_PED(&iLocal_84);
						}
						func_82();
					}
					break;
				
				case 11:
					func_78();
					break;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_61, 210f, 210f, 210f, false, true, 0))
			{
				func_201();
				func_282();
			}
			if (((iLocal_45 != 5 && iLocal_45 != 6) && iLocal_45 != 10) && iLocal_45 != 7)
			{
				if (!Global_3 && !bLocal_68)
				{
					if (func_75(iLocal_84, 1, 1) || func_74())
					{
						if (iLocal_45 > 0)
						{
							func_189(5);
						}
						else
						{
							func_201();
							func_189(10);
						}
					}
					if (((iLocal_45 != 5 && iLocal_45 != 10) && iLocal_45 != 0) && iLocal_45 != 7)
					{
						if (func_70())
						{
							func_189(6);
						}
					}
				}
			}
		}
		func_31();
		if (iLocal_45 <= 0)
		{
			iVar1 = func_30();
			if (iVar1 != -1 && (iLocal_72 || func_24() != 0))
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 243.64427f, 123.71928f, 97.598976f, 262.43533f, 116.87461f, 107.476166f, 32.25f, false, true, 0) && (MISC::GET_GAME_TIMER() - iLocal_562) > 5000) && !PED::IS_PED_INJURED(Local_202[iVar1 /*18*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_202[iVar1 /*18*/], true), Local_58) < (30.5f * 30.5f) && SYSTEM::VDIST2(Local_61, Local_58) > (22.5f * 22.5f))
					{
						if (func_232())
						{
							if (Local_393[4 /*10*/] != Local_202[iVar1 /*18*/])
							{
								func_23(&Local_393, 4);
								func_22(&Local_393, 4, Local_202[iVar1 /*18*/], "PAPARAZZO", 0, 1);
							}
							else if (!iLocal_661)
							{
								if (func_5(&Local_393, cLocal_370, "REPAP_CALL1", 1, 0, 0, 0))
								{
									iLocal_562 = MISC::GET_GAME_TIMER();
									iLocal_661 = 1;
								}
							}
							else if (func_5(&Local_393, cLocal_370, "REPAP_CHAT", 1, 0, 0, 0))
							{
								iLocal_562 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							StringCopy(&Var2, "REPAP_AZAA_0", 24);
							StringIntConCat(&Var2, MISC::GET_RANDOM_INT_IN_RANGE(1, 13), 24);
							func_3(Local_202[iVar1 /*18*/], &Var2, "PAPARAZZO", 24);
							iLocal_562 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		if (iLocal_45 <= 1)
		{
			func_2();
		}
		func_1();
	}
}

void func_1()//Position - 0x85F
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_2()//Position - 0x8CC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_202.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]))
		{
			if (ENTITY::GET_ENTITY_HEALTH(Local_202[iVar0 /*18*/]) < Local_202[iVar0 /*18*/].f_17)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_202[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_384[iVar0] = (iLocal_384[iVar0] + (Local_202[iVar0 /*18*/].f_17 - ENTITY::GET_ENTITY_HEALTH(Local_202[iVar0 /*18*/])));
					iLocal_80 = (iLocal_80 + (Local_202[iVar0 /*18*/].f_17 - ENTITY::GET_ENTITY_HEALTH(Local_202[iVar0 /*18*/])));
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_202[iVar0 /*18*/]);
					if (iLocal_384[iVar0] > iLocal_383)
					{
						iLocal_383 = iLocal_384[iVar0];
					}
				}
			}
			Local_202[iVar0 /*18*/].f_17 = ENTITY::GET_ENTITY_HEALTH(Local_202[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_3(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x988
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_4(iParam3), false);
}

int func_4(int iParam0)//Position - 0x9A1
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

bool func_5(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB93
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
	return func_6(sParam2, iParam3, 0);
}

int func_6(char* sParam0, int iParam1, bool bParam2)//Position - 0xBE1
{
	Global_21846 = 0;
	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = 0;
					Global_20499 = 0;
				}
				else
				{
					func_20();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_19(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_18();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
			if (bParam2)
			{
				func_16();
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20500.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20466 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_15())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78689)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_14())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8370, 9))
				{
					return 0;
				}
			}
			func_13();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_12();
		func_7();
		return 1;
	}
	if (Global_21845 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21847 || iParam1 == Global_21847)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_20();
	}
	return 0;
}

void func_7()//Position - 0xEAF
{
	if (!func_8())
	{
		return;
	}
	if (Global_21851)
	{
		MemCopy(&(Global_1978312.f_1), {Global_21464}, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}
}

int func_8()//Position - 0xEE6
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_11())
	{
		return 0;
	}
	if (func_9(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_9(int iParam0)//Position - 0xF49
{
	return func_10(iParam0, 20);
}

var func_10(int iParam0, int iParam1)//Position - 0xF59
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_11()//Position - 0xF71
{
	return -1;
}

void func_12()//Position - 0xF7A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21845 = 1;
}

void func_13()//Position - 0xFAA
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_14()//Position - 0x103F
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()//Position - 0x1066
{
	int iVar0;
	int iVar1;
	
	if (Global_78689)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_16()//Position - 0x10FF
{
	if (func_17(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[0 /*29*/])
			{
				Global_20500 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[1 /*29*/])
			{
				Global_20500 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[2 /*29*/])
			{
				Global_20500 = 2;
			}
			else
			{
				Global_20500 = 0;
			}
		}
	}
	else
	{
		Global_20500 = func_24();
		if (Global_20500 == 145)
		{
			Global_20500 = 3;
		}
		if (Global_78689)
		{
			Global_20500 = 3;
		}
		if (Global_20500 > 3)
		{
			Global_20500 = 3;
		}
	}
}

bool func_17(int iParam0)//Position - 0x11A1
{
	return Global_43377 == iParam0;
}

void func_18()//Position - 0x11AF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21134[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
		Global_21134[iVar0 /*10*/].f_7 = 0;
		Global_21134[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
}

bool func_19(int iParam0, int iParam1)//Position - 0x1205
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1654054.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1654054.f_1048, iParam0);
}

void func_20()//Position - 0x123D
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1 == 9) || Global_20499 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1294
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = iParam5;
	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}
}

void func_22(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x12EA
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78689)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_23(var uParam0, int iParam1)//Position - 0x1385
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

int func_24()//Position - 0x13A2
{
	func_25();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_25()//Position - 0x13BB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_28(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_27(PLAYER::PLAYER_PED_ID());
			if (func_26(iVar0) && (!func_17(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_26(Global_113810.f_2366.f_539.f_4321))
				{
					Global_113810.f_2366.f_539.f_4322 = Global_113810.f_2366.f_539.f_4321;
				}
				Global_113810.f_2366.f_539.f_4323 = iVar0;
				Global_113810.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113810.f_2366.f_539.f_4321 != 145)
			{
				Global_113810.f_2366.f_539.f_4323 = Global_113810.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_113810.f_2366.f_539.f_4321 = 145;
}

bool func_26(int iParam0)//Position - 0x14B8
{
	return iParam0 < 3;
}

int func_27(int iParam0)//Position - 0x14C4
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)//Position - 0x1501
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)//Position - 0x1526
{
	return Global_2058[iParam0 /*29*/];
}

int func_30()//Position - 0x1535
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_202.f_0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_202[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_84))
		{
			if (SYSTEM::VDIST2(Local_58, Local_202[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(Local_61, Local_202[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_31()//Position - 0x15B5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	switch (iLocal_47)
	{
		case 0:
			iLocal_614 = 0;
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_GenStreet_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_pap_camera_01"));
			STREAMING::REQUEST_MODEL(joaat("cavalcade2"));
			STREAMING::REQUEST_MODEL(joaat("vader"));
			STREAMING::REQUEST_ANIM_DICT(sLocal_371);
			STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
			if (((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_GenStreet_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pap_camera_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("cavalcade2"))) && STREAMING::HAS_MODEL_LOADED(joaat("vader"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_371)) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims"))
			{
				Local_594[0 /*3*/] = { 266.6049f, 157.7677f, 104.2417f };
				Local_594[1 /*3*/] = { 280.2455f, 152.1227f, 103.7096f };
				Local_594[2 /*3*/] = { 223.2588f, 50.6347f, 83.6598f };
				Local_594[3 /*3*/] = { 244.1302f, 37.4709f, 83.4804f };
				fLocal_607[0] = -111.1625f;
				fLocal_607[1] = 68.857f;
				fLocal_607[2] = -108.2056f;
				fLocal_607[3] = 50.8189f;
				iVar0 = 0;
				while (iVar0 < Local_129.f_0)
				{
					func_69(iVar0);
					func_67(func_68(iVar0));
					func_67(func_66(iVar0));
					iVar0++;
				}
				iLocal_612 = 0;
				func_65(func_68(1), 274.9306f, 147.164f, 103.3794f, 2.2109f);
				func_65(func_66(1), 275.6894f, 148.1107f, 103.3723f, 117.9416f);
				func_65(func_66(2), Local_594[1 /*3*/], fLocal_607[1]);
				func_65(func_66(3), Local_594[1 /*3*/], fLocal_607[1]);
				func_64(0, Local_594[0 /*3*/], fLocal_607[0], 1);
				func_64(1, Local_594[1 /*3*/], fLocal_607[1], 0);
				ENTITY::SET_ENTITY_COORDS(func_63(0, 1), 265.408f, 151.2875f, 103.5673f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_63(0, 1), 217.1033f);
				ENTITY::SET_ENTITY_COORDS(func_63(2, 1), 245.9477f, 72.661f, 89.1067f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_63(2, 1), 38.6283f);
				ENTITY::SET_ENTITY_COORDS(func_63(3, 1), 244.1872f, 73.3336f, 89.0917f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_63(3, 1), 272.9875f);
				TASK::TASK_PLAY_ANIM(func_63(0, 1), "random@paparazzi@pap_anims", "base_pap", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(func_63(1, 0), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(func_63(1, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(func_63(2, 1), "random@paparazzi@pap_anims", "pap_idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(func_63(3, 1), "random@paparazzi@pap_anims", "pap_idle_b", 8f, -8f, -1, 1, 0f, false, false, false);
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			func_61(func_66(0), 265.408f, 151.2875f, 103.5673f, 217.1033f, "random@paparazzi@pap_anims", "base_pap", 0);
			func_61(func_68(1), 274.9306f, 147.164f, 103.3794f, 2.2109f, "random@paparazzi@pap_anims", "pap_idle_a", "base_pap");
			func_61(func_66(1), 277.1364f, 148.4023f, 103.3493f, 104.6318f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_61(func_66(2), 245.9477f, 72.661f, 89.1067f, 38.6283f, "random@paparazzi@pap_anims", "pap_idle_b", 0);
			func_61(func_66(3), 244.1872f, 73.3336f, 89.0917f, 272.9875f, "random@paparazzi@pap_anims", "pap_idle_a", 0);
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_202[2 /*18*/].f_2))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_202[2 /*18*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_202[2 /*18*/].f_2, true, false);
				}
			}
			switch (iLocal_614)
			{
				case 0:
					if (!PED::IS_PED_INJURED(func_63(1, 0)))
					{
						TASK::CLEAR_PED_TASKS(func_63(1, 0));
					}
					if (!PED::IS_PED_INJURED(func_63(1, 1)))
					{
						TASK::CLEAR_PED_TASKS(func_63(1, 1));
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_129[2 /*18*/]))
					{
						func_64(2, Local_594[2 /*3*/], fLocal_607[2], 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[2 /*18*/], false))
						{
							func_65(func_68(2), ENTITY::GET_ENTITY_COORDS(Local_129[2 /*18*/], true), 0f);
							PED::SET_PED_INTO_VEHICLE(func_63(2, 0), Local_129[2 /*18*/], -1);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_129[3 /*18*/]))
					{
						func_64(3, Local_594[3 /*3*/], fLocal_607[3], 0);
					}
					if (!PED::IS_PED_INJURED(func_63(2, 1)))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_63(2, 1), Local_579, 2f, -1, 0.25f, 0, 40000f);
					}
					if (!PED::IS_PED_INJURED(func_63(3, 1)))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_63(3, 1), Local_582, 2f, -1, 0.25f, 0, 40000f);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(func_63(3, 0)))
					{
						func_65(func_68(3), 253.8376f, 85.4544f, 92.8933f, 85.1702f);
					}
					if (Global_3 || bLocal_68)
					{
						if (!PED::IS_PED_INJURED(func_63(1, 0)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_63(1, 0), Local_585, 2f, 20000, 0.25f, 0, 40000f);
						}
						if (!PED::IS_PED_INJURED(func_63(1, 1)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_63(1, 1), Local_588, 2f, 20000, 0.25f, 0, 40000f);
						}
						if (!PED::IS_PED_INJURED(func_63(0, 1)))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_63(0, 1), Local_591, 2f, 20000, 0.25f, 0, 40000f);
						}
					}
					SYSTEM::SETTIMERB(0);
					iVar1 = 0;
					while (iVar1 < Local_202.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar1 /*18*/]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_202[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0f);
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 < Local_129.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_129[iVar1 /*18*/]))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_129[iVar1 /*18*/], "MAG_2_PAPARAZZI_GROUP", 0f);
						}
						iVar1++;
					}
					iLocal_614++;
					break;
				
				case 1:
					func_55();
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[0 /*18*/], false) && !PED::IS_PED_INJURED(func_63(0, 0))) && !PED::IS_PED_INJURED(func_63(0, 1)))
					{
						if (!iLocal_569[1])
						{
							iLocal_569[1] = 1;
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_63(0, 0), Local_129[0 /*18*/], Local_573, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
						}
					}
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[2 /*18*/], false) && !PED::IS_PED_INJURED(func_63(2, 0))) && !PED::IS_PED_INJURED(func_63(2, 1)))
					{
						if (!iLocal_569[0])
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_63(2, 0), Local_129[2 /*18*/], Local_576, 10f, 0, joaat("cavalcade2"), 786469, 2f, 10f);
							iLocal_569[0] = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_84) && !PED::IS_PED_INJURED(iLocal_84))
					{
						func_52(iLocal_84, 6);
						if (Global_3 || bLocal_68)
						{
							if (!PED::IS_PED_INJURED(func_63(1, 0)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_63(1, 0), Local_585, Global_22, false, true, 0))
								{
									func_51(iLocal_84, func_68(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_63(1, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_63(1, 1), Local_588, Global_22, false, true, 0))
								{
									func_51(iLocal_84, func_66(1));
								}
							}
							if (!PED::IS_PED_INJURED(func_63(0, 1)))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(func_63(0, 1), Local_588, Global_22, false, true, 0))
								{
									func_51(iLocal_84, func_66(0));
								}
							}
						}
						else
						{
							func_52(iLocal_84, func_68(1));
							func_52(iLocal_84, func_66(1));
							if (SYSTEM::TIMERB() > 1000)
							{
								func_52(iLocal_84, func_68(1));
							}
						}
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), Local_85) < 9f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(func_63(2, 1), Local_579, Global_22, false, true, 0))
						{
							func_51(iLocal_84, func_66(2));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_63(3, 1), Local_582, Global_22, false, true, 0))
						{
							func_51(iLocal_84, func_66(3));
						}
						if (ENTITY::IS_ENTITY_AT_COORD(func_63(0, 1), Local_582, Global_22, false, true, 0))
						{
							func_51(iLocal_84, func_66(0));
						}
					}
					else
					{
						if (!BitTest(uLocal_617, 3))
						{
							TASK::CLEAR_PED_TASKS(Local_202[func_66(3) /*18*/]);
							MISC::SET_BIT(&uLocal_617, 3);
						}
						if (!BitTest(uLocal_617, 2))
						{
							TASK::CLEAR_PED_TASKS(Local_202[func_66(2) /*18*/]);
							MISC::SET_BIT(&uLocal_617, 2);
						}
						if (!BitTest(uLocal_617, 0))
						{
							TASK::CLEAR_PED_TASKS(Local_202[func_66(0) /*18*/]);
							MISC::SET_BIT(&uLocal_617, 0);
						}
						if (Global_3 || bLocal_68)
						{
							func_51(iLocal_84, func_66(3));
						}
						else
						{
							func_52(iLocal_84, func_66(3));
						}
						func_52(iLocal_84, func_66(2));
						func_52(iLocal_84, func_66(0));
					}
					break;
			}
			func_50();
			break;
		
		case 3:
			func_55();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_89) < 1f)
				{
					fLocal_572 = (fLocal_572 + MISC::GET_FRAME_TIME());
				}
				else if (fLocal_572 > 0f)
				{
					fLocal_572 = 0f;
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_129.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_129[iVar0 /*18*/]) && iLocal_45 != 6)
				{
					if ((iVar0 < 2 && ((iVar0 != iLocal_612 || !ENTITY::DOES_ENTITY_EXIST(Local_129[0 /*18*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_129[1 /*18*/]))) && (MISC::GET_GAME_TIMER() - iLocal_613) > 500)
					{
						if (SYSTEM::VDIST2(Local_58, Local_85) > 400f)
						{
							if (SYSTEM::VDIST2(Local_58, Local_85) < 62500f || (MISC::GET_GAME_TIMER() - iLocal_368) < 30000)
							{
								func_46(Local_129[iVar0 /*18*/], iLocal_89, &(Local_129[iVar0 /*18*/].f_5), &(Local_129[iVar0 /*18*/].f_15), &(Local_129[iVar0 /*18*/].f_11), &(Local_129[iVar0 /*18*/].f_14), &(Local_129[iVar0 /*18*/].f_16), Local_129[iVar0 /*18*/].f_2, 800, 50f);
								iLocal_612 = iVar0;
								iLocal_613 = MISC::GET_GAME_TIMER();
							}
						}
					}
					iVar2 = func_68(iVar0);
					if (!PED::IS_PED_INJURED(Local_202[iVar2 /*18*/]))
					{
						iVar3 = func_66(iVar0);
					}
					else
					{
						iVar3 = func_68(iVar0);
					}
					switch (Local_129[iVar0 /*18*/].f_17)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iVar0 /*18*/], false))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_129[iVar0 /*18*/], false))
								{
									if (!PED::IS_PED_INJURED(Local_202[iVar2 /*18*/]))
									{
										if (!PED::IS_PED_IN_VEHICLE(Local_202[iVar2 /*18*/], Local_129[iVar0 /*18*/], false))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iVar2 /*18*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_129[iVar0 /*18*/], -1, false))
											{
												TASK::TASK_ENTER_VEHICLE(Local_202[iVar2 /*18*/], Local_129[iVar0 /*18*/], -1, -1, 2f, 1, 0);
											}
										}
									}
									if (iVar3 != -1)
									{
										if (!PED::IS_PED_INJURED(Local_202[iVar3 /*18*/]))
										{
											if (!PED::IS_PED_IN_VEHICLE(Local_202[iVar3 /*18*/], Local_129[iVar0 /*18*/], false))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iVar3 /*18*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_129[iVar0 /*18*/], 0, false))
												{
													TASK::TASK_ENTER_VEHICLE(Local_202[iVar3 /*18*/], Local_129[iVar0 /*18*/], -1, 0, 2f, 1, 0);
												}
											}
										}
										if (!PED::IS_PED_INJURED(Local_202[iVar2 /*18*/]) && (iVar3 != -1 && !PED::IS_PED_INJURED(Local_202[iVar3 /*18*/])))
										{
											if ((PED::IS_PED_IN_VEHICLE(Local_202[iVar2 /*18*/], Local_129[iVar0 /*18*/], false) && (iVar3 != -1 && PED::IS_PED_IN_VEHICLE(Local_202[iVar3 /*18*/], Local_129[iVar0 /*18*/], false))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iVar2 /*18*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_202[iVar2 /*18*/], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) != 1)
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iVar2 /*18*/], 3, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iVar2 /*18*/], 1, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iVar2 /*18*/], 2, false);
													if (iVar0 == 0)
													{
														TASK::TASK_VEHICLE_MISSION(Local_202[iVar2 /*18*/], Local_129[iVar0 /*18*/], iLocal_89, 10, 50f, 786471, 4f, 10f, true);
													}
													else if (iVar0 == 1)
													{
														TASK::TASK_VEHICLE_MISSION(Local_202[iVar2 /*18*/], Local_129[iVar0 /*18*/], iLocal_89, 11, 50f, 786470, 4f, 10f, true);
													}
													else if (iVar0 == 2)
													{
														TASK::TASK_VEHICLE_MISSION(Local_202[iVar2 /*18*/], Local_129[iVar0 /*18*/], iLocal_89, 10, 50f, 786471, 4f, 10f, true);
													}
													else if (iVar0 == 3)
													{
														TASK::TASK_VEHICLE_MISSION(Local_202[iVar2 /*18*/], Local_129[iVar0 /*18*/], iLocal_89, 11, 50f, 786470, 4f, 10f, true);
													}
												}
												TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_202[iVar2 /*18*/], func_45((3f * MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64, Local_129[iVar0 /*18*/].f_8, true)), 50f, 120f));
											}
										}
									}
									if (fLocal_572 > 3f && SYSTEM::VDIST(Local_129[iVar0 /*18*/].f_8, Local_64) < 10f)
									{
										Local_129[iVar0 /*18*/].f_17 = 1;
									}
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_202[iVar2 /*18*/]))
								{
									if (!PED::IS_PED_FLEEING(Local_202[iVar2 /*18*/]))
									{
										PED::SET_PED_FLEE_ATTRIBUTES(Local_202[iVar2 /*18*/], 2, false);
										TASK::TASK_SMART_FLEE_PED(Local_202[iVar2 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, false, false);
									}
								}
								if (iVar3 != -1)
								{
									if (!PED::IS_PED_INJURED(Local_202[iVar3 /*18*/]))
									{
										if (!PED::IS_PED_FLEEING(Local_202[iVar3 /*18*/]))
										{
											PED::SET_PED_FLEE_ATTRIBUTES(Local_202[iVar3 /*18*/], 2, false);
											TASK::TASK_SMART_FLEE_PED(Local_202[iVar3 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, false, false);
										}
									}
								}
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_202[iVar2 /*18*/], false))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(Local_202[iVar2 /*18*/], 1, 256);
							}
							else
							{
								func_52(iLocal_84, iVar2);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_INJURED(Local_202[iVar3 /*18*/]))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(Local_202[iVar3 /*18*/], false))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(Local_202[iVar3 /*18*/], 0, 256);
									}
									else
									{
										func_52(iLocal_84, iVar3);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iVar0 /*18*/], false))
							{
								if (SYSTEM::VDIST(Local_129[iVar0 /*18*/].f_8, Local_64) > 15f)
								{
									Local_129[iVar0 /*18*/].f_17 = 0;
								}
							}
							break;
					}
					if ((!PED::IS_PED_INJURED(Local_202[iVar2 /*18*/]) && (iVar3 == -1 || !PED::IS_PED_INJURED(Local_202[iVar3 /*18*/]))) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iVar0 /*18*/], false))
					{
						iVar4 = 1;
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_202[iVar2 /*18*/]))
						{
							iVar4 = 0;
						}
						if (iVar3 != -1)
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_202[iVar3 /*18*/]))
							{
								iVar4 = 0;
							}
						}
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_129[iVar0 /*18*/]))
						{
							iVar4 = 0;
						}
						if ((iVar4 && SYSTEM::VDIST(Local_58, Local_129[iVar0 /*18*/].f_8) > 25f) && SYSTEM::VDIST(Local_58, Local_202[iVar0 /*18*/].f_6) > 25f)
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_202[iVar2 /*18*/], Local_129[iVar0 /*18*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_202[iVar2 /*18*/], Local_129[iVar0 /*18*/], -1);
							}
							if (iVar3 != -1)
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_202[iVar3 /*18*/], Local_129[iVar0 /*18*/], false))
								{
									PED::SET_PED_INTO_VEHICLE(Local_202[iVar3 /*18*/], Local_129[iVar0 /*18*/], 0);
								}
							}
						}
					}
					if (func_44(iVar0, 1125515264))
					{
						func_43(iVar0);
					}
				}
				func_50();
				func_35();
				iVar0++;
			}
			break;
		
		case 4:
			func_55();
			if (!iLocal_616)
			{
				iVar0 = 0;
				while (iVar0 < Local_129.f_0)
				{
					iVar5 = func_68(iVar0);
					if (!PED::IS_PED_INJURED(Local_202[iVar5 /*18*/]))
					{
						iVar6 = func_66(iVar0);
					}
					else
					{
						iVar6 = func_68(iVar0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iVar0 /*18*/], false))
					{
						if (!PED::IS_PED_INJURED(Local_202[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_202[iVar5 /*18*/], Local_129[iVar0 /*18*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iVar5 /*18*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
								{
									TASK::TASK_ENTER_VEHICLE(Local_202[iVar5 /*18*/], Local_129[iVar0 /*18*/], -1, -1, 2f, 1, 0);
								}
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_202[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_202[iVar6 /*18*/], Local_129[iVar0 /*18*/], false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iVar6 /*18*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_202[iVar6 /*18*/], Local_129[iVar0 /*18*/], -1, 0, 2f, 1, 0);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_202[iVar5 /*18*/]) && (iVar6 != -1 && !PED::IS_PED_INJURED(Local_202[iVar6 /*18*/])))
							{
								if ((PED::IS_PED_IN_VEHICLE(Local_202[iVar5 /*18*/], Local_129[iVar0 /*18*/], false) && (iVar6 != -1 && PED::IS_PED_IN_VEHICLE(Local_202[iVar6 /*18*/], Local_129[iVar0 /*18*/], false))) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
								{
									fVar7 = func_45((70f - (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_83)) / 50f)), 0f, 70f);
									if (fVar7 <= 1f || (MISC::GET_GAME_TIMER() - iLocal_83) > 4000)
									{
										TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_202[iVar5 /*18*/], fVar7);
										iVar8 = 0;
										while (iVar8 < Local_129.f_0)
										{
											if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iVar8 /*18*/], false) && !PED::IS_PED_INJURED(func_63(iVar8, 0))) && PED::IS_PED_IN_VEHICLE(func_63(iVar8, 0), Local_129[iVar8 /*18*/], false))
											{
												TASK::CLEAR_PED_TASKS(func_63(iVar8, 0));
												TASK::TASK_VEHICLE_MISSION(func_63(iVar8, 0), Local_129[iVar8 /*18*/], 0, 5, 10f, 786468, 10f, 10f, true);
											}
											iVar8++;
										}
										iLocal_616 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iVar5 /*18*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_202[iVar5 /*18*/], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) != 1)
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iVar5 /*18*/], 3, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iVar5 /*18*/], 1, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iVar5 /*18*/], 2, false);
										if (iVar0 == 0)
										{
											TASK::TASK_VEHICLE_MISSION(Local_202[iVar5 /*18*/], Local_129[iVar0 /*18*/], iLocal_89, 10, fVar7, 786471, 4f, 10f, true);
										}
										else if (iVar0 == 1)
										{
											TASK::TASK_VEHICLE_MISSION(Local_202[iVar5 /*18*/], Local_129[iVar0 /*18*/], iLocal_89, 11, fVar7, 786470, 4f, 10f, true);
										}
										else if (iVar0 == 2)
										{
											TASK::TASK_VEHICLE_MISSION(Local_202[iVar5 /*18*/], Local_129[iVar0 /*18*/], iLocal_89, 10, fVar7, 786471, 4f, 10f, true);
										}
										else if (iVar0 == 3)
										{
											TASK::TASK_VEHICLE_MISSION(Local_202[iVar5 /*18*/], Local_129[iVar0 /*18*/], iLocal_89, 11, fVar7, 786470, 4f, 10f, true);
										}
									}
								}
							}
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(Local_202[iVar5 /*18*/]))
						{
							if (!PED::IS_PED_FLEEING(Local_202[iVar5 /*18*/]))
							{
								PED::SET_PED_FLEE_ATTRIBUTES(Local_202[iVar5 /*18*/], 2, false);
								TASK::TASK_SMART_FLEE_PED(Local_202[iVar5 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, false, false);
							}
						}
						if (iVar6 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_202[iVar6 /*18*/]))
							{
								if (!PED::IS_PED_FLEEING(Local_202[iVar6 /*18*/]))
								{
									PED::SET_PED_FLEE_ATTRIBUTES(Local_202[iVar6 /*18*/], 2, false);
									TASK::TASK_SMART_FLEE_PED(Local_202[iVar6 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, 100000, false, false);
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				if (func_44(iLocal_615, 10f))
				{
					func_43(iLocal_615);
				}
				iLocal_615++;
				if (iLocal_615 > 3)
				{
					iLocal_615 = 0;
				}
			}
			func_50();
			func_35();
			break;
		
		case 6:
			if (func_44(iLocal_615, 1125515264))
			{
				func_43(iLocal_615);
			}
			iLocal_615++;
			if (iLocal_615 > 3)
			{
				iLocal_615 = 0;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]))
		{
			if (iLocal_47 > 1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_371))
				{
					func_34(iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/].f_2) && ENTITY::IS_ENTITY_ATTACHED(Local_202[iVar0 /*18*/].f_2))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_202[iVar0 /*18*/], false))
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_202[iVar0 /*18*/].f_2))
							{
								if (TASK::IS_PED_GETTING_UP(Local_202[iVar0 /*18*/]))
								{
									ENTITY::SET_ENTITY_VISIBLE(Local_202[iVar0 /*18*/].f_2, false, false);
								}
							}
							else if (!TASK::IS_PED_GETTING_UP(Local_202[iVar0 /*18*/]))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_202[iVar0 /*18*/].f_2, true, false);
							}
							if (!ENTITY::IS_ENTITY_OCCLUDED(Local_202[iVar0 /*18*/]))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iVar0 /*18*/], sLocal_371, func_33(iVar0), 3))
								{
									if (!Local_202[iVar0 /*18*/].f_11)
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iVar0 /*18*/], sLocal_371, "grip", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_202[iVar0 /*18*/], sLocal_371, "grip", 1000f, -1000f, -1, 57, 0f, false, false, false);
											Local_202[iVar0 /*18*/].f_11 = 1;
										}
									}
								}
								else if (Local_202[iVar0 /*18*/].f_11)
								{
									TASK::TASK_PLAY_ANIM(Local_202[iVar0 /*18*/], sLocal_371, "grip", 1000f, -1000f, -1, 48, 0.99f, false, false, false);
									Local_202[iVar0 /*18*/].f_11 = 0;
								}
							}
							if (!Local_202[iVar0 /*18*/].f_10)
							{
								STREAMING::REQUEST_ANIM_SET(sLocal_371);
								if (STREAMING::HAS_ANIM_SET_LOADED(sLocal_371))
								{
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_202[iVar0 /*18*/], sLocal_371);
									Local_202[iVar0 /*18*/].f_10 = 1;
								}
							}
						}
						else
						{
							if (Local_202[iVar0 /*18*/].f_11)
							{
								TASK::TASK_PLAY_ANIM(Local_202[iVar0 /*18*/], sLocal_371, "grip", 1000f, -1000f, -1, 48, 0.99f, false, false, false);
								Local_202[iVar0 /*18*/].f_11 = 0;
							}
							if (Local_202[iVar0 /*18*/].f_10)
							{
								PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_202[iVar0 /*18*/]);
								Local_202[iVar0 /*18*/].f_10 = 0;
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_202[iVar0 /*18*/]) && func_32(Local_202[iVar0 /*18*/], PED::GET_VEHICLE_PED_IS_IN(Local_202[iVar0 /*18*/], false)) == -1)
						{
							if (ENTITY::IS_ENTITY_VISIBLE(Local_202[iVar0 /*18*/].f_2))
							{
								ENTITY::SET_ENTITY_VISIBLE(Local_202[iVar0 /*18*/].f_2, false, false);
							}
						}
						else if (!ENTITY::IS_ENTITY_VISIBLE(Local_202[iVar0 /*18*/].f_2))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_202[iVar0 /*18*/].f_2, true, false);
						}
					}
					else
					{
						if (Local_202[iVar0 /*18*/].f_11)
						{
							TASK::TASK_PLAY_ANIM(Local_202[iVar0 /*18*/], sLocal_371, "grip", 1000f, -1000f, -1, 48, 0.99f, false, false, false);
							Local_202[iVar0 /*18*/].f_11 = 0;
						}
						if (Local_202[iVar0 /*18*/].f_10)
						{
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_202[iVar0 /*18*/]);
							Local_202[iVar0 /*18*/].f_10 = 0;
						}
					}
				}
			}
			if (iLocal_45 != 7)
			{
				if (PED::IS_PED_BEING_JACKED(Local_202[iVar0 /*18*/]) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
				{
					func_189(7);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_45 != 7)
	{
		iVar0 = 0;
		while (iVar0 < Local_129.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_129[iVar0 /*18*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iVar0 /*18*/], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_129[iVar0 /*18*/], false))
					{
						func_189(7);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_32(int iParam0, int iParam1)//Position - 0x2C96
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

char* func_33(int iParam0)//Position - 0x2D08
{
	switch (iParam0)
	{
		case 0:
		case 5:
			return "idle_a";
			break;
		
		case 1:
		case 6:
			return "idle_b";
			break;
		
		case 2:
		case 7:
			return "idle_c";
			break;
		
		case 3:
			return "idle_d";
			break;
		
		case 4:
			return "idle_e";
			break;
		
		default:
			break;
	}
	return "";
}

void func_34(int iParam0)//Position - 0x2D7E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (BitTest(Local_202[iParam0 /*18*/].f_15, bVar0))
		{
			iVar1 = 5;
			iVar2 = (iVar1 + iLocal_373);
			bVar3 = bVar0;
			if (bVar3 < iVar1)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iParam0 /*18*/], sLocal_371, func_33(iParam0), 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_202[iParam0 /*18*/], sLocal_371, func_33(iParam0)) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_202[iParam0 /*18*/].f_15), bVar0);
					}
				}
			}
			else if (bVar3 < iVar2)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iParam0 /*18*/], sLocal_372, iLocal_373[(bVar3 - iVar1)], 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_202[iParam0 /*18*/], sLocal_372, iLocal_373[(bVar3 - iVar1)]) > 0.9f)
					{
						MISC::CLEAR_BIT(&(Local_202[iParam0 /*18*/].f_15), bVar0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iParam0 /*18*/], sLocal_371, "grip", 3))
			{
				MISC::CLEAR_BIT(&(Local_202[iParam0 /*18*/].f_15), bVar0);
			}
		}
		bVar0++;
	}
}

void func_35()//Position - 0x2E78
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		iVar0 = func_66(iLocal_566);
		if (((ENTITY::DOES_ENTITY_EXIST(Local_129[iLocal_566 /*18*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iLocal_566 /*18*/], false)) && ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/])) && !PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(Local_129[iLocal_566 /*18*/], joaat("cavalcade2")))
			{
				if (SYSTEM::VDIST2(Local_202[iVar0 /*18*/].f_6, Local_61) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_129[iLocal_566 /*18*/], 0, false) == Local_202[iVar0 /*18*/])
				{
					if (!Local_202[iVar0 /*18*/].f_9)
					{
						if (!func_42(iVar0))
						{
							func_36(iVar0);
						}
					}
					else if (!func_42(iVar0) && (MISC::GET_GAME_TIMER() - Local_202[iVar0 /*18*/].f_13) > 1000)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iVar0 /*18*/], sLocal_372, "base", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_202[iVar0 /*18*/], sLocal_372, "base", 8f, 1000f, -1, 16, 0f, false, false, false);
						}
					}
				}
			}
			else if (!Local_202[iVar0 /*18*/].f_9)
			{
				if (SYSTEM::VDIST2(Local_202[iVar0 /*18*/].f_6, Local_61) < SYSTEM::POW(30f, 2f) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_129[iLocal_566 /*18*/], 0, false) == Local_202[iVar0 /*18*/])
				{
					TASK::TASK_SWEEP_AIM_ENTITY(Local_202[iVar0 /*18*/], "random@paparazzi@pap_anims", "sweep_low", "sweep_med", "sweep_high", -1, iLocal_84, 1.57f, 0.25f);
					Local_202[iVar0 /*18*/].f_9 = 1;
					Local_202[iVar0 /*18*/].f_13 = MISC::GET_GAME_TIMER();
				}
			}
			else if (Local_202[iVar0 /*18*/].f_9)
			{
				if ((MISC::GET_GAME_TIMER() - Local_202[iVar0 /*18*/].f_13) > 2000)
				{
					Local_202[iVar0 /*18*/].f_9 = 0;
				}
			}
		}
		iLocal_566++;
		if (iLocal_566 >= Local_129.f_0)
		{
			iLocal_566 = 0;
		}
	}
}

void func_36(int iParam0)//Position - 0x3056
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	
	if (!PED::IS_PED_INJURED(Local_202[iParam0 /*18*/]) && !PED::IS_PED_INJURED(iLocal_84))
	{
		bVar0 = 15;
		Var1 = { Local_61 - Local_202[iParam0 /*18*/].f_6 };
		Var4 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_202[iParam0 /*18*/]) };
		fVar7 = func_40(Var4, Var1);
		if (MISC::ABSF(fVar7) < 10f)
		{
			bVar0 = 5;
		}
		else if (fVar7 >= 10f && fVar7 < 60f)
		{
			bVar0 = 7;
		}
		else if (fVar7 >= 60f && fVar7 < 100f)
		{
			bVar0 = 6;
		}
		else if (fVar7 <= -10f && fVar7 > -60f)
		{
			bVar0 = 10;
		}
		else if (fVar7 < -60f && fVar7 > -100f)
		{
			bVar0 = 9;
		}
		if (bVar0 != 15)
		{
			func_37(iParam0, bVar0);
		}
	}
}

void func_37(int iParam0, bool bParam1)//Position - 0x3146
{
	if (bParam1 < 15)
	{
		if (!BitTest(Local_202[iParam0 /*18*/].f_15, bParam1))
		{
			if (func_39(bParam1))
			{
				TASK::TASK_PLAY_ANIM(Local_202[iParam0 /*18*/], sLocal_372, iLocal_373[func_38(bParam1)], 4f, -4f, -1, 16, 0f, false, false, false);
			}
			else if (bParam1 < 5)
			{
				TASK::TASK_PLAY_ANIM(Local_202[iParam0 /*18*/], sLocal_371, func_33(iParam0), 8f, -8f, -1, 0, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(Local_202[iParam0 /*18*/], sLocal_371, "grip", 1000f, -1000f, -1, 57, 0f, false, false, false);
			}
			Local_202[iParam0 /*18*/].f_15 = 0;
			MISC::SET_BIT(&(Local_202[iParam0 /*18*/].f_15), bParam1);
		}
	}
}

int func_38(bool bParam0)//Position - 0x31FA
{
	return (bParam0 - 5);
}

bool func_39(bool bParam0)//Position - 0x3206
{
	int iVar0;
	
	iVar0 = bParam0;
	return (iVar0 >= 5 && iVar0 < (5 + iLocal_373));
}

float func_40(struct<3> Param0, struct<3> Param3)//Position - 0x3223
{
	float fVar0;
	
	Param0 = { func_41(Param0) };
	Param3 = { func_41(Param3) };
	fVar0 = (MISC::ATAN2(Param3.f_1, Param3.f_0) - MISC::ATAN2(Param0.f_1, Param0.f_0));
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return fVar0;
}

Vector3 func_41(struct<3> Param0)//Position - 0x3289
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

bool func_42(int iParam0)//Position - 0x32C8
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_372))
	{
		bVar1 = 5;
		while (bVar1 <= 13)
		{
			if (!bVar0)
			{
				if (BitTest(Local_202[iParam0 /*18*/].f_15, bVar1))
				{
					bVar0 = true;
				}
			}
			bVar1++;
		}
	}
	return bVar0;
}

void func_43(int iParam0)//Position - 0x330A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_129[iParam0 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_129[iParam0 /*18*/]))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_129[iParam0 /*18*/]));
	}
	if (HUD::DOES_BLIP_EXIST(Local_129[iParam0 /*18*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_129[iParam0 /*18*/].f_1));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			iVar1 = func_66(iParam0);
		}
		else
		{
			iVar1 = func_68(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar1 /*18*/]) && ENTITY::IS_ENTITY_OCCLUDED(Local_202[iVar1 /*18*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar1 /*18*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_202[iVar1 /*18*/].f_2));
			}
			if (HUD::DOES_BLIP_EXIST(Local_202[iVar1 /*18*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_202[iVar1 /*18*/].f_1));
			}
			PED::DELETE_PED(&(Local_202[iVar1 /*18*/]));
		}
		iVar0++;
	}
}

int func_44(int iParam0, float fParam1)//Position - 0x33D8
{
	int iVar0;
	
	iVar0 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_129[iParam0 /*18*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iParam0 /*18*/], false))
		{
			if (SYSTEM::VDIST2(Local_58, Local_129[iParam0 /*18*/].f_8) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(Local_129[iParam0 /*18*/]))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_63(iParam0, 0)))
	{
		if (!PED::IS_PED_INJURED(func_63(iParam0, 0)))
		{
			if (SYSTEM::VDIST2(Local_58, Local_202[func_68(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_63(iParam0, 0)))
			{
				iVar0 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_63(iParam0, 1)))
	{
		if (!PED::IS_PED_INJURED(func_63(iParam0, 1)))
		{
			if (SYSTEM::VDIST2(Local_58, Local_202[func_66(iParam0) /*18*/].f_6) < (fParam1 * fParam1) || !ENTITY::IS_ENTITY_OCCLUDED(func_63(iParam0, 1)))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

float func_45(float fParam0, float fParam1, float fParam2)//Position - 0x34D1
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_46(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)//Position - 0x34F8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				if (func_49(iParam0, iParam1, iLocal_356, ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_ROTATION(iParam1, 2)))
				{
					*uParam2 = { *uParam4 };
					*uParam3 = *uParam5;
					*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam2, *uParam3, Param7) };
					*uParam4 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
					*uParam5 = ENTITY::GET_ENTITY_HEADING(iParam1);
				}
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if ((func_48(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *uParam2) > 100f)
				{
					if (!func_47(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 6f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 6f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 6f, false, false, false, false, false, false, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, func_45((ENTITY::GET_ENTITY_SPEED(iParam1) + 10f), 10f, 60f));
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_47(struct<3> Param0)//Position - 0x36C9
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_48(int iParam0, int iParam1, bool bParam2)//Position - 0x36F3
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_49(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6)//Position - 0x3751
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	int iVar35;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &Var13, &uVar16);
		fVar19 = MISC::ABSF((Var10.f_2 - Var7.f_2));
		fVar20 = MISC::ABSF((Var10.f_0 - Var7.f_0));
		fVar21 = MISC::ABSF((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - MISC::ABSF(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - MISC::ABSF(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		ENTITY::SET_ENTITY_COORDS(iParam2, Param3, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iParam2, Param6, 2, true);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		iVar35 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var4, Var1, fVar22, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50()//Position - 0x3887
{
	bool bVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_565) > 100)
	{
		if ((MISC::GET_GAME_TIMER() - Local_202[iLocal_564 /*18*/].f_12) > 500)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_202[iLocal_564 /*18*/]) && !PED::IS_PED_INJURED(Local_202[iLocal_564 /*18*/]))
			{
				bVar0 = true;
				if (!Local_202[iLocal_564 /*18*/].f_9 && PED::IS_PED_IN_ANY_VEHICLE(Local_202[iLocal_564 /*18*/], false))
				{
					bVar0 = false;
				}
				if (bVar0)
				{
					if (((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iLocal_564 /*18*/], sLocal_371, func_33(iLocal_564), 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_202[iLocal_564 /*18*/], sLocal_371, func_33(iLocal_564)) > 0.5f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_202[iLocal_564 /*18*/], sLocal_371, func_33(iLocal_564)) < 0.75f) || Local_202[iLocal_564 /*18*/].f_9)
					{
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", Local_202[iLocal_564 /*18*/].f_2, 0.019f, -0.01f, 0.046f, 0f, 0f, -180f, 1f, false, false, false);
						if ((iLocal_564 % 3) == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER_FLASH", ENTITY::GET_ENTITY_COORDS(Local_202[iLocal_564 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, false);
						}
						else if ((iLocal_564 % 3) == 1)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "SHUTTER", ENTITY::GET_ENTITY_COORDS(Local_202[iLocal_564 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, false);
						}
						else
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "FLASH", ENTITY::GET_ENTITY_COORDS(Local_202[iLocal_564 /*18*/].f_2, true), "CAMERA_FLASH_SOUNDSET", false, 0, false);
						}
						Local_202[iLocal_564 /*18*/].f_12 = MISC::GET_GAME_TIMER();
					}
					iLocal_565 = MISC::GET_GAME_TIMER();
				}
			}
			iLocal_564++;
			if (iLocal_564 >= Local_202.f_0)
			{
				iLocal_564 = 0;
			}
		}
	}
}

void func_51(int iParam0, int iParam1)//Position - 0x3A2A
{
	if (!PED::IS_PED_INJURED(Local_202[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_FACING_PED(Local_202[iParam1 /*18*/], iParam0, 20f))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iParam1 /*18*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_202[iParam1 /*18*/], iParam0, 0);
			}
		}
		else if ((MISC::GET_GAME_TIMER() - Local_202[iParam1 /*18*/].f_13) > 2000)
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iParam1 /*18*/], sLocal_371, func_33(iParam1), 3))
			{
				TASK::TASK_PLAY_ANIM(Local_202[iParam1 /*18*/], sLocal_371, func_33(iParam1), 4f, -4f, -1, 0, 0f, false, false, false);
				Local_202[iParam1 /*18*/].f_13 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_52(int iParam0, int iParam1)//Position - 0x3ADA
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(Local_202[iParam1 /*18*/]) && !PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, func_54(iParam1)) };
		switch (Local_202[iParam1 /*18*/].f_16)
		{
			case 0:
				func_53(Var0, iParam1, iParam0);
				Local_202[iParam1 /*18*/].f_16++;
				break;
			
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iParam1 /*18*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 || SYSTEM::VDIST(Var0, Local_202[iParam1 /*18*/].f_6) > 5f)
				{
					Local_202[iParam1 /*18*/].f_16++;
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(Var0, Local_202[iParam1 /*18*/].f_6) > 10f)
				{
					func_53(Var0, iParam1, iParam0);
					Local_202[iParam1 /*18*/].f_16++;
				}
				else
				{
					func_51(iParam0, iParam1);
				}
				break;
			
			case 3:
				if (SYSTEM::VDIST2(Var0, Local_202[iParam1 /*18*/].f_3) > 25f)
				{
					func_53(Var0, iParam1, iParam0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iParam1 /*18*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
				{
					Local_202[iParam1 /*18*/].f_16 = (Local_202[iParam1 /*18*/].f_16 - 1);
				}
				break;
			}
	}
}

void func_53(struct<3> Param0, int iParam3, int iParam4)//Position - 0x3C2B
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { func_41(ENTITY::GET_ENTITY_COORDS(iParam4, true) - Param0) };
	fVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1);
	Local_202[iParam3 /*18*/].f_3 = { Param0 };
	TASK::CLEAR_PED_TASKS(Local_202[iParam3 /*18*/]);
	if (SYSTEM::VDIST(Param0, Local_202[iParam3 /*18*/].f_6) < 2f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_202[iParam3 /*18*/], Local_202[iParam3 /*18*/].f_3, 1f, -1, 0.5f, 512, fVar3);
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_202[iParam3 /*18*/], Local_202[iParam3 /*18*/].f_3, 2f, -1, 0.5f, 512, fVar3);
	}
}

Vector3 func_54(int iParam0)//Position - 0x3CC5
{
	switch (iParam0)
	{
		case 0:
			return -0.6578f, 3.328f, 0.2129f;
			break;
		
		case 1:
			return 0.5781f, 3.1584f, 0.2203f;
			break;
		
		case 2:
			return 1.6953f, 2.4036f, 0.1413f;
			break;
		
		case 3:
			return 2.2778f, 1.3153f, 0.1534f;
			break;
		
		case 4:
			return 2.0457f, 0.0073f, 0.2707f;
			break;
		
		case 5:
			return 2.097f, -1.2978f, 0.23f;
			break;
		
		case 6:
			return 2.0693f, -3.2216f, 0.3726f;
			break;
		
		case 7:
			return 1.0275f, -3.6726f, 0.155f;
			break;
		
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_55()//Position - 0x3DB2
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < Local_202.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_202[iVar0 /*18*/].f_1))
		{
			if (PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]))
			{
				HUD::REMOVE_BLIP(&(Local_202[iVar0 /*18*/].f_1));
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Local_202[iVar0 /*18*/], false))
			{
				HUD::REMOVE_BLIP(&(Local_202[iVar0 /*18*/].f_1));
			}
		}
		else if (!PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_202[iVar0 /*18*/], false))
		{
			Local_202[iVar0 /*18*/].f_1 = func_191(Local_202[iVar0 /*18*/], 1, 145);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_202[iVar0 /*18*/].f_1, "EP_PAPBLIP" /* GXT: Paparazzo */);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_129.f_0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iVar0 /*18*/], false))
		{
			if (HUD::DOES_BLIP_EXIST(Local_129[iVar0 /*18*/].f_1))
			{
				Var1 = { HUD::GET_BLIP_COORDS(Local_129[iVar0 /*18*/].f_1) };
				Var4 = { Local_129[iVar0 /*18*/].f_8 };
				Var1.f_0 = (Var1.f_0 + ((Var4.f_0 - Var1.f_0) / 10f));
				Var1.f_1 = (Var1.f_1 + ((Var4.f_1 - Var1.f_1) / 10f));
				Var1.f_2 = (Var1.f_2 + ((Var4.f_2 - Var1.f_2) / 10f));
				HUD::SET_BLIP_COORDS(Local_129[iVar0 /*18*/].f_1, Var1);
				if (func_58(Local_129[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
				{
					HUD::REMOVE_BLIP(&(Local_129[iVar0 /*18*/].f_1));
				}
			}
			else if (!func_58(Local_129[iVar0 /*18*/], 1, 0, 0, 0, 0, 1, 0, 1))
			{
				Local_129[iVar0 /*18*/].f_1 = func_56(Local_129[iVar0 /*18*/].f_8, 0);
				HUD::SET_BLIP_COLOUR(Local_129[iVar0 /*18*/].f_1, 1);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_129[iVar0 /*18*/].f_1, "EP_PAPBLIP" /* GXT: Paparazzo */);
				HUD::SET_BLIP_PRIORITY(Local_129[iVar0 /*18*/].f_1, 9);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_129[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_129[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
}

int func_56(struct<3> Param0, bool bParam3)//Position - 0x3F91
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_57(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_57(bool bParam0, float fParam1, float fParam2)//Position - 0x3FBD
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_58(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x3FD4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_60(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_11()) && func_59(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_59(int iParam0, bool bParam1, bool bParam2)//Position - 0x40BB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672524.f_3)
				{
					return Global_2672524.f_2;
				}
				else if (Global_2657704[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x411B
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_61(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, char* sParam7)//Position - 0x41B6
{
	if (!PED::IS_PED_INJURED(Local_202[iParam0 /*18*/]))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_202[iParam0 /*18*/], true), Param1) > 1.5f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iParam0 /*18*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_202[iParam0 /*18*/], Param1, 2f, -1, 0.25f, 0, fParam4);
			}
		}
		else if (MISC::ABSF((func_62(ENTITY::GET_ENTITY_HEADING(Local_202[iParam0 /*18*/])) - func_62(fParam4))) > 10f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iParam0 /*18*/], joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 1)
			{
				TASK::TASK_ACHIEVE_HEADING(Local_202[iParam0 /*18*/], fParam4, 0);
			}
		}
		else
		{
			switch (Local_202[iParam0 /*18*/].f_16)
			{
				case 0:
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iParam0 /*18*/], sParam5, sParam6, 3))
						{
							TASK::TASK_PLAY_ANIM(Local_202[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 1, 0f, false, false, false);
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iParam0 /*18*/], sParam5, sParam6, 3))
					{
						TASK::TASK_PLAY_ANIM(Local_202[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0f, false, false, false);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_202[iParam0 /*18*/], sParam5, sParam6) > 0.99f)
					{
						TASK::TASK_PLAY_ANIM(Local_202[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0f, false, false, false);
						Local_202[iParam0 /*18*/].f_16++;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_202[iParam0 /*18*/], sParam5, sParam7, 3))
					{
						TASK::TASK_PLAY_ANIM(Local_202[iParam0 /*18*/], sParam5, sParam7, 4f, -4f, -1, 0, 0f, false, false, false);
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_202[iParam0 /*18*/], sParam5, sParam7) > 0.99f)
					{
						TASK::TASK_PLAY_ANIM(Local_202[iParam0 /*18*/], sParam5, sParam6, 4f, -4f, -1, 0, 0f, false, false, false);
						Local_202[iParam0 /*18*/].f_16 = 0;
					}
					break;
				}
			}
	}
}

float func_62(float fParam0)//Position - 0x4390
{
	if (fParam0 >= 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	if (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

var func_63(int iParam0, int iParam1)//Position - 0x43C4
{
	if (iParam1 == 0)
	{
		return Local_202[func_68(iParam0) /*18*/];
	}
	return Local_202[func_66(iParam0) /*18*/];
}

void func_64(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x43EC
{
	if ((iParam0 % 2) == 1)
	{
		Local_129[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("vader"), Param1, fParam4, true, true, false);
	}
	else
	{
		Local_129[iParam0 /*18*/] = VEHICLE::CREATE_VEHICLE(joaat("cavalcade2"), Param1, fParam4, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_129[iParam0 /*18*/], 0);
	}
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_129[iParam0 /*18*/], 5f);
	VEHICLE::SET_VEHICLE_STRONG(Local_129[iParam0 /*18*/], true);
	if (bParam5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_63(iParam0, 0)))
		{
			func_65(func_68(iParam0), Param1, fParam4);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_63(iParam0, 1)))
		{
			func_65(func_66(iParam0), Param1, fParam4);
		}
		if (!PED::IS_PED_INJURED(func_63(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iParam0 /*18*/], false))
		{
			PED::SET_PED_INTO_VEHICLE(func_63(iParam0, 0), Local_129[iParam0 /*18*/], -1);
		}
		if (!PED::IS_PED_INJURED(func_63(iParam0, 1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iParam0 /*18*/], false))
		{
			PED::SET_PED_INTO_VEHICLE(func_63(iParam0, 1), Local_129[iParam0 /*18*/], 0);
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_129[iParam0 /*18*/], true, true, false);
	}
}

void func_65(int iParam0, struct<3> Param1, float fParam4)//Position - 0x4507
{
	Local_202[iParam0 /*18*/] = PED::CREATE_PED(26, joaat("A_M_Y_GenStreet_02"), Param1, fParam4, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iParam0 /*18*/], 1, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_202[iParam0 /*18*/], true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iParam0 /*18*/], 0, true);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_202[iParam0 /*18*/], 3);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_202[iParam0 /*18*/], true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iParam0 /*18*/], 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_202[iParam0 /*18*/], 2, false);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_202[iParam0 /*18*/], false);
	PED::SET_PED_KEEP_TASK(Local_202[iParam0 /*18*/], true);
	PED::SET_PED_SHOOT_RATE(Local_202[iParam0 /*18*/], 100);
	PED::SET_PED_FIRING_PATTERN(Local_202[iParam0 /*18*/], joaat("FIRING_PATTERN_FULL_AUTO"));
	PED::SET_PED_CONFIG_FLAG(Local_202[iParam0 /*18*/], 101, true);
	PED::SET_PED_CONFIG_FLAG(Local_202[iParam0 /*18*/], 185, false);
	ENTITY::SET_ENTITY_HEALTH(Local_202[iParam0 /*18*/], 300, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_202[iParam0 /*18*/], 3, (iParam0 % 2), SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 2f)), 0);
	if (Global_3 || bLocal_68)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_202[iParam0 /*18*/], true);
		ENTITY::SET_ENTITY_HEALTH(Local_202[iParam0 /*18*/], 500, 0);
	}
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_202[iParam0 /*18*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_202[iParam0 /*18*/], 2, true);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_202[iParam0 /*18*/], 2f);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_202[iParam0 /*18*/], false);
	PED::SET_PED_HELMET(Local_202[iParam0 /*18*/], false);
	Local_202[iParam0 /*18*/].f_2 = OBJECT::CREATE_OBJECT(joaat("prop_pap_camera_01"), PED::GET_PED_BONE_COORDS(Local_202[iParam0 /*18*/], 28422, 0f, 0f, 0f), true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_202[iParam0 /*18*/].f_2, Local_202[iParam0 /*18*/], PED::GET_PED_BONE_INDEX(Local_202[iParam0 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_202[0 /*18*/].f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_202[0 /*18*/].f_2, false, false);
	}
	Local_202[iParam0 /*18*/].f_17 = ENTITY::GET_ENTITY_HEALTH(Local_202[iParam0 /*18*/]);
}

int func_66(int iParam0)//Position - 0x46CB
{
	return iParam0 * 2 + 1;
}

void func_67(int iParam0)//Position - 0x46D9
{
	if ((iParam0 % 2) == 1)
	{
		Local_202[iParam0 /*18*/].f_14 = ((iParam0 - 1) / 2);
	}
	else
	{
		Local_202[iParam0 /*18*/].f_14 = (iParam0 / 2);
	}
}

int func_68(int iParam0)//Position - 0x4706
{
	return iParam0 * 2;
}

void func_69(int iParam0)//Position - 0x4712
{
	Local_129[iParam0 /*18*/].f_17 = 0;
}

int func_70()//Position - 0x4723
{
	bool bVar0;
	bool bVar1;
	
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		bVar0 = false;
		if (func_73())
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_72()))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_72(), true), Local_61) < 5f && ENTITY::GET_ENTITY_SPEED(iLocal_89) < 1f)
				{
					bVar0 = true;
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, false) && PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, false))
			{
				fLocal_568 = (fLocal_568 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_568 > 0f)
			{
				fLocal_568 = 0f;
			}
		}
		if (bVar0)
		{
			fLocal_567 = (fLocal_567 + MISC::GET_FRAME_TIME());
		}
		else if (fLocal_567 > 0f)
		{
			fLocal_567 = 0f;
		}
		if (fLocal_567 > 30f)
		{
			bVar1 = true;
		}
		if (iLocal_69)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_84, iLocal_89))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_84))
				{
					bVar1 = true;
				}
				iLocal_69 = 0;
			}
		}
		if (!iLocal_69)
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_84, iLocal_89))
			{
				iLocal_69 = 1;
			}
		}
		if (fLocal_568 > 30f)
		{
			bVar1 = true;
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false) && (!bLocal_366 || iLocal_45 == 1))
		{
			bVar1 = true;
		}
		if (SYSTEM::VDIST(Local_61, Local_58) > 30f)
		{
			bVar1 = true;
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false) && func_71(iLocal_89)) && (!bLocal_366 || iLocal_45 == 1)) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_84, true), Local_54) > 15f)
		{
			bVar1 = true;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false) && ENTITY::IS_ENTITY_IN_WATER(iLocal_89))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
			{
				sLocal_369 = "REPAP_GUP";
			}
			else
			{
				sLocal_369 = "REPAP_GUP2";
			}
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x48E0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_72()//Position - 0x4945
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar1 = -1;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < Local_202.f_0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_202[iVar0 /*18*/])) && !PED::IS_PED_INJURED(iLocal_84))
		{
			if (SYSTEM::VDIST2(Local_61, Local_202[iVar0 /*18*/].f_6) < fVar2)
			{
				fVar2 = SYSTEM::VDIST2(Local_61, Local_202[iVar0 /*18*/].f_6);
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		return Local_202[iVar1 /*18*/];
	}
	return 0;
}

int func_73()//Position - 0x49D3
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_74()//Position - 0x4A10
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_202.f_0)
	{
		if (func_75(Local_202[iVar0 /*18*/], 0, 0))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]))
		{
			if (PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]) || ENTITY::IS_ENTITY_DEAD(Local_202[iVar0 /*18*/], false))
			{
				if (iLocal_384[iVar0] > 50)
				{
					iLocal_347++;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_75(int iParam0, int iParam1, bool bParam2)//Position - 0x4A82
{
	struct<3> Var0;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true);
		}
		if (!bParam2)
		{
			if (MISC::IS_BULLET_IN_AREA(Var0, 5f, true))
			{
				return 1;
			}
		}
		if (SYSTEM::VDIST2(Var0, Local_58) < 400f)
		{
			if (!bParam2)
			{
				if ((WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
			if ((iVar3 == joaat("WEAPON_PETROLCAN") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST2(Local_58, Var0) < 9f)
			{
				return 1;
			}
			if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) && (func_76(Local_58, iParam0) && SYSTEM::VDIST2(Local_58, ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 100f)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return 1;
			}
			if (iLocal_383 > 150)
			{
				return 1;
			}
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f), 6f))
		{
			return 1;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam1)
	{
		return 1;
	}
	return 0;
}

int func_76(struct<3> Param0, int iParam3)//Position - 0x4BDB
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam3, true) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam3, 0f, 1f, 0f) - Var0 };
	Var6 = { Param0 - Var0 };
	fVar9 = func_77(Var3, Var6);
	if (fVar9 > 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param3)//Position - 0x4C2B
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_78()//Position - 0x4C4C
{
	if (iLocal_45 != 11)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_360))
		{
			HUD::REMOVE_BLIP(&iLocal_360);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_361))
		{
			HUD::REMOVE_BLIP(&iLocal_361);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_358))
		{
			HUD::REMOVE_BLIP(&iLocal_358);
		}
		iLocal_46 = iLocal_45;
		iLocal_45 = 11;
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
		{
			if (!func_81())
			{
				func_79("REPAP_COP1");
			}
		}
		else
		{
			func_189(5);
		}
	}
	else if (func_5(&Local_393, cLocal_370, "REPAP_COP2", 4, 0, 0, 0))
	{
		iLocal_45 = iLocal_46;
	}
}

void func_79(char* sParam0)//Position - 0x4CE5
{
	if ((MISC::GET_GAME_TIMER() - iLocal_665) > 5000)
	{
		if (!func_80())
		{
			if (func_5(&Local_393, cLocal_370, sParam0, 4, 0, 0, 0))
			{
				iLocal_665 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

int func_80()//Position - 0x4D1D
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_81()//Position - 0x4D3F
{
	if (!PED::IS_PED_INJURED(iLocal_84) && SYSTEM::VDIST2(Local_58, Local_61) < 400f)
	{
		if (!iLocal_348 && (MISC::GET_GAME_TIMER() - iLocal_350) > 5000)
		{
			if (iLocal_80 > 10)
			{
				iLocal_348 = 1;
				iLocal_80 = 0;
			}
		}
		if ((!iLocal_353 && !iLocal_348) && (MISC::GET_GAME_TIMER() - iLocal_354) > 4000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_355 > 2)
				{
					if (!Global_3 && !bLocal_68)
					{
						func_189(5);
					}
				}
				else
				{
					iLocal_353 = 1;
					iLocal_355++;
				}
			}
		}
		if (((!iLocal_351 && !iLocal_348) && !iLocal_353) && (MISC::GET_GAME_TIMER() - iLocal_352) > 15000)
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_351 = 1;
			}
		}
		if (iLocal_348)
		{
			if (iLocal_349)
			{
				if (func_5(&Local_393, cLocal_370, "REPAP_HIT", 4, 0, 0, 0))
				{
					iLocal_350 = MISC::GET_GAME_TIMER();
					iLocal_348 = 0;
				}
			}
			else if (func_5(&Local_393, cLocal_370, "REPAP_HUR", 4, 0, 0, 0))
			{
				iLocal_350 = MISC::GET_GAME_TIMER();
				iLocal_348 = 0;
				iLocal_349 = 1;
			}
		}
		if (iLocal_353)
		{
			if (func_5(&Local_393, cLocal_370, "REPAP_SHOOT", 4, 0, 0, 0))
			{
				iLocal_354 = MISC::GET_GAME_TIMER();
				iLocal_353 = 0;
			}
		}
		if (iLocal_351)
		{
			if (func_5(&Local_393, cLocal_370, "REPAP_GUN", 4, 0, 0, 0))
			{
				iLocal_352 = MISC::GET_GAME_TIMER();
				iLocal_351 = 0;
			}
		}
	}
	return ((iLocal_351 || iLocal_353) || iLocal_348);
}

void func_82()//Position - 0x4EEF
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		PED::SET_PED_KEEP_TASK(iLocal_84, true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_67, joaat("PLAYER"));
		if (!Global_3 && !bLocal_68)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_84, 317, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, false);
		}
	}
	func_86(-1, 0);
	func_83();
	AUDIO::UNLOCK_MISSION_NEWS_STORY(62);
	func_282();
}

void func_83()//Position - 0x4F49
{
	func_84();
}

int func_84()//Position - 0x4F56
{
	if (func_85(0))
	{
		return 0;
	}
	if (Global_100872.f_8)
	{
		if (Global_100872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100872.f_10 > 1)
	{
		return 0;
	}
	Global_100872.f_10++;
	return 1;
}

int func_85(bool bParam0)//Position - 0x4FA1
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_86(int iParam0, int iParam1)//Position - 0x4FC9
{
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_103(iParam0))
	{
		func_102(iParam0, iParam1);
		if (!func_101(51))
		{
			func_97("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_100(), 0, 138, 0);
			func_96(51);
		}
		if (func_95(iParam0))
		{
			Global_113810.f_24998.f_2 = 3;
		}
		if (func_94(iParam0, iParam1) != 322)
		{
			func_88(func_94(iParam0, iParam1), Local_41.f_0, Local_41.f_1);
		}
		Global_113798 = iParam1;
		if (Global_113796 == 0)
		{
			if (((Global_113799 == 1 || Global_113799 == 5) || Global_113799 == 11) || Global_113799 == 25)
			{
				func_87(2);
			}
			else if ((Global_113799 == 26 || Global_113799 == 8) || Global_113799 == 17)
			{
				func_87(7);
			}
			else
			{
				func_87(1);
			}
		}
	}
}

void func_87(int iParam0)//Position - 0x50CD
{
	Global_113796 = iParam0;
}

void func_88(int iParam0, var uParam1, var uParam2)//Position - 0x50DB
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_92((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113810.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113810.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113810.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113810.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113810.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113810.f_10197[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_89();
	}
}

void func_89()//Position - 0x51C1
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113546 = 0;
	Global_113547 = 0;
	Global_113548 = 0;
	Global_113549 = 0;
	Global_113550 = 0;
	Global_113551 = 0;
	Global_113552 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113810.f_10197.f_3853;
	Global_113810.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113810.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113810.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113546++;
					fVar1 = (fVar1 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113547++;
					fVar2 = (fVar2 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113548++;
					fVar3 = (fVar3 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113549++;
					fVar4 = (fVar4 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113550++;
					fVar5 = (fVar5 + (Global_113810.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113551++;
					fVar6 = (fVar6 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113552++;
					fVar7 = (fVar7 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113529 > 0)
	{
		if (Global_113546 == Global_113529)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113530 > 0)
	{
		if (Global_113547 == Global_113530)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113531 > 0)
	{
		if (Global_113548 == Global_113531)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113532 > 0)
	{
		if (Global_113549 == Global_113532)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113533 > 0)
	{
		if (((Global_113550 == Global_113533 || (Global_113533 * 10 / Global_113550) < 41) || Global_113550 > Global_113536) || Global_113550 == Global_113536)
		{
			if (!BitTest(Global_113810.f_10197.f_3856, 14))
			{
				if (Global_113550 == Global_113533)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113533, 0);
					MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113534 > 0)
	{
		if (Global_113551 == Global_113534)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113535 > 0)
	{
		if (Global_113552 == Global_113535)
		{
			fVar7 = 5f;
		}
	}
	Global_113810.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113550 > Global_113536 || Global_113550 == Global_113536)
	{
		iVar9 = Global_113536;
	}
	else
	{
		iVar9 = Global_113550;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113546, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113529, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113547, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113530, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113548, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113531, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113549, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113532, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113536, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113552 + Global_113551), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113535 + Global_113534), true);
	Global_113553 = (Global_113546 * 100 / Global_113529);
	Global_113555 = ((Global_113548 + Global_113547) * 100 / (Global_113531 + Global_113530));
	Global_113554 = ((Global_113549 + iVar9) * 100 / (Global_113532 + Global_113536));
	Global_113556 = ((Global_113551 + Global_113552) * 100 / (Global_113534 + Global_113535));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113810.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113553, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113554, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113555, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113810.f_10197.f_3853))
	{
		func_91(13, SYSTEM::FLOOR(Global_113810.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78689)
		{
			if (func_90() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113544 = 0;
				}
				if (!Global_63485)
				{
					func_84();
				}
			}
		}
	}
}

int func_90()//Position - 0x567F
{
	return Global_32283;
}

int func_91(int iParam0, int iParam1)//Position - 0x568A
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_92(int iParam0, bool bParam1, int iParam2)//Position - 0x56DB
{
	if (iParam2 == -1)
	{
		iParam2 = func_93();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_93()//Position - 0x56F9
{
	return Global_1574918;
}

int func_94(int iParam0, int iParam1)//Position - 0x5705
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_95(int iParam0)//Position - 0x5A79
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_96(int iParam0)//Position - 0x5AA8
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_113810.f_20413.f_150[iVar1]), iVar0);
	}
}

void func_97(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x5AEA
{
	func_98(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_98(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x5B0A
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_20413.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113810.f_20413[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113810.f_20413.f_145 < 9)
	{
		StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_4), sParam1, 16);
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_9 = iParam5;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_11 = iParam6;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_12 = uParam2;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_13 = iParam7;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_14 = iParam8;
		Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113810.f_20413[Global_113810.f_20413.f_145 /*16*/].f_10 = -1;
		}
		Global_113810.f_20413.f_145++;
		func_99();
	}
}

void func_99()//Position - 0x5CDC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113810.f_20413.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_20413.f_145)
	{
		if (BitTest(Global_113810.f_20413[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[0])
			{
				Global_113810.f_20413.f_146[0] = Global_113810.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113810.f_20413[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[1])
			{
				Global_113810.f_20413.f_146[1] = Global_113810.f_20413[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113810.f_20413[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113810.f_20413[iVar0 /*16*/].f_12 > Global_113810.f_20413.f_146[2])
			{
				Global_113810.f_20413.f_146[2] = Global_113810.f_20413[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_100()//Position - 0x5DF3
{
	func_25();
	switch (Global_113810.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x5E39
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_113810.f_20413.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_102(int iParam0, int iParam1)//Position - 0x5E79
{
	MISC::SET_BIT(&(Global_113810.f_24998.f_8[iParam0]), iParam1);
}

int func_103(int iParam0)//Position - 0x5E94
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_104()//Position - 0x5F45
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_105(Var0);
	return uVar16;
}

int func_105(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x5F62
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_106()//Position - 0x613C
{
	if (Global_32523)
	{
		func_87(4);
		return 1;
	}
	return 0;
}

void func_107()//Position - 0x6154
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_358))
	{
		HUD::REMOVE_BLIP(&iLocal_358);
	}
	switch (iLocal_367)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			}
			iVar0 = 0;
			while (iVar0 < Local_202.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_202[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_202[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 900f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_202[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_202[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_202[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_202[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_129.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_129[iVar0 /*18*/]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_129[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_129[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 900f)
					{
						VEHICLE::DELETE_VEHICLE(&(Local_129[iVar0 /*18*/]));
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_129[iVar0 /*18*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_129[iVar0 /*18*/].f_1));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_671 = 0;
			iLocal_367++;
			break;
		
		case 1:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_202.f_0)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_202[iVar0 /*18*/])) && !ENTITY::IS_ENTITY_DEAD(Local_202[iVar0 /*18*/], false))
				{
					iVar1++;
					func_52(PLAYER::PLAYER_PED_ID(), iVar0);
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_202[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_202[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_202[iVar0 /*18*/].f_2));
						}
						PED::DELETE_PED(&(Local_202[iVar0 /*18*/]));
					}
				}
				iVar0++;
			}
			if (!iLocal_671)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_72(), true)) < 100f)
				{
					iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (func_24() == 1)
					{
						func_23(&Local_393, 6);
						func_23(&Local_393, 7);
						func_23(&Local_393, 8);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_393, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_393[6 /*10*/]) && !PED::IS_PED_INJURED(Local_393[6 /*10*/]))
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_PAP1", 4, 0, 0, 0))
									{
										iLocal_671 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_393, 7, func_72(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_393[7 /*10*/]) && !PED::IS_PED_INJURED(Local_393[7 /*10*/]))
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_PAP2", 4, 0, 0, 0))
									{
										iLocal_671 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_393, 8, func_72(), "PAP3ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_393[8 /*10*/]) && !PED::IS_PED_INJURED(Local_393[8 /*10*/]))
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_PAP3", 4, 0, 0, 0))
									{
										iLocal_671 = 1;
									}
								}
								break;
						}
					}
					else if (func_24() == 2)
					{
						func_23(&Local_393, 6);
						func_23(&Local_393, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_393, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_393[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_393[iVar2 /*10*/]))
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_TAKE1T", 4, 0, 0, 0))
									{
										iLocal_671 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_393, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_393[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_393[iVar2 /*10*/]))
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_671 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_393, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_393[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_393[iVar2 /*10*/]))
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_TAKE2T", 4, 0, 0, 0))
									{
										iLocal_671 = 1;
									}
								}
								break;
						}
					}
					else
					{
						func_23(&Local_393, 6);
						func_23(&Local_393, 5);
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar2)
						{
							case 0:
								func_22(&Local_393, 6, func_72(), "PAP1ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_393[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_393[iVar2 /*10*/]))
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_TAKE1M", 4, 0, 0, 0))
									{
										iLocal_671 = 1;
									}
								}
								break;
							
							case 1:
								func_22(&Local_393, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_393[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_393[iVar2 /*10*/]))
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_671 = 1;
									}
								}
								break;
							
							case 2:
								func_22(&Local_393, 5, func_72(), "PAP2ESCAPE", 0, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_393[iVar2 /*10*/]) && !PED::IS_PED_INJURED(Local_393[iVar2 /*10*/]))
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_TAKE2M", 4, 0, 0, 0))
									{
										iLocal_671 = 1;
									}
								}
								break;
							}
						}
					}
			}
			if (func_74())
			{
				func_201();
				func_282();
			}
			if (iVar1 == 0)
			{
				func_282();
			}
			break;
	}
}

void func_108(char* sParam0)//Position - 0x670E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_47 != 5)
	{
		iLocal_47 = 5;
	}
	if (!iLocal_670)
	{
		iVar0 = 0;
		while (iVar0 < Local_202.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]) && !PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_202[iVar0 /*18*/]);
				Local_202[iVar0 /*18*/].f_16 = 2;
			}
			iVar0++;
		}
		iLocal_670 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_202[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_202[iVar0 /*18*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]))
			{
				iVar1++;
				if (!PED::IS_PED_INJURED(iLocal_84))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_202[iVar0 /*18*/], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Local_202[iVar0 /*18*/], 0, 0);
					}
					else
					{
						func_52(iLocal_84, iVar0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_202[iVar0 /*18*/], joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1)
				{
					TASK::TASK_WANDER_STANDARD(Local_202[iVar0 /*18*/], 40000f, 0);
				}
			}
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_202[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_202[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 400f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_202[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 400f)
			{
				PED::DELETE_PED(&(Local_202[iVar0 /*18*/]));
				if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/].f_2))
				{
					OBJECT::DELETE_OBJECT(&(Local_202[iVar0 /*18*/].f_2));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_129.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_129[iVar0 /*18*/]))
		{
			if ((ENTITY::IS_ENTITY_OCCLUDED(Local_129[iVar0 /*18*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_129[iVar0 /*18*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f) && func_58(Local_129[iVar0 /*18*/], 0, 0, 0, 0, 0, 1, 0, 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_129[iVar0 /*18*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_129[iVar0 /*18*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_129[iVar0 /*18*/].f_1));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_84) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_61) > 2500f)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_84);
			func_282();
		}
	}
	if (func_74() || func_75(iLocal_84, 1, 1))
	{
		func_189(5);
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]))
		{
			if (!PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	switch (iLocal_367)
	{
		case 0:
			if (HUD::DOES_BLIP_EXIST(iLocal_358))
			{
				HUD::REMOVE_BLIP(&iLocal_358);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_359))
			{
				HUD::REMOVE_BLIP(&iLocal_359);
			}
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				TASK::CLEAR_PED_TASKS(iLocal_84);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_84, 3f);
			}
			func_109();
			if (SYSTEM::VDIST(Local_58, Local_61) < 30f)
			{
				if (func_5(&Local_393, cLocal_370, sParam0, 4, 0, 0, 0))
				{
					iVar0 = 0;
					while (iVar0 < Local_202.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]))
						{
							if (!PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_202[iVar0 /*18*/]);
							}
						}
						iVar0++;
					}
					iLocal_367++;
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_202.f_0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar0 /*18*/]))
					{
						if (!PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_202[iVar0 /*18*/]);
						}
					}
					iVar0++;
				}
				iLocal_367++;
			}
			break;
		
		case 1:
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false) && PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, false)) && !bLocal_366) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_89, -1, false))
			{
				if (SYSTEM::VDIST(Local_61, Local_51) < 100f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_89, false);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_89, Local_51, 20f, 0, joaat("serrano"), 786599, 10f, 10f);
					TASK::TASK_VEHICLE_PARK(0, iLocal_89, Local_51, 288.7089f, 1, 50f, false);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_89, ENTITY::GET_ENTITY_COORDS(iLocal_89, true), 5, 10f, 262144, 2f, 2f, true);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_89, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_54, 1f, -1, 0.25f, 512, fLocal_57);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_89, false);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_89, 15f, 786468);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
				}
				iLocal_367 = 1000;
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_84, 0, 0);
				}
				iLocal_367++;
			}
			break;
		
		case 2:
			if (iVar1 > 0)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 3000f, -1, true, false);
				iLocal_367 = 1000;
			}
			else
			{
				if (SYSTEM::VDIST(Local_61, Local_51) < 100f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_54, 1f, -1, 0.25f, 512, fLocal_57);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar4);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, iVar4);
					TASK::CLEAR_SEQUENCE_TASK(&iVar4);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(iLocal_84, 40000f, 0);
				}
				iLocal_367 = 1000;
			}
			break;
		
		case 1000:
			if (iVar1 == 0)
			{
				func_282();
			}
			break;
	}
}

void func_109()//Position - 0x6C79
{
	Global_20711 = 0;
	func_110();
}

void func_110()//Position - 0x6C89
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}
}

void func_111()//Position - 0x6CAA
{
	func_109();
	if (!PED::IS_PED_INJURED(iLocal_84) && SYSTEM::VDIST2(Local_58, Local_61) < 900f)
	{
		TASK::CLEAR_PED_TASKS(iLocal_84);
		if (func_5(&Local_393, cLocal_370, "REPAP_CRZY", 4, 0, 0, 0))
		{
			func_201();
			func_189(10);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_84, joaat("HATES_PLAYER"));
	}
	else
	{
		func_201();
		func_189(10);
	}
}

void func_112()//Position - 0x6D14
{
	int iVar0;
	
	switch (iLocal_367)
	{
		case 0:
			func_147();
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_358))
				{
					iLocal_358 = func_191(iLocal_84, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_361))
				{
					HUD::REMOVE_BLIP(&iLocal_361);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_360))
				{
					HUD::REMOVE_BLIP(&iLocal_360);
				}
				TASK::CLEAR_PED_TASKS(iLocal_84);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LEAVE_VEHICLE(0, iLocal_89, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_54, 1f, 30000, 0.25f, 512, fLocal_57);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_84, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				if (PED::IS_PED_IN_GROUP(iLocal_84))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_84);
				}
				func_109();
				iLocal_367++;
			}
			break;
		
		case 1:
			if (!func_80() && !PED::IS_PED_INJURED(iLocal_84))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_84, Local_54, 3f, 3f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_54, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_367++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				func_146(0);
				if (func_5(&Local_393, cLocal_370, "REPAP_THK", 4, 0, 0, 0))
				{
					func_114(func_24(), 1, 150, 0, 1);
					iLocal_367++;
				}
			}
			break;
		
		case 3:
			if (!func_80() && !PED::IS_PED_INJURED(iLocal_84))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_367++;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > 2000)
			{
				if (func_113())
				{
					func_82();
				}
			}
			break;
	}
}

int func_113()//Position - 0x6EB2
{
	return 1;
}

void func_114(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6EBB
{
	int iVar0;
	int iVar1;
	
	if (func_145(iParam0) == 3)
	{
		return;
	}
	if (func_145(iParam0) == 4)
	{
		return;
	}
	func_115(func_145(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, true);
	}
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6F8D
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_144();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_143(99, 1);
					func_142(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_142(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_142(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_128(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_125(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_142(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_142(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_125(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_142(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_142(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_142(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_142(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_142(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_142(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_142(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_142(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_142(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_142(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_142(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_125(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_142(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_142(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_142(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_142(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_142(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_124(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_143(95, iParam3);
					break;
				
				case 1:
					func_143(97, iParam3);
					break;
				
				case 2:
					func_143(96, iParam3);
					break;
			}
			func_143(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_118(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_118(bVar1);
	}
	iVar5 = (Global_60659[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60659[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60659[iVar2] = 2147483647;
				}
				else
				{
					Global_60659[iVar2] = (Global_60659[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_142(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_142(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_142(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60659[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60659[iVar2];
			Global_60659[iVar2] = (Global_60659[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113810.f_20567.f_233[iVar2 /*69*/]++;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_117(iParam0);
	if (Global_43377 == 15)
	{
		func_116(0);
	}
	return 1;
}

void func_116(bool bParam0)//Position - 0x758C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60667[iVar0 /*3*/][0] = Global_113810.f_20567[iVar0];
		Global_60667.f_31[iVar0 /*3*/][0] = Global_113810.f_20567.f_11[iVar0];
		Global_60667.f_62[iVar0 /*3*/][0] = Global_113810.f_20567.f_22[iVar0];
		Global_60667.f_93[iVar0 /*3*/][0] = Global_113810.f_20567.f_33[iVar0];
		Global_60667.f_124[iVar0 /*3*/][0] = Global_113810.f_20567.f_44[iVar0];
		Global_60667.f_155[iVar0 /*3*/][0] = Global_113810.f_20567.f_55[iVar0];
		Global_60667.f_186[iVar0 /*3*/][0] = Global_113810.f_20567.f_66[iVar0];
		Global_60667.f_217[iVar0 /*3*/][0] = Global_113810.f_20567.f_77[iVar0];
		Global_60667.f_248[iVar0 /*3*/][0] = Global_113810.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_60667[iVar0 /*3*/][1] = Global_113810.f_20567[iVar0];
			Global_60667.f_31[iVar0 /*3*/][1] = Global_113810.f_20567.f_11[iVar0];
			Global_60667.f_62[iVar0 /*3*/][1] = Global_113810.f_20567.f_22[iVar0];
			Global_60667.f_93[iVar0 /*3*/][1] = Global_113810.f_20567.f_33[iVar0];
			Global_60667.f_124[iVar0 /*3*/][1] = Global_113810.f_20567.f_44[iVar0];
			Global_60667.f_155[iVar0 /*3*/][1] = Global_113810.f_20567.f_55[iVar0];
			Global_60667.f_186[iVar0 /*3*/][1] = Global_113810.f_20567.f_66[iVar0];
			Global_60667.f_217[iVar0 /*3*/][1] = Global_113810.f_20567.f_77[iVar0];
			Global_60667.f_248[iVar0 /*3*/][1] = Global_113810.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_117(int iParam0)//Position - 0x780E
{
	int iVar0;
	
	iVar0 = Global_60659[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_118(bool bParam0)//Position - 0x7868
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_92(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_92(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_92(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_92(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_121(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_121(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_121(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_121(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_121(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_121(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113810.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113810.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_120() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_120() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_119(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_119(bool bParam0)//Position - 0x79E0
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC" /* GXT: one free haircut. */;
		
		case 1:
			return "COUP_TATTOO" /* GXT: one free tattoo. */;
		
		case 2:
			return "COUP_WARSTOCK" /* GXT: 10% off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 3:
			return "COUP_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 4:
			return "COUP_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 5:
			return "COUP_MEDSPENS" /* GXT: 10 percent off your next medical expenses. */;
		
		case 6:
			return "COUP_SPRUNK" /* GXT: one free can of Sprunk. */;
		
		case 7:
			return "COUP_RESPRAY" /* GXT: one free respray. */;
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 13:
			return "COUP_CAS_DOCKTEASE" /* GXT: 10 percent off your next purchase at DockTease.com. */;
		
		case 14:
			return "COUP_CAS_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 15:
			return "COUP_CAS_SSASA" /* GXT: 10 percent off your next purchase at southernsanandreassuperautos.com. */;
		
		case 16:
			return "COUP_CAS_WARSTOCK" /* GXT: 10 percent off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 17:
			return "COUP_CAS_PANDM" /* GXT: 10 percent off your next purchase at pandmcycles.com. */;
			break;
		
		default:
			break;
	}
	return "";
}

int func_120()//Position - 0x7AE1
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_121(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7AEE
{
	int iVar0;
	
	iVar0 = func_122(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_122(int iParam0, var uParam1)//Position - 0x7B11
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_123(uParam1));
}

int func_123(var uParam0)//Position - 0x7B26
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_93();
		if (iVar1 > -1)
		{
			Global_2805862 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2805862 = 1;
		}
	}
	return iVar0;
}

void func_124(int iParam0)//Position - 0x7B5A
{
	func_143(93, iParam0);
	func_143(29, iParam0);
	func_143(30, iParam0);
}

int func_125(int iParam0)//Position - 0x7B7A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_127(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_127(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_127(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_127(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_126(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_126(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_126(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_126(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_126(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_126(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113810.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_120() /*5568*/].f_681.f_10, iParam0);
}

int func_126(int iParam0, int iParam1)//Position - 0x7D1A
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_122(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_127(int iParam0, int iParam1)//Position - 0x7D49
{
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_128(bool bParam0)//Position - 0x7D65
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_91(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_129(27, 1);
	return 1;
}

int func_129(int iParam0, int iParam1)//Position - 0x7E1C
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_130(iParam0, iParam1);
}

int func_130(int iParam0, int iParam1)//Position - 0x7E37
{
	if (func_17(14) && !func_141(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32534 != 0 && !Global_78689)
	{
		return 0;
	}
	if (func_140(&Global_4542602))
	{
		if (func_138(&Global_4542602, iParam0))
		{
			return 0;
		}
		if (func_131(&Global_4542602, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_131(var uParam0, int iParam1)//Position - 0x7ED4
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_141(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	if (func_137(uParam0) < 0f)
	{
		func_136(uParam0, 0);
	}
	func_134(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_132(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_132(var uParam0, int iParam1)//Position - 0x7F85
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_141(iParam1))
	{
		return 0;
	}
	if (func_138(uParam0, iParam1))
	{
		return 0;
	}
	if (func_137(uParam0) < 0f)
	{
		func_136(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_133(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_133(var uParam0, int iParam1)//Position - 0x8000
{
	return (*uParam0)[iParam1] == 78;
}

void func_134(var uParam0)//Position - 0x8011
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_135(uParam0, iVar0);
		iVar0++;
	}
	func_136(uParam0, (Global_4542601 - 0.5f));
}

void func_135(var uParam0, int iParam1)//Position - 0x8045
{
	(*uParam0)[iParam1] = 78;
}

void func_136(var uParam0, float fParam1)//Position - 0x8055
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_137(var uParam0)//Position - 0x8072
{
	return uParam0->f_80;
}

bool func_138(var uParam0, int iParam1)//Position - 0x807E
{
	return func_139(uParam0, iParam1) != -1;
}

int func_139(var uParam0, int iParam1)//Position - 0x8090
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_140(var uParam0)//Position - 0x80BD
{
	return uParam0->f_79 == 1;
}

int func_141(int iParam0)//Position - 0x80CB
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

void func_142(int iParam0, int iParam1)//Position - 0x811B
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_143(int iParam0, int iParam1)//Position - 0x813E
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_144()//Position - 0x819B
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[0] == iVar0)
		{
			Global_60659[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[1] == iVar0)
		{
			Global_60659[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[2] == iVar0)
		{
			Global_60659[2] = iVar0;
		}
	}
}

int func_145(int iParam0)//Position - 0x8210
{
	return Global_2058[iParam0 /*29*/].f_17;
}

void func_146(bool bParam0)//Position - 0x8221
{
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (iLocal_619 > 1)
		{
			if (!PED::IS_PED_FACING_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 60f))
			{
				iLocal_619 = 0;
				iLocal_620 = 0;
			}
		}
		switch (iLocal_619)
		{
			case 0:
				TASK::CLEAR_PED_TASKS(iLocal_84);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_618);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_618);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_84, iLocal_618);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_618);
				iLocal_619++;
				break;
			
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					iLocal_619++;
				}
				break;
			
			case 2:
				if (bParam0)
				{
					switch (iLocal_620)
					{
						case 0:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_84, "random@paparazzi@wait", "wait_a", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_84, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0f, false, false, false);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_84, "random@paparazzi@wait", "wait_a") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_84, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0f, false, false, false);
								iLocal_620++;
							}
							break;
						
						case 1:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_84, "random@paparazzi@wait", "wait_b", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_84, "random@paparazzi@wait", "wait_b", 4f, -4f, -1, 0, 0f, false, false, false);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_84, "random@paparazzi@wait", "wait_b") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_84, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0f, false, false, false);
								iLocal_620++;
							}
							break;
						
						case 2:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_84, "random@paparazzi@wait", "wait_c", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_84, "random@paparazzi@wait", "wait_c", 4f, -4f, -1, 0, 0f, false, false, false);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_84, "random@paparazzi@wait", "wait_c") > 0.95f)
							{
								TASK::TASK_PLAY_ANIM(iLocal_84, "random@paparazzi@wait", "wait_a", 4f, -4f, -1, 0, 0f, false, false, false);
								iLocal_620 = 0;
							}
							break;
						}
				}
				break;
			}
	}
}

void func_147()//Position - 0x843F
{
	if (HUD::DOES_BLIP_EXIST(iLocal_362))
	{
		HUD::REMOVE_BLIP(&iLocal_362);
	}
}

void func_148()//Position - 0x8458
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
	{
		switch (iLocal_367)
		{
			case 0:
				if (!PED::IS_PED_INJURED(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
				{
					func_147();
					func_152(1, 1, 0, 0, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(iLocal_360))
					{
						HUD::REMOVE_BLIP(&iLocal_360);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_358))
					{
						HUD::REMOVE_BLIP(&iLocal_358);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_359))
					{
						HUD::REMOVE_BLIP(&iLocal_359);
					}
					if (PED::IS_PED_IN_GROUP(iLocal_84))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_84);
					}
					func_150();
					if (!PED::IS_PED_INJURED(iLocal_84))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_84, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_89, -10f, 5f, 0f), -1, 16, 4);
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_89, 10f, 5f, 0f), 15000, 16, 4);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 1280);
					if ((bLocal_366 || Global_3) || bLocal_68)
					{
						while (!func_149(&Local_393, cLocal_370, "REPAP_THK", "REPAP_THK_1", 4, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					else
					{
						while (!func_5(&Local_393, cLocal_370, "REPAP_THK", 4, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
					func_114(func_24(), 1, 750, 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_84))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_84, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_89, -10f, 5f, 0f), -1, 16, 4);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_84, false, false);
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_89, 10f, 5f, 0f), 15000, 16, 4);
					iLocal_367++;
				}
				break;
			
			case 1:
				if (!func_80() && !PED::IS_PED_INJURED(iLocal_84))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_89, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_54, 1f, 30000, 0.25f, 512, fLocal_57);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_84, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_367++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, false))
					{
						SYSTEM::SETTIMERA(0);
						if (bLocal_366)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							func_152(0, 1, 0, 0, 0, 0, 0);
							iLocal_367 = 5;
						}
						else
						{
							iLocal_367++;
						}
					}
				}
				break;
			
			case 3:
				if ((!PED::IS_PED_INJURED(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false)) && SYSTEM::TIMERA() > 1000)
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89, 10000, 0, 3);
					iLocal_367++;
				}
				break;
			
			case 4:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, false))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_152(0, 1, 0, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_89, 2);
					SYSTEM::SETTIMERA(0);
					iLocal_367++;
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 1000)
				{
					if (func_113())
					{
						if (!bLocal_366)
						{
							if (!func_101(19))
							{
								func_97("AM_H_CALLTX" /* GXT: Call the Downtown Cab Co. to arrange a taxi to collect you from your current location. */, 1, 0, -1, 10000, 7, 0, 0, 0);
								func_96(19);
							}
						}
						func_82();
					}
				}
				break;
			}
	}
}

bool func_149(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x878C
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21852 = 0;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 1;
	Global_22838 = 0;
	Global_22842 = 0;
	StringCopy(&Global_22849, sParam3, 24);
	Global_2883585 = 0;
	return func_6(sParam2, iParam4, 0);
}

void func_150()//Position - 0x87E0
{
	Global_20711 = 0;
	func_151();
}

void func_151()//Position - 0x87F0
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22856 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_152(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8814
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_160(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_14())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_159(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_160(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_159(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_157(PLAYER::PLAYER_ID())) && !func_154(PLAYER::PLAYER_ID(), 0)) && !func_153()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_157(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_153()//Position - 0x8961
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_154(int iParam0, int iParam1)//Position - 0x897B
{
	bool bVar0;
	
	if (!func_156(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_155(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853988[iParam0 /*867*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_155(int iParam0, bool bParam1)//Position - 0x89D4
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_93();
	}
	if (Global_1575043[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_156(var uParam0)//Position - 0x8A15
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_157(int iParam0)//Position - 0x8A37
{
	if (func_154(iParam0, 0))
	{
		return 1;
	}
	if (func_158())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2657704[iParam0 /*463*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_158()//Position - 0x8A76
{
	return BitTest(Global_2621446, 3);
}

int func_159(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x8A84
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_160(int iParam0)//Position - 0x8AB7
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 13);
	}
}

void func_161()//Position - 0x8ADA
{
	if (Global_3 || bLocal_68)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
	}
	if (bLocal_366 && !PED::IS_PED_INJURED(iLocal_84))
	{
		if (!func_182(iLocal_84))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_358))
			{
				iLocal_358 = func_191(iLocal_84, 0, 145);
			}
		}
		else
		{
			if (func_73())
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_360))
				{
					iLocal_360 = func_56(Local_51, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_361))
				{
					HUD::REMOVE_BLIP(&iLocal_361);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_361))
				{
					iLocal_361 = func_56(Local_54, 1);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_360))
				{
					HUD::REMOVE_BLIP(&iLocal_360);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_358))
			{
				HUD::REMOVE_BLIP(&iLocal_358);
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, false))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && func_181(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				iLocal_89 = 0;
				iLocal_89 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_89, true, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_89, 1);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_89, false, 0);
			}
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_361) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_54, 15f, 15f, 15f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 231.7982f, 672.7683f, 189.2f, 1f, 1f, 2.5f, true, true, 0))
			{
				func_189(4);
			}
		}
		else if (iLocal_367 != 100)
		{
			if (func_73() && func_180(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, 225.59377f, 681.14886f, 188.4262f, 232.01999f, 681.3113f, 191.98428f, 8.75f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.67882f, 681.06366f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_367 = 100;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_84, iLocal_89, -1, func_179(iLocal_89), 2f, 8388608, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_367 != 100)
		{
			if (func_73() && func_180(1, 1, 1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, 225.59377f, 681.14886f, 188.4262f, 232.01999f, 681.3113f, 191.98428f, 8.75f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 226.67882f, 681.06366f, 189f, 1f, 1f, 2.5f, true, true, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_367 = 100;
				}
			}
		}
		func_176(1);
	}
	switch (iLocal_367)
	{
		case 0:
			if (func_73())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_84, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_84, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3))
				{
					TASK::CLEAR_PED_TASKS(iLocal_84);
				}
				if (func_5(&Local_393, cLocal_370, "REPAP_HM", 4, 0, 0, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
					iLocal_367++;
				}
				if (!func_175())
				{
					func_170();
				}
			}
			break;
		
		case 1:
			if (!func_81())
			{
				if (func_73())
				{
					if (!func_80())
					{
						if (func_24() == 0)
						{
							if (func_5(&Local_393, cLocal_370, "REPAP_LIFTM", 4, 0, 0, 0))
							{
								iLocal_367++;
							}
						}
						else if (func_24() == 1)
						{
							if (func_5(&Local_393, cLocal_370, "REPAP_LIFTF", 4, 0, 0, 0))
							{
								iLocal_367++;
							}
						}
						else if (func_5(&Local_393, cLocal_370, "REPAP_LIFTT", 4, 0, 0, 0))
						{
							iLocal_367++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (!func_81())
			{
				if (func_73())
				{
					if (func_5(&Local_393, cLocal_370, "REPAP_PLEAD", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						if (Global_3 || bLocal_68)
						{
							iLocal_367 = 99;
						}
						else
						{
							iLocal_367++;
						}
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_166("REPAP_HOME1", (func_169() && !func_81())))
				{
					iLocal_367++;
				}
			}
			break;
		
		case 4:
			if (func_24() == 0)
			{
				if (func_166("REPAP_HOME1M", (func_169() && !func_81())))
				{
					iLocal_367++;
				}
			}
			else if (func_24() == 1)
			{
				if (func_166("REPAP_HOME1F", (func_169() && !func_81())))
				{
					iLocal_367++;
				}
			}
			else if (func_166("REPAP_HOME1T", (func_169() && !func_81())))
			{
				iLocal_367++;
			}
			break;
		
		case 5:
			if (func_166("REPAP_HOME1L", (func_169() && !func_81())))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_367++;
			}
			break;
		
		case 6:
			if (!func_81())
			{
				if (SYSTEM::TIMERA() > 7000)
				{
					if (func_169())
					{
						if (func_5(&Local_393, cLocal_370, "REPAP_HOME2", 4, 0, 0, 0))
						{
							iLocal_367++;
						}
					}
				}
			}
			break;
		
		case 7:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_HOME2"))
					{
						iLocal_367++;
					}
				}
			}
			break;
		
		case 8:
			if (func_166("REPAP_HOME2L", (func_169() && !func_81())))
			{
				iLocal_367++;
			}
			break;
		
		case 9:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_RESP2"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_367++;
					}
				}
			}
			break;
		
		case 10:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_166("REPAP_HOME3", (func_169() && !func_81())))
				{
					iLocal_367++;
				}
			}
			break;
		
		case 11:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_HOME3"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_367++;
					}
				}
			}
			break;
		
		case 12:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_166("REPAP_HOME4", (func_169() && !func_81())))
				{
					iLocal_367++;
				}
			}
			break;
		
		case 13:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_HOME4"))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_367++;
					}
				}
			}
			break;
		
		case 14:
			if (SYSTEM::TIMERA() > 7000)
			{
				if (func_166("REPAP_NOBAN", (func_169() && !func_81())))
				{
					iLocal_367++;
				}
			}
			break;
		
		case 15:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_165("REPAP_NOBAN"))
					{
						iLocal_367++;
					}
				}
			}
			break;
		
		case 16:
			if (!func_81())
			{
				if (func_169() && !func_80())
				{
					if (func_5(&Local_393, cLocal_370, "REPAP_NOBANL", 4, 0, 0, 0))
					{
						iLocal_367++;
					}
				}
			}
			break;
		
		case 17:
			func_81();
			break;
		
		case 100:
			if (func_163(iLocal_89, 5f, 5, 1056964608, 0, 1, 0))
			{
				func_190("");
				func_189(3);
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_78();
	}
	if (func_24() == 2)
	{
		if ((func_162() && !func_175()) && iLocal_45 != 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_84))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_84, -1034.6f, 4918.6f, 205.9f, 5f, 5f, 5f, false, true, 0))
				{
					if (!PED::IS_PED_GROUP_MEMBER(iLocal_84, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
					{
						PED::SET_PED_AS_GROUP_MEMBER(iLocal_84, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					}
					func_109();
					iLocal_45 = 8;
				}
			}
		}
	}
}

var func_162()//Position - 0x92E6
{
	return Global_32522;
}

int func_163(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x92F1
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 131 /*INPUT_VEH_SUB_ASCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 132 /*INPUT_VEH_SUB_DESCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 123 /*INPUT_VEH_SUB_TURN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 126 /*INPUT_VEH_SUB_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 129 /*INPUT_VEH_SUB_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 130 /*INPUT_VEH_SUB_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 133 /*INPUT_VEH_SUB_TURN_HARD_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 134 /*INPUT_VEH_SUB_TURN_HARD_RIGHT*/, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_164(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_164(int iParam0)//Position - 0x9489
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

int func_165(char* sParam0)//Position - 0x94B5
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_24() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_24() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (func_5(&Local_393, cLocal_370, &Var0, 4, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_166(char* sParam0, bool bParam1)//Position - 0x9509
{
	if (bParam1)
	{
		if (!iLocal_70)
		{
			if (func_5(&Local_393, cLocal_370, sParam0, 4, 0, 0, 0))
			{
				iLocal_70 = 1;
				iLocal_71 = 0;
			}
		}
		else if (iLocal_71)
		{
			if (func_168(&Local_393, cLocal_370, sParam0, &Local_73, 4, 0, 0))
			{
				iLocal_71 = 0;
			}
		}
		if ((iLocal_70 && !iLocal_71) && bParam1)
		{
			if (iLocal_79 == -1)
			{
				if (!func_80())
				{
					iLocal_79 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_79) > 500)
			{
				iLocal_79 = -1;
				iLocal_70 = 0;
				iLocal_71 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_70 && !iLocal_71)
	{
		Local_73 = { func_167() };
		func_150();
		iLocal_71 = 1;
	}
	return 0;
}

struct<6> func_167()//Position - 0x95B9
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21845 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_22855);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar7 /*6*/])))
			{
				return Global_20713[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar8 /*6*/])))
					{
						return Global_20713[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_20713[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_168(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9665
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21852 = 0;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 1;
	StringCopy(&Global_22849, sParam3, 24);
	Global_2883585 = 0;
	return func_6(sParam2, iParam4, 0);
}

int func_169()//Position - 0x96B9
{
	if (bLocal_366)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
		{
			if (func_73())
			{
				return 1;
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, false))
		{
			if (SYSTEM::VDIST2(Local_58, Local_61) < 400f)
			{
				return 1;
			}
		}
	}
	else
	{
		return func_73();
	}
	return 0;
}

void func_170()//Position - 0x971A
{
	if (func_24() == 2)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_362))
		{
			func_173();
			iLocal_362 = func_172(-1034.6f, 4918.6f, 205.9f, 0);
			HUD::SET_BLIP_SPRITE(iLocal_362, 269 /*RADAR_ALTRUIST*/);
			func_171();
		}
	}
}

void func_171()//Position - 0x975E
{
	if (!func_175())
	{
		if (func_24() == 2)
		{
			Global_32522 = 1;
		}
	}
}

int func_172(struct<3> Param0, bool bParam3)//Position - 0x977A
{
	return func_56(Param0, bParam3);
}

void func_173()//Position - 0x978C
{
	if (func_24() == 2)
	{
		if (!Global_32524)
		{
			func_174("CULT_BLIP_HELP" /* GXT: Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~ */, -1);
			Global_32524 = 1;
		}
	}
}

void func_174(char* sParam0, int iParam1)//Position - 0x97B0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_175()//Position - 0x97C7
{
	if (Global_113810.f_24998.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_176(bool bParam0)//Position - 0x97E3
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false) && !PED::IS_PED_INJURED(iLocal_84))
	{
		if (func_73())
		{
			if (bParam0)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_360))
				{
					iLocal_360 = func_56(Local_51, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_358))
			{
				HUD::REMOVE_BLIP(&iLocal_358);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_359))
			{
				HUD::REMOVE_BLIP(&iLocal_359);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_360))
			{
				HUD::REMOVE_BLIP(&iLocal_360);
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_359))
				{
					iLocal_359 = func_177(iLocal_89, 0, 0);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_358))
				{
					iLocal_358 = func_191(iLocal_84, 0, 145);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_358))
			{
				HUD::REMOVE_BLIP(&iLocal_358);
			}
		}
	}
}

int func_177(int iParam0, bool bParam1, bool bParam2)//Position - 0x98B7
{
	return func_178(iParam0, !bParam1, bParam2);
}

int func_178(int iParam0, bool bParam1, bool bParam2)//Position - 0x98CA
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_57(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_57(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_57(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_179(int iParam0)//Position - 0x996E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = 0;
		while (iVar1 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - 1))
		{
			if (iVar0 == -1)
			{
				iVar2 = iVar1;
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar2, false))
				{
					iVar0 = iVar2;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_180(bool bParam0, bool bParam1, bool bParam2)//Position - 0x99B8
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_181(int iParam0)//Position - 0x9A9D
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x9AED
{
	if (PED::IS_PED_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 25f, 25f, 25f, false, true, 0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		return 1;
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Global_19, false, true, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	return 0;
}

void func_183()//Position - 0x9B57
{
	if (!PED::IS_PED_INJURED(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
			{
				TASK::TASK_ENTER_VEHICLE(iLocal_84, iLocal_89, -1, func_179(iLocal_89), 2f, 8388608, 0);
			}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(func_72()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_84, true), ENTITY::GET_ENTITY_COORDS(func_72(), true)) < 100f) && (ENTITY::GET_ENTITY_SPEED(iLocal_89) < 5f || !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_89))))
		{
			if (bLocal_366)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_84, "VEH@STD@PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_84, iLocal_89))
				{
					TASK::TASK_PLAY_ANIM(iLocal_84, "VEH@STD@PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0f, false, false, false);
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_84, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_84, iLocal_89))
			{
				TASK::TASK_PLAY_ANIM(iLocal_84, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 4f, -4f, -1, 48, 0f, false, false, false);
			}
		}
		else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_84, "VEH@STD@PS@IDLE_PANIC", "sit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_84, "VEH@LOW@FRONT_PS@IDLE_PANIC", "sit", 3)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_84, iLocal_89))
		{
			TASK::CLEAR_PED_TASKS(iLocal_84);
		}
		switch (iLocal_367)
		{
			case 0:
				if (SYSTEM::TIMERA() > 2000)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_72()) && !PED::IS_PED_INJURED(func_72()))
					{
						func_23(&Local_393, 4);
						func_22(&Local_393, 4, func_72(), "PAPARAZZO", 0, 1);
					}
					iLocal_47 = 2;
					func_109();
					if (func_5(&Local_393, cLocal_370, "REPAP_GO", 4, 0, 0, 0))
					{
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, true);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_67, joaat("PLAYER"));
						iLocal_356 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_85, true, true, false);
						ENTITY::SET_ENTITY_COLLISION(iLocal_356, false, false);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_356, false, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_356, true);
						iLocal_367++;
					}
				}
				break;
			
			case 1:
				func_185();
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_84, 243.55705f, 77.51265f, 90.080025f, 268.2083f, 144.21886f, 109.853004f, 23.25f, false, true, 0))
				{
					iLocal_367++;
					iLocal_368 = MISC::GET_GAME_TIMER();
					iLocal_47 = 3;
				}
				break;
			
			case 2:
				if (!bLocal_666)
				{
					if (((((iLocal_668 != 1 && iLocal_668 != 3) && iLocal_668 != 6) && iLocal_668 != 9) && iLocal_668 != 11) && iLocal_668 != 13)
					{
						bLocal_667 = false;
						if (ENTITY::DOES_ENTITY_EXIST(func_72()) && ENTITY::IS_ENTITY_AT_ENTITY(func_72(), iLocal_89, 5f, 5f, 3f, false, true, 0))
						{
							bLocal_666 = true;
						}
					}
				}
				else
				{
					if (!func_80())
					{
						bLocal_667 = true;
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_72()))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(func_72(), iLocal_89, 5f, 5f, 3f, false, true, 0))
						{
							bLocal_666 = false;
						}
					}
				}
				if (bLocal_667)
				{
					if (!func_81())
					{
						if (!func_184())
						{
							func_185();
						}
					}
				}
				else
				{
					switch (iLocal_668)
					{
						case 0:
							if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_393, cLocal_370, "REPAP_CHT", 4, 0, 0, 0))
								{
									iLocal_668++;
								}
							}
							break;
						
						case 1:
							if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
							{
								if (func_165("REPAP_RES1"))
								{
									iLocal_669 = MISC::GET_GAME_TIMER();
									iLocal_668++;
								}
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - iLocal_669) > 8000)
							{
								if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT2"))
									{
										iLocal_668++;
									}
								}
							}
							break;
						
						case 3:
							if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_393, cLocal_370, "REPAP_RESP2L", 4, 0, 0, 0))
								{
									iLocal_669 = MISC::GET_GAME_TIMER();
									iLocal_668++;
								}
							}
							break;
						
						case 4:
							if ((MISC::GET_GAME_TIMER() - iLocal_669) > 6000)
							{
								if (func_24() == 0)
								{
									if (func_166("REPAP_CHT3M", ((func_169() && !func_81()) && !bLocal_666)))
									{
										iLocal_668++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_166("REPAP_CHT3F", ((func_169() && !func_81()) && !bLocal_666)))
									{
										iLocal_668++;
									}
								}
								else if (func_166("REPAP_CHT3T", ((func_169() && !func_81()) && !bLocal_666)))
								{
									iLocal_668++;
								}
								if (iLocal_668 > 4)
								{
									iLocal_669 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 5:
							if ((MISC::GET_GAME_TIMER() - iLocal_669) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_166("REPAP_CHT4M", ((func_169() && !func_81()) && !bLocal_666)))
									{
										iLocal_668++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_166("REPAP_CHT4F", ((func_169() && !func_81()) && !bLocal_666)))
									{
										iLocal_668++;
									}
								}
								else if (func_166("REPAP_CHT4T", ((func_169() && !func_81()) && !bLocal_666)))
								{
									iLocal_668++;
								}
								if (iLocal_668 > 5)
								{
									iLocal_669 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 6:
							if ((MISC::GET_GAME_TIMER() - iLocal_669) > 8000)
							{
								if (func_24() == 0)
								{
									if (func_166("REPAP_CHT5M", ((func_169() && !func_81()) && !bLocal_666)))
									{
										iLocal_668++;
									}
								}
								else if (func_24() == 1)
								{
									if (func_166("REPAP_CHT5F", ((func_169() && !func_81()) && !bLocal_666)))
									{
										iLocal_668++;
									}
								}
								else if (func_166("REPAP_CHT5T", ((func_169() && !func_81()) && !bLocal_666)))
								{
									iLocal_668++;
								}
								if (iLocal_668 > 6)
								{
									iLocal_669 = MISC::GET_GAME_TIMER();
								}
							}
							break;
						
						case 7:
							if ((MISC::GET_GAME_TIMER() - iLocal_669) > 8000)
							{
								if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT6"))
									{
										iLocal_668++;
									}
								}
							}
							break;
						
						case 8:
							if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_393, cLocal_370, "REPAP_RESP6L", 4, 0, 0, 0))
								{
									iLocal_669 = MISC::GET_GAME_TIMER();
									iLocal_668++;
								}
							}
							break;
						
						case 9:
							if ((MISC::GET_GAME_TIMER() - iLocal_669) > 8000)
							{
								if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT7"))
									{
										iLocal_668++;
									}
								}
							}
							break;
						
						case 10:
							if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_393, cLocal_370, "REPAP_RESP7L", 4, 0, 0, 0))
								{
									iLocal_669 = MISC::GET_GAME_TIMER();
									iLocal_668++;
								}
							}
							break;
						
						case 11:
							if ((MISC::GET_GAME_TIMER() - iLocal_669) > 8000)
							{
								if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
								{
									if (func_165("REPAP_CHT8"))
									{
										iLocal_668++;
									}
								}
							}
							break;
						
						case 12:
							if (((!bLocal_666 && func_169()) && !func_81()) && !func_80())
							{
								if (func_5(&Local_393, cLocal_370, "REPAP_RESP8L", 4, 0, 0, 0))
								{
									iLocal_668++;
								}
							}
							break;
						}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(func_72()))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_367++;
					func_150();
					if (!Global_3 && !bLocal_68)
					{
						iLocal_47 = 6;
					}
				}
				if (Global_3 || bLocal_68)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 244.21753f, 441.01282f, 126.27671f, 33.5f, 40f, 14.75f, false, true, 0) && func_73())
					{
						iLocal_47 = 4;
						iLocal_83 = MISC::GET_GAME_TIMER();
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() > 3000 && func_73())
				{
					func_190("MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME");
					if (func_5(&Local_393, cLocal_370, "REPAP_LOS", 4, 0, 0, 0))
					{
						func_189(2);
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
		}
		func_176(0);
	}
}

int func_184()//Position - 0xA481
{
	int iVar0;
	
	iVar0 = func_30();
	if ((MISC::GET_GAME_TIMER() - iLocal_664) > 5000)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_89) && PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, true))
			{
				if (iVar0 != -1 && (MISC::GET_GAME_TIMER() - Local_202[iVar0 /*18*/].f_12) < 3000)
				{
					if (func_5(&Local_393, cLocal_370, "REPAP_WHINE", 4, 0, 0, 0))
					{
						iLocal_664 = MISC::GET_GAME_TIMER();
						return 1;
					}
				}
			}
			else if (func_5(&Local_393, cLocal_370, "REPAP_EXIT", 4, 0, 0, 0))
			{
				iLocal_664 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

void func_185()//Position - 0xA523
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_562) > iLocal_563)
	{
		if ((!PED::IS_PED_INJURED(iLocal_84) && ENTITY::DOES_ENTITY_EXIST(func_72())) && !PED::IS_PED_INJURED(func_72()))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_61, ENTITY::GET_ENTITY_COORDS(func_72(), true), true) < 8f)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				func_23(&Local_393, 4);
				func_23(&Local_393, 5);
				func_23(&Local_393, 6);
				func_23(&Local_393, 7);
				switch (iVar0)
				{
					case 0:
						func_22(&Local_393, 4, func_72(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_393[4 /*10*/]) && !PED::IS_PED_INJURED(Local_393[4 /*10*/]))
						{
							if (func_5(&Local_393, cLocal_370, "REPAP_PP", 4, 0, 0, 0))
							{
								iLocal_562 = MISC::GET_GAME_TIMER();
								iLocal_563 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 1:
						func_22(&Local_393, 4, func_72(), "PAPARAZZO", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_393[4 /*10*/]) && !PED::IS_PED_INJURED(Local_393[4 /*10*/]))
						{
							if (func_5(&Local_393, cLocal_370, "REPAP_CALL1", 4, 0, 0, 0))
							{
								iLocal_562 = MISC::GET_GAME_TIMER();
								iLocal_563 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 2:
						func_22(&Local_393, 5, func_72(), "PAP2", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_393[5 /*10*/]) && !PED::IS_PED_INJURED(Local_393[5 /*10*/]))
						{
							if (func_5(&Local_393, cLocal_370, "REPAP_CALL2", 4, 0, 0, 0))
							{
								iLocal_562 = MISC::GET_GAME_TIMER();
								iLocal_563 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 3:
						func_22(&Local_393, 6, func_72(), "PAP3", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_393[6 /*10*/]) && !PED::IS_PED_INJURED(Local_393[6 /*10*/]))
						{
							if (func_5(&Local_393, cLocal_370, "REPAP_CALL3", 4, 0, 0, 0))
							{
								iLocal_562 = MISC::GET_GAME_TIMER();
								iLocal_563 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					
					case 4:
						func_22(&Local_393, 7, func_72(), "PAP4", 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_393[7 /*10*/]) && !PED::IS_PED_INJURED(Local_393[7 /*10*/]))
						{
							if (func_5(&Local_393, cLocal_370, "REPAP_CALL4", 4, 0, 0, 0))
							{
								iLocal_562 = MISC::GET_GAME_TIMER();
								iLocal_563 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
							}
						}
						break;
					}
				}
			}
	}
}

void func_186()//Position - 0xA78A
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char cVar3[24];
	char* sVar9;
	char cVar10[24];
	int iVar16;
	
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_358))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_358, iLocal_662);
		}
		switch (iLocal_367)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
				STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
				if ((STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait"))
				{
					iLocal_623 = PED::CREATE_SYNCHRONIZED_SCENE(Local_651, Local_654, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_84, iLocal_623, "random@paparazzi@peek", "left_peek_a", 1000f, -8f, 1, 0, 1000f, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), -1, 4, 4);
					sLocal_624[0] = "peek_a";
					sLocal_624[1] = "peek_b";
					sLocal_624[2] = "peek_c";
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					iLocal_621 = 0;
					iLocal_657 = 0;
					bLocal_662 = false;
					iLocal_72 = 1;
					iLocal_658 = 0;
					iLocal_69 = 0;
					fLocal_659 = 0f;
					iLocal_367++;
				}
				break;
			
			case 1:
				if (BitTest(iLocal_658, 0))
				{
					if (!BitTest(iLocal_658, 1))
					{
						MISC::SET_BIT(&iLocal_658, 1);
					}
					else
					{
						iLocal_658 = 0;
					}
				}
				iVar2 = 0;
				bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_637, Local_640, fLocal_643, false, true, 0);
				bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_630, Local_633, fLocal_636, false, true, 0);
				if (MISC::ARE_STRINGS_EQUAL(sLocal_629, "right_"))
				{
					if (bVar1)
					{
						sLocal_629 = "left_";
						iVar2 = 1;
					}
				}
				else if (bVar0)
				{
					sLocal_629 = "right_";
					iVar2 = 1;
				}
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_623) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_623) > 0.9f) || iVar2)
				{
					if (iLocal_658 == 0)
					{
						TASK::CLEAR_PED_TASKS(iLocal_84);
						iLocal_628++;
						if (iLocal_628 >= 3)
						{
							iLocal_628 = 0;
						}
						StringCopy(&cVar3, sLocal_629, 24);
						StringConCat(&cVar3, sLocal_624[iLocal_628], 24);
						iLocal_623 = PED::CREATE_SYNCHRONIZED_SCENE(Local_651, Local_654, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_84, iLocal_623, "random@paparazzi@peek", &cVar3, 4f, -4f, 1, 0, 1000f, 0);
						MISC::SET_BIT(&iLocal_658, 0);
					}
				}
				if (bVar0 || bVar1)
				{
					if (fLocal_659 <= 20f)
					{
						fLocal_659 = (fLocal_659 + MISC::GET_FRAME_TIME());
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_622) > 5000 && iLocal_658 == 0)
					{
						if (SYSTEM::VDIST2(Local_58, Local_61) < (22.2f * 22.2f))
						{
							if (fLocal_659 < 10f)
							{
								if (iLocal_660)
								{
									sVar9 = "REPAP_SHT1";
								}
								else
								{
									sVar9 = "REPAP_SHT2";
								}
							}
							else
							{
								sVar9 = "REPAP_PRT";
							}
							if (func_24() == 1)
							{
								func_22(&Local_393, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							}
							else if (func_24() == 0)
							{
								func_22(&Local_393, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							}
							else
							{
								func_22(&Local_393, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							}
							if (func_5(&Local_393, cLocal_370, sVar9, 4, 0, 0, 0))
							{
								iLocal_660 = 1;
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84, 7f, 7f, 7f, false, true, 0))
								{
									TASK::CLEAR_PED_TASKS(iLocal_84);
									StringCopy(&cVar10, sLocal_629, 24);
									StringConCat(&cVar10, "come_here", 24);
									iLocal_623 = PED::CREATE_SYNCHRONIZED_SCENE(Local_651, Local_654, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_84, iLocal_623, "random@paparazzi@peek", &cVar10, 4f, -4f, 1, 0, 1000f, 0);
									MISC::SET_BIT(&iLocal_658, 0);
								}
								iLocal_622 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_644, Local_647, fLocal_650, false, true, 0) && iLocal_658 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_357))
					{
						HUD::REMOVE_BLIP(&iLocal_357);
						if (!HUD::DOES_BLIP_EXIST(iLocal_358))
						{
							iLocal_358 = func_191(iLocal_84, 0, 145);
						}
					}
					TASK::CLEAR_PED_TASKS(iLocal_84);
					iLocal_623 = PED::CREATE_SYNCHRONIZED_SCENE(Local_651, Local_654, 2);
					if (bVar1)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_84, iLocal_623, "random@paparazzi@trans", "trans_left_to_wait", 8f, -4f, 1, 0, 1000f, 0);
					}
					else
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_84, iLocal_623, "random@paparazzi@trans", "trans_right_to_wait", 8f, -4f, 1, 0, 1000f, 0);
					}
					MISC::SET_BIT(&iLocal_658, 0);
					iLocal_367++;
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_623) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_623) > 0.9f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_84);
						TASK::TASK_PLAY_ANIM(iLocal_84, "random@paparazzi@wait", "wait_c", 8f, -4f, -1, 0, 0f, false, false, false);
						iLocal_619 = 2;
						SYSTEM::SETTIMERA(0);
					}
					iLocal_367++;
				}
				break;
			
			case 3:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (func_188())
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_89);
						iLocal_89 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_89, true, true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_89, false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_89, 1);
						bLocal_366 = true;
					}
				}
				if (!bLocal_366)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_89, 1);
					if (func_149(&Local_393, cLocal_370, "REPAP_EXP", "REPAP_EXP_2", 4, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						bLocal_662 = true;
						iLocal_367 = 100;
					}
				}
				else if (func_149(&Local_393, cLocal_370, "REPAP_EXPB", "REPAP_EXPB_2", 4, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					bLocal_662 = true;
					iLocal_367++;
				}
				if (SYSTEM::TIMERA() > 2000)
				{
					func_187(Local_85, 1);
				}
				break;
			
			case 4:
				func_55();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_89, iLocal_84, Global_19 + Vector(2f, 12f, 12f), false, true, 0) && !bLocal_366)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && !iLocal_657)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar16);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 259.2552f, 122.2986f, 100.441f, 1f, 20000, 0.25f, 0, 40000f);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar16);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_84, iVar16);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_84, false, false);
							TASK::CLEAR_SEQUENCE_TASK(&iVar16);
							iLocal_657 = 1;
						}
						else
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_84, 1f);
							func_187(259.2552f, 122.2986f, 100.441f, 0);
						}
					}
					else
					{
						func_187(Local_85, 1);
					}
					if (!bLocal_366)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, false))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_359))
							{
								HUD::REMOVE_BLIP(&iLocal_359);
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_358))
							{
								iLocal_358 = func_191(iLocal_84, 0, 145);
							}
						}
					}
					if ((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_89, iLocal_84, Global_19, false, true, 0) && func_181(iLocal_89)) && (SYSTEM::TIMERA() > 6000 || !bLocal_366))
					{
						if (!iLocal_621)
						{
							func_109();
							if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
							{
								if (func_24() == 1)
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_ONF", 4, 0, 0, 0))
									{
										iLocal_621 = 1;
									}
								}
								else if (func_24() == 0)
								{
									if (func_5(&Local_393, cLocal_370, "REPAP_ONM", 4, 0, 0, 0))
									{
										iLocal_621 = 1;
									}
								}
								else if (func_5(&Local_393, cLocal_370, "REPAP_ONT", 4, 0, 0, 0))
								{
									iLocal_621 = 1;
								}
							}
							else if (func_24() == 1)
							{
								if (func_5(&Local_393, cLocal_370, "REPAP_INF", 4, 0, 0, 0))
								{
									iLocal_621 = 1;
								}
							}
							else if (func_24() == 0)
							{
								if (func_5(&Local_393, cLocal_370, "REPAP_INM", 4, 0, 0, 0))
								{
									iLocal_621 = 1;
								}
							}
							else if (func_5(&Local_393, cLocal_370, "REPAP_INT", 4, 0, 0, 0))
							{
								iLocal_621 = 1;
							}
						}
						else
						{
							if (!bLocal_366)
							{
								iLocal_367 = -5;
							}
							else
							{
								iLocal_367++;
							}
							TASK::CLEAR_PED_TASKS(iLocal_84);
							TASK::TASK_ENTER_VEHICLE(iLocal_84, iLocal_89, -1, func_179(iLocal_89), 1f, 8388608, 0);
						}
					}
				}
				break;
			
			case -5:
				if (bLocal_366)
				{
					func_187(Local_85, 1);
				}
				else
				{
					func_187(259.2552f, 122.2986f, 100.441f, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
				{
					if (func_163(iLocal_89, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						iLocal_367 = 5;
					}
				}
				break;
			
			case 5:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_84) && PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, false))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_358))
						{
							HUD::REMOVE_BLIP(&iLocal_358);
						}
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						func_189(1);
					}
					else
					{
						if (!Global_3 && !bLocal_68)
						{
							if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, false) && !PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, true)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, 225.17787f, 125.66318f, 113.66467f, 262.30322f, 111.87705f, 97.16339f, 37f, false, true, 0))
							{
								if (bLocal_366)
								{
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_84, 2, true);
									sLocal_369 = "REPAP_GUP";
									func_189(6);
								}
								else
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
									PED::SET_PED_FLEE_ATTRIBUTES(iLocal_84, 2, true);
									sLocal_369 = "REPAP_CP";
									func_189(6);
								}
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_84, iLocal_89, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_84);
								TASK::TASK_ENTER_VEHICLE(iLocal_84, iLocal_89, -1, func_179(iLocal_89), 1f, 8388608, 0);
							}
							else if (SYSTEM::VDIST(Local_61, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_89, 1f, 0f, 0f)) < 1f)
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_84, 1f);
							}
						}
					}
				}
				break;
			
			case 100:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
				{
					if (!func_80())
					{
						func_109();
						if (func_24() == 1)
						{
							if (func_5(&Local_393, cLocal_370, "REPAP_YSF", 4, 0, 0, 0))
							{
								iLocal_367++;
							}
						}
						else if (func_24() == 0)
						{
							func_109();
							if (func_5(&Local_393, cLocal_370, "REPAP_YSM", 4, 0, 0, 0))
							{
								iLocal_367++;
							}
							iLocal_72 = 0;
						}
						else if (func_5(&Local_393, cLocal_370, "REPAP_YST", 4, 0, 0, 0))
						{
							iLocal_367++;
						}
					}
				}
				if (iLocal_367 == 101)
				{
					fLocal_663 = 0f;
				}
				func_187(Local_85, 1);
				break;
			
			case 101:
				if (SYSTEM::VDIST2(Local_58, Local_61) < 49f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 3f)
					{
						fLocal_663 = (fLocal_663 + MISC::GET_FRAME_TIME());
					}
					else
					{
						fLocal_663 = (fLocal_663 - (MISC::GET_FRAME_TIME() * 2f));
					}
					if (fLocal_663 > 10f)
					{
						if (func_5(&Local_393, cLocal_370, "REPAP_PRT", 4, 0, 0, 0))
						{
							fLocal_663 = 0f;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, false) && func_188())
					{
						bLocal_366 = true;
						iLocal_72 = 1;
						iLocal_89 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_89, true, true);
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89, false))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_359))
						{
							HUD::REMOVE_BLIP(&iLocal_359);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_358))
						{
							iLocal_358 = func_191(iLocal_84, 0, 145);
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_358))
						{
							HUD::REMOVE_BLIP(&iLocal_358);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_359))
						{
							iLocal_359 = func_177(iLocal_89, 0, 0);
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_89))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_359))
						{
							HUD::REMOVE_BLIP(&iLocal_359);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_358))
						{
							iLocal_358 = func_191(iLocal_84, 0, 145);
						}
						func_190("MAG_2_ESCAPE_PAP_CHASE");
						iLocal_367 = 4;
					}
					if (!iLocal_72)
					{
						if (SYSTEM::VDIST2(Local_58, Local_64) < 9f && func_24() == 0)
						{
							if (func_5(&Local_393, cLocal_370, "REPAP_MIKE", 4, 0, 0, 0))
							{
								iLocal_72 = 1;
							}
						}
					}
				}
				func_187(Local_85, 1);
				break;
		}
		if (!Global_3 && !bLocal_68)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
			{
				if (SYSTEM::VDIST(Local_58, Local_85) > 75f)
				{
					func_189(6);
				}
				if (func_202())
				{
					func_189(5);
				}
			}
		}
		if (!bLocal_366)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89, false))
			{
				if (!Global_3 && !bLocal_68)
				{
					func_189(5);
				}
			}
			else
			{
				if (!bLocal_366)
				{
					if (!Global_3 && !bLocal_68)
					{
						if (ENTITY::GET_ENTITY_HEALTH(iLocal_89) < iLocal_81)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), true))
							{
								iLocal_82 = (iLocal_82 + (iLocal_81 - ENTITY::GET_ENTITY_HEALTH(iLocal_89)));
							}
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_89);
						}
						if (iLocal_82 > 250)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_84, iLocal_89) && SYSTEM::VDIST(Local_61, Local_64) < 25f)
							{
								func_189(5);
							}
						}
					}
				}
				iLocal_81 = ENTITY::GET_ENTITY_HEALTH(iLocal_89);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_84))
		{
			if (PED::IS_PED_FLEEING(iLocal_84))
			{
				if (!Global_3 && !bLocal_68)
				{
					func_189(5);
				}
			}
		}
	}
}

void func_187(struct<3> Param0, bool bParam3)//Position - 0xB40F
{
	if (SYSTEM::VDIST(Local_61, Param0) > 2.5f)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_84, Param0, 1f, -1, 0.25f, 0, 40000f);
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
	{
		func_146(bParam3);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_84, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
	}
}

bool func_188()//Position - 0xB478
{
	return (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 0) && func_181(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && !Global_112857);
}

void func_189(int iParam0)//Position - 0xB4F9
{
	iLocal_45 = iParam0;
	iLocal_367 = 0;
}

void func_190(char* sParam0)//Position - 0xB509
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_558)
	{
		if (!MISC::ARE_STRINGS_EQUAL(iLocal_558[iVar0], sParam0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_558[iVar0]))
			{
				AUDIO::STOP_AUDIO_SCENE(iLocal_558[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_558)
	{
		if (MISC::ARE_STRINGS_EQUAL(iLocal_558[iVar0], sParam0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(iLocal_558[iVar0]))
			{
				AUDIO::START_AUDIO_SCENE(iLocal_558[iVar0]);
			}
		}
		iVar0++;
	}
}

int func_191(int iParam0, bool bParam1, int iParam2)//Position - 0xB58E
{
	int iVar0;
	
	iVar0 = func_178(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2058[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_192(int iParam0)//Position - 0xB5D8
{
	if (func_195())
	{
		Global_113800 = 1;
		Global_113797 = MISC::GET_GAME_TIMER();
		if (func_95(Global_113799))
		{
			func_193(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_95(Global_113799))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_193(int iParam0)//Position - 0xB62B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113810.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_174(func_194(iParam0), -1);
					Global_113810.f_24998.f_2++;
					MISC::SET_BIT(&Global_113806, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113806, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_174(func_194(iParam0), -1);
					Global_113810.f_24998.f_3++;
					MISC::SET_BIT(&Global_113806, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113806, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_174(func_194(iParam0), -1);
					Global_113810.f_24998.f_4++;
					MISC::SET_BIT(&Global_113806, 2);
				}
			}
			break;
	}
}

char* func_194(int iParam0)//Position - 0xB706
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS" /* GXT: Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby. */;
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP" /* GXT: Flashing blue and red blips indicate situations around San Andreas that you can choose to help with. */;
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER" /* GXT: If you retrieve a stolen item, you can choose to keep it or return it for a reward. */;
			break;
	}
	return sVar0;
}

int func_195()//Position - 0xB748
{
	switch (func_196(&Global_32343, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_196(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xB77E
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98291.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_200(0))
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23251.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43377 = iParam2;
		Global_43339 = *uParam0;
		Global_43340 = iParam4;
		Global_43338 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43338 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43338)
			{
				if (Global_43344[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43339 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_198(iParam2))
		{
			return 0;
		}
		if (Global_43338 == 8)
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		Global_43344[Global_43338 /*4*/] = Global_43341;
		Global_43344[Global_43338 /*4*/].f_1 = iParam1;
		Global_43344[Global_43338 /*4*/].f_2 = iParam2;
		Global_43344[Global_43338 /*4*/].f_3 = 0;
		Global_43338++;
		if (iParam4 != 0)
		{
			func_197(uParam0, iParam4);
		}
	}
	return 2;
}

void func_197(var uParam0, int iParam1)//Position - 0xB8B5
{
	int iVar0;
	
	if (Global_43338 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43338)
	{
		if (Global_43344[iVar0 /*4*/] == *uParam0)
		{
			Global_43344[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_198(int iParam0)//Position - 0xB904
{
	return func_199(iParam0, Global_43377);
}

int func_199(int iParam0, int iParam1)//Position - 0xB915
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_200(int iParam0)//Position - 0xBAF6
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	if (func_198(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_201()//Position - 0xBB18
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_84))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_84, 2, false);
		TASK::TASK_SMART_FLEE_PED(iLocal_84, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
	}
	iVar0 = 0;
	while (iVar0 < Local_202.f_0)
	{
		if (!PED::IS_PED_INJURED(Local_202[iVar0 /*18*/]))
		{
			TASK::TASK_SMART_FLEE_PED(Local_202[iVar0 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_202[iVar0 /*18*/], joaat("HATES_PLAYER"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_202[iVar0 /*18*/], false);
		}
		iVar0++;
	}
}

int func_202()//Position - 0xBB95
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_202.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_202[iVar1 /*18*/]) && !PED::IS_PED_INJURED(Local_202[iVar1 /*18*/]))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_202[iVar1 /*18*/]))
			{
				if (((MISC::IS_BULLET_IN_AREA(Local_202[iVar1 /*18*/].f_6, 5f, true) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_202[iVar1 /*18*/].f_6, 10f)) || PED::IS_PED_FLEEING(Local_202[iVar1 /*18*/])) || (iLocal_384[iVar1] > 10 && iLocal_45 == 0))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	if (iLocal_347 > 1)
	{
		iVar0 = 1;
	}
	iVar1 = 0;
	while (iVar1 < Local_129.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_129[iVar1 /*18*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_129[iVar1 /*18*/], false) && ENTITY::IS_ENTITY_VISIBLE(Local_129[iVar1 /*18*/]))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_129[iVar1 /*18*/]))
				{
					iVar0 = 1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_203()//Position - 0xBC8F
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_41) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_214())
		{
			return 0;
		}
	}
	if (func_210())
	{
		return 1;
	}
	if (func_204(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_204(float fParam0, bool bParam1)//Position - 0xBD15
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_26(func_24()))
		{
			iVar36 = func_100();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113810.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113810.f_18577[iVar32 /*6*/], 3))
				{
					func_205(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_205(int iParam0, var uParam1)//Position - 0xBDC6
{
	switch (iParam0)
	{
		case 0:
			func_206(uParam1, "Abigail1", func_208(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 1:
			func_206(uParam1, "Abigail2", func_208(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 2:
			func_206(uParam1, "Barry1", func_208(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 3:
			func_206(uParam1, "Barry2", func_208(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		
		case 4:
			func_206(uParam1, "Barry3", func_208(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 5:
			func_206(uParam1, "Barry3A", func_208(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 6:
			func_206(uParam1, "Barry3C", func_208(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 7:
			func_206(uParam1, "Barry4", func_208(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_207(iParam0), 0, 0);
			break;
		
		case 8:
			func_206(uParam1, "Dreyfuss1", func_208(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 9:
			func_206(uParam1, "Epsilon1", func_208(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 10:
			func_206(uParam1, "Epsilon2", func_208(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 11:
			func_206(uParam1, "Epsilon3", func_208(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 12:
			func_206(uParam1, "Epsilon4", func_208(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 13:
			func_206(uParam1, "Epsilon5", func_208(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 14:
			func_206(uParam1, "Epsilon6", func_208(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 15:
			func_206(uParam1, "Epsilon7", func_208(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 16:
			func_206(uParam1, "Epsilon8", func_208(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 17:
			func_206(uParam1, "Extreme1", func_208(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 18:
			func_206(uParam1, "Extreme2", func_208(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 19:
			func_206(uParam1, "Extreme3", func_208(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 20:
			func_206(uParam1, "Extreme4", func_208(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 21:
			func_206(uParam1, "Fanatic1", func_208(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_207(iParam0), 1, 0);
			break;
		
		case 22:
			func_206(uParam1, "Fanatic2", func_208(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_207(iParam0), 1, 0);
			break;
		
		case 23:
			func_206(uParam1, "Fanatic3", func_208(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_207(iParam0), 0, 1);
			break;
		
		case 24:
			func_206(uParam1, "Hao1", func_208(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_207(iParam0), 0, 1);
			break;
		
		case 25:
			func_206(uParam1, "Hunting1", func_208(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 26:
			func_206(uParam1, "Hunting2", func_208(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 27:
			func_206(uParam1, "Josh1", func_208(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 28:
			func_206(uParam1, "Josh2", func_208(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		
		case 29:
			func_206(uParam1, "Josh3", func_208(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		
		case 30:
			func_206(uParam1, "Josh4", func_208(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 31:
			func_206(uParam1, "Maude1", func_208(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 32:
			func_206(uParam1, "Minute1", func_208(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 33:
			func_206(uParam1, "Minute2", func_208(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 34:
			func_206(uParam1, "Minute3", func_208(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 35:
			func_206(uParam1, "MrsPhilips1", func_208(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 36:
			func_206(uParam1, "MrsPhilips2", func_208(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 37:
			func_206(uParam1, "Nigel1", func_208(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 38:
			func_206(uParam1, "Nigel1A", func_208(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		
		case 39:
			func_206(uParam1, "Nigel1B", func_208(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_207(iParam0), 1, 1);
			break;
		
		case 40:
			func_206(uParam1, "Nigel1C", func_208(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_207(iParam0), 1, 1);
			break;
		
		case 41:
			func_206(uParam1, "Nigel1D", func_208(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_207(iParam0), 1, 1);
			break;
		
		case 42:
			func_206(uParam1, "Nigel2", func_208(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		
		case 43:
			func_206(uParam1, "Nigel3", func_208(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 1, 1);
			break;
		
		case 44:
			func_206(uParam1, "Omega1", func_208(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 45:
			func_206(uParam1, "Omega2", func_208(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 46:
			func_206(uParam1, "Paparazzo1", func_208(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 47:
			func_206(uParam1, "Paparazzo2", func_208(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 48:
			func_206(uParam1, "Paparazzo3", func_208(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 49:
			func_206(uParam1, "Paparazzo3A", func_208(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 50:
			func_206(uParam1, "Paparazzo3B", func_208(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 51:
			func_206(uParam1, "Paparazzo4", func_208(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 52:
			func_206(uParam1, "Rampage1", func_208(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 54:
			func_206(uParam1, "Rampage3", func_208(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 55:
			func_206(uParam1, "Rampage4", func_208(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 56:
			func_206(uParam1, "Rampage5", func_208(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_207(iParam0), 0, 0);
			break;
		
		case 53:
			func_206(uParam1, "Rampage2", func_208(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_207(iParam0), 1, 0);
			break;
		
		case 57:
			func_206(uParam1, "TheLastOne", func_208(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 58:
			func_206(uParam1, "Tonya1", func_208(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 59:
			func_206(uParam1, "Tonya2", func_208(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 60:
			func_206(uParam1, "Tonya3", func_208(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 61:
			func_206(uParam1, "Tonya4", func_208(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		case 62:
			func_206(uParam1, "Tonya5", func_208(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_207(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_206(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xCF3D
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_207(int iParam0)//Position - 0xCFCE
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_208(int iParam0)//Position - 0xD314
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_209(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_209(int iParam0)//Position - 0xD34A
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_210()//Position - 0xD795
{
	if (func_213() && !func_214())
	{
		return 1;
	}
	if (func_212() && func_211())
	{
		return 1;
	}
	return 0;
}

bool func_211()//Position - 0xD7C7
{
	return Global_113528 > 0;
}

int func_212()//Position - 0xD7D5
{
	if (Global_97735 != -1)
	{
		return 1;
	}
	return 0;
}

int func_213()//Position - 0xD7EA
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 20);
	}
	return 0;
}

int func_214()//Position - 0xD80D
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_215()//Position - 0xD82A
{
	func_217(39, 1);
	func_217(40, 1);
	func_217(41, 1);
	func_217(42, 1);
	func_217(43, 1);
	func_217(44, 1);
	iLocal_357 = func_216(Local_85);
	iLocal_84 = PED::CREATE_PED(26, joaat("A_F_Y_BevHills_03"), Local_85, fLocal_88, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_84, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_84, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_84, 128, true);
	PED::SET_PED_KEEP_TASK(iLocal_84, true);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_84, false);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 7, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_84, 8, 0, 0, 0);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iLocal_84, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_84, false);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_84, "LACEY");
	if (Global_3 || bLocal_68)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_84, true);
	}
	if (PED::ADD_RELATIONSHIP_GROUP("CELEBRITY", &iLocal_67))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_84, iLocal_67);
	}
	iLocal_89 = VEHICLE::CREATE_VEHICLE(joaat("surano"), Local_90, fLocal_93, true, true, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_89, Local_90, false, false, true);
	ENTITY::SET_ENTITY_QUATERNION(iLocal_89, 0.1293f, -0.0323f, -0.1606f, 0.978f);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_89, false, 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_89, 10);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_89, 5f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_89, 3);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_89, true);
	AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_89, true);
	AUDIO::SET_VEH_RADIO_STATION(iLocal_89, AUDIO::GET_RADIO_STATION_NAME(1));
	if (func_24() == 1)
	{
		func_22(&Local_393, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_24() == 0)
	{
		func_22(&Local_393, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else
	{
		func_22(&Local_393, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_22(&Local_393, 3, iLocal_84, "LACEY", 0, 1);
	iLocal_373[0] = "idle_a";
	iLocal_373[1] = "idle_b";
	iLocal_373[2] = "idle_c";
	iLocal_373[3] = "idle_d";
	iLocal_373[4] = "idle_e";
	iLocal_373[5] = "idle_f";
	iLocal_373[6] = "idle_g";
	iLocal_373[7] = "idle_h";
	iLocal_373[8] = "idle_i";
	iLocal_558[0] = "MAG_2_ESCAPE_PAP_GET_CAR";
	iLocal_558[1] = "MAG_2_ESCAPE_PAP_CHASE";
	iLocal_558[2] = "MAG_2_ESCAPE_PAP_TAKE_ACTRESS_HOME";
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), true);
}

int func_216(struct<3> Param0)//Position - 0xDA94
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_ALPHA(iVar0, 0);
	HUD::SET_BLIP_DISPLAY(iVar0, 0);
	return iVar0;
}

void func_217(int iParam0, bool bParam1)//Position - 0xDAB6
{
	if (bParam1)
	{
		if (!func_221(iParam0, 2, 1))
		{
			func_220(iParam0, 2, 1);
		}
	}
	else if (func_221(iParam0, 2, 1))
	{
		func_218(iParam0, 2, 1);
	}
}

void func_218(int iParam0, int iParam1, bool bParam2)//Position - 0xDAED
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_90() == 0)
		{
			iVar0 = func_126(func_219(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_121(func_219(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

int func_219(int iParam0)//Position - 0xDB5D
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12514;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		case 60:
			return 11901;
			break;
		
		default:
			break;
	}
	return 14385;
}

void func_220(int iParam0, int iParam1, bool bParam2)//Position - 0xDF05
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_90() == 0)
		{
			iVar0 = func_126(func_219(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_121(func_219(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

int func_221(int iParam0, int iParam1, bool bParam2)//Position - 0xDF75
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100885.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_90() == 0)
		{
			return BitTest(func_126(func_219(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_222()//Position - 0xDFD5
{
	if (!iLocal_94)
	{
		func_230(&uLocal_95, joaat("surano"));
		func_230(&uLocal_95, joaat("prop_ld_test_01"));
		func_230(&uLocal_95, joaat("A_F_Y_BevHills_03"));
		func_230(&uLocal_95, joaat("A_M_Y_GenStreet_02"));
		func_230(&uLocal_95, joaat("vader"));
		func_230(&uLocal_95, joaat("cavalcade2"));
		func_230(&uLocal_95, joaat("prop_pap_camera_01"));
		func_227(&uLocal_95);
		iLocal_94 = 1;
	}
	if (!func_223(&uLocal_95))
	{
		return 0;
	}
	STREAMING::REQUEST_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REQUEST_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REQUEST_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REQUEST_ANIM_DICT(sLocal_372);
	HUD::REQUEST_ADDITIONAL_TEXT("ESCPAP", 0);
	if (((((((((STREAMING::HAS_ANIM_DICT_LOADED("random@escape_paparazzi@standing@") && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@pap_anims")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@peek")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@trans")) && STREAMING::HAS_ANIM_DICT_LOADED("random@paparazzi@wait")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@std@ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@low@front_ps@idle_panic")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_372)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Distant_Camera_Flash", false, -1))
	{
		return 1;
	}
	return 0;
}

int func_223(var uParam0)//Position - 0xE110
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_224(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_224(var uParam0)//Position - 0xE16C
{
	return func_225(*uParam0, "NULL", uParam0->f_1);
}

int func_225(char* sParam0, char* sParam1, int iParam2)//Position - 0xE181
{
	if (BitTest(sParam0, 30))
	{
		if (BitTest(sParam0, 29))
		{
			switch (func_226(sParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(sParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_226(var uParam0)//Position - 0xE26C
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_227(var uParam0)//Position - 0xE295
{
	func_228(uParam0, 9, -1, 0);
}

void func_228(var uParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xE2A7
{
	int iVar0;
	
	if (!func_229(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_229(int iParam0)//Position - 0xE361
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_230(var uParam0, int iParam1)//Position - 0xE400
{
	func_228(uParam0, 0, iParam1, 0);
}

int func_231()//Position - 0xE412
{
	if (!func_198(5))
	{
		return 1;
	}
	if (func_210())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_214())
		{
			return 0;
		}
	}
	if (func_204(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_232()//Position - 0xE474
{
	if ((Global_113799 == func_104() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113800)
	{
		return 1;
	}
	return 0;
}

void func_233(var uParam0)//Position - 0xE49F
{
	int iVar0;
	
	if (uParam0->f_31)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_100833.f_20, 2)) || BitTest(Global_100833.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						func_234(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_234(int* iParam0)//Position - 0xE51D
{
	func_235(iParam0, "NULL", iParam0->f_1);
}

void func_235(int* iParam0, char* sParam1, int iParam2)//Position - 0xE531
{
	if (BitTest(*iParam0, 30))
	{
		switch (func_226(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, BitTest(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_236(int iParam0)//Position - 0xE602
{
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_238(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113796 = 0;
	func_237();
}

void func_237()//Position - 0xE638
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_238(int iParam0)//Position - 0xE675
{
	Global_113799 = iParam0;
}

int func_239(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xE683
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152397)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_104();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_280())
		{
			return 0;
		}
	}
	Local_41 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_214())
			{
				return 0;
			}
		}
		if (!Global_113810.f_9088)
		{
			return 0;
		}
		if (func_85(0))
		{
			return 0;
		}
		if (func_210())
		{
			return 0;
		}
		if (func_279())
		{
			return 0;
		}
		if (Global_113799 != -1)
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_204(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_41.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_278(iParam3))
		{
			return 0;
		}
		if (func_26(func_24()))
		{
			if (func_277(func_24()) == 4 || func_277(func_24()) == 5)
			{
				return 0;
			}
		}
		if (func_26(func_24()))
		{
			if (!func_276(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_275(Global_113810.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113801) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_274())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_265(4))
		{
			return 0;
		}
		if (!func_198(5))
		{
			return 0;
		}
		if (func_264(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_264(0, 0))
		{
			return 0;
		}
		if (Global_32430)
		{
			return 0;
		}
		if (func_278(30) && !func_264(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_26(func_24()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113810.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113810.f_2366.f_539.f_2296[iVar4];
				if (func_263(iVar8))
				{
					if (func_241(iVar4))
					{
						if (!func_240(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_24() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_240(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xEA1D
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_241(int iParam0)//Position - 0xEA64
{
	int iVar0;
	
	iVar0 = Global_113810.f_2366.f_539.f_2296[iParam0];
	return func_242(iVar0);
}

int func_242(int iParam0)//Position - 0xEA85
{
	return func_243(iParam0, 1);
}

int func_243(int iParam0, int iParam1)//Position - 0xEA94
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_263(iParam0))
	{
		return 0;
	}
	func_244(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_244(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xEAE7
{
	func_245(func_256(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_245(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xEB05
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_255(iParam0, iParam1))
	{
		iVar0 = func_254(iParam1);
		iVar1 = func_252(iParam0);
		iVar2 = (func_252(iParam0) - func_252(iParam1));
		iVar3 = (func_254(iParam0) - func_254(iParam1));
		iVar4 = (func_251(iParam0) - func_251(iParam1));
		iVar5 = (func_250(iParam0) - func_250(iParam1));
		iVar6 = (func_249(iParam0) - func_249(iParam1));
		iVar7 = (func_248(iParam0) - func_248(iParam1));
	}
	else
	{
		iVar0 = func_254(iParam0);
		iVar1 = func_252(iParam1);
		iVar2 = (func_252(iParam1) - func_252(iParam0));
		iVar3 = (func_254(iParam1) - func_254(iParam0));
		iVar4 = (func_251(iParam1) - func_251(iParam0));
		iVar5 = (func_250(iParam1) - func_250(iParam0));
		iVar6 = (func_249(iParam1) - func_249(iParam0));
		iVar7 = (func_248(iParam1) - func_248(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_247(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_246(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_246(float fParam0, float fParam1, float fParam2)//Position - 0xED06
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_247(int iParam0, int iParam1)//Position - 0xED48
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_248(int iParam0)//Position - 0xEDEA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_249(int iParam0)//Position - 0xEDFD
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_250(int iParam0)//Position - 0xEE10
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_251(int iParam0)//Position - 0xEE23
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_252(int iParam0)//Position - 0xEE35
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_253(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_253(bool bParam0, int iParam1, int iParam2)//Position - 0xEE57
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_254(int iParam0)//Position - 0xEE6E
{
	return iParam0 & 15;
}

int func_255(int iParam0, int iParam1)//Position - 0xEE7B
{
	int iVar0;
	int iVar1;
	
	if (!func_263(iParam1) || !func_263(iParam0))
	{
		return 1;
	}
	iVar0 = func_252(iParam0);
	iVar1 = func_252(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_254(iParam0);
	iVar1 = func_254(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_251(iParam0);
	iVar1 = func_251(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_250(iParam0);
	iVar1 = func_250(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_249(iParam0);
	iVar1 = func_249(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_248(iParam0);
	iVar1 = func_248(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_256()//Position - 0xEF87
{
	var uVar0;
	
	func_262(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_261(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_260(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_259(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_258(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_257(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_257(var uParam0, int iParam1)//Position - 0xEFCD
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_258(var uParam0, int iParam1)//Position - 0xF053
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_259(var uParam0, int iParam1)//Position - 0xF086
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_254(*uParam0);
	iVar1 = func_252(*uParam0);
	if (iParam1 < 1 || iParam1 > func_247(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_260(var uParam0, int iParam1)//Position - 0xF0D7
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_261(var uParam0, int iParam1)//Position - 0xF111
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_262(var uParam0, int iParam1)//Position - 0xF14C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_263(int iParam0)//Position - 0xF188
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_248(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_249(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_250(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_252(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_254(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_251(iParam0);
	if (iVar5 < 1 || iVar5 > func_247(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_264(int iParam0, bool bParam1)//Position - 0xF264
{
	if (BitTest(Global_113810.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0)//Position - 0xF284
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_24();
				if (!func_26(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_273()) || Global_112857) || Global_32286) || func_272()) || func_19(8, -1)) || func_271()) || func_270()) || func_269()) || func_268()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_273()) || Global_32286) || func_272()) || func_19(8, -1)) || func_269()) || func_271()) || func_270()) || func_268()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_273()) || Global_112857) || Global_32286) || func_272()) || func_19(8, -1)) || func_269()) || func_271()) || func_270()) || func_268()) || Global_113810.f_7691.f_919[iVar0] == 5) || Global_43924 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_273()) || Global_112857) || Global_32286) || func_272()) || func_19(8, -1)) || func_271()) || func_270()) || func_268()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_273() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_19(8, -1)) || func_268()) || func_267()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_19(8, -1) || func_271()) || func_270()) || func_267()) || func_266())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_273()) || Global_32286) || func_272()) || func_19(8, -1)) || func_270()) || func_269()) || func_268()) || Global_113810.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_273()) || func_270()) || Global_112857) || Global_32286) || func_272()) || Global_44569) || func_19(8, -1)) || func_269()) || func_267()) || func_268()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_273()) || Global_112857) || Global_32286) || func_272()) || func_19(8, -1)) || func_269()) || func_267()) || func_271()) || func_270()) || func_268())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_266()//Position - 0xF9A1
{
	return Global_100872.f_1;
}

int func_267()//Position - 0xF9AF
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 13);
	}
	return 0;
}

int func_268()//Position - 0xF9D2
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_269()//Position - 0xF9EC
{
	if (Global_78950)
	{
		return 1;
	}
	else if (Global_63479 && !Global_63485)
	{
		return 1;
	}
	return 0;
}

bool func_270()//Position - 0xFA16
{
	return Global_100885.f_394 > 0;
}

bool func_271()//Position - 0xFA27
{
	return Global_100885.f_393 > 0;
}

var func_272()//Position - 0xFA38
{
	return Global_1575063;
}

int func_273()//Position - 0xFA44
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98291.f_44 == 1;
	}
	return 0;
}

int func_274()//Position - 0xFA60
{
	func_16();
	if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_275(int iParam0)//Position - 0xFA88
{
	return func_255(func_256(), iParam0);
}

int func_276(int iParam0, int iParam1, int iParam2)//Position - 0xFA9A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_24();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_277(int iParam0)//Position - 0xFB7E
{
	if (!func_26(iParam0))
	{
		return 7;
	}
	return Global_113810.f_7691.f_919[iParam0];
}

int func_278(int iParam0)//Position - 0xFBA2
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_280())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113810.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113810.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_279()//Position - 0xFBFA
{
	int iVar0;
	
	if (Global_32435)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_280()//Position - 0xFC3E
{
	int iVar0;
	
	if (Global_152686 == 2)
	{
		return 1;
	}
	else if (Global_152686 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_281(var uParam0, int iParam1)//Position - 0xFCF6
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

void func_282()//Position - 0xFD0D
{
	func_300(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-90f, -1488f, -50f, 55f, -1470f, 50f, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	func_295(&uLocal_95, 0);
	STREAMING::REMOVE_ANIM_DICT("random@escape_paparazzi@standing@");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@pap_anims");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@peek");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@trans");
	STREAMING::REMOVE_ANIM_DICT("random@paparazzi@wait");
	STREAMING::REMOVE_ANIM_DICT("veh@std@ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT("veh@low@front_ps@idle_panic");
	STREAMING::REMOVE_ANIM_DICT(sLocal_372);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (func_232())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_84) && !PED::IS_PED_INJURED(iLocal_84))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_84))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_84);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, true))
		{
			if (!PED::IS_PED_FLEEING(iLocal_84))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_84, 0, 0);
			}
		}
	}
	func_284(-1);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("vader"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_363, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_364, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_365, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(93.8361f, 92.1704f, 246.1673f) + Vector(6f, 6f, 6f), Vector(93.8361f, 92.1704f, 246.1673f) - Vector(6f, 6f, 6f), true, true);
	if (Global_32526)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	}
	func_283();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_283()//Position - 0xFE61
{
	Global_32522 = 0;
	Global_32523 = 0;
	Global_32525 = 0;
	Global_32526 = 0;
	Global_32527 = 0;
}

void func_284(int iParam0)//Position - 0xFE7D
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_104();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_232())
	{
		func_288(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113801 = MISC::GET_GAME_TIMER();
		func_287(30000);
		StringCopy(&cVar0, func_286(Global_113799, 1), 64);
		if (func_103(Global_113799) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113798, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113796, (MISC::GET_GAME_TIMER() - Global_113797), 0);
	}
	else if (BitTest(Global_113806, 0) && Global_113810.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113806, 0);
	}
	func_285(&Global_32343);
	Global_113800 = 0;
	func_238(-1);
}

void func_285(var uParam0)//Position - 0xFF2F
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43339)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43338 = 0;
	Global_43340 = 0;
	Global_43377 = 15;
	Global_63482 = 0;
	Global_63483 = 0;
}

char* func_286(int iParam0, bool bParam1)//Position - 0xFF6C
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_287(int iParam0)//Position - 0x10242
{
	Global_43928 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_288(int iParam0)//Position - 0x10254
{
	func_289(iParam0, 0, func_294(iParam0));
}

void func_289(int iParam0, int iParam1, int iParam2)//Position - 0x10269
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_256();
	func_292(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_291(iParam0, &uVar0);
	Var1 = { func_290(&uVar0) };
}

struct<16> func_290(var uParam0)//Position - 0x10298
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_250(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_249(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_248(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_251(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_254(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_252(*uParam0), 64);
	return Var0;
}

void func_291(int iParam0, var uParam1)//Position - 0x10367
{
	Global_113810.f_24998.f_43[iParam0] = *uParam1;
}

void func_292(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1037F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_252(*uParam0);
	iVar1 = func_254(*uParam0);
	iVar2 = func_251(*uParam0);
	iVar3 = func_250(*uParam0);
	iVar4 = func_249(*uParam0);
	iVar5 = func_248(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_247(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_247(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_293(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_293(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10501
{
	func_262(uParam0, iParam1);
	func_261(uParam0, iParam2);
	func_260(uParam0, iParam3);
	func_258(uParam0, iParam5);
	func_259(uParam0, iParam4);
	func_257(uParam0, iParam6);
}

int func_294(int iParam0)//Position - 0x10539
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_295(var uParam0, bool bParam1)//Position - 0x106DC
{
	int iVar0;
	
	if (!bParam1)
	{
		func_297(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_296(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

void func_296(var uParam0)//Position - 0x1071C
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

void func_297(var uParam0)//Position - 0x1072D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			func_298(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_298(var uParam0)//Position - 0x10763
{
	func_299(*uParam0, "NULL", uParam0->f_1);
}

void func_299(int iParam0, char* sParam1, int iParam2)//Position - 0x10778
{
	if (BitTest(iParam0, 30))
	{
		switch (func_226(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, BitTest(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_300(bool bParam0)//Position - 0x10832
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_217(iVar0, bParam0);
		iVar0++;
	}
}

