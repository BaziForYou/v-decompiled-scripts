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
	int iLocal_16[4] = { 0, 0, 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
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
	fLocal_25 = 0.72f;
	fLocal_26 = 0.42f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_22911 = 0;
	Global_20703 = 0;
	func_18();
	Global_20500.f_1 = 7;
	func_17(Global_20481, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_20481, "SET_HEADER", "CELL_4" /* GXT: Sidetasks */, 0, 0, 0, 0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_20500.f_1 != 9)
		{
			switch (Global_20500.f_1)
			{
				case 7:
					if (Global_22911 == 0)
					{
						func_15();
						func_14();
						func_11();
					}
					break;
				
				case 8:
					if (Global_22911 == 1)
					{
						func_5();
					}
					break;
				
				case 3:
					SCRIPT::TERMINATE_THIS_THREAD();
					break;
				
				default:
					break;
			}
			if (Global_22911 == 0)
			{
				if (func_4())
				{
					func_3();
				}
			}
			else if (func_2(2, Global_20468, 0))
			{
				Global_20478 = 1;
				Global_22911 = 0;
				Global_20500.f_1 = 7;
				func_18();
				func_17(Global_20481, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_20481, "SET_HEADER", "CELL_4" /* GXT: Sidetasks */, 0, 0, 0, 0);
			}
		}
		if (func_1())
		{
			func_3();
		}
	}
}

int func_1()//Position - 0x163
{
	if (((Global_20500.f_1 == 1 || Global_20500.f_1 == 3) || Global_20500.f_1 == 0) || Global_20444 == 1)
	{
		Global_20487 = 1;
		return 1;
	}
	return 0;
}

int func_2(int iParam0, int iParam1, int iParam2)//Position - 0x1A6
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

void func_3()//Position - 0x218
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_4()//Position - 0x224
{
	if (Global_8976 == 1 || Global_20500.f_1 < 7)
	{
		Global_20487 = 1;
		return 1;
	}
	return 0;
}

void func_5()//Position - 0x24D
{
	GRAPHICS::DRAW_RECT(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, false);
	func_6();
}

