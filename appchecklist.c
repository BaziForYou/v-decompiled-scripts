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
	int iLocal_18[94] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118[5] = { 0, 0, 0, 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	bool bLocal_128 = 0;
	struct<6> Local_129[5];
	int iLocal_160[5] = { 0, 0, 0, 0, 0 };
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_33(Global_20481, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_31();
	func_30();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20500.f_1 != 9)
		{
			switch (Global_20500.f_1)
			{
				case 7:
					func_25();
					if (iLocal_117 == 0)
					{
						func_15();
					}
					break;
				
				case 8:
					if (iLocal_117 == 2)
					{
						func_25();
						if (bLocal_128)
						{
							func_10();
						}
					}
					if (iLocal_117 == 1)
					{
						func_25();
					}
					if (func_9(2, Global_20468, 0))
					{
						func_8();
						Global_20478 = 1;
						if (iLocal_117 == 2 || iLocal_117 == 1)
						{
							func_33(Global_20481, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_30();
							if (Global_20500.f_1 > 3)
							{
								Global_20500.f_1 = 7;
							}
						}
						if (iLocal_117 == 3)
						{
							func_33(Global_20481, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
							func_4();
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_20502 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x16A
{
	if (((Global_20500.f_1 == 1 || Global_20500.f_1 == 3) || Global_20500.f_1 == 0) || Global_20444 == 1)
	{
		Global_20487 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1AD
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()//Position - 0x1B9
{
	if (Global_8976 == 1 || Global_20500.f_1 < 7)
	{
		Global_20487 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	bLocal_128 = false;
	func_31();
	iLocal_113 = 0;
	func_33(Global_20481, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	if (Global_20496 == 0)
	{
		while (iVar0 < 5)
		{
			func_7(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_113), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_129[iVar0 /*6*/]), 0, 0, 0, 0);
			iLocal_118[iLocal_113] = iVar0;
			iLocal_113++;
			iVar0++;
		}
	}
	if (Global_20496 == 1)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 5)
		{
			iLocal_160[iVar2] = 0;
			iVar2++;
		}
		iVar1 = (5 - 1);
		while (iVar0 < 5)
		{
			if (Local_129[iVar1 /*6*/].f_5 > 0)
			{
				if (iLocal_160[iVar1] == 0)
				{
					func_7(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iLocal_113), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Local_129[iVar1 /*6*/]), 0, 0, 0, 0);
					iLocal_118[iLocal_113] = iVar1;
					iLocal_113++;
					iLocal_160[iVar1] = 1;
				}
			}
			if (iVar1 > 0)
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
	}
	if (iLocal_113 == 0)
	{
		func_7(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3092" /* GXT: No progress made. */, 0, 0, 0, 0);
	}
	else
	{
		bLocal_128 = true;
	}
	func_33(Global_20481, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_20481, "SET_HEADER", "CELL_23" /* GXT: Check List */, 0, 0, 0, 0);
	if (Global_20488)
	{
		func_7(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227" /* GXT: SORT */, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8370, 17);
	}
	else
	{
		func_7(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_8370, 17);
	}
	iLocal_117 = 2;
}

void func_5(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x400
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_6(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_6(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_6(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_6(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_6(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_6(char* sParam0)//Position - 0x45B
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_7(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x46D
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
		func_6(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_6(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_6(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_6(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_6(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_8()//Position - 0x520
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_20489, true);
	}
}

int func_9(int iParam0, int iParam1, int iParam2)//Position - 0x541
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_10()//Position - 0x5B3
{
	int iVar0;
	
	if (Global_20478 == 0)
	{
		if (func_9(2, Global_20469, 0))
		{
			func_12();
			Global_20478 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "GET_CURRENT_SELECTION");
			iLocal_127 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_127))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_127);
			iLocal_115 = iLocal_118[iVar0];
			if (Global_20500.f_1 > 3)
			{
				Global_20500.f_1 = 8;
			}
			func_33(Global_20481, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_115 == 1)
			{
			}
			func_11();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_3206" /* GXT: - Total Available: ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_124);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(18);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_3101" /* GXT: - Total Complete: ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_125);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_33(Global_20481, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_5(Global_20481, "SET_HEADER", &(Local_129[iLocal_115 /*6*/]), 0, 0, 0, 0);
			func_7(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_8370, 17);
			if (Global_20488)
			{
				func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
			}
			else
			{
				func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			iLocal_117 = 3;
		}
	}
}

void func_11()//Position - 0x743
{
	switch (iLocal_115)
	{
		case 0:
			iLocal_124 = Global_113529;
			iLocal_125 = Global_113546;
			break;
		
		case 1:
			iLocal_124 = (Global_113530 + Global_113531);
			iLocal_125 = (Global_113547 + Global_113548);
			break;
		
		case 2:
			iLocal_124 = Global_113532;
			iLocal_125 = Global_113549;
			break;
		
		case 3:
			iLocal_124 = Global_113533;
			iLocal_125 = Global_113550;
			break;
		
		case 4:
			iLocal_124 = (Global_113534 + Global_113535);
			iLocal_125 = (Global_113551 + Global_113552);
			break;
		
		default:
			iLocal_124 = 0;
			iLocal_125 = 0;
			break;
	}
}

void func_12()//Position - 0x7D8
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_20489, true);
		func_13();
	}
}

void func_13()//Position - 0x7FD
{
	if (func_14())
	{
		MOBILE::CELL_SET_INPUT(5);
	}
}

int func_14()//Position - 0x811
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

void func_15()//Position - 0x858
{
	if (Global_20478 == 0)
	{
		if (func_9(2, Global_20469, 0))
		{
			func_12();
			Global_20478 = 1;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "GET_CURRENT_SELECTION");
			iLocal_127 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_127))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_126 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_127);
			if (Global_20500.f_1 > 3)
			{
				Global_20500.f_1 = 8;
				if (iLocal_126 == 0)
				{
					iLocal_117 = 1;
					func_16();
				}
				else
				{
					iLocal_117 = 2;
					func_4();
				}
			}
		}
	}
}

void func_16()//Position - 0x8CD
{
	int iVar0;
	
	iLocal_113 = 0;
	func_20();
	iVar0 = 0;
	func_33(Global_20481, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_17(0))
	{
		func_7(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_229" /* GXT: On Active Mission */, 0, 0, 0, 0);
	}
	else
	{
		while (iVar0 < Global_95814)
		{
			func_7(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(0), -1f, -1f, &(Global_95605[iVar0 /*4*/]), 0, 0, 0, 0);
			iLocal_113++;
			iLocal_18[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_18[1] == 99)
	{
	}
	func_33(Global_20481, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_20481, "SET_HEADER", "CELL_3301" /* GXT: Open Missions */, 0, 0, 0, 0);
	if (func_17(0) || Global_95814 == 0)
	{
		func_7(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8370, 17);
		func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_8370, 17);
		if (Global_20488)
		{
			func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		}
		else
		{
			func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
	else if (Global_20488)
	{
		func_7(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227" /* GXT: SORT */, 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_20481, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_117 = 1;
}

int func_17(int iParam0)//Position - 0xACD
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	if (func_18(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0)//Position - 0xAEF
{
	return func_19(iParam0, Global_43377);
}

int func_19(int iParam0, int iParam1)//Position - 0xB00
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

void func_20()//Position - 0xCE1
{
	bool bVar0;
	int iVar1;
	
	Global_95814 = 0;
	bVar0 = false;
	while (bVar0 < 7)
	{
		if (Global_91565[bVar0 /*5*/] != -1)
		{
			if (Global_95814 < 52)
			{
				iVar1 = Global_78960.f_109[Global_91565[bVar0 /*5*/] /*4*/];
				MemCopy(&(Global_95605[Global_95814 /*4*/]), {func_24(iVar1)}, 4);
				Global_95814++;
			}
			else
			{
				return;
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 63)
	{
		if ((BitTest(Global_113810.f_18577[bVar0 /*6*/], 0) && BitTest(Global_113810.f_18577[bVar0 /*6*/], 1)) && !BitTest(Global_113810.f_18577[bVar0 /*6*/], 3))
		{
			if (Global_95814 < 52)
			{
				MemCopy(&(Global_95605[Global_95814 /*4*/]), {func_22(bVar0)}, 4);
				Global_95814++;
			}
			else
			{
				return;
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < 20)
	{
		if (BitTest(Global_113810.f_9088.f_99.f_219[0], bVar0))
		{
			if (Global_95814 < 52)
			{
				StringCopy(&(Global_95605[Global_95814 /*4*/]), func_21(bVar0), 16);
				Global_95814++;
			}
			else
			{
				return;
			}
		}
		bVar0++;
	}
}

char* func_21(bool bParam0)//Position - 0xE10
{
	switch (bParam0)
	{
		case 0:
			return "MG_BJUM" /* GXT: Base Jumping */;
			break;
		
		case 1:
			return "MG_DART" /* GXT: Darts */;
			break;
		
		case 2:
			return "MG_GOLF" /* GXT: Golf */;
			break;
		
		case 3:
			return "MG_HUNT" /* GXT: Hunting */;
			break;
		
		case 4:
			return "MG_OFFR" /* GXT: Off-Road Races */;
			break;
		
		case 5:
			return "MG_PILO" /* GXT: Flight School */;
			break;
		
		case 6:
			return "MG_RMPG" /* GXT: Rampages */;
			break;
		
		case 7:
			return "MG_SERA" /* GXT: Sea Races */;
			break;
		
		case 8:
			return "MG_SRAC" /* GXT: Street Races */;
			break;
		
		case 9:
			return "MG_STRP" /* GXT: Stripclub */;
			break;
		
		case 10:
			return "MG_STNT" /* GXT: Stunt Planes */;
			break;
		
		case 11:
			return "MG_SHTR" /* GXT: Shooting Range */;
			break;
		
		case 12:
			return "MG_TAXI" /* GXT: Taxi Jobs */;
			break;
		
		case 13:
			return "MG_TENN" /* GXT: Tennis */;
			break;
		
		case 14:
			return "MG_TOWI" /* GXT: Towing */;
			break;
		
		case 15:
			return "MG_TRFA" /* GXT: Trafficking - Air */;
			break;
		
		case 16:
			return "MG_TRFG" /* GXT: Trafficking - Ground */;
			break;
		
		case 17:
			return "MG_TRIA" /* GXT: Triathlon */;
			break;
		
		case 18:
			return "MG_YOGA" /* GXT: Yoga */;
			break;
		
		case 19:
			return "MG_CRCE" /* GXT: Stock Car Races */;
			break;
	}
	return "INVALID!";
}

struct<2> func_22(int iParam0)//Position - 0xF5C
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_23(iParam0) };
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

struct<2> func_23(int iParam0)//Position - 0xF94
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

struct<2> func_24(int iParam0)//Position - 0x13E1
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_91601[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_113810.f_9088.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

void func_25()//Position - 0x144A
{
	if (iLocal_116)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_116 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (func_9(2, 181, 0))
		{
			if (iLocal_114 > 0)
			{
				iLocal_114 = (iLocal_114 - 1);
			}
			func_28();
		}
		if (func_9(2, 180, 0))
		{
			iLocal_114++;
			if (iLocal_114 == iLocal_113)
			{
				iLocal_114 = 0;
			}
			func_26();
		}
	}
	if (iLocal_116 == 0)
	{
		if (func_9(2, Global_20476, 0))
		{
			if (iLocal_114 > 0)
			{
				iLocal_114 = (iLocal_114 - 1);
			}
			func_28();
			iLocal_116 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_9(2, Global_20477, 0))
		{
			iLocal_114++;
			if (iLocal_114 == iLocal_113)
			{
				iLocal_114 = 0;
			}
			func_26();
			iLocal_116 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_26()//Position - 0x14F7
{
	func_33(Global_20481, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, true);
	func_27();
}

void func_27()//Position - 0x1534
{
	if (func_14())
	{
		if (Global_20709 == 0)
		{
			MOBILE::CELL_SET_INPUT(2);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(1);
		}
	}
}

void func_28()//Position - 0x1557
{
	func_33(Global_20481, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_20489, true);
	func_29();
}

void func_29()//Position - 0x1594
{
	if (func_14())
	{
		if (Global_20709 == 0)
		{
			MOBILE::CELL_SET_INPUT(1);
		}
		else
		{
			MOBILE::CELL_SET_INPUT(2);
		}
	}
}

void func_30()//Position - 0x15B7
{
	func_33(Global_20481, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_7(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3301" /* GXT: Open Missions */, 0, 0, 0, 0);
	func_7(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(18), SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(0), -1f, -1f, "CELL_3302" /* GXT: Progress */, 0, 0, 0, 0);
	iLocal_113 = 2;
	func_33(Global_20481, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_20481, "SET_HEADER", "CELL_23" /* GXT: Check List */, 0, 0, 0, 0);
	if (Global_20488)
	{
		func_7(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /* GXT: SELECT */, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /* GXT: BACK */, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227" /* GXT: SORT */, 0, 0, 0, 0);
	}
	else
	{
		func_7(Global_20481, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_20481, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_117 = 0;
}

void func_31()//Position - 0x16F1
{
	func_32(0, "CELL_3001" /* GXT: Missions */, 1, Global_113546);
	func_32(1, "CELL_3008" /* GXT: Hobbies and Pastimes */, 3, Global_113546);
	func_32(2, "CELL_3004" /* GXT: Strangers and Freaks */, 7, Global_113549);
	func_32(3, "CELL_3005" /* GXT: Random Events */, 9, Global_113550);
	func_32(4, "CELL_3007" /* GXT: Miscellaneous */, 11, Global_113551);
}

void func_32(int iParam0, char* sParam1, int iParam2, var uParam3)//Position - 0x1741
{
	StringCopy(&(Local_129[iParam0 /*6*/]), sParam1, 16);
	Local_129[iParam0 /*6*/].f_4 = iParam2;
	Local_129[iParam0 /*6*/].f_5 = uParam3;
	if (Local_129[0 /*6*/].f_4 == 1)
	{
	}
}

void func_33(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x1772
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

