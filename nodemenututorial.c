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
	struct<114> Local_43 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	var uLocal_160 = 0;
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
	func_92();
	while (true)
	{
		if (func_84())
		{
			func_81();
			return;
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x93
{
	if (!bLocal_157)
	{
		bLocal_157 = func_80(&Local_43);
		return;
	}
	func_2(&Local_43);
}

int func_2(int* iParam0)//Position - 0xB3
{
	if (!func_79(iParam0))
	{
		return 1;
	}
	if (func_15(iParam0))
	{
		return 1;
	}
	func_3(iParam0);
	return 0;
}

int func_3(int* iParam0)//Position - 0xDE
{
	bool bVar0;
	
	bVar0 = func_12(iParam0);
	if (bVar0)
	{
		if (!func_6(iParam0))
		{
			return 0;
		}
	}
	func_5(iParam0);
	if (!bVar0)
	{
		func_4(iParam0);
	}
	return 1;
}

void func_4(int* iParam0)//Position - 0x114
{
	if (iParam0->f_111 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_111);
}

void func_5(int* iParam0)//Position - 0x12C
{
	if (iParam0->f_112 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_112);
}

int func_6(int* iParam0)//Position - 0x144
{
	if (!func_80(iParam0))
	{
		return 0;
	}
	if (!func_11(iParam0))
	{
		return 0;
	}
	func_9(iParam0, 0);
	func_7(iParam0, 1);
	return 1;
}

void func_7(int* iParam0, int iParam1)//Position - 0x177
{
	func_8(iParam0, iParam1);
}

void func_8(int* iParam0, int iParam1)//Position - 0x187
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_9(int* iParam0, int iParam1)//Position - 0x197
{
	func_10(iParam0, iParam1);
}

void func_10(int* iParam0, int iParam1)//Position - 0x1A7
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_11(int* iParam0)//Position - 0x1B7
{
	if (iParam0->f_107 == 0)
	{
		return 1;
	}
	Stack.Push(iParam0);
	Call_Loc(iParam0->f_107);
	return StackVal;
}

bool func_12(int* iParam0)//Position - 0x1D2
{
	return (func_13(iParam0, 1) || !func_13(iParam0, 0));
}

bool func_13(int* iParam0, int iParam1)//Position - 0x1EF
{
	return func_14(iParam0, iParam1);
}

bool func_14(var uParam0, int iParam1)//Position - 0x1FF
{
	return BitTest(*uParam0, iParam1);
}

int func_15(int* iParam0)//Position - 0x20D
{
	func_76(iParam0);
	func_71();
	if (func_53(iParam0))
	{
		return 0;
	}
	if (!func_13(iParam0, 1))
	{
		func_47(iParam0);
	}
	func_43(iParam0);
	if (func_13(iParam0, 2))
	{
		func_16(iParam0, 0);
		return 1;
	}
	return 0;
}

void func_16(int* iParam0, bool bParam1)//Position - 0x259
{
	if (bParam1)
	{
		func_7(iParam0, 2);
	}
	func_39(iParam0);
	func_7(iParam0, 3);
	func_35(iParam0);
	func_18(iParam0, 0);
	func_17(iParam0);
}

void func_17(int* iParam0)//Position - 0x28E
{
	if (iParam0->f_113 == 0)
	{
		return;
	}
	Call_Loc(iParam0->f_113);
}

int func_18(int* iParam0, int iParam1)//Position - 0x2A6
{
	struct<33> Var0;
	
	if (!func_30(iParam0, iParam1))
	{
		return 0;
	}
	iParam0->f_1 = iParam1;
	Var0 = { func_29(iParam0) };
	MISC::COPY_SCRIPT_STRUCT(&(iParam0->f_72), &Var0, 33);
	if (!func_28(&(iParam0->f_6), iParam1, &(iParam0->f_72)))
	{
		return 0;
	}
	if (!func_27(&(iParam0->f_72)) && func_26(&(iParam0->f_72)))
	{
		func_25(iParam0, iParam0->f_1);
		func_24(&(iParam0->f_72));
	}
	else
	{
		func_25(iParam0, -1);
	}
	func_19(iParam0, &(iParam0->f_72));
	return 1;
}

void func_19(int* iParam0, var uParam1)//Position - 0x332
{
	int iVar0;
	char* sVar1;
	
	if (func_14(iParam0, 3))
	{
		func_22(iParam0, func_23(uParam1));
		return;
	}
	iVar0 = func_21(uParam1);
	if (iVar0 != 0)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam0->f_1);
		Call_Loc(iVar0);
		return;
	}
	sVar1 = func_20(uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	func_22(iParam0, sVar1);
}

var func_20(var uParam0)//Position - 0x389
{
	return uParam0->f_4;
}

var func_21(var uParam0)//Position - 0x395
{
	return uParam0->f_11;
}

void func_22(var uParam0, char* sParam1)//Position - 0x3A1
{
	if (uParam0->f_108 == 0)
	{
		return;
	}
	Stack.Push(sParam1);
	Call_Loc(uParam0->f_108);
}

var func_23(var uParam0)//Position - 0x3BB
{
	return uParam0->f_5;
}

int func_24(var uParam0)//Position - 0x3C7
{
	if (uParam0->f_17 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_17);
	return StackVal;
}

void func_25(var uParam0, int iParam1)//Position - 0x3E0
{
	if (uParam0->f_109 == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_109);
}

int func_26(var uParam0)//Position - 0x3FA
{
	if (uParam0->f_15 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_15);
	return StackVal;
}

int func_27(var uParam0)//Position - 0x413
{
	if (uParam0->f_14 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_14);
	return StackVal;
}

int func_28(var uParam0, int iParam1, var uParam2)//Position - 0x42C
{
	if (uParam0->f_9 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Stack.Push(uParam2);
	Call_Loc(uParam0->f_9);
	switch (StackVal)
	{
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 1:
			return 0;
		
		default:
	}
	return 0;
}

struct<33> func_29(var uParam0)//Position - 0x46D
{
	struct<33> Var0;
	
	if (uParam0->f_105 != 0)
	{
		Call_Loc(uParam0->f_105);
		return StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal;
	}
	Var0.f_8 = -1;
	return Var0;
}

int func_30(int* iParam0, int iParam1)//Position - 0x493
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_31(&(iParam0->f_6));
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = -1;
	}
	if (iParam1 < iVar0 || iParam1 > iVar1)
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)//Position - 0x4CB
{
	return func_32((func_33(uParam0) - 1), 0);
}

int func_32(int iParam0, int iParam1)//Position - 0x4E0
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_33(var uParam0)//Position - 0x4F6
{
	int iVar0;
	struct<9> Var1;
	int iVar34;
	
	iVar0 = func_34(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (uParam0->f_8 == -1)
	{
		uParam0->f_8 = 0;
		Var1.f_8 = -1;
		iVar34 = -1;
		while (iVar34 != 2)
		{
			Stack.Push(uParam0->f_8);
			Stack.Push(&Var1);
			Call_Loc(iVar0);
			iVar34 = StackVal;
			if (iVar34 != 2)
			{
				uParam0->f_8++;
			}
		}
	}
	return uParam0->f_8;
}

int func_34(var* uParam0)//Position - 0x551
{
	return uParam0->f_9;
}

void func_35(int* iParam0)//Position - 0x55D
{
	func_36(iParam0, &(iParam0->f_39), 1, 1);
}

void func_36(int* iParam0, var* uParam1, bool bParam2, bool bParam3)//Position - 0x571
{
	int iVar0;
	
	MISC::COPY_SCRIPT_STRUCT(&(iParam0->f_6), uParam1, 33);
	if (bParam3)
	{
		func_38(&(iParam0->f_6));
	}
	if (bParam2)
	{
		iVar0 = func_37(&(iParam0->f_6));
		func_18(iParam0, iVar0);
		func_76(iParam0);
	}
	func_9(iParam0, 1);
}

var func_37(var uParam0)//Position - 0x5B7
{
	return uParam0->f_6;
}

void func_38(var uParam0)//Position - 0x5C3
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_21);
}

void func_39(int* iParam0)//Position - 0x5DB
{
	if (func_13(iParam0, 5) && func_42(&(iParam0->f_72)))
	{
		func_40(&(iParam0->f_72), 3, "");
	}
	func_7(iParam0, 5);
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_5 = 0;
}

void func_40(var uParam0, int iParam1, char* sParam2)//Position - 0x61B
{
	int iVar0;
	
	iVar0 = func_41(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(iParam1);
	Stack.Push(sParam2);
	Call_Loc(iVar0);
}

int func_41(var uParam0)//Position - 0x63B
{
	return uParam0->f_32;
}

bool func_42(var uParam0)//Position - 0x647
{
	return func_41(uParam0) != 0;
}

void func_43(int* iParam0)//Position - 0x657
{
	func_45(iParam0);
	if (func_44(&(iParam0->f_72)))
	{
		func_19(iParam0, &(iParam0->f_72));
	}
}

bool func_44(var uParam0)//Position - 0x67A
{
	return uParam0->f_12;
}

void func_45(int* iParam0)//Position - 0x686
{
	if (func_46(&(iParam0->f_72)))
	{
		func_9(iParam0, 1);
	}
}

int func_46(var uParam0)//Position - 0x6A0
{
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_22);
	return StackVal;
}

void func_47(int* iParam0)//Position - 0x6B9
{
	if (!func_52(&(iParam0->f_72)))
	{
		if (func_50(&(iParam0->f_6), iParam0))
		{
			func_9(iParam0, 1);
		}
	}
	if (func_48(&(iParam0->f_72), iParam0))
	{
		func_9(iParam0, 1);
	}
}

