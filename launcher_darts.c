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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
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
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	struct<16> Local_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_67 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	float fLocal_91 = 0f;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	char* sLocal_99 = NULL;
	float fLocal_100 = 0f;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int* iLocal_105 = NULL;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	struct<3> Local_109 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	float fLocal_115 = 0f;
	int iLocal_116 = 0;
	struct<13> Local_117 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	struct<3> Local_132 = { 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	struct<7> Local_147 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<18> Var0;
	bool bVar23;
	float fVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	
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
	sLocal_18 = "NULL";
	fLocal_19 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_43 = { 500f, 500f, 500f };
	iLocal_94 = -1;
	iLocal_95 = 2050;
	iLocal_96 = -1;
	iLocal_97 = -1;
	sLocal_99 = "CC_SUBSTR" /* GXT: ~INPUT_CONTEXT~ */;
	fLocal_100 = 125f;
	iLocal_101 = 1;
	iLocal_103 = 263;
	fLocal_115 = 4f;
	bLocal_130 = true;
	bLocal_144 = true;
	iLocal_145 = -1;
	Var0.f_1 = 5;
	Var0.f_17 = 5;
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
	{
		Local_88 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_0, true) };
		iLocal_154 = iScriptParam_0;
		Var0.f_1[0 /*3*/] = { Local_88 };
		iLocal_116 = ENTITY::GET_ENTITY_MODEL(iLocal_154);
	}
	else
	{
		iLocal_154 = iScriptParam_0;
		Var0.f_1[0 /*3*/] = { Local_88 };
	}
	uLocal_84 = uLocal_84;
	Local_67 = { Local_67 };
	bVar23 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_121(1);
	}
	iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_93 = 0;
	func_119(&Global_112460, 0);
	func_118();
	if (func_117(uLocal_92, 1))
	{
		iLocal_98 = 10;
	}
	else
	{
		iLocal_98 = 9;
	}
	while (!Global_38716)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_117(uLocal_92, 8))
	{
		if (!func_115(iLocal_98))
		{
			if (func_114(0, iLocal_97))
			{
				func_121(0);
			}
			else
			{
				func_121(1);
			}
		}
	}
	if (iLocal_97 != -1)
	{
		if (!func_114(0, iLocal_97))
		{
			func_121(1);
		}
	}
	if (func_117(uLocal_92, 8388608))
	{
		func_121(1);
	}
	if (func_117(uLocal_92, 524288) && (func_113() && !func_112()))
	{
		func_121(1);
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_117(uLocal_92, 4194304))
	{
		if (iLocal_103 != 263)
		{
			func_111(iLocal_103, 1, 0);
			iLocal_103 = 263;
		}
		func_110(10);
	}
	while (true)
	{
		if (!func_117(uLocal_92, 268435456))
		{
			fVar24 = 0f;
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0.f_1[0 /*3*/], &fVar24, false, false))
			{
				if (fVar24 != 0f)
				{
					Var0.f_1[0 /*3*/].f_2 = fVar24;
					func_109(&uLocal_92, 268435456);
				}
			}
		}
		iLocal_83 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_117(uLocal_92, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
			{
				func_121(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83) && !ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
		{
			Local_85 = { ENTITY::GET_ENTITY_COORDS(iLocal_83, true) };
			fLocal_91 = SYSTEM::VDIST2(Local_85, Var0.f_1[0 /*3*/]);
			fLocal_91 = fLocal_91;
			Local_109 = { Local_85 };
			Local_112 = { Var0.f_1[0 /*3*/] };
			Local_109.f_2 = 0f;
			Local_112.f_2 = 0f;
			fLocal_108 = SYSTEM::VDIST2(Local_109, Local_112);
			switch (iLocal_93)
			{
				case 0:
					if (func_115(iLocal_98) || (func_117(uLocal_92, 16) && !func_117(uLocal_92, 524288)))
					{
						iLocal_96 = -1;
						func_108();
						func_110(1);
					}
					else
					{
						if (fLocal_108 > (fLocal_100 * fLocal_100))
						{
							if (iLocal_103 != 263)
							{
								func_111(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
							func_110(10);
						}
						if ((Local_85.f_2 - Var0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_107())
					{
						iLocal_101 = iLocal_101;
						func_110(3);
					}
					else
					{
						func_108();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_121(1);
						return;
					}
					if (!func_115(iLocal_98))
					{
						if (!func_117(uLocal_92, 8))
						{
							bVar25 = true;
							if (MISC::ARE_STRINGS_EQUAL(&(Global_100833.f_3), &Local_67))
							{
								Local_67 = { Local_51 };
								bVar25 = false;
							}
							if (bVar25)
							{
								func_121(0);
								break;
							}
						}
					}
					if (!func_117(uLocal_92, 4))
					{
						func_104();
						func_109(&uLocal_92, 4);
					}
					if (fLocal_108 > (fLocal_100 * fLocal_100) && !Global_100867)
					{
						if (iLocal_103 != 263)
						{
							if (func_103(6) && !func_102(iLocal_103))
							{
							}
							else
							{
								func_111(iLocal_103, 1, 0);
								iLocal_103 = 263;
							}
						}
						func_110(10);
					}
					else
					{
						Local_67 = { Local_51 };
						bVar26 = !func_117(uLocal_92, 64);
						func_119(&uLocal_92, 128);
						if (!func_101(3) && !Global_100867)
						{
							if (func_117(uLocal_92, 2097152))
							{
								if ((!func_117(uLocal_92, 1) || !ENTITY::DOES_ENTITY_EXIST(func_100())) && !Global_100867)
								{
									func_110(10);
									break;
								}
							}
						}
						if (func_117(uLocal_92, 524288) && (func_113() && !func_112()))
						{
							func_121(1);
						}
						if (func_99())
						{
							func_121(1);
						}
						if ((!func_91(6) || Global_112857) || func_90())
						{
							bVar26 = false;
						}
						if (func_117(uLocal_92, 1))
						{
							if (!func_89())
							{
								func_87(&uLocal_92, 128);
								bVar26 = false;
							}
						}
						if (func_86(1))
						{
							bVar26 = false;
						}
						if (Global_78689)
						{
							bVar26 = false;
						}
						if (func_85())
						{
							bVar26 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar26 = false;
						}
						if (func_84() || func_83(8, -1))
						{
							bVar26 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar26 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar26 = false;
						}
						if (func_82(0) || func_81())
						{
							bVar26 = false;
						}
						if (bVar26)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Var0.f_1[0 /*3*/], fLocal_115, fLocal_115, 2f, false, true, iLocal_101))
							{
								bVar26 = false;
							}
							if (ENTITY::IS_ENTITY_DEAD(iLocal_154, false))
							{
								iLocal_154 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_88, 2f, iLocal_116, true, false, true);
								func_87(&uLocal_92, 128);
								bVar26 = false;
							}
							else
							{
								Local_135 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_154, Local_132) };
								if (func_80(&Local_117, Local_85, Local_135, iLocal_154))
								{
									bLocal_130 = false;
								}
								else if (Local_117.f_12 == 1)
								{
									bLocal_130 = true;
								}
								if (bLocal_130)
								{
									bVar26 = false;
								}
							}
							if (!iLocal_131)
							{
								bVar26 = false;
							}
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_138)
							{
								bVar26 = false;
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar26 = false;
							}
							if (bVar26)
							{
								PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
								if (func_79(uLocal_84))
								{
									if (iLocal_94 == -1)
									{
										func_78(&iLocal_94, 4, sLocal_99, 0, 0, 0, 0);
										func_87(&uLocal_92, 2048);
									}
									else if (!func_117(uLocal_92, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_77(&iLocal_94);
										func_119(&uLocal_92, 2048);
									}
									if (func_75(iLocal_94, 1))
									{
										sLocal_99 = sLocal_99;
										func_77(&iLocal_94);
										func_119(&uLocal_92, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_67);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
										func_110(5);
									}
								}
								else
								{
									sLocal_99 = sLocal_99;
									func_77(&iLocal_94);
									func_119(&uLocal_92, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_67);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56);
									func_110(5);
								}
							}
						}
						if (!bVar26)
						{
							if (iLocal_94 != -1)
							{
								func_77(&iLocal_94);
								func_119(&uLocal_92, 2048);
								HUD::CLEAR_HELP(false);
							}
						}
					}
					func_39();
					break;
				
				case 5:
					PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_67))
					{
						if (iLocal_94 != -1)
						{
							func_77(&iLocal_94);
						}
						iVar27 = 2;
						bVar23 = false;
						if (func_117(uLocal_92, 1))
						{
							if (func_103(6) || func_103(7))
							{
								iVar27 = 1;
								bVar23 = true;
							}
						}
						if (iVar27 != 1)
						{
							iVar27 = func_36(&iLocal_96, 6, iLocal_98, 0, 0);
						}
						if (iVar27 == 1)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_35();
							if (Global_44569)
							{
								func_26(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 56);
							iLocal_50 = func_25();
							func_87(&uLocal_92, 2);
							func_110(6);
							func_21(&iLocal_105);
							if (iLocal_97 != -1)
							{
								func_20(iLocal_97);
								func_17(func_19(iLocal_97), 0, 0);
							}
						}
						else if (iVar27 == 2)
						{
							func_16();
						}
						else if (iVar27 == 0)
						{
							func_110(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (func_117(Global_112460, 262144))
					{
						func_119(&Global_112460, 262144);
						func_15();
					}
					if (func_117(uLocal_92, 2097152))
					{
						if (!func_101(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
						{
							func_110(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_11(&iLocal_105) * 1000f)), iLocal_97, false);
						func_10(&iLocal_105);
						func_119(&uLocal_92, 256);
						func_7();
						if (bVar23)
						{
							func_119(&uLocal_92, 2);
						}
						else if (func_117(uLocal_92, 2))
						{
							if (func_117(Global_112460, 0))
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_119(&uLocal_92, 2);
							}
							else
							{
								func_6(&iLocal_96);
								iLocal_96 = -1;
								func_119(&uLocal_92, 2);
							}
						}
						func_110(0);
						if (iLocal_97 != -1)
						{
							if (func_117(Global_112460, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_100870, 0);
								func_5(func_19(iLocal_97), 0, Global_100870, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_97), 0, Global_100870, 0);
								func_5(func_19(iLocal_97), 0, Global_100870, 0, 0);
							}
						}
						func_4();
						func_119(&Global_112460, 0);
						if (func_117(uLocal_92, 16777216))
						{
							func_121(1);
						}
						if (iLocal_97 != -1)
						{
							if (Global_113810.f_9088)
							{
								if (!func_114(0, iLocal_97))
								{
									func_121(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_110(0);
					break;
				
				case 10:
					func_121(1);
					break;
				
				case 9:
					if (fLocal_108 > (fLocal_100 * fLocal_100))
					{
						if (iLocal_103 != 263)
						{
							func_111(iLocal_103, 1, 0);
							iLocal_103 = 263;
						}
						func_110(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_103 != 263)
					{
						func_111(iLocal_103, 0, 0);
					}
					if (iLocal_94 != -1)
					{
						func_77(&iLocal_94);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_99))
					{
						if (func_1(sLocal_99))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					func_110(4);
					break;
				
				case 4:
					if ((iLocal_102 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_104 == 2)
							{
								if (iLocal_104 == 2)
								{
									if (func_115(iLocal_98) && func_114(0, iLocal_97))
									{
										func_118();
										if (iLocal_103 != 263)
										{
											func_111(iLocal_103, 1, 0);
										}
										func_110(0);
									}
								}
							}
							else if (iLocal_104 == 0)
							{
								if (fLocal_108 > (fLocal_100 * fLocal_100))
								{
									if (iLocal_103 != 263)
									{
										func_111(iLocal_103, 1, 0);
										iLocal_103 = 263;
									}
									func_110(10);
								}
							}
							else if (iLocal_104 == 1)
							{
								if (fLocal_108 > ((80f + 5f) * (80f + 5f)))
								{
									func_118();
									if (iLocal_103 != 263)
									{
										func_111(iLocal_103, 1, 0);
									}
									func_110(0);
								}
							}
						}
						else
						{
							func_111(iLocal_103, 1, 0);
						}
					}
					else
					{
						iLocal_102++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)//Position - 0xAD8
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()//Position - 0xAEB
{
	if (bLocal_144)
	{
		if (iLocal_139 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_139);
		}
		if (iLocal_140 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_140);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_dart_1"));
	}
}

void func_3()//Position - 0xB19
{
}

void func_4()//Position - 0xB21
{
}

void func_5(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xB29
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_97883))
	{
		return;
	}
	if (MISC::COMPARE_STRINGS(sParam0, &Global_97883, false, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, iParam2, bParam3, bParam4, Global_94990);
	StringCopy(&Global_97883, "", 64);
}

void func_6(int iParam0)//Position - 0xB6D
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_43339)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_43338 = 0;
	Global_43340 = 0;
	Global_43377 = 15;
	Global_63482 = 0;
	Global_63483 = 0;
}

void func_7()//Position - 0xBAA
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_9())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || func_8())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR" /* GXT: Playing story */, 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

bool func_8()//Position - 0xBEC
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_9()//Position - 0xC02
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_10(int* iParam0)//Position - 0xC18
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_11(int* iParam0)//Position - 0xC2E
{
	if (func_14(iParam0))
	{
		if (func_13(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_12(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_12(bool bParam0)//Position - 0xC6A
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_13(var uParam0)//Position - 0xCC2
{
	return BitTest(*uParam0, 2);
}

bool func_14(var uParam0)//Position - 0xCCF
{
	return BitTest(*uParam0, 1);
}

int func_15()//Position - 0xCDC
{
	return 1;
}

void func_16()//Position - 0xCE5
{
}

void func_17(char* sParam0, int iParam1, int iParam2)//Position - 0xCED
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97883))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_97883, 0, 0, false, true, false);
		StringCopy(&Global_97883, "", 64);
	}
	StringCopy(&Global_97883, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(0));
}

int func_18(bool bParam0)//Position - 0xD2E
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

char* func_19(int iParam0)//Position - 0xD56
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_20(int iParam0)//Position - 0xE94
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_9())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || func_8())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_21(int* iParam0)//Position - 0xEEB
{
	if (!func_14(iParam0))
	{
		func_24(iParam0);
	}
	else
	{
		func_22(iParam0);
	}
}

