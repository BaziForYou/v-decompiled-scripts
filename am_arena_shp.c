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
	int iLocal_12 = 0;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	char* sLocal_16 = NULL;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	struct<67> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	struct<2> Local_105 = { 0, 0 } ;
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
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 1;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	struct<34> ScriptParam_0 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_12 = -1;
	fLocal_13 = 0.001f;
	sLocal_16 = "NULL";
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_53(ScriptParam_0);
	}
	else
	{
		func_51();
	}
	while (true)
	{
		func_50();
		if (Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */)
		{
			func_51();
		}
		if (func_42())
		{
			func_51();
		}
		func_1();
	}
}

void func_1()//Position - 0x78
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4536658)
	{
		if (Global_4540738[iLocal_19 /*12*/].f_11)
		{
			func_39(iLocal_19);
			Global_4540738[iLocal_19 /*12*/].f_11 = 0;
		}
	}
	if (Local_20.f_66.f_8)
	{
		func_17(Local_20.f_66);
	}
	if ((Local_20.f_66.f_2 == 1 && Global_4536659) && func_16(&Local_20))
	{
		bVar0 = true;
	}
	if (Global_4535172[iLocal_19 /*85*/].f_66 == 2147483647 && Local_20.f_66.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_51();
	}
	if (Local_20.f_66.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		if ((MISC::GET_FRAME_COUNT() - Local_20.f_66.f_18) > iVar2 * 10)
		{
			Local_20.f_66.f_18 = -1;
		}
	}
	if (((func_13() && Local_20.f_66.f_2 == 1) && Local_20.f_66.f_13) && !Local_20.f_66.f_12)
	{
		if (MISC::GET_FRAME_COUNT() - Local_20.f_66.f_14) >= func_12(Local_20.f_66.f_5)
		{
			iVar1 = 0;
			if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
			{
				iVar1 = 1;
			}
			else if (Local_20.f_66.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_20.f_66.f_5 != 1 && !NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&(Local_20.f_66), Local_20.f_66.f_6, Local_20.f_66.f_4, Local_20.f_66.f_7, Local_20.f_66.f_1, Local_20.f_66.f_10))
			{
				iVar1 = 3;
			}
			else if (!NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Local_20.f_66))
			{
				iVar1 = 4;
			}
			else
			{
				Local_20.f_66.f_12 = 1;
				Global_4535172[iLocal_19 /*85*/].f_66.f_12 = 1;
				Global_4535172[iLocal_19 /*85*/].f_66 = Local_20.f_66;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_19);
				func_51();
			}
		}
	}
	if (!iLocal_151)
	{
		if (bVar0)
		{
			func_5(&Local_105, 0);
			iLocal_151 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_105.f_1), "HUD_TRANSP" /* GXT: Transaction Pending */, 64);
		func_2(&Local_105, func_4(&Local_105));
	}
	else
	{
		iLocal_151 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)//Position - 0x27B
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(&(uParam0->f_1));
			HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)//Position - 0x379
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)//Position - 0x386
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)//Position - 0x392
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)//Position - 0x3AF
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)//Position - 0x3CA
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
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
		func_8(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_8(var uParam0)//Position - 0x41E
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
	func_9(&(uParam0->f_14));
	func_9(&(uParam0->f_14.f_13));
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

void func_9(var uParam0)//Position - 0x52A
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

int func_10(int iParam0)//Position - 0x572
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

var func_11()//Position - 0x59D
{
	return Global_1574918;
}

int func_12(int iParam0)//Position - 0x5A9
{
	switch (iParam0)
	{
		case 0:
			return Global_4536661;
			break;
		
		case 1:
			return Global_4536660;
			break;
	}
	return 0;
}

int func_13()//Position - 0x5D9
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_14()//Position - 0x5F0
{
	return Global_100885.f_394 > 0;
}

void func_15(bool bParam0)//Position - 0x601
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

int func_16(var uParam0)//Position - 0x616
{
	if (uParam0->f_66.f_4 == joaat("SERVICE_SPEND_CASH_DROP"))
	{
		return 0;
	}
	return 1;
}

void func_17(int iParam0)//Position - 0x631
{
	struct<7> Var0;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<67> Var10;
	bool bVar95;
	var uVar96;
	int iVar101;
	int iVar102;
	int iVar103;
	
	iVar7 = 0;
	bVar8 = false;
	if (!func_13())
	{
		iVar7 = 1;
		Var0.f_0 = iParam0;
		Var0.f_2 = 0;
	}
	if (iVar7 || SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		Var10.f_66 = 2147483647;
		iVar9 = func_38(Var0.f_0, &Var10);
		if (iVar9 != -1)
		{
			Global_4535172[iVar9 /*85*/].f_66.f_8 = 0;
			if (Global_4535172[iVar9 /*85*/].f_66.f_18 == 0)
			{
				Global_4535172[iVar9 /*85*/].f_66.f_18 = MISC::GET_FRAME_COUNT();
			}
		}
		bVar95 = true;
		if (iVar9 != -1)
		{
			Global_4535172[iVar9 /*85*/].f_66.f_17 = Var0.f_2;
		}
		else
		{
			Global_4536646.f_4 = Var0.f_2;
			Global_4536646.f_6 = Var0.f_3;
			Global_4536646.f_7 = Var0.f_4;
			Global_4536646.f_8 = Var0.f_5;
			Global_4536646.f_9 = Var0.f_6;
			if (Global_4536646.f_10 == 0)
			{
				Global_4536646.f_10 = MISC::GET_FRAME_COUNT();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar9 != -1)
				{
					Global_4540738[iVar9 /*12*/] = Global_4535172[iVar9 /*85*/].f_66.f_3;
					Global_4540738[iVar9 /*12*/].f_1 = Global_4535172[iVar9 /*85*/].f_66.f_7;
					Global_4540738[iVar9 /*12*/].f_2 = Global_4535172[iVar9 /*85*/].f_66.f_4;
					Global_4540738[iVar9 /*12*/].f_3 = Global_4535172[iVar9 /*85*/].f_66.f_1;
					Global_4540738[iVar9 /*12*/].f_5 = Var0.f_1;
					Global_4540738[iVar9 /*12*/].f_6 = Var0.f_3;
					Global_4540738[iVar9 /*12*/].f_7 = Var0.f_4;
					Global_4540738[iVar9 /*12*/].f_8 = Var0.f_5;
					Global_4540738[iVar9 /*12*/].f_9 = Var0.f_6;
					Global_4540738[iVar9 /*12*/].f_11 = 1;
					Global_4535172[iVar9 /*85*/].f_66.f_2 = 2;
					if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 4 != 0)
					{
						func_33(iVar9, bVar95);
					}
					else if (func_13())
					{
						if (bVar95)
						{
							NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4535172[iVar9 /*85*/].f_66, &uVar96);
						}
					}
				}
				break;
			
			default:
				if (iVar9 != -1)
				{
					Global_4535172[iVar9 /*85*/].f_66.f_2 = 3;
					if ((Global_4535172[iVar9 /*85*/].f_66.f_11 & 1 != 0 && Global_4535172[iVar9 /*85*/].f_66.f_9 < 2) && func_32(Var0.f_2))
					{
						if (func_10(iVar9))
						{
							if (func_24())
							{
								Global_4535172[iVar9 /*85*/].f_66.f_2 = 1;
								Global_4535172[iVar9 /*85*/].f_66.f_9++;
							}
							else if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 2 != 0)
							{
								Global_4536680 = Global_4535172[iVar9 /*85*/].f_66.f_4;
								Global_4536682 = Global_4535172[iVar9 /*85*/].f_66.f_6;
								Global_4536683 = Var0.f_2;
								Global_4536681 = Global_4535172[iVar9 /*85*/].f_66.f_1;
								if (func_23(Global_4536680) && func_13())
								{
									if (!func_22(Global_4535172[iVar9 /*85*/].f_66))
									{
										iVar101 = func_21();
										Global_4536533[iVar101 /*7*/] = Global_4535172[iVar9 /*85*/].f_66;
										Global_4536533[iVar101 /*7*/].f_2 = Global_4536680;
										Global_4536533[iVar101 /*7*/].f_3 = Global_4536682;
										Global_4536533[iVar101 /*7*/].f_1 = Global_4536681;
										Global_4536533[iVar101 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
									}
								}
								else
								{
									Global_4536677 = 1;
								}
							}
						}
						else if (func_20(&iVar9))
						{
							Global_4535172[iVar9 /*85*/].f_66.f_2 = 1;
							Global_4535172[iVar9 /*85*/].f_66.f_9++;
						}
						else if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 2 != 0)
						{
							Global_4536680 = Global_4535172[iVar9 /*85*/].f_66.f_4;
							Global_4536682 = Global_4535172[iVar9 /*85*/].f_66.f_6;
							Global_4536683 = Var0.f_2;
							Global_4536681 = Global_4535172[iVar9 /*85*/].f_66.f_1;
							if (func_23(Global_4536680) && func_13())
							{
								if (!func_22(Global_4535172[iVar9 /*85*/].f_66))
								{
									iVar102 = func_21();
									Global_4536533[iVar102 /*7*/] = Global_4535172[iVar9 /*85*/].f_66;
									Global_4536533[iVar102 /*7*/].f_2 = Global_4536680;
									Global_4536533[iVar102 /*7*/].f_3 = Global_4536682;
									Global_4536533[iVar102 /*7*/].f_1 = Global_4536681;
									Global_4536533[iVar102 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
								}
							}
							else
							{
								Global_4536677 = 1;
							}
						}
					}
					else if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 2 != 0)
					{
						Global_4536680 = Global_4535172[iVar9 /*85*/].f_66.f_4;
						Global_4536682 = Global_4535172[iVar9 /*85*/].f_66.f_6;
						Global_4536683 = Var0.f_2;
						Global_4536681 = Global_4535172[iVar9 /*85*/].f_66.f_1;
						if ((func_23(Global_4536680) && func_13()) && func_32(Var0.f_2))
						{
							if (!func_22(Global_4535172[iVar9 /*85*/].f_66))
							{
								iVar103 = func_21();
								Global_4536533[iVar103 /*7*/] = Global_4535172[iVar9 /*85*/].f_66;
								Global_4536533[iVar103 /*7*/].f_2 = Global_4536680;
								Global_4536533[iVar103 /*7*/].f_3 = Global_4536682;
								Global_4536533[iVar103 /*7*/].f_1 = Global_4536681;
								Global_4536533[iVar103 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
							}
						}
						else
						{
							Global_4536677 = 1;
						}
					}
					if (Global_4535172[iVar9 /*85*/].f_66.f_2 == 3)
					{
						if (bVar8)
						{
							func_19(1, Global_4535172[iVar9 /*85*/].f_66.f_4);
							Global_4536677 = 0;
						}
						if (Global_4535172[iVar9 /*85*/].f_66.f_11 & 4 != 0)
						{
							func_18(iVar9, Global_4535172[iVar9 /*85*/].f_66.f_4, Global_4535172[iVar9 /*85*/].f_66.f_10, Global_4535172[iVar9 /*85*/].f_66.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0xBA8
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)//Position - 0xBE0
{
	Global_2697092 = uParam1;
	Global_2697091 = iParam0;
}

int func_20(int iParam0)//Position - 0xBF4
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (Global_4535172[*iParam0 /*85*/].f_66.f_6 == joaat("CATEGORY_WEAPON_AMMO") || Global_4535172[*iParam0 /*85*/].f_66.f_6 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(Global_4535172[*iParam0 /*85*/].f_66))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4535172[*iParam0 /*85*/].f_66.f_13 = 1;
		Global_4535172[*iParam0 /*85*/].f_66.f_12 = 0;
		Global_4535172[*iParam0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4535172[*iParam0 /*85*/].f_66.f_8 = 1;
				Global_4535172[*iParam0 /*85*/].f_66.f_12 = 1;
			}
		}
		Global_4535172[*iParam0 /*85*/].f_66.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()//Position - 0xD24
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4536533;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4536533[iVar0 /*7*/] != 0 && Global_4536533[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)//Position - 0xD7A
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4536533;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4536533[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4536533[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4536533[iVar0 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
			Global_4536533[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)//Position - 0xDF8
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN") || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS")) || iParam0 == joaat("SERVICE_EARN_JOB_BONUS")) || iParam0 == joaat("SERVICE_EARN_BEND_JOB")) || iParam0 == joaat("SERVICE_EARN_JOBS")) || iParam0 == joaat("SERVICE_EARN_BOSS")) || iParam0 == joaat("SERVICE_EARN_GOON")) || iParam0 == joaat("SERVICE_EARN_BOSS_AGENCY")) || iParam0 == joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND")) || iParam0 == joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT")) || iParam0 == joaat("SERVICE_EARN_PREMIUM_JOB")) || iParam0 == joaat("SERVICE_EARN_SMUGGLER_AGENCY")) || iParam0 == joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS")) || iParam0 == joaat("SERVICE_EARN_WAGE_PAYMENT")) || iParam0 == joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND")) || iParam0 == joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD")) || iParam0 == joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_WAGES")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_SETUP")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_FINALE")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO")) || iParam0 == joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY")) || iParam0 == joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS")) || iParam0 == joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD")) || iParam0 == joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE")) || iParam0 == joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION")) || iParam0 == joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION")) || iParam0 == joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL")) || iParam0 == joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK")) || iParam0 == joaat("SERVICE_EARN_FMBB_WAGE_BONUS")) || iParam0 == joaat("SERVICE_EARN_NIGHTCLUB_DANCING_AWARD")) || iParam0 == joaat("SERVICE_EARN_BB_EVENT_BONUS")) || iParam0 == joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD")) || iParam0 == joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1")) || iParam0 == joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2")) || iParam0 == joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3")) || iParam0 == joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4")) || iParam0 == joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH")) || iParam0 == joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED")) || iParam0 == joaat("SERVICE_EARN_ARENA_WAR")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL")) || iParam0 == joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT")) || iParam0 == joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES")) || iParam0 == joaat("SERVICE_EARN_CASINO_MISSION_REWARD")) || iParam0 == joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD")) || iParam0 == joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_FINALE")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE")) || iParam0 == joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT")) || iParam0 == joaat("SERVICE_EARN_COLLECTABLE_ITEM")) || iParam0 == joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION")) || iParam0 == joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS")) || iParam0 == joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_FINALE")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_PREP")) || iParam0 == joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION")) || iParam0 == joaat("SERVICE_EARN_TUNER_ROBBERY_PREP")) || iParam0 == joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE")) || iParam0 == joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP")) || iParam0 == joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE")) || iParam0 == joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS")) || iParam0 == joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY")) || iParam0 == joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY")) || iParam0 == joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK")) || iParam0 == joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN")) || iParam0 == joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS")) || iParam0 == joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID")) || iParam0 == joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB")) || iParam0 == joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID")) || iParam0 == joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD")) || iParam0 == joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT")) || iParam0 == joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT")) || iParam0 == joaat("SERVICE_EARN_AGENCY_STORY_PREP")) || iParam0 == joaat("SERVICE_EARN_AGENCY_STORY_FINALE")) || iParam0 == joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON")) || iParam0 == joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT")) || iParam0 == joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY")) || iParam0 == joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP")) || iParam0 == joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY")) || iParam0 == joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP")) || iParam0 == joaat("SERVICE_EARN_FROM_CONTRABAND")) || iParam0 == joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER")) || iParam0 == joaat("SERVICE_EARN_SIGHTSEEING_REWARD")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH")) || iParam0 == joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS")) || iParam0 == joaat("SERVICE_EARN_TAXI_JOB")) || iParam0 == joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION")) || iParam0 == joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK")) || iParam0 == joaat("SERVICE_EARN_JUGGALO_STORY_MISSION")) || iParam0 == joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION")) || iParam0 == joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION")) || iParam0 == joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION")) || iParam0 == joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY")) || iParam0 == joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB")) || iParam0 == joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH")) || iParam0 == joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP")) || iParam0 == joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT")) || iParam0 == joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI")) || iParam0 == joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION")) || iParam0 == joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION")) || iParam0 == joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION")) || iParam0 == joaat("SERVICE_EARN_SMUGGLER_OPS")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL")) || iParam0 == joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE")) || iParam0 == joaat("SERVICE_EARN_AVENGER_OPERATIONS")) || iParam0 == joaat("SERVICE_EARN_AVENGER_OPS_BONUS")) || iParam0 == joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"))
	{
		return 1;
	}
	return 0;
}