int func_48(var uParam0, int* iParam1)//Position - 0x6F5
{
	int iVar0;
	
	iVar0 = func_49(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

var func_49(var uParam0)//Position - 0x716
{
	return uParam0->f_28;
}

int func_50(var uParam0, var uParam1)//Position - 0x722
{
	int iVar0;
	
	iVar0 = func_51(uParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Stack.Push(uParam0);
	Call_Loc(iVar0);
	return StackVal;
}

var func_51(var uParam0)//Position - 0x743
{
	return uParam0->f_31;
}

bool func_52(var uParam0)//Position - 0x74F
{
	return uParam0->f_29;
}

int func_53(int* iParam0)//Position - 0x75B
{
	if (func_13(iParam0, 3))
	{
		func_62(iParam0);
		return 1;
	}
	if (func_13(iParam0, 5))
	{
		func_54(iParam0);
		return 1;
	}
	return 0;
}

void func_54(int* iParam0)//Position - 0x78C
{
	if (!func_42(&(iParam0->f_72)))
	{
		func_7(iParam0, 5);
		return;
	}
	if (!func_55(&(iParam0->f_3), &(iParam0->f_4), &(iParam0->f_5), 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, -1, 0, 0, 0))
	{
		return;
	}
	func_40(&(iParam0->f_72), iParam0->f_3, MISC::GET_ONSCREEN_KEYBOARD_RESULT());
	func_39(iParam0);
	func_9(iParam0, 1);
}

int func_55(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, char* sParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24, bool bParam25, bool bParam26, bool bParam27, bool bParam28, bool bParam29, int iParam30, int iParam31, bool bParam32, char* sParam33, bool bParam34, int iParam35, bool bParam36, bool bParam37, bool bParam38)//Position - 0x802
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (bParam3)
			{
				if (iParam7 == 6)
				{
					iVar6 = 121;
				}
				else if (iParam7 == 7)
				{
					iVar6 = 63;
				}
				else if (func_61())
				{
					iVar6 = 21;
				}
				else
				{
					iVar6 = 51;
				}
				if (*iParam1 == 0)
				{
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						if (func_61())
						{
							sVar4 = "FMMC_KEY_TIS2SJ";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP2";
						}
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_KEY_TIP7";
						iVar6 = 21;
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_KEY_TIP5";
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_KEY_TIP6";
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_capture_creator")) > 0)
						{
							iVar6 = 21;
						}
						else
						{
							iVar6 = 23;
						}
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_KEY_TIP10" /* GXT: Enter Synopsis (MAX 125 characters): */;
					}
					else if (iParam7 == 8)
					{
						sVar4 = "FMMC_KEY_TXT7";
					}
					else if (iParam7 == 9)
					{
						sVar4 = "FMMC_KEY_TXT8";
					}
					else if (iParam7 == 10)
					{
						sVar4 = "FMMC_KEY_VSS";
					}
				}
				else if (func_61())
				{
					sVar4 = "FMMC_KEY_TIS2FJ";
				}
				else
				{
					sVar4 = "FMMC_KEY_TIP2F";
				}
				if (MISC::IS_XBOX360_VERSION())
				{
					sVar5 = sVar4;
					if ((iParam7 == 0 || iParam7 == 1) || iParam7 == 2)
					{
						sVar4 = "FMMC_SS_RL_35";
					}
					else if (iParam7 == 3)
					{
						sVar4 = "FMMC_SS_RL_32";
					}
					else if (iParam7 == 4)
					{
						sVar4 = "FMMC_SS_RL_33";
					}
					else if (iParam7 == 5)
					{
						sVar4 = "FMMC_SS_RL_34";
					}
					else if (iParam7 == 6)
					{
						sVar4 = "FMMC_SS_RL_49";
					}
					else if (iParam7 == 7)
					{
						sVar4 = "FMMC_SS_RL_57";
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					iVar7 = 6;
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
				{
					iVar7 = 0;
				}
				else
				{
					iVar7 = 1;
				}
				if (bParam24)
				{
					if (bParam26)
					{
						sVar4 = "LINE_NUMBER";
					}
					else
					{
						sVar4 = "WEB_SEARCH" /* GXT: Search... */;
					}
				}
				if (iParam35 != -1)
				{
					iVar6 = iParam35;
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar7, sVar4, sVar5, "", "", "", "", iVar6);
				}
				else
				{
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar7, sVar4, sVar5, sParam5, sParam10, "", "", iVar6);
				}
			}
			else
			{
				if (MISC::IS_PC_VERSION())
				{
					iVar8 = 6;
				}
				else if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (bParam4)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 10)
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 25;
					}
					if (func_60())
					{
						iVar9 = 64;
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_117598)))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_117598), "", "", "", iVar9);
					}
				}
				else if (bParam32)
				{
					sVar4 = "CST_KEY_TEXT";
					iVar9 = 63;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_171663)))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_171663), "", "", "", iVar9);
					}
				}
				else if (bParam25)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_BLIMP";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_171663)))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_171663), "", "", "", iVar9);
					}
				}
				else if (iParam30 != -1)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "DMC_HTM_EH";
					}
					else
					{
						sVar4 = "FMMC_KEY_BTIPF";
					}
					iVar9 = 60;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					Var10 = { Global_4718592.f_171695[iParam30 /*16*/] };
					if (iParam31 > -1)
					{
						Var10 = { Global_4718592.f_171776[iParam30 /*65*/][iParam31 /*16*/] };
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var10))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &Var10, "", "", "", iVar9);
					}
				}
				else if (bParam27)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					else
					{
						sVar4 = "FMMC_CDP_ADD2";
					}
					iVar9 = 60;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam34)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_CDM_T";
					}
					else
					{
						sVar4 = "FMMC_CDM_F1";
					}
					iVar9 = 60;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
				}
				else if (bParam13)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPF";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M19";
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam33))
					{
						sVar4 = sParam33;
					}
					iVar9 = 63;
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(2);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam9)
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
					{
						iVar9 = 63;
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPT";
						}
						else if (*iParam1 == -3)
						{
							sVar4 = "FMMC_KEY_TIPTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPTF";
						}
					}
					else
					{
						iVar9 = 63;
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_ALTT";
						}
						else if (*iParam1 == -3)
						{
							sVar4 = "FMMC_KEY_ALTTS";
						}
						else
						{
							sVar4 = "FMMC_KEY_ALTTF";
						}
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M36";
					}
					iVar26 = 0;
					while (iVar26 <= 7)
					{
						if (MISC::IS_STRING_NULL(&(Global_4718592.f_117749[iVar26 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_117749[iVar26 /*16*/]), "", 64);
						}
						iVar26++;
					}
					MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, &(Global_4718592.f_117749[0 /*16*/]), &(Global_4718592.f_117749[1 /*16*/]), &(Global_4718592.f_117749[2 /*16*/]), &(Global_4718592.f_117749[3 /*16*/]), &(Global_4718592.f_117749[4 /*16*/]), &(Global_4718592.f_117749[5 /*16*/]), &(Global_4718592.f_117749[6 /*16*/]), &(Global_4718592.f_117749[7 /*16*/]), iVar9);
				}
				else if (bParam6)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP4";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP4F";
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_SMS3";
					}
					iVar9 = 126;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_99827[iParam16 /*43*/].f_6[0 /*16*/])))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						iVar27 = 0;
						while (iVar27 <= 1)
						{
							if (MISC::IS_STRING_NULL(&(Global_4718592.f_99827[iParam16 /*43*/].f_6[iVar27 /*16*/])))
							{
								StringCopy(&(Global_4718592.f_99827[iParam16 /*43*/].f_6[iVar27 /*16*/]), "", 64);
							}
							iVar27++;
						}
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, &(Global_4718592.f_99827[iParam16 /*43*/].f_6[0 /*16*/]), &(Global_4718592.f_99827[iParam16 /*43*/].f_6[1 /*16*/]), "", "", iVar9);
					}
				}
				else if (bParam8)
				{
					iVar9 = 61;
					if (bParam11)
					{
						if (func_61())
						{
							if (*iParam1 == 0)
							{
								sVar4 = "CELL_EMASH_SOD" /* GXT: Enter your Eyefind subject: */;
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "CELL_EMASH_SODE" /* GXT: Subject too long. Try again: */;
							}
							else
							{
								sVar4 = "CELL_EMASH_SODF" /* GXT: Forbidden text. Try again: */;
							}
						}
						else if (*iParam1 == 0)
						{
							sVar4 = "CELL_EMAIL_SOD" /* GXT: Enter your Eyefind subject (MAX 60 characters): */;
						}
						else if (*iParam1 == -1)
						{
							sVar4 = "CELL_EMAIL_SODE" /* GXT: Subject too long. Try again (MAX 60 characters): */;
						}
						else
						{
							sVar4 = "CELL_EMAIL_SODF" /* GXT: Forbidden text. Try again (MAX 60 characters): */;
						}
						if (MISC::IS_XBOX360_VERSION())
						{
							sVar5 = sVar4;
							sVar4 = "CELL_EMAIL_DESC" /* GXT: Description */;
						}
					}
					else if (func_61())
					{
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8S" /* GXT: Enter Message (MAX 20 characters): */;
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8FS" /* GXT: Invalid Message. Try again (MAX 20 characters): */;
						}
						if (MISC::IS_XBOX360_VERSION())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4" /* GXT: Message */;
						}
						iVar9 = 21;
					}
					else
					{
						if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP8" /* GXT: Enter Message (MAX 60 characters): */;
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP8F" /* GXT: Forbidden Text. Try again (MAX 60 characters): */;
						}
						if (MISC::IS_XBOX360_VERSION())
						{
							sVar5 = sVar4;
							sVar4 = "FMMC_SMS4" /* GXT: Message */;
						}
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam12)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP9" /* GXT: Enter Outfit Name (MAX 15 characters): */;
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP9F" /* GXT: Invalid Outfit Name. Try again (MAX 15 characters): */;
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP9N" /* GXT: Outfit Name */;
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(iVar8, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam14)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12" /* GXT: Enter Custom Team Name (MAX 15 characters): */;
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F" /* GXT: Forbidden Text. Try again (MAX 15 characters): */;
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP12N" /* GXT: Custom Team Name */;
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam28)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIPTN";
					}
					else
					{
						sVar4 = "FMMC_KEY_TIPTNF";
					}
					iVar9 = 16;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam15)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP12" /* GXT: Enter Custom Team Name (MAX 15 characters): */;
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP12F" /* GXT: Forbidden Text. Try again (MAX 15 characters): */;
					}
					iVar9 = 61;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam17)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP14S" /* GXT: Enter Yacht Name (MAX 20 characters): */;
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP14ES" /* GXT: Subject too long. Try again (MAX 20 characters): */;
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP14OS" /* GXT: Empty Text. Try again (MAX 20 characters): */;
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP14FS" /* GXT: Forbidden Text. Try again (MAX 20 characters): */;
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP14N" /* GXT: Yacht Name */;
					}
					if (func_59())
					{
						iVar9 = 21;
					}
					else
					{
						iVar9 = 20;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam29)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "FMMC_KEY_TIP16S" /* GXT: Enter Vehicle Name (MAX 15 characters): */;
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "FMMC_KEY_TIP16ES" /* GXT: Subject too long. Try again (MAX 15 characters): */;
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "FMMC_KEY_TIP16OS" /* GXT: Empty Text. Try again (MAX 15 characters): */;
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP16FS" /* GXT: Forbidden Text. Try again (MAX 15 characters): */;
					}
					if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP16IS" /* GXT: Invalid Character. Try again (MAX 15 characters): */;
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_KEY_TIP16N";
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(64);
					iVar9 = 15;
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (iParam18 > 0)
				{
					if (bParam20)
					{
						sVar4 = "FMMC_KEY_TIP15B" /* GXT: You must enter a name (MAX 15 characters): */;
					}
					else if (bParam21)
					{
						sVar4 = "FMMC_KEY_TIP15U" /* GXT: Name already in use. Try again (MAX 15 characters): */;
					}
					else if (bParam19)
					{
						sVar4 = "FMMC_KEY_TIP15N" /* GXT: Name Too Short. Try again (MAX 15 characters): */;
					}
					else if (bParam23)
					{
						sVar4 = "FMMC_KEY_TIP15I" /* GXT: Invalid Character. Try again (MAX 15 characters): */;
					}
					else if (*iParam1 == 0)
					{
						if (iParam18 == 2)
						{
							sVar4 = "FMMC_MCK_TIP15" /* GXT: Enter MC Name (MAX 15 characters): */;
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP15" /* GXT: Enter Organization Name (MAX 15 characters): */;
						}
					}
					else
					{
						sVar4 = "FMMC_KEY_TIP15F" /* GXT: Forbidden Text. Try again (MAX 15 characters): */;
					}
					if (MISC::IS_XBOX360_VERSION() || func_59())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam36)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "ACID_NAME_TIP1" /* GXT: Enter Product Name (MAX 15 characters): */;
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "ACID_NAME_TIP2" /* GXT: Name too long. Try again (MAX 15 characters): */;
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "ACID_NAME_TIP3" /* GXT: Empty Text. Try again (MAX 15 characters): */;
					}
					else
					{
						sVar4 = "ACID_NAME_TIP4" /* GXT: Forbidden Text. Try again (MAX 15 characters): */;
					}
					if (bParam23)
					{
						sVar4 = "ACID_NAME_TIP5s";
					}
					if (MISC::IS_XBOX360_VERSION() || func_59())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam37)
				{
					if (*iParam1 == 0)
					{
						sVar4 = "LAB_NAME_TIP1" /* GXT: Enter Lab Name (MAX 15 characters): */;
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "LAB_NAME_TIP2" /* GXT: Name too long. Try again (MAX 15 characters): */;
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "LAB_NAME_TIP3" /* GXT: Empty Text. Try again (MAX 15 characters): */;
					}
					else
					{
						sVar4 = "LAB_NAME_TIP4" /* GXT: Forbidden Text. Try again (MAX 15 characters): */;
					}
					if (bParam23)
					{
						sVar4 = "LAB_NAME_TIP5s";
					}
					if (MISC::IS_XBOX360_VERSION() || func_59())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else if (bParam38)
				{
					if (bParam23)
					{
						sVar4 = "CSTM_TLTIP_TIP5" /* GXT: Invalid Character. Try again (MAX 15 characters): */;
					}
					else if (bParam19)
					{
						sVar4 = "CSTM_TLTIP_TIP6" /* GXT: Text too short. Try again (MAX 15 characters): */;
					}
					else if (*iParam1 == 0)
					{
						sVar4 = "CSTM_TLTIP_TIP1" /* GXT: Enter text. (MAX 15 characters): */;
					}
					else if (*iParam1 == -1)
					{
						sVar4 = "CSTM_TLTIP_TIP2" /* GXT: Text too long. Try again (MAX 15 characters): */;
					}
					else if (*iParam1 == -2)
					{
						sVar4 = "CSTM_TLTIP_TIP3" /* GXT: Empty Text. Try again (MAX 15 characters): */;
					}
					else
					{
						sVar4 = "CSTM_TLTIP_TIP4" /* GXT: Forbidden Text. Try again (MAX 15 characters): */;
					}
					if (MISC::IS_XBOX360_VERSION() || func_59())
					{
						iVar9 = 16;
					}
					else
					{
						iVar9 = 15;
					}
					MISC::NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(64);
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD(0, sVar4, sVar5, sParam5, "", "", "", iVar9);
					}
				}
				else
				{
					if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
					{
						iVar9 = 501;
						if (bParam11)
						{
							if (func_61())
							{
								if (*iParam1 == 0)
								{
									sVar4 = "CELL_EMASH_BOD" /* GXT: Enter your Eyefind message: */;
								}
								else if (*iParam1 == -1)
								{
									sVar4 = "CELL_EMASH_BODE" /* GXT: Message too long. Try again: */;
								}
								else
								{
									sVar4 = "CELL_EMASH_BODF" /* GXT: Forbidden message. Try again: */;
								}
							}
							else if (*iParam1 == 0)
							{
								sVar4 = "CELL_EMAIL_BOD" /* GXT: Enter your Eyefind message (MAX 500 characters): */;
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "CELL_EMAIL_BODE" /* GXT: Message too long. Try again (MAX 500 characters): */;
							}
							else
							{
								sVar4 = "CELL_EMAIL_BODF" /* GXT: Forbidden message. Try again (MAX 500 characters): */;
							}
						}
						else if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIP3";
						}
						else if (*iParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIP3E";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIP3F";
						}
					}
					else
					{
						iVar9 = 251;
						if (func_61())
						{
							iVar9 = 150;
						}
						if (bParam11)
						{
							if (*iParam1 == 0)
							{
								sVar4 = "CELL_EMASH_BOD" /* GXT: Enter your Eyefind message: */;
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "CELL_EMASH_BODE" /* GXT: Message too long. Try again: */;
							}
							else
							{
								sVar4 = "CELL_EMASH_BODF" /* GXT: Forbidden message. Try again: */;
							}
						}
						else if (func_61())
						{
							if (*iParam1 == 0)
							{
								sVar4 = "FMMC_KEY_TIPSS";
							}
							else if (*iParam1 == -1)
							{
								sVar4 = "FMMC_KEY_TIPSSE";
							}
							else
							{
								sVar4 = "FMMC_KEY_TIPSSF";
							}
						}
						else if (*iParam1 == 0)
						{
							sVar4 = "FMMC_KEY_TIPS";
						}
						else if (*iParam1 == -1)
						{
							sVar4 = "FMMC_KEY_TIPSE";
						}
						else
						{
							sVar4 = "FMMC_KEY_TIPSF";
						}
					}
					if (MISC::IS_XBOX360_VERSION())
					{
						sVar5 = sVar4;
						sVar4 = "FMMC_T0_M20";
						if (bParam11)
						{
							sVar4 = "CELL_EMAIL_DESC" /* GXT: Description */;
						}
					}
					iVar28 = 0;
					while (iVar28 <= 7)
					{
						if (MISC::IS_STRING_NULL(&(Global_4718592.f_117620[iVar28 /*16*/])))
						{
							StringCopy(&(Global_4718592.f_117620[iVar28 /*16*/]), "", 64);
						}
						iVar28++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam33))
					{
						sVar4 = sParam33;
					}
					if (iParam35 != -1)
					{
						iVar9 = iParam35;
					}
					if (bParam11)
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, sParam5, sParam10, "", "", "", "", "", "", iVar9);
					}
					else
					{
						MISC::DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(iVar8, sVar4, sVar5, &(Global_4718592.f_117620[0 /*16*/]), &(Global_4718592.f_117620[1 /*16*/]), &(Global_4718592.f_117620[2 /*16*/]), &(Global_4718592.f_117620[3 /*16*/]), &(Global_4718592.f_117620[4 /*16*/]), &(Global_4718592.f_117620[5 /*16*/]), &(Global_4718592.f_117620[6 /*16*/]), &(Global_4718592.f_117620[7 /*16*/]), iVar9);
					}
				}
			}
			StringCopy(&Global_1926462, "", 64);
			*iParam1 = 0;
			*uParam2 = 1;
			break;
		
		case 1:
			*uParam0 = MISC::UPDATE_ONSCREEN_KEYBOARD();
			switch (*uParam0)
			{
				case 0:
					return 0;
				
				case 3:
					*uParam2 = 0;
					*uParam0 = 0;
					*iParam1 = 0;
					return 0;
				
				case 2:
					*iParam1 = 0;
					return 0;
				
				case 1:
					if ((bParam4 || bParam13) || bParam29)
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1926462))
						{
							StringCopy(&Global_1926462, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
							if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1926462))
							{
								*iParam1 = 0;
								return 1;
							}
							iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
							iVar3 = 0;
							while (iVar3 <= (iVar1 - 1))
							{
								if (*uParam2 != 0)
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1926462))
									{
										if (MISC::ARE_STRINGS_EQUAL(" ", HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Global_1926462, 0, 1)))
										{
											iVar2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_1926462);
											StringCopy(&Global_1926462, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Global_1926462, 1, iVar2), 64);
										}
									}
									else
									{
										*iParam1 = 0;
										return 1;
									}
								}
								iVar3++;
							}
						}
					}
					if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(*iParam1))
					{
						if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(*iParam1))
						{
							HUD::BUSYSPINNER_OFF();
							iVar0 = SOCIALCLUB::SC_PROFANITY_GET_STRING_STATUS(*iParam1);
							switch (iVar0)
							{
								case 0:
									if (bParam9)
									{
										StringCopy(&Global_1926462, MISC::GET_ONSCREEN_KEYBOARD_RESULT(), 64);
										iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_1926462);
										iVar3 = 0;
										while (iVar3 <= (iVar1 - 1))
										{
											if (*uParam2 != 0)
											{
												if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1926462))
												{
													if (MISC::ARE_STRINGS_EQUAL(" ", HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&Global_1926462, iVar3, iVar3 + 1)))
													{
														*iParam1 = -3;
													}
												}
											}
											iVar3++;
										}
									}
									if (*iParam1 != -3)
									{
										*iParam1 = 0;
										return 1;
									}
									else
									{
										*uParam2 = 0;
										*uParam0 = 0;
										return 0;
									}
									break;
								
								case 1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
								
								case -1:
									*uParam2 = 0;
									*uParam0 = 0;
									return 0;
									break;
							}
						}
						else if (bParam11)
						{
							if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) == 0)
							{
								HUD::BUSYSPINNER_OFF();
								*iParam1 = 0;
								return 1;
							}
						}
						break;
					}
					if (bParam4)
					{
						if (bParam22)
						{
							SOCIALCLUB::SC_PROFANITY_CHECK_STRING_UGC(&Global_1926462, iParam1);
						}
						else
						{
							SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&Global_1926462, iParam1);
						}
					}
					else if (MISC::IS_STRING_NULL_OR_EMPTY(MISC::GET_ONSCREEN_KEYBOARD_RESULT()))
					{
						*iParam1 = -2;
						*uParam2 = 0;
						*uParam0 = 0;
						HUD::BUSYSPINNER_OFF();
						return 0;
					}
					else if (bParam22)
					{
						SOCIALCLUB::SC_PROFANITY_CHECK_STRING_UGC(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), iParam1);
					}
					else
					{
						SOCIALCLUB::SC_PROFANITY_CHECK_STRING(MISC::GET_ONSCREEN_KEYBOARD_RESULT(), iParam1);
					}
					if (func_59())
					{
						if ((!NETWORK::NETWORK_IS_SIGNED_ONLINE() || func_57() == 0) || func_56() == 1)
						{
							*iParam1 = 0;
							*uParam2 = 0;
							*uParam0 = 3;
							return 0;
						}
					}
					if (bParam17)
					{
						HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKYACHTNAME" /* GXT: Registering your yacht's name.  Please wait... */);
						HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
					}
					else if (bParam29)
					{
						HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKVEHICLENAME" /* GXT: Registering your vehicle's name.  Please wait... */);
						HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
					}
					else
					{
						HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("ERROR_CHECKPROFANITY" /* GXT: Checking your text for profanity.  Please wait... */);
						HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
					}
					if (!SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(*iParam1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1926462))
						{
							*iParam1 = -1;
						}
						else
						{
							*iParam1 = -2;
						}
						*uParam2 = 0;
						*uParam0 = 0;
						HUD::BUSYSPINNER_OFF();
						return 0;
					}
				
				default:
			}
			break;
	}
	return 0;
}

