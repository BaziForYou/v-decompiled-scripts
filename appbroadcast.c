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
	int* iLocal_26 = NULL;
	var uLocal_27 = 0;
	struct<2> Local_28 = { 0, 0 } ;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	struct<2> Local_32 = { 0, 0 } ;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	struct<2> Local_36 = { 0, 0 } ;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	struct<2> Local_40 = { 0, 0 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<2> Local_44 = { 0, 0 } ;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	struct<2> Local_48 = { 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
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
	StringCopy(&Local_28, "CELL_212" /* GXT: YES */, 16);
	StringCopy(&Local_32, "CELL_213" /* GXT: NO */, 16);
	StringCopy(&Local_36, "CELL_39" /* GXT: Broadcast */, 16);
	StringCopy(&Local_40, "CELL_MP_300" /* GXT: Activate? */, 16);
	StringCopy(&Local_44, "CELL_MP_301" /* GXT: Deactivate? */, 16);
	StringCopy(&Local_48, "CELL_MP_302" /* GXT: Unavailable */, 16);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_47(&iLocal_26);
	func_38();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			func_36(1);
			func_35();
		}
		if (!Global_20500.f_1 == 9 && Global_20500.f_1 > 3)
		{
			func_3();
			if (Global_20500.f_1 != 8)
			{
				if (func_2())
				{
					func_35();
				}
			}
		}
		if (func_1())
		{
			func_35();
		}
	}
}

int func_1()//Position - 0xDE
{
	if (((Global_20500.f_1 == 1 || Global_20500.f_1 == 3) || Global_20500.f_1 == 0) || Global_20444 == 1)
	{
		Global_20487 = 1;
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x121
{
	if (Global_8976 == 1 || Global_20500.f_1 < 7)
	{
		Global_20487 = 1;
		return 1;
	}
	return 0;
}

void func_3()//Position - 0x14A
{
	if (func_31(&iLocal_26))
	{
		if (func_17())
		{
			if (Global_2694515)
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
				func_10(1080503477, func_11(1, 1));
				Global_2694515 = 0;
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(true);
				func_10(1793940769, func_11(1, 1));
				Global_2694515 = 1;
			}
			func_4(0);
			return;
		}
	}
}

void func_4(int iParam0)//Position - 0x1A6
{
	if (func_9())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_8())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
		}
	}
	if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8371, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21845 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 30);
	}
	if (!func_5())
	{
		Global_20500.f_1 = 3;
	}
}

int func_5()//Position - 0x230
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x257
{
	if (bParam0)
	{
		if (func_7(0))
		{
			Global_20704 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20437);
			}
			Global_20428 = { Global_20446[Global_20445 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
	else if (Global_20704 == 1)
	{
		Global_20704 = 0;
		Global_20428 = { Global_20453[Global_20445 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20437);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20428);
		}
	}
}

int func_7(int iParam0)//Position - 0x2CB
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

bool func_8()//Position - 0x322
{
	return BitTest(Global_1963795, 5);
}

bool func_9()//Position - 0x330
{
	return BitTest(Global_1963795, 19);
}

void func_10(int iParam0, int iParam1)//Position - 0x33F
{
	struct<4> Var0;
	
	Var0.f_0 = 800157557;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9999);
	if (!iParam1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam1);
		}
	}
}