int func_24()//Position - 0x1714
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_31();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_11()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_30(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4536678 = 1;
			}
			return 0;
		}
		if (Global_2695872)
		{
			if (Global_4535172[iVar2 /*85*/].f_66.f_6 == joaat("CATEGORY_WEAPON_AMMO") || Global_4535172[iVar2 /*85*/].f_66.f_6 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_29(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4535172[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4535172[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4535172[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4535172[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4535172[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4535172[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x1874
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
	iVar36 = func_27(Var0.f_1);
	if ((Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24259 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24260 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_26();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_26()//Position - 0x1906
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_27(int iParam0)//Position - 0x1915
{
	var uVar0;
	
	if (func_28(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_28(var uParam0)//Position - 0x1930
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

int func_29(int iParam0)//Position - 0x1952
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_30(int iParam0, int iParam1, int iParam2)//Position - 0x1979
{
	if (iParam0 == joaat("CATEGORY_SERVICE") || iParam0 == joaat("CATEGORY_SERVICE_WITH_THRESHOLD"))
	{
		switch (iParam1)
		{
			case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case joaat("SERVICE_EARN_PICKUP"):
			case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
			case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
			case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
			case joaat("SERVICE_EARN_CASHING_OUT"):
			case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case joaat("SERVICE_EARN_DEBUG"):
				return 0;
				break;
			
			case joaat("SERVICE_EARN_INITIAL_CASH"):
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
			case joaat("SERVICE_EARN_REFUNDAMMODROP"):
			case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
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
			case joaat("SERVICE_EARN_NIGHTCLUB_DANCING_AWARD"):
			case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
			case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
			case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
			case joaat("SERVICE_EARN_ARENA_WAR"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
			case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
			case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
			case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
			case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
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
			case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
			case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
				return 1;
				break;
			
			case joaat("SERVICE_SPEND_AIRSTRIKE"):
			case joaat("SERVICE_SPEND_AMMO_DROP"):
			case joaat("SERVICE_SPEND_BACKUP_GANG"):
			case joaat("SERVICE_SPEND_BACKUP_HELI"):
			case joaat("SERVICE_SPEND_BOAT_PICKUP"):
			case joaat("SERVICE_SPEND_BOUNTY"):
			case joaat("SERVICE_SPEND_BULL_SHARK"):
			case joaat("SERVICE_SPEND_CAR_IMPOUND"):
			case joaat("SERVICE_SPEND_CASH_SHARED"):
			case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
			case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
			case joaat("SERVICE_SPEND_HELI_PICKUP"):
			case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
			case joaat("SERVICE_SPEND_HIRE_MUGGER"):
			case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
			case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
			case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
			case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
			case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
				return 2;
				break;
		}
		switch (iParam1)
		{
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
			case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
			case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
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
				if (iParam2 == 0)
				{
					return 0;
				}
				return 1;
				break;
			
			case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
			case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
				return 2;
				break;
		}
		return 0;
	}
	else if ((iParam0 == joaat("CATEGORY_SERVICE_WITH_LIMIT") || iParam0 == joaat("CATEGORY_PRICE_MODIFIER")) || iParam0 == joaat("CATEGORY_PRICE_OVERRIDE"))
	{
		return 0;
	}
	return 1;
}

int func_31()//Position - 0x1FC8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_29(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_32(int iParam0)//Position - 0x2003
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_33(int iParam0, bool bParam1)//Position - 0x2030
{
	bool bVar0;
	bool bVar1;
	var uVar2;
	struct<10> Var6;
	int iVar16;
	struct<3> Var17;
	var uVar20;
	
	if (iParam0 == -1)
	{
		return;
	}
	NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_29(iParam0));
	if (Global_4535172[iParam0 /*85*/].f_66.f_10 == 1)
	{
	}
	else if (Global_4535172[iParam0 /*85*/].f_66.f_10 == 4)
	{
		bVar0 = true;
	}
	else if (Global_4535172[iParam0 /*85*/].f_66.f_10 == 2)
	{
		bVar1 = true;
	}
	Var6 = -1;
	Var6.f_1 = -1;
	Var6.f_2 = -1;
	Var6.f_3 = -1;
	Var6.f_4 = -1;
	Var6.f_5 = -1;
	Var6.f_6 = -1;
	Var6.f_7 = -1;
	Var6.f_8 = -1;
	Var6.f_9 = -1;
	func_37(&Var6);
	switch (Global_4535172[iParam0 /*85*/].f_66.f_4)
	{
		case joaat("SERVICE_SPEND_MOVE_YACHT"):
			MONEY::NETWORK_SPENT_MOVE_YACHT(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
			if (func_36(Global_4535172[iParam0 /*85*/].f_14))
			{
				MONEY::NETWORK_SPENT_BUY_WANTEDLEVEL(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), bVar1, bVar0, 0);
			}
			break;
		
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
			MONEY::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], &(Global_4535172[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_CINEMA"):
			MONEY::NETWORK_SPENT_CINEMA(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
			MONEY::NETWORK_SPENT_IN_STRIPCLUB(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, Global_4535172[iParam0 /*85*/].f_2, bVar0);
			break;
		
		case joaat("SERVICE_EARN_JOB_BONUS"):
			MONEY::NETWORK_EARN_FROM_JOB_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("SERVICE_SPEND_TELESCOPE"):
			MONEY::NETWORK_SPENT_TELESCOPE(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
			MONEY::NETWORK_SPENT_CALL_PLAYER(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_CARWASH"):
			MONEY::NETWORK_SPENT_CARWASH(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_EARN_CRATE_DROP"):
			MONEY::NETWORK_EARN_FROM_CRATE_DROP(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_HEALTHCARE"):
			MONEY::NETWORK_BUY_HEALTHCARE(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_EARN_BETTING"):
			MONEY::NETWORK_EARN_FROM_BETTING(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("SERVICE_SPEND_CASH_DROP"):
			MONEY::NETWORK_SPENT_CASH_DROP(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
			MONEY::NETWORK_SPENT_ARREST_BAIL(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
			MONEY::NETWORK_EARN_FROM_DAILY_OBJECTIVES(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), -1);
			break;
		
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
			MONEY::NETWORK_SPENT_BOUNTY(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_WAGER"):
			MONEY::NETWORK_SPENT_WAGER(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_PAY_BOSS"):
			MONEY::NETWORK_SPEND_BOSS(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_PAY_GOON"):
			MONEY::NETWORK_SPEND_GOON(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
			MONEY::NETWORK_SPENT_RENAME_ORGANIZATION(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("SERVICE_SPEND_RENAME_ACID_PRODUCT"):
			MONEY::_NETWORK_SPEND_RENAME_ACID_PRODUCT(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, func_35(&(Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_267)));
			break;
		
		case joaat("SERVICE_SPEND_RENAME_ACID_LAB"):
			MONEY::_NETWORK_SPEND_RENAME_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, func_35(&(Global_1914706[PLAYER::PLAYER_ID() /*299*/].f_283)));
			break;
		
		case joaat("SERVICE_EARN_JOBS"):
			MONEY::NETWORK_EARN_FROM_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
			MONEY::NETWORK_EARN_FROM_PREMIUM_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
			MONEY::NETWORK_BUY_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 14, 1, bVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0, 0, 0, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_PASSIVE"):
			MONEY::NETWORK_SPENT_BUY_PASSIVE_MODE(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0);
			break;
		
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
			MONEY::NETWORK_EARN_FROM_BOUNTY(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14), &(Global_4535172[iParam0 /*85*/].f_14.f_13), 1);
			break;
		
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
			MONEY::NETWORK_EARN_FROM_GANGATTACK_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
			MONEY::NETWORK_EARN_FROM_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
			MONEY::NETWORK_EARN_FROM_ROB_ARMORED_CARS(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_HOLDUPS"):
			MONEY::NETWORK_EARN_FROM_HOLDUPS(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
			MONEY::NETWORK_PAY_EMPLOYEE_WAGE(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
			MONEY::NETWORK_SPEND_APARTMENT_UTILITIES(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, &Global_4540949);
			break;
		
		case joaat("SERVICE_SPEND_PA_SERVICE_DANCER"):
			MONEY::NETWORK_SPENT_PA_SERVICE_DANCER(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
			MONEY::NETWORK_SPENT_PA_HELI_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
			MONEY::NETWORK_SPENT_MC_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, bVar1, bVar0);
			break;
		
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
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
			MONEY::NETWORK_REFUND_CASH(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), &(Global_4535172[iParam0 /*85*/].f_14.f_44), bVar1);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case joaat("SERVICE_SPEND_FAIRGROUND"):
			MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, bVar1, bVar0, 0);
			break;
		
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
			MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(Global_4535172[iParam0 /*85*/].f_66.f_1, false, false, 0);
			break;
		
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
			MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_3);
			break;
		
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
			MONEY::NETWORK_EARN_FROM_AI_TARGET_KILL(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
			MONEY::NETWORK_SPENT_REQUEST_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_SPEND_TAXI"):
			if (Global_4535172[iParam0 /*85*/].f_66.f_16 == 1)
			{
				iVar16 = 1;
			}
			MONEY::NETWORK_SPENT_TAXI(Global_4535172[iParam0 /*85*/].f_66.f_1, bVar1, bVar0, 0, iVar16);
			break;
		
		case joaat("SERVICE_EARN_BEND_JOB"):
			MONEY::NETWORK_EARN_FROM_BEND_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
			MONEY::NETWORK_EARN_FROM_CHALLENGE_WIN(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_34), Global_4535172[iParam0 /*85*/].f_4);
			break;
		
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
			MONEY::NETWORK_EARN_FROM_NOT_BADSPORT(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
			MONEY::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4535172[iParam0 /*85*/].f_66.f_1, "RaceToPoint", false, false);
			break;
		
		case joaat("SERVICE_SPEND_PROSTITUTES"):
			MONEY::NETWORK_SPENT_PROSTITUTES(Global_4535172[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
			MONEY::NETWORK_BUY_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
			break;
		
		case joaat("SERVICE_INVALID"):
			switch (Global_4535172[iParam0 /*85*/].f_66.f_6)
			{
				case joaat("CATEGORY_WEAPON_AMMO"):
					MONEY::NETWORK_BUY_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_5, 1, bVar1, &(Global_4535172[iParam0 /*85*/].f_14.f_40), 0, 0, 0, bVar0);
					break;
			}
			break;
		
		case joaat("SERVICE_SPEND_BETTING"):
			MONEY::NETWORK_SPENT_BETTING(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, &(Global_4535172[iParam0 /*85*/].f_14.f_34), false, false);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_BOSS"):
			MONEY::NETWORK_EARN_BOSS(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_GOON"):
			MONEY::NETWORK_EARN_GOON(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
			MONEY::NETWORK_EARN_AGENCY(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
			break;
		
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
			MONEY::NETWORK_EARN_FROM_CONTRABAND(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
			MONEY::NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Global_4535172[iParam0 /*85*/].f_66.f_1, -1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
			MONEY::NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
			MONEY::NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 1);
			break;
		
		case joaat("SERVICE_SPEND_JUKEBOX"):
			MONEY::NETWORK_SPENT_JUKEBOX(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], 0, 0);
			break;
		
		case joaat("SERVICE_SPEND_BUSINESS"):
			MONEY::NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
			MONEY::NETWORK_EARN_FROM_VEHICLE_EXPORT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
			break;
		
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
			MONEY::NETWORK_SPENT_VEHICLE_EXPORT_MODS(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12);
			break;
		
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
			MONEY::NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
			MONEY::NETWORK_EARN_SMUGGLER_AGENCY(Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_8);
			break;
		
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
			MONEY::NETWORK_EARN_WAGE_PAYMENT_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
			MONEY::NETWORK_EARN_WAGE_PAYMENT(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_CASHING_OUT"):
			MONEY::NETWORK_EARN_FROM_CASHING_OUT(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
			MONEY::NETWORK_EARN_FROM_CRIMINAL_MASTERMIND(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
			MONEY::NETWORK_EARN_HEIST_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
			MONEY::NETWORK_EARN_FIRST_TIME_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_34));
			break;
		
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
			MONEY::NETWORK_SPENT_EMPLOY_ASSASSINS(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
			MONEY::NETWORK_EARN_TARGET_REFUND(Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
			MONEY::NETWORK_EARN_TARGET_REFUND(Global_4535172[iParam0 /*85*/].f_66.f_1, 1);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
			MONEY::NETWORK_EARN_GANGOPS_WAGES(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
			MONEY::NETWORK_EARN_GANGOPS_WAGES_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
			MONEY::NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
			MONEY::NETWORK_EARN_GANGOPS_SETUP(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
			MONEY::NETWORK_EARN_GANGOPS_FINALE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26));
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 3);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 4);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 5);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 6);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 7);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 8);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 9);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
			MONEY::NETWORK_EARN_GANGOPS_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 10);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 0);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 1);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
			MONEY::NETWORK_EARN_GANGOPS_ELITE(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), 2);
			break;
		
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
			break;
		
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
			break;
		
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
			MONEY::NETWORK_EARN_DOOMSDAY_FINALE_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
			MONEY::NETWORK_SPEND_GANGOPS_SKIP_MISSION(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
			MONEY::NETWORK_SPEND_GANGOPS_START_STRAND(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
			MONEY::NETWORK_EARN_BOUNTY_HUNTER_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
			if (func_34(PLAYER::INT_TO_PLAYERINDEX(Global_4535172[iParam0 /*85*/]), 0, 0))
			{
				MONEY::NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(PLAYER::INT_TO_PLAYERINDEX(Global_4535172[iParam0 /*85*/]), Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, false, true);
			}
			break;
		
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
			MONEY::NETWORK_SPENT_REHIRE_DJ(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], false, true);
			break;
		
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
			MONEY::NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, false, true);
			break;
		
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
			MONEY::NETWORK_EARN_FROM_BUSINESS_BATTLE(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
			MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
			MONEY::NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
			MONEY::NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9);
			break;
		
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
			MONEY::NETWORK_EARN_FROM_FMBB_BOSS_WORK(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
			MONEY::NETWORK_EARN_FMBB_WAGE_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
			MONEY::NETWORK_SPENT_ARENA_JOIN_SPECTATOR(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, false, true);
			break;
		
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
			MONEY::NETWORK_EARN_BB_EVENT_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
			MONEY::NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
			MONEY::NETWORK_EARN_ARENA_CAREER_PROGRESSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
			MONEY::NETWORK_SPEND_ARENA_SPECTATOR_BOX(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], false, true);
			break;
		
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			MONEY::NETWORK_SPEND_MAKE_IT_RAIN(Global_4535172[iParam0 /*85*/].f_66.f_1, false, false);
			break;
		
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			MONEY::NETWORK_EARN_SPIN_THE_WHEEL_CASH(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
			MONEY::NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, true);
			break;
		
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
			MONEY::NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_ARENA_WAR"):
			MONEY::NETWORK_EARN_ARENA_WAR(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_1);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, "RC_TIME_TRIAL", &uVar2);
			break;
		
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
			MONEY::NETWORK_EARN_DAILY_OBJECTIVE_EVENT(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
			MONEY::NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
			MONEY::NETWORK_EARN_CASINO_MISSION_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
			MONEY::NETWORK_EARN_CASINO_STORY_MISSION_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
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
			MONEY::NETWORK_EARN_CASINO_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
			MONEY::NETWORK_SPEND_CASINO_GENERIC(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
			MONEY::NETWORK_SPEND_PLAY_ARCADE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
			MONEY::NETWORK_SPEND_ARCADE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
			MONEY::NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1);
			break;
		
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 0, 0);
			break;
		
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
			MONEY::NETWORK_SPEND_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_DEBUG"):
			break;
	}
	switch (Global_4535172[iParam0 /*85*/].f_66.f_4)
	{
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0);
			break;
		
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
			MONEY::NETWORK_EARN_CASINO_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
			MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
			MONEY::NETWORK_EARN_CASINO_HEIST_AWARDS(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
			MONEY::NETWORK_EARN_COLLECTABLE_ITEM(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
			MONEY::NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
			Var6.f_0 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
			Var6.f_1 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
			Var6.f_2 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
			Var6.f_3 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
			Var6.f_4 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
			Var6.f_5 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
			Var6.f_6 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
			Var6.f_7 = Global_4535172[iParam0 /*85*/].f_66.f_1;
			MONEY::NETWORK_SPEND_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Var6);
			break;
		
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
			MONEY::NETWORK_SPEND_BEACH_PARTY(Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
			MONEY::NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
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
			MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/], 0, 0);
			break;
		
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
			MONEY::NETWORK_EARN_ISLAND_HEIST(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
			MONEY::NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0);
			break;
		
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, Global_4535172[iParam0 /*85*/].f_66.f_1, 0);
			break;
		
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
			MONEY::NETWORK_SPEND_SUBMARINE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, 0, 0, Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
			MONEY::NETWORK_SPEND_CASINO_CLUB(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, true, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_10, Global_4535172[iParam0 /*85*/].f_11, Global_4535172[iParam0 /*85*/].f_12, Global_4535172[iParam0 /*85*/].f_6, Global_4535172[iParam0 /*85*/].f_7);
			break;
		
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
			MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4535172[iParam0 /*85*/].f_66.f_1, -1, -1, Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
			MONEY::NETWORK_EARN_TUNER_ROBBERY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_1, MISC::GET_HASH_KEY(&(Global_4535172[iParam0 /*85*/].f_14.f_26)), -1, -1);
			break;
		
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
			MONEY::NETWORK_EARN_CARCLUB_MEMBERSHIP(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
			MONEY::NETWORK_EARN_DAILY_VEHICLE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
			MONEY::NETWORK_EARN_DAILY_VEHICLE_BONUS(Global_4535172[iParam0 /*85*/].f_66.f_1);
			break;
		
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
			MONEY::NETWORK_EARN_TUNER_AWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &(Global_4535172[iParam0 /*85*/].f_14.f_44));
			break;
		
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
			MONEY::NETWORK_SPEND_INTERACTION_MENU_ABILITY(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
			MONEY::NETWORK_EARN_AUTOSHOP_INCOME(Global_4535172[iParam0 /*85*/].f_66.f_1, 277);
			break;
		
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
			MONEY::NETWORK_SPEND_BUSINESS_PROPERTY_FEES(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, &Global_4540931);
			break;
		
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
			MONEY::NETWORK_EARN_AGENCY_CONTRACT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
			MONEY::NETWORK_EARN_AGENCY_PHONE(Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
			MONEY::NETWORK_EARN_FIXER_PREP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
			MONEY::NETWORK_EARN_FIXER_FINALE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
			MONEY::NETWORK_EARN_AWARD_CONTRACT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
			MONEY::NETWORK_EARN_AWARD_PHONE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
			MONEY::NETWORK_EARN_AWARD_FIXER_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
			MONEY::NETWORK_EARN_AWARD_SHORT_TRIP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
			MONEY::NETWORK_EARN_FIXER_RIVAL_DELIVERY(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_SPEND_REQUEST_SUPPLY"):
			MONEY::NETWORK_SPEND_SUPPLY(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_SPEND_REQUEST_SOURCE_MOTORCYCLE"):
			MONEY::NETWORK_SPEND_SOURCE_BIKE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_SPEND_REQUEST_OUT_OF_SIGHT"):
			MONEY::NETWORK_SPEND_HIDDEN(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
			MONEY::NETWORK_EARN_FIXER_AGENCY_SHORT_TRIP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
			MONEY::NETWORK_SPEND_AGENCY(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/].f_66.f_16, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
			MONEY::NETWORK_SPEND_COMP_SUV(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
			MONEY::NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, 1989714117);
			break;
		
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
			MONEY::NETWORK_SPEND_GUNRUNNING(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
			MONEY::NETWORK_EARN_SIGHTSEEING_REWARD(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_SPEND_TONY_LIMO"):
			MONEY::NETWORK_SPEND_VEHICLE_REQUESTED(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
			MONEY::NETWORK_SPENT_HELI_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1, false, true, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
			MONEY::NETWORK_SPENT_BOAT_PICKUP(Global_4535172[iParam0 /*85*/].f_66.f_1, false, true, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GANG_CONVOY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SHOP_ROBBERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_XMAS_MUGGER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_MAZE_BANK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_ARMORED_TRUCK"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BICYCLE_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DRUG_VEHICLE"):
			MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &(Global_4535172[iParam0 /*85*/].f_14.f_26), &uVar2);
			break;
		
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
			MONEY::NETWORK_YOHAN_SOURCE_GOODS(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/].f_1, Global_4535172[iParam0 /*85*/].f_9, Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_SPEND_NIGHTCLUB_TOILET_ATTENDANT"):
			MONEY::NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 0, 0);
			break;
		
		case joaat("SERVICE_SPEND_JUGALLO_BOSS_VEHICLE_REQUEST"):
			MONEY::NETWORK_SPEND_VEHICLE_REQUESTED(Global_4535172[iParam0 /*85*/].f_66.f_1, 0, 1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_EARN_TAXI_JOB"):
			Var17.f_0 = Global_4535172[iParam0 /*85*/].f_13;
			Var17.f_1 = Global_4535172[iParam0 /*85*/];
			Var17.f_2 = Global_4535172[iParam0 /*85*/].f_66.f_15;
			MONEY::_NETWORK_EARN_TAXI_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, &Var17);
			break;
		
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_PARTICIPATION"):
			MONEY::_NETWORK_EARN_DAILY_STASH_HOUSE_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_DAILY_STASH_HOUSE_COMPLETED"):
			MONEY::_NETWORK_EARN_DAILY_STASH_HOUSE_COMPLETED(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION"):
			MONEY::_NETWORK_EARN_JUGGALO_STORY_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_JUGGALO_STORY_MISSION_PARTICIPATION"):
			MONEY::_NETWORK_EARN_JUGGALO_STORY_MISSION_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION"):
			MONEY::_NETWORK_EARN_FOOLIGAN_JOB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_JUGGALO_PHONE_MISSION_PARTICIPATION"):
			MONEY::_NETWORK_EARN_FOOLIGAN_JOB_PARTICIPATION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_WINTER_22_AWARD_JUGGALO_STORY"):
			MONEY::_NETWORK_EARN_AWARD_JUGGALO_MISSION(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_WINTER_22_AWARD_ACID_LAB"):
			MONEY::_NETWORK_EARN_AWARD_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DAILY_STASH"):
			MONEY::_NETWORK_EARN_AWARD_DAILY_STASH(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_WINTER_22_AWARD_DEAD_DROP"):
			MONEY::_NETWORK_EARN_AWARD_DEAD_DROP(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_WINTER_22_AWARD_RANDOM_EVENT"):
			MONEY::_NETWORK_EARN_AWARD_RANDOM_EVENT(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_WINTER_22_AWARD_TAXI"):
			MONEY::_NETWORK_EARN_AWARD_TAXI(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_ACID_LAB_SETUP_PARTICIPATION"):
			MONEY::_NETWORK_EARN_SETUP_PARTICIPATION_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_ACID_LAB_SOURCE_PARTICIPATION"):
			MONEY::_NETWORK_EARN_SOURCE_PARTICIPATION_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_ACID_LAB_SELL_PARTICIPATION"):
			MONEY::_NETWORK_EARN_SELL_PARTICIPATION_ACID_LAB(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_SMUGGLER_OPS"):
			MONEY::_NETWORK_EARN_SMUGGLER_OPS(Global_4535172[iParam0 /*85*/].f_66.f_15, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_16);
			break;
		
		case joaat("SERVICE_EARN_CAYO_ATTRITION_BONUS_OBJECTIVE"):
			MONEY::_NETWORK_EARN_BONUS_OBJECTIVE(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/], Global_4535172[iParam0 /*85*/].f_66.f_15);
			break;
		
		case joaat("SERVICE_EARN_AVENGER_OPERATIONS"):
			MONEY::_NETWORK_EARN_AVENGER(Global_4535172[iParam0 /*85*/].f_66.f_1, Global_4535172[iParam0 /*85*/]);
			break;
		
		case joaat("SERVICE_EARN_AVENGER_OPS_BONUS"):
			MONEY::_NETWORK_EARN_AVENGER(Global_4535172[iParam0 /*85*/].f_66.f_1, -2);
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Global_4535172[iParam0 /*85*/].f_66, &uVar20);
		}
	}
	func_7(iParam0);
}

int func_34(int iParam0, bool bParam1, bool bParam2)//Position - 0x454D
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

var func_35(var uParam0)//Position - 0x45AD
{
	return uParam0;
}

bool func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x45B7
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_37(var uParam0)//Position - 0x45C7
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = -1;
}

int func_38(int iParam0, var uParam1)//Position - 0x4600
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66 == iParam0)
		{
			*uParam1 = { Global_4535172[iVar0 /*85*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_39(int iParam0)//Position - 0x4643
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4540738[iParam0 /*12*/].f_1 == Global_4540738[iParam0 /*12*/].f_6)
	{
		if (Global_4540738[iParam0 /*12*/].f_1 != joaat("NET_SHOP_ACTION_EARN") && Global_4540738[iParam0 /*12*/].f_1 != joaat("NET_SHOP_ACTION_SELL_VEHICLE"))
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = MISC::GET_HASH_KEY(sVar2);
	iVar0 = (iVar0 || func_41());
	iVar0 = (iVar0 + Global_4538687);
	func_40(&uVar1);
	iVar0 = (iVar0 || uVar1);
	MISC::CLEAR_BIT(&iVar0, 28);
	MISC::CLEAR_BIT(&iVar0, 29);
	MISC::CLEAR_BIT(&iVar0, 26);
	iVar3 = (Global_4540738[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4540738[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4540738[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = joaat("SERVICE_INVALID");
	}
	if (((Global_4540738[iParam0 /*12*/] != Global_4540738[iParam0 /*12*/].f_5 || Global_4540738[iParam0 /*12*/].f_1 != Global_4540738[iParam0 /*12*/].f_6) || Global_4540738[iParam0 /*12*/].f_2 != iVar5) || Global_4540738[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_110511 = 1;
	}
}

int func_40(var uParam0)//Position - 0x476F
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

int func_41()//Position - 0x4784
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_42()//Position - 0x4793
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_49())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_48())
	{
		return 1;
	}
	if (func_47(159))
	{
		if (!func_46())
		{
			return 1;
		}
	}
	if (func_47(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_43() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_43()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_43()//Position - 0x4817
{
	switch (func_45())
	{
		case 0:
			return func_44();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_44()//Position - 0x484A
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_45()//Position - 0x486E
{
	return Global_32283;
}

bool func_46()//Position - 0x4879
{
	return Global_2683883.f_698;
}

int func_47(int iParam0)//Position - 0x4888
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_48()//Position - 0x489F
{
	return Global_2694576;
}

bool func_49()//Position - 0x48AB
{
	return Global_2683883.f_693;
}

void func_50()//Position - 0x48BA
{
	SYSTEM::WAIT(0);
}

void func_51()//Position - 0x48C7
{
	func_52();
}

void func_52()//Position - 0x48D3
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_53(struct<34> Param0)//Position - 0x48DF
{
	if (Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */)
	{
		func_51();
	}
	Local_20.f_66 = { Param0 };
	Local_20 = { Param0.f_19 };
	Local_20.f_14 = { Global_4535172[Param0.f_33 /*85*/].f_14 };
	iLocal_19 = Param0.f_33;
	if (Param0.f_33 < 0)
	{
		func_51();
	}
	if (!func_54(Param0, Param0.f_33))
	{
		func_7(Param0.f_33);
		func_51();
	}
	if (Local_20.f_66.f_2 != 0)
	{
		Local_20.f_66.f_2 = 1;
	}
}

int func_54(struct<18> Param0, var uParam18, int iParam19)//Position - 0x4963
{
	if (Global_4535172[iParam19 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4535172[iParam19 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