int func_56()//Position - 0x1B4B
{
	if (!func_57())
	{
		return 1;
	}
	return 0;
}

int func_57()//Position - 0x1B60
{
	if (func_58())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_58()//Position - 0x1B80
{
	return Global_2695084;
}

bool func_59()//Position - 0x1B8C
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_60()//Position - 0x1BA2
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

int func_61()//Position - 0x1BB3
{
	if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_62(int* iParam0)//Position - 0x1BFD
{
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/)))
	{
		func_63(iParam0, 1, 1);
		return;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
	{
		func_7(iParam0, 3);
		func_9(iParam0, 1);
	}
}

int func_63(int* iParam0, bool bParam1, bool bParam2)//Position - 0x1C4A
{
	if (!func_69(iParam0))
	{
		return 0;
	}
	if (!func_68(&(iParam0->f_72)))
	{
		return 0;
	}
	func_18(iParam0, iParam0->f_1);
	if (!func_67(iParam0))
	{
		return 1;
	}
	if (!func_66(iParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		func_64(iParam0);
	}
	if (func_14(&(iParam0->f_72.f_7), 1))
	{
		func_9(iParam0, 2);
	}
	if (func_34(&(iParam0->f_72)) == 0)
	{
		return 0;
	}
	func_36(iParam0, &(iParam0->f_72), 1, bParam2);
	if (func_14(&(iParam0->f_72.f_7), 2))
	{
		func_63(iParam0, 1, 1);
	}
	func_9(iParam0, 1);
	return 1;
}

void func_64(int* iParam0)//Position - 0x1CF3
{
	func_65(&(iParam0->f_72));
}

void func_65(var uParam0)//Position - 0x1D03
{
	if (uParam0->f_19 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_19);
}

int func_66(int* iParam0)//Position - 0x1D1B
{
	if (!func_13(iParam0, 5) && func_42(&(iParam0->f_72)))
	{
		func_9(iParam0, 5);
		return 0;
	}
	func_7(iParam0, 5);
	return 1;
}

int func_67(int* iParam0)//Position - 0x1D4E
{
	if (!func_13(iParam0, 3) && !MISC::IS_STRING_NULL_OR_EMPTY(func_23(&(iParam0->f_72))))
	{
		func_9(iParam0, 3);
		func_9(iParam0, 1);
		return 0;
	}
	func_7(iParam0, 3);
	return 1;
}

int func_68(var uParam0)//Position - 0x1D8D
{
	if (uParam0->f_13 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_13);
	return StackVal;
}

bool func_69(var uParam0)//Position - 0x1DA6
{
	return func_70(&(uParam0->f_72));
}

int func_70(var uParam0)//Position - 0x1DB6
{
	if (uParam0->f_26 == 0)
	{
		return 1;
	}
	Call_Loc(uParam0->f_26);
	return StackVal;
}

void func_71()//Position - 0x1DCF
{
	func_75();
	func_74();
	func_73();
	func_72();
}

void func_72()//Position - 0x1DE7
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
}