void func_22(int* iParam0)//Position - 0xF0C
{
	func_23(iParam0, 0f);
}

void func_23(int* iParam0, float fParam1)//Position - 0xF1B
{
	iParam0->f_1 = (func_12(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_24(int* iParam0)//Position - 0xF46
{
	if (!func_14(iParam0))
	{
		func_22(iParam0);
	}
}

int func_25()//Position - 0xF5E
{
	struct<3> Var0;
	int iVar3;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_154, 2) };
	Local_147 = { ENTITY::GET_ENTITY_COORDS(iLocal_154, true) };
	Local_147.f_3 = Var0.f_2;
	Local_147.f_4 = iLocal_154;
	if (!BitTest(Global_113771, 10))
	{
		Local_147.f_6 = iLocal_140;
		Local_147.f_5 = iLocal_141;
	}
	else
	{
		Local_147.f_6 = iLocal_139;
		Local_147.f_5 = iLocal_142;
	}
	iVar3 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&Local_51, &Local_147, 7, iLocal_95);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_51);
	return iVar3;
}

void func_26(int iParam0)//Position - 0xFC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_34(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_44355[iVar0 /*5*/];
		func_29(1, iVar1, 1);
		return;
	}
	iVar2 = func_28(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_27(iVar2);
}

void func_27(int iParam0)//Position - 0x101E
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_44329[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_44329[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_44567 = 0;
		}
	}
	Global_44329[iParam0 /*5*/] = 13;
	Global_44329[iParam0 /*5*/].f_1 = 0;
	Global_44329[iParam0 /*5*/].f_2 = 0;
	Global_44329[iParam0 /*5*/].f_3 = 0;
	Global_44329[iParam0 /*5*/].f_4 = 0;
	Global_44327 = (Global_44327 - 1);
	if (Global_44327 < 0)
	{
		Global_44327 = 0;
	}
}