void func_6()//Position - 0x277
{
	int iVar0;
	
	fLocal_27 = fLocal_25;
	fLocal_28 = fLocal_26;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_27, fLocal_28, &(Global_2058[Global_23133[iLocal_23 /*9*/] /*29*/].f_3), 0);
	fLocal_27 = (fLocal_27 + 0.07f);
	func_10(255, 255, 255, 205);
	if (Global_23133[iLocal_23 /*9*/].f_2.f_1 < 10)
	{
		func_7(fLocal_27, fLocal_28, "CELL_506" /* GXT: ~1~:0~1~ */, Global_23133[iLocal_23 /*9*/].f_2.f_2, Global_23133[iLocal_23 /*9*/].f_2.f_1);
	}
	else
	{
		func_7(fLocal_27, fLocal_28, "CELL_503" /* GXT: ~1~:~1~ */, Global_23133[iLocal_23 /*9*/].f_2.f_2, Global_23133[iLocal_23 /*9*/].f_2.f_1);
	}
	fLocal_27 = (fLocal_27 + 0.07f);
	func_10(255, 255, 255, 205);
	func_7(fLocal_27, fLocal_28, "CELL_505" /* GXT: ~1~/~1~ */, Global_23133[iLocal_23 /*9*/].f_2.f_3, Global_23133[iLocal_23 /*9*/].f_2.f_4);
	fLocal_27 = fLocal_25;
	func_10(255, 255, 255, 205);
	fLocal_28 = (fLocal_28 + 0.02f);
	if (Global_22964[Global_23133[iLocal_23 /*9*/].f_1 /*42*/].f_8 == 0)
	{
		func_9();
	}
	HUD::SET_TEXT_WRAP(0f, 0.93f);
	func_8(fLocal_27, fLocal_28, &(Global_22964[Global_23133[iLocal_23 /*9*/].f_1 /*42*/].f_4), 0);
	fLocal_28 = (fLocal_28 + 0.07f);
	iVar0 = 1;
	while (iVar0 <= Global_22964[Global_23133[iLocal_23 /*9*/].f_1 /*42*/].f_9)
	{
		func_10(255, 255, 255, 255);
		fLocal_28 = (fLocal_28 + 0.04f);
		if (Global_22964[Global_23133[iLocal_23 /*9*/].f_1 /*42*/].f_32[iVar0] == -1)
		{
			func_8(fLocal_27, fLocal_28, &(Global_22964[Global_23133[iLocal_23 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), 0);
		}
		else
		{
			func_7(fLocal_27, fLocal_28, &(Global_22964[Global_23133[iLocal_23 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/]), Global_22964[Global_23133[iLocal_23 /*9*/].f_1 /*42*/].f_27[iVar0], Global_22964[Global_23133[iLocal_23 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_7(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x458
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_8(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x47B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_9()//Position - 0x493
{
	HUD::SET_TEXT_SCALE(0.4f, 0.4f);
	HUD::SET_TEXT_COLOUR(255, 128, 0, 255);
	HUD::SET_TEXT_DROPSHADOW(1, 0, 78, 255, 255);
}

void func_10(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4BD
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_11()//Position - 0x4FC
{
	if (func_2(2, Global_20469, 0))
	{
		iLocal_23 = iLocal_16[iLocal_22];
		Global_22911 = 1;
		func_12(Global_20481, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287" /* GXT: Send Photo(s) */, "CELL_280" /* GXT: Take Photo */, "CELL_285" /* GXT: Move */, "CELL_284" /* GXT: Zoom */, 0);
		func_17(Global_20481, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_20481, "SET_HEADER", "CELL_4" /* GXT: Sidetasks */, 0, 0, 0, 0);
		Global_20500.f_1 = 8;
		Global_22911 = 1;
	}
}

void func_12(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x57A
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
		func_13(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_13(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_13(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_13(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_13(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_13(char* sParam0)//Position - 0x62D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_14()//Position - 0x63F
{
	if (iLocal_29)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_29 = 0;
		}
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (func_2(2, 181, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
			}
		}
		if (func_2(2, 180, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_21)
			{
				iLocal_22 = 0;
			}
		}
	}
	if (iLocal_29 == 0)
	{
		if (func_2(2, Global_20476, 0))
		{
			if (iLocal_22 > 0)
			{
				iLocal_22 = (iLocal_22 - 1);
			}
			iLocal_29 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_2(2, Global_20477, 0))
		{
			iLocal_22++;
			if (iLocal_22 == iLocal_21)
			{
				iLocal_22 = 0;
			}
			iLocal_29 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_15()//Position - 0x6DC
{
	int iVar0;
	
	iVar0 = 0;
	fLocal_27 = fLocal_25;
	fLocal_28 = fLocal_26;
	iLocal_24 = iLocal_21;
	while (iVar0 < iLocal_24)
	{
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_22)
		{
			func_9();
		}
		func_8(fLocal_27, fLocal_28, &(Global_2058[Global_23133[iLocal_16[iVar0] /*9*/] /*29*/].f_3), 0);
		fLocal_27 = (fLocal_27 + 0.07f);
		func_10(255, 255, 255, 205);
		if (Global_23133[iLocal_16[iVar0] /*9*/].f_2.f_1 < 10)
		{
			func_7(fLocal_27, fLocal_28, "CELL_506" /* GXT: ~1~:0~1~ */, Global_23133[iLocal_16[iVar0] /*9*/].f_2.f_2, Global_23133[iLocal_16[iVar0] /*9*/].f_2.f_1);
		}
		else
		{
			func_7(fLocal_27, fLocal_28, "CELL_503" /* GXT: ~1~:~1~ */, Global_23133[iLocal_16[iVar0] /*9*/].f_2.f_2, Global_23133[iLocal_16[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_27 = (fLocal_27 + 0.07f);
		func_10(255, 255, 255, 205);
		func_7(fLocal_27, fLocal_28, "CELL_505" /* GXT: ~1~/~1~ */, Global_23133[iLocal_16[iVar0] /*9*/].f_2.f_3, Global_23133[iLocal_16[iVar0] /*9*/].f_2.f_4);
		fLocal_27 = fLocal_25;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_22)
		{
			func_9();
		}
		fLocal_28 = (fLocal_28 + 0.02f);
		HUD::SET_TEXT_WRAP(0f, 0.93f);
		func_8(fLocal_27, fLocal_28, &(Global_22964[Global_23133[iLocal_16[iVar0] /*9*/].f_1 /*42*/]), 0);
		fLocal_28 = (fLocal_28 + 0.05f);
		iVar0++;
	}
}

void func_16(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x83F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_13(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_13(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_13(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_13(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_13(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_17(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x89A
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

void func_18()//Position - 0x8FD
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	iLocal_21 = 0;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = 0;
		iVar7 = 3;
		Global_23133[iVar7 /*9*/].f_2 = -1;
		Global_23133[iVar7 /*9*/].f_2.f_1 = 0;
		Global_23133[iVar7 /*9*/].f_2.f_2 = 0;
		Global_23133[iVar7 /*9*/].f_2.f_3 = 0;
		Global_23133[iVar7 /*9*/].f_2.f_5 = 0;
		while (iVar6 < 4)
		{
			if (iVar0[iVar6] == 0)
			{
				if (Global_23133[iVar6 /*9*/].f_8 != 0)
				{
					if (func_19(Global_23133[iVar6 /*9*/].f_2, Global_23133[iVar7 /*9*/].f_2))
					{
						iVar7 = iVar6;
					}
				}
			}
			iVar6++;
		}
		iLocal_16[iVar5] = iVar7;
		iVar0[iVar7] = 1;
		if (Global_23133[iVar5 /*9*/].f_8 != 0)
		{
			iLocal_21++;
		}
		iVar5++;
	}
	func_12(Global_20481, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287" /* GXT: Send Photo(s) */, "CELL_280" /* GXT: Take Photo */, 0, 0, 0);
}

int func_19(struct<6> Param0, struct<6> Param6)//Position - 0x9E8
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