void func_73()//Position - 0x1E17
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 137 /*INPUT_VEH_PUSHBIKE_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
}

void func_74()//Position - 0x1E4E
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 45 /*INPUT_RELOAD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 55 /*INPUT_DIVE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
}

void func_75()//Position - 0x1EA5
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
}

void func_76(var uParam0)//Position - 0x1F1D
{
	if (func_27(&(uParam0->f_72)) || !func_26(&(uParam0->f_72)))
	{
		func_77(uParam0, 1);
	}
}

void func_77(int* iParam0, int iParam1)//Position - 0x1F46
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	
	iVar1 = iParam0->f_1;
	iVar2 = func_33(&(iParam0->f_6));
	Var3.f_8 = -1;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var3 = { func_29(iParam0) };
		iVar1 = (iVar1 + iParam1);
		iVar1 = func_78(iVar1, iVar2);
		if (!func_28(&(iParam0->f_6), iVar1, &Var3))
		{
			return;
		}
		if (!func_27(&Var3) && func_26(&Var3))
		{
		}
		else
		{
			iVar0++;
		}
	}
	func_18(iParam0, iVar1);
}

int func_78(int iParam0, int iParam1)//Position - 0x1FCA
{
	return (((iParam0 % iParam1) + iParam1) % iParam1);
}

bool func_79(var uParam0)//Position - 0x1FDD
{
	return !func_13(uParam0, 2);
}

int func_80(int* iParam0)//Position - 0x1FED
{
	if (iParam0->f_106 == 0)
	{
		return 1;
	}
	Call_Loc(iParam0->f_106);
	return StackVal;
}

void func_81()//Position - 0x2006
{
	func_82(&Local_43);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_82(int* iParam0)//Position - 0x2018
{
	func_83(iParam0);
	func_7(iParam0, 0);
	func_7(iParam0, 1);
}

void func_83(var uParam0)//Position - 0x2034
{
	if (uParam0->f_110 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_110);
}

int func_84()//Position - 0x204C
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_91())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_90())
	{
		return 1;
	}
	if (func_89(159))
	{
		if (!func_88())
		{
			return 1;
		}
	}
	if (func_89(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_85() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_85()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_85()//Position - 0x20D0
{
	switch (func_87())
	{
		case 0:
			return func_86();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_86()//Position - 0x2103
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_87()//Position - 0x2127
{
	return Global_32283;
}

bool func_88()//Position - 0x2132
{
	return Global_2683883.f_698;
}

int func_89(int iParam0)//Position - 0x2141
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_90()//Position - 0x2158
{
	return Global_2694576;
}

bool func_91()//Position - 0x2164
{
	return Global_2683883.f_693;
}

void func_92()//Position - 0x2173
{
	struct<9> Var0;
	
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Var0.f_8 = -1;
	func_245(&Var0);
	Local_43 = { func_103(&Var0, 0) };
	iLocal_158 = 36193/*func_245*/;
	iLocal_159 = 8614/*func_93*/;
}

void func_93(var uParam0)//Position - 0x21A6
{
	func_102(uParam0, "TUT_ROOT_M1T", 0);
	func_101(uParam0, "TUT_ROOT_M1", 0);
	func_99(uParam0, "TUT_ROOT_M1_D", 0);
	func_94(uParam0, 0, 8692/*func_95*/, 2);
}

void func_94(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x21DB
{
	*uParam0 = iParam1;
	uParam0->f_9 = iParam2;
	uParam0->f_8 = iParam3;
}

int func_95(int iParam0, var uParam1)//Position - 0x21F4
{
	func_98(uParam1, iLocal_159);
	switch (iParam0)
	{
		case 0:
			func_97(uParam1);
			return 0;
		
		case 1:
			func_96(uParam1);
			return 0;
		
		default:
	}
	return 2;
}

void func_96(var uParam0)//Position - 0x222C
{
	func_101(uParam0, "TUT_SUB_M2", 0);
	func_99(uParam0, "TUT_SUB_M2_D", 0);
}

void func_97(var uParam0)//Position - 0x224A
{
	func_101(uParam0, "TUT_SUB_M2", 0);
	func_99(uParam0, "TUT_SUB_M2_D", 0);
}

void func_98(var uParam0, int iParam1)//Position - 0x2268
{
	uParam0->f_10 = iParam1;
}

void func_99(var uParam0, char* sParam1, bool bParam2)//Position - 0x2276
{
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_4 = sParam1;
	func_100(uParam0, 6, bParam2);
}

void func_100(var uParam0, int iParam1, bool bParam2)//Position - 0x2297
{
	if (bParam2)
	{
		func_10(&(uParam0->f_7), iParam1);
	}
	else
	{
		func_8(&(uParam0->f_7), iParam1);
	}
}

void func_101(var uParam0, char* sParam1, bool bParam2)//Position - 0x22BB
{
	uParam0->f_3 = sParam1;
	func_100(uParam0, 5, bParam2);
}

void func_102(var uParam0, char* sParam1, bool bParam2)//Position - 0x22D2
{
	uParam0->f_1 = sParam1;
	func_100(uParam0, 3, bParam2);
}

struct<114> func_103(var* uParam0, int iParam1)//Position - 0x22E9
{
	struct<114> Var0;
	
	Var0.f_6.f_8 = -1;
	Var0.f_39.f_8 = -1;
	Var0.f_72.f_8 = -1;
	func_223(&Var0, 35014/*func_224*/);
	func_191(&Var0, 19123/*func_192*/);
	func_188(&Var0, 18759/*func_189*/);
	func_185(&Var0, 18628/*func_186*/);
	func_116(&Var0, 11281/*func_117*/);
	func_112(&Var0, 10844/*func_113*/);
	func_106(&Var0, 9170/*func_107*/);
	func_105(&Var0, uParam0);
	func_104(&Var0, uParam0, iParam1, 0);
	return Var0;
}

void func_104(int* iParam0, var* uParam1, int iParam2, bool bParam3)//Position - 0x2370
{
	func_36(iParam0, uParam1, 0, bParam3);
	func_18(iParam0, iParam2);
	if (func_34(uParam1) == 0)
	{
		return;
	}
	if (func_14(&(iParam0->f_72.f_7), 2))
	{
		func_63(iParam0, 0, 1);
	}
}

void func_105(var uParam0, var* uParam1)//Position - 0x23B0
{
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_39), uParam1, 33);
}

void func_106(var uParam0, int iParam1)//Position - 0x23C4
{
	uParam0->f_110 = iParam1;
}

void func_107()//Position - 0x23D2
{
	func_111(1, 0);
	func_108(1, -1);
}