int func_28(int iParam0)//Position - 0x10A1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_44329[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_29(int iParam0, int iParam1, int iParam2)//Position - 0x10D2
{
	func_30(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10E7
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_32(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_31();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44436[iVar0 /*6*/] = iParam0;
	Global_44436[iVar0 /*6*/].f_1 = iParam1;
	Global_44436[iVar0 /*6*/].f_2 = iParam2;
	Global_44436[iVar0 /*6*/].f_3 = iParam3;
	Global_44436[iVar0 /*6*/].f_4 = iParam4;
	Global_44436[iVar0 /*6*/].f_5 = iParam5;
}

int func_31()//Position - 0x1169
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_44436[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x119A
{
	if (func_33(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x11B5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_44436[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_44436[iVar0 /*6*/])
			{
				if (iParam1 == Global_44436[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_34(int iParam0)//Position - 0x1201
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44355[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44355[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_35()//Position - 0x124A
{
	if (Global_9175[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9175[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9175[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9175[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_9175[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_9175[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_8370, 25);
	MISC::SET_BIT(&Global_8371, 11);
}

int func_36(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x12C7
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
		if (func_38(0))
		{
			return 0;
		}
		Global_43341++;
		*iParam0 = Global_43341;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23251.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43377 = iParam2;
		Global_43339 = *iParam0;
		Global_43340 = iParam4;
		Global_43338 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_43338 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43338)
			{
				if (Global_43344[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43339 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_115(iParam2))
		{
			return 0;
		}
		if (Global_43338 == 8)
		{
			return 0;
		}
		Global_43341++;
		*iParam0 = Global_43341;
		Global_43344[Global_43338 /*4*/] = Global_43341;
		Global_43344[Global_43338 /*4*/].f_1 = iParam1;
		Global_43344[Global_43338 /*4*/].f_2 = iParam2;
		Global_43344[Global_43338 /*4*/].f_3 = 0;
		Global_43338++;
		if (iParam4 != 0)
		{
			func_37(iParam0, iParam4);
		}
	}
	return 2;
}

void func_37(var uParam0, int iParam1)//Position - 0x13FE
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

int func_38(int iParam0)//Position - 0x144D
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	if (func_115(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_39()//Position - 0x146F
{
	var uVar0[25];
	int iVar26;
	int iVar27;
	bool bVar28;
	struct<3> Var29;
	float fVar32;
	
	bVar28 = false;
	if (bLocal_144)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var29 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		fVar32 = SYSTEM::VDIST2(Var29, Local_88);
		if (iLocal_145 == 0)
		{
			if (fVar32 < (10f * 10f))
			{
				iLocal_145 = 1;
				if (!func_103(6) && !func_103(7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_141, false);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_141, iLocal_142, -1, 2049, 3);
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_141, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_142, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, false);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_142, iLocal_141, -1, 2049, 3);
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_142, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
					}
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_141, false);
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1991.6766f, 3044.9565f, 46.21505f, 0.5f, true))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_141, 1991.6766f, 3044.9565f, 46.21505f, 0.5f, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_141, 1991.6766f, 3044.9565f, 46.21505f, 1f, 20000, 0.25f, 0, 40000f);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_141);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_142, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, false);
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1990.3704f, 3045.1213f, 46.21502f, 0.5f, true))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_142, 1990.3704f, 3045.1213f, 46.21502f, 0.5f, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_142, 1990.3704f, 3045.1213f, 46.21502f, 1f, 20000, 0.25f, 0, 40000f);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_142);
					}
				}
			}
		}
		else if (iLocal_145 == 1)
		{
			if (fVar32 >= (10f * 10f))
			{
				iLocal_145 = 0;
				if (!func_103(6) && !func_103(7))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
					{
						TASK::TASK_STAND_STILL(iLocal_141, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_141))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_141, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_142, false))
					{
						TASK::TASK_STAND_STILL(iLocal_142, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_142))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, true);
						}
					}
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_141, 1991.6766f, 3044.9565f, 46.21505f, true, false, false, true);
						TASK::TASK_STAND_STILL(iLocal_141, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_141))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_141, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_142, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_142, 1990.3704f, 3045.1213f, 46.21502f, true, false, false, true);
						TASK::TASK_STAND_STILL(iLocal_142, -1);
						if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_142))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, true);
						}
					}
				}
			}
		}
	}
	if (!iLocal_157)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0)) || PED::IS_ANY_PED_SHOOTING_IN_AREA(937.0616f, -117.8927f, 72.9163f, 1021.8488f, -120.5357f, 72.9163f, true, true)) || MISC::IS_PROJECTILE_IN_AREA(1991.4733f, 3045.9805f, 49.532f, 1996.9056f, 3052.1697f, 46.3392f, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_141, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_142, false))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				}
				bVar28 = true;
			}
			else
			{
				iVar26 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
				iVar27 = 0;
				while (iVar27 < iVar26)
				{
					if (!PED::IS_PED_INJURED(uVar0[iVar27]))
					{
						if (PED::IS_PED_IN_MELEE_COMBAT(uVar0[iVar27]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uVar0[iVar27]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_141, false))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_141, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_142, false))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							bVar28 = true;
						}
					}
					iVar27++;
				}
			}
		}
		if (!func_103(6) && !func_103(7))
		{
			if (!PED::IS_PED_INJURED(iLocal_141) && !PED::IS_PED_INJURED(iLocal_142))
			{
				if (PED::IS_PED_FLEEING(iLocal_141) || PED::IS_PED_FLEEING(iLocal_142))
				{
					bVar28 = true;
				}
			}
			else
			{
				bVar28 = true;
			}
		}
		if (bVar28)
		{
			if (func_102(func_72()))
			{
				iLocal_157 = 1;
				func_71(0);
			}
			if (iLocal_159)
			{
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro");
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro_alt1");
				iLocal_159 = 0;
				iLocal_131 = 0;
			}
		}
	}
	if (iLocal_146 == 1)
	{
		if (!INTERIOR::IS_VALID_INTERIOR(iLocal_155))
		{
			iLocal_155 = INTERIOR::GET_INTERIOR_AT_COORDS(-573.3155f, 291.2963f, 79.5509f);
		}
		else if (iLocal_155 == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
		{
			func_40(140, 3);
			func_40(139, 3);
			if (!PED::IS_PED_INJURED(iLocal_141) && !PED::IS_PED_INJURED(iLocal_142))
			{
				if (iLocal_158)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, false);
					iLocal_158 = 0;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_141) && !PED::IS_PED_INJURED(iLocal_142))
		{
			if (!iLocal_158)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, true);
				iLocal_158 = 1;
			}
		}
	}
	else if (iLocal_146 == 2)
	{
		if (!INTERIOR::IS_VALID_INTERIOR(iLocal_156))
		{
			iLocal_156 = INTERIOR::GET_INTERIOR_AT_COORDS(1995.6138f, 3049.8774f, 46.2153f);
		}
		else if (iLocal_156 == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(iLocal_141) && !PED::IS_PED_INJURED(iLocal_142))
			{
				if (iLocal_158)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, false);
					iLocal_158 = 0;
				}
			}
			if (!iLocal_159)
			{
				STREAMING::REQUEST_ANIM_DICT("mini@dartsintro");
				STREAMING::REQUEST_ANIM_DICT("mini@dartsintro_alt1");
				iLocal_159 = 1;
			}
			if (iLocal_159)
			{
				if (!iLocal_131)
				{
					if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsintro") || !STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsintro_alt1"))
					{
					}
					else
					{
						iLocal_131 = 1;
					}
				}
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_141) && !PED::IS_PED_INJURED(iLocal_142))
			{
				if (!iLocal_158)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, true);
					iLocal_158 = 1;
				}
			}
			if (iLocal_159)
			{
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro");
				STREAMING::REMOVE_ANIM_DICT("mini@dartsintro_alt1");
				iLocal_159 = 0;
				iLocal_131 = 0;
			}
		}
	}
}

