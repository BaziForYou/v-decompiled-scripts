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
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	struct<19> Local_86 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_105 = 0;
	struct<4> Local_106[32];
	var uLocal_235 = 0;
	int iLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	sLocal_16 = "NULL";
	fLocal_21 = 80f;
	fLocal_22 = 140f;
	fLocal_23 = 180f;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_61 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_286(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_276(ScriptParam_0);
	}
	else
	{
		func_273();
	}
	while (true)
	{
		func_272();
		if (func_265() || func_261(16))
		{
			func_273();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_273();
		}
		switch (func_260(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_259() == 1)
				{
					func_258();
					Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				}
				else if (func_259() == 4)
				{
					Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_259() == 1)
				{
					func_140();
				}
				else if (func_259() == 4)
				{
					func_14();
					Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_86.f_18));
				if (func_12(&(Local_86.f_18)))
				{
					Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			
			case 4:
				func_273();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_259())
			{
				case 0:
					Local_86.f_0 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_86.f_0 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1C4
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x1D8
{
	if (Local_86.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()//Position - 0x1ED
{
	struct<14> Var0;
	
	switch (Local_86.f_7)
	{
		case 0:
			if (BitTest(Local_86.f_1, 0))
			{
				Local_86.f_7 = 1;
			}
			else if (func_9(&(Local_86.f_8), 480000, 0))
			{
				Var0.f_2 = 1562851728;
				func_7(Var0, func_8(1));
				MISC::SET_BIT(&(Local_86.f_1), 1);
				Local_86.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()//Position - 0x263
{
	if (!func_9(&(Local_86.f_10), Local_86.f_12, 0))
	{
		if (func_9(&(Local_86.f_13), Local_86.f_15, 0))
		{
			Local_86.f_17++;
			Local_86.f_16 = func_6();
			func_5(&(Local_86.f_13));
		}
	}
	else
	{
		Local_86.f_7 = 2;
	}
}

void func_5(var uParam0)//Position - 0x2AE
{
	uParam0->f_1 = 0;
}

int func_6()//Position - 0x2BB
{
	switch (Local_86.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_86.f_16;
}

void func_7(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0x31C
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_8(int iParam0)//Position - 0x349
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_286(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x3A6
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x404
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_11()//Position - 0x449
{
	int iVar0;
	
	if (Local_86.f_0 == 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_241)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_241));
			if (func_286(iVar0, 1, 1))
			{
				if (!BitTest(Local_86.f_1, 0))
				{
					if (BitTest(Local_106[iLocal_241 /*4*/].f_1, 0))
					{
						iLocal_242 = 1;
						MISC::SET_BIT(&(Local_86.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_241++;
	if (iLocal_241 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iLocal_242 == 0)
		{
			if (BitTest(Local_86.f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_86.f_1), 0);
			}
		}
		else
		{
			iLocal_242 = 0;
		}
		iLocal_241 = 0;
	}
}

int func_12(var uParam0)//Position - 0x4CE
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)//Position - 0x4F7
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()//Position - 0x516
{
	int iVar0;
	var uVar1;
	var uVar5;
	
	if (!BitTest(uLocal_235, 1))
	{
		if ((BitTest(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= (Local_86.f_16 - 1)) && Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 < 10)
		{
			Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		}
		if (Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 * Global_262145.f_8738 /* Tunable: CASH_REWARD_EVENT_DISTRACT_COPS */);
			Global_2696952 = iVar0;
			func_118(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_115(iVar0, 1, 1, 0);
				if (func_114())
				{
					func_102(joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"), iVar0, &uVar5, 0, 0, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_101())
			{
				func_88(12, "DSC_PASS0" /* GXT: Good work. You'll get your money, and they got away with it. Everyone's a winner except small businesses, property owners, and emergency services in the area... */, 0, 0, -99);
			}
			else
			{
				func_88(12, "DSC_PASS1" /* GXT: Mission accomplished. I got paid, I'm transferring your small cut to you. You probably don't want to know what they were up to, but rest assured it wasn't as bad as what you were doing to distract the cops. */, 0, 0, -99);
			}
			func_21(51, iVar0, "DSC_CASH" /* GXT: $~1~ */, "DSC_BIGM" /* GXT: Distract Cops */, 1, -1, -1082130432, 2, 0);
			if (BitTest(uLocal_235, 4))
			{
				if (!BitTest(uLocal_235, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		MISC::SET_BIT(&uLocal_235, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0x62D
{
	int iVar0;
	
	iVar0 = func_18(iParam0, func_19(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, var uParam2)//Position - 0x654
{
	int iVar0;
	
	iVar0 = func_17(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_17(int iParam0, var uParam1)//Position - 0x670
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_19(uParam1));
}

int func_18(int iParam0, var uParam1)//Position - 0x686
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_17(iParam0, uParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19(var uParam0)//Position - 0x6AA
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
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

int func_20()//Position - 0x6DE
{
	return Global_1574918;
}

int func_21(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x6EA
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_87(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_85(&(Var0.f_69), iParam8);
	}
	return func_22(&Var0);
}

int func_22(var uParam0)//Position - 0x76B
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2672524.f_2836)
		{
			return 0;
		}
	}
	func_37(uParam0, uParam0->f_17);
	func_34(uParam0);
	if (func_33())
	{
		func_34(uParam0);
	}
	if (func_32(uParam0->f_1))
	{
		func_25();
		if (Global_2672524.f_2514[0 /*80*/].f_2 == 0)
		{
			Global_2672524.f_2514[0 /*80*/] = { *uParam0 };
			if (func_24(uParam0->f_69, 8192))
			{
				Global_1935885 = 1;
			}
			return 1;
		}
		if (((Global_2672524.f_2514[0 /*80*/].f_1 == 13 || Global_2672524.f_2514[0 /*80*/].f_1 == 53) || Global_2672524.f_2514[0 /*80*/].f_1 == 54) || Global_2672524.f_2514[0 /*80*/].f_1 == 58)
		{
			Global_2672524.f_2514[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2672524.f_2514[iVar0 + 1 /*80*/] = { Global_2672524.f_2514[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2672524.f_2514[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2672524.f_2514[iVar0 /*80*/].f_2 == 0)
		{
			Global_2672524.f_2514[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_25();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_85(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 2);
				Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_24(uParam0->f_69, 128))
			{
				if (func_23(Global_2672524.f_2514[iVar0 /*80*/].f_1))
				{
					Global_2672524.f_2514[iVar0 /*80*/].f_2 = 5;
					func_85(&(Global_2672524.f_2514[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)//Position - 0x950
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

bool func_24(var uParam0, int iParam1)//Position - 0x9D6
{
	return (uParam0 && iParam1) != 0;
}

void func_25()//Position - 0x9E5
{
	bool bVar0;
	
	if (Global_2672524.f_2837)
	{
		return;
	}
	if (!Global_78958)
	{
		Global_78958 = 1;
		bVar0 = true;
	}
	else if (Global_78959)
	{
		Global_78959 = 0;
		bVar0 = true;
	}
	func_26();
	if (bVar0)
	{
		Global_78958 = 0;
	}
}

void func_26()//Position - 0xA2A
{
	Global_2672524.f_2838 = 0;
	Global_2672524.f_2838.f_582 = 0;
	func_30(&(Global_2672524.f_2838.f_1));
	Global_2672524.f_2838.f_1.f_1 = 0;
	func_27(&(Global_2672524.f_2838.f_1), 1);
}

void func_27(var uParam0, int iParam1)//Position - 0xA6C
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78958)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78960)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_29(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_28(0);
}

void func_28(int iParam0)//Position - 0xB1A
{
	Global_78950 = iParam0;
	Global_78951 = iParam0;
}

int func_29(bool bParam0)//Position - 0xB2E
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_30(var uParam0)//Position - 0xB56
{
	func_31(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_31(var uParam0)//Position - 0xB80
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_32(int iParam0)//Position - 0xBFF
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

bool func_33()//Position - 0xD17
{
	return Global_2683883.f_19;
}

void func_34(var uParam0)//Position - 0xD25
{
	if (func_36(uParam0->f_1))
	{
		uParam0->f_72 = func_35();
	}
}

int func_35()//Position - 0xD40
{
	return 21;
}

int func_36(int iParam0)//Position - 0xD4A
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_37(var uParam0, int iParam1)//Position - 0xDDC
{
	if (func_36(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_84() || !func_286(iParam1, 0, 1))
	{
		return;
	}
	if (func_23(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_38(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_38(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xE33
{
	int iVar0;
	int iVar1;
	
	if (!func_83(iParam0))
	{
		return 1;
	}
	if (func_81(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_112316[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_81(PLAYER::PLAYER_ID()) || (func_80() && func_79())) && !BitTest(Global_2794162.f_4697, 31)) && !bParam4)
	{
		iVar1 = func_78();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_286(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_112316[iParam1] != -1)
							{
								return func_76(iParam1, iParam0, 0);
							}
							else
							{
								return func_55(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_55(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_112316[iParam1] != -1)
				{
					return func_76(iParam1, iParam0, 0);
				}
				else
				{
					return func_39(0, -1, 0);
				}
			}
			else
			{
				return func_39(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_112316[iParam1] != -1)
		{
			return func_76(iParam1, iParam0, 0);
		}
		else
		{
			return func_55(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_55(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_39(bool bParam0, int iParam1, bool bParam2)//Position - 0x101E
{
	return func_40(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_40(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1034
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_54() || (func_53() && func_51())) && Global_1665516.f_1)
	{
		if (bParam1)
		{
			return func_50(iParam2, iVar0);
		}
		else
		{
			return func_50(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_45(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_44(1);
				}
				else
				{
					return func_44(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_41(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_41(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_44(1);
	}
	return func_44(0);
}

int func_41(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1136
{
	int iVar0;
	
	iVar0 = func_43(iParam0, iParam1, iParam3);
	if (func_42(Global_4718592.f_117591, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_42(int iParam0, bool bParam1)//Position - 0x124E
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_171044 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9658[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x129F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_45(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_44(bool bParam0)//Position - 0x12E7
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_45(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12FE
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058071.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24064, bVar0))
			{
				bVar1 = Global_1058071.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_46(iParam0, bVar0, iParam1, bVar1) || !func_46(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_46(iParam0, bVar0, iParam1, bVar1) || !func_46(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_46(iParam0, bVar0, iParam1, bVar1) || !func_46(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_46(iParam0, bVar0, iParam1, bVar1) || !func_46(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 0);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 1);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 2);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 4);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 5);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 6);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 8);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 9);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 10);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_1765, 12);
				
				case 1:
					return BitTest(Global_4718592.f_1765, 13);
				
				case 2:
					return BitTest(Global_4718592.f_1765, 14);
				
				case 3:
					return BitTest(Global_4718592.f_1765, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_46(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1649
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24065, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_1816[iParam2 /*24279*/].f_24065, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_286(iVar1, 1, 1) || func_48(iVar1, 0)) || BitTest(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_47(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("MP_F_Freemode_01") || iVar4 == joaat("MP_M_Freemode_01"))
				{
					if (iVar3 == joaat("MP_F_Freemode_01") || iVar3 == joaat("MP_M_Freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_47(int iParam0)//Position - 0x1775
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

bool func_48(int iParam0, int iParam1)//Position - 0x178D
{
	bool bVar0;
	
	if (!func_83(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_49(-1, 0) == 8;
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

int func_49(int iParam0, bool bParam1)//Position - 0x17E6
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_50(int iParam0, int iParam1)//Position - 0x1827
{
	if (iParam0 == -1)
	{
		iParam0 = func_43(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_51()//Position - 0x1875
{
	if (func_52())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_175236, 4);
}

bool func_52()//Position - 0x1894
{
	return BitTest(Global_4718592.f_164769, 12);
}

bool func_53()//Position - 0x18A9
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_175236, 0);
	}
	return ((BitTest(Global_4718592.f_175236, 0) || Global_1927347) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_54()//Position - 0x18F0
{
	if (func_52() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_55(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x190D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853988[iVar2 /*867*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_64())
			{
				iVar3 = func_60(iParam0);
				if (!iVar3 == -1)
				{
					return func_58(iVar3);
				}
			}
			if ((func_57(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_45(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_44(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_56(1);
			}
			else
			{
				return func_40(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836600 || Global_1836590) || Global_1853988[iParam0 /*867*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836600 == 1 && Global_1836610 == 0))
			{
				return func_44(1);
			}
			else
			{
				return func_40(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836594 && Global_1836080.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_60(iParam0);
	if (!iVar4 == -1)
	{
		return func_58(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_56(bool bParam0)//Position - 0x1AA5
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_57(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1ABC
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_58(int iParam0)//Position - 0x1B34
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_59(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_59(int iParam0)//Position - 0x1BF7
{
	return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_60(int iParam0)//Position - 0x1C0E
{
	if (func_83(iParam0))
	{
		if (func_62(iParam0, 1))
		{
			return Global_2648711.f_818.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

int func_61(int iParam0)//Position - 0x1C3E
{
	if (func_83(iParam0))
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_84();
}

bool func_62(int iParam0, bool bParam1)//Position - 0x1C61
{
	if (!func_83(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_63(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_84();
}

int func_63(int iParam0)//Position - 0x1C9A
{
	if (func_83(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_84())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_64()//Position - 0x1CCF
{
	if (((((((func_75() || func_74()) || func_33()) || func_73()) || func_72()) || func_70()) || func_68()) || func_65())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_65()//Position - 0x1D41
{
	return func_66(Global_4718592.f_117591);
}

int func_66(int iParam0)//Position - 0x1D57
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_67(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x1D81
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33923 /* Tunable: 1597065378 */[iParam0];
	}
	return -1;
}

int func_68()//Position - 0x1DA0
{
	return func_69(Global_4718592.f_117591);
}

int func_69(int iParam0)//Position - 0x1DB6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31922[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_70()//Position - 0x1DE5
{
	return func_71(Global_4718592.f_117591);
}

int func_71(int iParam0)//Position - 0x1DFB
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31258[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_72()//Position - 0x1E35
{
	return Global_2683883.f_24;
}

var func_73()//Position - 0x1E43
{
	return Global_2683883.f_21;
}

var func_74()//Position - 0x1E51
{
	return Global_2683883.f_18;
}

var func_75()//Position - 0x1E5F
{
	return Global_2683883.f_17;
}

int func_76(int iParam0, int iParam1, bool bParam2)//Position - 0x1E6D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058071.f_14[iParam0];
	if (func_64())
	{
		iVar2 = func_60(iParam1);
		if (!iVar2 == -1)
		{
			return func_58(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_84())
	{
		if (Global_4718592.f_112316[iParam0] != -1 && Global_4718592.f_112316[iParam0] <= 4)
		{
			if (Global_4718592.f_112316[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_112316[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_112316[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_112316[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_112316[iParam0];
			}
		}
		else
		{
			iVar0 = func_40(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_77(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_45(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_56(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_77(int iParam0)//Position - 0x1FED
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_171203;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_171204;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_171205;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_171206;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_78()//Position - 0x20C2
{
	return Global_2621446.f_2;
}

var func_79()//Position - 0x20D0
{
	return BitTest(Global_2621446, 4);
}

var func_80()//Position - 0x20DE
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_81(int iParam0)//Position - 0x20F8
{
	if (func_48(iParam0, 0))
	{
		return 1;
	}
	if (func_82())
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

bool func_82()//Position - 0x2137
{
	return BitTest(Global_2621446, 3);
}

int func_83(var uParam0)//Position - 0x2145
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

int func_84()//Position - 0x2167
{
	return -1;
}

void func_85(var uParam0, int iParam1)//Position - 0x2170
{
	func_86(uParam0, iParam1);
}

void func_86(var uParam0, var uParam1)//Position - 0x2180
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_87(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x2191
{
	uParam1->f_17 = func_84();
	uParam1->f_18 = func_84();
	uParam1->f_19 = func_84();
	uParam1->f_20 = func_84();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_88(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x220F
{
	func_89(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_89(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x2226
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_90(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_90(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x2247
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_99();
	if (iVar0 == -1)
	{
		return;
	}
	func_98(iVar0);
	func_97(iVar0, uParam0);
	func_96(iVar0, uParam2, bParam3);
	func_95(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_94(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_92(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_91(iVar0, iParam6);
	}
}

void func_91(int iParam0, int iParam1)//Position - 0x22F3
{
	Global_1649067.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_92(int iParam0, char* sParam1, bool bParam2)//Position - 0x2309
{
	StringCopy(&(Global_1649067.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_93(iParam0);
}

void func_93(int iParam0)//Position - 0x2330
{
	MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 5);
}

void func_94(int iParam0)//Position - 0x2347
{
	MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 4);
}

void func_95(int iParam0, char* sParam1)//Position - 0x235E
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1649067.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_96(int iParam0, var uParam1, bool bParam2)//Position - 0x237E
{
	Global_1649067.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 2);
	}
}

void func_97(int iParam0, var uParam1)//Position - 0x23D8
{
	Global_1649067.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_98(int iParam0)//Position - 0x23EE
{
	MISC::SET_BIT(&(Global_1649067.f_59[iParam0 /*16*/]), 0);
}

int func_99()//Position - 0x2405
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_100(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_100(int iParam0)//Position - 0x2433
{
	return BitTest(Global_1649067.f_59[iParam0 /*16*/], 0);
}

int func_101()//Position - 0x2447
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_102(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x2465
{
	int iVar0;
	
	if (!func_114())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28582 /* Tunable: 1103207774 */)
			{
				func_103(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case joaat("SERVICE_EARN_REFUNDAPPEARANCE"):
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_103(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
			if (iParam1 > 0 || Global_262145.f_28582 /* Tunable: 1103207774 */)
			{
				func_103(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case joaat("SERVICE_EARN_TAXI_JOB"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
			func_103(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_103(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2D2A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_114())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_20()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4535172[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_110(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536677 = 1;
			Global_4536680 = iParam4;
			Global_4536682 = iParam3;
			Global_4536683 = 1;
			Global_4536681 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4536680 = iParam4;
			Global_4536682 = iParam3;
			Global_4536683 = 1;
			Global_4536681 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_109(1, iParam4);
			Global_4536677 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_104(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2ED7
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_105(iParam0);
	}
}

void func_105(int iParam0)//Position - 0x2F0F
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_114())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_108(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
		}
		func_106(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_106(var uParam0)//Position - 0x2F63
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_107(&(uParam0->f_14));
	func_107(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_107(var uParam0)//Position - 0x306F
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_108(int iParam0)//Position - 0x30B7
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_109(int iParam0, int iParam1)//Position - 0x30E2
{
	Global_2697092 = iParam1;
	Global_2697091 = iParam0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x30F6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_114())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4535172[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4535172[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4535172[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4535172[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4535172[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4535172[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4535172[iVar0 /*85*/].f_66 = iParam0;
			Global_4535172[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4535172[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4535172[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4535172[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4535172[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
			if (bParam6)
			{
				Global_4535172[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_111(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_111(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x3233
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_113(Var0.f_1);
	if ((Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24259 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24260 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_112();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_112()//Position - 0x32C5
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_113(int iParam0)//Position - 0x32D4
{
	var uVar0;
	
	if (func_83(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_114()//Position - 0x32EF
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_115(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x3306
{
	func_116(iParam0, iParam1, iParam2, fParam3);
}

void func_116(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x331A
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_4 = iVar1;
	Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_3 = (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_117(iVar1, 0);
	}
}

void func_117(int iParam0, bool bParam1)//Position - 0x339D
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_118(int iParam0, int iParam1)//Position - 0x33AE
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_139())
		{
			if (func_138(0))
			{
				if (!func_134(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_133()))
					{
						if (func_132() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_132());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_130(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_123("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, func_133(), iVar0, 0, 0, 1);
						}
						func_122(20);
						func_119(func_133(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_119(int iParam0, int iParam1, int iParam2)//Position - 0x344D
{
	struct<8> Var0;
	
	if (func_286(iParam0, 0, 1))
	{
		Var0.f_0 = -1141119736;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_121(iParam0);
		func_120(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, func_113(iParam0));
	}
}

void func_120(var uParam0, var uParam1)//Position - 0x34A3
{
	*uParam0 = Global_1924276.f_9;
	*uParam1 = Global_1924276.f_10;
}

var func_121(int iParam0)//Position - 0x34BD
{
	return Global_1895156[iParam0 /*609*/].f_511;
}

void func_122(int iParam0)//Position - 0x34D1
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2794162.f_5231.f_7[iVar0]), iVar1);
}

int func_123(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x34FA
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_38(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_128(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_124(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_124(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x3592
{
	int iVar0;
	
	if ((!func_127() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_48(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_125(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944768.f_5[iVar0 /*53*/] = iParam0;
		Global_1944768.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944768.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944768.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944768.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944768.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944768.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_125(int iParam0)//Position - 0x369A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944768 - 1))
	{
		if (iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1)
		{
			func_126(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944768++;
	if (Global_1944768 > 5)
	{
		Global_1944768 = 5;
		return Global_1944768;
	}
	return (Global_1944768 - 1);
}

void func_126(int iParam0)//Position - 0x36FC
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944768.f_5[iVar0 /*53*/] = { Global_1944768.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_127()//Position - 0x3735
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_128(char* sParam0)//Position - 0x3746
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_129(&cVar0);
}

var func_129(char[4] cParam0)//Position - 0x3768
{
	return cParam0;
}

void func_130(int iParam0, bool bParam1)//Position - 0x3772
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_131(1);
	}
	else
	{
		iVar1 = func_131(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_131(bool bParam0)//Position - 0x37A4
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_13038 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_132()//Position - 0x37CA
{
	return Global_262145.f_13037 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_133()//Position - 0x37D9
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_134(bool bParam0)//Position - 0x37EE
{
	return func_135(PLAYER::PLAYER_ID(), bParam0);
}

int func_135(int iParam0, bool bParam1)//Position - 0x3800
{
	return func_136(iParam0, bParam1, 1);
}

int func_136(int iParam0, bool bParam1, int iParam2)//Position - 0x3811
{
	int iVar0;
	
	if (!func_83(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_137(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_84() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)//Position - 0x386E
{
	if (func_83(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_84())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_138(bool bParam0)//Position - 0x38BD
{
	return func_62(PLAYER::PLAYER_ID(), bParam0);
}

bool func_139()//Position - 0x38CF
{
	return func_63(PLAYER::PLAYER_ID());
}

void func_140()//Position - 0x38DF
{
	func_256();
	if (HUD::DOES_BLIP_EXIST(iLocal_236))
	{
		if (func_255() || func_254())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_236, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_236, 4);
		}
	}
	switch (Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86.f_2, Local_86.f_5, Local_86.f_5, 1000f, false, true, 0))
			{
				func_231();
				MISC::SET_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
				MISC::SET_BIT(&(Global_2794162.f_4699), 0);
				Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
			}
			if (Local_86.f_7 > 1)
			{
				Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_205();
			func_141();
			if (Local_86.f_7 > 1)
			{
				Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_141()//Position - 0x39BD
{
	func_204();
	func_150();
	func_143();
	func_142();
}

void func_142()//Position - 0x39D5
{
	if (!BitTest(uLocal_235, 5))
	{
		if (!BitTest(uLocal_235, 4))
		{
			if (Local_86.f_17 == 0)
			{
				MISC::SET_BIT(&uLocal_235, 4);
			}
			else
			{
				MISC::SET_BIT(&uLocal_235, 5);
			}
		}
		else if (!func_286(PLAYER::PLAYER_ID(), 1, 1))
		{
			MISC::SET_BIT(&uLocal_235, 5);
		}
	}
}

void func_143()//Position - 0x3A1E
{
	if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		func_149();
	}
	else
	{
		func_148();
	}
	if ((Local_86.f_12 - func_147(&(Local_86.f_10), 0, 0)) >= 0)
	{
		func_144((Local_86.f_12 - func_147(&(Local_86.f_10), 0, 0)), "DCP_TIMER" /* GXT: DISTRACT TIME */, 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_144(0, "DCP_TIMER" /* GXT: DISTRACT TIME */, 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_144(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x3AC2
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_146(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_145(7, iVar0);
		Global_1655612.f_4659[iVar0] = iParam0;
		StringCopy(&(Global_1655612.f_4659.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1655612.f_4659.f_172[iVar0] = iParam2;
		Global_1655612.f_4659.f_216[iVar0] = iParam3;
		Global_1655612.f_4659.f_183[iVar0] = iParam4;
		Global_1655612.f_4659.f_194[iVar0] = iParam5;
		Global_1655612.f_4659.f_249[iVar0] = iParam6;
		Global_1655612.f_4659.f_260[iVar0] = iParam7;
		Global_1655612.f_4659.f_205[iVar0] = iParam8;
		Global_1655612.f_4659.f_314[iVar0] = iParam9;
		Global_1655612.f_4659.f_325[iVar0] = iParam10;
		Global_1655612.f_4659.f_357[iVar0] = iParam11;
		Global_1655612.f_4659.f_238[iVar0] = iParam12;
		Global_1655612.f_4659.f_271[iVar0] = iParam13;
		Global_1655612.f_4659.f_368[iVar0] = iParam14;
		Global_1655612.f_4659.f_379[iVar0] = iParam15;
		Global_1655612.f_4659.f_390[iVar0] = iParam16;
		Global_1655612.f_4659.f_227[iVar0] = iParam17;
	}
}

void func_145(int iParam0, int iParam1)//Position - 0x3C1F
{
	MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_146(int iParam0, int iParam1)//Position - 0x3C38
{
	return BitTest(Global_1655612.f_7009[iParam0], iParam1);
}

int func_147(var uParam0, bool bParam1, bool bParam2)//Position - 0x3C4E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_148()//Position - 0x3C95
{
	Global_1655612.f_1173 = 1;
}

void func_149()//Position - 0x3CA5
{
	Global_1655612.f_1172 = 1;
}

void func_150()//Position - 0x3CB5
{
	if (func_9(&uLocal_237, 30000, 0))
	{
		switch (Local_86.f_16)
		{
			case 2:
				func_203(2107, 1, -1);
				break;
			
			case 3:
				func_203(2108, 1, -1);
				break;
			
			case 4:
				func_203(2109, 1, -1);
				break;
			
			case 5:
				func_203(2110, 1, -1);
				break;
		}
		func_151(0, PLAYER::PLAYER_PED_ID(), "XPT_DSC" /* GXT: Distract Cops */, joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_DISTRACT_COPS"), (Global_262145.f_8739 /* Tunable: XP_REWARD_EVENT_DISTRACT_COPS */ * Local_86.f_16), 1, -1, 0, 0, 0);
		Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		func_5(&uLocal_237);
	}
}

int func_151(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x3D5F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_161(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_157(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_152(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_152(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x3DF2
{
	struct<3> Var0;
	
	Var0 = { func_155(iParam0, 1) };
	if (iParam0 == func_154(PLAYER::PLAYER_PED_ID()))
	{
		func_153(1);
	}
	func_157(Var0, iParam1, 0, sParam2, iParam3);
}

void func_153(int iParam0)//Position - 0x3E26
{
	Global_2672524.f_1682 = iParam0;
}

int func_154(int iParam0)//Position - 0x3E37
{
	return iParam0;
}

Vector3 func_155(int iParam0, bool bParam1)//Position - 0x3E41
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_156(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_156(int iParam0)//Position - 0x3F05
{
	return iParam0;
}

void func_157(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x3F0F
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2672524.f_1081[iVar0 /*30*/].f_6 == 0 || Global_2672524.f_1081[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2672524.f_1081[iVar1 /*30*/] = { Param0 };
			Global_2672524.f_1081[iVar1 /*30*/].f_6 = 1;
			Global_2672524.f_1081[iVar1 /*30*/].f_4 = func_160(Global_2672524.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672524.f_1081[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1081[iVar1 /*30*/].f_3 = iParam3;
			Global_2672524.f_1081[iVar1 /*30*/].f_8 = iParam4;
			Global_2672524.f_1081[iVar1 /*30*/].f_9 = func_159();
			Global_2672524.f_1081[iVar1 /*30*/].f_10 = func_158();
			StringCopy(&(Global_2672524.f_1081[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672524.f_1081[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_158()//Position - 0x4027
{
	if (Global_2672524.f_1682)
	{
		Global_2672524.f_1682 = 0;
		return 1;
	}
	Global_2672524.f_1682 = 0;
	return 0;
}

var func_159()//Position - 0x4051
{
	var uVar0;
	
	uVar0 = Global_2672524.f_1684;
	Global_2672524.f_1684 = 1;
	return uVar0;
}

float func_160(struct<3> Param0, var uParam3, var uParam4)//Position - 0x406C
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_161(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4105
{
	var uVar0;
	
	uVar0 = func_162(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_162(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x4128
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_194();
	if (func_193(sParam2))
	{
	}
	if (func_192())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_190(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_189(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_186(0, &iVar1);
					break;
				
				case 3:
					func_186(1, &iVar1);
					break;
				
				case 1:
					func_183(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1962798)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_203(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_171((func_182(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 != -1)
				{
					func_203(1166, iVar1, -1);
				}
				func_167(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_163((func_165(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_163((func_165(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_163(int iParam0)//Position - 0x4293
{
	if (func_192())
	{
		Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5 = iParam0;
		func_164(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_164(int iParam0, int iParam1)//Position - 0x42BE
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_165(int iParam0)//Position - 0x42DA
{
	if (iParam0 > -1)
	{
		if (func_286(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_166(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_5;
			}
		}
		else
		{
			return func_166(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_166(int iParam0)//Position - 0x432B
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_167(int iParam0)//Position - 0x4349
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_170(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_168(func_169(&Var0));
			if (iVar13 == 0)
			{
				func_164(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_166(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_164(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_166(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_164(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_166(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_164(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_166(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_164(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_166(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_168(int iParam0)//Position - 0x4413
{
	if (iParam0 == func_166(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_166(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_166(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_166(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_166(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_169(var* uParam0)//Position - 0x4489
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2694518;
		}
	}
	return Global_2694518;
}

struct<13> func_170(int iParam0)//Position - 0x44AC
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_171(int iParam0, int iParam1, int iParam2)//Position - 0x44C3
{
	if (func_192())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10242 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_181(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_181(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10241 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10241 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (func_180(PLAYER::PLAYER_ID()))
		{
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1 = iParam0;
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6 = func_177(iParam0, 1);
		}
		func_175(640, iParam0, -1, 1);
		func_175(641, func_177(iParam0, 1), -1, 1);
		func_172(-1109644434, 7, 0);
	}
}

void func_172(int iParam0, int iParam1, int iParam2)//Position - 0x45D5
{
	int iVar0;
	
	if (func_174(iParam1, iParam2))
	{
		iVar0 = func_173();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_173()//Position - 0x4602
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2694470[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_174(int iParam0, var uParam1)//Position - 0x4637
{
	if (Global_1575051)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575063) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_175(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x46BD
{
	int iVar0;
	
	iVar0 = func_176(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_176(int iParam0, var uParam1)//Position - 0x46E0
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_19(uParam1));
}

int func_177(int iParam0, bool bParam1)//Position - 0x46F5
{
	if (bParam1)
	{
	}
	return func_178(iParam0, 0);
}

int func_178(int iParam0, int iParam1)//Position - 0x4709
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_179(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_179(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_179(int iParam0)//Position - 0x47C4
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return 663800;
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
			
			default:
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_180(int iParam0)//Position - 0x4CFF
{
	if (!func_83(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672524.f_1, iParam0);
}

int func_181(int iParam0, int iParam1)//Position - 0x4D1E
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_176(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x4D4D
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_181(640, -1);
			}
			else if (func_180(iParam0))
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_181(640, -1);
	}
	return 0;
}

void func_183(int iParam0)//Position - 0x4DA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_45(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_185(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_184(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_184(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_184(int iParam0, int iParam1)//Position - 0x4E90
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_185(int iParam0, int iParam1)//Position - 0x4EB1
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764376 = { func_170(iParam0) };
		Global_2764389 = { func_170(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764376))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2764389))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764341, 35, &Global_2764389);
				if (Global_2764306 == Global_2764341)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_186(bool bParam0, int iParam1)//Position - 0x4F1E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_286(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_185(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_286(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_187(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_185(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_184(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_184(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_187(int iParam0, int iParam1)//Position - 0x5036
{
	return SYSTEM::VDIST(func_188(iParam0), func_188(iParam1));
	return 0f;
}

Vector3 func_188(int iParam0)//Position - 0x5052
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_189(int iParam0)//Position - 0x5065
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_184(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_190(int iParam0)//Position - 0x509C
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_182(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_182(PLAYER::PLAYER_ID());
		}
	}
	if (func_191(8000, 0, 0) > 0)
	{
		if (func_191(8000, 0, 0) < (iParam0 + func_182(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_191(8000, 0, 0) - func_182(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_191(int iParam0, bool bParam1, int iParam2)//Position - 0x5100
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_179(iParam0);
}

int func_192()//Position - 0x5126
{
	return 1;
}

int func_193(char* sParam0)//Position - 0x512F
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_194()//Position - 0x5167
{
	int iVar0;
	
	if (func_202(PLAYER::PLAYER_ID()) || func_201(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10274 /* Tunable: JOB_HEIST_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10274 /* Tunable: JOB_HEIST_RP_CAP */;
		}
	}
	else if (func_199() || func_195(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23463 /* Tunable: H2_JOB_RP_CAP */ > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23463 /* Tunable: H2_JOB_RP_CAP */;
		}
	}
	else if (Global_262145.f_7178 /* Tunable: JOB_RP_CAP */ > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7178 /* Tunable: JOB_RP_CAP */;
	}
	return iVar0;
}

int func_195(int iParam0)//Position - 0x5201
{
	return func_196(func_197(iParam0));
}

int func_196(int iParam0)//Position - 0x5213
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x522D
{
	if (func_83(iParam0))
	{
		if (func_198(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_198(int iParam0, int iParam1)//Position - 0x5259
{
	if (func_83(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_199()//Position - 0x529D
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_33();
	}
	return func_200(Global_4718592.f_117591);
}

int func_200(int iParam0)//Position - 0x52C1
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5043[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_201(int iParam0)//Position - 0x52FB
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

bool func_202(int iParam0)//Position - 0x5310
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

void func_203(int iParam0, int iParam1, int iParam2)//Position - 0x5325
{
	int iVar0;
	
	iVar0 = func_181(iParam0, func_19(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_175(iParam0, iVar0, iParam2, 1);
}

void func_204()//Position - 0x534D
{
	if (func_9(&uLocal_239, 10000, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Local_86.f_16)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_86.f_16, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

void func_205()//Position - 0x538F
{
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86.f_2, Local_86.f_5, Local_86.f_5, 1000f, false, true, 0))
	{
		func_208();
		Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86.f_2, Local_86.f_6, Local_86.f_6, 950f, false, true, 0))
	{
		if (!BitTest(uLocal_235, 0) && BitTest(uLocal_235, 3))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_207())
			{
				if (!func_255())
				{
					func_206("DCP_LEAVE" /* GXT: You are leaving the area for distracting the Cops. */, -1);
				}
				MISC::SET_BIT(&uLocal_235, 0);
			}
		}
	}
	else
	{
		if (!BitTest(uLocal_235, 3))
		{
			MISC::SET_BIT(&uLocal_235, 3);
		}
		if (BitTest(uLocal_235, 0))
		{
			MISC::CLEAR_BIT(&uLocal_235, 0);
		}
	}
}

void func_206(char* sParam0, int iParam1)//Position - 0x5447
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_207()//Position - 0x545E
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

void func_208()//Position - 0x5473
{
	func_5(&uLocal_237);
	func_5(&uLocal_239);
	func_209();
	MISC::CLEAR_BIT(&(Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	MISC::CLEAR_BIT(&uLocal_235, 3);
	MISC::SET_BIT(&(Global_2794162.f_4699), 0);
	if (!BitTest(uLocal_235, 5))
	{
		MISC::SET_BIT(&uLocal_235, 5);
	}
}

void func_209()//Position - 0x54BC
{
	if (BitTest(uLocal_235, 2))
	{
		func_210(1, 1, 0);
		MISC::CLEAR_BIT(&uLocal_235, 2);
	}
}

void func_210(bool bParam0, bool bParam1, bool bParam2)//Position - 0x54D9
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_45), &Global_2639972, 323);
	}
	else
	{
		Global_2635560.f_45 = { Global_2639972 };
		Global_2635560.f_45.f_49 = { Global_2639972.f_49 };
		Global_2635560.f_45.f_52 = Global_2639972.f_52;
		Global_2635560.f_45.f_53 = Global_2639972.f_53;
	}
	if (bParam0)
	{
		func_230();
	}
	if (!bParam2)
	{
		func_213(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_212(0);
	func_211();
}

void func_211()//Position - 0x557F
{
	struct<6> Var0;
	
	if (Global_2635560.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2635560.f_490 = { Var0 };
	}
}

void func_212(bool bParam0)//Position - 0x55A4
{
	if (bParam0)
	{
		Global_2635560.f_713 = 0;
	}
	else
	{
		Global_2635560.f_713 = 1;
	}
}

void func_213(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x55C4
{
	if (bParam0)
	{
		if (func_229())
		{
			func_228();
		}
		Global_2635560.f_714.f_568 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2635560.f_714.f_554 = iParam1;
		Global_2635560.f_714.f_555 = iParam2;
		Global_2635560.f_714.f_556 = iParam10;
		func_226();
		func_217(8, 0, 0, 0, 0);
		Global_2635560.f_714.f_557 = iParam11;
		Global_2635560.f_714.f_562 = iParam3;
		Global_2635560.f_714.f_563 = iParam4;
		Global_2635560.f_714.f_560 = iParam5;
		Global_2635560.f_714.f_561 = iParam6;
		Global_2635560.f_714.f_564 = iParam7;
		Global_2635560.f_714.f_565 = iParam8;
		Global_2635560.f_714.f_566 = iParam9;
		Global_2635560.f_714.f_567 = iParam14;
		Global_2635560.f_714.f_558 = iParam12;
		Global_2635560.f_714.f_559 = iParam13;
		Global_2635560.f_1853 = 1;
	}
	else
	{
		func_214();
	}
}

void func_214()//Position - 0x56AF
{
	if (func_229() && !func_216())
	{
		func_228();
	}
	if (func_216())
	{
		func_215();
	}
	else
	{
		func_226();
		func_217(0, 0, 0, 0, 0);
		Global_2635560.f_1853 = 0;
		Global_2635560.f_1852 = 0;
	}
}

void func_215()//Position - 0x56F7
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_714), &(Global_2635560.f_1283), 569);
	Global_2635560.f_490 = { Global_2635560.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_714.f_568)
	{
		Global_2635560.f_1852 = 0;
	}
}

int func_216()//Position - 0x573F
{
	if ((Global_2635560.f_1852 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_1283.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_1283.f_568))
	{
		return 1;
	}
	return 0;
}

void func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x577E
{
	if (Global_2672524.f_1685.f_703.f_16 != func_84())
	{
		if (BitTest(Global_2657704[Global_2672524.f_1685.f_703.f_16 /*463*/].f_424, 0) && func_218())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2643396 = 0;
	}
	Global_2635560.f_490 = iParam0;
	Global_2635560.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635560.f_490.f_2 = iParam1;
	Global_2635560.f_490.f_3 = iParam2;
	Global_2635560.f_490.f_4 = iParam3;
	Global_2635560.f_490.f_5 = iParam4;
}

int func_218()//Position - 0x581A
{
	if ((((((func_197(PLAYER::PLAYER_ID()) == 229 || func_197(PLAYER::PLAYER_ID()) == 191) || func_225()) || func_224()) || func_223()) || Global_2765084.f_227 == 1) || (Global_2635560.f_1853 && func_219(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_219(int iParam0)//Position - 0x588C
{
	if (func_222(iParam0))
	{
		return 1;
	}
	if (func_220(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_220(int iParam0)//Position - 0x58AF
{
	return func_221(iParam0, 20);
}

var func_221(int iParam0, int iParam1)//Position - 0x58BF
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_222(var uParam0)//Position - 0x58D7
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 7);
	}
	return 0;
}

var func_223()//Position - 0x58FA
{
	return Global_2765083;
}

var func_224()//Position - 0x5906
{
	return Global_1836594;
}

int func_225()//Position - 0x5912
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

void func_226()//Position - 0x5927
{
	if (func_229() && !func_216())
	{
		func_228();
	}
	func_227();
	Global_2635560.f_714 = 0;
	Global_2635560.f_714.f_502 = 0;
}

void func_227()//Position - 0x595B
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var6;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2635560.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
	Var6 = -1;
	Var6.f_2 = -3;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_2635560.f_714.f_503[iVar0 /*3*/] = { Var6 };
		iVar0++;
	}
}

void func_228()//Position - 0x59CC
{
	if (func_216())
	{
		if (Global_2635560.f_714.f_568 == Global_2635560.f_1283.f_568)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_714.f_568)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_1283), &(Global_2635560.f_714), 569);
		Global_2635560.f_496 = { Global_2635560.f_490 };
		Global_2635560.f_1852 = 1;
	}
}

int func_229()//Position - 0x5A3A
{
	if ((Global_2635560.f_1853 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_714.f_568) && SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_714.f_568))
	{
		return 1;
	}
	return 0;
}

void func_230()//Position - 0x5A79
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2635560.f_368), &Global_2640295, 121);
}

void func_231()//Position - 0x5A92
{
	if (!BitTest(uLocal_235, 2))
	{
		func_251(Local_86.f_2, (Local_86.f_6 * 1.5f), 0, 0, 1, 0);
		func_233(Local_86.f_2, Local_86.f_6, 0, 1);
		func_232(Local_86.f_2, 1, 0);
		MISC::SET_BIT(&uLocal_235, 2);
	}
}

void func_232(struct<3> Param0, int iParam3, int iParam4)//Position - 0x5ADD
{
	Global_2635560.f_45.f_49 = { Param0 };
	Global_2635560.f_45.f_52 = iParam3;
	Global_2635560.f_45.f_53 = iParam4;
}

void func_233(struct<3> Param0, var uParam3, int iParam4, int iParam5)//Position - 0x5B07
{
	func_234(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
}

void func_234(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)//Position - 0x5B21
{
	struct<12> Var0;
	
	if (func_243(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_242(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_237(Var0))
		{
			Global_2635560.f_45.f_64 = func_236(PLAYER::PLAYER_ID());
			func_235(Var0, iParam8);
		}
	}
}

void func_235(struct<12> Param0, int iParam12)//Position - 0x5B97
{
	Global_2635560.f_368[iParam12 /*12*/] = { Param0 };
	Global_2635560.f_368[iParam12 /*12*/].f_9 = 1;
}

int func_236(int iParam0)//Position - 0x5BC0
{
	if (func_286(iParam0, 0, 1))
	{
		return Global_2657704[iParam0 /*463*/].f_1;
	}
	return 0;
}

int func_237(struct<12> Param0)//Position - 0x5BE2
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2635560.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_238(Global_2635560.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_238(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x5C42
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_241(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_239(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_241(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_239(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_239(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)//Position - 0x5D7B
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.70710677f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_240(Param0, Param3, Var0, Var3);
}

int func_240(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)//Position - 0x5DBF
{
	if (((((Param0.f_0 >= Param6.f_0 && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.f_0 <= Param9.f_0) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_241(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)//Position - 0x5E16
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_242(var uParam0, var uParam1)//Position - 0x5E41
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var3.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var3.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_243(int iParam0)//Position - 0x5ED8
{
	if (((func_246(iParam0, 1) || func_245(iParam0)) || func_198(iParam0, 0)) || func_244(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_244(int iParam0)//Position - 0x5F14
{
	if (!func_286(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2);
}

int func_245(int iParam0)//Position - 0x5F3C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/] != -1;
	}
	return 0;
}

bool func_246(int iParam0, bool bParam1)//Position - 0x5F5D
{
	if (func_250() != 0)
	{
		return func_236(iParam0) != 0;
	}
	return func_247(iParam0, bParam1, 0);
}

int func_247(int iParam0, bool bParam1, bool bParam2)//Position - 0x5F84
{
	if (bParam1)
	{
		if (func_248(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853988[iParam0 /*867*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_248(int iParam0)//Position - 0x5FB6
{
	return func_249(iParam0);
}

var func_249(int iParam0)//Position - 0x5FC4
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_250()//Position - 0x5FDB
{
	return Global_32283;
}

void func_251(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x5FE6
{
	func_252(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_252(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)//Position - 0x6004
{
	struct<12> Var0;
	
	if (func_243(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Global_2635560.f_1853)
		{
			func_214();
		}
		if (Var0.f_10 == 1)
		{
			func_242(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2635560.f_45.f_64 = func_236(PLAYER::PLAYER_ID());
		func_253(Var0, iParam8);
	}
}

void func_253(struct<12> Param0, int iParam12)//Position - 0x6093
{
	Global_2635560.f_45[iParam12 /*12*/] = { Param0 };
	Global_2635560.f_45[iParam12 /*12*/].f_9 = 1;
}

var func_254()//Position - 0x60BA
{
	return Global_2646835.f_1869;
}

int func_255()//Position - 0x60C9
{
	return 1;
}

void func_256()//Position - 0x60D2
{
	if (!BitTest(uLocal_235, 6))
	{
		if (((((((func_257(60000) && func_259() == 1) && Local_86.f_7 <= 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_286(PLAYER::PLAYER_ID(), 1, 1)) && !func_207()) && Local_86.f_16 != 5)
		{
			if (!func_255())
			{
				func_206("DCP_HELP1" /* GXT: Help Lester's contact by distracting the cops in the area marked by a purple circle. */, -1);
			}
			MISC::SET_BIT(&uLocal_235, 6);
		}
	}
}

bool func_257(int iParam0)//Position - 0x6152
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2644651, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_258()//Position - 0x616D
{
	if (HUD::DOES_BLIP_EXIST(iLocal_236))
	{
		if (func_255() || func_254())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_236, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_236, 4);
		}
	}
	else
	{
		iLocal_236 = HUD::ADD_BLIP_FOR_RADIUS(Local_86.f_2, Local_86.f_5);
		HUD::SET_BLIP_COLOUR(iLocal_236, 50);
		HUD::SET_BLIP_ALPHA(iLocal_236, 220);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_236, false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_236, "DCP_BLIPN" /* GXT: Distract Cops */);
		if (func_255())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_236, 0);
		}
	}
}

int func_259()//Position - 0x61E1
{
	return Local_86.f_0;
}

int func_260(int iParam0)//Position - 0x61EB
{
	return Local_106[iParam0 /*4*/];
}

bool func_261(int iParam0)//Position - 0x61F9
{
	return !func_262(iParam0);
}

int func_262(int iParam0)//Position - 0x6208
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_7203 /* Tunable: DISABLE_EVENT_CRATE_DROP */)
			{
				return 0;
			}
			if (func_264(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_7204 /* Tunable: DISABLE_EVENT_ARMOURED_TRUCK */)
			{
				return 0;
			}
			if (func_264(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_7205 /* Tunable: DISABLE_EVENT_HIGH_PRIORITY_VEHICLE */)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_7206 /* Tunable: DISABLE_EVENT_JOYRIDER */)
			{
				return 0;
			}
			if (func_264(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_263(4))
			{
				return 0;
			}
			if (func_264(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_263(4))
			{
				return 0;
			}
			if (func_264(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_263(4))
			{
				return 0;
			}
			if (func_264(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_263(4))
			{
				return 0;
			}
			if (func_264(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 0) || BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_263(4))
			{
				return 0;
			}
			if (func_264(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_263(4))
			{
				return 0;
			}
			if (func_264(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_263(bool bParam0)//Position - 0x653C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_286(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (BitTest(Global_2657704[iVar0 /*463*/].f_218, bParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_264(int iParam0, int iParam1)//Position - 0x657F
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_265()//Position - 0x6595
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_271())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_270())
	{
		return 1;
	}
	if (func_269(159))
	{
		if (!func_268())
		{
			return 1;
		}
	}
	if (func_269(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_266() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_266()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_266()//Position - 0x6619
{
	switch (func_250())
	{
		case 0:
			return func_267();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_267()//Position - 0x664C
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_268()//Position - 0x6670
{
	return Global_2683883.f_698;
}

int func_269(int iParam0)//Position - 0x667F
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_270()//Position - 0x6696
{
	return Global_2694576;
}

bool func_271()//Position - 0x66A2
{
	return Global_2683883.f_693;
}

void func_272()//Position - 0x66B1
{
	SYSTEM::WAIT(0);
}

void func_273()//Position - 0x66BE
{
	if (HUD::DOES_BLIP_EXIST(iLocal_236))
	{
		HUD::REMOVE_BLIP(&iLocal_236);
	}
	if (BitTest(Local_86.f_1, 1))
	{
		func_88(12, "DSC_FAIL" /* GXT: Great. Thank you for your help. Now some horrible criminals are in jail for a crime they did commit and it's all your fault!! */, 0, 0, -99);
	}
	func_209();
	func_275(16, 0);
	MISC::SET_BIT(&(Global_2794162.f_4699), 0);
	func_274();
}

void func_274()//Position - 0x6706
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_275(bool bParam0, bool bParam1)//Position - 0x6712
{
	if (bParam1)
	{
		if (!BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
		{
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
		}
	}
	else if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_218), bParam0);
	}
}

void func_276(struct<21> Param0)//Position - 0x676F
{
	func_282(func_283(Param0.f_0), Param0);
	func_280(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_86, 20, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_106, 129, 0);
	if (!func_279())
	{
		func_273();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_277();
		}
		func_275(16, 1);
		Local_106[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	}
	else
	{
		func_273();
	}
}

void func_277()//Position - 0x67DA
{
	Local_86.f_2 = { func_278() };
	Local_86.f_5 = 200f;
	Local_86.f_6 = 180f;
}

Vector3 func_278()//Position - 0x67FE
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_279()//Position - 0x6905
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_271())
		{
			return 0;
		}
		if (func_269(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_280(int iParam0, int iParam1, bool bParam2)//Position - 0x695E
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_274();
			}
			else
			{
				return 0;
			}
		}
		if (!func_281(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_274();
					}
					else
					{
						return 0;
					}
				}
				if (func_271())
				{
					if (!bParam2)
					{
						func_274();
					}
					else
					{
						return 0;
					}
				}
				if (func_269(157))
				{
					if (!bParam2)
					{
						func_274();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_274();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_274();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_274();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_281(bool bParam0)//Position - 0x6A74
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_282(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x6A85
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_274();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_283(int iParam0)//Position - 0x6AA4
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 180:
			return 32;
		
		case 181:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 192:
			return 32;
		
		case 193:
			return 32;
		
		case 182:
			return 32;
		
		case 183:
			return 32;
		
		case 187:
			return 32;
		
		case 185:
			return 32;
		
		case 186:
			return 32;
		
		case 190:
			return 32;
		
		case 191:
			return 32;
		
		case 188:
			return 32;
		
		case 189:
			return 32;
		
		case 194:
			return 32;
		
		case 195:
			return 32;
		
		case 196:
			return 32;
		
		case 197:
			return 32;
		
		case 198:
			return 2;
		
		case 203:
			return 1;
		
		case 199:
			return 2;
		
		case 200:
			return 4;
		
		case 201:
			return 2;
		
		case 202:
			return 2;
		
		case 184:
			return 1;
		
		case 204:
			return 2;
		
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
			return 0;
		
		case 226:
			return 1;
		
		case 211:
			return 4;
		
		case 214:
			return 4;
		
		case 215:
			return 1;
		
		case 216:
			return 1;
		
		case 222:
			return 1;
		
		case 218:
			return 2;
		
		case 223:
			return 1;
		
		case 219:
			return 1;
		
		case 217:
			return 2;
		
		case 220:
			return 8;
		
		case 221:
			return 8;
		
		case 224:
			return 1;
		
		case 225:
			return 2;
		
		case 142:
			return 8;
		
		case 148:
			return 1;
		
		case 170:
			return 1;
		
		case 178:
			return 1;
		
		case 212:
			return 16;
		
		case 213:
			return 32;
		
		default:
	}
	switch (func_284(func_285(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_284(int iParam0)//Position - 0x722F
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 0;
		
		case 264:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		case 268:
			return 2;
		
		case 286:
			return 2;
		
		case 267:
			return 0;
		
		case 266:
			return 2;
		
		case 287:
			return 2;
		
		case 289:
			return 2;
		
		case 147:
			return 2;
		
		case 291:
			return 0;
		
		case 292:
			return 0;
		
		case 293:
			return 0;
		
		case 294:
			return 0;
		
		case 295:
			return 0;
		
		case 296:
			return 0;
		
		case 297:
			return 0;
		
		case 298:
			return 0;
		
		case 299:
			return 0;
		
		case 300:
			return 0;
		
		case 301:
			return 0;
		
		case 288:
			return 2;
		
		case 290:
			return 2;
		
		case 304:
			return 0;
		
		case 305:
			return 0;
		
		case 306:
			return 0;
		
		case 307:
			return 0;
		
		case 308:
			return 0;
		
		case 309:
			return 0;
		
		case 310:
			return 2;
		
		case 311:
			return 2;
		
		case 312:
			return 2;
		
		case 320:
			return 2;
		
		case 313:
			return 2;
		
		case 315:
			return 0;
		
		case 316:
			return 0;
		
		case 317:
			return 0;
		
		case 318:
			return 0;
		
		default:
	}
	return -1;
}

int func_285(int iParam0, bool bParam1)//Position - 0x743D
{
	switch (iParam0)
	{
		case 198:
			return 15;
		
		case 205:
			return 8;
		
		case 199:
			return 14;
		
		case 203:
			return 122;
		
		case 206:
			return 1;
		
		case 204:
			return 5;
		
		case 207:
			return 6;
		
		case 200:
			return 11;
		
		case 208:
			return 0;
		
		case 209:
			return 2;
		
		case 201:
			return 13;
		
		case 210:
			return 3;
		
		case 202:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 262;
		
		case 139:
			return 263;
		
		case 140:
			return 264;
		
		case 141:
			return 268;
		
		case 143:
			return 269;
		
		case 144:
			return 270;
		
		case 145:
			return 275;
		
		case 146:
			return 286;
		
		case 148:
			return 267;
		
		case 147:
			return 266;
		
		case 151:
			return 147;
		
		case 149:
			return 287;
		
		case 152:
			return 291;
		
		case 153:
			return 292;
		
		case 154:
			return 293;
		
		case 155:
			return 294;
		
		case 156:
			return 295;
		
		case 157:
			return 296;
		
		case 158:
			return 297;
		
		case 159:
			return 298;
		
		case 160:
			return 299;
		
		case 161:
			return 300;
		
		case 162:
			return 301;
		
		case 163:
			return 288;
		
		case 164:
			return 290;
		
		case 165:
			return 304;
		
		case 166:
			return 305;
		
		case 167:
			return 306;
		
		case 168:
			return 307;
		
		case 169:
			return 308;
		
		case 170:
			return 309;
		
		case 171:
			return 310;
		
		case 172:
			return 311;
		
		case 173:
			return 312;
		
		case 174:
			return 313;
		
		case 175:
			return 315;
		
		case 176:
			return 316;
		
		case 177:
			return 317;
		
		case 178:
			return 318;
		
		case 179:
			return 320;
		
		default:
	}
	if (bParam1)
	{
	}
	return 322;
}

int func_286(int iParam0, bool bParam1, bool bParam2)//Position - 0x7A54
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