void func_108(bool bParam0, int iParam1)//Position - 0x23E6
{
	int iVar0;
	
	if (!func_110(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23390.f_8892)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23390.f_8892 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23390.f_6071[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23390.f_6071[iVar0] = 0;
	}
	if (Global_23390.f_6057[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23390.f_6057[iVar0] = 0;
	}
	if (Global_23390.f_6064[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23390.f_6064[iVar0] = 0;
	}
	if (bParam0)
	{
		func_109(&(Global_23390.f_6103[iVar0 /*10*/]));
		Global_23390.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23390.f_6164[iVar0] = 0;
	}
}

void func_109(int* iParam0)//Position - 0x24A4
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_110(var uParam0, bool bParam1, int iParam2)//Position - 0x24D0
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_23390.f_6164[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_23390.f_6164[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_23390.f_6164[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_111(bool bParam0, bool bParam1)//Position - 0x256D
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23390.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23390.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2695123[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23390.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23390.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23390.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23390.f_5532[iVar0] = 0;
		Global_23390.f_5670[iVar0] = 0;
		Global_23390.f_5799[iVar0] = 0;
		Global_23390.f_6322[iVar0] = 0f;
		Global_23390.f_5928[iVar0] = 0;
		Global_23390.f_6188[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23390.f_5499[iVar0] = 0;
		Global_23390.f_5511[iVar0] = 0f;
		Global_23390.f_5505[iVar0] = -1f;
		Global_23390.f_5518[iVar0] = 0;
		Global_23390.f_5526[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23390.f_5393[iVar0 /*4*/]), "", 16);
		Global_23390.f_5450[iVar0] = -1;
		Global_23390.f_5465[iVar0] = 363;
		Global_23390.f_5480[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		StringCopy(&(Global_23390.f_6463[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23390.f_7488[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23390.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4540958.f_16), "", 16);
	Global_4540958.f_20 = -1;
	Global_23390 = 0;
	Global_23390.f_5661 = 0;
	Global_23390.f_5662 = 0;
	Global_23390.f_5663 = 0;
	Global_23390.f_5665 = 0;
	Global_23390.f_5666 = 0;
	Global_23390.f_5667 = 0;
	Global_23390.f_5664 = 0;
	Global_23390.f_6317 = 0;
	Global_23390.f_6457 = 0;
	Global_23390.f_6182 = 0;
	Global_23390.f_6181 = 0;
	Global_23390.f_6183 = 0;
	StringCopy(&(Global_23390.f_5081), "", 24);
	Global_23390.f_5159 = 0;
	Global_23390.f_5160 = 0;
	Global_23390.f_5161 = 0;
	Global_23390.f_5162 = 0;
	Global_23390.f_5163 = 0;
	Global_23390.f_5164 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5093[iVar0] = 0;
		iVar0++;
	}
	Global_23390.f_5165 = 0;
	StringCopy(&(Global_4540958.f_21), "", 16);
	Global_4540958.f_61 = 0;
	Global_4540958.f_62 = 0;
	Global_4540958.f_63 = 0;
	Global_4540958.f_64 = 0;
	Global_4540958.f_65 = 0;
	Global_4540958.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4540958.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4540958.f_67 = 0;
	StringCopy(&(Global_23390.f_1), "", 16);
	Global_23390.f_5517 = 0f;
	Global_23390.f_74 = 0;
	Global_23390.f_75 = 0;
	Global_23390.f_76 = 0;
	Global_23390.f_77 = 0;
	Global_23390.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23390.f_6187 = 0;
	Global_23390.f_6186 = 0;
	Global_23390.f_6184 = 0;
	Global_23390.f_6185 = 0;
	Global_23390.f_5166 = 0;
	Global_23390.f_5167 = 0;
	Global_23390.f_5668 = 10;
	Global_23390.f_5669 = 0;
	Global_23390.f_6319 = 0f;
	Global_23390.f_6320 = 0f;
	Global_23390.f_6171 = 0;
	Global_23390.f_6172 = 0;
	Global_23390.f_6173 = 0f;
	Global_23390.f_6174 = 0;
	Global_23390.f_6176 = 0;
	Global_23390.f_6175 = 0;
	Global_23390.f_6177 = 0;
	Global_23390.f_6178 = 0;
	Global_23390.f_6179 = 0;
	Global_23390.f_6180 = 0;
	Global_23390.f_8888 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23390.f_6451[iVar0] = -1;
		Global_23390.f_6454[iVar0] = -1;
		iVar0++;
	}
	Global_23390.f_5524 = 0f;
	Global_23390.f_5495 = 0;
	Global_23390.f_5525 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23390.f_6458)
	{
		Global_23390.f_6458[iVar0] = 0;
		iVar0++;
	}
	Global_23390.f_8867 = 0;
	Global_23390.f_8862 = 0;
	Global_23390.f_8872 = 0;
	Global_23390.f_8877 = 0;
	Global_23390.f_8882 = 0;
	Global_23390.f_8884 = 0;
	Global_23390.f_8890 = 0;
	Global_23387 = 0.05f;
	Global_23388 = 0.05f;
	Global_23389 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23389 = (0.225f * (1.7777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23389 = (0.225f * (1.7777778f / fVar2));
	}
	else
	{
		Global_23389 = 0.225f;
	}
}

void func_112(var uParam0, int iParam1)//Position - 0x2A4E
{
	uParam0->f_106 = iParam1;
}

bool func_113()//Position - 0x2A5C
{
	return func_114(0, -1, 1);
}

bool func_114(char* sParam0, int iParam1, bool bParam2)//Position - 0x2A6B
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_110(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23390.f_6078[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6078[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23390.f_6078[iVar0 /*4*/]), 9);
		Global_23390.f_6071[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23390.f_6078[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_23390.f_6057[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23390.f_6064[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23390.f_6103[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_115(&(Global_23390.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_115(var uParam0)//Position - 0x2B61
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_116(var uParam0, int iParam1)//Position - 0x2C03
{
	uParam0->f_105 = iParam1;
}

struct<33> func_117()//Position - 0x2C11
{
	struct<33> Var0;
	
	Var0.f_8 = -1;
	func_168(&Var0, 14646/*func_169*/);
	func_121(&Var0, 11599/*func_123*/, 0);
	func_118(&Var0, 11348/*func_119*/);
	return Var0;
}

void func_118(var uParam0, int iParam1)//Position - 0x2C46
{
	uParam0->f_27 = iParam1;
}

int func_119(var uParam0)//Position - 0x2C54
{
	func_120(202, "PIM_CEXI" /* GXT: Back */, -1);
	if (func_68(uParam0))
	{
		func_120(201, "PIM_CSEL" /* GXT: Select */, -1);
	}
	return 1;
}

void func_120(int iParam0, char* sParam1, int iParam2)//Position - 0x2C7C
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23390.f_5166 >= 14)
	{
		StringCopy(&Global_4540958, sVar0, 64);
		StringCopy(&(Global_4540958.f_16), sParam1, 16);
		Global_4540958.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23390.f_5495), Global_23390.f_5166);
	StringCopy(&(Global_23390.f_5168[Global_23390.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23390.f_5393[Global_23390.f_5166 /*4*/]), sParam1, 16);
	Global_23390.f_5450[Global_23390.f_5166] = iParam2;
	Global_23390.f_5465[Global_23390.f_5166] = iParam0;
	Global_23390.f_5480[Global_23390.f_5166] = 32;
	Global_23390.f_5166++;
}

void func_121(var uParam0, int iParam1, int iParam2)//Position - 0x2D2B
{
	uParam0->f_28 = iParam1;
	func_122(uParam0, iParam2);
}

void func_122(var uParam0, var uParam1)//Position - 0x2D41
{
	uParam0->f_29 = uParam1;
}

bool func_123(int* iParam0, var uParam1)//Position - 0x2D4F
{
	func_148(iParam0);
	return func_124(iParam0) != 0;
}

int func_124(int* iParam0)//Position - 0x2D65
{
	int iVar0;
	
	iVar0 = func_143(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_139(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_126(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_125(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

int func_125(int* iParam0)//Position - 0x2DCD
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/);
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) && func_68(&(iParam0->f_72)))
	{
		func_63(iParam0, 1, 1);
		return 2;
	}
	return 0;
}

int func_126(int* iParam0)//Position - 0x2E01
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/))
	{
		func_130(iParam0);
		return 9;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
	{
		func_127(iParam0);
		return 10;
	}
	return 0;
}

void func_127(int* iParam0)//Position - 0x2E42
{
	if (!func_69(iParam0))
	{
		return;
	}
	if (!func_68(&(iParam0->f_72)))
	{
		return;
	}
	func_129(&(iParam0->f_72));
	func_128(&(iParam0->f_72));
	func_9(iParam0, 1);
}

void func_128(var uParam0)//Position - 0x2E7D
{
	if (uParam0->f_24 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_24);
}

void func_129(var uParam0)//Position - 0x2E95
{
	if (uParam0->f_23 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_23);
}

void func_130(int* iParam0)//Position - 0x2EAD
{
	if (!func_69(iParam0))
	{
		return;
	}
	if (!func_68(&(iParam0->f_72)))
	{
		return;
	}
	func_129(&(iParam0->f_72));
	func_131(&(iParam0->f_72));
	func_9(iParam0, 1);
}

void func_131(var uParam0)//Position - 0x2EE8
{
	if (uParam0->f_25 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_25);
}

int func_132(int* iParam0)//Position - 0x2F00
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/);
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
	{
		func_133(iParam0, 0, 1);
		return 1;
	}
	return 0;
}

void func_133(int* iParam0, bool bParam1, bool bParam2)//Position - 0x2F26
{
	struct<33> Var0;
	int iVar33;
	bool bVar34;
	int iVar35;
	
	if (bParam2)
	{
		func_138(&(iParam0->f_72));
	}
	Var0 = { func_29(iParam0) };
	if (!func_136(iParam0, &Var0))
	{
		func_9(iParam0, 2);
		return;
	}
	iVar33 = func_135(&(iParam0->f_6));
	bVar34 = func_14(&(iParam0->f_6.f_7), 2);
	if (func_13(iParam0, 4))
	{
		iVar33 = 0;
	}
	iVar35 = func_134(&(iParam0->f_6));
	func_36(iParam0, &Var0, 0, 1);
	if (func_30(iParam0, iVar33))
	{
		if (iVar35 != 0)
		{
			Call_Loc(iVar35);
		}
		func_18(iParam0, iVar33);
	}
	else
	{
		func_18(iParam0, 0);
		func_24(&(iParam0->f_72));
	}
	if (bVar34 && !bParam1)
	{
		func_133(iParam0, 0, 1);
	}
	else if (func_14(&(iParam0->f_72.f_7), 2) && !bParam1)
	{
		func_63(iParam0, 1, 1);
		func_18(iParam0, iVar33);
	}
	func_9(iParam0, 1);
}

var func_134(var uParam0)//Position - 0x300D
{
	return uParam0->f_17;
}

var func_135(var uParam0)//Position - 0x3019
{
	return *uParam0;
}

bool func_136(var uParam0, var uParam1)//Position - 0x3024
{
	return func_137(&(uParam0->f_6), uParam1);
}

int func_137(var uParam0, var uParam1)//Position - 0x3036
{
	if (uParam0->f_10 == 0)
	{
		return 0;
	}
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_10);
	return 1;
}

void func_138(var uParam0)//Position - 0x3052
{
	if (uParam0->f_20 == 0)
	{
		return;
	}
	Call_Loc(uParam0->f_20);
}

int func_139(int* iParam0)//Position - 0x306A
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/))
	{
		func_140(iParam0, -1);
		return 5;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/))
	{
		func_140(iParam0, 1);
		return 6;
	}
	return 0;
}

int func_140(int* iParam0, int iParam1)//Position - 0x30AD
{
	int iVar0;
	
	iVar0 = func_142(iParam0);
	if (iVar0 <= 1)
	{
		return 0;
	}
	if (func_141(&(iParam0->f_72)))
	{
		func_9(iParam0, 1);
	}
	func_77(iParam0, iParam1);
	if (func_24(&(iParam0->f_72)))
	{
		func_9(iParam0, 1);
	}
	return 1;
}

int func_141(var uParam0)//Position - 0x30F4
{
	if (uParam0->f_18 == 0)
	{
		return 0;
	}
	Call_Loc(uParam0->f_18);
	return StackVal;
}

int func_142(var uParam0)//Position - 0x310D
{
	return func_33(&(uParam0->f_6));
}

int func_143(int* iParam0)//Position - 0x311D
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
	{
		if (func_144(iParam0, -1))
		{
			return 3;
		}
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
	{
		if (func_144(iParam0, 1))
		{
			return 4;
		}
		return 0;
	}
	return 0;
}

int func_144(int* iParam0, int iParam1)//Position - 0x316C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (!func_14(&(iParam0->f_6.f_7), 2))
	{
		return 0;
	}
	bVar0 = func_14(&(iParam0->f_6.f_7), 7);
	if (bVar0)
	{
		iVar1 = func_146(iParam0);
		iVar2 = func_145(iParam0);
		if ((iParam1 < 0 && iVar1 <= 0) || (iParam1 > 0 && iVar1 >= iVar2))
		{
			return 0;
		}
	}
	func_133(iParam0, 1, 1);
	func_140(iParam0, iParam1);
	func_63(iParam0, 1, 1);
	return 1;
}

int func_145(var uParam0)//Position - 0x31EC
{
	struct<33> Var0;
	
	if (!func_14(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	Var0 = { func_29(uParam0) };
	if (!func_137(&(uParam0->f_6), &Var0))
	{
		return 0;
	}
	return func_31(&Var0);
}

int func_146(var uParam0)//Position - 0x322A
{
	if (!func_14(&(uParam0->f_6.f_7), 2))
	{
		return 0;
	}
	return func_147(uParam0);
}

var func_147(var uParam0)//Position - 0x324B
{
	return func_135(&(uParam0->f_6));
}

void func_148(int* iParam0)//Position - 0x325B
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return;
	}
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	func_164(0, 0, 0, 1);
	func_163();
	func_160(iParam0);
	func_156(iParam0);
	func_150(iParam0);
	func_149(iParam0);
}

void func_149(int* iParam0)//Position - 0x32A1
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
	{
		func_133(iParam0, 0, 1);
	}
}

void func_150(int* iParam0)//Position - 0x32C2
{
	bool bVar0;
	
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/);
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/);
	bVar0 = func_155();
	if (func_153() || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) && bVar0))
	{
		func_140(iParam0, -1);
		return;
	}
	if (func_151() || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/) && bVar0))
	{
		func_140(iParam0, 1);
		return;
	}
}

bool func_151()//Position - 0x332A
{
	return (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && func_152());
}

bool func_152()//Position - 0x3342
{
	return Global_4541034 == -3;
}

bool func_153()//Position - 0x3352
{
	return (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && func_154());
}

bool func_154()//Position - 0x336A
{
	return Global_4541034 == -2;
}

bool func_155()//Position - 0x337A
{
	return Global_4541034 > -1;
}

