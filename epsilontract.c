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
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	int* iLocal_43 = NULL;
	bool bLocal_44 = 0;
	bool bLocal_45 = 0;
	var uLocal_46 = 0;
	struct<11> Local_47[10];
	char* sLocal_158[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
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
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_35 = 1;
	iLocal_36 = 1;
	iLocal_38 = joaat("prop_time_capsule_01");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(210))
	{
		func_48();
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("epsilontract")) > 1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_47(9);
	while (true)
	{
		SYSTEM::WAIT(0);
		switch (iLocal_37)
		{
			case 0:
				func_46();
				break;
			
			case 1:
				func_1();
				break;
			
			case 2:
				func_48();
				break;
		}
	}
}

void func_1()//Position - 0xCE
{
	int iVar0;
	int iVar1;
	
	if ((func_45(PLAYER::PLAYER_PED_ID()) && !func_44(14)) && !CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_39 < 10)
		{
			if (iLocal_39 == 0)
			{
				if (!func_43(36) && (MISC::GET_GAME_TIMER() - iLocal_40) > iLocal_41)
				{
					func_42(0, 60, sLocal_158[0], 1, 0, 0, 0, 0, 1);
					func_41(36);
					iLocal_40 = -1;
				}
			}
			else if (iLocal_39 < 10)
			{
				if (!iLocal_40 == -1)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_40) > 15000)
					{
						func_42(0, 60, sLocal_158[iLocal_39], 1, 0, 0, 0, 0, 1);
						iLocal_40 = -1;
					}
				}
			}
			if (Local_47[iLocal_39 /*11*/].f_10)
			{
				if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(Local_47[iLocal_39 /*11*/].f_1) || func_40(Local_47[iLocal_39 /*11*/].f_1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					func_39(&(Local_47[iLocal_39 /*11*/].f_1));
					Local_47[iLocal_39 /*11*/].f_10 = 0;
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 250);
					iVar0 = (805 + iLocal_39);
					func_38(iVar0, 1, -1);
					STATS::STAT_INCREMENT(joaat("NUM_HIDDEN_PACKAGES_2"), 1f);
					bLocal_44 = true;
					if (iLocal_39 < 10)
					{
						iLocal_39++;
						iLocal_40 = MISC::GET_GAME_TIMER();
						func_37(1, 0);
						func_35();
					}
				}
				else if (OBJECT::DOES_PICKUP_EXIST(Local_47[iLocal_39 /*11*/].f_1))
				{
					func_33(Local_47[iLocal_39 /*11*/].f_3);
					func_32(&(Local_47[iLocal_39 /*11*/].f_1), &(Local_47[iLocal_39 /*11*/].f_10));
				}
			}
			else
			{
				while (func_31(4, iVar1) && iVar1 < 10)
				{
					iVar1++;
				}
				if (iVar1 == iLocal_39)
				{
					func_29(&(Local_47[iLocal_39 /*11*/]), iLocal_38, joaat("PICKUP_CUSTOM_SCRIPT"), 0, 0, 2);
				}
			}
		}
		else if (!bLocal_45 && !bLocal_44)
		{
			func_11();
		}
		func_2(&bLocal_44, &bLocal_45, &uLocal_46, 4, &uLocal_42, &iLocal_43, "TRACT_TITLE" /* GXT: Tract Collected~s~ */, "TRACT_COLLECT" /* GXT: ~1~/10 Epsilon tracts collected. */);
	}
}

