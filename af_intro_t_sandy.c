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
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 15;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_61 = 0;
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
	var uLocal_86 = 0;
	var uLocal_87 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	func_35(29);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_34();
	}
	iLocal_35 = 0;
	func_33(&uLocal_36);
	func_32(&uLocal_36, 1701.7803f, 3225.1482f, 40.0202f);
	func_32(&uLocal_36, 1678.909f, 3287.6023f, 39.9648f);
	func_32(&uLocal_36, 1710.4376f, 3326.4993f, 40.1797f);
	func_32(&uLocal_36, 1738.8787f, 3335.25f, 40.1493f);
	func_32(&uLocal_36, 1768.3873f, 3312.1008f, 40.2875f);
	func_32(&uLocal_36, 1819.2413f, 3225.4495f, 42.9019f);
	func_31(&uLocal_36);
	while (true)
	{
		switch (iLocal_35)
		{
			case 0:
				if (func_23())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var3 = { 1749.71f, 3267.83f, 40.24f };
						if (func_22(Var0, Var3, 75f))
						{
							if (func_21(&uLocal_36, Var0))
							{
								if (Var0.f_2 > 39f && Var0.f_2 < 43f)
								{
									iLocal_35 = 1;
								}
								else
								{
									SYSTEM::WAIT(100);
								}
							}
							else
							{
								SYSTEM::WAIT(100);
							}
						}
						else
						{
							SYSTEM::WAIT(1500);
						}
					}
				}
				else
				{
					SYSTEM::WAIT(1500);
				}
				break;
			
			case 1:
				func_2();
				break;
			
			case 2:
				func_1(29);
				func_34();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1(int iParam0)//Position - 0x1D9
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113810.f_9088.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_113810.f_9088.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x230
{
	func_6(joaat("TEXT_TREV_LOST_HANGER"));
	func_3("SHI_T_SANDY_2" /* GXT: Planes you purchase from websites or that you land inside will be stored at ~HUD_COLOUR_TREVOR~~BLIP_HANGAR~~s~~n~Ground vehicles too large for a garage will also be stored here. */, 0, 0, -1, 10000, 7, 0, 0, 0);
	SYSTEM::WAIT(0);
	func_3("SHI_T_SANDY_3" /* GXT: Helicopters purchased from websites or that you land on the helipad will be stored at ~HUD_COLOUR_TREVOR~~BLIP_HELIPAD~ */, 0, 0, -1, 10000, 7, 0, 0, 0);
	iLocal_35 = 2;
}