void func_156(int* iParam0)//Position - 0x3388
{
	PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/, true);
	if (!PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
	{
		return;
	}
	if (!func_159())
	{
		func_9(iParam0, 2);
		return;
	}
	if (func_158(iParam0))
	{
		func_63(iParam0, 1, 1);
	}
	else
	{
		func_157(iParam0);
	}
}

void func_157(int* iParam0)//Position - 0x33DA
{
	func_18(iParam0, Global_4541034);
}

bool func_158(int* iParam0)//Position - 0x33ED
{
	return Global_4541034 == iParam0->f_1;
}

bool func_159()//Position - 0x33FE
{
	return ((func_155() || func_152()) || func_154());
}

void func_160(int* iParam0)//Position - 0x341E
{
	int iVar0;
	
	if (!func_155())
	{
		return;
	}
	if (!func_162())
	{
		return;
	}
	if (!func_158(iParam0))
	{
		return;
	}
	iVar0 = func_161(0.045f);
	if (iVar0 > 0)
	{
		func_127(iParam0);
	}
	else if (iVar0 < 0)
	{
		func_130(iParam0);
	}
	else if (iVar0 == -999)
	{
		func_63(iParam0, 1, 1);
	}
}

int func_161(float fParam0)//Position - 0x3483
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_23389);
	fVar1 = (Global_23390.f_6173 - (IntToFloat(Global_23390.f_6175) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4541028 >= fVar0 && Global_4541028 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4541028 >= fVar0 && Global_4541028 < fVar4)
	{
		return -1;
	}
	if (Global_4541028 >= fVar4 && Global_4541028 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0x3550
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
	}
	return 0;
}

void func_163()//Position - 0x356B
{
	HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	HUD::SET_MOUSE_CURSOR_STYLE(1);
}