void func_40(int iParam0, int iParam1)//Position - 0x1A60
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_78689)
		{
			iVar0 = Global_42911[iParam0];
		}
		else
		{
			iVar0 = Global_113810.f_7264[iParam0];
		}
		if (iVar0 != iParam1 || BitTest(Global_38737[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_38746[(iParam0 / 32)]), (iParam0 % 32));
				Global_39209[iParam0] = iParam1;
			}
			else if (Global_78689)
			{
				Global_42911[iParam0] = iParam1;
			}
			else
			{
				Global_113810.f_7264[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
			func_42(iParam0);
			if (BitTest(Global_38737[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_41(iParam0);
			}
		}
	}
}

void func_41(int iParam0)//Position - 0x1B4D
{
	if (!BitTest(Global_39680.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_39680.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_39680[Global_39680.f_227] = iParam0;
		Global_39680.f_227++;
	}
}

void func_42(int iParam0)//Position - 0x1B98
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!func_68())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_67(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		func_53(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((BitTest(Global_38746[(iParam0 / 32)], (iParam0 % 32)) && Global_39209[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_38746[(iParam0 / 32)]), (iParam0 % 32));
		Global_38755[iParam0] = 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38982[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_100885.f_391 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_100885.f_391 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_100885.f_391;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_38746[(iParam0 / 32)]), (iParam0 % 32));
					Global_39209[iParam0] = 3;
					MISC::SET_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_38982[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_38746[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_39209[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113810.f_9088)
		{
			iVar9 = func_50(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_103(14))
		{
			iVar9 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_43())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_113810.f_7264[iParam0];
	}
	if (Global_39436[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (BitTest(Global_38737[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_38746[(iParam0 / 32)], (iParam0 % 32)) || (Global_38755[iParam0] == 0 && Global_39209[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_38736)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar9)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
			Global_39436[iParam0] = iVar9;
		}
	}
	if (BitTest(Global_38746[(iParam0 / 32)], (iParam0 % 32)) && Global_39209[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
		func_41(iParam0);
		if (Global_38755[iParam0] < 2)
		{
			Global_38755[iParam0]++;
		}
	}
}

int func_43()//Position - 0x205D
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	switch (func_44())
	{
		case 0:
			if (Global_113810.f_9088.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_113810.f_9088.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_113810.f_9088.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_44()//Position - 0x20DC
{
	func_45();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_45()//Position - 0x20F5
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_48(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_47(PLAYER::PLAYER_PED_ID());
			if (func_46(iVar0) && (!func_103(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_46(Global_113810.f_2366.f_539.f_4321))
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

bool func_46(bool bParam0)//Position - 0x21F2
{
	return bParam0 < 3;
}

int func_47(int iParam0)//Position - 0x21FE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)//Position - 0x223B
{
	if (func_46(iParam0))
	{
		return func_49(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_49(int iParam0)//Position - 0x2260
{
	return Global_2058[iParam0 /*29*/];
}

int func_50(int iParam0)//Position - 0x226F
{
	bool bVar0;
	
	bVar0 = func_44();
	if (func_51(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (BitTest(Global_113810.f_7232[5], 0) || BitTest(Global_113810.f_7232[6], 0))
			{
				return 0;
			}
		}
		if (func_46(bVar0))
		{
			if (BitTest(Global_95840[5], bVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (bVar0 == 0)
			{
				if (BitTest(Global_113810.f_7232[0], 0))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (BitTest(Global_95840[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113810.f_7232[5], 0))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (BitTest(Global_95840[5], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113810.f_7232[6], 0))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (BitTest(Global_95840[6], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113810.f_7232[2], 0))
				{
					return 0;
				}
				if (func_46(bVar0))
				{
					if (BitTest(Global_95840[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (BitTest(Global_113810.f_7232[1], 0))
				{
					return 0;
				}
				if (func_46(bVar0))
				{
					if (BitTest(Global_95840[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113810.f_7232[3], 0))
				{
					return 0;
				}
			}
			if (func_46(bVar0))
			{
				if (BitTest(Global_95840[3], bVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_51(int iParam0)//Position - 0x2497
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_52(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_52(int iParam0)//Position - 0x2503
{
	return iParam0;
}

void func_53(int iParam0, var uParam1)//Position - 0x250D
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_56();
	iVar1 = func_55(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_54(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_113810.f_7264[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_54(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_113810.f_7264[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_54(iParam0))
			{
				if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0) && !Global_113810.f_9088.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_113810.f_7264[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_113810.f_9088.f_99.f_58[4])
				{
					Global_113810.f_7264[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (Global_113810.f_9088.f_99.f_58[4])
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113810.f_7264[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113810.f_7264[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_54(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_113810.f_7264[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_54(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_54(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) == 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) > 0)
			{
				Global_113810.f_7264[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[70 /*34*/].f_6) == 0)
			{
				if (!func_54(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("omega2")) == 0)
			{
				if (!func_54(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_54(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[26 /*34*/].f_6) == 0)
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_54(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[43 /*34*/].f_6) == 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_54(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 193:
			if (!func_54(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[93 /*34*/].f_6) > 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_54(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 80:
			if (!func_54(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[8 /*34*/].f_6) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[10 /*34*/].f_6) == 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_54(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[47 /*34*/].f_6) == 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[70 /*34*/].f_6) == 0)
			{
				if (!func_54(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[48 /*34*/].f_6) == 0)
			{
				if (!func_54(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[39 /*34*/].f_6) == 0)
			{
				if (!func_54(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 216:
			if (!func_54(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 217:
		case 218:
			if (!func_54(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_54(iParam0))
			{
				Global_113810.f_7264[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
	}
}

bool func_54(int iParam0)//Position - 0x2EA5
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_67(iParam0) };
	iVar7 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_55(int iParam0)//Position - 0x2ED9
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

var func_56()//Position - 0x2EEC
{
	var uVar0;
	
	func_66(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_65(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_64(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_59(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_58(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_57(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_57(var uParam0, int iParam1)//Position - 0x2F32
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

void func_58(var uParam0, int iParam1)//Position - 0x2FB8
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_59(var uParam0, int iParam1)//Position - 0x2FEB
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_63(*uParam0);
	iVar1 = func_61(*uParam0);
	if (iParam1 < 1 || iParam1 > func_60(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_60(int iParam0, int iParam1)//Position - 0x303C
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

var func_61(int iParam0)//Position - 0x30DE
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_62(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_62(bool bParam0, int iParam1, int iParam2)//Position - 0x3100
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_63(var uParam0)//Position - 0x3117
{
	return uParam0 & 15;
}

void func_64(var uParam0, int iParam1)//Position - 0x3124
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_65(var uParam0, int iParam1)//Position - 0x315E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_66(var uParam0, int iParam1)//Position - 0x3199
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_67(int iParam0)//Position - 0x31D5
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.8568f, -1115.7416f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.9518f, 3725.1536f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.8732f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.7817f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.7518f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.4758f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.9832f, 4821.7407f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.2817f, 4819.4844f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.6613f, 2705.4458f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.9652f, 2706.9636f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.5444f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.4065f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.9136f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.4349f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.0222f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.5358f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.7819f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.2007f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.1123f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.4541f, -1424.0079f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.2856f, -1650.5967f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.7888f, 1074.7668f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = joaat("DOORHASH_T_TRAILER_CS");
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.7874f, 3824.5537f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.8765f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.3054f, 2645.2422f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.6542f, 2645.2422f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.6917f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.5471f, -1975.4354f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.0791f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.3069f, -2018.5613f, 41.6289f };
			Var0.f_5 = -726993043;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.3529f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.9326f, -2748.1675f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.8408f, -2746.4888f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.1199f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.5161f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.6201f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.9744f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.2578f, -2079.9495f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.4019f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.2853f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.9567f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.4453f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.2217f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.6848f, 3683.9302f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.6055f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.4951f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.1763f, 3751.5056f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.9371f, 3753.4202f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.5391f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.5391f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.2695f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.8259f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.0089f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.0708f, 2691.5046f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.8452f, 1081.3917f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.8115f, 1083.7784f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.9045f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.3037f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.2695f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.2695f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.2095f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.4927f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.8137f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_68()//Position - 0x5DE0
{
	if ((func_70() == -1 || func_70() == 999) && !func_69() == 0)
	{
		return 1;
	}
	return 0;
}

int func_69()//Position - 0x5E10
{
	return Global_32284;
}

int func_70()//Position - 0x5E1B
{
	return Global_32283;
}

void func_71(int iParam0)//Position - 0x5E26
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_104 = iParam0;
	iLocal_102 = 0;
	iLocal_93 = 7;
}

int func_72()//Position - 0x5E47
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { Local_88 };
		fVar3 = 999999f;
		iVar5 = 1;
		iVar5 = 0;
		while (iVar5 < func_74() + 1)
		{
			if (iVar5 > 0)
			{
				fVar4 = SYSTEM::VDIST2(Var0, func_73(iVar5));
				if (fVar3 > fVar4)
				{
					fVar3 = fVar4;
				}
			}
			iVar5++;
		}
	}
	return 67;
}

Vector3 func_73(int iParam0)//Position - 0x5EA8
{
	switch (iParam0)
	{
		case 1:
			return -572.041f, 294.196f, 79.9374f;
		
		case 2:
			return 1992.27f, 3050.6f, 47.89f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_74()//Position - 0x5EEA
{
	return 1;
}

int func_75(int iParam0, bool bParam1)//Position - 0x5EF3
{
	int iVar0;
	
	iVar0 = func_76(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_82(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44123[iVar0 /*32*/] == 1 && Global_44123[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_44123[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_44123[iVar0 /*32*/].f_5 = 1;
			Global_44123[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_44123[iVar0 /*32*/] == 0)
			{
			}
			if (Global_44123[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x5FAB
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_44123[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_77(int iParam0)//Position - 0x5FE6
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_76(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44123[iVar0 /*32*/])
		{
			Global_44123[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_78(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x603D
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_77(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_44123[iVar0 /*32*/])
		{
			Global_44123[iVar0 /*32*/] = 1;
			Global_44123[iVar0 /*32*/].f_1 = Global_44324;
			Global_44324++;
			Global_44123[iVar0 /*32*/].f_4 = 0;
			Global_44123[iVar0 /*32*/].f_29 = 0;
			Global_44123[iVar0 /*32*/].f_5 = 0;
			Global_44123[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_44123[iVar0 /*32*/].f_8), sParam2, 16);
			Global_44123[iVar0 /*32*/].f_6 = iParam3;
			Global_44123[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44123[iVar0 /*32*/].f_7 = 0;
			Global_44123[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44123[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_44123[iVar0 /*32*/].f_13), sParam4, 64);
				Global_44123[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44123[iVar0 /*32*/].f_12 = 0;
				Global_44123[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_44123[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_79(var uParam0)//Position - 0x6168
{
	return 1;
}

int func_80(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)//Position - 0x6171
{
	int iVar0;
	var uVar1;
	var uVar4;
	
	uParam0->f_12 = 0;
	iVar0 = 0;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_2 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param4, 19, iParam7, 7);
			*uParam0 = 1;
			break;
		
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_2, &(uParam0->f_9), &uVar1, &uVar4, &iVar0) == 2)
			{
				if (uParam0->f_9 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_12 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_2, &(uParam0->f_9), &uVar1, &uVar4, &iVar0) == 0)
			{
				*uParam0 = 3;
			}
			break;
		
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

var func_81()//Position - 0x6215
{
	return Global_75816;
}

int func_82(int iParam0)//Position - 0x6221
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
			{
				return 1;
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
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

var func_83(int iParam0, int iParam1)//Position - 0x6278
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

bool func_84()//Position - 0x62B0
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

int func_85()//Position - 0x62C5
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_86(bool bParam0)//Position - 0x62DF
{
	if (bParam0)
	{
		return (Global_23251.f_4 && Global_23251.f_104 == 4);
	}
	return Global_23251.f_4;
}

void func_87(var uParam0, int iParam1)//Position - 0x6308
{
	func_88(uParam0, iParam1);
}

void func_88(var uParam0, var uParam1)//Position - 0x6318
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_89()//Position - 0x6329
{
	if (func_103(6) || func_103(7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return func_102(67);
		}
	}
	return 1;
}

bool func_90()//Position - 0x635B
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (((iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED")) || iVar0 == joaat("WEAPON_ELECTRIC_FENCE")) || iVar0 == joaat("GADGET_PARACHUTE"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return ((((bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))) || (bVar1 && PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/))) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_91(int iParam0)//Position - 0x6465
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_44();
				if (!func_46(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_98()) || Global_112857) || Global_32286) || func_97()) || func_83(8, -1)) || func_96()) || func_95()) || func_94()) || func_85()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_98()) || Global_32286) || func_97()) || func_83(8, -1)) || func_94()) || func_96()) || func_95()) || func_85()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_98()) || Global_112857) || Global_32286) || func_97()) || func_83(8, -1)) || func_94()) || func_96()) || func_95()) || func_85()) || Global_113810.f_7691.f_919[iVar0] == 5) || Global_43924 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_98()) || Global_112857) || Global_32286) || func_97()) || func_83(8, -1)) || func_96()) || func_95()) || func_85()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_98() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_83(8, -1)) || func_85()) || func_93()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_83(8, -1) || func_96()) || func_95()) || func_93()) || func_92())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_98()) || Global_32286) || func_97()) || func_83(8, -1)) || func_95()) || func_94()) || func_85()) || Global_113810.f_7691.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_98()) || func_95()) || Global_112857) || Global_32286) || func_97()) || Global_44569) || func_83(8, -1)) || func_94()) || func_93()) || func_85()) || Global_113810.f_7691.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_98()) || Global_112857) || Global_32286) || func_97()) || func_83(8, -1)) || func_94()) || func_93()) || func_96()) || func_95()) || func_85())
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

var func_92()//Position - 0x6B82
{
	return Global_100872.f_1;
}

int func_93()//Position - 0x6B90
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 13);
	}
	return 0;
}

int func_94()//Position - 0x6BB3
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

bool func_95()//Position - 0x6BDD
{
	return Global_100885.f_394 > 0;
}

bool func_96()//Position - 0x6BEE
{
	return Global_100885.f_393 > 0;
}

var func_97()//Position - 0x6BFF
{
	return Global_1575063;
}

int func_98()//Position - 0x6C0B
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98291.f_44 == 1;
	}
	return 0;
}

int func_99()//Position - 0x6C27
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_100()//Position - 0x6C41
{
	return Global_96645;
}

int func_101(int iParam0)//Position - 0x6C4D
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_103(6) || func_103(7))
			{
				return 1;
			}
			else
			{
				return func_101(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_115(5))
			{
				if (func_91(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_102(int iParam0)//Position - 0x6CBF
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19);
}

bool func_103(int iParam0)//Position - 0x6CFB
{
	return Global_43377 == iParam0;
}

void func_104()//Position - 0x6D09
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	
	if (bLocal_144)
	{
		Var0 = { func_73(iLocal_146) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar6 = SYSTEM::VDIST2(Var3, Var0);
		if ((fVar6 > 45f || Global_113772) && !ENTITY::DOES_ENTITY_EXIST(iLocal_141))
		{
			if (Global_113772)
			{
				Global_113772 = 0;
			}
			Var7 = { -573.1373f, 294.0269f, 78.1765f };
			Var10 = { -574.1169f, 292.7964f, 78.1766f };
			Var13 = { 1995.6138f, 3049.8774f, 46.2153f };
			Var16 = { 1995.488f, 3047.3833f, 46.2153f };
			fVar19 = 172.6813f;
			fVar20 = 274.5094f;
			fVar21 = 142.6717f;
			fVar22 = 44.8785f;
			iVar23 = INTERIOR::GET_INTERIOR_AT_COORDS(func_73(iLocal_146));
			if (INTERIOR::IS_VALID_INTERIOR(iVar23))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar23);
				while (!INTERIOR::IS_INTERIOR_READY(iVar23))
				{
					SYSTEM::WAIT(0);
				}
				INTERIOR::UNPIN_INTERIOR(iVar23);
			}
			iLocal_141 = PED::CREATE_PED(26, iLocal_139, func_106(iLocal_146 == 1, Var7, Var13), func_105(iLocal_146 == 1, fVar19, fVar21), true, true);
			iLocal_142 = PED::CREATE_PED(26, iLocal_140, func_106(iLocal_146 == 1, Var10, Var16), func_105(iLocal_146 == 1, fVar20, fVar22), true, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_141, true, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_142, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, true);
			iLocal_158 = 1;
			MISC::CLEAR_BIT(&Global_113771, 10);
			iLocal_145 = -1;
			if (fVar6 < (20f * 20f))
			{
				iLocal_145 = 1;
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_141, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_142, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
			}
			else
			{
				iLocal_145 = 0;
				TASK::TASK_STAND_STILL(iLocal_141, -1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_141, true);
				TASK::TASK_STAND_STILL(iLocal_142, -1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, true);
			}
			iLocal_143 = 1;
		}
		else
		{
			if (fVar6 <= 45f)
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
			{
			}
			iLocal_143 = 0;
		}
	}
	else
	{
		iLocal_143 = 0;
	}
}

float func_105(bool bParam0, float fParam1, float fParam2)//Position - 0x6EF3
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_106(bool bParam0, struct<3> Param1, struct<3> Param4)//Position - 0x6F0A
{
	if (bParam0)
	{
		return Param1;
	}
	return Param4;
}

int func_107()//Position - 0x6F25
{
	if (bLocal_144)
	{
		return ((STREAMING::HAS_MODEL_LOADED(iLocal_139) && STREAMING::HAS_MODEL_LOADED(iLocal_140)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_dart_1")));
	}
	return 1;
}

void func_108()//Position - 0x6F55
{
	int iVar0;
	
	if (bLocal_144)
	{
		iVar0 = func_72();
		switch (iVar0)
		{
			case 66:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						iLocal_139 = joaat("A_M_Y_Vinewood_01");
						break;
					
					case 1:
						iLocal_139 = joaat("A_M_Y_StLat_01");
						break;
					
					case 2:
						iLocal_139 = joaat("A_M_Y_Vinewood_04");
						break;
				}
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iLocal_140 = joaat("A_M_Y_StWhi_02");
						break;
					
					case 1:
						iLocal_140 = joaat("A_M_Y_Vinewood_03");
						break;
				}
				iLocal_146 = 1;
				break;
			
			case 67:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						iLocal_139 = joaat("A_F_M_Salton_01");
						iLocal_140 = joaat("A_F_O_Salton_01");
						break;
					
					case 1:
						iLocal_139 = joaat("A_F_O_Salton_01");
						iLocal_140 = joaat("A_F_M_Salton_01");
						break;
				}
				iLocal_146 = 2;
				break;
		}
		STREAMING::REQUEST_MODEL(iLocal_139);
		STREAMING::REQUEST_MODEL(iLocal_140);
		STREAMING::REQUEST_MODEL(joaat("prop_dart_1"));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_141, true, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_142, true, false);
		}
	}
}

void func_109(var uParam0, int iParam1)//Position - 0x705D
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_110(int iParam0)//Position - 0x706E
{
	iLocal_93 = iParam0;
}

void func_111(int iParam0, bool bParam1, bool bParam2)//Position - 0x707A
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32663[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32663[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
		if (Global_32660 == 1)
		{
			Global_32661 = 1;
		}
		Global_32660 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32663[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_32663[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

int func_112()//Position - 0x717A
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

int func_113()//Position - 0x7197
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 20);
	}
	return 0;
}

int func_114(int iParam0, int iParam1)//Position - 0x71BA
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_113810.f_9088.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

bool func_115(int iParam0)//Position - 0x7204
{
	return func_116(iParam0, Global_43377);
}

int func_116(int iParam0, int iParam1)//Position - 0x7215
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

bool func_117(var uParam0, int iParam1)//Position - 0x73F6
{
	return (uParam0 && iParam1) != 0;
}

void func_118()//Position - 0x7405
{
	bool bVar0;
	
	StringCopy(&Local_51, "Darts", 64);
	sLocal_99 = "PLAY_DARTS" /* GXT: Press ~INPUT_CONTEXT~ to play darts. */;
	iLocal_97 = 1;
	fLocal_115 = 2.5f;
	Local_132 = { 0f, -0.5f, 0f };
	iLocal_103 = 67;
	bVar0 = false;
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_73(2), 100f, 100f, 100f, false, false, 0))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		func_71(0);
	}
	if (func_103(6) || func_103(7))
	{
		iLocal_101 = 0;
	}
	iLocal_138 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_88);
	func_109(&uLocal_92, 1);
	func_87(&uLocal_92, 524288);
	iLocal_95 = 57500;
}

void func_119(var uParam0, int iParam1)//Position - 0x749C
{
	func_120(uParam0, iParam1);
}

void func_120(var uParam0, var uParam1)//Position - 0x74AC
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_121(bool bParam0)//Position - 0x74C1
{
	if (bParam0)
	{
		if (iLocal_103 != 263)
		{
			func_111(iLocal_103, 0, 0);
		}
	}
	func_77(&iLocal_94);
	if (func_117(uLocal_92, 2))
	{
		func_4();
		func_119(&uLocal_92, 2);
		func_6(&iLocal_96);
	}
	iLocal_96 = -1;
	func_122();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_122()//Position - 0x750A
{
	func_119(&uLocal_92, 4);
	func_123();
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_50))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_50, 3);
	}
	if (!MISC::IS_STRING_NULL(&Local_67))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_67) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_67);
		}
	}
}

void func_123()//Position - 0x7547
{
	if (iLocal_157)
	{
		func_124(func_72());
	}
}

void func_124(int iParam0)//Position - 0x755C
{
	if (iParam0 != 263)
	{
		func_111(iParam0, 1, 0);
	}
}