int func_11(int iParam0, bool bParam1)//Position - 0x384
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_16(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_12(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_12(int iParam0, int iParam1)//Position - 0x3E9
{
	bool bVar0;
	
	if (!func_15(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_13(-1, 0) == 8;
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

int func_13(int iParam0, bool bParam1)//Position - 0x442
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_14();
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

int func_14()//Position - 0x483
{
	return Global_1574918;
}

int func_15(var uParam0)//Position - 0x48F
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

int func_16(int iParam0, bool bParam1, bool bParam2)//Position - 0x4B1
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

int func_17()//Position - 0x511
{
	if (!func_25(PLAYER::PLAYER_ID(), 1) && func_18())
	{
		return 1;
	}
	return 0;
}

int func_18()//Position - 0x534
{
	if (!func_19())
	{
		return 0;
	}
	return 1;
}

int func_19()//Position - 0x549
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_24())
	{
		return 1;
	}
	if (func_23())
	{
		return 1;
	}
	return func_20(120, -1);
}

int func_20(int iParam0, int iParam1)//Position - 0x579
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_21(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_21(int iParam0, var uParam1)//Position - 0x59D
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_22(uParam1));
}

int func_22(var uParam0)//Position - 0x5B2
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_14();
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

bool func_23()//Position - 0x5E6
{
	return Global_1575051;
}

bool func_24()//Position - 0x5F2
{
	return Global_1575053;
}

bool func_25(int iParam0, bool bParam1)//Position - 0x5FE
{
	if (func_30() != 0)
	{
		return func_29(iParam0) != 0;
	}
	return func_26(iParam0, bParam1, 0);
}

int func_26(int iParam0, bool bParam1, bool bParam2)//Position - 0x625
{
	if (bParam1)
	{
		if (func_27(iParam0))
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

bool func_27(int iParam0)//Position - 0x657
{
	return func_28(iParam0);
}

var func_28(int iParam0)//Position - 0x665
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_29(int iParam0)//Position - 0x67C
{
	if (func_16(iParam0, 0, 1))
	{
		return Global_2657704[iParam0 /*463*/].f_1;
	}
	return 0;
}

int func_30()//Position - 0x69E
{
	return Global_32283;
}

int func_31(int* iParam0)//Position - 0x6A9
{
	if (!BitTest(*iParam0, 0))
	{
		return 0;
	}
	if (Global_20478)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, Global_20469))
	{
		return 0;
	}
	func_32();
	Global_20478 = 1;
	return 1;
}

void func_32()//Position - 0x6ED
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20489, true);
		func_33();
	}
}

void func_33()//Position - 0x712
{
	if (func_34())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_34()//Position - 0x726
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78689)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4542580 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_35()//Position - 0x76D
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_36(bool bParam0)//Position - 0x779
{
	if (bParam0)
	{
		func_37();
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8371, 16);
		}
		Global_20500.f_1 = 1;
		if (func_7(0))
		{
			func_4(0);
		}
	}
	else if (Global_20500.f_1 == 1)
	{
		if (!Global_20500.f_1 == 0)
		{
			Global_20500.f_1 = 3;
		}
	}
}

void func_37()//Position - 0x7DC
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}
}

void func_38()//Position - 0x805
{
	if (!Global_20500.f_1 == 7)
	{
		Global_20500.f_1 = 7;
	}
	func_46(Global_20481, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_17())
	{
		if (Global_2694515)
		{
			func_45(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &Local_44, 0, 0, 0, 0);
		}
		else
		{
			func_45(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &Local_40, 0, 0, 0, 0);
		}
	}
	else
	{
		func_45(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(12), -1f, -1f, &Local_48, 0, 0, 0, 0);
	}
	func_46(Global_20481, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(13), -1082130432, -1082130432, -1082130432, -1082130432);
	func_42(&Local_36);
	if (func_17())
	{
		func_39(13, &Local_28, 1, "", 4, &Local_32, &iLocal_26);
	}
	else
	{
		func_39(1, "", 1, "", 4, &Local_32, &iLocal_26);
	}
}

void func_39(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int* iParam6)//Position - 0x915
{
	func_40(2, iParam0, sParam1, 0, iParam6, -1);
	func_40(1, iParam2, sParam3, 1, iParam6, 17);
	func_40(3, iParam4, sParam5, 2, iParam6, -1);
}

void func_40(int iParam0, int iParam1, char* sParam2, int iParam3, int* iParam4, int iParam5)//Position - 0x945
{
	if (iParam1 == 1)
	{
		func_45(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(iParam4, iParam3);
		func_41(iParam5, 0);
		return;
	}
	if (Global_20488)
	{
		func_45(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		MISC::SET_BIT(iParam4, iParam3);
		func_41(iParam5, 1);
		return;
	}
	func_45(Global_20481, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	MISC::SET_BIT(iParam4, iParam3);
	func_41(iParam5, 1);
}

void func_41(int iParam0, bool bParam1)//Position - 0x9E7
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&Global_8370, iParam0);
		return;
	}
	MISC::CLEAR_BIT(&Global_8370, iParam0);
}

void func_42(char* sParam0)//Position - 0xA12
{
	func_43(Global_20481, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_43(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0xA2A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_44(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_44(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_44(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_44(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_44(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_44(char* sParam0)//Position - 0xA85
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_45(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xA97
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_44(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_44(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_44(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_44(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_44(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_46(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xB4A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_47(var uParam0)//Position - 0xBAD
{
	*uParam0 = 0;
}