void func_164(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x357C
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		Global_4541034 = -1;
		return;
	}
	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	fVar0 = Global_23387;
	fVar2 = (fVar0 + Global_23389);
	fVar3 = Global_23390.f_6173;
	fVar1 = (Global_23390.f_6173 - (IntToFloat(Global_23390.f_6175) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23390.f_6175 < 1)
	{
		fVar1 = (Global_23390.f_6173 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_167();
	if (Global_4541034 == -6)
	{
		return;
	}
	Global_4541034 = -1;
	fVar7 = Global_4541028;
	fVar8 = Global_4541029;
	if (Global_23390.f_6176 > Global_23390.f_6175)
	{
		if (((Global_4541028 >= fVar0 && Global_4541028 <= fVar2) && Global_4541029 >= fVar3) && Global_4541029 < (fVar3 + fVar6))
		{
			Global_4541034 = -2;
			if (bParam3)
			{
				func_166(0);
			}
			return;
		}
		if (((Global_4541028 >= fVar0 && Global_4541028 <= fVar2) && Global_4541029 >= (fVar3 + fVar6)) && Global_4541029 < (fVar3 + 0.034722f))
		{
			Global_4541034 = -3;
			if (bParam3)
			{
				func_166(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23390.f_6176 == -1)
		{
			Global_4541034 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23390.f_6175);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_165(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23389, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4541034 = Global_23390.f_8513[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4541034 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4541034 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4541034 = -4;
		return;
	}
	Global_4541034 = -1;
}

void func_165(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3828
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_166(bool bParam0)//Position - 0x3857
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23387;
	fVar1 = Global_23390.f_6173;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4541034 == -2)
	{
		func_165(fVar0, fVar1, Global_23389, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541034 == -3)
	{
		func_165(fVar0, (fVar1 + fVar2), Global_23389, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_167()//Position - 0x38E0
{
	Global_4541030 = Global_4541028;
	Global_4541031 = Global_4541029;
	Global_4541028 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	Global_4541029 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	Global_4541032 = (Global_4541028 - Global_4541030);
	Global_4541033 = (Global_4541029 - Global_4541031);
}

void func_168(var uParam0, int iParam1)//Position - 0x3928
{
	uParam0->f_16 = iParam1;
}

void func_169(var uParam0, int iParam1)//Position - 0x3936
{
	func_170(iParam1, func_184(uParam0), 0, 1, 0, 0, 0);
}

void func_170(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x394F
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23390.f_5661 > iParam0)
	{
		return;
	}
	if (Global_23390.f_5661 >= 128)
	{
		return;
	}
	if (Global_23390.f_5663 >= 256)
	{
		return;
	}
	if (Global_23390.f_6186 < Global_23390.f_6184)
	{
		return;
	}
	if (Global_23390.f_5661 != iParam0)
	{
		Global_23390.f_5661 = iParam0;
		Global_23390.f_5662 = 0;
	}
	iVar0 = Global_23390.f_5499[Global_23390.f_5662];
	if (iVar0 != 1)
	{
		while (Global_23390.f_5662 < 4 && iVar0 != 1)
		{
			Global_23390.f_5662++;
			iVar0 = Global_23390.f_5499[Global_23390.f_5662];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23390.f_1616[Global_23390.f_5663] = bParam3;
	Global_23390.f_1873[Global_23390.f_5663] = iParam4;
	Global_23390.f_2130[Global_23390.f_5663] = iParam6;
	Global_23390.f_5663++;
	if (!bParam3)
	{
		func_183(Global_23390.f_5661, 1);
	}
	else
	{
		func_183(Global_23390.f_5661, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_180(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
		if (Global_23390.f_5518[Global_23390.f_5662])
		{
			func_172(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23390.f_5511[Global_23390.f_5662])
		{
			Global_23390.f_5511[Global_23390.f_5662] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_171(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
			if (fVar4 > Global_23390.f_6188[iParam0])
			{
				Global_23390.f_6188[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23390.f_5532[iParam0]), Global_23390.f_5662);
	Global_23390.f_5662++;
	Global_23390.f_6187 = 1;
	Global_23390.f_6185 = (Global_23390.f_5663 - 1);
	Global_23390.f_6186 = 0;
	Global_23390.f_6184 = iParam2;
}

float func_171(char* sParam0)//Position - 0x3B6B
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

int func_172(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x3B87
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_179(iParam0), 64);
	StringCopy(&cVar16, func_176(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_174(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_173(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23389)
			{
				*fParam4 = (*fParam4 * (Global_23389 / *fParam3));
				*fParam3 = Global_23389;
			}
		}
		return 1;
	}
	return 0;
}

float func_173(int iParam0)//Position - 0x3CB3
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 63:
			return 0.5f;
			break;
		
		case 62:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_174(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0x3D87
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_175(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_175(int iParam0, int iParam1)//Position - 0x3E0F
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

var func_176(int iParam0, bool bParam1)//Position - 0x3E2A
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_7488[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23390.f_7488[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_178(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_177(&uVar3);
			}
		}
		else
		{
			return func_177(&(Global_23390.f_7488[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 52:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 53:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 55:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 56:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 60:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 61:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 63:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_177(var uParam0)//Position - 0x4353
{
	return uParam0;
}

struct<13> func_178(int iParam0)//Position - 0x435D
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_179(int iParam0)//Position - 0x4374
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6463[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23390.f_6463[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_178(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_177(&uVar0);
		}
		else
		{
			return func_177(&(Global_23390.f_6463[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 52)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_180(char* sParam0)//Position - 0x43E9
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_181(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_181(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x4426
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_182(Global_23390.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_182(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x45D4
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_183(int iParam0, bool bParam1)//Position - 0x485E
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23390.f_6458[iVar0]), (iParam0 - iVar0 * 32));
	}
}

var func_184(var uParam0)//Position - 0x48AA
{
	return uParam0->f_3;
}

void func_185(var uParam0, int iParam1)//Position - 0x48B6
{
	uParam0->f_108 = iParam1;
}

void func_186(char* sParam0)//Position - 0x48C4
{
	func_187(sParam0, 0, 0);
}

void func_187(char* sParam0, int iParam1, int iParam2)//Position - 0x48D4
{
	int iVar0;
	
	StringCopy(&(Global_23390.f_5081), sParam0, 24);
	Global_23390.f_5159 = 0;
	Global_23390.f_5160 = 0;
	Global_23390.f_5161 = 0;
	Global_23390.f_5162 = 0;
	Global_23390.f_5163 = iParam1;
	Global_23390.f_5164 = MISC::GET_GAME_TIMER();
	Global_23390.f_5165 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5093[iVar0] = 0;
		iVar0++;
	}
}

void func_188(var uParam0, int iParam1)//Position - 0x4939
{
	uParam0->f_109 = iParam1;
}

void func_189(var uParam0)//Position - 0x4947
{
	func_190(uParam0, 1, 1);
}

void func_190(var uParam0, bool bParam1, int iParam2)//Position - 0x4957
{
	int iVar0;
	int iVar1;
	
	Global_23390.f_6182 = uParam0;
	Global_23390.f_6317 = iParam2;
	if (Global_23390.f_6182 < Global_23390.f_6181)
	{
		Global_23390.f_6181 = Global_23390.f_6182;
	}
	else if ((Global_23390.f_6172 && Global_23390.f_6182 > Global_23390.f_6183) || (!Global_23390.f_6172 && Global_23390.f_6182 >= (Global_23390.f_6181 + Global_23390.f_5668)))
	{
		iVar0 = Global_23390.f_6181;
		while (iVar0 <= Global_23390.f_6182)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23390.f_5532[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23390.f_5668 && Global_23390.f_6181 < 128)
		{
			Global_23390.f_6181++;
			iVar1 = 0;
			iVar0 = Global_23390.f_6181;
			while (iVar0 <= Global_23390.f_6182)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23390.f_5532[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23390.f_6171 = 0;
	Global_23390.f_6172 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23390.f_5081), "", 24);
		StringCopy(&(Global_4540958.f_21), "", 16);
	}
}

void func_191(var uParam0, int iParam1)//Position - 0x4AA5
{
	uParam0->f_112 = iParam1;
}

void func_192()//Position - 0x4AB3
{
	func_193(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
}

void func_193(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x4ACC
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int* iVar47;
	int* iVar48;
	int* iVar49;
	int* iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	char cVar63[64];
	char cVar79[64];
	float fVar95;
	int iVar96;
	float fVar97;
	float fVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	char cVar105[16];
	float fVar109;
	float fVar110;
	float fVar111;
	float fVar112;
	float fVar113;
	
	if (!func_110(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_220(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23390)
	{
		if (func_172(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_23390 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23389;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_23388;
	}
	else
	{
		fVar59 = (((Global_23388 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_174(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23390.f_5661 <= 1)
		{
			func_170(Global_23390.f_5661 + 1, "DFLT_MNU_OPT" /* GXT: Exit */, 0, 1, 0, 0, 0);
			Global_23390.f_6457 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23390.f_6171)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_23388;
			}
			else
			{
				if (Global_23390)
				{
					StringCopy(&cVar63, func_179(29), 64);
					StringCopy(&cVar79, func_176(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_165(Global_23387, Global_23388, fParam5, fVar57, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar63, &cVar79, (Global_23387 + (fParam5 * 0.5f)), (Global_23388 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23390.f_8862)
				{
					iVar1 = Global_23390.f_8858;
					iVar2 = Global_23390.f_8859;
					iVar3 = Global_23390.f_8860;
					iVar4 = Global_23390.f_8861;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_165(Global_23387, (Global_23388 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23388 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) != 0)
				{
					func_219();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23390.f_74)
					{
						if (Global_23390.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23390.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_14[iVar16], Global_23390.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23390.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23390.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23390.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23390.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23390.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23390.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23387 + 0.00390625f), ((Global_23388 + fVar57) + 0.00416664f), 0);
				}
				if (Global_23390.f_6178)
				{
					func_219();
					func_217((((Global_23387 + fParam5) - 0.00390625f) - func_218("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6179, Global_23390.f_6180)), ((Global_23388 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6179, Global_23390.f_6180);
				}
				else if (Global_23390.f_6174 > Global_23390.f_5668)
				{
					if (Global_23390.f_6177 != 0)
					{
						func_219();
						func_217((((Global_23387 + fParam5) - 0.00390625f) - func_218("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6177, Global_23390.f_6176)), ((Global_23388 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6177, Global_23390.f_6176);
					}
				}
			}
			iVar6 = Global_23390.f_6181;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_23390.f_8872)
			{
				iVar1 = Global_23390.f_8868;
				iVar2 = Global_23390.f_8869;
				iVar3 = Global_23390.f_8870;
				iVar4 = Global_23390.f_8871;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23390.f_5668 && iVar6 <= Global_23390.f_5661)
			{
				if (iVar6 >= 0)
				{
					if (Global_23390.f_5928[iVar6])
					{
						if (Global_23390.f_5799[iVar6] && iVar6 != Global_23390.f_6181)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_23390.f_6188[iVar6] != 0f)
						{
							fVar56 = Global_23390.f_6188[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23390.f_6174 > Global_23390.f_5668)
			{
				if (Global_23390.f_8877)
				{
					iVar1 = Global_23390.f_8873;
					iVar2 = Global_23390.f_8874;
					iVar3 = Global_23390.f_8875;
					iVar4 = Global_23390.f_8876;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_165(Global_23387, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_23390.f_8890)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23390.f_5081)) != 0 && Global_23390.f_5163 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				if (Global_23390.f_5165 != 0)
				{
					func_172(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_216(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23390.f_5159)
				{
					if (Global_23390.f_5093[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23390.f_5093[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23390.f_5093[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_165(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23390.f_8882)
				{
					iVar1 = Global_23390.f_8878;
					iVar2 = Global_23390.f_8879;
					iVar3 = Global_23390.f_8880;
					iVar4 = Global_23390.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_216(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23390.f_5159)
				{
					if (Global_23390.f_5093[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23390.f_5093[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23390.f_5093[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_23390.f_5165 != 0)
				{
					func_172(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					func_215(Global_23390.f_5165, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_179(Global_23390.f_5165), func_176(Global_23390.f_5165, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_216(fVar42);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_165(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_23390.f_8882)
					{
						iVar1 = Global_23390.f_8878;
						iVar2 = Global_23390.f_8879;
						iVar3 = Global_23390.f_8880;
						iVar4 = Global_23390.f_8881;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
					func_216(fVar42);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_23390.f_5163 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23390.f_5164) > Global_23390.f_5163)
					{
						StringCopy(&(Global_23390.f_5081), "", 24);
						Global_23390.f_5163 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				func_216(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23390.f_5159)
				{
					if (Global_23390.f_5093[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_5098[iVar15]);
						iVar15++;
					}
					else if (Global_23390.f_5093[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_5102[iVar16], Global_23390.f_5106[iVar16]);
						iVar16++;
					}
					else if (Global_23390.f_5093[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23390.f_5093[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23390.f_5110[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_165(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23390.f_8882)
				{
					iVar1 = Global_23390.f_8878;
					iVar2 = Global_23390.f_8879;
					iVar3 = Global_23390.f_8880;
					iVar4 = Global_23390.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_216(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4540958.f_21)) != 0 && Global_4540958.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				if (Global_4540958.f_67 != 0)
				{
					func_172(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_216(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540958.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540958.f_61)
				{
					if (Global_4540958.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540958.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540958.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_165(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23390.f_8882)
				{
					iVar1 = Global_23390.f_8878;
					iVar2 = Global_23390.f_8879;
					iVar3 = Global_23390.f_8880;
					iVar4 = Global_23390.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23387 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_216(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540958.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4540958.f_61)
				{
					if (Global_4540958.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540958.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4540958.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540958.f_34[iVar16], Global_4540958.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4540958.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4540958.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4540958.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4540958.f_67 != 0)
				{
					func_172(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_215(Global_4540958.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_179(Global_4540958.f_67), func_176(Global_4540958.f_67, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4540958.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4540958.f_66) > Global_4540958.f_65)
					{
						StringCopy(&(Global_4540958.f_21), "", 16);
						Global_4540958.f_65 = -1;
					}
				}
			}
			func_206(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23390.f_6171)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar96 = Global_23390.f_5661;
			if (Global_23390.f_6172)
			{
				iVar96 = (Global_23390.f_6175 - 1);
			}
			fVar97 = 0f;
			fVar98 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar96)
			{
				fVar56 = 0.034722f;
				if (Global_23390.f_6188[iVar6] != 0f)
				{
					fVar56 = Global_23390.f_6188[iVar6];
				}
				if (Global_23390.f_6172)
				{
					iVar6 = Global_23390.f_8513[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23390.f_6181 && iVar9 < Global_23390.f_5668)
				{
					bVar33 = true;
					if (Global_23390.f_6182 == iVar6)
					{
						fVar98 = fVar97;
					}
					if (Global_23390.f_5799[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23390.f_6322[iVar6] = fVar35;
				fVar34 = (Global_23387 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_23390.f_6182 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_23390.f_8884)
					{
						HUD::GET_HUD_COLOUR(Global_23390.f_8883, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23387 + (fParam5 * 0.5f)), (((fVar59 + fVar98) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar100, iVar101, iVar102, iVar103, false, 0);
					Global_23390.f_6320 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23390.f_5669)
				{
					if (BitTest(Global_23390.f_5532[iVar6], iVar8) || Global_23390.f_5499[iVar8] == 5)
					{
						if (Global_23390.f_6172)
						{
							iVar19 = Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar20 = Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar21 = Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar22 = Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)];
							iVar23 = Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)];
						}
						else
						{
							Global_23390.f_8529[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar19;
							Global_23390.f_8570[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar20;
							Global_23390.f_8611[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar21;
							Global_23390.f_8652[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar22;
							Global_23390.f_8693[((iVar9 * Global_23390.f_5669) + iVar8)] = iVar23;
						}
						iVar104 = 0;
						bVar55 = false;
						if (Global_23390.f_6454[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23390.f_6451[0])
							{
								bVar55 = true;
								iVar104 = 0;
							}
						}
						if (Global_23390.f_6454[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23390.f_6451[1])
							{
								bVar55 = true;
								iVar104 = 1;
							}
						}
						if (Global_23390.f_5505[iVar8] != -1f)
						{
							fVar34 = ((Global_23387 + 0.0046875f) + Global_23390.f_5505[iVar8]);
						}
						if ((iVar8 < 4 && Global_23390.f_5505[iVar8 + 1] != -1f) && fVar34 < Global_23390.f_5505[iVar8 + 1])
						{
							fVar46 = (Global_23390.f_5505[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_23387 + Global_23389) - 0.0046875f) - fVar34);
						}
						if ((Global_23390.f_5518[iVar8] && Global_23390.f_6317) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_23390.f_5499[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23390.f_6172)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_23390.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_181(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_172(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_23390.f_4824[(iVar22 + iVar14)] == 2 || Global_23390.f_4824[(iVar22 + iVar14)] == 52) || Global_23390.f_4824[(iVar22 + iVar14)] == 62)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_23390.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
										Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar43;
										Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar44;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											iVar99 = (iVar8 - 1);
											while (iVar99 >= 0)
											{
												if (Global_23390.f_5526[iVar99] == 2)
												{
													Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar99)] = (Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar99)] - Global_23390.f_5511[iVar8]);
												}
												iVar99 = (iVar99 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar43 = Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar44 = Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_172(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(26), func_176(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_172(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_172(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(27), func_176(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_23390.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_181(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_205(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[(iVar21 + iVar27)], Global_23390.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23390.f_4824[(iVar22 + iVar28)] == 2 || Global_23390.f_4824[(iVar22 + iVar28)] == 52) || Global_23390.f_4824[(iVar22 + iVar28)] == 62)
											{
												if (func_172(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_172(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_215(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23390.f_5526[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23390.f_4824[(iVar22 + iVar28)]), func_176(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23390.f_4824[(iVar22 + iVar28)]), func_176(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23390.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23390.f_5526[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_60() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23390.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_181(0, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar105, "TEST_LABEL", 16);
													fVar109 = 0f;
													fVar110 = 55f;
													fVar111 = 0.0185f;
													fVar112 = 0.004f;
													fVar113 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar113 * 0.6f)), (fVar35 + (fVar111 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar109), SYSTEM::FLOOR(fVar110), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar105);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23390.f_6181 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar113), (fVar35 + fVar112), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23390.f_4824[(iVar22 + iVar14)] != 2 && Global_23390.f_4824[(iVar22 + iVar14)] != 52) && Global_23390.f_4824[(iVar22 + iVar14)] != 62)
											{
												if (func_172(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_172(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_215(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23390.f_4824[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23390.f_4824[(iVar22 + iVar14)]), func_176(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (Global_23387 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23390.f_5526[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23390.f_4824[(iVar22 + iVar14)]), func_176(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_179(Global_23390.f_4824[(iVar22 + iVar14)]), func_176(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23390.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23390.f_6172)
									{
										func_181(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_205(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[iVar20]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23390.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
										Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar43 = Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_172(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(26), func_176(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_172(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_172(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(27), func_176(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_181(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										func_204((fVar34 + fVar42), fVar35, "NUMBER", Global_23390.f_4309[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23390.f_6172)
									{
										func_181(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_205(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
										fVar43 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										fVar42 = 0f;
										if (Global_23390.f_5526[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_23390.f_5526[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
										Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
										fVar43 = Global_23390.f_8775[((iVar9 * Global_23390.f_5669) + iVar8)];
									}
									if (bVar54)
									{
										if (func_172(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(26), func_176(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_172(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_172(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_179(27), func_176(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_181(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
									func_203((fVar34 + fVar42), fVar35, "NUMBER", Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_172(Global_23390.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23390.f_6172)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_23390.f_5526[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar42;
											Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_23390.f_8734[((iVar9 * Global_23390.f_5669) + iVar8)];
											fVar44 = Global_23390.f_8816[((iVar9 * Global_23390.f_5669) + iVar8)];
										}
										if (bVar54)
										{
											if (func_172(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23390.f_5526[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_215(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_179(26), func_176(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_172(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_172(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_215(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_179(27), func_176(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_172(Global_23390.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_215(Global_23390.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_179(Global_23390.f_4824[iVar22]), func_176(Global_23390.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_202(Global_23390.f_4824[iVar22])), (fVar37 * func_202(Global_23390.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_23390.f_5499[iVar8] == 5)
						{
							if (Global_23390.f_5511[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23390.f_5511[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23390.f_5511[iVar8]);
							if (Global_23390.f_5518[iVar8])
							{
								if (func_172(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23390.f_5511[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_23390.f_8513[iVar9] = iVar6;
						Global_23390.f_6183 = iVar6;
						iVar9++;
						if (Global_23390.f_5799[iVar6])
						{
							iVar13++;
						}
						if (Global_23390.f_6188[iVar6] != 0f)
						{
							fVar97 = (fVar97 + Global_23390.f_6188[iVar6]);
						}
						else
						{
							fVar97 = (fVar97 + 0.034722f);
						}
					}
					if (!Global_23390.f_6171)
					{
						Global_23390.f_5928[iVar6] = 1;
						if (Global_23390.f_5670[iVar6])
						{
							if (bVar32)
							{
								Global_23390.f_6177 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23390.f_6177 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23390.f_6171)
			{
				Global_23390.f_6173 = ((fVar59 + fVar97) + (0.00277776f * IntToFloat(iVar12)));
				Global_23390.f_6176 = iVar11;
				Global_23390.f_6174 = iVar10;
				Global_23390.f_6171 = 1;
			}
		}
		if (!Global_23390.f_6172)
		{
			Global_23390.f_6175 = iVar9;
			Global_23390.f_6172 = 1;
		}
		iVar5++;
	}
	Global_23390.f_6319 = fVar51;
	Global_23390.f_6321 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23390.f_6319);
	if (!Global_23390.f_8857)
	{
		func_195(0);
	}
	Global_23390.f_8857 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_194(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_194(int iParam0)//Position - 0x7C24
{
	Global_1655612.f_1163 = iParam0;
}

void func_195(int iParam0)//Position - 0x7C35
{
	if (func_201())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_200(0))
		{
			func_196(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

void func_196(int iParam0)//Position - 0x7C68
{
	if (func_201())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_199())
		{
			func_198(1, 1);
		}
		else
		{
			func_198(0, 0);
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
	if (!func_197())
	{
		Global_20500.f_1 = 3;
	}
}

int func_197()//Position - 0x7CF2
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_198(bool bParam0, bool bParam1)//Position - 0x7D19
{
	if (bParam0)
	{
		if (func_200(0))
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

bool func_199()//Position - 0x7D8D
{
	return BitTest(Global_1963795, 5);
}

int func_200(int iParam0)//Position - 0x7D9B
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

bool func_201()//Position - 0x7DF2
{
	return BitTest(Global_1963795, 19);
}

float func_202(int iParam0)//Position - 0x7E01
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 54:
		case 45:
		case 46:
		case 47:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_203(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x7E70
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_204(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x7E8F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_205(bool bParam0)//Position - 0x7EAD
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23390.f_8885[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23390.f_8885[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_206(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x7EF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_110(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_220(bParam4, bParam8))
	{
		return;
	}
	if (func_213())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_209(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_23390.f_5166 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
		{
			iVar1 = 0;
			while (iVar1 < Global_23390.f_5166)
			{
				if (Global_23390.f_5465[iVar1] != 363)
				{
					StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23390.f_5465[iVar1], true), 64);
				}
				else if (Global_23390.f_5480[iVar1] != 32)
				{
					StringCopy(&(Global_23390.f_5168[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, Global_23390.f_5480[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23390.f_5167 = 0;
		}
		if (!Global_23390.f_5167)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23390.f_5524 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23390.f_5166)
			{
				if (MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_208(&(Global_23390.f_5168[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_208(&(Global_23390.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23390.f_5450[iVar1] == -1)
					{
						func_207(&(Global_23390.f_5393[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23390.f_5450[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23390.f_5465[iVar1] != 363 && BitTest(Global_23390.f_5495, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5465[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4540958.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23390.f_5166);
				func_208(&Global_4540958);
				if (Global_4540958.f_20 == -1)
				{
					func_207(&(Global_4540958.f_16));
				}
				else
				{
					iVar4 = Global_23390.f_5450[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23390.f_5525)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23390.f_5167 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23390.f_5166)
		{
			if (Global_23390.f_5450[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23390.f_5393[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4540958.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540958.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23390.f_8892)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23390.f_8892 = 1;
			}
		}
		else if (Global_23390.f_8892)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23390.f_8892 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23390.f_5498)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23390.f_6103[iVar0 /*10*/], Global_23390.f_5496, Global_23390.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23390.f_6103[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_207(char* sParam0)//Position - 0x83F8
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_208(char* sParam0)//Position - 0x840A
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_209(int iParam0, int iParam1)//Position - 0x8418
{
	bool bVar0;
	
	if (!func_212(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_210(-1, 0) == 8;
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

int func_210(int iParam0, bool bParam1)//Position - 0x8471
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_211();
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

int func_211()//Position - 0x84B2
{
	return Global_1574918;
}

int func_212(var uParam0)//Position - 0x84BE
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

int func_213()//Position - 0x84E0
{
	struct<3> Var0;
	
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	if (func_214())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20445 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_214()//Position - 0x854E
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x8568
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 54:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 45:
		case 46:
		case 47:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 55:
			*iParam5 = 100;
			break;
		
		case 63:
			*iParam5 = 100;
			break;
		
		case 56:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_216(float fParam0)//Position - 0x8689
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23387 + Global_23389) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_217(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x86E8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_218(char* sParam0, int iParam1, int iParam2)//Position - 0x870B
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_219();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_219()//Position - 0x874D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23390.f_8867)
	{
		iVar0 = Global_23390.f_8863;
		iVar1 = Global_23390.f_8864;
		iVar2 = Global_23390.f_8865;
		iVar3 = Global_23390.f_8866;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23387 + 0.0046875f), ((Global_23387 + Global_23389) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

int func_220(bool bParam0, bool bParam1)//Position - 0x87D7
{
	if (Global_2672524.f_1685.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_222(8, -1) && func_221() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78950) || Global_23390.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100885.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_221()//Position - 0x8874
{
	return Global_1574996;
}

var func_222(int iParam0, int iParam1)//Position - 0x8880
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

void func_223(var uParam0, int iParam1)//Position - 0x88B8
{
	uParam0->f_107 = iParam1;
}

int func_224(int* iParam0)//Position - 0x88C6
{
	func_244(-1);
	func_111(1, 0);
	func_241(iParam0);
	func_237(iParam0);
	func_236(0, 0, 0, 0, 0);
	func_232(iParam0);
	func_225(iParam0);
	func_18(iParam0, iParam0->f_1);
	return 1;
}

void func_225(int* iParam0)//Position - 0x8906
{
	if (func_13(iParam0, 3))
	{
		func_120(202, "PIMK2_CANCEL", -1);
		func_120(201, "PIMK2_ACCEPT", -1);
		return;
	}
	if (func_13(iParam0, 5))
	{
		return;
	}
	if (!func_52(&(iParam0->f_72)))
	{
		func_229(iParam0);
	}
	func_226(iParam0);
}

void func_226(int* iParam0)//Position - 0x8956
{
	func_227(&(iParam0->f_72), &(iParam0->f_72));
}

void func_227(var uParam0, var uParam1)//Position - 0x896A
{
	int iVar0;
	
	iVar0 = func_228(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

var func_228(var uParam0)//Position - 0x8989
{
	return uParam0->f_27;
}

void func_229(int* iParam0)//Position - 0x8995
{
	func_230(&(iParam0->f_6), &(iParam0->f_72));
}

void func_230(var uParam0, var uParam1)//Position - 0x89A9
{
	int iVar0;
	
	iVar0 = func_231(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	Stack.Push(uParam1);
	Call_Loc(iVar0);
}

var func_231(var uParam0)//Position - 0x89C8
{
	return uParam0->f_30;
}

void func_232(int* iParam0)//Position - 0x89D4
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<33> Var3;
	int iVar36;
	int iVar37;
	
	func_235(iParam0, 0);
	iVar0 = func_34(&(iParam0->f_6));
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_8 = -1;
	iVar36 = -1;
	while (iVar36 != 2)
	{
		Var3 = { func_29(iParam0) };
		Stack.Push(iVar1);
		Stack.Push(&Var3);
		Call_Loc(iVar0);
		iVar36 = StackVal;
		if (iVar36 != 0)
		{
			iVar1++;
		}
		else
		{
			if (func_233(iParam0, iVar1, &Var3))
			{
				iVar2++;
			}
			iVar1++;
		}
	}
	iVar37 = func_32(0, (iVar2 - 1));
	func_235(iParam0, iVar37);
	func_25(iParam0, iParam0->f_1);
	func_24(&(iParam0->f_72));
}

int func_233(var uParam0, int iParam1, var uParam2)//Position - 0x8A73
{
	if (func_27(uParam2))
	{
		return 0;
	}
	func_234(uParam2, iParam1);
	Global_23390.f_1616[iParam1] = func_68(uParam2);
	return 1;
}

void func_234(var uParam0, var uParam1)//Position - 0x8AA1
{
	if (uParam0->f_16 == 0)
	{
		return;
	}
	Stack.Push(uParam0);
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_16);
}

void func_235(var uParam0, int iParam1)//Position - 0x8ABD
{
	uParam0->f_2 = iParam1;
}

void func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8ACB
{
	Global_23390.f_5518[0] = iParam0;
	Global_23390.f_5518[1] = iParam1;
	Global_23390.f_5518[2] = iParam2;
	Global_23390.f_5518[3] = iParam3;
	Global_23390.f_5518[4] = iParam4;
}

void func_237(int* iParam0)//Position - 0x8B0A
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_239(func_240(&(iParam0->f_6)))))
	{
		func_238(func_184(&(iParam0->f_6)));
		return;
	}
	func_238(func_240(&(iParam0->f_6)));
}

void func_238(char* sParam0)//Position - 0x8B40
{
	int iVar0;
	
	StringCopy(&(Global_23390.f_1), sParam0, 16);
	Global_23390.f_74 = 0;
	Global_23390.f_75 = 0;
	Global_23390.f_76 = 0;
	Global_23390.f_77 = 0;
	Global_23390.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23390.f_5[iVar0] = 0;
		iVar0++;
	}
}

var func_239(var uParam0)//Position - 0x8B8B
{
	return uParam0;
}

var func_240(var uParam0)//Position - 0x8B95
{
	return uParam0->f_1;
}

void func_241(int* iParam0)//Position - 0x8BA1
{
	func_243(1, 1, 0, 0, 0);
	func_242(1, 2, 1, 1, 1);
	func_4(iParam0);
}

void func_242(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8BC1
{
	Global_23390.f_5526[0] = iParam0;
	Global_23390.f_5526[1] = iParam1;
	Global_23390.f_5526[2] = iParam2;
	Global_23390.f_5526[3] = iParam3;
	Global_23390.f_5526[4] = iParam4;
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8C00
{
	Global_23390.f_5499[0] = iParam0;
	Global_23390.f_5499[1] = iParam1;
	Global_23390.f_5499[2] = iParam2;
	Global_23390.f_5499[3] = iParam3;
	Global_23390.f_5499[4] = iParam4;
	Global_23390.f_5669 = 0;
	if (iParam0 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam1 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam2 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam3 != 0)
	{
		Global_23390.f_5669++;
	}
	if (iParam4 != 0)
	{
		Global_23390.f_5669++;
	}
}

void func_244(int iParam0)//Position - 0x8CAA
{
	int iVar0;
	int iVar1;
	
	Global_23390.f_5166 = 0;
	Global_23390.f_5167 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_23390.f_5393[iVar0 /*4*/]), "", 16);
		Global_23390.f_5450[iVar0] = -1;
		Global_23390.f_5465[iVar0] = 363;
		Global_23390.f_5480[iVar0] = 32;
		iVar0++;
	}
	Global_23390.f_5495 = 0;
	StringCopy(&(Global_4540958.f_16), "", 16);
	Global_4540958.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_110(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23390.f_6103[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23390.f_6103[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_245(var uParam0)//Position - 0x8D61
{
	func_102(uParam0, "TUT_ROOT_TITLE", 0);
	func_94(uParam0, 0, 36224/*func_246*/, 2);
}

int func_246(int iParam0, var uParam1)//Position - 0x8D80
{
	func_98(uParam1, iLocal_158);
	switch (iParam0)
	{
		case 0:
			func_93(uParam1);
			return 0;
		
		case 1:
			func_247(uParam1);
			return 0;
		
		default:
	}
	return 2;
}

void func_247(var uParam0)//Position - 0x8DB8
{
	func_101(uParam0, "TUT_ROOT_M2", 0);
	func_99(uParam0, "TUT_ROOT_M2_D", 0);
}