void func_2(bool bParam0, bool bParam1, var uParam2, int iParam3, var uParam4, int* iParam5, char* sParam6, char* sParam7)//Position - 0x29E
{
	int iVar0;
	
	func_10(0);
	if (*bParam0)
	{
		switch (*uParam4)
		{
			case 0:
				*iParam5 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					iVar0 = AUDIO::GET_SOUND_ID();
					if (iParam3 == 6)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", true);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iVar0, "COLLECTED", "HUD_AWARDS", true);
					}
					*uParam4++;
				}
				break;
			
			case 1:
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam6);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
				HUD::ADD_TEXT_COMPONENT_INTEGER(func_4(iParam3));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*uParam2 = MISC::GET_GAME_TIMER();
				*uParam4++;
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7000)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam5, "SHARD_ANIM_OUT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					*uParam4++;
				}
				else if (!func_3())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						func_10(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - *uParam2) > 7500)
				{
					*uParam4++;
				}
				else if (!func_3())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
					{
						func_10(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam5))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam5);
				}
				func_10(0);
				*bParam1 = 0;
				*bParam0 = 0;
				*uParam4 = 0;
				break;
			}
	}
}

int func_3()//Position - 0x421
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

int func_4(int iParam0)//Position - 0x44B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_9(iParam0))
		{
			if (BitTest(Global_113810.f_10052.f_108, func_8(func_9(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		STATS::STAT_GET_INT(joaat("NUM_HIDDEN_PACKAGES_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_9(iParam0))
		{
			iVar2 = (func_7(iParam0) + iVar1);
			if (func_5(iVar2, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_5(int iParam0, int iParam1)//Position - 0x50F
{
	if (iParam1 == -1)
	{
		iParam1 = func_6();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_6()//Position - 0x52B
{
	return Global_1574918;
}

int func_7(int iParam0)//Position - 0x537
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_8(int iParam0, int iParam1)//Position - 0x57E
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_9(int iParam0)//Position - 0x59A
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_10(int iParam0)//Position - 0x5EA
{
	if (Global_78957 != iParam0)
	{
		Global_78957 = iParam0;
	}
}

void func_11()//Position - 0x604
{
	func_28(95, 1);
	func_13(27, 84, 0);
	func_12(9);
	iLocal_37 = 2;
}

int func_12(int iParam0)//Position - 0x626
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

int func_13(int iParam0, int iParam1, bool bParam2)//Position - 0x67D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_26(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_53888[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_53888[iVar0 /*203*/].f_2 = iParam0;
	Global_53888[iVar0 /*203*/].f_10[Global_53888[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_53888[iVar0 /*203*/].f_10[Global_53888[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_53888[iVar0 /*203*/].f_10[Global_53888[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_53888[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53888[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53888[iVar0 /*203*/].f_4[iVar1] == Global_44588[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53888[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53888[iVar0 /*203*/].f_4[Global_53888[iVar0 /*203*/].f_3] = Global_44588[iParam1 /*12*/].f_3;
			Global_53888[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_53888[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_53888[iVar0 /*203*/].f_4[iVar1] == Global_44588[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_53888[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_53888[iVar0 /*203*/].f_4[Global_53888[iVar0 /*203*/].f_3] = Global_44588[iParam1 /*12*/].f_2;
			Global_53888[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_53888[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_53888[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_14(Global_53888[iVar0 /*203*/].f_4[iVar1], Global_53888[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_14(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x879
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_47913[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_47913[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_25(Global_44588[iVar20 /*12*/].f_1) };
		if (Global_44588[iVar20 /*12*/].f_2 == iParam0 && !Global_44588[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_44588[iVar20 /*12*/].f_2;
		iVar0 = Global_53526[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_53526[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44580 = (Global_44580 - 1);
						if (Global_44580 < 0)
						{
							Global_44580 = 0;
						}
						break;
					
					case 1:
						Global_44581 = (Global_44581 - 1);
						if (Global_44581 < 0)
						{
							Global_44581 = 0;
						}
						break;
					
					case 2:
						Global_44582 = (Global_44582 - 1);
						if (Global_44582 < 0)
						{
							Global_44582 = 0;
						}
						break;
					}
				}
		}
		Global_53526[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_53526[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_53526[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53526[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_53526[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53526[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_53526[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_53526[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_44580 = (Global_44580 - 1);
						if (Global_44580 < 0)
						{
							Global_44580 = 0;
						}
						break;
					
					case 1:
						Global_44581 = (Global_44581 - 1);
						if (Global_44581 < 0)
						{
							Global_44581 = 0;
						}
						break;
					
					case 2:
						Global_44582 = (Global_44582 - 1);
						if (Global_44582 < 0)
						{
							Global_44582 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_53888[iVar24 /*203*/].f_1 == iParam1 && Global_53888[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_53526[iParam0 /*120*/].f_18[iVar0] = Global_53888[iVar23 /*203*/].f_1;
		Global_53526[iParam0 /*120*/].f_1[iVar0] = (Global_53888[iVar23 /*203*/].f_9 - 1);
		Global_53526[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_53526[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_53526[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_53526[iParam0 /*120*/]++;
		iVar25 = Global_53526[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_53888[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_44588[iVar26 /*12*/].f_2;
		if (Global_53888[iVar23 /*203*/].f_10[(Global_53888[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_53888[iVar23 /*203*/].f_10[(Global_53888[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_25(Global_44588[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_53526[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_15(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_15(1, iVar1, iVar2, "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_15(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_15(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

void func_15(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0xC4C
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_19();
	bVar1 = false;
	StringCopy(&cVar2, func_18(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */);
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_16(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_17(iParam1)), 0));
		}
		else
		{
			func_16(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_17(iParam1)), 0));
		}
		switch (Global_20500)
		{
			case 0:
				StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
				Global_44580++;
				if (Global_44580 > 16)
				{
					Global_44580 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
				Global_44582++;
				if (Global_44582 > 16)
				{
					Global_44582 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
				Global_44581++;
				if (Global_44581 > 16)
				{
					Global_44581 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20489, true);
	}
}

void func_16(int iParam0)//Position - 0xE2C
{
	Global_44583[Global_44587] = iParam0;
	Global_22903 = 1;
	Global_22902 = iParam0;
	Global_44587++;
	if (Global_44587 == 3)
	{
		Global_44587 = 0;
	}
}

char* func_17(int iParam0)//Position - 0xE5A
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /* GXT: Mike */;
		
		case 3:
			return "EMSTR_3" /* GXT: Jimmy */;
		
		case 1:
			return "EMSTR_6" /* GXT: Franklin */;
		
		case 2:
			return "EMSTR_9" /* GXT: Trevor */;
		
		case 4:
			return "EMSTR_12" /* GXT: Marnie */;
		
		case 5:
			return "EMSTR_29" /* GXT: Epsilon Store */;
		
		case 6:
			return "EMSTR_36" /* GXT: Maude */;
		
		case 7:
			return "EMSTR_39" /* GXT: Lester */;
		
		case 8:
			return "EMSTR_52" /* GXT: Maze Bank */;
		
		case 9:
			return "EMSTR_55" /* GXT: Fleeca */;
		
		case 10:
			return "EMSTR_58" /* GXT: Bank of Liberty */;
		
		case 11:
			return "EMSTR_78" /* GXT: Legendary Motorsport Sales */;
		
		case 12:
			return "EMSTR_81" /* GXT: Elitas Sales */;
		
		case 13:
			return "EMSTR_84" /* GXT: Cache & Carry */;
		
		case 14:
			return "EMSTR_87" /* GXT: Dock Tease */;
		
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
		
		case 16:
			return "EMSTR_114" /* GXT: AMMU-NATION */;
		
		case 17:
			return "EMSTR_142" /* GXT: Christian Feltz */;
		
		case 18:
			return "EMSTR_145" /* GXT: Paige Harris */;
		
		case 19:
			return "EMSTR_152" /* GXT: Los Santos Tourist Info */;
		
		case 20:
			return "EMSTR_157" /* GXT: Rickie Luckens */;
		
		case 21:
			return "EMSTR_163" /* GXT: Minotaur Property Management */;
		
		case 22:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 23:
			return "EMSTR_187" /* GXT: Vanilla Unicorn */;
		
		case 24:
			return "EMSTR_190" /* GXT: Dr Isiah Friedlander */;
		
		case 25:
			return "EMSTR_206" /* GXT: TRACEYHEARTSTEALER */;
		
		case 26:
			return "EMSTR_219" /* GXT: Dave Norton */;
		
		case 27:
			return "EMSTR_226" /* GXT: Amanda De Santa */;
		
		case 28:
			return "EMSTR_233" /* GXT: Donald Percival */;
		
		case 29:
			return "EMSTR_242" /* GXT: Ron */;
		
		case 30:
			return "EMSTR_249" /* GXT: Tanisha Marks */;
		
		case 31:
			return "EMSTR_262" /* GXT: Denise */;
		
		case 32:
			return "EMSTR_269" /* GXT: Lamar Davis */;
		
		case 33:
			return "EMSTR_319" /* GXT: Brad */;
		
		case 34:
			return "EMSTR_340" /* GXT: Patricia Madrazo */;
		
		case 35:
			return "EMSTR_348" /* GXT: Eileen Haworth */;
		
		case 36:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 37:
			return "EMSTR_357" /* GXT: Gray Nicholson */;
		
		case 38:
			return "EMSTR_360" /* GXT: Nigel */;
		
		case 39:
			return "EMSTR_369" /* GXT: Hookies */;
		
		case 40:
			return "EMSTR_376" /* GXT: Towing Impound */;
		
		case 41:
			return "EMSTR_379" /* GXT: Downtown Cab Co, */;
		
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
		
		case 43:
			return "EMSTR_384" /* GXT: Sonar Collections Dock */;
		
		case 44:
			return "EMSTR_387" /* GXT: Los Santos Customs */;
		
		case 45:
			return "EMSTR_390" /* GXT: Cinema Doppler */;
		
		case 46:
			return "EMSTR_393" /* GXT: Ten Cent Theater */;
		
		case 47:
			return "EMSTR_396" /* GXT: Tivoli Cinema */;
		
		case 48:
			return "EMSTR_399" /* GXT: Los Santos Golf Club */;
		
		case 49:
			return "EMSTR_402" /* GXT: Car Scrap Yard */;
		
		case 50:
			return "EMSTR_405" /* GXT: Smoke on the Water */;
		
		case 51:
			return "EMSTR_408" /* GXT: Tequi-la-la */;
		
		case 52:
			return "EMSTR_411" /* GXT: Pitchers */;
		
		case 53:
			return "EMSTR_414" /* GXT: The Hen House */;
		
		case 54:
			return "EMSTR_465" /* GXT: Pedal & Metal Sales */;
		
		case 55:
			return "EMSTR_468" /* GXT: SSA Super Autos Sales */;
		
		case 56:
			return "EMSTR_489" /* GXT: Hush Smush */;
		
		case 57:
			return "EMSTR_492" /* GXT: foxymama21 */;
		
		case 58:
			return "EMSTR_495" /* GXT: Altarego12 */;
		
		case 59:
			return "EMSTR_498" /* GXT: BadKitty11 */;
		
		case 60:
			return "EMSTR_501" /* GXT: 7yearbitch */;
		
		case 61:
			return "EMSTR_504" /* GXT: Froggy69 */;
		
		case 62:
			return "EMSTR_507" /* GXT: Misscuddles */;
		
		case 63:
			return "EMSTR_640" /* GXT: Off-Road Events */;
		
		case 64:
			return "EMSTR_643" /* GXT: Dock Tease */;
		
		case 65:
			return "EMSTR_652" /* GXT: Brother Adrian */;
		
		default:
	}
	return "NULL";
}

char* func_18(int iParam0, int iParam1)//Position - 0x11C5
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[0 /*29*/].f_7));
		
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[1 /*29*/].f_7));
		
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[2 /*29*/].f_7));
		
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[12 /*29*/].f_7));
		
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[60 /*29*/].f_7));
		
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[62 /*29*/].f_7));
		
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[14 /*29*/].f_7));
		
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[97 /*29*/].f_7));
		
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[99 /*29*/].f_7));
		
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[15 /*29*/].f_7));
		
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[30 /*29*/].f_7));
		
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[17 /*29*/].f_7));
		
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[20 /*29*/].f_7));
		
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[43 /*29*/].f_7));
		
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[44 /*29*/].f_7));
		
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[19 /*29*/].f_7));
		
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[40 /*29*/].f_7));
		
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /* GXT: CHAR_SAEEDA */);
		
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[122 /*29*/].f_7));
		
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[125 /*29*/].f_7));
		
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[113 /*29*/].f_7));
		
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[126 /*29*/].f_7));
		
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[127 /*29*/].f_7));
		
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[124 /*29*/].f_7));
		
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[114 /*29*/].f_7));
		
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[115 /*29*/].f_7));
		
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[116 /*29*/].f_7));
		
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[123 /*29*/].f_7));
		
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[117 /*29*/].f_7));
		
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[118 /*29*/].f_7));
		
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[119 /*29*/].f_7));
		
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[120 /*29*/].f_7));
		
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