void func_3(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x26B
{
	func_4(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_4(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x28C
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
		func_5();
	}
}

void func_5()//Position - 0x45F
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

int func_6(int iParam0)//Position - 0x576
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_113810.f_7691.f_136)
	{
		if (Global_113810.f_7691[iVar0 /*15*/] == iParam0)
		{
			if (Global_43924 != iVar0)
			{
				func_20(iVar0);
				func_12(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_7691.f_198)
	{
		if (Global_113810.f_7691.f_137[iVar0 /*15*/] == iParam0)
		{
			func_12(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_7691.f_650)
	{
		if (Global_113810.f_7691.f_199[iVar0 /*15*/] == iParam0)
		{
			func_11(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_7691.f_764)
	{
		if (Global_113810.f_7691.f_651[iVar0 /*14*/] == iParam0)
		{
			func_8(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_7691.f_866)
	{
		if (Global_113810.f_7691.f_765[iVar0 /*10*/] == iParam0)
		{
			func_7(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_7(int iParam0)//Position - 0x69D
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113810.f_7691.f_866)
	{
		return;
	}
	if (Global_113810.f_7691.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113810.f_7691.f_866 - 2))
		{
			Global_113810.f_7691.f_765[iVar0 /*10*/] = { Global_113810.f_7691.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_113810.f_7691.f_866 > 0)
	{
		Global_113810.f_7691.f_765[(Global_113810.f_7691.f_866 - 1) /*10*/] = { Var1 };
		Global_113810.f_7691.f_866 = (Global_113810.f_7691.f_866 - 1);
	}
}

void func_8(int iParam0)//Position - 0x756
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_113810.f_7691.f_764)
	{
		return;
	}
	if (Global_113810.f_7691.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_113810.f_7691.f_764 - 2))
		{
			Global_113810.f_7691.f_651[iVar0 /*14*/] = { Global_113810.f_7691.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_113810.f_7691.f_764 > 0)
	{
		Global_113810.f_7691.f_651[(Global_113810.f_7691.f_764 - 1) /*14*/] = { Var1 };
		Global_113810.f_7691.f_764 = (Global_113810.f_7691.f_764 - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_9(bool bParam0)//Position - 0x81E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113810.f_7691.f_136)
	{
		if (BitTest(Global_113810.f_7691[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113810.f_7691[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113810.f_7691[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113810.f_7691.f_764)
	{
		if (BitTest(Global_113810.f_7691.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113810.f_7691.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113810.f_7691.f_919[bParam0] = iVar1;
}

bool func_10(int iParam0)//Position - 0x8DC
{
	return iParam0 < 3;
}

void func_11(int iParam0)//Position - 0x8E8
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_113810.f_7691.f_650)
	{
		if (Global_113810.f_7691.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_113810.f_7691.f_650 - 2))
			{
				Global_113810.f_7691.f_199[iVar16 /*15*/] = { Global_113810.f_7691.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_113810.f_7691.f_199[(Global_113810.f_7691.f_650 - 1) /*15*/] = { Var0 };
			Global_113810.f_7691.f_650 = (Global_113810.f_7691.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_12(int iParam0)//Position - 0x995
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_113810.f_7691.f_198)
	{
		if (Global_113810.f_7691.f_137[iVar15 /*15*/] == iParam0)
		{
			func_13(Global_113810.f_7691.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_113810.f_7691.f_198 - 2))
			{
				Global_113810.f_7691.f_137[iVar16 /*15*/] = { Global_113810.f_7691.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_113810.f_7691.f_137[(Global_113810.f_7691.f_198 - 1) /*15*/] = { Var0 };
			Global_113810.f_7691.f_198 = (Global_113810.f_7691.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_13(int iParam0)//Position - 0xA51
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 172)
	{
		if (func_19(iParam0, Global_20500) == 1)
		{
			func_18(iParam0, Global_20500, 0);
			if (func_17(iParam0, Global_20500) == 0)
			{
				iVar0 = Global_20500;
				func_14(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_14(int iParam0, int iParam1)//Position - 0xAA7
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 172)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_16(iParam0, iVar0, 0);
			func_15(iParam0, iVar0, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0xADC
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2058[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113810.f_28053[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_16(int iParam0, int iParam1, int iParam2)//Position - 0xB21
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_2058[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113810.f_28053[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_17(int iParam0, int iParam1)//Position - 0xB66
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2058[iParam0 /*29*/].f_24[iParam1];
}

void func_18(int iParam0, int iParam1, int iParam2)//Position - 0xB90
{
	Global_2058[iParam0 /*29*/].f_19[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113810.f_28053[iParam0 /*29*/].f_19[iParam1] = iParam2;
	}
}

int func_19(int iParam0, int iParam1)//Position - 0xBC1
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2058[iParam0 /*29*/].f_19[iParam1];
}

void func_20(int iParam0)//Position - 0xBEB
{
	bool bVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_113810.f_7691.f_136)
	{
		return;
	}
	uVar1 = Global_113810.f_7691[iParam0 /*15*/].f_2;
	if (Global_113810.f_7691.f_136 > 1)
	{
		bVar0 = iParam0;
		while (bVar0 <= (Global_113810.f_7691.f_136 - 2))
		{
			Global_113810.f_7691[bVar0 /*15*/] = { Global_113810.f_7691[bVar0 + 1 /*15*/] };
			bVar0++;
		}
	}
	if (Global_113810.f_7691.f_136 > 0)
	{
		Global_113810.f_7691[(Global_113810.f_7691.f_136 - 1) /*15*/] = { Var2 };
		Global_113810.f_7691.f_136 = (Global_113810.f_7691.f_136 - 1);
	}
	bVar0 = false;
	while (bVar0 < 3)
	{
		if (BitTest(uVar1, bVar0))
		{
			func_9(bVar0);
		}
		bVar0++;
	}
}

bool func_21(var uParam0, struct<2> Param1, var uParam3)//Position - 0xCC3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_46 < 3)
	{
	}
	bVar0 = false;
	iVar1 = 0;
	iVar2 = (uParam0->f_46 - 1);
	while (iVar1 < uParam0->f_46)
	{
		if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
		{
			if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1.f_0)
			{
				bVar0 = !bVar0;
			}
		}
		iVar2 = iVar1;
		iVar1++;
	}
	return bVar0;
}

bool func_22(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0xD7F
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_23()//Position - 0xDA9
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_25() != 2)
	{
		return 0;
	}
	if (Global_32286)
	{
		return 0;
	}
	if (Global_63479)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			return 0;
		}
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_24())
	{
		return 0;
	}
	return 1;
}

int func_24()//Position - 0xE1F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_25()//Position - 0xE39
{
	func_26();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_26()//Position - 0xE52
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_29(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_28(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_27(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_10(Global_113810.f_2366.f_539.f_4321))
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

bool func_27(int iParam0)//Position - 0xF4F
{
	return Global_43377 == iParam0;
}

int func_28(int iParam0)//Position - 0xF5D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)//Position - 0xF9A
{
	if (func_10(iParam0))
	{
		return func_30(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_30(int iParam0)//Position - 0xFBF
{
	return Global_2058[iParam0 /*29*/];
}

void func_31(var uParam0)//Position - 0xFCE
{
	int iVar0;
	float fVar1;
	
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 < 3)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		uParam0->f_47 = { uParam0->f_47 + *(uParam0[iVar0 /*3*/]) };
		iVar0++;
	}
	uParam0->f_47 = { uParam0->f_47 / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		fVar1 = SYSTEM::VDIST2(uParam0->f_47, *(uParam0[iVar0 /*3*/]));
		if (fVar1 > uParam0->f_50)
		{
			uParam0->f_50 = fVar1;
		}
		iVar0++;
	}
	uParam0->f_50 = SYSTEM::SQRT(uParam0->f_50);
	uParam0->f_51 = 0;
}

void func_32(var uParam0, struct<3> Param1)//Position - 0x106E
{
	if (uParam0->f_51 == 0)
	{
	}
	if (uParam0->f_46 >= 15)
	{
	}
	*(uParam0[uParam0->f_46 /*3*/]) = { Param1 };
	uParam0->f_46++;
}

void func_33(var uParam0)//Position - 0x109F
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_34()//Position - 0x10C6
{
	BRAIN::REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_35(int iParam0)//Position - 0x10DA
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_113810.f_9088.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_113810.f_9088.f_99.f_219[iVar0]), bVar1);
	return 1;
}