var func_19()//Position - 0x1590
{
	func_20();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_20()//Position - 0x15A9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_23(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_22(PLAYER::PLAYER_PED_ID());
			if (func_21(iVar0) && (!func_44(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_21(Global_113810.f_2366.f_539.f_4321))
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

bool func_21(int iParam0)//Position - 0x16A6
{
	return iParam0 < 3;
}

int func_22(int iParam0)//Position - 0x16B2
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)//Position - 0x16EF
{
	if (func_21(iParam0))
	{
		return func_24(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_24(int iParam0)//Position - 0x1714
{
	return Global_2058[iParam0 /*29*/];
}

struct<16> func_25(int iParam0)//Position - 0x1723
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_26(int iParam0, bool bParam1)//Position - 0x1754
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_27(iParam0);
	if (iVar0 > -1)
	{
		if (Global_53888[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53888[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_53888[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_53888[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_53888[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_53888[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_53888[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_53888[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_53526[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_53526[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_53526[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_53526[iVar6 /*120*/].f_18[iVar8] == Global_53888[iVar4 /*203*/].f_1)
							{
								if (Global_53526[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_44580 = (Global_44580 - 1);
											break;
										
										case 1:
											Global_44581 = (Global_44581 - 1);
											break;
										
										case 2:
											Global_44582 = (Global_44582 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_53888[iVar4 /*203*/].f_2 = iParam0;
	Global_53888[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_53888[iVar4 /*203*/] = 1;
	}
	Global_113810.f_21040.f_310++;
	if (Global_113810.f_21040.f_310 == 0)
	{
		Global_113810.f_21040.f_310 = 1;
	}
	Global_53888[iVar4 /*203*/].f_1 = Global_113810.f_21040.f_310;
	Global_53888[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

int func_27(int iParam0)//Position - 0x196C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_53888[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_53888[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_53888[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_28(int iParam0, int iParam1)//Position - 0x19D0
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_113810.f_9088.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_113810.f_9088.f_99.f_58[iParam0] = iParam1;
}

void func_29(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1A15
{
	int iVar0;
	
	if (!uParam0->f_10)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_44(13) && !func_44(14))
			{
				if (!OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_3) <= (50f * 50f))
					{
						STREAMING::REQUEST_MODEL(iParam1);
						while (!STREAMING::HAS_MODEL_LOADED(iParam1))
						{
							STREAMING::REQUEST_MODEL(iParam1);
							SYSTEM::WAIT(0);
						}
						if (bParam3)
						{
							func_30(uParam0->f_3);
						}
						MISC::CLEAR_AREA(uParam0->f_3, 2.5f, false, false, false, false);
						if (bParam4)
						{
							MISC::SET_BIT(&iVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_CUSTOM_SCRIPT"), uParam0->f_3, uParam0->f_6, iVar0, -1, iParam5, true, iParam1);
						}
						else
						{
							MISC::SET_BIT(&iVar0, 3);
							MISC::SET_BIT(&iVar0, 4);
							MISC::SET_BIT(&iVar0, 8);
							MISC::SET_BIT(&iVar0, 1);
							uParam0->f_1 = OBJECT::CREATE_PICKUP(iParam2, uParam0->f_3, iVar0, -1, true, iParam1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
					}
				}
			}
			if (OBJECT::DOES_PICKUP_EXIST(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_30(struct<3> Param0)//Position - 0x1B2E
{
	int iVar0;
	
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
		while (!INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::WAIT(0);
		INTERIOR::UNPIN_INTERIOR(iVar0);
	}
}

bool func_31(int iParam0, int iParam1)//Position - 0x1B6C
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 1)
	{
		iVar1 = 705;
	}
	else if (iParam0 == 0)
	{
		iVar1 = 755;
	}
	else if (iParam0 == 3)
	{
		iVar1 = 815;
	}
	else if (iParam0 == 4)
	{
		iVar1 = 805;
	}
	else if (iParam0 == 5)
	{
		iVar1 = 845;
	}
	iVar0 = (iVar1 + iParam1);
	return func_5(iVar0, -1);
}

void func_32(var uParam0, var uParam1)//Position - 0x1BC5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(*uParam0), true) >= 60f)
		{
			func_39(uParam0);
			*uParam0 = 0;
			*uParam1 = 0;
		}
	}
}

void func_33(struct<3> Param0)//Position - 0x1C05
{
	if (func_34(PLAYER::PLAYER_PED_ID(), Param0, 7f, 1))
	{
		TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, 100, 2048, 1);
	}
}

bool func_34(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x1C30
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5), Param1) <= (fParam4 * fParam4);
}

int func_35()//Position - 0x1C4E
{
	if (func_36(0))
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

int func_36(bool bParam0)//Position - 0x1C99
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_37(int iParam0, int iParam1)//Position - 0x1CC1
{
	Global_100872.f_7 = iParam0;
	Global_100872.f_8 = iParam1;
}

void func_38(int iParam0, bool bParam1, int iParam2)//Position - 0x1CD9
{
	if (iParam2 == -1)
	{
		iParam2 = func_6();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_39(var uParam0)//Position - 0x1CF7
{
	if (OBJECT::DOES_PICKUP_EXIST(*uParam0))
	{
		OBJECT::REMOVE_PICKUP(*uParam0);
	}
}

int func_40(int iParam0)//Position - 0x1D10
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	if (func_45(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_OBJECT(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_41(int iParam0)//Position - 0x1D9C
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

int func_42(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1DDE
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 21;
			break;
		
		case 1:
			iVar0 = 22;
			break;
		
		case 2:
			iVar0 = 23;
			break;
		
		default:
			return 0;
			break;
	}
	StringCopy(&(Global_113810.f_14144[iVar0 /*104*/]), sParam2, 64);
	Global_113810.f_14144[iVar0 /*104*/].f_17 = iParam1;
	if (iParam3 == 0)
	{
		return 0;
	}
	else
	{
		Global_113810.f_14144[iVar0 /*104*/].f_24 = iParam3;
	}
	Global_113810.f_14144[iVar0 /*104*/].f_25 = iParam4;
	Global_113810.f_14144[iVar0 /*104*/].f_26 = iParam5;
	Global_113810.f_14144[iVar0 /*104*/].f_29 = iParam6;
	Global_113810.f_14144[iVar0 /*104*/].f_30 = iParam8;
	Global_113810.f_14144[iVar0 /*104*/].f_31 = iParam7;
	Global_113810.f_14144[iVar0 /*104*/].f_28 = 0;
	return 1;
}

int func_43(int iParam0)//Position - 0x1EAF
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

bool func_44(int iParam0)//Position - 0x1EEF
{
	return Global_43377 == iParam0;
}

int func_45(int iParam0)//Position - 0x1EFD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_46()//Position - 0x1F1E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (Global_113810.f_18577.f_388)
	{
		sLocal_158[0] = "TRACT_HINT1B" /* GXT: Kifflom.  The ingratitude and self-centeredness of your actions is unforgiveable in my eyes but Kraff is not without mercy.  To have a chance of redeeming yourself, you must write the tract, which has already been written... WE WORSHIP KRAFF WHERE THE EARTH REACHES OUT TO THE 9Th PARADIGM. */;
		iLocal_41 = 300000;
	}
	else
	{
		sLocal_158[0] = "TRACT_HINT1" /* GXT: Kifflom, brother. You are now truly one of us and are ready to write the tract, which has already been written...WE WORSHIP KRAFF WHERE THE EARTH REACHES OUT TO THE 9Th PARADIGM. */;
		iLocal_41 = 16000;
	}
	Local_47[0 /*11*/].f_3 = { 501.9415f, 5604.429f, 796.9146f };
	Local_47[1 /*11*/].f_3 = { 2658.18f, -1361.14f, -21.63f };
	sLocal_158[1] = "TRACT_HINT2" /* GXT: Where the first of the fleet succumbed to the waves, there the message is seeded. */;
	Local_47[2 /*11*/].f_3 = { 24.7139f, 7644.334f, 18.0792f };
	sLocal_158[2] = "TRACT_HINT3" /* GXT: When they sail from the North, they will find this offering. */;
	Local_47[3 /*11*/].f_3 = { -263.55f, 4729.6f, 137.37f };
	sLocal_158[3] = "TRACT_HINT4" /* GXT: In the core of the mountain, where the blast is not felt, there you shall find it. */;
	Local_47[4 /*11*/].f_3 = { -771.98f, -685.22f, 28.86f };
	sLocal_158[4] = "TRACT_HINT5" /* GXT: In the rubble of the old religion, will be the basis for the new. */;
	Local_47[5 /*11*/].f_3 = { -1605.03f, 5256.55f, 1.08f };
	sLocal_158[5] = "TRACT_HINT6" /* GXT: Where the first fleet sailed, the new fleet will find its map. */;
	Local_47[6 /*11*/].f_3 = { -1804.5464f, 403.9298f, 112.1966f };
	sLocal_158[6] = "TRACT_HINT7" /* GXT: What dwelling is worthy of Kraff? He is humble, yet we exalt him. */;
	Local_47[7 /*11*/].f_3 = { 484.2701f, 5617.175f, 787.4708f };
	sLocal_158[7] = "TRACT_HINT8" /* GXT: We are not dinosaurs, nor plants, but a tree in the jet stream may hold Kraff's true word. */;
	Local_47[8 /*11*/].f_3 = { -75.1004f, -819.0673f, 325.3656f };
	sLocal_158[8] = "TRACT_HINT9" /* GXT: The tallest obelisk of glass and steel holds no comparison to the word of Kraff. */;
	Local_47[9 /*11*/].f_3 = { -1725.34f, -189.95f, 57.52f };
	sLocal_158[9] = "TRACT_HINT10" /* GXT: Where they discard their earthly prisons, there you may find the germ of a higher civilization. */;
	iLocal_40 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = (805 + iVar0);
		if (func_5(iVar1, -1))
		{
			iLocal_39++;
		}
		iVar0++;
	}
	iLocal_37 = 1;
}

int func_47(int iParam0)//Position - 0x20CF
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

void func_48()//Position - 0x2126
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_39(&(Local_47[iVar0 /*11*/].f_1));
		iVar0++;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

