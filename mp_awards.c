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
	var uLocal_67 = 17;
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
	var uLocal_85 = 17;
	var uLocal_86 = 0;
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
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EditPlaylistPick"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EditPlaylistDrop"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DeletePlaylist"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("EditPlaylist"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("SetCrewChallenge"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("RScrollUpDown"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PageLeft"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("PageRight"));
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("SupressSelectPM"));
		HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
		Global_1574599 = 0;
		STATS::PLAYSTATS_AWARD_NAV(Global_1652690.f_471, Global_1652690.f_472, Global_1652690.f_499, Global_1652690.f_500);
		Global_1652690.f_471 = 0;
		Global_1652690.f_472 = 0;
		Global_1652690.f_499 = 0;
		Global_1652690.f_500 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	HUD::FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_1574599 = 1;
	iVar0 = 0;
	iVar1 = 1;
	Global_1652106.f_1 = 0;
	Global_1652106.f_3 = 0;
	Global_1652106.f_5 = 0;
	Global_1652106.f_7 = 0;
	Global_1652106.f_6 = 0;
	func_157(&Global_1653621);
	func_156(0, &Global_1653621);
	func_155(&Global_1653621);
	func_153(&Global_1652690);
	func_152(-1, &Global_1652690);
	func_151(&Global_1652690);
	func_150(&Global_1652690);
	func_146();
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	switch (iScriptParam_0)
	{
		case 3:
			while (iVar0 == 0)
			{
				SYSTEM::WAIT(0);
				if (iVar1 == 1)
				{
					if (iVar2 == 0)
					{
						if (HUD::IS_FRONTEND_READY_FOR_CONTROL())
						{
							HUD::TAKE_CONTROL_OF_FRONTEND();
							Global_1652106.f_7 = 0;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_FOCUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							iVar2 = 1;
						}
					}
				}
				if (Global_1652690.f_469 == 0 && Global_1652690.f_470 == 0)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						if (iVar1 == 0)
						{
							iVar1 = 1;
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
							HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("NAVIGATING_CONTENT"));
							HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
							HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
							func_156(Global_1652106.f_6, &Global_1653621);
							func_155(&Global_1653621);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							func_145();
						}
						else
						{
							switch (Global_1652106.f_7)
							{
								case 0:
									GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
									GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
									GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
									HUD::PAUSE_MENU_ACTIVATE_CONTEXT(817402210);
									HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
									HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
									Global_1652106.f_7 = 1;
									func_144(&Global_1652690, &Global_1652106);
									func_152(func_143(&(Global_1652106.f_1), &(Global_1652106.f_3), Global_1652106.f_5, 188), &Global_1652690);
									func_151(&Global_1652690);
									func_150(&Global_1652690);
									func_128(&Global_1652690, &Global_1652106);
									break;
								}
							}
						}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					if (iVar1 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						HUD::RELEASE_CONTROL_OF_FRONTEND();
						iVar0 = 1;
					}
					else
					{
						switch (Global_1652106.f_7)
						{
							case 0:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								Global_1652106.f_1 = 0;
								Global_1652106.f_3 = 0;
								func_156(-1, &Global_1653621);
								func_155(&Global_1653621);
								func_145();
								iVar1 = 0;
								break;
							
							case 1:
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("MENU_SHIFT_DEPTH");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("HIDE_ACCEPTBUTTON"));
								HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(817402210);
								HUD::PAUSE_MENU_ACTIVATE_CONTEXT(874957556);
								HUD::PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(0);
								func_152(-1, &Global_1652690);
								func_151(&Global_1652690);
								func_150(&Global_1652690);
								func_145();
								Global_1652106.f_7 = 0;
								break;
							}
						}
				}
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards1", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards3", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards4", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards5", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPAwards6", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTShirtAwards2", false);
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPTshirtAwardLTS", false);
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
				{
					HUD::REQUEST_ADDITIONAL_TEXT("MPAWD", 8);
				}
				func_15(&Global_1652106);
				if (iVar1 == 1)
				{
					func_2(&Global_1652690, &Global_1652106, &uLocal_111);
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_1();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uVar3);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uVar4);
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	Global_1574599 = 0;
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, -1, 0);
	STATS::PLAYSTATS_AWARD_NAV(Global_1652690.f_471, Global_1652690.f_472, Global_1652690.f_499, Global_1652690.f_500);
	Global_1652690.f_471 = 0;
	Global_1652690.f_472 = 0;
	Global_1652690.f_499 = 0;
	Global_1652690.f_500 = 0;
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x539
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_2(var uParam0, var uParam1, var uParam2)//Position - 0x552
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!func_14(uParam2) || (func_14(uParam2) && func_13(uParam2, 250, 0)))
	{
		iVar0 = 1;
	}
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || func_12(187, &(Global_1654054.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 0);
	}
	if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || func_12(188, &(Global_1654054.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 1);
	}
	if (((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/)) || func_12(189, &(Global_1654054.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 2);
	}
	if (((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/)) || func_12(190, &(Global_1654054.f_1060), 1)) && iVar0)
	{
		func_11(uParam2);
		func_10(uParam2, 0, 0);
		MISC::SET_BIT(&(uParam0->f_464), 3);
	}
	if (BitTest(uParam0->f_464, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 1);
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6 = (uParam1->f_6 - 1);
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
				if (func_9() == 0 || func_8() == 0)
				{
				}
				else if (uParam1->f_6 > 17)
				{
					uParam1->f_6 = 0;
				}
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_6 < 0)
						{
							uParam1->f_6 = 17;
						}
						break;
				}
				func_156(uParam1->f_6, &Global_1653621);
				func_155(&Global_1653621);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), 0, 0);
				break;
			
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3 = (uParam1->f_3 - 1);
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_3 < 0)
						{
							uParam1->f_3 = 2;
						}
						break;
				}
				func_152(func_143(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 188), uParam0);
				func_151(uParam0);
				func_150(uParam0);
				func_128(uParam0, uParam1);
				break;
			}
	}
	if (BitTest(uParam0->f_464, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 0);
		switch (uParam1->f_7)
		{
			case 0:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_6++;
				uParam1->f_5 = 0;
				uParam1->f_1 = 0;
				uParam1->f_3 = 0;
				switch (func_6(*uParam1, 0))
				{
					case 9:
						if (uParam1->f_6 > 17)
						{
							uParam1->f_6 = 0;
						}
						break;
				}
				func_156(uParam1->f_6, &Global_1653621);
				func_155(&Global_1653621);
				uParam0->f_469 = 1;
				func_5(&(uParam0->f_465), 0, 0);
				break;
			
			case 1:
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				uParam1->f_3++;
				if (uParam1->f_3 > 2)
				{
					uParam1->f_3 = 0;
				}
				func_152(func_143(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 187), uParam0);
				func_151(uParam0);
				func_150(uParam0);
				func_128(uParam0, uParam1);
				break;
			}
	}
	if (BitTest(uParam0->f_464, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 2);
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1 = (uParam1->f_1 - 1);
				if (uParam1->f_1 < 0)
				{
					if (iLocal_109 >= 1)
					{
						func_153(uParam0);
						func_1();
					}
					if (uParam1->f_5 > 0)
					{
						uParam1->f_5 = (uParam1->f_5 - 1);
						uParam1->f_1 = 3;
					}
					else
					{
						uParam1->f_5 = iLocal_109;
						uParam1->f_1 = 3;
						iVar1 = (uParam1->f_1 + uParam1->f_3 * 4);
						if (iVar1 >= iLocal_110)
						{
							uParam1->f_1 = ((iLocal_110 - 1) % 4);
							uParam1->f_3 = ((iLocal_110 - 1) / 4);
						}
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_152(func_143(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 189), uParam0);
				func_151(uParam0);
				func_150(uParam0);
				func_128(uParam0, uParam1);
				break;
			}
	}
	if (BitTest(uParam0->f_464, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_464), 3);
		switch (uParam1->f_7)
		{
			case 1:
				uParam1->f_1++;
				iVar2 = (uParam1->f_1 + uParam1->f_3 * 4);
				if (uParam1->f_1 >= 4 || (uParam1->f_5 == iLocal_109 && iVar2 >= iLocal_110))
				{
					if (iLocal_109 >= 1)
					{
						func_153(uParam0);
						func_1();
					}
					uParam1->f_1 = 0;
					uParam1->f_5++;
					if (uParam1->f_5 > iLocal_109)
					{
						uParam1->f_5 = 0;
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_152(func_143(&(uParam1->f_1), &(uParam1->f_3), uParam1->f_5, 190), uParam0);
				func_151(uParam0);
				func_150(uParam0);
				func_128(uParam0, uParam1);
				break;
			}
	}
	if (HUD::HAS_MENU_TRIGGER_EVENT_OCCURRED())
	{
		HUD::GET_MENU_TRIGGER_EVENT_DETAILS(&uVar3, &iVar4);
		switch (uParam1->f_7)
		{
			case 0:
				if (iVar4 == 0 || iVar4 == 1)
				{
					uParam1->f_7 = 1;
					if (HUD::PAUSE_MENU_GET_MOUSE_CLICK_EVENT(&iVar5, &uVar6, &uVar7))
					{
						Global_1652106.f_1 = (iVar5 % 4);
						Global_1652106.f_3 = (iVar5 / 4);
					}
				}
				break;
			}
	}
	if (HUD::HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED())
	{
		HUD::GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(&uVar8, &iVar9, &iVar10);
		iVar11 = iVar9 + 1000;
		if (iVar11 >= 0)
		{
			if (iVar10 == 0)
			{
				uParam1->f_7 = 0;
				if (uParam1->f_6 != iVar11)
				{
					uParam1->f_6 = iVar11;
					uParam1->f_5 = 0;
					uParam1->f_1 = 0;
					uParam1->f_3 = 0;
					uParam0->f_469 = 1;
				}
			}
			else if (iVar10 == 1)
			{
				uParam1->f_7 = 1;
				uParam1->f_1 = (iVar11 % 4);
				uParam1->f_3 = (iVar11 / 4);
			}
			else if (iVar10 == -1 && uParam1->f_7 == 1)
			{
				uParam1->f_7 = 0;
			}
		}
	}
	if (uParam0->f_469 == 1)
	{
		if (func_4(&(uParam0->f_465), 500, 0))
		{
			switch (uParam1->f_7)
			{
				case 0:
					uParam0->f_469 = 0;
					func_153(uParam0);
					func_144(uParam0, uParam1);
					func_152(-1, uParam0);
					func_151(uParam0);
					func_150(uParam0);
					func_3(0);
					uParam0->f_470 = 0;
					break;
			}
		}
		else
		{
			switch (uParam1->f_7)
			{
				case 0:
					if (uParam0->f_470 == 0)
					{
						func_1();
						func_3(1);
						func_145();
						uParam0->f_470 = 1;
					}
					break;
				}
			}
	}
}

void func_3(bool bParam0)//Position - 0xB9D
{
	HUD::PAUSE_MENU_SET_BUSY_SPINNER(bParam0, 6, 0);
}

int func_4(var uParam0, int iParam1, bool bParam2)//Position - 0xBAD
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
			func_11(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_11(uParam0);
		return 1;
	}
	return 0;
}

void func_5(var uParam0, bool bParam1, bool bParam2)//Position - 0xC17
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

int func_6(var uParam0, bool bParam1)//Position - 0xC54
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
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

int func_7()//Position - 0xC95
{
	return Global_1574918;
}

int func_8()//Position - 0xCA1
{
	return Global_32284;
}

int func_9()//Position - 0xCAC
{
	return Global_32283;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0xCB7
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

void func_11(var uParam0)//Position - 0xCFC
{
	uParam0->f_1 = 0;
}

int func_12(int iParam0, var uParam1, int iParam2)//Position - 0xD09
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 197 /*INPUT_FRONTEND_RIGHT_AXIS_X*/) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_13(var uParam0, int iParam1, bool bParam2)//Position - 0xE6C
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

bool func_14(var uParam0)//Position - 0xECA
{
	return uParam0->f_1;
}

void func_15(var uParam0)//Position - 0xED6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTShirtAwards2"))
	{
		iVar0 = 1;
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPTshirtAwardLTS"))
	{
		iVar1 = 1;
	}
	if (iVar2 == 1)
	{
	}
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(8))
	{
		if (((((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards1") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards5")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPAwards6")) && iVar0) && iVar1)
		{
			iVar4 = 9;
			switch (uParam0->f_6)
			{
				case 0:
					if (!Global_262145.f_9208 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
					{
						iLocal_109 = 27;
						iLocal_110 = 3;
					}
					else
					{
						iLocal_109 = 27;
						iLocal_110 = 7;
					}
					iVar3 = 0;
					if (!Global_262145.f_29947 /* Tunable: COLLECTABLES_TREASURE_CHESTS */)
					{
						iVar3++;
					}
					if (Global_262145.f_24900 /* Tunable: 1419194420 */)
					{
						iVar3++;
					}
					if (Global_262145.f_24901 /* Tunable: -2084724801 */)
					{
						iVar3++;
					}
					if (Global_262145.f_24899 /* Tunable: -2064797647 */)
					{
						iVar3++;
					}
					if (!Global_262145.f_34165 /* Tunable: 1836200386 */)
					{
						iVar3++;
					}
					if (!Global_262145.f_34166 /* Tunable: -233754465 */)
					{
						iVar3++;
					}
					if (!Global_262145.f_34167 /* Tunable: -923351980 */)
					{
						iVar3++;
					}
					if (!Global_262145.f_34168 /* Tunable: -2086685551 */)
					{
						iVar3 += 6;
					}
					if (!Global_262145.f_34169 /* Tunable: -1943047357 */)
					{
						iVar3 += 2;
					}
					if (!func_127())
					{
						iVar3++;
					}
					iLocal_110 = (iLocal_110 - iVar3);
					if (!Global_262145.f_31195 /* Tunable: TUNER_CABINET_CAMHEDZ_ENABLE */)
					{
						iLocal_110 = (iLocal_110 - 5);
					}
					if (Global_262145.f_31269[0] == 0f)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (Global_262145.f_31269[6] == 0f)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (iLocal_110 < 1)
					{
						iLocal_109 = (iLocal_109 - 1);
						iLocal_110 += 12;
					}
					break;
				
				case 1:
					iLocal_109 = 2;
					iLocal_110 = 7;
					iLocal_109 = 2;
					iLocal_110 = 9;
					break;
				
				case 2:
					iLocal_109 = 2;
					iLocal_110 = 4;
					break;
				
				case 3:
					iLocal_109 = 0;
					iLocal_110 = 8;
					break;
				
				case 4:
					iLocal_109 = 0;
					iLocal_110 = 12;
					break;
				
				case 5:
					iLocal_109 = 1;
					iLocal_110 = 11;
					iLocal_109 = 2;
					iLocal_110 = 2;
					break;
				
				case 6:
					if ((func_126() || func_125()) || MISC::IS_PC_VERSION())
					{
						iLocal_109 = 1;
						iLocal_110 = 8;
					}
					else
					{
						iLocal_109 = 1;
						iLocal_110 = 7;
					}
					break;
				
				case 8:
					iLocal_109 = 0;
					iLocal_110 = 8;
					if (Global_262145.f_24413 /* Tunable: 2120769116 */ == 0)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (Global_262145.f_24414 /* Tunable: -2003471690 */ == 0)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (Global_262145.f_24415 /* Tunable: -1697376461 */ == 0)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (Global_262145.f_24416 /* Tunable: -1526060129 */ == 0)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (((Global_262145.f_24413 /* Tunable: 2120769116 */ == 0 || Global_262145.f_24415 /* Tunable: -1697376461 */ == 0) || Global_262145.f_24414 /* Tunable: -2003471690 */ == 0) || Global_262145.f_24416 /* Tunable: -1526060129 */ == 0)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					break;
				
				case 7:
					iLocal_109 = 0;
					iLocal_110 = 11;
					break;
				
				case 9:
					iLocal_109 = 3;
					iLocal_110 = 4;
					break;
				
				case 10:
					iLocal_109 = 0;
					iLocal_110 = 11;
					break;
				
				case 11:
					iLocal_109 = 2;
					iLocal_110 = 12;
					break;
				
				case 12:
					iLocal_109 = 0;
					iLocal_110 = 6;
					break;
				
				case 13:
					iLocal_109 = 2;
					iLocal_110 = 2;
					iVar3 = 0;
					if (!Global_262145.f_29947 /* Tunable: COLLECTABLES_TREASURE_CHESTS */)
					{
						iVar3++;
					}
					if (Global_262145.f_24900 /* Tunable: 1419194420 */)
					{
						iVar3++;
						iVar3++;
					}
					if (Global_262145.f_24901 /* Tunable: -2084724801 */)
					{
						iVar3++;
						iVar3++;
					}
					if (Global_262145.f_24899 /* Tunable: -2064797647 */)
					{
						iVar3++;
					}
					iLocal_110 = (iLocal_110 - iVar3);
					if (iLocal_110 < 1)
					{
						iLocal_109 = (iLocal_109 - 1);
						iLocal_110 += 12;
					}
					break;
				
				case 14:
					iLocal_109 = 1;
					iLocal_110 = 12;
					if (!Global_262145.f_31195 /* Tunable: TUNER_CABINET_CAMHEDZ_ENABLE */)
					{
						iLocal_110 = (iLocal_110 - 5);
					}
					if (Global_262145.f_31269[0] == 0f)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (Global_262145.f_31269[6] == 0f)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					break;
				
				case 15:
					iLocal_109 = 1;
					iLocal_110 = 7;
					break;
				
				case 16:
					iLocal_109 = 1;
					iLocal_110 = 12;
					if (!Global_262145.f_34165 /* Tunable: 1836200386 */)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (!Global_262145.f_34166 /* Tunable: -233754465 */)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (!Global_262145.f_34167 /* Tunable: -923351980 */)
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (!Global_262145.f_34168 /* Tunable: -2086685551 */)
					{
						iLocal_110 = (iLocal_110 - 6);
					}
					if (!Global_262145.f_34169 /* Tunable: -1943047357 */)
					{
						iLocal_110 = (iLocal_110 - 2);
					}
					if (!func_127())
					{
						iLocal_110 = (iLocal_110 - 1);
					}
					if (iLocal_110 < 1)
					{
						iLocal_109 = (iLocal_109 - 1);
						iLocal_110 += 12;
					}
					break;
				
				case 17:
					iLocal_109 = 4;
					iLocal_110 = 1;
					break;
			}
			switch (uParam0->f_5)
			{
				case 0:
					switch (uParam0->f_6)
					{
						case 0:
							func_118(9, 8, iVar4, &Global_1652690);
							func_118(1, 8, iVar4, &Global_1652690);
							func_118(4, 8, iVar4, &Global_1652690);
							func_118(5, 8, iVar4, &Global_1652690);
							func_118(2, 8, iVar4, &Global_1652690);
							func_118(8, 8, iVar4, &Global_1652690);
							func_118(7, 8, iVar4, &Global_1652690);
							func_118(3, 8, iVar4, &Global_1652690);
							func_118(6, 8, iVar4, &Global_1652690);
							func_118(10, 8, iVar4, &Global_1652690);
							func_118(19, 8, iVar4, &Global_1652690);
							func_118(24, 8, iVar4, &Global_1652690);
							break;
						
						case 1:
							func_118(40, 8, iVar4, &Global_1652690);
							func_118(41, 8, iVar4, &Global_1652690);
							func_118(42, 8, iVar4, &Global_1652690);
							func_118(21, 8, iVar4, &Global_1652690);
							func_118(58, 8, iVar4, &Global_1652690);
							func_118(57, 8, iVar4, &Global_1652690);
							func_118(37, 8, iVar4, &Global_1652690);
							func_104(20, 8, iVar4, &Global_1652690);
							func_118(51, 8, iVar4, &Global_1652690);
							func_118(52, 8, iVar4, &Global_1652690);
							func_118(54, 8, iVar4, &Global_1652690);
							func_104(14, 8, iVar4, &Global_1652690);
							break;
						
						case 2:
							func_104(15, 8, iVar4, &Global_1652690);
							func_104(16, 8, iVar4, &Global_1652690);
							func_118(29, 8, iVar4, &Global_1652690);
							func_118(28, 8, iVar4, &Global_1652690);
							func_118(47, 8, iVar4, &Global_1652690);
							func_104(6, 8, iVar4, &Global_1652690);
							func_104(7, 8, iVar4, &Global_1652690);
							func_118(30, 8, iVar4, &Global_1652690);
							func_104(2, 8, iVar4, &Global_1652690);
							func_118(36, 8, iVar4, &Global_1652690);
							func_118(49, 8, iVar4, &Global_1652690);
							func_118(15, 8, iVar4, &Global_1652690);
							break;
						
						case 3:
							func_118(60, 8, iVar4, &Global_1652690);
							func_118(19, 8, iVar4, &Global_1652690);
							func_118(53, 8, iVar4, &Global_1652690);
							func_118(12, 8, iVar4, &Global_1652690);
							func_118(11, 8, iVar4, &Global_1652690);
							func_118(14, 8, iVar4, &Global_1652690);
							break;
						
						case 4:
							func_118(10, 8, iVar4, &Global_1652690);
							func_118(17, 8, iVar4, &Global_1652690);
							func_118(61, 8, iVar4, &Global_1652690);
							func_118(0, 8, iVar4, &Global_1652690);
							func_118(16, 8, iVar4, &Global_1652690);
							func_104(13, 8, iVar4, &Global_1652690);
							func_118(20, 8, iVar4, &Global_1652690);
							func_118(62, 8, iVar4, &Global_1652690);
							func_118(63, 8, iVar4, &Global_1652690);
							func_104(23, 8, iVar4, &Global_1652690);
							break;
						
						case 5:
							func_118(9, 8, iVar4, &Global_1652690);
							func_118(56, 8, iVar4, &Global_1652690);
							func_118(55, 8, iVar4, &Global_1652690);
							func_118(45, 8, iVar4, &Global_1652690);
							func_118(43, 8, iVar4, &Global_1652690);
							func_118(46, 8, iVar4, &Global_1652690);
							func_118(44, 8, iVar4, &Global_1652690);
							func_104(22, 8, iVar4, &Global_1652690);
							func_104(17, 8, iVar4, &Global_1652690);
							func_104(18, 8, iVar4, &Global_1652690);
							func_118(59, 8, iVar4, &Global_1652690);
							func_118(1, 8, iVar4, &Global_1652690);
							break;
						
						case 6:
							func_118(128, 8, iVar4, &Global_1652690);
							func_88(12, 8, iVar4, &Global_1652690);
							func_88(13, 8, iVar4, &Global_1652690);
							func_88(14, 8, iVar4, &Global_1652690);
							func_88(15, 8, iVar4, &Global_1652690);
							func_88(16, 8, iVar4, &Global_1652690);
							func_118(129, 8, iVar4, &Global_1652690);
							func_88(17, 8, iVar4, &Global_1652690);
							func_88(18, 8, iVar4, &Global_1652690);
							func_88(19, 8, iVar4, &Global_1652690);
							func_118(133, 8, iVar4, &Global_1652690);
							func_104(160, 8, iVar4, &Global_1652690);
							break;
						
						case 7:
							if (!Global_1652690.f_1[0])
							{
								func_88(1, 8, iVar4, &Global_1652690);
								func_88(2, 8, iVar4, &Global_1652690);
								func_88(6, 8, iVar4, &Global_1652690);
								func_88(3, 8, iVar4, &Global_1652690);
								func_88(7, 8, iVar4, &Global_1652690);
								func_88(8, 8, iVar4, &Global_1652690);
								func_88(4, 8, iVar4, &Global_1652690);
								func_88(9, 8, iVar4, &Global_1652690);
								func_88(10, 8, iVar4, &Global_1652690);
								func_88(5, 8, iVar4, &Global_1652690);
								func_88(11, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 8:
							if (!Global_1652690.f_1[0])
							{
								func_118(151, 8, iVar4, &Global_1652690);
								func_104(165, 8, iVar4, &Global_1652690);
								func_104(166, 8, iVar4, &Global_1652690);
								if (Global_262145.f_24413 /* Tunable: 2120769116 */ == 1)
								{
									func_118(147, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_24415 /* Tunable: -1697376461 */ == 1)
								{
									func_118(148, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_24414 /* Tunable: -2003471690 */ == 1)
								{
									func_118(149, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_24416 /* Tunable: -1526060129 */ == 1)
								{
									func_118(150, 8, iVar4, &Global_1652690);
								}
								if (((Global_262145.f_24413 /* Tunable: 2120769116 */ == 1 && Global_262145.f_24415 /* Tunable: -1697376461 */ == 1) && Global_262145.f_24414 /* Tunable: -2003471690 */ == 1) && Global_262145.f_24416 /* Tunable: -1526060129 */ == 1)
								{
									func_104(167, 8, iVar4, &Global_1652690);
								}
							}
							break;
						
						case 9:
							if (!Global_1652690.f_1[0])
							{
								func_118(86, 8, iVar4, &Global_1652690);
								func_118(85, 8, iVar4, &Global_1652690);
								func_118(84, 8, iVar4, &Global_1652690);
								func_118(83, 8, iVar4, &Global_1652690);
								func_118(82, 8, iVar4, &Global_1652690);
								func_118(81, 8, iVar4, &Global_1652690);
								func_118(80, 8, iVar4, &Global_1652690);
								func_118(79, 8, iVar4, &Global_1652690);
								func_118(78, 8, iVar4, &Global_1652690);
								func_118(77, 8, iVar4, &Global_1652690);
								func_118(76, 8, iVar4, &Global_1652690);
								func_118(75, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 10:
							if (!Global_1652690.f_1[0])
							{
								func_104(53, 8, iVar4, &Global_1652690);
								func_104(54, 8, iVar4, &Global_1652690);
								func_104(55, 8, iVar4, &Global_1652690);
								func_104(56, 8, iVar4, &Global_1652690);
								func_104(57, 8, iVar4, &Global_1652690);
								func_104(58, 8, iVar4, &Global_1652690);
								func_104(59, 8, iVar4, &Global_1652690);
								func_104(62, 8, iVar4, &Global_1652690);
								func_104(60, 8, iVar4, &Global_1652690);
								func_104(61, 8, iVar4, &Global_1652690);
								func_118(87, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 11:
							if (!Global_1652690.f_1[0])
							{
								func_104(63, 8, iVar4, &Global_1652690);
								func_118(88, 8, iVar4, &Global_1652690);
								func_104(64, 8, iVar4, &Global_1652690);
								func_104(65, 8, iVar4, &Global_1652690);
								func_104(66, 8, iVar4, &Global_1652690);
								func_104(67, 8, iVar4, &Global_1652690);
								func_104(68, 8, iVar4, &Global_1652690);
								func_104(69, 8, iVar4, &Global_1652690);
								func_104(70, 8, iVar4, &Global_1652690);
								func_104(71, 8, iVar4, &Global_1652690);
								func_104(72, 8, iVar4, &Global_1652690);
								func_104(73, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 12:
							if (!Global_1652690.f_1[0])
							{
								if (Global_262145.f_29483 /* Tunable: SUM_CABINET_QUB3D_ENABLE */)
								{
									func_104(89, 8, iVar4, &Global_1652690);
									func_104(90, 8, iVar4, &Global_1652690);
									func_104(92, 8, iVar4, &Global_1652690);
									func_104(91, 8, iVar4, &Global_1652690);
									func_104(94, 8, iVar4, &Global_1652690);
									func_104(93, 8, iVar4, &Global_1652690);
								}
							}
							break;
						
						case 13:
							if (!Global_1652690.f_1[0])
							{
								func_104(95, 8, iVar4, &Global_1652690);
								func_104(96, 8, iVar4, &Global_1652690);
								func_118(106, 8, iVar4, &Global_1652690);
								func_104(97, 8, iVar4, &Global_1652690);
								func_104(98, 8, iVar4, &Global_1652690);
								func_104(99, 8, iVar4, &Global_1652690);
								func_104(100, 8, iVar4, &Global_1652690);
								func_104(101, 8, iVar4, &Global_1652690);
								func_104(102, 8, iVar4, &Global_1652690);
								func_104(103, 8, iVar4, &Global_1652690);
								func_104(104, 8, iVar4, &Global_1652690);
								func_104(105, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 14:
							if (!Global_1652690.f_1[0])
							{
								func_104(113, 8, iVar4, &Global_1652690);
								func_118(107, 8, iVar4, &Global_1652690);
								func_118(108, 8, iVar4, &Global_1652690);
								func_118(109, 8, iVar4, &Global_1652690);
								func_118(110, 8, iVar4, &Global_1652690);
								func_118(111, 8, iVar4, &Global_1652690);
								func_118(112, 8, iVar4, &Global_1652690);
								func_118(113, 8, iVar4, &Global_1652690);
								func_104(114, 8, iVar4, &Global_1652690);
								func_118(114, 8, iVar4, &Global_1652690);
								func_104(117, 8, iVar4, &Global_1652690);
								func_104(116, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 15:
							if (!Global_1652690.f_1[0])
							{
								func_104(127, 8, iVar4, &Global_1652690);
								func_104(128, 8, iVar4, &Global_1652690);
								func_104(129, 8, iVar4, &Global_1652690);
								func_104(130, 8, iVar4, &Global_1652690);
								func_104(131, 8, iVar4, &Global_1652690);
								func_104(132, 8, iVar4, &Global_1652690);
								func_104(133, 8, iVar4, &Global_1652690);
								func_104(134, 8, iVar4, &Global_1652690);
								func_104(140, 8, iVar4, &Global_1652690);
								func_104(135, 8, iVar4, &Global_1652690);
								func_104(141, 8, iVar4, &Global_1652690);
								func_104(136, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 16:
							if (!Global_1652690.f_1[0])
							{
								func_104(143, 8, iVar4, &Global_1652690);
								func_104(144, 8, iVar4, &Global_1652690);
								func_104(145, 8, iVar4, &Global_1652690);
								func_104(146, 8, iVar4, &Global_1652690);
								func_118(120, 8, iVar4, &Global_1652690);
								func_104(147, 8, iVar4, &Global_1652690);
								func_104(148, 8, iVar4, &Global_1652690);
								func_118(121, 8, iVar4, &Global_1652690);
								func_104(149, 8, iVar4, &Global_1652690);
								func_104(150, 8, iVar4, &Global_1652690);
								func_118(122, 8, iVar4, &Global_1652690);
								func_104(151, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 17:
							func_82(4, 8, iVar4, &Global_1652690);
							func_82(2, 8, iVar4, &Global_1652690);
							func_82(7, 8, iVar4, &Global_1652690);
							func_82(0, 8, iVar4, &Global_1652690);
							func_82(6, 8, iVar4, &Global_1652690);
							func_82(8, 8, iVar4, &Global_1652690);
							func_82(5, 8, iVar4, &Global_1652690);
							func_82(1, 8, iVar4, &Global_1652690);
							func_82(54, 8, iVar4, &Global_1652690);
							func_82(57, 8, iVar4, &Global_1652690);
							func_82(58, 8, iVar4, &Global_1652690);
							func_82(59, 8, iVar4, &Global_1652690);
							break;
					}
					break;
				
				case 1:
					switch (uParam0->f_6)
					{
						case 0:
							func_118(17, 8, iVar4, &Global_1652690);
							func_118(12, 8, iVar4, &Global_1652690);
							func_118(40, 8, iVar4, &Global_1652690);
							func_118(31, 8, iVar4, &Global_1652690);
							func_118(37, 8, iVar4, &Global_1652690);
							func_118(34, 8, iVar4, &Global_1652690);
							func_118(33, 8, iVar4, &Global_1652690);
							func_118(32, 8, iVar4, &Global_1652690);
							func_118(41, 8, iVar4, &Global_1652690);
							func_118(35, 8, iVar4, &Global_1652690);
							func_118(63, 8, iVar4, &Global_1652690);
							func_70(1, 8, iVar4, &Global_1652690);
							break;
						
						case 1:
							func_118(39, 8, iVar4, &Global_1652690);
							func_104(11, 8, iVar4, &Global_1652690);
							func_118(38, 8, iVar4, &Global_1652690);
							func_104(10, 8, iVar4, &Global_1652690);
							func_118(48, 8, iVar4, &Global_1652690);
							func_118(22, 8, iVar4, &Global_1652690);
							func_118(23, 8, iVar4, &Global_1652690);
							func_118(31, 8, iVar4, &Global_1652690);
							func_118(35, 8, iVar4, &Global_1652690);
							func_104(4, 8, iVar4, &Global_1652690);
							func_104(5, 8, iVar4, &Global_1652690);
							func_118(32, 8, iVar4, &Global_1652690);
							break;
						
						case 2:
							if (!Global_1652690.f_1[0])
							{
								func_104(12, 8, iVar4, &Global_1652690);
								func_118(27, 8, iVar4, &Global_1652690);
								func_104(0, 8, iVar4, &Global_1652690);
								func_104(21, 8, iVar4, &Global_1652690);
								func_70(1, 8, iVar4, &Global_1652690);
								func_70(0, 8, iVar4, &Global_1652690);
								func_70(3, 8, iVar4, &Global_1652690);
								func_70(2, 8, iVar4, &Global_1652690);
								func_118(135, 8, iVar4, &Global_1652690);
								func_118(136, 8, iVar4, &Global_1652690);
								func_118(142, 8, iVar4, &Global_1652690);
								func_104(164, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 5:
							if (!Global_1652690.f_1[0])
							{
								func_118(5, 8, iVar4, &Global_1652690);
								func_118(4, 8, iVar4, &Global_1652690);
								func_118(25, 8, iVar4, &Global_1652690);
								func_118(2, 8, iVar4, &Global_1652690);
								func_118(26, 8, iVar4, &Global_1652690);
								func_118(7, 8, iVar4, &Global_1652690);
								func_118(3, 8, iVar4, &Global_1652690);
								func_118(6, 8, iVar4, &Global_1652690);
								func_118(8, 8, iVar4, &Global_1652690);
								func_118(24, 8, iVar4, &Global_1652690);
								func_118(137, 8, iVar4, &Global_1652690);
								func_118(139, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 6:
							if (!Global_1652690.f_1[0])
							{
								func_118(131, 8, iVar4, &Global_1652690);
								func_118(130, 8, iVar4, &Global_1652690);
								func_104(162, 8, iVar4, &Global_1652690);
								func_104(159, 8, iVar4, &Global_1652690);
								func_104(163, 8, iVar4, &Global_1652690);
								func_118(140, 8, iVar4, &Global_1652690);
								func_88(21, 8, iVar4, &Global_1652690);
								if ((func_126() || func_125()) || MISC::IS_PC_VERSION())
								{
									func_88(20, 8, iVar4, &Global_1652690);
								}
							}
							break;
						
						case 9:
							if (!Global_1652690.f_1[0])
							{
								func_118(74, 8, iVar4, &Global_1652690);
								func_118(73, 8, iVar4, &Global_1652690);
								func_118(72, 8, iVar4, &Global_1652690);
								func_104(52, 8, iVar4, &Global_1652690);
								func_104(51, 8, iVar4, &Global_1652690);
								func_118(71, 8, iVar4, &Global_1652690);
								func_118(70, 8, iVar4, &Global_1652690);
								func_104(50, 8, iVar4, &Global_1652690);
								func_104(30, 8, iVar4, &Global_1652690);
								func_104(31, 8, iVar4, &Global_1652690);
								func_104(32, 8, iVar4, &Global_1652690);
								func_104(33, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 11:
							if (!Global_1652690.f_1[0])
							{
								func_104(74, 8, iVar4, &Global_1652690);
								func_104(75, 8, iVar4, &Global_1652690);
								func_118(89, 8, iVar4, &Global_1652690);
								func_118(90, 8, iVar4, &Global_1652690);
								func_118(91, 8, iVar4, &Global_1652690);
								func_104(76, 8, iVar4, &Global_1652690);
								func_104(77, 8, iVar4, &Global_1652690);
								func_104(78, 8, iVar4, &Global_1652690);
								func_118(92, 8, iVar4, &Global_1652690);
								func_118(93, 8, iVar4, &Global_1652690);
								func_104(79, 8, iVar4, &Global_1652690);
								func_104(80, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 13:
							if (!Global_1652690.f_1[0])
							{
								func_118(105, 8, iVar4, &Global_1652690);
								func_104(106, 8, iVar4, &Global_1652690);
								func_104(107, 8, iVar4, &Global_1652690);
								func_104(108, 8, iVar4, &Global_1652690);
								func_118(101, 8, iVar4, &Global_1652690);
								func_104(111, 8, iVar4, &Global_1652690);
								func_118(99, 8, iVar4, &Global_1652690);
								func_104(112, 8, iVar4, &Global_1652690);
								if (!Global_262145.f_24899 /* Tunable: -2064797647 */)
								{
									func_118(104, 8, iVar4, &Global_1652690);
								}
								if (!Global_262145.f_24901 /* Tunable: -2084724801 */)
								{
									func_118(103, 8, iVar4, &Global_1652690);
									func_104(109, 8, iVar4, &Global_1652690);
								}
								if (!Global_262145.f_24900 /* Tunable: 1419194420 */)
								{
									func_118(102, 8, iVar4, &Global_1652690);
								}
							}
							break;
						
						case 14:
							if (!Global_1652690.f_1[0])
							{
								if (Global_262145.f_31269[0] != 0f)
								{
									func_104(115, 8, iVar4, &Global_1652690);
								}
								func_104(118, 8, iVar4, &Global_1652690);
								func_104(119, 8, iVar4, &Global_1652690);
								func_104(120, 8, iVar4, &Global_1652690);
								if (Global_262145.f_31269[6] != 0f)
								{
									func_104(121, 8, iVar4, &Global_1652690);
								}
								func_104(122, 8, iVar4, &Global_1652690);
								func_118(115, 8, iVar4, &Global_1652690);
								if (Global_262145.f_31195 /* Tunable: TUNER_CABINET_CAMHEDZ_ENABLE */)
								{
									func_118(116, 8, iVar4, &Global_1652690);
									func_104(123, 8, iVar4, &Global_1652690);
									func_104(124, 8, iVar4, &Global_1652690);
									func_104(125, 8, iVar4, &Global_1652690);
									func_104(126, 8, iVar4, &Global_1652690);
								}
							}
							break;
						
						case 15:
							if (!Global_1652690.f_1[0])
							{
								func_104(142, 8, iVar4, &Global_1652690);
								func_118(117, 8, iVar4, &Global_1652690);
								func_118(118, 8, iVar4, &Global_1652690);
								func_104(137, 8, iVar4, &Global_1652690);
								func_104(138, 8, iVar4, &Global_1652690);
								func_104(139, 8, iVar4, &Global_1652690);
								func_118(119, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 16:
							if (!Global_1652690.f_1[0])
							{
								if (Global_262145.f_34165 /* Tunable: 1836200386 */)
								{
									func_118(123, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_34166 /* Tunable: -233754465 */)
								{
									func_118(124, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_34167 /* Tunable: -923351980 */)
								{
									func_118(125, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_34168 /* Tunable: -2086685551 */)
								{
									func_104(152, 8, iVar4, &Global_1652690);
									func_104(153, 8, iVar4, &Global_1652690);
									func_104(154, 8, iVar4, &Global_1652690);
									func_104(155, 8, iVar4, &Global_1652690);
								}
								if (func_127())
								{
									func_118(126, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_34168 /* Tunable: -2086685551 */)
								{
									func_104(156, 8, iVar4, &Global_1652690);
									func_104(157, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_34169 /* Tunable: -1943047357 */)
								{
									func_118(127, 8, iVar4, &Global_1652690);
									func_104(158, 8, iVar4, &Global_1652690);
								}
							}
							break;
						
						case 17:
							func_82(60, 8, iVar4, &Global_1652690);
							func_82(12, 8, iVar4, &Global_1652690);
							func_82(56, 8, iVar4, &Global_1652690);
							func_82(55, 8, iVar4, &Global_1652690);
							func_82(25, 8, iVar4, &Global_1652690);
							func_82(34, 8, iVar4, &Global_1652690);
							func_82(45, 8, iVar4, &Global_1652690);
							func_82(48, 8, iVar4, &Global_1652690);
							func_82(49, 8, iVar4, &Global_1652690);
							func_82(65, 8, iVar4, &Global_1652690);
							func_82(46, 8, iVar4, &Global_1652690);
							func_82(9, 8, iVar4, &Global_1652690);
							break;
					}
					break;
				
				case 2:
					switch (uParam0->f_6)
					{
						case 0:
							func_118(48, 8, iVar4, &Global_1652690);
							func_118(14, 8, iVar4, &Global_1652690);
							func_118(25, 8, iVar4, &Global_1652690);
							func_118(26, 8, iVar4, &Global_1652690);
							func_118(15, 8, iVar4, &Global_1652690);
							func_118(22, 8, iVar4, &Global_1652690);
							func_118(27, 8, iVar4, &Global_1652690);
							func_118(21, 8, iVar4, &Global_1652690);
							func_118(11, 8, iVar4, &Global_1652690);
							func_118(62, 8, iVar4, &Global_1652690);
							func_118(23, 8, iVar4, &Global_1652690);
							func_118(0, 8, iVar4, &Global_1652690);
							break;
						
						case 1:
							if (!Global_1652690.f_1[0])
							{
								func_118(34, 8, iVar4, &Global_1652690);
								func_104(3, 8, iVar4, &Global_1652690);
								func_118(33, 8, iVar4, &Global_1652690);
								func_104(8, 8, iVar4, &Global_1652690);
								func_118(143, 8, iVar4, &Global_1652690);
								func_118(144, 8, iVar4, &Global_1652690);
								func_118(145, 8, iVar4, &Global_1652690);
								func_118(134, 8, iVar4, &Global_1652690);
								func_118(138, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 2:
							if (!Global_1652690.f_1[0])
							{
								func_118(146, 8, iVar4, &Global_1652690);
								func_118(67, 8, iVar4, &Global_1652690);
								func_104(25, 8, iVar4, &Global_1652690);
								func_104(26, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 5:
							if (!Global_1652690.f_1[0])
							{
								func_118(141, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 9:
							if (!Global_1652690.f_1[0])
							{
								func_104(34, 8, iVar4, &Global_1652690);
								func_104(35, 8, iVar4, &Global_1652690);
								func_104(36, 8, iVar4, &Global_1652690);
								func_104(37, 8, iVar4, &Global_1652690);
								func_104(38, 8, iVar4, &Global_1652690);
								func_104(39, 8, iVar4, &Global_1652690);
								func_104(40, 8, iVar4, &Global_1652690);
								func_104(41, 8, iVar4, &Global_1652690);
								func_104(42, 8, iVar4, &Global_1652690);
								func_104(43, 8, iVar4, &Global_1652690);
								func_104(44, 8, iVar4, &Global_1652690);
								func_104(45, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 11:
							if (!Global_1652690.f_1[0])
							{
								func_104(81, 8, iVar4, &Global_1652690);
								func_118(94, 8, iVar4, &Global_1652690);
								func_118(95, 8, iVar4, &Global_1652690);
								func_104(82, 8, iVar4, &Global_1652690);
								func_104(83, 8, iVar4, &Global_1652690);
								func_118(96, 8, iVar4, &Global_1652690);
								func_104(84, 8, iVar4, &Global_1652690);
								func_104(85, 8, iVar4, &Global_1652690);
								func_118(97, 8, iVar4, &Global_1652690);
								func_104(86, 8, iVar4, &Global_1652690);
								func_104(87, 8, iVar4, &Global_1652690);
								func_104(88, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 13:
							if (!Global_1652690.f_1[0])
							{
								if (!Global_262145.f_24900 /* Tunable: 1419194420 */)
								{
									func_104(110, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_29947 /* Tunable: COLLECTABLES_TREASURE_CHESTS */)
								{
									func_118(100, 8, iVar4, &Global_1652690);
								}
							}
							break;
						
						case 17:
							if (!Global_1652690.f_1[0])
							{
								func_82(10, 8, iVar4, &Global_1652690);
								func_82(11, 8, iVar4, &Global_1652690);
								func_82(87, 8, iVar4, &Global_1652690);
								func_82(89, 8, iVar4, &Global_1652690);
								iVar2 = 0;
								if (func_69(3608, -1))
								{
									iVar2 = 1;
								}
								func_65("CLO_LTS_T_0" /* GXT: Elitas T-Shirt */, "CLO_LTS_TD_0" /* GXT: Complete the San Andreas Flight School. */, "Elitas_Tshirt", "MPTshirtAwardLTS", 1, iVar2, -1, 1, &Global_1652690, 168, 152);
								func_62(0);
								func_62(1);
								func_62(2);
								iVar2 = 0;
								if (func_53(4))
								{
									iVar2 = 1;
								}
								func_65("CLO_HST_A_4" /* GXT: Can't Touch This T-Shirt */, "CLO_HST_AD_5" /* GXT: Complete the Can't Touch This platinum Award.~n~Complete a Heist Finale without taking any damage. */, "CantTouchThis", "MPTShirtAwards2", 1, iVar2, -1, 1, &Global_1652690, 168, 152);
								func_62(5);
								func_62(7);
								func_62(6);
							}
							break;
					}
					break;
				
				case 3:
					switch (uParam0->f_6)
					{
						case 0:
							func_118(16, 8, iVar4, &Global_1652690);
							func_118(45, 8, iVar4, &Global_1652690);
							func_118(43, 8, iVar4, &Global_1652690);
							func_118(46, 8, iVar4, &Global_1652690);
							func_118(44, 8, iVar4, &Global_1652690);
							func_118(30, 8, iVar4, &Global_1652690);
							func_104(2, 8, iVar4, &Global_1652690);
							func_118(39, 8, iVar4, &Global_1652690);
							func_118(38, 8, iVar4, &Global_1652690);
							func_104(3, 8, iVar4, &Global_1652690);
							func_118(42, 8, iVar4, &Global_1652690);
							func_118(36, 8, iVar4, &Global_1652690);
							break;
						
						case 1:
							if (!Global_1652690.f_1[0])
							{
							}
							break;
						
						case 9:
							if (!Global_1652690.f_1[0])
							{
								func_104(46, 8, iVar4, &Global_1652690);
								func_104(47, 8, iVar4, &Global_1652690);
								func_104(48, 8, iVar4, &Global_1652690);
								func_104(49, 8, iVar4, &Global_1652690);
							}
							break;
						
						case 17:
							func_62(8);
							iVar2 = 0;
							if (func_53(9))
							{
								iVar2 = 1;
							}
							func_65("CLO_HST_A_9" /* GXT: Showroom T-Shirt */, "CLO_HST_AD_9" /* GXT: Complete the Showroom platinum Award.~n~Store 30 vehicles. */, "Showroom", "MPTShirtAwards2", 1, iVar2, -1, 1, &Global_1652690, 168, 152);
							func_65("CHR_HST_A_0" /* GXT: Chrome Rims - Sport */, "CHR_HST_AD_0" /* GXT: Complete the Captured platinum Award to gain access to the Sport Chrome Rims for free.~n~Win 50 Captures. */, "SportMod", "MPAwardMods", func_52(134, 5, 0), func_50(134, -1), -1, 1, &Global_1652690, 168, 152);
							func_65("CHR_HST_A_1" /* GXT: Chrome Rims - Lowrider */, "CHR_HST_AD_1" /* GXT: Complete The Postman platinum Award to gain access to the Lowrider Chrome Rims for free.~n~Drop off 100 packages in Captures. */, "LowriderMod", "MPAwardMods", func_52(135, 5, 0), func_50(135, -1), -1, 1, &Global_1652690, 168, 152);
							func_65("CHR_HST_A_2" /* GXT: Chrome Rims - Offroad */, "CHR_HST_AD_2" /* GXT: Complete the No You Don't platinum Award to gain access to the Offroad Chrome Rims for free.~n~Kill 100 package carriers in Captures. */, "OffroadMod", "MPAwardMods", func_52(137, 5, 0), func_50(137, -1), -1, 1, &Global_1652690, 168, 152);
							func_65("CHR_HST_A_3" /* GXT: Chrome Rims - High End */, "CHR_HST_AD_3" /* GXT: Complete The Big Time platinum Award to gain access to the High End Chrome Rims for free.~n~Complete 50 Heist Finales. */, "HighendMod", "MPAwardMods", func_52(128, 5, 0), func_50(128, -1), -1, 1, &Global_1652690, 168, 152);
							func_65("CHR_HST_A_4" /* GXT: Chrome Rims - Tuner */, "CHR_HST_AD_4" /* GXT: Complete the Be Prepared platinum Award to gain access to the Tuner Chrome Rims for free.~n~Complete 50 Heist Setups. */, "TunerMod", "MPAwardMods", func_52(129, 5, 0), func_50(129, -1), -1, 1, &Global_1652690, 168, 152);
							func_65("CHR_HST_A_5" /* GXT: Chrome Rims - Bike */, "CHR_HST_AD_5" /* GXT: Complete the Lights Out platinum Award to gain access to the Bike Chrome Rims for free.~n~Get 100 kills while wearing Night Vision. */, "BikeMod", "MPAwardMods", func_52(139, 5, 0), func_50(139, -1), -1, 1, &Global_1652690, 168, 152);
							func_65("CHR_HST_A_6" /* GXT: Chrome Rims - SUV */, "CHR_HST_AD_6" /* GXT: Complete the Still Standing platinum Award to gain access to the SUV Chrome Rims for free.~n~Win 50 LTS matches. */, "SUVMod", "MPAwardMods", func_52(143, 5, 0), func_50(143, -1), -1, 1, &Global_1652690, 168, 152);
							func_65("CHR_HST_A_7" /* GXT: Chrome Rims - Muscle */, "CHR_HST_AD_7" /* GXT: Complete the One and Only platinum Award to gain access to the Muscle Chrome Rims for free.~n~Be the last player alive in an LTS 50 times. */, "MuscleMod", "MPAwardMods", func_52(144, 5, 0), func_50(144, -1), -1, 1, &Global_1652690, 168, 152);
							func_62(34);
							func_65("CLO_S1M_DEC_25" /* GXT: White Benny's T-Shirt */, "CLO_S1M_D_24_25" /* GXT: Complete all the Lowriders Lamar missions. */, "BennyTshirt01", "MPTShirtAwards4", 8, iVar2, -1, 1, &Global_1652690, 168, 152);
							break;
					}
					break;
				
				case 4:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(15, 8, iVar4, &Global_1652690);
							func_104(4, 8, iVar4, &Global_1652690);
							func_104(5, 8, iVar4, &Global_1652690);
							func_104(7, 8, iVar4, &Global_1652690);
							func_104(6, 8, iVar4, &Global_1652690);
							func_118(29, 8, iVar4, &Global_1652690);
							func_118(28, 8, iVar4, &Global_1652690);
							func_118(20, 8, iVar4, &Global_1652690);
							func_104(0, 8, iVar4, &Global_1652690);
							func_104(8, 8, iVar4, &Global_1652690);
							func_118(61, 8, iVar4, &Global_1652690);
							func_70(3, 8, iVar4, &Global_1652690);
							break;
						
						case 17:
							if (!Global_1652690.f_1[0])
							{
								if (func_49(2934, -1) == 1)
								{
									iVar2 = 8;
								}
								else
								{
									iVar2 = func_42(0);
									if (iVar2 > 0)
									{
										iVar2 = (iVar2 - 1);
									}
								}
								func_65("CLO_S1M_DEC_24" /* GXT: Black Benny's T-Shirt */, "CLO_S1M_D_24_25" /* GXT: Complete all the Lowriders Lamar missions. */, "BennyTshirt02", "MPTShirtAwards4", 8, iVar2, -1, 1, &Global_1652690, 168, 152);
							}
							break;
					}
					break;
				
				case 5:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(22, 8, iVar4, &Global_1652690);
							func_104(17, 8, iVar4, &Global_1652690);
							func_104(18, 8, iVar4, &Global_1652690);
							func_70(2, 8, iVar4, &Global_1652690);
							func_70(0, 8, iVar4, &Global_1652690);
							func_104(16, 8, iVar4, &Global_1652690);
							func_104(12, 8, iVar4, &Global_1652690);
							func_104(13, 8, iVar4, &Global_1652690);
							func_118(55, 8, iVar4, &Global_1652690);
							func_118(56, 8, iVar4, &Global_1652690);
							func_118(53, 8, iVar4, &Global_1652690);
							func_104(20, 8, iVar4, &Global_1652690);
							break;
					}
					break;
				
				case 6:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(10, 8, iVar4, &Global_1652690);
							func_104(21, 8, iVar4, &Global_1652690);
							func_118(60, 8, iVar4, &Global_1652690);
							func_104(11, 8, iVar4, &Global_1652690);
							func_118(51, 8, iVar4, &Global_1652690);
							func_118(52, 8, iVar4, &Global_1652690);
							func_118(59, 8, iVar4, &Global_1652690);
							func_118(58, 8, iVar4, &Global_1652690);
							func_104(14, 8, iVar4, &Global_1652690);
							func_118(54, 8, iVar4, &Global_1652690);
							func_118(57, 8, iVar4, &Global_1652690);
							func_118(47, 8, iVar4, &Global_1652690);
							break;
					}
					break;
				
				case 7:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_104(23, 8, iVar4, &Global_1652690);
								func_118(49, 8, iVar4, &Global_1652690);
								func_118(134, 8, iVar4, &Global_1652690);
								func_118(135, 8, iVar4, &Global_1652690);
								func_118(136, 8, iVar4, &Global_1652690);
								func_118(137, 8, iVar4, &Global_1652690);
								func_118(138, 8, iVar4, &Global_1652690);
								func_118(128, 8, iVar4, &Global_1652690);
								func_118(129, 8, iVar4, &Global_1652690);
								func_118(130, 8, iVar4, &Global_1652690);
								func_118(131, 8, iVar4, &Global_1652690);
								func_104(160, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 8:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_118(133, 8, iVar4, &Global_1652690);
								func_104(159, 8, iVar4, &Global_1652690);
								func_118(139, 8, iVar4, &Global_1652690);
								func_104(163, 8, iVar4, &Global_1652690);
								func_118(140, 8, iVar4, &Global_1652690);
								func_118(141, 8, iVar4, &Global_1652690);
								func_118(142, 8, iVar4, &Global_1652690);
								func_118(143, 8, iVar4, &Global_1652690);
								func_118(144, 8, iVar4, &Global_1652690);
								func_118(145, 8, iVar4, &Global_1652690);
								func_104(164, 8, iVar4, &Global_1652690);
								func_118(146, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 9:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_104(162, 8, iVar4, &Global_1652690);
								func_88(12, 8, iVar4, &Global_1652690);
								func_88(13, 8, iVar4, &Global_1652690);
								func_88(14, 8, iVar4, &Global_1652690);
								func_88(15, 8, iVar4, &Global_1652690);
								func_88(16, 8, iVar4, &Global_1652690);
								func_88(17, 8, iVar4, &Global_1652690);
								func_88(18, 8, iVar4, &Global_1652690);
								func_88(19, 8, iVar4, &Global_1652690);
								if (!Global_262145.f_9208 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
								{
									func_118(67, 8, iVar4, &Global_1652690);
									func_104(25, 8, iVar4, &Global_1652690);
									func_104(26, 8, iVar4, &Global_1652690);
								}
							}
							break;
					}
					break;
				
				case 10:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_88(21, 8, iVar4, &Global_1652690);
								if ((func_126() || func_125()) || MISC::IS_PC_VERSION())
								{
									func_88(20, 8, iVar4, &Global_1652690);
								}
								func_88(1, 8, iVar4, &Global_1652690);
								func_88(2, 8, iVar4, &Global_1652690);
								func_88(6, 8, iVar4, &Global_1652690);
								func_88(3, 8, iVar4, &Global_1652690);
								func_88(7, 8, iVar4, &Global_1652690);
								func_88(8, 8, iVar4, &Global_1652690);
								func_88(4, 8, iVar4, &Global_1652690);
								func_88(9, 8, iVar4, &Global_1652690);
								func_88(10, 8, iVar4, &Global_1652690);
								func_88(5, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 11:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_88(11, 8, iVar4, &Global_1652690);
								func_118(151, 8, iVar4, &Global_1652690);
								func_104(165, 8, iVar4, &Global_1652690);
								func_104(166, 8, iVar4, &Global_1652690);
								if (Global_262145.f_24413 /* Tunable: 2120769116 */ == 1)
								{
									func_118(147, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_24415 /* Tunable: -1697376461 */ == 1)
								{
									func_118(148, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_24414 /* Tunable: -2003471690 */ == 1)
								{
									func_118(149, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_24416 /* Tunable: -1526060129 */ == 1)
								{
									func_118(150, 8, iVar4, &Global_1652690);
								}
								if (((Global_262145.f_24413 /* Tunable: 2120769116 */ == 1 && Global_262145.f_24415 /* Tunable: -1697376461 */ == 1) && Global_262145.f_24414 /* Tunable: -2003471690 */ == 1) && Global_262145.f_24416 /* Tunable: -1526060129 */ == 1)
								{
									func_104(167, 8, iVar4, &Global_1652690);
								}
								func_118(86, 8, iVar4, &Global_1652690);
								func_118(85, 8, iVar4, &Global_1652690);
								func_118(84, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 12:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_118(83, 8, iVar4, &Global_1652690);
								func_118(82, 8, iVar4, &Global_1652690);
								func_118(81, 8, iVar4, &Global_1652690);
								func_118(80, 8, iVar4, &Global_1652690);
								func_118(79, 8, iVar4, &Global_1652690);
								func_118(78, 8, iVar4, &Global_1652690);
								func_118(77, 8, iVar4, &Global_1652690);
								func_118(76, 8, iVar4, &Global_1652690);
								func_118(75, 8, iVar4, &Global_1652690);
								func_118(74, 8, iVar4, &Global_1652690);
								func_118(73, 8, iVar4, &Global_1652690);
								func_118(72, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 13:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_104(52, 8, iVar4, &Global_1652690);
								func_104(51, 8, iVar4, &Global_1652690);
								func_118(71, 8, iVar4, &Global_1652690);
								func_118(70, 8, iVar4, &Global_1652690);
								func_104(50, 8, iVar4, &Global_1652690);
								func_104(30, 8, iVar4, &Global_1652690);
								func_104(31, 8, iVar4, &Global_1652690);
								func_104(32, 8, iVar4, &Global_1652690);
								func_104(33, 8, iVar4, &Global_1652690);
								func_104(34, 8, iVar4, &Global_1652690);
								func_104(35, 8, iVar4, &Global_1652690);
								func_104(36, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 14:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_104(37, 8, iVar4, &Global_1652690);
								func_104(38, 8, iVar4, &Global_1652690);
								func_104(39, 8, iVar4, &Global_1652690);
								func_104(40, 8, iVar4, &Global_1652690);
								func_104(41, 8, iVar4, &Global_1652690);
								func_104(42, 8, iVar4, &Global_1652690);
								func_104(43, 8, iVar4, &Global_1652690);
								func_104(44, 8, iVar4, &Global_1652690);
								func_104(45, 8, iVar4, &Global_1652690);
								func_104(46, 8, iVar4, &Global_1652690);
								func_104(47, 8, iVar4, &Global_1652690);
								func_104(48, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 15:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_104(49, 8, iVar4, &Global_1652690);
							}
							func_104(53, 8, iVar4, &Global_1652690);
							func_104(54, 8, iVar4, &Global_1652690);
							func_104(55, 8, iVar4, &Global_1652690);
							func_104(56, 8, iVar4, &Global_1652690);
							func_104(57, 8, iVar4, &Global_1652690);
							func_104(58, 8, iVar4, &Global_1652690);
							func_104(59, 8, iVar4, &Global_1652690);
							func_104(62, 8, iVar4, &Global_1652690);
							func_104(60, 8, iVar4, &Global_1652690);
							func_104(61, 8, iVar4, &Global_1652690);
							func_118(87, 8, iVar4, &Global_1652690);
							break;
					}
					break;
				
				case 16:
					switch (uParam0->f_6)
					{
						case 0:
							func_118(88, 8, iVar4, &Global_1652690);
							func_118(89, 8, iVar4, &Global_1652690);
							func_118(90, 8, iVar4, &Global_1652690);
							func_118(91, 8, iVar4, &Global_1652690);
							func_118(92, 8, iVar4, &Global_1652690);
							func_118(93, 8, iVar4, &Global_1652690);
							func_118(94, 8, iVar4, &Global_1652690);
							func_118(95, 8, iVar4, &Global_1652690);
							func_118(96, 8, iVar4, &Global_1652690);
							func_118(97, 8, iVar4, &Global_1652690);
							func_104(63, 8, iVar4, &Global_1652690);
							func_104(64, 8, iVar4, &Global_1652690);
							break;
					}
					break;
				
				case 17:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(65, 8, iVar4, &Global_1652690);
							func_104(66, 8, iVar4, &Global_1652690);
							func_104(67, 8, iVar4, &Global_1652690);
							func_104(68, 8, iVar4, &Global_1652690);
							func_104(69, 8, iVar4, &Global_1652690);
							func_104(70, 8, iVar4, &Global_1652690);
							func_104(71, 8, iVar4, &Global_1652690);
							func_104(72, 8, iVar4, &Global_1652690);
							func_104(73, 8, iVar4, &Global_1652690);
							func_104(74, 8, iVar4, &Global_1652690);
							func_104(75, 8, iVar4, &Global_1652690);
							func_104(76, 8, iVar4, &Global_1652690);
							break;
					}
					break;
				
				case 18:
					switch (uParam0->f_6)
					{
						case 0:
							func_104(77, 8, iVar4, &Global_1652690);
							func_104(78, 8, iVar4, &Global_1652690);
							func_104(79, 8, iVar4, &Global_1652690);
							func_104(80, 8, iVar4, &Global_1652690);
							func_104(81, 8, iVar4, &Global_1652690);
							func_104(82, 8, iVar4, &Global_1652690);
							func_104(83, 8, iVar4, &Global_1652690);
							func_104(84, 8, iVar4, &Global_1652690);
							func_104(85, 8, iVar4, &Global_1652690);
							func_104(86, 8, iVar4, &Global_1652690);
							func_104(87, 8, iVar4, &Global_1652690);
							func_104(88, 8, iVar4, &Global_1652690);
							break;
					}
					break;
				
				case 19:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								if (Global_262145.f_29483 /* Tunable: SUM_CABINET_QUB3D_ENABLE */)
								{
									func_104(89, 8, iVar4, &Global_1652690);
									func_104(90, 8, iVar4, &Global_1652690);
									func_104(92, 8, iVar4, &Global_1652690);
									func_104(91, 8, iVar4, &Global_1652690);
									func_104(94, 8, iVar4, &Global_1652690);
									func_104(93, 8, iVar4, &Global_1652690);
								}
								func_104(95, 8, iVar4, &Global_1652690);
								func_104(96, 8, iVar4, &Global_1652690);
								func_118(106, 8, iVar4, &Global_1652690);
								func_104(97, 8, iVar4, &Global_1652690);
								func_104(98, 8, iVar4, &Global_1652690);
								func_104(99, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 20:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_104(100, 8, iVar4, &Global_1652690);
								func_104(101, 8, iVar4, &Global_1652690);
								func_104(102, 8, iVar4, &Global_1652690);
								func_104(103, 8, iVar4, &Global_1652690);
								func_104(104, 8, iVar4, &Global_1652690);
								func_104(105, 8, iVar4, &Global_1652690);
								func_118(105, 8, iVar4, &Global_1652690);
								func_104(106, 8, iVar4, &Global_1652690);
								func_104(107, 8, iVar4, &Global_1652690);
								func_104(108, 8, iVar4, &Global_1652690);
								func_118(101, 8, iVar4, &Global_1652690);
								func_104(111, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 21:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_118(99, 8, iVar4, &Global_1652690);
								func_104(112, 8, iVar4, &Global_1652690);
								if (!Global_262145.f_24899 /* Tunable: -2064797647 */)
								{
									func_118(104, 8, iVar4, &Global_1652690);
								}
								if (!Global_262145.f_24901 /* Tunable: -2084724801 */)
								{
									func_104(109, 8, iVar4, &Global_1652690);
									func_118(103, 8, iVar4, &Global_1652690);
								}
								if (!Global_262145.f_24900 /* Tunable: 1419194420 */)
								{
									func_104(110, 8, iVar4, &Global_1652690);
									func_118(102, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_29947 /* Tunable: COLLECTABLES_TREASURE_CHESTS */)
								{
									func_118(100, 8, iVar4, &Global_1652690);
								}
								func_104(113, 8, iVar4, &Global_1652690);
								func_118(107, 8, iVar4, &Global_1652690);
								func_118(108, 8, iVar4, &Global_1652690);
								func_118(109, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 22:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_118(110, 8, iVar4, &Global_1652690);
								func_118(111, 8, iVar4, &Global_1652690);
								func_118(112, 8, iVar4, &Global_1652690);
								func_118(113, 8, iVar4, &Global_1652690);
								func_104(114, 8, iVar4, &Global_1652690);
								func_118(114, 8, iVar4, &Global_1652690);
								func_104(116, 8, iVar4, &Global_1652690);
								func_104(117, 8, iVar4, &Global_1652690);
								func_104(118, 8, iVar4, &Global_1652690);
								func_104(119, 8, iVar4, &Global_1652690);
								func_104(120, 8, iVar4, &Global_1652690);
								func_104(122, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 23:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								if (Global_262145.f_31269[0] != 0f)
								{
									func_104(115, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_31269[6] != 0f)
								{
									func_104(121, 8, iVar4, &Global_1652690);
								}
								func_118(115, 8, iVar4, &Global_1652690);
								if (Global_262145.f_31195 /* Tunable: TUNER_CABINET_CAMHEDZ_ENABLE */)
								{
									func_118(116, 8, iVar4, &Global_1652690);
									func_104(123, 8, iVar4, &Global_1652690);
									func_104(124, 8, iVar4, &Global_1652690);
									func_104(125, 8, iVar4, &Global_1652690);
									func_104(126, 8, iVar4, &Global_1652690);
								}
								func_104(127, 8, iVar4, &Global_1652690);
								func_104(128, 8, iVar4, &Global_1652690);
								func_104(129, 8, iVar4, &Global_1652690);
								func_104(130, 8, iVar4, &Global_1652690);
								func_104(131, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 24:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_104(132, 8, iVar4, &Global_1652690);
								func_104(133, 8, iVar4, &Global_1652690);
								func_104(134, 8, iVar4, &Global_1652690);
								func_104(140, 8, iVar4, &Global_1652690);
								func_104(135, 8, iVar4, &Global_1652690);
								func_104(141, 8, iVar4, &Global_1652690);
								func_104(136, 8, iVar4, &Global_1652690);
								func_104(142, 8, iVar4, &Global_1652690);
								func_118(117, 8, iVar4, &Global_1652690);
								func_118(118, 8, iVar4, &Global_1652690);
								func_104(137, 8, iVar4, &Global_1652690);
								func_104(138, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 25:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_104(139, 8, iVar4, &Global_1652690);
								func_118(119, 8, iVar4, &Global_1652690);
								func_104(143, 8, iVar4, &Global_1652690);
								func_104(144, 8, iVar4, &Global_1652690);
								func_104(145, 8, iVar4, &Global_1652690);
								func_104(146, 8, iVar4, &Global_1652690);
								func_118(120, 8, iVar4, &Global_1652690);
								func_104(147, 8, iVar4, &Global_1652690);
								func_104(148, 8, iVar4, &Global_1652690);
								func_118(121, 8, iVar4, &Global_1652690);
								func_104(149, 8, iVar4, &Global_1652690);
								func_104(150, 8, iVar4, &Global_1652690);
							}
							break;
					}
					break;
				
				case 26:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								func_118(122, 8, iVar4, &Global_1652690);
								func_104(151, 8, iVar4, &Global_1652690);
								if (Global_262145.f_34165 /* Tunable: 1836200386 */)
								{
									func_118(123, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_34166 /* Tunable: -233754465 */)
								{
									func_118(124, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_34167 /* Tunable: -923351980 */)
								{
									func_118(125, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_34168 /* Tunable: -2086685551 */)
								{
									func_104(152, 8, iVar4, &Global_1652690);
									func_104(153, 8, iVar4, &Global_1652690);
									func_104(154, 8, iVar4, &Global_1652690);
									func_104(155, 8, iVar4, &Global_1652690);
								}
								if (func_127())
								{
									func_118(126, 8, iVar4, &Global_1652690);
								}
								if (Global_262145.f_34168 /* Tunable: -2086685551 */)
								{
									func_104(156, 8, iVar4, &Global_1652690);
									func_104(157, 8, iVar4, &Global_1652690);
								}
							}
							break;
					}
					break;
				
				case 27:
					switch (uParam0->f_6)
					{
						case 0:
							if (!Global_1652690.f_1[0])
							{
								if (Global_262145.f_34169 /* Tunable: -1943047357 */)
								{
									func_118(127, 8, iVar4, &Global_1652690);
									func_104(158, 8, iVar4, &Global_1652690);
								}
							}
							break;
					}
					break;
			}
			func_29(&Global_1652690, func_41(&Global_1652690));
			func_28(1, &Global_1653621);
			func_27(1, &Global_1653621);
			func_26(1, &Global_1653621);
			func_25(0, "HUD_AWDLIST1" /* GXT: All Awards */, &Global_1653621);
			func_25(1, "HUD_AWDLIST12" /* GXT: Victory */, &Global_1653621);
			func_25(2, "HUD_AWDLIST3b" /* GXT: General */, &Global_1653621);
			func_25(3, "HUD_AWDLIST6" /* GXT: Crimes */, &Global_1653621);
			func_25(4, "HUD_AWDLIST9" /* GXT: Vehicle */, &Global_1653621);
			func_25(5, "HUD_AWDLIST10" /* GXT: Combat */, &Global_1653621);
			func_25(6, "HUD_AWDLIST13" /* GXT: Heists */, &Global_1653621);
			func_25(7, "HUD_AWD_GANGOP" /* GXT: The Doomsday Heist */, &Global_1653621);
			func_25(8, "HUD_AWD_NIGHTCLUB" /* GXT: After Hours */, &Global_1653621);
			func_25(9, "PM_ARENA" /* GXT: Arena War */, &Global_1653621);
			func_25(10, "AWDGBC_VC" /* GXT: The Diamond Casino & Resort */, &Global_1653621);
			func_25(11, "FMMC_CH_DN" /* GXT: The Diamond Casino Heist */, &Global_1653621);
			if (Global_262145.f_29483 /* Tunable: SUM_CABINET_QUB3D_ENABLE */)
			{
				func_25(12, "SUM20AWARDPAGE" /* GXT: Los Santos Summer Special */, &Global_1653621);
			}
			func_25(13, "HEISTISLAWDPAGE" /* GXT: The Cayo Perico Heist */, &Global_1653621);
			func_25(14, "TUNEAWDPAGE" /* GXT: Los Santos Tuners */, &Global_1653621);
			func_25(15, "FIXAWDPAGE" /* GXT: The Contract */, &Global_1653621);
			func_25(16, "DLC222AWDPAGE" /* GXT: Los Santos Drug Wars */, &Global_1653621);
			func_25(17, "HUD_AWDLIST6b" /* GXT: Rewards */, &Global_1653621);
			func_16(&Global_1653621, func_24(&Global_1653621));
		}
	}
}

void func_16(var uParam0, int iParam1)//Position - 0x430A
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_23(uParam0);
	}
	if (*uParam0 == 0)
	{
		iVar1 = uParam0->f_309[iVar0];
		iVar0 = 0;
		while (iVar0 <= 17)
		{
			if (uParam0->f_1[iVar0] == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
				if (uParam0->f_425 == 1)
				{
					if (uParam0->f_426 == iVar0)
					{
						iVar1 = 0;
					}
					else
					{
						iVar1 = 4;
					}
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_347[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				if (uParam0->f_424)
				{
					func_22(&(uParam0->f_20[iVar0 /*16*/]));
				}
				else
				{
					func_21(&(uParam0->f_20[iVar0 /*16*/]));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_328[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_385[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_404[iVar0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_366[iVar0]);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			*uParam0 = 1;
			iVar0++;
		}
		func_20(0);
	}
	func_17(uParam0, func_19(uParam0));
}

void func_17(var uParam0, int iParam1)//Position - 0x442A
{
	if (iParam1 == 1)
	{
		uParam0->f_427 = 0;
		func_18(uParam0);
	}
	if (uParam0->f_427 == 0)
	{
		if (uParam0->f_426 != -1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_426);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_426 = -1;
			uParam0->f_427 = 1;
		}
	}
}

void func_18(var uParam0)//Position - 0x447D
{
	uParam0->f_429 = 0;
}

int func_19(var uParam0)//Position - 0x448B
{
	return uParam0->f_429;
}

void func_20(int iParam0)//Position - 0x4498
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_21(char* sParam0)//Position - 0x44B5
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_22(char* sParam0)//Position - 0x44C3
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_23(var uParam0)//Position - 0x44D5
{
	uParam0->f_428 = 0;
}

int func_24(var uParam0)//Position - 0x44E3
{
	return uParam0->f_428;
}

void func_25(int iParam0, char* sParam1, var uParam2)//Position - 0x44F0
{
	StringCopy(&(uParam2->f_20[iParam0 /*16*/]), sParam1, 64);
	uParam2->f_1[iParam0] = 1;
}

void func_26(int iParam0, var uParam1)//Position - 0x450D
{
	uParam1->f_425 = iParam0;
}

void func_27(int iParam0, var uParam1)//Position - 0x451C
{
	uParam1->f_423 = iParam0;
}

void func_28(int iParam0, var uParam1)//Position - 0x452B
{
	uParam1->f_424 = iParam0;
}

void func_29(var uParam0, int iParam1)//Position - 0x453A
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_1();
		func_40(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (func_39(uParam0))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				iVar1 = -1;
				iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(uParam0->f_221[iVar0]) / SYSTEM::TO_FLOAT(uParam0->f_208[iVar0])) * 100f));
				iVar1 = uParam0->f_441[iVar0];
				iVar2 = -1;
				switch (uParam0->f_428[iVar0])
				{
					case 107:
						iVar2 = 100;
						break;
					
					case 108:
						iVar2 = 200;
						break;
					
					case 109:
						iVar2 = 400;
						break;
					
					case 110:
						iVar2 = 800;
						break;
				}
				StringCopy(&Var3, func_38(uParam0->f_428[iVar0]), 32);
				if (uParam0->f_1[iVar0] == 1)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_22(&(uParam0->f_14[iVar0 /*8*/]));
					func_22(&(uParam0->f_111[iVar0 /*8*/]));
					func_21(&(uParam0->f_331[iVar0 /*8*/]));
					func_21(&(uParam0->f_234[iVar0 /*8*/]));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_428[iVar0]);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					if (func_37(&Var3))
					{
						func_22("HUD_AWDPROG_S" /* GXT: Progress */);
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("HUD_AWDPROG" /* GXT: ~a~ Progress */);
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var3);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (uParam0->f_221[iVar0] >= uParam0->f_208[iVar0])
					{
						func_22("TR_COMPLETE" /* GXT: Completed */);
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("TIMER_DASHES" /* GXT: ~1~/~1~ */);
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_221[iVar0]);
						HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_208[iVar0]);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (iVar2 >= 0)
					{
						func_22("HUD_AWDAWARD" /* GXT: Award */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar0++;
			}
			func_20(1);
			*uParam0 = 1;
		}
	}
	func_33(uParam0, func_36(uParam0));
	func_30(uParam0, func_32(uParam0));
}

void func_30(var uParam0, int iParam1)//Position - 0x4723
{
	if (iParam1 == 1)
	{
		uParam0->f_458 = 0;
		func_31(uParam0);
	}
	if (uParam0->f_458 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_455);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_455 = -1;
		uParam0->f_458 = 1;
	}
}

void func_31(var uParam0)//Position - 0x476D
{
	uParam0->f_462 = 0;
}

int func_32(var uParam0)//Position - 0x477B
{
	return uParam0->f_462;
}

void func_33(var uParam0, int iParam1)//Position - 0x4788
{
	if (iParam1 == 1)
	{
		uParam0->f_459 = 0;
		func_35(uParam0);
	}
	if (uParam0->f_459 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DESCRIPTION");
		if (uParam0->f_456 < 0)
		{
			func_22("");
			func_22("");
		}
		else if (uParam0->f_456 < 12)
		{
			func_22(&(uParam0->f_14[uParam0->f_456 /*8*/]));
			if (uParam0->f_208[uParam0->f_456] > -1)
			{
				func_34(&(uParam0->f_111[uParam0->f_456 /*8*/]), uParam0->f_208[uParam0->f_456]);
			}
			else
			{
				func_22(&(uParam0->f_111[uParam0->f_456 /*8*/]));
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		uParam0->f_456 = -1;
		uParam0->f_459 = 1;
	}
}

void func_34(char* sParam0, int iParam1)//Position - 0x4834
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_35(var uParam0)//Position - 0x484C
{
	uParam0->f_463 = 0;
}

int func_36(var uParam0)//Position - 0x485A
{
	return uParam0->f_463;
}

int func_37(char* sParam0)//Position - 0x4867
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

char* func_38(int iParam0)//Position - 0x48A1
{
	switch (iParam0)
	{
		case 107:
			return "HUD_MED_BRON" /* GXT: Bronze */;
			break;
		
		case 108:
			return "HUD_MED_SILV" /* GXT: Silver */;
			break;
		
		case 109:
			return "HUD_MED_GOLD" /* GXT: Gold */;
			break;
		
		case 110:
			return "HUD_MED_PLAT" /* GXT: Platinum */;
			break;
	}
	return "";
}

int func_39(var uParam0)//Position - 0x48F4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (uParam0->f_1[iVar0] == 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_331[iVar0 /*8*/])))
			{
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&(uParam0->f_331[iVar0 /*8*/]), false);
				if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&(uParam0->f_331[iVar0 /*8*/])))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(var uParam0)//Position - 0x4950
{
	uParam0->f_460 = 0;
}

int func_41(var uParam0)//Position - 0x495E
{
	return uParam0->f_460;
}

int func_42(int iParam0)//Position - 0x496B
{
	int iVar0;
	
	if (Global_1945782[iParam0 /*8*/] == -1)
	{
		iVar0 = func_49(func_48(iParam0), -1);
		if (iVar0 == -1)
		{
			func_43(iParam0, 0);
			iVar0 = 0;
		}
		Global_1945782[iParam0 /*8*/] = iVar0;
	}
	return Global_1945782[iParam0 /*8*/];
}

void func_43(int iParam0, int iParam1)//Position - 0x49AE
{
	Global_1945782[iParam0 /*8*/] = iParam1;
	func_44(func_48(iParam0), iParam1, -1);
}

void func_44(int iParam0, int iParam1, int iParam2)//Position - 0x49CD
{
	func_45(iParam0, iParam1, iParam2, 1);
}

void func_45(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x49E0
{
	int iVar0;
	
	iVar0 = func_46(iParam0, uParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_46(int iParam0, var uParam1)//Position - 0x4A03
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_47(uParam1));
}

int func_47(var uParam0)//Position - 0x4A18
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
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

int func_48(int iParam0)//Position - 0x4A4C
{
	switch (iParam0)
	{
		case 0:
			return 12515;
		
		default:
	}
	return 12515;
}

int func_49(int iParam0, int iParam1)//Position - 0x4A6A
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_46(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0x4A99
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_51(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0, var uParam1)//Position - 0x4ABD
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_47(uParam1));
}

int func_52(int iParam0, int iParam1, int iParam2)//Position - 0x4AD3
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 53:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 30;
				
				case 4:
					return 60;
				
				case 5:
					return 120;
				
				default:
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 63:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 2;
				
				case 3:
					return 3;
				
				case 4:
					return 4;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 42:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 100;
				
				case 4:
					return 200;
				
				case 5:
					return 500;
				
				default:
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 10000;
				
				case 4:
					return 25000;
				
				case 5:
					return 50000;
				
				default:
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 3;
				
				case 3:
					return 5;
				
				case 4:
					return 7;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 54:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 55:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 250;
				
				case 4:
					return 500;
				
				case 5:
					return 1000;
				
				default:
			}
			break;
		
		case 57:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 58:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 59:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 135:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 136:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 137:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 128:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 130:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 131:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 132:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 133:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 142:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 143:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 144:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 145:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 67:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 147:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25489 /* Tunable: -2140343856 */;
				
				case 3:
					return Global_262145.f_25490 /* Tunable: -1167118619 */;
				
				case 4:
					return Global_262145.f_25491 /* Tunable: -132305813 */;
				
				case 5:
					return Global_262145.f_25492 /* Tunable: 1249433112 */;
				
				default:
			}
			break;
		
		case 148:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25489 /* Tunable: -2140343856 */;
				
				case 3:
					return Global_262145.f_25490 /* Tunable: -1167118619 */;
				
				case 4:
					return Global_262145.f_25491 /* Tunable: -132305813 */;
				
				case 5:
					return Global_262145.f_25492 /* Tunable: 1249433112 */;
				
				default:
			}
			break;
		
		case 149:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25489 /* Tunable: -2140343856 */;
				
				case 3:
					return Global_262145.f_25490 /* Tunable: -1167118619 */;
				
				case 4:
					return Global_262145.f_25491 /* Tunable: -132305813 */;
				
				case 5:
					return Global_262145.f_25492 /* Tunable: 1249433112 */;
				
				default:
			}
			break;
		
		case 150:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_25489 /* Tunable: -2140343856 */;
				
				case 3:
					return Global_262145.f_25490 /* Tunable: -1167118619 */;
				
				case 4:
					return Global_262145.f_25491 /* Tunable: -132305813 */;
				
				case 5:
					return Global_262145.f_25492 /* Tunable: 1249433112 */;
				
				default:
			}
			break;
		
		case 151:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 70:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 71:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 72:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 73:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 74:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 75:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 76:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 77:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 3;
				
				case 4:
					return 5;
				
				case 5:
					return 10;
				
				default:
			}
			break;
		
		case 78:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 79:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 80:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 81:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 82:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 83:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 100000;
				
				case 3:
					return 250000;
				
				case 4:
					return 500000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 84:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 85:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000;
				
				case 3:
					return 3000;
				
				case 4:
					return 15000;
				
				case 5:
					return 55000;
				
				default:
			}
			break;
		
		case 86:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 87:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 88:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 89:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 20;
				
				default:
			}
			break;
		
		case 90:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 25000;
				
				case 3:
					return 50000;
				
				case 4:
					return 75000;
				
				case 5:
					return 100000;
				
				default:
			}
			break;
		
		case 91:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 20;
				
				case 4:
					return 30;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 92:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28891 /* Tunable: ARCADE_SHARPSHOOTER_BRONZE_SCORE */;
				
				case 3:
					return Global_262145.f_28892 /* Tunable: ARCADE_SHARPSHOOTER_SILVER_SCORE */;
				
				case 4:
					return Global_262145.f_28893 /* Tunable: ARCADE_SHARPSHOOTER_GOLD_SCORE */;
				
				case 5:
					return Global_262145.f_28894 /* Tunable: ARCADE_SHARPSHOOTER_PLATINUM_SCORE */;
				
				default:
			}
			break;
		
		case 93:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_29058 /* Tunable: ARCADE_RACECHAMP_BRONZE_SCORE */;
				
				case 3:
					return Global_262145.f_29059 /* Tunable: ARCADE_RACECHAMP_SILVER_SCORE */;
				
				case 4:
					return Global_262145.f_29060 /* Tunable: ARCADE_RACECHAMP_GOLD_SCORE */;
				
				case 5:
					return Global_262145.f_29061 /* Tunable: ARCADE_RACECHAMP_PLATINUM_SCORE */;
				
				default:
			}
			break;
		
		case 94:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_29092 /* Tunable: ARCADE_PLAT_SWORD_BRONZE_SCORE */;
				
				case 3:
					return Global_262145.f_29093 /* Tunable: ARCADE_PLAT_SWORD_SILVER_SCORE */;
				
				case 4:
					return Global_262145.f_29094 /* Tunable: ARCADE_PLAT_SWORD_GOLD_SCORE */;
				
				case 5:
					return Global_262145.f_29095 /* Tunable: ARCADE_PLAT_SWORD_PLATINUM_SCORE */;
				
				default:
			}
			break;
		
		case 95:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_29096 /* Tunable: ARCADE_COIN_PURSE_BRONZE_SCORE */;
				
				case 3:
					return Global_262145.f_29097 /* Tunable: ARCADE_COIN_PURSE_SILVER_SCORE */;
				
				case 4:
					return Global_262145.f_29098 /* Tunable: ARCADE_COIN_PURSE_GOLD_SCORE */;
				
				case 5:
					return Global_262145.f_29099 /* Tunable: ARCADE_COIN_PURSE_PLATINUM_SCORE */;
				
				default:
			}
			break;
		
		case 96:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_28787 /* Tunable: 212778777 */;
				
				case 3:
					return Global_262145.f_28788 /* Tunable: 1730590555 */;
				
				case 4:
					return Global_262145.f_28789 /* Tunable: 599275937 */;
				
				case 5:
					return Global_262145.f_28790 /* Tunable: 790883802 */;
				
				default:
			}
			break;
		
		case 97:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return Global_262145.f_29062 /* Tunable: ARCADE_MASTERFUL_BRONZE_SCORE */;
				
				case 3:
					return Global_262145.f_29063 /* Tunable: ARCADE_MASTERFUL_SILVER_SCORE */;
				
				case 4:
					return Global_262145.f_29064 /* Tunable: ARCADE_MASTERFUL_GOLD_SCORE */;
				
				case 5:
					return Global_262145.f_29065 /* Tunable: ARCADE_MASTERFUL_PLATINUM_SCORE */;
				
				default:
			}
			break;
		
		case 99:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 100:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 101:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 50000;
				
				case 3:
					return 250000;
				
				case 4:
					return 750000;
				
				case 5:
					return 1000000;
				
				default:
			}
			break;
		
		case 102:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 103:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 104:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 105:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1000000;
				
				case 3:
					return 5000000;
				
				case 4:
					return 10000000;
				
				case 5:
					return 20000000;
				
				default:
			}
			break;
		
		case 106:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 107:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 108:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 109:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 110:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 112:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 114:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 40;
				
				default:
			}
			break;
		
		case 115:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 116:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 30;
				
				default:
			}
			break;
		
		case 111:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 30;
				
				case 3:
					return 60;
				
				case 4:
					return 120;
				
				case 5:
					return 240;
				
				default:
			}
			break;
		
		case 113:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 117:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 118:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 25;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 119:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 120:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 121:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 122:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 123:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 124:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
		
		case 125:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				case 4:
					return 3;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 126:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 15;
				
				case 4:
					return 30;
				
				case 5:
					return 60;
				
				default:
			}
			break;
		
		case 127:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 20;
				
				case 5:
					return 50;
				
				default:
			}
			break;
	}
	return 999;
}

int func_53(int iParam0)//Position - 0x7816
{
	bool bVar0;
	
	bVar0 = func_61(386, -1) == false;
	if (bVar0)
	{
		if (func_54(func_59(func_60(iParam0, bVar0), 3), -1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_54(func_59(func_60(iParam0, bVar0), 4), -1))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, int iParam1)//Position - 0x786F
{
	var uVar0;
	int iVar1;
	
	if (func_57(iParam0) == 14385)
	{
		return 0;
	}
	uVar0 = func_56(iParam0, iParam1);
	iVar1 = iParam0;
	return BitTest(uVar0, func_55(iVar1));
}

int func_55(int iParam0)//Position - 0x789E
{
	return (iParam0 % 32);
}

int func_56(var uParam0, int iParam1)//Position - 0x78AB
{
	int iVar0;
	
	iVar0 = func_49(func_57(uParam0), iParam1);
	return iVar0;
}

int func_57(var uParam0)//Position - 0x78C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_58(iVar0);
	if ((func_9() == 0 || func_8() == 0) || (func_9() == 999 && func_8() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1039;
				break;
			
			case 1:
				return 1040;
				break;
			
			case 2:
				return 1041;
				break;
			
			case 3:
				return 1042;
				break;
			
			case 4:
				return 1043;
				break;
			
			case 5:
				return 1503;
				break;
			
			case 6:
				return 1758;
				break;
			
			case 7:
				return 1952;
				break;
			
			case 8:
				return 1953;
				break;
			
			case 9:
				return 1954;
				break;
			
			case 10:
				return 1955;
				break;
			
			case 11:
				return 1956;
				break;
			
			case 12:
				return 1957;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2614;
				break;
			
			case 18:
				return 2617;
				break;
			
			case 19:
				return 2620;
				break;
			
			case 20:
				return 3786;
				break;
			
			case 21:
				return 3789;
				break;
			
			case 22:
				return 3864;
				break;
			
			case 23:
				return 3867;
				break;
			
			case 24:
				return 3870;
				break;
			
			case 25:
				return 3873;
				break;
			
			case 26:
				return 5364;
				break;
			
			case 27:
				return 5367;
				break;
			
			case 28:
				return 5469;
				break;
			
			case 29:
				return 5472;
				break;
			
			case 30:
				return 6431;
				break;
			
			case 31:
				return 6434;
				break;
			
			case 32:
				return 7255;
				break;
			
			case 33:
				return 7258;
				break;
			
			case 34:
				return 7261;
				break;
			
			case 35:
				return 7970;
				break;
			
			case 36:
				return 7973;
				break;
			
			case 37:
				return 7976;
				break;
			
			case 38:
				return 7979;
				break;
			
			case 39:
				return 8501;
				break;
			
			case 40:
				return 8504;
				break;
			
			case 41:
				return 8507;
				break;
			
			case 42:
				return 8510;
				break;
			
			case 43:
				return 8906;
				break;
			
			case 44:
				return 8909;
				break;
			
			case 45:
				return 8912;
				break;
			
			case 46:
				return 10287;
				break;
			
			case 47:
				return 10290;
				break;
			
			case 48:
				return 10413;
				break;
			
			case 49:
				return 10416;
				break;
			
			case 50:
				return 11824;
				break;
			
			case 51:
				return 11827;
				break;
		}
	}
	return 14385;
}

int func_58(int iParam0)//Position - 0x7C20
{
	return (iParam0 / 32);
}

int func_59(int iParam0, int iParam1)//Position - 0x7C2D
{
	int iVar0;
	
	iVar0 = FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

int func_60(int iParam0, bool bParam1)//Position - 0x7C4F
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_004");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_004");
			}
			break;
		
		case 1:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_005");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_005");
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_006");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_006");
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_007");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_007");
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_008");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_008");
			}
			break;
		
		case 5:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_009");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_009");
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_010");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_010");
			}
			break;
		
		case 7:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_011");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_011");
			}
			break;
		
		case 8:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_012");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_012");
			}
			break;
		
		case 9:
			if (bParam1)
			{
				return joaat("MP_Award_M_Tshirt_013");
			}
			else
			{
				return joaat("MP_Award_F_Tshirt_013");
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_000");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_000");
			}
			break;
		
		case 11:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_001");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_001");
			}
			break;
		
		case 12:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_002");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_002");
			}
			break;
		
		case 13:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_003");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_003");
			}
			break;
		
		case 14:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_004");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_004");
			}
			break;
		
		case 15:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_005");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_005");
			}
			break;
		
		case 16:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_006");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_006");
			}
			break;
		
		case 17:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_007");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_007");
			}
			break;
		
		case 18:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_008");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_008");
			}
			break;
		
		case 19:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_009");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_009");
			}
			break;
		
		case 20:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_010");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_010");
			}
			break;
		
		case 21:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_011");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_011");
			}
			break;
		
		case 22:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_012");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_012");
			}
			break;
		
		case 23:
			if (bParam1)
			{
				return joaat("FM_Hip_M_Retro_013");
			}
			else
			{
				return joaat("FM_Hip_F_Retro_013");
			}
			break;
		
		case 24:
			if (bParam1)
			{
				return joaat("FM_Rstar_M_Tshirt_000");
			}
			else
			{
				return joaat("FM_Rstar_F_Tshirt_000");
			}
			break;
		
		case 25:
			if (bParam1)
			{
				return joaat("FM_Rstar_M_Tshirt_001");
			}
			else
			{
				return joaat("FM_Rstar_F_Tshirt_001");
			}
			break;
		
		case 26:
			if (bParam1)
			{
				return joaat("FM_Rstar_M_Tshirt_002");
			}
			else
			{
				return joaat("FM_Rstar_F_Tshirt_002");
			}
			break;
		
		case 27:
			if (bParam1)
			{
				return joaat("FM_Ind_M_Award_000");
			}
			else
			{
				return joaat("FM_Ind_F_Award_000");
			}
			break;
		
		case 28:
			if (bParam1)
			{
				return joaat("MP_Fli_M_Tshirt_000");
			}
			else
			{
				return joaat("MP_Fli_F_Tshirt_000");
			}
			break;
		
		case 29:
			if (bParam1)
			{
				return joaat("FM_LTS_M_Tshirt_000");
			}
			else
			{
				return joaat("FM_LTS_F_Tshirt_000");
			}
			break;
		
		case 30:
			if (bParam1)
			{
				return joaat("MP_FM_OGA_000_m");
			}
			else
			{
				return joaat("MP_FM_OGA_000_f");
			}
			break;
		
		case 31:
			if (bParam1)
			{
				return joaat("MP_FM_OGA_001_m");
			}
			else
			{
				return joaat("MP_FM_OGA_001_f");
			}
			break;
		
		case 32:
			if (bParam1)
			{
				return joaat("MP_FM_OGA_002_m");
			}
			else
			{
				return joaat("MP_FM_OGA_002_f");
			}
			break;
		
		case 33:
			if (bParam1)
			{
				return joaat("MP_FM_OGA_003_m");
			}
			else
			{
				return joaat("MP_FM_OGA_003_f");
			}
			break;
		
		case 34:
			if (bParam1)
			{
				return joaat("MP_Elite_M_Tshirt");
			}
			else
			{
				return joaat("MP_Elite_F_Tshirt");
			}
			break;
		
		case 35:
			if (bParam1)
			{
				return joaat("MP_Elite_M_Tshirt_1");
			}
			else
			{
				return joaat("MP_Elite_F_Tshirt_1");
			}
			break;
	}
	return 0;
}

int func_61(int iParam0, int iParam1)//Position - 0x8102
{
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	return STATS::GET_PACKED_STAT_INT_CODE(iParam0, iParam1);
}

void func_62(int iParam0)//Position - 0x811E
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "CLO_HST_A_0" /* GXT: Death Defying T-Shirt */;
			sVar1 = "CLO_HST_AD_0" /* GXT: Complete the Death Defying platinum Award.~n~Win 25 Captures without dying. */;
			sVar2 = "DeathDefying";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 138;
			break;
		
		case 1:
			sVar0 = "CLO_HST_A_1" /* GXT: For Hire T-Shirt */;
			sVar1 = "CLO_HST_AD_1" /* GXT: Complete the For Hire platinum Award.~n~Be a Heist crew member 25 times. */;
			sVar2 = "ForHire";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 130;
			break;
		
		case 2:
			sVar0 = "CLO_HST_A_2" /* GXT: Gimme That T-Shirt */;
			sVar1 = "CLO_HST_AD_3" /* GXT: Complete the Gimme That platinum Award.~n~Collect 100 packages in any Capture mode. */;
			sVar2 = "LiveALittle";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 136;
			break;
		
		case 5:
			sVar0 = "CLO_HST_A_5" /* GXT: Decorated T-Shirt */;
			sVar1 = "CLO_HST_AD_6" /* GXT: Complete the Decorated platinum Award.~n~Win 25 platinum medals during Heist Setups and Heist Finales. */;
			sVar2 = "Decorated";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 133;
			break;
		
		case 7:
			sVar0 = "CLO_HST_A_7" /* GXT: One Man Army T-Shirt */;
			sVar1 = "CLO_HST_AD_8" /* GXT: Complete the One Man Army platinum Award.~n~Kill the entire opposing team yourself in LTS matches 25 times. */;
			sVar2 = "OneManArmy";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 145;
			break;
		
		case 6:
			sVar0 = "CLO_HST_A_6" /* GXT: Psycho Killer T-Shirt */;
			sVar1 = "CLO_HST_AD_7" /* GXT: Complete the Psycho Killer platinum Award.~n~Kill 100 players with Psychopath Mental State. */;
			sVar2 = "PsychoKiller";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 141;
			break;
		
		case 8:
			sVar0 = "CLO_HST_A_8" /* GXT: Shot Caller T-Shirt */;
			sVar1 = "CLO_HST_AD_2" /* GXT: Complete the Shot Caller platinum Award.~n~Be the Heist leader 25 times. */;
			sVar2 = "ShotCaller";
			sVar3 = "MPTShirtAwards2";
			iVar4 = 131;
			break;
		
		case 34:
			sVar0 = "CLO_HSTM_U_3_0" /* GXT: Elite Challenge T-Shirt */;
			sVar1 = "CLO_HST_AD_10" /* GXT: Complete the Elite Heist Challenges. */;
			sVar2 = "EliteTshirt1";
			sVar3 = "MPTShirtAwards2";
			break;
	}
	iVar6 = 5;
	if (func_64(iVar4, 9) != 1)
	{
		iVar5 = 1;
	}
	if (iParam0 != 34)
	{
		iVar7 = func_52(iVar4, iVar6, 9);
		iVar8 = func_50(iVar4, -1);
	}
	else
	{
		iVar7 = 5;
		iVar8 = func_63();
	}
	func_65(sVar0, sVar1, sVar2, sVar3, iVar7, iVar8, -1, iVar5, &Global_1652690, 168, 152);
}

int func_63()//Position - 0x829D
{
	int iVar0;
	
	if (func_69(3765, -1))
	{
		iVar0++;
	}
	if (func_69(3766, -1))
	{
		iVar0++;
	}
	if (func_69(3767, -1))
	{
		iVar0++;
	}
	if (func_69(3768, -1))
	{
		iVar0++;
	}
	if (func_69(3769, -1))
	{
		iVar0++;
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1)//Position - 0x82FC
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return 1;
		
		case 39:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 62:
			return 1;
		
		case 63:
			return 1;
		
		case 16:
			return 1;
		
		case 0:
			return 1;
		
		case 12:
			return 1;
		
		case 11:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 15:
			return 1;
		
		case 17:
			return 1;
		
		case 21:
			return 1;
		
		case 14:
			return 1;
		
		case 22:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 23:
			return 1;
		
		case 24:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 28:
			return 1;
		
		case 29:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 134:
			return 1;
		
		case 135:
			return 1;
		
		case 136:
			return 1;
		
		case 137:
			return 1;
		
		case 138:
			return 1;
		
		case 67:
			return 1;
		
		case 128:
			return 1;
		
		case 129:
			return 1;
		
		case 130:
			return 1;
		
		case 131:
			return 1;
		
		case 132:
			return 1;
		
		case 133:
			return 1;
		
		case 139:
			return 1;
		
		case 140:
			return 1;
		
		case 141:
			return 1;
		
		case 142:
			return 1;
		
		case 143:
			return 1;
		
		case 144:
			return 1;
		
		case 145:
			return 1;
		
		case 146:
			return 1;
		
		case 147:
			return 1;
		
		case 148:
			return 1;
		
		case 149:
			return 1;
		
		case 150:
			return 1;
		
		case 151:
			return 1;
		
		case 70:
			return 1;
		
		case 71:
			return 1;
		
		case 72:
			return 1;
		
		case 73:
			return 1;
		
		case 74:
			return 1;
		
		case 75:
			return 1;
		
		case 76:
			return 1;
		
		case 77:
			return 1;
		
		case 78:
			return 1;
		
		case 79:
			return 1;
		
		case 80:
			return 1;
		
		case 81:
			return 1;
		
		case 82:
			return 1;
		
		case 83:
			return 1;
		
		case 84:
			return 1;
		
		case 85:
			return 1;
		
		case 86:
			return 1;
		
		case 87:
			return 1;
		
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
			return 1;
			break;
	}
	return 0;
}

void func_65(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x8814
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (uParam8->f_1[iVar0] == 0)
		{
			func_67(iVar0, sParam2, sParam3, iParam6, iParam7, uParam8);
			func_66(iVar0, sParam0, sParam1, iParam4, iParam5, uParam8);
			uParam8->f_1[iVar0] = 1;
			uParam8->f_473[iVar0] = iParam9;
			uParam8->f_486[iVar0] = iParam10;
			iVar0 = 12;
		}
		iVar0++;
	}
}

void func_66(int iParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5)//Position - 0x887E
{
	StringCopy(&(uParam5->f_14[iParam0 /*8*/]), sParam1, 32);
	StringCopy(&(uParam5->f_111[iParam0 /*8*/]), sParam2, 32);
	uParam5->f_208[iParam0] = uParam3;
	uParam5->f_221[iParam0] = uParam4;
}

void func_67(int iParam0, char* sParam1, char* sParam2, var uParam3, int iParam4, var uParam5)//Position - 0x88B2
{
	StringCopy(&(uParam5->f_234[iParam0 /*8*/]), sParam1, 32);
	StringCopy(&(uParam5->f_331[iParam0 /*8*/]), sParam2, 32);
	uParam5->f_428[iParam0] = func_68(iParam4);
	uParam5->f_441[iParam0] = uParam3;
}

int func_68(int iParam0)//Position - 0x88ED
{
	switch (iParam0)
	{
		case 2:
			return 107;
			break;
		
		case 3:
			return 108;
			break;
		
		case 4:
			return 109;
			break;
		
		case 5:
			return 110;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

bool func_69(int iParam0, int iParam1)//Position - 0x893C
{
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void func_70(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x8958
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_81(iParam0, iParam2);
			break;
		
		case 7:
		case 8:
			iParam1 = func_79(iParam0, iParam2);
			break;
	}
	iVar0 = func_79(iParam0, iParam2);
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_78(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	sVar1 = func_77(iParam0, iParam2, 0);
	sVar2 = func_76(iParam0, iParam1, iParam2, 0);
	sVar3 = func_75(iParam0, iParam2);
	sVar4 = func_74(iParam0, iParam2);
	iVar5 = func_73(iParam0, iVar0, iParam2);
	iVar6 = func_72(iParam0);
	iVar7 = func_71(iParam1);
	iVar8 = func_73(iParam0, iVar7, iParam2);
	iVar9 = (iVar5 - iVar8);
	iVar10 = (iVar6 - iVar8);
	iVar11 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar10) / SYSTEM::TO_FLOAT(iVar9)) * 100f));
	func_65(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar11, iParam1, uParam3, 168, 152);
}

int func_71(int iParam0)//Position - 0x8A94
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 0;
			break;
		
		case 2:
			iVar0 = 1;
			break;
		
		case 3:
			iVar0 = 2;
			break;
		
		case 4:
			iVar0 = 3;
			break;
		
		case 5:
			iVar0 = 4;
			break;
	}
	return iVar0;
}

int func_72(int iParam0)//Position - 0x8AED
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = Global_1665476[iParam0];
	iVar1 = uVar0;
	if (STATS::STAT_GET_INT(iVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x8B15
{
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 5;
				
				case 3:
					return 10;
				
				case 4:
					return 15;
				
				case 5:
					return 25;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 10;
				
				case 3:
					return 25;
				
				case 4:
					return 50;
				
				case 5:
					return 100;
				
				default:
			}
			break;
	}
	return 999;
}

char* func_74(int iParam0, int iParam1)//Position - 0x8C6B
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "MPAWARDS5";
		
		case 1:
			return "MPAWARDS5";
		
		case 2:
			return "MPAWARDS5";
		
		case 3:
			return "MPAWARDS6";
		
		default:
	}
	return "";
}

char* func_75(int iParam0, int iParam1)//Position - 0x8CB9
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "RaceCreator";
		
		case 1:
			return "DeathmatchCreator";
		
		case 2:
			return "PlayedCreation";
		
		case 3:
			return "CreatorsScore";
		
		default:
	}
	return "";
}

char* func_76(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8D07
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (func_73(iParam0, iParam1, iParam2) == 1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWS_686";
		
		case 1:
			return "AWS_688";
		
		case 2:
			return "AWS_689";
		
		case 3:
			return "AWS_690";
		
		default:
	}
	return "";
}

char* func_77(int iParam0, int iParam1, bool bParam2)//Position - 0x8D68
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWT_686";
		
		case 1:
			return "AWT_688";
		
		case 2:
			return "AWT_689";
		
		case 3:
			return "AWT_690";
		
		default:
	}
	return "";
}

int func_78(int iParam0, int iParam1)//Position - 0x8DBB
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_79(int iParam0, int iParam1)//Position - 0x8DFA
{
	if (func_80(func_72(iParam0), func_73(iParam0, 5, iParam1)))
	{
		return 5;
	}
	if (func_80(func_72(iParam0), func_73(iParam0, 4, iParam1)))
	{
		return 5;
	}
	if (func_80(func_72(iParam0), func_73(iParam0, 3, iParam1)))
	{
		return 4;
	}
	if (func_80(func_72(iParam0), func_73(iParam0, 2, iParam1)))
	{
		return 3;
	}
	return 2;
}

int func_80(int iParam0, int iParam1)//Position - 0x8E6B
{
	if (iParam1 <= iParam0)
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)//Position - 0x8E7F
{
	if (!func_80(func_72(iParam0), func_73(iParam0, 5, iParam1)))
	{
		return 0;
	}
	if (!func_80(func_72(iParam0), func_73(iParam0, 4, iParam1)))
	{
		return 2;
	}
	if (!func_80(func_72(iParam0), func_73(iParam0, 3, iParam1)))
	{
		return 3;
	}
	if (!func_80(func_72(iParam0), func_73(iParam0, 2, iParam1)))
	{
		return 4;
	}
	return 5;
}

void func_82(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x8EF4
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	switch (iParam1)
	{
		case 6:
		case 8:
			if (func_54(iParam0, -1))
			{
				iParam1 = 0;
			}
			break;
		
		case 7:
			if (func_54(iParam0, -1) == 0)
			{
				iParam1 = 5;
			}
			break;
	}
	iVar1 = func_87(iParam0);
	switch (iParam2)
	{
		case 9:
			iVar0 = 3;
			break;
	}
	if (iParam0 == 57)
	{
		iParam1 = 2;
	}
	else if (iParam0 == 58 || iParam0 == 9)
	{
		iParam1 = 3;
	}
	else if (iParam0 == 59 || iParam0 == 10)
	{
		iParam1 = 4;
	}
	else
	{
		iParam1 = 5;
	}
	sVar2 = func_86(iParam0, iVar0);
	sVar3 = func_85(iParam0, iVar0);
	sVar4 = func_84(iParam0, iVar0);
	sVar5 = func_83(iParam0, iVar0);
	iVar6 = func_52(iVar1, iParam1, 0);
	iVar7 = func_50(iVar1, -1);
	if (iVar1 == 64)
	{
		iVar6 = 1;
		iVar7 = 0;
	}
	iVar8 = -1;
	if (func_54(iParam0, -1))
	{
		iVar7 = func_52(func_87(iParam0), iParam1, 0);
		if (iVar1 == 64)
		{
			iVar7 = 1;
		}
	}
	iParam1 = 1;
	func_65(sVar2, sVar3, sVar4, sVar5, iVar6, iVar7, iVar8, iParam1, uParam3, 168, 152);
}

char* func_83(int iParam0, int iParam1)//Position - 0x901E
{
	char* sVar0;
	
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_84(int iParam0, int iParam1)//Position - 0x9103
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_85(int iParam0, int iParam1)//Position - 0x95AF
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D" /* GXT: Complete The Equalizer platinum Award. ~n~Get 50 Revenge kills in Deathmatch. */;
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d" /* GXT: Complete The Record Holder platinum Award. ~n~Hold a World Record in a Rockstar Race. */;
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D" /* GXT: Complete the Road Rage platinum Award. ~n~Kill at least 3 other racers in a GTA Race and win. */;
			break;
		
		case 5:
			return "TAT_FM_KILb_D" /* GXT: Complete The Bounty Hunter platinum Award. ~n~Kill 25 Bounty Targets. */;
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D" /* GXT: Complete the Head Banger platinum Award. ~n~Get 500 player headshots. */;
			break;
		
		case 12:
			return "TAT_RACE50_D" /* GXT: Complete The Champion platinum Award. ~n~Win 50 Races. */;
			break;
		
		case 2:
			return "TAT_CLEAROUT_D" /* GXT: Complete the Clear Out platinum Award. ~n~Clear 5 Gang Attacks in one day, in a single session. */;
			break;
		
		case 9:
			return "TAT_FM_RANK1_D" /* GXT: Complete The Widow Maker silver Award. ~n~Get 250 player kills. */;
			break;
		
		case 10:
			return "TAT_FM_RANK2_D" /* GXT: Complete The Widow Maker gold Award. ~n~Get 500 player kills. */;
			break;
		
		case 11:
			return "TAT_FM_RANK3_D" /* GXT: Complete The Widow Maker platinum Award. ~n~Get 1000 player kills. */;
			break;
		
		case 4:
			return "TAT_FM_HUST_D" /* GXT: Complete The Hustler platinum Award. ~n~Earn $50,000 winnings from betting. */;
			break;
		
		case 1:
			return "TAT_FM_SLAY_D" /* GXT: Complete The Slayer platinum Award. ~n~Win 50 Deathmatches. */;
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D" /* GXT: Complete the All Rounder platinum Award. ~n~Win every game mode. */;
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D" /* GXT: Complete the Full Metal Jacket platinum Award. ~n~Rob 25 Armored Trucks. */;
			break;
		
		case 56:
			return "TAT_CHEATER_D" /* GXT: Complete The Car Bomber platinum Award. ~n~Kill 25 players using vehicle explosives. */;
			break;
		
		case 13:
			return "TAT_CRANKA_D" /* GXT: Reached Crew Rank 26. */;
			break;
		
		case 14:
			return "TAT_CRANKB_D" /* GXT: Reached Crew Rank 45. */;
			break;
		
		case 15:
			return "TAT_CRANKC_D" /* GXT: Reached Crew Rank 18. */;
			break;
		
		case 16:
			return "TAT_CRANKD_D" /* GXT: Reached Crew Rank 52. */;
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D" /* GXT: Create a Race, Deathmatch, Capture, or Last Team Standing and get it verified by Rockstar Games. */;
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D" /* GXT: Complete The Survivor platinum Award. ~n~Complete a Survival. */;
			break;
		
		case 55:
			return "TAT_FM_MODDED_D" /* GXT: Complete the Suped Up platinum Award. ~n~Apply each type of mod to a single vehicle. */;
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 18:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 19:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 20:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 21:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 22:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 23:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 24:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 25:
			return "TAT_FM_TAT9D" /* GXT: Complete the Death Toll platinum Award. ~n~Get 500 kills in Deathmatch. */;
			break;
		
		case 26:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 27:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 28:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 61:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 62:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 63:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 64:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 65:
			return "TAT_FM_TAT17D" /* GXT: Complete the Bloodiest Of The Bunch platinum Award. ~n~Get the most kills in a 4 player Survival. */;
			break;
		
		case 29:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 30:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 31:
			return "TAT_RANK10_D" /* GXT: Reach Rank 10 To Unlock Tattoo. */;
			break;
		
		case 66:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 32:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 33:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 34:
			return "TAT_FM_TAT24D" /* GXT: Complete the Lapping It Up platinum Award. ~n~Get 25 Private Dances. */;
			break;
		
		case 35:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 36:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 37:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 38:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 39:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 40:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 67:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 41:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 68:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 42:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 43:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 44:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 45:
			return "TAT_FM_TAT37D" /* GXT: Complete the Pistol Whipped platinum Award. ~n~Get 500 Pistol kills. */;
			break;
		
		case 46:
			return "TAT_FM_TAT38D" /* GXT: Complete the Team Carrier platinum Award. ~n~Earn 50 MVPs in Team Deathmatch. */;
			break;
		
		case 47:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 48:
			return "TAT_FM_TAT40D" /* GXT: Complete the Scoping Out platinum Award. ~n~Get 100 Sniper kills. */;
			break;
		
		case 49:
			return "TAT_FM_TAT41D" /* GXT: Complete the Killstreaker platinum Award. ~n~Earn a 10 plus killstreak in Deathmatch. */;
			break;
		
		case 50:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 51:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 52:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 53:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 69:
			return "TAT_RANK20_D" /* GXT: Reach Rank 20 To Unlock Tattoo. */;
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D" /* GXT: Complete the Armed Robber bronze Award. ~n~Hold up 5 stores. */;
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D" /* GXT: Complete the Armed Robber silver Award. ~n~Hold up 10 stores. */;
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D" /* GXT: Complete the Armed Robber gold Award. ~n~Hold up 15 stores. */;
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D" /* GXT: Complete the Armed Robber platinum Award. ~n~Hold up 20 stores. */;
			break;
	}
	return sVar0;
}

char* func_86(int iParam0, int iParam1)//Position - 0x9A5B
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG" /* GXT: Skull */;
			break;
		
		case 2:
			return "TAT_CLEAROUT" /* GXT: Grim Reaper Smoking Gun */;
			break;
		
		case 9:
			return "TAT_FM_RANK1" /* GXT: Blank Scroll */;
			break;
		
		case 10:
			return "TAT_FM_RANK2" /* GXT: Embellished Scroll */;
			break;
		
		case 11:
			return "TAT_FM_RANK3" /* GXT: Seven Deadly Sins */;
			break;
		
		case 4:
			return "TAT_FM_HUST" /* GXT: Hustler */;
			break;
		
		case 1:
			return "TAT_FM_SLAY" /* GXT: Burning Heart */;
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1" /* GXT: Angel */;
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE" /* GXT: Blackjack */;
			break;
		
		case 7:
			return "TAT_FM_REVENKIL" /* GXT: Dragon and Dagger */;
			break;
		
		case 5:
			return "TAT_FM_KILb" /* GXT: Skull and Sword */;
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE" /* GXT: Ride or Die */;
			break;
		
		case 6:
			return "TAT_FM_RECHOLD" /* GXT: Racing Blonde */;
			break;
		
		case 12:
			return "TAT_RACE50" /* GXT: Racing Brunette */;
			break;
		
		case 13:
			return "TAT_CRANKA" /* GXT: Crew Rank 1 */;
			break;
		
		case 14:
			return "TAT_CRANKB" /* GXT: Crew Rank 2 */;
			break;
		
		case 15:
			return "TAT_CRANKC" /* GXT: Crew Rank 3 */;
			break;
		
		case 16:
			return "TAT_CRANKD" /* GXT: Crew Rank 4 */;
			break;
		
		case 87:
			return "TAT_FM_REDSKULL" /* GXT: Red Skull T-Shirt */;
			break;
		
		case 88:
			return "TAT_FM_BELLE" /* GXT: Los Santos Belle T-Shirt */;
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR" /* GXT: Rockstar T-Shirt */;
			break;
		
		case 55:
			return "TAT_FM_MODDED" /* GXT: Los Santos Customs */;
			break;
		
		case 17:
			return "TAT_FM_TAT1" /* GXT: Tattoo 1 */;
			break;
		
		case 18:
			return "TAT_FM_TAT2" /* GXT: Tattoo 2 */;
			break;
		
		case 19:
			return "TAT_FM_TAT3" /* GXT: Tattoo 3 */;
			break;
		
		case 20:
			return "TAT_FM_TAT4" /* GXT: Tattoo 4 */;
			break;
		
		case 21:
			return "TAT_FM_TAT5" /* GXT: Tattoo 5 */;
			break;
		
		case 22:
			return "TAT_FM_TAT6" /* GXT: Tattoo 6 */;
			break;
		
		case 56:
			return "TAT_CHEATER" /* GXT: Trust No One */;
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7" /* GXT: Tattoo 7 */;
			break;
		
		case 24:
			return "TAT_FM_TAT8" /* GXT: Tattoo 8 */;
			break;
		
		case 25:
			return "TAT_FM_TAT9" /* GXT: Melting Skull */;
			break;
		
		case 26:
			return "TAT_FM_TAT10" /* GXT: Tattoo 10 */;
			break;
		
		case 27:
			return "TAT_FM_TAT11" /* GXT: Tattoo 11 */;
			break;
		
		case 28:
			return "TAT_FM_TAT12" /* GXT: Tattoo 12 */;
			break;
		
		case 61:
			return "TAT_FM_TAT13" /* GXT: Tattoo 13 */;
			break;
		
		case 62:
			return "TAT_FM_TAT14" /* GXT: Tattoo 14 */;
			break;
		
		case 63:
			return "TAT_FM_TAT15" /* GXT: Tattoo 1 */;
			break;
		
		case 64:
			return "TAT_FM_TAT16" /* GXT: Tattoo 16 */;
			break;
		
		case 65:
			return "TAT_FM_TAT38" /* GXT: The Wages of Sin */;
			break;
		
		case 29:
			return "TAT_FM_TAT18" /* GXT: Tattoo 19 */;
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20" /* GXT: Tattoo 20 */;
			break;
		
		case 66:
			return "TAT_FM_TAT21" /* GXT: Tattoo 21 */;
			break;
		
		case 32:
			return "TAT_FM_TAT22" /* GXT: Tattoo 22 */;
			break;
		
		case 33:
			return "TAT_FM_TAT23" /* GXT: Tattoo 23 */;
			break;
		
		case 34:
			return "TAT_FM_TAT24" /* GXT: Hottie */;
			break;
		
		case 35:
			return "TAT_FM_TAT25" /* GXT: Tattoo 25 */;
			break;
		
		case 36:
			return "TAT_FM_TAT26" /* GXT: Tattoo 26 */;
			break;
		
		case 37:
			return "TAT_FM_TAT27" /* GXT: Tattoo 27 */;
			break;
		
		case 38:
			return "TAT_FM_TAT28" /* GXT: Tattoo 28 */;
			break;
		
		case 39:
			return "TAT_FM_TAT29" /* GXT: Tattoo 29 */;
			break;
		
		case 40:
			return "TAT_FM_TAT30" /* GXT: Tattoo 30 */;
			break;
		
		case 67:
			return "TAT_FM_TAT31" /* GXT: Tattoo 31 */;
			break;
		
		case 41:
			return "TAT_FM_TAT32" /* GXT: Tattoo 32 */;
			break;
		
		case 68:
			return "TAT_FM_TAT33" /* GXT: Tattoo 33 */;
			break;
		
		case 42:
			return "TAT_FM_TAT34" /* GXT: Tattoo 34 */;
			break;
		
		case 43:
			return "TAT_FM_TAT35" /* GXT: Tattoo 35 */;
			break;
		
		case 44:
			return "TAT_FM_TAT36" /* GXT: Tattoo 36 */;
			break;
		
		case 45:
			return "TAT_FM_TAT37" /* GXT: Way Of The Gun */;
			break;
		
		case 46:
			return "TAT_FM_TAT41" /* GXT: Grim Reaper */;
			break;
		
		case 47:
			return "TAT_FM_TAT39" /* GXT: Tattoo 39 */;
			break;
		
		case 48:
			return "TAT_FM_TAT40" /* GXT: Broken Skull */;
			break;
		
		case 49:
			return "TAT_FM_TAT17" /* GXT: Flaming Skull */;
			break;
		
		case 50:
			return "TAT_FM_TAT42" /* GXT: Tattoo 42 */;
			break;
		
		case 51:
			return "TAT_FM_TAT43" /* GXT: Tattoo 43 */;
			break;
		
		case 52:
			return "TAT_FM_TAT44" /* GXT: Tattoo 44 */;
			break;
		
		case 53:
			return "TAT_FM_TAT45" /* GXT: Tattoo 45 */;
			break;
		
		case 69:
			return "TAT_FM_TAT46" /* GXT: Tattoo 46 */;
			break;
		
		case 57:
			return "TAT_HOLDUP1V" /* GXT: Clown */;
			break;
		
		case 58:
			return "TAT_HOLDUP5V" /* GXT: Clown and Gun */;
			break;
		
		case 59:
			return "TAT_HOLDUP10V" /* GXT: Clown Dual Wield */;
			break;
		
		case 60:
			return "TAT_HOLDUP20V" /* GXT: Clown Dual Wield Dollars */;
			break;
	}
	return sVar0;
}

int func_87(int iParam0)//Position - 0x9F17
{
	switch (iParam0)
	{
		case 4:
			return 49;
		
		case 7:
			return 59;
		
		case 0:
			return 9;
		
		case 5:
			return 55;
		
		case 1:
			return 40;
		
		case 57:
			return 14;
		
		case 58:
			return 14;
		
		case 59:
			return 14;
		
		case 60:
			return 14;
		
		case 12:
			return 21;
		
		case 56:
			return 24;
		
		case 25:
			return 44;
		
		case 34:
			return 15;
		
		case 45:
			return 1;
		
		case 48:
			return 2;
		
		case 46:
			return 42;
		
		case 9:
			return 56;
		
		case 10:
			return 56;
		
		case 11:
			return 56;
		
		case 87:
			return 48;
		
		default:
	}
	return 64;
}

void func_88(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xA002
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_103(iParam0);
			break;
		
		case 7:
		case 8:
			iParam1 = func_102();
			break;
	}
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_101(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	iVar1 = func_102();
	sVar2 = func_99(iParam0, iParam2, 0);
	sVar3 = func_98(iParam0, iParam1, iParam2, 0);
	sVar4 = func_97(iParam0, iParam2);
	sVar5 = func_96(iParam0, iParam2);
	iVar6 = func_94(iParam0, iVar1, iParam2);
	iVar7 = func_91(iParam0, iVar1, iParam2);
	iVar8 = func_71(iParam1);
	iVar9 = func_94(iParam0, iVar8, iParam2);
	iVar10 = (iVar6 - iVar9);
	iVar11 = (iVar7 - iVar9);
	if (func_90(iParam0))
	{
		iVar12 = 100;
		switch (iParam0)
		{
			case 17:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 18:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 19:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 20:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 21:
				iVar7 = 26;
				iVar6 = 26;
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				iVar7 = 26;
				iVar6 = 26;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 17:
				iVar11 = 0;
				uVar13 = func_89(joaat("MPPLY_HEISTFLOWORDERPROGRESS"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 18:
				iVar11 = 0;
				uVar13 = func_89(joaat("MPPLY_HEISTTEAMPROGRESSBITSET"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 19:
				iVar11 = 0;
				uVar13 = func_89(joaat("MPPLY_HEISTNODEATHPROGREITSET"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 20:
				iVar11 = 0;
				uVar13 = func_89(joaat("MPPLY_HEIST_1STPERSON_PROG"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 21:
				iVar11 = 0;
				uVar13 = func_89(joaat("MPPLY_HEISTMEMBERPROGRESSBITSET"));
				bVar0 = false;
				while (bVar0 < 28)
				{
					if (BitTest(uVar13, bVar0))
					{
						iVar11++;
					}
					bVar0++;
				}
				if (BitTest(uVar13, 9))
				{
					iVar11 = (iVar11 - 1);
				}
				if (BitTest(uVar13, 26))
				{
					iVar11 = (iVar11 - 1);
				}
				if (iVar11 < 0)
				{
					iVar11 = 0;
				}
				iVar7 = iVar11;
				iVar6 = 26;
				iVar10 = 26;
				break;
			
			case 3:
			case 4:
			case 5:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				iVar10 = func_94(iParam0, iVar8, iParam2);
				iVar11 = func_91(iParam0, iVar1, iParam2);
				break;
		}
		iVar12 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar11) / SYSTEM::TO_FLOAT(iVar10)) * 100f));
	}
	func_65(sVar2, sVar3, sVar4, sVar5, iVar6, iVar7, iVar12, iParam1, uParam3, 168, 152);
}

int func_89(int iParam0)//Position - 0xA450
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

int func_90(int iParam0)//Position - 0xA46E
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = Global_1665484[iParam0];
	iVar1 = uVar0;
	if (STATS::STAT_GET_BOOL(iVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0xA496
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	if (func_90(iParam0))
	{
	}
	switch (iParam0)
	{
		case 3:
			return func_92(iParam0);
		
		case 4:
			return func_92(iParam0);
		
		case 5:
			return func_92(iParam0);
		
		case 7:
			return func_92(iParam0);
		
		case 8:
			return func_92(iParam0);
		
		case 9:
			return func_92(iParam0);
		
		case 10:
			return func_92(iParam0);
		
		case 11:
			return func_92(iParam0);
		
		default:
	}
	if (func_90(iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0)//Position - 0xA544
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	uVar1 = func_89(func_93(iParam0));
	bVar2 = false;
	while (bVar2 < 29)
	{
		if (BitTest(uVar1, bVar2))
		{
			iVar0++;
		}
		bVar2++;
	}
	return iVar0;
}

int func_93(int iParam0)//Position - 0xA57B
{
	switch (iParam0)
	{
		case 3:
			return joaat("MPPLY_GANGOPS_ALLINORDER");
		
		case 4:
			return joaat("MPPLY_GANGOPS_LOYALTY");
		
		case 7:
			return joaat("MPPLY_GANGOPS_LOYALTY2");
		
		case 8:
			return joaat("MPPLY_GANGOPS_LOYALTY3");
		
		case 5:
			return joaat("MPPLY_GANGOPS_CRIMMASMD");
		
		case 9:
			return joaat("MPPLY_GANGOPS_CRIMMASMD2");
		
		case 10:
			return joaat("MPPLY_GANGOPS_CRIMMASMD3");
		
		case 11:
			return joaat("MPPLY_GANGOPS_SUPPORT");
		
		default:
	}
	return joaat("MPPLY_GANGOPS_ALLINORDER");
}

int func_94(int iParam0, int iParam1, int iParam2)//Position - 0xA5FF
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	if (func_90(iParam0))
	{
	}
	switch (iParam0)
	{
		case 3:
			return func_95();
		
		case 4:
			return func_95();
		
		case 5:
			return func_95();
		
		case 7:
			return func_95();
		
		case 8:
			return func_95();
		
		case 9:
			return func_95();
		
		case 10:
			return func_95();
		
		case 11:
			return func_95();
		
		default:
	}
	return 1;
}

int func_95()//Position - 0xA68C
{
	return 29;
}

char* func_96(int iParam0, int iParam1)//Position - 0xA696
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "MpAwardHeists";
		
		case 13:
			return "MpAwardHeists";
		
		case 14:
			return "MpAwardHeists";
		
		case 15:
			return "MpAwardHeists";
		
		case 16:
			return "MpAwardHeists";
		
		case 17:
			return "MpAwardHeists";
		
		case 18:
			return "MpAwardHeists";
		
		case 19:
			return "MpAwardHeists";
		
		case 20:
			return "MPAwardHeists";
		
		case 21:
			return "MPAwardHeists";
		
		case 1:
			return "MPAwardHeists2";
		
		case 2:
			return "MPAwardHeists2";
		
		case 6:
			return "MPAwardHeists2";
		
		case 3:
			return "MPAwardHeists2";
		
		case 4:
			return "MPAwardHeists2";
		
		case 5:
			return "MPAwardHeists2";
		
		case 7:
			return "MPAwardHeists2";
		
		case 8:
			return "MPAwardHeists2";
		
		case 9:
			return "MPAwardHeists2";
		
		case 10:
			return "MPAwardHeists2";
		
		case 11:
			return "MPAwardHeists2";
		
		default:
	}
	return "MPAwardHeists";
}

char* func_97(int iParam0, int iParam1)//Position - 0xA7C1
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "HeadForHeists";
		
		case 13:
			return "GoToJail";
		
		case 14:
			return "LabReport";
		
		case 15:
			return "ProductPlacement";
		
		case 16:
			return "SmoothSailing";
		
		case 17:
			return "AllInOrder";
		
		case 18:
			return "Loyalty";
		
		case 19:
			return "CriminalMastermind";
		
		case 20:
			return "AnotherPerspective";
		
		case 21:
			return "SupportingRole";
		
		case 1:
			return "IAAFinale";
		
		case 2:
			return "SubmarineFinale";
		
		case 6:
			return "MissleSiloFinale";
		
		case 3:
			return "AllInOrderII";
		
		case 4:
			return "LoyaltyIV";
		
		case 5:
			return "CriminalMastermindIV";
		
		case 7:
			return "LoyaltyII";
		
		case 8:
			return "LoyaltyIII";
		
		case 9:
			return "CriminalMastermindII";
		
		case 10:
			return "CriminalMastermindIII";
		
		case 11:
			return "SupportingRoleII";
		
		default:
	}
	return "";
}

char* func_98(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA8EC
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (func_94(iParam0, iParam1, iParam2) == 1)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "AWS_775" /* GXT: Learn the ropes in this two man bank Heist. It will help prepare you for the bigger Heists that Lester may pass your way. Complete The Fleeca Job Heist Finale. */;
		
		case 13:
			return "AWS_767" /* GXT: Most Los Santos citizens plan to stay out of jail, but this Heist sends you straight to Bolingbroke Penitentiary. Complete The Prison Break Heist Finale. */;
		
		case 14:
			return "AWS_768" /* GXT: The research facility is heavily protected so you'll need some serious muscle to pull this off. Complete The Humane Labs Raid Heist Finale. */;
		
		case 15:
			return "AWS_776" /* GXT: This Heist is all about redistribution of assets and it looks like you'll need to get your hands dirty. Complete Series A Funding Heist Finale. */;
		
		case 16:
			return "AWS_780" /* GXT: Prove your ability to pull off the classic bank job. Crack the vault, grab the cash and get out of there. Complete The Pacific Standard Job Heist Finale. */;
		
		case 17:
			return "AWS_777" /* GXT: See all the Heists through from beginning to end and earn a handsome cash bonus. Complete all 5 Heists in order including all Setups and Finales. */;
		
		case 18:
			return "AWS_778" /* GXT: Trusting a stranger as back up on a Heist could go disastrously wrong. Find a loyal crew and pull off all 5 Heists back to back with the same team of players. */;
		
		case 19:
			return "AWS_779" /* GXT: Only professionals need apply. This is the ultimate challenge. Complete all 5 Heists in full on hard difficulty, in order, with the same team and without losing a single life. */;
		
		case 20:
			return "AWS_785" /* GXT: Complete all Heist setups and Finales in first person mode. The leader must lock the camera option to first person when setting up the Heist. */;
		
		case 21:
			return "AWS_786" /* GXT: Leave the logistics to the leader. Get your hands dirty and get paid for it. Complete all Heist Setups and Finales as a member. */;
		
		case 1:
			return "AWD_GANGOP0d" /* GXT: Complete Act I of The Doomsday Heist for the first time. */;
		
		case 2:
			return "AWD_GANGOP1d" /* GXT: Complete Act II of The Doomsday Heist for the first time. */;
		
		case 6:
			return "AWD_GANGOP2d" /* GXT: Complete Act III of The Doomsday Heist for the first time. */;
		
		case 3:
			return "AWD_GANGOP3d" /* GXT: Complete The Doomsday Heist in order. */;
		
		case 4:
			return "AWD_GANGOP7d" /* GXT: Complete The Doomsday Heist in order with the same team of 4 players. */;
		
		case 5:
			return "AWD_GANGOP9d" /* GXT: Complete The Doomsday Heist in order, with the same team of 4 players, on Hard difficulty, without losing any lives on Setups and Finales. */;
		
		case 7:
			return "AWD_GANGOP4d" /* GXT: Complete The Doomsday Heist in order with the same team of 2 players. */;
		
		case 8:
			return "AWD_GANGOP6d" /* GXT: Complete The Doomsday Heist in order with the same team of 3 players. */;
		
		case 9:
			return "AWD_GANGOP5d" /* GXT: Complete The Doomsday Heist in order, with the same team of 2 players, on Hard difficulty, without losing any lives on Setups and Finales. */;
		
		case 10:
			return "AWD_GANGOP8d" /* GXT: Complete The Doomsday Heist in order, with the same team of 3 players, on Hard difficulty, without losing any lives on Setups and Finales. */;
		
		case 11:
			return "AWD_GANGO10d" /* GXT: Complete all acts of The Doomsday Heist as a crew member, ending with completion of the Act III finale. */;
		
		default:
	}
	return "";
}

char* func_99(int iParam0, int iParam1, bool bParam2)//Position - 0xAA2A
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 12:
			return "AWT_775" /* GXT: Head For Heists */;
		
		case 13:
			return "AWT_767" /* GXT: Go To Jail */;
		
		case 14:
			return "AWT_768" /* GXT: Lab Report */;
		
		case 15:
			return "AWT_776" /* GXT: Product Placement */;
		
		case 16:
			return "AWT_780" /* GXT: Smooth Sailing */;
		
		case 17:
			return "AWT_777" /* GXT: All In Order */;
		
		case 18:
			return "AWT_778" /* GXT: Loyalty */;
		
		case 19:
			return "AWT_779" /* GXT: Criminal Mastermind */;
		
		case 20:
			return "AWT_785" /* GXT: Another Perspective */;
		
		case 21:
			return "AWT_786" /* GXT: Supporting Role */;
		
		case 1:
		case 2:
		case 6:
		case 3:
		case 4:
		case 5:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			return func_100(iParam0);
		
		default:
	}
	return "";
}

char* func_100(int iParam0)//Position - 0xAB16
{
	switch (iParam0)
	{
		case 1:
			return "AWD_GANGOPF0" /* GXT: Act I */;
		
		case 2:
			return "AWD_GANGOPF1" /* GXT: Act II */;
		
		case 6:
			return "AWD_GANGOPF2" /* GXT: Act III */;
		
		case 3:
			return "AWD_GANGOPA" /* GXT: All In Order II */;
		
		case 4:
			return "AWD_GANGOPL4" /* GXT: Loyalty IV */;
		
		case 7:
			return "AWD_GANGOPL2" /* GXT: Loyalty II */;
		
		case 8:
			return "AWD_GANGOPL3" /* GXT: Loyalty III */;
		
		case 5:
			return "AWD_GANGOPM4" /* GXT: Criminal Mastermind IV */;
		
		case 9:
			return "AWD_GANGOPM2" /* GXT: Criminal Mastermind II */;
		
		case 10:
			return "AWD_GANGOPM3" /* GXT: Criminal Mastermind III */;
		
		case 11:
			return "AWD_GANGOPSR" /* GXT: Supporting Role II */;
		
		default:
	}
	return "";
}

int func_101(int iParam0, int iParam1)//Position - 0xABB8
{
	if (iParam1 == 0)
	{
	}
	switch (iParam0)
	{
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 19:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 1;
		
		case 6:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		default:
	}
	return 0;
}

int func_102()//Position - 0xACA0
{
	return 5;
}

int func_103(int iParam0)//Position - 0xACA9
{
	if (func_90(iParam0))
	{
		return 5;
	}
	return 0;
}

void func_104(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xACBF
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_117(iParam0);
			break;
		
		case 7:
		case 8:
			iParam1 = func_116();
			break;
	}
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_115(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	iVar0 = func_116();
	sVar1 = func_114(iParam0, iParam2, 0);
	sVar2 = func_113(iParam0, iParam1, iParam2, 0);
	sVar3 = func_112(iParam0, iParam2);
	sVar4 = func_111(iParam0, iParam2);
	iVar5 = func_110(iParam0, iVar0, iParam2);
	if (func_108(iParam0, -1) == 1)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	iVar8 = func_71(iParam1);
	iVar9 = func_110(iParam0, iVar8, iParam2);
	iVar10 = (iVar5 - iVar9);
	iVar11 = (iVar6 - iVar9);
	switch (iParam0)
	{
		case 15:
			iVar6 = func_49(1153, -1);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		
		case 16:
			iVar6 = func_49(1152, -1);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		
		case 12:
			iVar6 = func_49(1088, -1);
			if (iVar6 > 25)
			{
				iVar6 = 25;
			}
			iVar10 = 25;
			iVar11 = iVar6;
			break;
		
		case 25:
			if (func_108(iParam0, -1))
			{
				iVar6 = func_49(2117, -1) * 7;
				iVar7 = func_49(2116, -1);
				iVar6 = 7;
				iVar10 = 7;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_49(2117, -1) * 7;
				iVar7 = func_49(2116, -1);
				iVar6 = (iVar6 + iVar7);
				if (iVar6 > 7)
				{
					iVar6 = 7;
				}
				iVar10 = 7;
				iVar11 = iVar6;
			}
			break;
		
		case 26:
			if (func_108(iParam0, -1))
			{
				iVar6 = func_49(2117, -1) * 7;
				iVar7 = func_49(2116, -1);
				iVar6 = 28;
				iVar10 = 28;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_49(2117, -1) * 7;
				iVar7 = func_49(2116, -1);
				iVar6 = (iVar6 + iVar7);
				if (iVar6 > 28)
				{
					iVar6 = 28;
				}
				iVar10 = 28;
				iVar11 = iVar6;
			}
			break;
		
		case 162:
			if (func_108(iParam0, -1))
			{
				iVar6 = 43;
				iVar10 = 43;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_106();
				iVar10 = 43;
				iVar11 = iVar6;
			}
			break;
		
		case 167:
			if (func_108(iParam0, -1))
			{
				iVar6 = 4;
				iVar10 = 4;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_49(7254, -1);
				iVar10 = 4;
				iVar11 = iVar6;
			}
			break;
		
		case 166:
			if (func_108(iParam0, -1))
			{
				iVar6 = 100;
				iVar10 = 100;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_49(7238, -1);
				iVar10 = 100;
				iVar11 = iVar6;
			}
			break;
		
		case 59:
			if (func_108(iParam0, -1))
			{
				iVar6 = 6;
				iVar10 = 6;
				iVar11 = iVar6;
			}
			else
			{
				iVar6 = func_105();
				iVar10 = 6;
				iVar11 = iVar6;
			}
			break;
	}
	if (func_108(iParam0, -1))
	{
		iVar12 = 100;
	}
	else
	{
		iVar12 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar11) / SYSTEM::TO_FLOAT(iVar10)) * 100f));
	}
	func_65(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar12, iParam1, uParam3, iParam0, 152);
}

int func_105()//Position - 0xB015
{
	int iVar0;
	
	iVar0 = func_49(8283, -1);
	if (BitTest(iVar0, 19))
	{
		return 6;
	}
	else if (BitTest(iVar0, 4))
	{
		return 5;
	}
	else if (BitTest(iVar0, 3))
	{
		return 4;
	}
	else if (BitTest(iVar0, 2))
	{
		return 3;
	}
	else if (BitTest(iVar0, 1))
	{
		return 2;
	}
	else if (BitTest(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_106()//Position - 0xB07A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_107(iVar0) != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_107(int iParam0)//Position - 0xB0A7
{
	switch (iParam0)
	{
		case default:
			break;
		
		case 0:
			return func_49(12176, -1);
		
		case 1:
			return func_49(12177, -1);
		
		case 2:
			return func_49(12178, -1);
		
		case 3:
			return func_49(12179, -1);
		
		case 4:
			return func_49(12180, -1);
		
		case 5:
			return func_49(12181, -1);
		
		case 6:
			return func_49(12182, -1);
		
		case 7:
			return func_49(12183, -1);
		
		case 8:
			return func_49(12184, -1);
		
		case 9:
			return func_49(12185, -1);
		
		case 10:
			return func_49(12186, -1);
		
		case 11:
			return func_49(12187, -1);
		
		case 12:
			return func_49(12188, -1);
		
		case 13:
			return func_49(12189, -1);
		
		case 14:
			return func_49(12190, -1);
		
		case 15:
			return func_49(12191, -1);
		
		case 16:
			return func_49(12192, -1);
		
		case 17:
			return func_49(12193, -1);
		
		case 18:
			return func_49(12194, -1);
		
		case 19:
			return func_49(12195, -1);
		
		case 20:
			return func_49(12196, -1);
		
		case 21:
			return func_49(12197, -1);
		
		case 22:
			return func_49(12198, -1);
		
		case 23:
			return func_49(12199, -1);
		
		case 24:
			return func_49(12200, -1);
		
		case 25:
			return func_49(12201, -1);
		
		case 26:
			return func_49(12202, -1);
		
		case 27:
			return func_49(12203, -1);
		
		case 28:
			return func_49(12204, -1);
		
		case 29:
			return func_49(12205, -1);
		
		case 30:
			return func_49(12206, -1);
		
		case 31:
			return func_49(12207, -1);
		
		case 32:
			return func_49(12208, -1);
		
		case 33:
			return func_49(12209, -1);
		
		case 34:
			return func_49(12210, -1);
		
		case 35:
			return func_49(12211, -1);
		
		case 36:
			return func_49(12212, -1);
		
		case 37:
			return func_49(12213, -1);
		
		case 38:
			return func_49(12214, -1);
		
		case 39:
			return func_49(12215, -1);
		
		case 40:
			return func_49(12216, -1);
		
		case 41:
			return func_49(12217, -1);
		
		case 42:
			return func_49(12218, -1);
		
		case 43:
			return func_49(12219, -1);
		
		case 44:
			return func_49(12220, -1);
		
		case 45:
			return func_49(12221, -1);
		
		case 46:
			return func_49(12222, -1);
		
		case 47:
			return func_49(12223, -1);
		
		case 48:
			return func_49(12224, -1);
		
		case 49:
			return func_49(12225, -1);
	}
	return 0;
}

int func_108(int iParam0, int iParam1)//Position - 0xB40C
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_109(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_109(int iParam0, var uParam1)//Position - 0xB430
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(10, iParam0, func_47(uParam1));
}

int func_110(int iParam0, int iParam1, int iParam2)//Position - 0xB446
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 0)
	{
	}
	switch (iParam0)
	{
		case 15:
			return 25;
			break;
		
		case 16:
			return 25;
			break;
		
		case 12:
			return 25;
			break;
		
		case 25:
			return 7;
			break;
		
		case 26:
			return 28;
			break;
		
		case 162:
			return 43;
			break;
		
		case 167:
			return 4;
			break;
		
		case 166:
			return 100;
			break;
		
		case 59:
			return 6;
			break;
	}
	return 1;
}

char* func_111(int iParam0, int iParam1)//Position - 0xB4DD
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "MPAwards2";
		
		case 2:
			return "MPAwards5";
		
		case 3:
			return "MPAwards5";
		
		case 4:
			return "MPAwards5";
		
		case 5:
			return "MPAwards5";
		
		case 6:
			return "MPAwards5";
		
		case 7:
			return "MPAwards5";
		
		case 8:
			return "MPAwards5";
		
		case 10:
			return "MPAwards5";
		
		case 11:
			return "MPAwards5";
		
		case 12:
			return "MPAwards5";
		
		case 13:
			return "MPAwards5";
		
		case 14:
			return "MPAwards5";
		
		case 15:
			return "MPAwards5";
		
		case 16:
			return "MPAwards5";
		
		case 17:
			return "MPAwards5";
		
		case 18:
			return "MPAwards5";
		
		case 20:
			return "MPAwards5";
		
		case 21:
			return "MPAwards5";
		
		case 22:
			return "MPAWARDS5";
		
		case 23:
			return "MPAwards4";
		
		case 25:
			return "MPAwardHeists";
		
		case 26:
			return "MPAwardHeists";
		
		case 27:
			return "MPAWARDS6";
		
		case 160:
			return "MPAwardHeists";
		
		case 159:
			return "MPAwardHeists";
		
		case 162:
			return "MPAwardHeists";
		
		case 163:
			return "MPAwardHeists";
		
		case 164:
			return "MPAwardHeists";
		
		case 165:
			return "MPAwardNightclub";
		
		case 166:
			return "MPAwardNightclub";
		
		case 167:
			return "MPAwardNightclub";
		
		case 30:
			return "MPAwardsArena";
		
		case 31:
			return "MPAwardsArena";
		
		case 32:
			return "MPAwardsArena";
		
		case 33:
			return "MPAwardsArena";
		
		case 34:
			return "MPAwardsArena";
		
		case 35:
			return "MPAwardsArena";
		
		case 36:
			return "MPAwardsArena";
		
		case 37:
			return "MPAwardsArena";
		
		case 38:
			return "MPAwardsArena";
		
		case 39:
			return "MPAwardsArena";
		
		case 40:
			return "MPAwardsArena";
		
		case 41:
			return "MPAwardsArena";
		
		case 42:
			return "MPAwardsArena";
		
		case 43:
			return "MPAwardsArena";
		
		case 44:
			return "MPAwardsArena";
		
		case 45:
			return "MPAwardsArena";
		
		case 46:
			return "MPAwardsArena";
		
		case 47:
			return "MPAwardsArena";
		
		case 48:
			return "MPAwardsArena";
		
		case 49:
			return "MPAwardsArena";
		
		case 50:
			return "MPAwardsArena";
		
		case 51:
			return "MPAwardsArena";
		
		case 52:
			return "MPAwardsArena";
		
		case 53:
			return "MPAwardCasino";
		
		case 54:
			return "MPAwardCasino";
		
		case 55:
			return "MPAwardCasino";
		
		case 56:
			return "MPAwardCasino";
		
		case 57:
			return "MPAwardCasino";
		
		case 58:
			return "MPAwardCasino";
		
		case 59:
			return "MPAwardCasino";
		
		case 62:
			return "MPAwardCasino";
		
		case 60:
			return "MPAwardCasino";
		
		case 61:
			return "MPAwardCasino";
		
		case 63:
			return "MPAwardCasinoHeist";
		
		case 64:
			return "MPAwardCasinoHeist";
		
		case 65:
			return "MPAwardCasinoHeist";
		
		case 66:
			return "MPAwardCasinoHeist";
		
		case 67:
			return "MPAwardCasinoHeist";
		
		case 68:
			return "MPAwardCasinoHeist";
		
		case 69:
			return "MPAwardCasinoHeist";
		
		case 70:
			return "MPAwardCasinoHeist";
		
		case 71:
			return "MPAwardCasinoHeist";
		
		case 72:
			return "MPAwardCasinoHeist";
		
		case 73:
			return "MPAwardCasinoHeist";
		
		case 74:
			return "MPAwardCasinoHeist";
		
		case 75:
			return "MPAwardCasinoHeist";
		
		case 76:
			return "MPAwardCasinoHeist";
		
		case 77:
			return "MPAwardCasinoHeist";
		
		case 78:
			return "MPAwardCasinoHeist";
		
		case 79:
			return "MPAwardCasinoHeist";
		
		case 80:
			return "MPAwardCasinoHeist";
		
		case 81:
			return "MPAwardCasinoHeist";
		
		case 82:
			return "MPAwardCasinoHeist";
		
		case 83:
			return "MPAwardCasinoHeist";
		
		case 84:
			return "MPAwardCasinoHeist";
		
		case 85:
			return "MPAwardCasinoHeist";
		
		case 86:
			return "MPAwardCasinoHeist";
		
		case 87:
			return "MPAwardCasinoHeist";
		
		case 88:
			return "MPAwardCasinoHeist";
		
		case 89:
			return "MPAwardSummer2020";
		
		case 90:
			return "MPAwardSummer2020";
		
		case 93:
			return "MPAwardSummer2020";
		
		case 92:
			return "MPAwardSummer2020";
		
		case 91:
			return "MPAwardSummer2020";
		
		case 94:
			return "MPAwardSummer2020";
		
		case 95:
			return "MPAwardIslandHeist";
		
		case 96:
			return "MPAwardIslandHeist";
		
		case 97:
			return "MPAwardIslandHeist";
		
		case 98:
			return "MPAwardIslandHeist";
		
		case 99:
			return "MPAwardIslandHeist";
		
		case 100:
			return "MPAwardIslandHeist";
		
		case 101:
			return "MPAwardIslandHeist";
		
		case 102:
			return "MPAwardIslandHeist";
		
		case 103:
			return "MPAwardIslandHeist";
		
		case 104:
			return "MPAwardIslandHeist";
		
		case 105:
			return "MPAwardIslandHeist";
		
		case 106:
			return "MPAwardIslandHeist";
		
		case 107:
			return "MPAwardIslandHeist";
		
		case 108:
			return "MPAwardIslandHeist";
		
		case 109:
			return "MPAwardIslandHeist";
		
		case 110:
			return "MPAwardIslandHeist";
		
		case 111:
			return "MPAwardIslandHeist";
		
		case 112:
			return "MPAwardIslandHeist";
		
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return "MPAwardTunerPack";
			break;
		
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
			return "MPAwardsFixer";
			break;
		
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			return "MPAwardXmas2022";
			break;
	}
	return "";
}

char* func_112(int iParam0, int iParam1)//Position - 0xBBEC
{
	if (iParam1 == 9)
	{
		iParam1 = 9;
	}
	switch (iParam0)
	{
		case 0:
			return "Buyeverygun";
		
		case 2:
			return "HoleInOne";
		
		case 3:
			return "TargetGridGranny";
		
		case 4:
			return "TennisFiveSets";
		
		case 5:
			return "TennisStraightSets";
		
		case 6:
			return "ClearAllGangHideouts";
		
		case 7:
			return "SixDartCheckout";
		
		case 8:
			return "WinEveryGameModeOnce";
		
		case 10:
			return "WinEveryTypeOfRace";
		
		case 11:
			return "HoldaRaceWorldRecord";
		
		case 12:
			return "Wear25DifferentItemsOfClothing";
		
		case 13:
			return "FullyModACar";
		
		case 14:
			return "WinACustomClassRace";
		
		case 15:
			return "Play25DifferentDeathmatches";
		
		case 16:
			return "Play25DifferentRaces";
		
		case 17:
			return "MostKillsInGangAttack";
		
		case 18:
			return "MostKillsInSurvival";
		
		case 20:
			return "Kill3InARaceAndWin";
		
		case 21:
			return "GetATattooOnEachBodyPart";
		
		case 22:
			return "10KillStreakDeathmatch";
		
		case 23:
			return "Unirider";
		
		case 25:
			return "goaloriented";
		
		case 26:
			return "overachiever";
		
		case 27:
			return "joyrider";
		
		case 160:
			return "CantTouchThis";
		
		case 159:
			return "FairPlay";
		
		case 162:
			return "JackOfAllTrades";
		
		case 163:
			return "ItTakesTwo";
		
		case 164:
			return "Showroom";
		
		case 165:
			return "Coordinated";
		
		case 166:
			return "HotSpot";
		
		case 167:
			return "Clubber";
		
		case 30:
			return "BEGINNER";
		
		case 31:
			return "FIELDFILLER";
		
		case 32:
			return "ArmchairRracer";
		
		case 33:
			return "LEARNER";
		
		case 34:
			return "SUNDAYDRIVER";
		
		case 35:
			return "THEROOKIE";
		
		case 36:
			return "BUMPANDRUN";
		
		case 37:
			return "GEARHEAD";
		
		case 38:
			return "DOORSLAMMER";
		
		case 39:
			return "HOTLAP";
		
		case 40:
			return "ARENAAMATEUR";
		
		case 41:
			return "PAINTTRADER";
		
		case 42:
			return "SHUNTER";
		
		case 43:
			return "JOCK";
		
		case 44:
			return "WARRIOR";
		
		case 45:
			return "TBONE";
		
		case 46:
			return "MAYHEM";
		
		case 47:
			return "WRECKER";
		
		case 48:
			return "CRASHCOURSE";
		
		case 49:
			return "ARENALEGEND";
		
		case 50:
			return "PEGASUS";
		
		case 51:
			return "contactsport";
		
		case 52:
			return "UNSTOPPABLE";
		
		case 53:
			return "LooseCheng";
		
		case 54:
			return "HouseKeeping";
		
		case 55:
			return "StrongArmTactics";
		
		case 56:
			return "PlayToWin";
		
		case 57:
			return "BadBeat";
		
		case 58:
			return "CashingOut";
		
		case 59:
			return "StraightFlush";
		
		case 62:
			return "LuckyLucky";
		
		case 60:
			return "TopPair";
		
		case 61:
			return "FullHouse";
		
		case 63:
			return "SCOPEOUT";
		
		case 64:
			return "ALLCREWEDUP";
		
		case 65:
			return "MOVINGON";
		
		case 66:
			return "AfterParty";
		
		case 67:
			return "GUNMAN";
		
		case 68:
			return "SmashAndGrab";
		
		case 69:
			return "HiddenInPlainSight";
		
		case 70:
			return "Undetected";
		
		case 71:
			return "AllRounder";
		
		case 72:
			return "EliteThief";
		
		case 73:
			return "Professional";
		
		case 74:
			return "SupportAct";
		
		case 75:
			return "Shafted";
		
		case 76:
			return "Collector";
		
		case 77:
			return "Deadeye";
		
		case 78:
			return "PistolAtDawn";
		
		case 79:
			return "BeatTheTraffic";
		
		case 80:
			return "AllWheels";
		
		case 81:
			return "FEELINGROGGY";
		
		case 82:
			return "ApeEscape";
		
		case 83:
			return "MonkeyMind";
		
		case 84:
			return "AquaticApe";
		
		case 85:
			return "KeepingTheFaith";
		
		case 86:
			return "TrueLove";
		
		case 87:
			return "Nemesis" /* GXT: Nemesis */;
		
		case 88:
			return "Friendzoned";
		
		case 89:
			return "KingOfQub3d";
		
		case 90:
			return "Qubism";
		
		case 93:
			return "CrankItTo11";
		
		case 92:
			return "GodofQub3d";
		
		case 91:
			return "Qubits";
		
		case 94:
			return "1111";
		
		case 95:
			return "Inandout";
		
		case 96:
			return "EasyAccess";
		
		case 97:
			return "ItsaSteal";
		
		case 98:
			return "MaximumDistruption";
		
		case 99:
			return "TheIslandHeist";
		
		case 100:
			return "GoingAlone";
		
		case 101:
			return "Teamwork";
		
		case 102:
			return "TravelPlans";
		
		case 103:
			return "ProfessionalThief";
		
		case 104:
			return "CatBurglar";
		
		case 105:
			return "OneOfThem";
		
		case 106:
			return "GoforGold";
		
		case 107:
			return "Elitist";
		
		case 108:
			return "Blowhard";
		
		case 109:
			return "HelpingOut";
		
		case 110:
			return "Courier";
		
		case 111:
			return "PartyVibes";
		
		case 112:
			return "HelpingHand";
		
		case 113:
			return "LSCarMeet";
		
		case 114:
			return "ProCarExporter";
		
		case 115:
			return "TheUnionDepositoryContract";
		
		case 116:
			return "TheSuperdollarDeal";
		
		case 117:
			return "TheBankContract";
		
		case 118:
			return "TheECUJob";
		
		case 119:
			return "ThePrisionContract";
		
		case 120:
			return "TheAgencyDeal";
		
		case 121:
			return "TheLostContract";
		
		case 122:
			return "TheDataContract";
		
		case 123:
			return "StraighttoVideo";
		
		case 124:
			return "MonkeyseeMonkeydo";
		
		case 125:
			return "Trainedtokill";
		
		case 126:
			return "TheDirector";
		
		case 127:
			return "OnCourse";
		
		case 128:
			return "TheNighClubLeak";
		
		case 129:
			return "TheCountryClubLeak";
		
		case 130:
			return "TheSouthCentralLeak";
		
		case 131:
			return "StudioTime";
		
		case 132:
			return "DontFuckWithDre";
		
		case 133:
			return "Backup";
		
		case 134:
			return "SeedCapitalFranklin";
		
		case 135:
			return "FireitUpFranklin";
		
		case 136:
			return "OGKushFranklin";
		
		case 137:
			return "ContractKiller";
		
		case 138:
			return "ADogsBestFriend";
		
		case 139:
			return "SoundCheck";
		
		case 140:
			return "SeedCapitaLamar";
		
		case 141:
			return "FireItUpLamar";
		
		case 142:
			return "OGKushLamar";
		
		case 143:
			return "WelcomeToTheTroupe";
		
		case 144:
			return "DesignatedDriver";
		
		case 145:
			return "FatalIncursion";
		
		case 146:
			return "UncontrolledSubstance";
		
		case 147:
			return "MakeWarNotLove";
		
		case 148:
			return "OffTheRails";
		
		case 149:
			return "BackItUp";
		
		case 150:
			return "LickMyAcid";
		
		case 151:
			return "ChemicalReaction";
		
		case 152:
			return "ThisIsAnIntervention";
		
		case 153:
			return "UnusualSuspects";
		
		case 154:
			return "Friedmind";
		
		case 155:
			return "CheckingIn";
		
		case 156:
			return "BDKD";
		
		case 157:
			return "BackItUp2";
		
		case 158:
			return "5StarRide";
			break;
	}
	return "";
}

char* func_113(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xC43C
{
	if (iParam2 == 9)
	{
	}
	if (bParam3)
	{
	}
	if (iParam1 == 5)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWS_521";
		
		case 2:
			return "AWS_660";
		
		case 3:
			return "AWS_667";
		
		case 4:
			return "AWS_670";
		
		case 5:
			return "AWS_671";
		
		case 6:
			return "AWS_691";
		
		case 7:
			return "AWS_697";
		
		case 8:
			return "AWS_701";
		
		case 10:
			return "AWS_705";
		
		case 11:
			return "AWS_706";
		
		case 12:
			return "AWS_709";
		
		case 13:
			return "AWS_711";
		
		case 14:
			return "AWS_712";
		
		case 15:
			return "AWS_714";
		
		case 16:
			return "AWS_715";
		
		case 17:
			return "AWS_718";
		
		case 18:
			return "AWS_719";
		
		case 20:
			return "AWS_725";
		
		case 21:
			return "AWS_727";
		
		case 22:
			return "AWS_717";
		
		case 23:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_729_M";
			}
			else
			{
				return "AWS_729";
			}
			break;
		
		case 25:
			return "AWS_783";
		
		case 26:
			return "AWS_784";
		
		case 27:
			return "AWS_771";
		
		case 160:
			return "AWS_751" /* GXT: Take your time and complete a Heist Finale without taking any damage. Be cautious but don't be a coward, your team still need you. */;
		
		case 164:
			return "AWS_763" /* GXT: Every car enthusiast would love to have 30 modded rides at their fingertips. Fill out three of the large Garages that Los Santos has to offer. */;
		
		case 159:
			return "AWS_754" /* GXT: Good karma may come your way if you share more of your profits with your Heist crew members. Split a Finale take evenly between 4 players. */;
		
		case 162:
			return "AWS_765" /* GXT: Versatility is the key. Perform every possible role in The Prison Break, The Humane Labs Raid, Series A Funding and The Pacific Standard Job Heists. */;
		
		case 163:
			return "AWS_756" /* GXT: You can't do this alone. Activate a two person key switch. */;
		
		case 165:
			return "AWS_793";
		
		case 166:
			return "AWS_794";
		
		case 167:
			return "AWS_795";
		
		case 30:
			return "AWS_796";
		
		case 31:
			return "AWS_797";
		
		case 32:
			return "AWS_798";
		
		case 33:
			return "AWS_799";
		
		case 34:
			return "AWS_800";
		
		case 35:
			return "AWS_801";
		
		case 36:
			return "AWS_802";
		
		case 37:
			return "AWS_803";
		
		case 38:
			return "AWS_804";
		
		case 39:
			return "AWS_805";
		
		case 40:
			return "AWS_806";
		
		case 41:
			return "AWS_807";
		
		case 42:
			return "AWS_808";
		
		case 43:
			return "AWS_809";
		
		case 44:
			return "AWS_810";
		
		case 45:
			return "AWS_811";
		
		case 46:
			return "AWS_812";
		
		case 47:
			return "AWS_813";
		
		case 48:
			return "AWS_814";
		
		case 49:
			return "AWS_815";
		
		case 50:
			return "AWS_816";
		
		case 51:
			return "AWS_819";
		
		case 52:
			return "AWS_820";
		
		case 53:
			return "AWS_836" /* GXT: Complete Loose Cheng for the first time and earn $50,000. */;
		
		case 54:
			return "AWS_837" /* GXT: Complete House Keeping for the first time and earn $50,000. */;
		
		case 55:
			return "AWS_838" /* GXT: Complete Strong Arm Tactics for the first time and earn $50,000. */;
		
		case 56:
			return "AWS_839" /* GXT: Complete Play to Win for the first time and earn $50,000. */;
		
		case 57:
			return "AWS_840" /* GXT: Complete Bad Beat for the first time and earn $50,000. */;
		
		case 58:
			return "AWS_841" /* GXT: Complete Cashing Out for the first time and earn $100,000. */;
		
		case 59:
			return "AWS_842" /* GXT: Complete all Casino Story Missions in order and earn $500,000. */;
		
		case 62:
			return "AWS_846" /* GXT: Complete a Casino Story Mission without losing a life and earn $50,000. */;
		
		case 60:
			return "AWS_843" /* GXT: Complete all Casino Story Missions as a Crew member and earn $100,000. */;
		
		case 61:
			return "AWS_844" /* GXT: Complete all Casino Story Missions as Leader to earn $100,000 and a bonus item. */;
		
		case 63:
			return "AWS_857" /* GXT: Scope all entrances and exits for The Diamond Casino Heist. */;
		
		case 64:
			return "AWS_858" /* GXT: Unlock all possible crew members for The Diamond Casino Heist. */;
		
		case 65:
			return "AWS_859" /* GXT: Stop a mall cop being fired again during The Diamond Casino Heist. */;
		
		case 66:
			return "AWS_860" /* GXT: Use someone famous to get into the Casino back area. */;
		
		case 67:
			return "AWS_861" /* GXT: Find and help break out an old accomplice for The Diamond Casino Heist. */;
		
		case 68:
			return "AWS_862" /* GXT: Complete the Aggressive approach to The Diamond Casino Heist and earn $100000. */;
		
		case 69:
			return "AWS_863" /* GXT: Complete The Big Con approach to The Diamond Casino Heist without breaking your disguise inside the Casino and earn $150000. */;
		
		case 70:
			return "AWS_864" /* GXT: Complete the Silent & Sneaky approach to The Diamond Casino Heist without ever being detected and earn $200000. */;
		
		case 71:
			return "AWS_865" /* GXT: Complete the Aggressive, The Big Con and Silent & Sneaky approaches to The Diamond Casino Heist and earn $300000. */;
		
		case 72:
			return "AWS_866" /* GXT: Complete the elite challenges for the Aggressive, The Big Con and Silent & Sneaky approaches to The Diamond Casino Heist and earn $350000. */;
		
		case 73:
			return "AWS_867" /* GXT: Complete The Diamond Casino Heist on Hard and without losing a life and earn $250,000. */;
		
		case 74:
			return "AWS_868" /* GXT: Complete The Diamond Casino Heist as a crew member. */;
		
		case 75:
			return "AWS_869" /* GXT: Use the elevator shaft to reach the staff lobby during The Diamond Casino Heist. */;
		
		case 76:
			return "AWS_870" /* GXT: Steal all variations of loot from the vault during The Diamond Casino Heist. */;
		
		case 77:
			return "AWS_871" /* GXT: Get over 90% accuracy for an entire playthrough of Badlands Revenge II. */;
		
		case 78:
			return "AWS_872" /* GXT: Complete Badlands Revenge II using only pistols. */;
		
		case 79:
			return "AWS_873" /* GXT: Complete the full race without crashing in Race And Chase. */;
		
		case 80:
			return "AWS_874" /* GXT: Complete Race And Chase with all vehicle types. */;
		
		case 81:
			return "AWS_875" /* GXT: Complete The Wizard's Ruin adventure as Grog. */;
		
		case 82:
			return "AWS_876" /* GXT: Survive any stage without taking any damage in Space Monkey 3: Bananas Gone Bad. */;
		
		case 83:
			return "AWS_877" /* GXT: Complete Space Monkey 3: Bananas Gone Bad without the use of any powerups or pickups. */;
		
		case 84:
			return "AWS_878" /* GXT: Complete the underwater level in Monkey Paradise. */;
		
		case 85:
			return "AWS_879" /* GXT: Complete a level of Defender of the Faith by only pressing right. */;
		
		case 86:
			return "AWS_880" /* GXT: Get a true love rating on The Love Professor. */;
		
		case 87:
			return "AWS_881" /* GXT: Find your nemesis using The Love Professor Cabinet. */;
		
		case 88:
			return "AWS_882" /* GXT: The friendzone doesn't exist but perhaps you can find yourself in it using The Love Professor. */;
		
		case 89:
			return "AWS_886" /* GXT: Get first place on the QUB3D leaderboard. */;
		
		case 90:
			return "AWS_887" /* GXT: Reach level 20 in QUB3D without using special abilities. */;
		
		case 93:
			return "AWS_888" /* GXT: Get the highest score in Axe of Fury. */;
		
		case 92:
			return "AWS_889" /* GXT: Get a score of 19000 in a single play of QUB3D. */;
		
		case 91:
			return "AWS_890" /* GXT: Reach level 20 without removing any blocks from play. */;
		
		case 94:
			return "AWS_891" /* GXT: Get the highest score in Axe of Fury 11 times. */;
		
		case 95:
			return "AWS_917" /* GXT: Scope out all infiltration and escape points on Cayo Perico. */;
		
		case 96:
			return "AWS_918" /* GXT: Scope out all entry points into El Rubio's compound on Cayo Perico. */;
		
		case 97:
			return "AWS_919" /* GXT: Scope out all the secondary target locations in a single playthrough of The Cayo Perico Heist. */;
		
		case 98:
			return "AWS_920" /* GXT: Complete all three disruption prep missions in a single playthrough of The Cayo Perico Heist. */;
		
		case 99:
			return "AWS_921" /* GXT: Complete The Cayo Perico Heist for the first time to earn $200,000. */;
		
		case 100:
			return "AWS_922" /* GXT: Complete The Cayo Perico Heist with one player to earn $100,000. */;
		
		case 101:
			return "AWS_923" /* GXT: Complete The Cayo Perico Heist with four players to earn $100,000. */;
		
		case 102:
			return "AWS_924" /* GXT: Approach The Cayo Perico Heist using all of the different vehicles to earn $250,000. */;
		
		case 103:
			return "AWS_925" /* GXT: Steal all variations of the primary target during The Cayo Perico Heist to earn $150,000. */;
		
		case 104:
			return "AWS_926" /* GXT: Complete The Cayo Perico Heist without ever alerting the guards to earn $200,000. */;
		
		case 105:
			return "AWS_927" /* GXT: Enter the compound using a stolen disguise during The Cayo Perico Heist. */;
		
		case 106:
			return "AWS_928" /* GXT: Steal El Rubio's prized weapon during The Cayo Perico Heist. */;
		
		case 107:
			return "AWS_929" /* GXT: Complete the elite challenge for The Cayo Perico Heist to earn $200,000. */;
		
		case 108:
			return "AWS_930" /* GXT: Complete The Cayo Perico Heist on Hard and without losing a life to earn $200,000. */;
		
		case 109:
			return "AWS_931" /* GXT: Complete all Palms Trax requests sent by Tom Connors. */;
		
		case 110:
			return "AWS_932" /* GXT: Complete all Keinemusik's requests sent by English Dave. */;
		
		case 111:
			return "AWS_933" /* GXT: Revisit the Cayo Perico beach party after completing The Cayo Perico Heist. */;
		
		case 112:
			return "AWS_934" /* GXT: Complete all Moodymann's requests sent by Tom Connors. */;
		
		case 113:
			return "AWS_944" /* GXT: Visit The LS Car Meet for the first time. */;
		
		case 114:
			return "AWS_951" /* GXT: Deliver all 10 Exotic Exports Vehicles to the Docks in a single day. */;
		
		case 115:
			return "AWS_953" /* GXT: Complete The Union Depository Contract as leader to earn $75,000. */;
		
		case 116:
			return "AWS_954" /* GXT: Complete The Superdollar Deal as leader to earn $75,000. */;
		
		case 117:
			return "AWS_955" /* GXT: Complete The Bank Contract as leader to earn $75,000. */;
		
		case 118:
			return "AWS_956" /* GXT: Complete The E.C.U. Job as leader to earn $75,000. */;
		
		case 119:
			return "AWS_957" /* GXT: Complete The Prison Contract as leader to earn $75,000. */;
		
		case 120:
			return "AWS_958" /* GXT: Complete The Agency Deal as leader to earn $75,000. */;
		
		case 121:
			return "AWS_959" /* GXT: Complete The Lost Contract as leader to earn $75,000. */;
		
		case 122:
			return "AWS_960" /* GXT: Complete The Data Contract as leader to earn $75,000. */;
		
		case 123:
			return "AWS_963" /* GXT: Complete all levels using only the pistol in Camhedz. */;
		
		case 124:
			return "AWS_964" /* GXT: Kill all costumed weirdos across all scenes in Camhedz. */;
		
		case 125:
			return "AWS_965" /* GXT: Get an average of 60% accuracy across all scenes in Camhedz. */;
		
		case 126:
			return "AWS_966" /* GXT: Get a 5-star rating on each of the scenes in Camhedz. */;
		
		case 127:
			return "AWS_968" /* GXT: Meet Dr. Dre at the Los Santos Golf Club as leader to earn $50,000. */;
		
		case 128:
			return "AWS_969" /* GXT: Locate this copy of Dr. Dre's stolen music as leader to earn $100,000. */;
		
		case 129:
			return "AWS_970" /* GXT: Locate this copy of Dr. Dre's stolen music as leader to earn $100,000. */;
		
		case 130:
			return "AWS_971" /* GXT: Locate this copy of Dr. Dre's stolen music as leader to earn $100,000. */;
		
		case 131:
			return "AWS_972" /* GXT: Help Dr. Dre at Record A Studios as leader to earn $100,000. */;
		
		case 132:
			return "AWS_973" /* GXT: Track down the thief who stole Dr. Dre's music as leader to earn $250,000. */;
		
		case 133:
			return "AWS_974" /* GXT: Complete all of Dr. Dre's Story missions as a member of an Organization or Motorcycle Club to earn $100,000. */;
		
		case 134:
			return "AWS_975" /* GXT: Complete Seed Capital as Franklin to earn $100,000. */;
		
		case 135:
			return "AWS_977" /* GXT: Complete Fire It Up as Franklin to earn $100,000. */;
		
		case 136:
			return "AWS_984" /* GXT: Complete OG Kush as Franklin to earn $100,000. */;
		
		case 137:
			return "AWS_980" /* GXT: Complete every Payphone Hit with the Assassination Bonus. */;
		
		case 138:
			return "AWS_981" /* GXT: Pet Chop. */;
		
		case 139:
			return "AWS_982" /* GXT: Visit Record A Studios. */;
		
		case 140:
			return "AWS_976" /* GXT: Complete Seed Capital as Lamar to earn $100,000. */;
		
		case 141:
			return "AWS_986" /* GXT: Complete Fire It Up as Lamar to earn $100,000. */;
		
		case 142:
			return "AWS_985" /* GXT: Complete OG Kush as Lamar to earn $100,000. */;
		
		case 143:
			return "AWS_1010" /* GXT: Complete First Dose - Welcome to the Troupe as leader to earn $50,000. */;
		
		case 144:
			return "AWS_987" /* GXT: Complete First Dose - Designated Driver as leader to earn $50,000. */;
		
		case 145:
			return "AWS_988" /* GXT: Complete First Dose - Fatal Incursion as leader to earn $50,000. */;
		
		case 146:
			return "AWS_989" /* GXT: Complete First Dose - Uncontrolled Substance as leader to earn $50,000. */;
		
		case 147:
			return "AWS_990" /* GXT: Complete First Dose - Make War not Love as leader to earn $50,000. */;
		
		case 148:
			return "AWS_991" /* GXT: Complete First Dose - Off the Rails as leader to earn $250,000. */;
		
		case 149:
			return "AWS_992" /* GXT: Complete all of the missions in the First Dose as a member of an Organization or Motorcycle Club to earn $100,000. */;
		
		case 150:
			return "AWS_993" /* GXT: Set up your own Acid Lab. */;
		
		case 151:
			return "AWS_994" /* GXT: Boost the production speed inside your Acid Lab. */;
		
		case 152:
			return "AWS_995" /* GXT: Complete Last Dose - This is an Intervention as leader to earn $100,000. */;
		
		case 153:
			return "AWS_996" /* GXT: Complete Last Dose - Unusual Suspects as leader to earn $100,000. */;
		
		case 154:
			return "AWS_997" /* GXT: Complete Last Dose - FriedMind as leader to earn $100,000. */;
		
		case 155:
			return "AWS_998" /* GXT: Complete Last Dose - Checking In as leader to earn $100,000. */;
		
		case 156:
			return "AWS_999" /* GXT: Complete Last Dose - BDKD as leader to earn $100,000. */;
		
		case 157:
			return "AWS_1000" /* GXT: Complete all of the missions in the Last Dose as a member of an Organization or Motorcycle Club to earn $100,000. */;
		
		case 158:
			return "AWS_1001" /* GXT: Complete 10 fares in a row during Taxi Work. */;
	}
	return "";
}

char* func_114(int iParam0, int iParam1, bool bParam2)//Position - 0xCCA2
{
	if (bParam2)
	{
	}
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "AWT_521";
		
		case 2:
			return "AWT_660";
		
		case 3:
			return "AWT_667";
		
		case 4:
			return "AWT_670";
		
		case 5:
			return "AWT_671";
		
		case 6:
			return "AWT_691";
		
		case 7:
			return "AWT_697";
		
		case 8:
			return "AWT_701";
		
		case 10:
			return "AWT_705";
		
		case 11:
			return "AWT_706";
		
		case 12:
			return "AWT_709";
		
		case 13:
			return "AWT_711";
		
		case 14:
			return "AWT_712";
		
		case 15:
			return "AWT_714";
		
		case 16:
			return "AWT_715";
		
		case 17:
			return "AWT_718";
		
		case 18:
			return "AWT_719";
		
		case 20:
			return "AWT_725";
		
		case 21:
			return "AWT_727";
		
		case 22:
			return "AWT_717";
		
		case 23:
			return "AWT_729";
		
		case 25:
			return "AWT_783";
		
		case 26:
			return "AWT_784";
		
		case 160:
			return "AWT_751" /* GXT: Can't Touch This */;
		
		case 159:
			return "AWT_754" /* GXT: Four Way */;
		
		case 162:
			return "AWT_765" /* GXT: Jack Of All Trades */;
		
		case 164:
			return "AWT_763" /* GXT: Showroom */;
		
		case 163:
			return "AWT_756" /* GXT: It Takes Two */;
			break;
		
		case 165:
			return "AWT_793";
		
		case 166:
			return "AWT_794";
		
		case 167:
			return "AWT_795";
		
		case 30:
			return "AWT_796";
		
		case 31:
			return "AWT_797";
		
		case 32:
			return "AWT_798";
		
		case 33:
			return "AWT_799";
		
		case 34:
			return "AWT_800";
		
		case 35:
			return "AWT_801";
		
		case 36:
			return "AWT_802";
		
		case 37:
			return "AWT_803";
		
		case 38:
			return "AWT_804";
		
		case 39:
			return "AWT_805";
		
		case 40:
			return "AWT_806";
		
		case 41:
			return "AWT_807";
		
		case 42:
			return "AWT_808";
		
		case 43:
			return "AWT_809";
		
		case 44:
			return "AWT_810";
		
		case 45:
			return "AWT_811";
		
		case 46:
			return "AWT_812";
		
		case 47:
			return "AWT_813";
		
		case 48:
			return "AWT_814";
		
		case 49:
			return "AWT_815";
		
		case 50:
			return "AWT_816";
		
		case 51:
			return "AWT_819";
		
		case 52:
			return "AWT_820";
		
		case 53:
			return "AWT_836" /* GXT: Loose Cheng */;
		
		case 54:
			return "AWT_837" /* GXT: House Keeping */;
		
		case 55:
			return "AWT_838" /* GXT: Strong Arm Tactics */;
		
		case 56:
			return "AWT_839" /* GXT: Play to Win */;
		
		case 57:
			return "AWT_840" /* GXT: Bad Beat */;
		
		case 58:
			return "AWT_841" /* GXT: Cashing Out */;
		
		case 59:
			return "AWT_842" /* GXT: Straight */;
		
		case 62:
			return "AWT_846" /* GXT: Lucky Lucky */;
		
		case 60:
			return "AWT_843" /* GXT: Top Pair */;
		
		case 61:
			return "AWT_844" /* GXT: Full House */;
		
		case 63:
			return "AWT_857" /* GXT: Scope Out */;
		
		case 64:
			return "AWT_858" /* GXT: All Crewed Up */;
		
		case 65:
			return "AWT_859" /* GXT: Moving On */;
		
		case 66:
			return "AWT_860" /* GXT: After Party */;
		
		case 67:
			return "AWT_861" /* GXT: Gunman */;
		
		case 68:
			return "AWT_862" /* GXT: Smash & Grab */;
		
		case 69:
			return "AWT_863" /* GXT: Hidden In Plain Sight */;
		
		case 70:
			return "AWT_864" /* GXT: Undetected */;
		
		case 71:
			return "AWT_865" /* GXT: All Rounder */;
		
		case 72:
			return "AWT_866" /* GXT: Elite Thief */;
		
		case 73:
			return "AWT_867" /* GXT: Professional */;
		
		case 74:
			return "AWT_868" /* GXT: Support Act */;
		
		case 75:
			return "AWT_869" /* GXT: Shafted */;
		
		case 76:
			return "AWT_870" /* GXT: Collector */;
		
		case 77:
			return "AWT_871" /* GXT: Dead Eye */;
		
		case 78:
			return "AWT_872" /* GXT: Pistols At Dawn */;
		
		case 79:
			return "AWT_873" /* GXT: Beat The Traffic */;
		
		case 80:
			return "AWT_874" /* GXT: All Wheels */;
		
		case 81:
			return "AWT_875" /* GXT: Feelin' Groggy */;
		
		case 82:
			return "AWT_876" /* GXT: Ape Escape */;
		
		case 83:
			return "AWT_877" /* GXT: Monkey Mind */;
		
		case 84:
			return "AWT_878" /* GXT: Aquatic Ape */;
		
		case 85:
			return "AWT_879" /* GXT: Keeping The Faith */;
		
		case 86:
			return "AWT_880" /* GXT: True Love */;
		
		case 87:
			return "AWT_881" /* GXT: Nemesis */;
		
		case 88:
			return "AWT_882" /* GXT: Friendzoned */;
		
		case 89:
			return "AWT_886" /* GXT: King Of QUB3D */;
		
		case 90:
			return "AWT_887" /* GXT: Qubism */;
		
		case 93:
			return "AWT_888" /* GXT: Crank It To 11 */;
		
		case 92:
			return "AWT_889" /* GXT: God of QUB3D */;
		
		case 91:
			return "AWT_890" /* GXT: Qubits */;
		
		case 94:
			return "AWT_891" /* GXT: 11 11 */;
		
		case 95:
			return "AWT_917" /* GXT: In And Out */;
		
		case 96:
			return "AWT_918" /* GXT: Easy Access */;
		
		case 97:
			return "AWT_919" /* GXT: It's A Steal */;
		
		case 98:
			return "AWT_920" /* GXT: Maximum Disruption */;
		
		case 99:
			return "AWT_921" /* GXT: The Cayo Perico Heist */;
		
		case 100:
			return "AWT_922" /* GXT: Going Alone */;
		
		case 101:
			return "AWT_923" /* GXT: Teamwork */;
		
		case 102:
			return "AWT_924" /* GXT: Travel Plans */;
		
		case 103:
			return "AWT_925" /* GXT: Professional Thief */;
		
		case 104:
			return "AWT_926" /* GXT: Cat Burglar */;
		
		case 105:
			return "AWT_927" /* GXT: One Of Them */;
		
		case 106:
			return "AWT_928" /* GXT: Go For Gold */;
		
		case 107:
			return "AWT_929" /* GXT: Elitist */;
		
		case 108:
			return "AWT_930" /* GXT: Blow Hard */;
		
		case 109:
			return "AWT_931" /* GXT: Helping Out */;
		
		case 110:
			return "AWT_932" /* GXT: Courier */;
		
		case 111:
			return "AWT_933" /* GXT: Party Vibes */;
		
		case 112:
			return "AWT_934" /* GXT: Helping Hand */;
		
		case 113:
			return "AWT_944" /* GXT: LS Car Meet */;
		
		case 114:
			return "AWT_951" /* GXT: Pro Car Exporter */;
		
		case 115:
			return "AWT_953" /* GXT: The Union Depository Contract */;
		
		case 116:
			return "AWT_954" /* GXT: The Superdollar Deal */;
		
		case 117:
			return "AWT_955" /* GXT: The Bank Contract */;
		
		case 118:
			return "AWT_956" /* GXT: The E.C.U. Job */;
		
		case 119:
			return "AWT_957" /* GXT: The Prison Contract */;
		
		case 120:
			return "AWT_958" /* GXT: The Agency Deal */;
		
		case 121:
			return "AWT_959" /* GXT: The Lost Contract */;
		
		case 122:
			return "AWT_960" /* GXT: The Data Contract */;
		
		case 123:
			return "AWT_963" /* GXT: Straight To Video */;
		
		case 124:
			return "AWT_964" /* GXT: Monkey See Monkey Do */;
		
		case 125:
			return "AWT_965" /* GXT: Trained To Kill */;
		
		case 126:
			return "AWT_966" /* GXT: The Director */;
		
		case 127:
			return "AWT_968" /* GXT: On Course */;
		
		case 128:
			return "AWT_969" /* GXT: Nightlife Leak */;
		
		case 129:
			return "AWT_970" /* GXT: High Society Leak */;
		
		case 130:
			return "AWT_971" /* GXT: South Central Leak */;
		
		case 131:
			return "AWT_972" /* GXT: Studio Time */;
		
		case 132:
			return "AWT_973" /* GXT: Don't Fuck With Dre */;
		
		case 133:
			return "AWT_974" /* GXT: Backup */;
		
		case 134:
			return "AWT_975" /* GXT: Seed Capital - Franklin */;
		
		case 135:
			return "AWT_977" /* GXT: Fire It Up - Franklin */;
		
		case 136:
			return "AWT_984" /* GXT: OG Kush  - Franklin */;
		
		case 137:
			return "AWT_980" /* GXT: Contract Killer */;
		
		case 138:
			return "AWT_981" /* GXT: A Dog's Best Friend */;
		
		case 139:
			return "AWT_982" /* GXT: Sound Check */;
		
		case 140:
			return "AWT_976" /* GXT: Seed Capital - Lamar */;
		
		case 141:
			return "AWT_986" /* GXT: Fire It Up - Lamar */;
		
		case 142:
			return "AWT_985" /* GXT: OG Kush  - Lamar */;
		
		case 143:
			return "AWT_1010" /* GXT: Welcome to the Troupe */;
		
		case 144:
			return "AWT_987" /* GXT: Designated Driver */;
		
		case 145:
			return "AWT_988" /* GXT: Fatal Incursion */;
		
		case 146:
			return "AWT_989" /* GXT: Uncontrolled Substance */;
		
		case 147:
			return "AWT_990" /* GXT: Make War not Love */;
		
		case 148:
			return "AWT_991" /* GXT: Off The Rails */;
		
		case 149:
			return "AWT_992" /* GXT: Back It Up */;
		
		case 150:
			return "AWT_993" /* GXT: Lick My Acid */;
		
		case 151:
			return "AWT_994" /* GXT: Chemical Reaction */;
		
		case 152:
			return "AWT_995" /* GXT: This is an Intervention */;
		
		case 153:
			return "AWT_996" /* GXT: Unusual Suspects */;
		
		case 154:
			return "AWT_997" /* GXT: FriedMind */;
		
		case 155:
			return "AWT_998" /* GXT: Checking In */;
		
		case 156:
			return "AWT_999" /* GXT: BDKD */;
		
		case 157:
			return "AWT_1000" /* GXT: Back It Up 2 */;
		
		case 158:
			return "AWT_1001" /* GXT: 5 Star Ride */;
	}
	return "";
}

int func_115(int iParam0, int iParam1)//Position - 0xD4E4
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 3:
			return 1;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 15:
			return 1;
		
		case 16:
			return 1;
		
		case 17:
			return 1;
		
		case 18:
			return 1;
		
		case 20:
			return 1;
		
		case 21:
			return 1;
		
		case 22:
			return 1;
		
		case 23:
			return 1;
		
		case 25:
			return 1;
		
		case 26:
			return 1;
		
		case 27:
			return 1;
		
		case 160:
			return 1;
		
		case 159:
			return 1;
		
		case 162:
			return 1;
		
		case 164:
			return 1;
		
		case 163:
			return 1;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 167:
			return 1;
		
		case 30:
			return 1;
		
		case 31:
			return 1;
		
		case 32:
			return 1;
		
		case 33:
			return 1;
		
		case 34:
			return 1;
		
		case 35:
			return 1;
		
		case 36:
			return 1;
		
		case 37:
			return 1;
		
		case 38:
			return 1;
		
		case 39:
			return 1;
		
		case 40:
			return 1;
		
		case 41:
			return 1;
		
		case 42:
			return 1;
		
		case 43:
			return 1;
		
		case 44:
			return 1;
		
		case 45:
			return 1;
		
		case 46:
			return 1;
		
		case 47:
			return 1;
		
		case 48:
			return 1;
		
		case 49:
			return 1;
		
		case 50:
			return 1;
		
		case 51:
			return 1;
		
		case 52:
			return 1;
		
		case 53:
			return 1;
		
		case 54:
			return 1;
		
		case 55:
			return 1;
		
		case 56:
			return 1;
		
		case 57:
			return 1;
		
		case 58:
			return 1;
		
		case 59:
			return 1;
		
		case 62:
			return 1;
		
		case 60:
			return 1;
		
		case 61:
			return 1;
		
		case 63:
			return 1;
		
		case 64:
			return 1;
		
		case 65:
			return 1;
		
		case 66:
			return 1;
		
		case 67:
			return 1;
		
		case 68:
			return 1;
		
		case 69:
			return 1;
		
		case 70:
			return 1;
		
		case 71:
			return 1;
		
		case 72:
			return 1;
		
		case 73:
			return 1;
		
		case 74:
			return 1;
		
		case 75:
			return 1;
		
		case 76:
			return 1;
		
		case 77:
			return 1;
		
		case 78:
			return 1;
		
		case 79:
			return 1;
		
		case 80:
			return 1;
		
		case 81:
			return 1;
		
		case 82:
			return 1;
		
		case 83:
			return 1;
		
		case 84:
			return 1;
		
		case 85:
			return 1;
		
		case 86:
			return 1;
		
		case 87:
			return 1;
		
		case 88:
			return 1;
		
		case 89:
			return 1;
		
		case 90:
			return 1;
		
		case 93:
			return 1;
		
		case 92:
			return 1;
		
		case 91:
			return 1;
		
		case 94:
			return 1;
		
		case 95:
			return 1;
		
		case 96:
			return 1;
		
		case 97:
			return 1;
		
		case 98:
			return 1;
		
		case 99:
			return 1;
		
		case 100:
			return 1;
		
		case 101:
			return 1;
		
		case 102:
			return 1;
		
		case 103:
			return 1;
		
		case 104:
			return 1;
		
		case 105:
			return 1;
		
		case 106:
			return 1;
		
		case 107:
			return 1;
		
		case 108:
			return 1;
		
		case 109:
			return 1;
		
		case 110:
			return 1;
		
		case 111:
			return 1;
		
		case 112:
			return 1;
		
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			return 1;
			break;
	}
	return 0;
}

int func_116()//Position - 0xDA94
{
	return 5;
}

int func_117(int iParam0)//Position - 0xDA9D
{
	if (func_108(iParam0, -1))
	{
		return 5;
	}
	return 0;
}

void func_118(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0xDAB4
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	switch (iParam1)
	{
		case 0:
			iParam1 = 0;
			break;
		
		case 1:
			iParam1 = 1;
			break;
		
		case 2:
			iParam1 = 2;
			break;
		
		case 3:
			iParam1 = 3;
			break;
		
		case 4:
			iParam1 = 4;
			break;
		
		case 5:
			iParam1 = 5;
			break;
		
		case 6:
			iParam1 = func_124(iParam0, iParam2);
			break;
		
		case 7:
		case 8:
			iParam1 = func_123(iParam0, iParam2);
			break;
	}
	iVar0 = func_123(iParam0, iParam2);
	if (iParam1 != 0)
	{
		if (iParam1 != 1)
		{
			if (func_64(iParam0, iParam2) != 1)
			{
				iParam1 = 1;
			}
		}
	}
	sVar1 = func_122(iParam0, iParam2);
	sVar2 = func_121(iParam0, iParam1, iParam2);
	sVar3 = func_120(iParam0, iParam1, iParam2);
	sVar4 = func_119(iParam0, iParam1, iParam2);
	iVar5 = func_52(iParam0, iVar0, iParam2);
	iVar6 = func_50(iParam0, -1);
	iVar7 = func_71(iParam1);
	iVar8 = func_52(iParam0, iVar7, iParam2);
	iVar9 = (iVar5 - iVar8);
	iVar10 = (iVar6 - iVar8);
	iVar11 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT(iVar10) / SYSTEM::TO_FLOAT(iVar9)) * 100f));
	func_65(sVar1, sVar2, sVar3, sVar4, iVar5, iVar6, iVar11, iParam1, uParam3, 168, iParam0);
}

char* func_119(int iParam0, int iParam1, int iParam2)//Position - 0xDBF4
{
	switch (iParam0)
	{
		case 53:
			return "MPAwards5";
		
		case 39:
			return "MPAwards5";
		
		case 51:
			return "MPAwards5";
		
		case 52:
			return "MPAwards5";
		
		case 16:
			return "MPAwards2";
		
		case 60:
			return "MPAwards4";
		
		case 61:
			return "MPAwards4";
		
		case 62:
			return "MPAwards4";
		
		case 63:
			return "MPAwards4";
		
		case 0:
			switch (iParam2)
			{
				case 9:
					switch (iParam1)
					{
						case 0:
							return "MPAwards1";
						
						case 1:
							return "MPAwards1";
						
						case 2:
							return "MPAwards1";
						
						case 3:
							return "MPAwards1";
						
						case 4:
							return "MPAwards1";
						
						case 5:
							return "MPAwards1";
						
						default:
					}
					break;
			}
			break;
		
		case 12:
			return "MPAwards3";
		
		case 11:
			return "MPAwards4";
		
		case 20:
			return "MPAwards5";
		
		case 19:
			return "MPAwards2";
		
		case 15:
			return "MPAwards4";
		
		case 17:
			return "MPAwards2";
		
		case 21:
			return "MPAwards2";
		
		case 14:
			return "MPAwards4";
		
		case 22:
			return "MPAwards1";
		
		case 1:
			return "MPAwards5";
		
		case 2:
			return "MPAwards5";
		
		case 3:
			return "MPAwards5";
		
		case 4:
			return "MPAwards5";
		
		case 5:
			return "MPAwards4";
		
		case 6:
			return "MPAwards5";
		
		case 7:
			return "MPAwards4";
		
		case 8:
			return "MPAwards5";
		
		case 9:
			return "MPAwards4";
		
		case 10:
			return "MPAwards2";
		
		case 23:
			return "MPAwards1";
		
		case 24:
			return "MPAwards1";
		
		case 25:
			return "MPAwards1";
		
		case 26:
			return "MPAwards1";
		
		case 27:
			return "MPAwards1";
		
		case 28:
			return "MPAwards1";
		
		case 29:
			return "MPAwards5";
		
		case 30:
			return "MPAWARDS5";
		
		case 31:
			return "MPAWARDS5";
		
		case 32:
			return "MPAWARDS5";
		
		case 33:
			return "MPAWARDS5";
		
		case 34:
			return "MPAWARDS5";
		
		case 35:
			return "MPAWARDS5";
		
		case 36:
			return "MPAWARDS5";
		
		case 37:
			return "MPAWARDS5";
		
		case 38:
			return "MPAWARDS5";
		
		case 40:
			return "MPAWARDS5";
		
		case 41:
			return "MPAWARDS5";
		
		case 42:
			return "MPAWARDS5";
		
		case 43:
			return "MPAWARDS5";
		
		case 44:
			return "MPAWARDS5";
		
		case 45:
			return "MPAWARDS5";
		
		case 46:
			return "MPAWARDS5";
		
		case 47:
			return "MPAWARDS5";
		
		case 48:
			return "MPAWARDS5";
		
		case 49:
			return "MPAWARDS5";
		
		case 54:
			return "MPAWARDS5";
		
		case 55:
			return "MPAWARDS5";
		
		case 56:
			return "MPAWARDS5";
		
		case 57:
			return "MPAWARDS5";
		
		case 58:
			return "MPAWARDS5";
		
		case 59:
			return "MPAWARDS5";
		
		case 134:
			return "MPAwardHeists";
		
		case 135:
			return "MPAwardHeists";
		
		case 136:
			return "MPAwardHeists";
		
		case 137:
			return "MPAwardHeists";
		
		case 138:
			return "MPAwardHeists";
		
		case 67:
			return "MPAwardHeists";
		
		case 128:
			return "MPAwardHeists";
		
		case 129:
			return "MPAwardHeists";
		
		case 130:
			return "MPAwardHeists";
		
		case 131:
			return "MPAwardHeists";
		
		case 132:
			return "MPAwardHeists";
		
		case 133:
			return "MPAwardHeists";
		
		case 139:
			return "MPAwardHeists";
		
		case 140:
			return "MPAwardHeists";
		
		case 141:
			return "MPAwardHeists";
		
		case 142:
			return "MPAwardHeists";
		
		case 143:
			return "MPAwardHeists";
		
		case 144:
			return "MPAwardHeists";
		
		case 145:
			return "MPAwardHeists";
		
		case 146:
			return "MPAwardHeists";
		
		case 147:
			return "MPAwardNightclub";
		
		case 148:
			return "MPAwardNightclub";
		
		case 149:
			return "MPAwardNightclub";
		
		case 150:
			return "MPAwardNightclub";
		
		case 151:
			return "MPAwardNightclub";
		
		case 70:
			return "MPAwardsArena";
		
		case 71:
			return "MPAwardsArena";
		
		case 72:
			return "MPAwardsArena";
		
		case 73:
			return "MPAwardsArena";
		
		case 74:
			return "MPAwardsArena";
		
		case 75:
			return "MPAwardsArena";
		
		case 76:
			return "MPAwardsArena";
		
		case 77:
			return "MPAwardsArena";
		
		case 78:
			return "MPAwardsArena";
		
		case 79:
			return "MPAwardsArena";
		
		case 80:
			return "MPAwardsArena";
		
		case 81:
			return "MPAwardsArena";
		
		case 82:
			return "MPAwardsArena";
		
		case 83:
			return "MPAwardsArena";
		
		case 84:
			return "MPAwardsArena";
		
		case 85:
			return "MPAwardsArena";
		
		case 86:
			return "MPAwardsArena";
		
		case 87:
			return "MPAwardCasino";
		
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return "MPAwardCasinoHeist";
			break;
		
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
			return "MPAwardIslandHeist";
			break;
		
		case 107:
		case 108:
		case 109:
		case 110:
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
			return "MPAwardTunerPack";
			break;
		
		case 117:
		case 118:
		case 119:
			return "MPAwardsFixer";
			break;
		
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
			return "MPAwardXmas2022";
			break;
	}
	return "";
}

char* func_120(int iParam0, int iParam1, int iParam2)//Position - 0xE2A3
{
	if (iParam2 == 9)
	{
	}
	if (iParam1 == 5)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "ShootDownPoliceHeli";
		
		case 39:
			return "ComeFromBehind";
		
		case 60:
			return "TheFugitive";
		
		case 61:
			return "NoClaimsBonus";
		
		case 62:
			return "swallow";
		
		case 63:
			return "Spinderella";
		
		case 16:
			return "Timeinheli";
		
		case 0:
			return "HangingOutInCars";
		
		case 51:
			return "WinRallyAsDriver";
		
		case 52:
			return "WinRallyAsNavigator";
		
		case 12:
			return "Killenemiesindriveby";
		
		case 11:
			return "JackVehicles";
		
		case 20:
			return "Jump40m";
		
		case 19:
			return "Timesavoiding5stars";
		
		case 15:
			return "GetLapDances";
		
		case 17:
			return "Delivercars";
		
		case 21:
			return "racesWon_generic";
		
		case 14:
			return "HoldUpShops";
		
		case 22:
			return "ArmWrestlingVictories";
		
		case 1:
			return "KillPistol";
		
		case 2:
			return "KillSniperrifle";
		
		case 3:
			return "KillGrenades";
		
		case 4:
			return "KillShotgun";
		
		case 5:
			return "KillSMG";
		
		case 6:
			return "KillRocketLauncher";
		
		case 7:
			return "KillStickyBombs";
		
		case 8:
			return "KillMeleeWeapons";
		
		case 9:
			return "Headshots" /* GXT: Headshot kills */;
		
		case 10:
			return "BlowupVehicles";
		
		case 23:
			return "Winatdarts";
		
		case 24:
			return "Blowupenemiesusingcarbombs";
		
		case 25:
			return "KilledpeoplewithanAssaultRifle";
		
		case 26:
			return "KilledpeoplewithaMachineGun";
		
		case 27:
			return "Gethaircuts";
		
		case 28:
			return "Parachute1min";
		
		case 29:
			return "ParachuteJumps20m";
		
		case 30:
			return "Birdie";
		
		case 31:
			return "GolfWin";
		
		case 32:
			return "TargetGridWin";
		
		case 33:
			return "RandomTargetsWin";
		
		case 34:
			return "CoveredTargetsWin";
		
		case 35:
			return "TennisMatchesWon";
		
		case 36:
			return "TennisServiceAce";
		
		case 37:
			return "GTARacesWon";
		
		case 38:
			return "FastestLap";
		
		case 40:
			return "DeathmatchWin";
		
		case 41:
			return "TeamDeathmatchWin";
		
		case 42:
			return "TeamDeathmatchMVP";
		
		case 43:
			return "KillStreak";
		
		case 44:
			return "TotalKills";
		
		case 45:
			return "HatTrickKiller";
		
		case 46:
			return "StolenKill";
		
		case 47:
			return "Land2mFromTarget";
		
		case 48:
			return "ReachHordeModeWave";
		
		case 49:
			return "EarnCashFromBetting";
		
		case 54:
			return "RaceToPointWinner";
		
		case 55:
			return "BountyHunter";
		
		case 56:
			return "OverallKills";
		
		case 57:
			return "WinASeaRace";
		
		case 58:
			return "WinAPlaneRace";
		
		case 59:
			return "GetRevengeKillDeathmatch";
		
		case 134:
			return "Captured";
		
		case 135:
			return "ThePostman";
		
		case 136:
			return "GimmeThat";
		
		case 137:
			return "NoYouDont";
		
		case 138:
			return "DeathDefying";
		
		case 67:
			return "dailyduty";
		
		case 128:
			return "TheBigTime";
		
		case 129:
			return "BePrepared";
		
		case 130:
			return "ForHire";
		
		case 131:
			return "ShotCaller";
		
		case 132:
			return "LiveALittle";
		
		case 133:
			return "Decorated";
		
		case 139:
			return "LightsOut";
		
		case 140:
			return "InControl";
		
		case 141:
			return "PsychoKiller";
		
		case 142:
			return "CalmDown";
		
		case 143:
			return "StillStanding";
		
		case 144:
			return "OneAndOnly";
		
		case 145:
			return "OneManArmy";
		
		case 146:
			return "MovingDay";
		
		case 147:
			return "Solomun";
		
		case 148:
			return "TaleOfUs";
		
		case 149:
			return "Dixon";
		
		case 150:
			return "TheBlackMadonna";
		
		case 151:
			return "ClubDrunk";
		
		case 70:
			return "watchyourstep";
		
		case 71:
			return "TOWEROFFENSE";
		
		case 72:
			return "READYFORWAR";
		
		case 73:
			return "THROUGHTHELENS";
		
		case 74:
			return "SPINNER";
		
		case 75:
			return "YOUMEANBOOBYTRAP";
		
		case 76:
			return "MASTERBANDITO";
		
		case 77:
			return "SITTINGDUCK";
		
		case 78:
			return "CROWDPARTICIPATION";
		
		case 79:
			return "KILLORBEKILLED";
		
		case 80:
			return "MASSIVESHUNT";
		
		case 81:
			return "YOUREOUTTAHERE";
		
		case 82:
			return "WEVEGOTONE";
		
		case 83:
			return "ARENAWAGEWORKER";
		
		case 84:
			return "TIMESERVED";
		
		case 85:
			return "TOPSCORE";
		
		case 86:
			return "CAREERWINNER";
		
		case 87:
			return "HighRoller";
		
		case 88:
			return "Preparation";
		
		case 89:
			return "AsleepOnTheJob";
		
		case 90:
			return "DailyCashGrab";
		
		case 91:
			return "Bigbrother";
		
		case 92:
			return "Sharpshooter";
		
		case 93:
			return "RaceChampion";
		
		case 94:
			return "PlatinumSword";
		
		case 95:
			return "CoinPurse";
		
		case 96:
			return "Astrochimp";
		
		case 97:
			return "Masterful";
		
		case 99:
			return "sunset";
		
		case 100:
			return "TreasureHunter";
		
		case 101:
			return "WreckDiving";
		
		case 102:
			return "Keinmusik";
		
		case 103:
			return "PalmsTrax";
		
		case 104:
			return "Moodymann";
		
		case 105:
			return "FillYourBags";
		
		case 106:
			return "Prepped";
		
		case 107:
			return "LSCarMeetMember";
		
		case 108:
			return "SprintRacer";
		
		case 109:
			return "StreetRacer";
		
		case 110:
			return "PursuitRacer";
		
		case 112:
			return "SpecialDelivery";
		
		case 114:
			return "Groundwork";
		
		case 115:
			return "ContractualCriminal";
		
		case 116:
			return "FacesofDeath";
		
		case 111:
			return "TriedandTested";
		
		case 113:
			return "CarExporter";
		
		case 117:
			return "ContracualObligations";
		
		case 118:
			return "ColdCaller";
		
		case 119:
			return "Producer";
		
		case 120:
			return "RunRabbitRun";
		
		case 121:
			return "CallMe";
		
		case 122:
			return "ChemicalAttraction";
		
		case 123:
			return "StashesToStashes";
		
		case 124:
			return "HereComesTheDrop";
		
		case 125:
			return "GoodSamaritan";
		
		case 126:
			return "YourOwnWorstEnemy";
		
		case 127:
			return "TaxiDriver";
			break;
			break;
			break;
	}
	return "";
}

char* func_121(int iParam0, int iParam1, int iParam2)//Position - 0xEA0F
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "AWS_721";
		
		case 60:
			return "AWS_728";
		
		case 61:
			return "AWS_730";
		
		case 62:
			return "AWS_731";
		
		case 63:
			return "AWS_732";
		
		case 16:
			return "AWS_550";
		
		case 0:
			return "AWS_282";
		
		case 51:
			return "AWS_707";
		
		case 52:
			return "AWS_708";
		
		case 12:
			return "AWS_581";
		
		case 11:
			return "AWS_582";
		
		case 19:
			return "AWS_534";
		
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_509_M";
			}
			else
			{
				return "AWS_509";
			}
			break;
		
		case 39:
			return "AWS_678";
		
		case 15:
			return "AWS_559";
		
		case 17:
			return "AWS_535";
		
		case 21:
			return "AWS_586";
		
		case 14:
			return "AWS_566";
		
		case 22:
			return "AWS_589";
		
		case 1:
			return "AWS_506";
		
		case 2:
			return "AWS_585";
		
		case 3:
			return "AWS_541";
		
		case 4:
			return "AWS_584";
		
		case 5:
			return "AWS_540";
		
		case 6:
			return "AWS_539";
		
		case 7:
			return "AWS_538";
		
		case 8:
			return "AWS_537";
		
		case 9:
			return "AWS_536";
		
		case 10:
			return "AWS_583";
		
		case 23:
			return "AWS_610";
		
		case 24:
			return "AWS_611";
		
		case 25:
			return "AWS_631";
		
		case 26:
			return "AWS_632";
		
		case 27:
			return "AWS_639";
		
		case 28:
			return "AWS_640";
		
		case 29:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWS_699_m";
			}
			else
			{
				return "AWS_699";
			}
			break;
		
		case 30:
			return "AWS_661";
		
		case 31:
			return "AWS_662";
		
		case 32:
			return "AWS_663";
		
		case 33:
			return "AWS_665";
		
		case 34:
			return "AWS_666";
		
		case 35:
			return "AWS_668";
		
		case 36:
			return "AWS_669";
		
		case 37:
			return "AWS_675";
		
		case 38:
			return "AWS_676";
		
		case 40:
			return "AWS_679";
		
		case 41:
			return "AWS_681";
		
		case 42:
			return "AWS_682";
		
		case 43:
			return "AWS_677";
		
		case 44:
			return "AWS_683";
		
		case 45:
			return "AWS_684";
		
		case 46:
			return "AWS_685";
		
		case 47:
			return "AWS_692";
		
		case 48:
			return "AWS_696";
		
		case 49:
			return "AWS_693";
		
		case 54:
			return "AWS_710";
		
		case 55:
			return "AWS_703";
		
		case 56:
			return "AWS_704";
		
		case 57:
			return "AWS_722";
		
		case 58:
			return "AWS_723";
		
		case 59:
			return "AWS_716";
		
		case 134:
			return "AWS_740" /* GXT: This mode is all about teamwork, whether you choose to attack or defend, everyone has a part to play. Get a team together and win Captures. */;
		
		case 135:
			return "AWS_741" /* GXT: Watch your back when transporting a package or vehicle. The opposition will be after you. Drop off packages in any Capture mode. */;
		
		case 136:
			return "AWS_742" /* GXT: In order to win at Capture, someone has to get the goods. Pick up a package or vehicle in any Capture mode. */;
		
		case 137:
			return "AWS_743" /* GXT: Don't let the enemy get the merchandise back to their base. A strategic ambush could turn the match in your favor. Kill package carriers. */;
		
		case 138:
			return "AWS_744" /* GXT: Whether you choose a stealthy approach or a full on assault, assert your dominance by winning Capture without dying. */;
		
		case 67:
			return "AWS_782";
		
		case 128:
			return "AWS_745" /* GXT: Pulling off a Heist is the ultimate Job. With the right team and some cooperation you will reap the rewards. Successfully complete Heist Finales. */;
		
		case 129:
			return "AWS_746" /* GXT: Every Heist requires planning. Help with the Heist Setups in the run up to the final showdown. */;
		
		case 130:
			return "AWS_747" /* GXT: Leaders need to hire a solid crew. Crew members get paid for Heist Setups and can negotiate a share of the profits in the Finale. Be a Heist crew member. */;
		
		case 131:
			return "AWS_748" /* GXT: The Heist leader needs to stump up the cash to cover the costs, on the plus side, they have full control of the rewards. Be the Heist leader. */;
		
		case 132:
			return "AWS_749";
		
		case 133:
			return "AWS_752" /* GXT: If something is worth doing, it is worth doing right. Earn platinum medals for your performance during a Heist. The Bonus RP may come in handy. */;
		
		case 139:
			return "AWS_755" /* GXT: This new kit will give you the advantage over your enemies. Get kills while wearing Night Vision. */;
		
		case 140:
			return "AWS_757" /* GXT: Shoot, aim, shout at the crowd to keep them under control. If an alarm is raised or the police are called, you have failed. */;
		
		case 141:
			return "AWS_758" /* GXT: Psychopaths are marked as red blips on the Radar in Freemode. Kill them for an RP reward and a sense of satisfaction. */;
		
		case 142:
			return "AWS_759" /* GXT: Becoming Unstable encourages others to play rough with you. Try to stay calm for an easier life. Return your Mental State to Normal. */;
		
		case 143:
			return "AWS_760" /* GXT: No respawns in this mode. You will have to cheer on your teammates if you are out of the game. Win Last Team Standings. */;
		
		case 144:
			return "AWS_761" /* GXT: The true definition of Last Man Standing. Be the last player alive at the end of the match. */;
		
		case 145:
			return "AWS_762" /* GXT: Sometimes you have to take matters into your own hands. Wipe out an entire enemy team yourself in LTS. */;
		
		case 146:
			return "AWS_764" /* GXT: Staying in the same place for too long can become dull.  Either move up the property ladder or downscale for some cash. Trade in your property. */;
		
		case 147:
			if (iParam1 == 5)
			{
				return "AWS_788_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_788_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_788_2";
			}
			else
			{
				return "AWS_788_1";
			}
			break;
		
		case 148:
			if (iParam1 == 5)
			{
				return "AWS_789_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_789_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_789_2";
			}
			else
			{
				return "AWS_789_1";
			}
			break;
		
		case 149:
			if (iParam1 == 5)
			{
				return "AWS_790_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_790_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_790_2";
			}
			else
			{
				return "AWS_790_1";
			}
			break;
		
		case 150:
			if (iParam1 == 5)
			{
				return "AWS_791_4";
			}
			else if (iParam1 == 4)
			{
				return "AWS_791_3";
			}
			else if (iParam1 == 3)
			{
				return "AWS_791_2";
			}
			else
			{
				return "AWS_791_1";
			}
			break;
		
		case 151:
			return "AWS_792";
		
		case 70:
			return "AWS_817";
		
		case 71:
			return "AWS_818";
		
		case 72:
			return "AWS_821";
		
		case 73:
			return "AWS_822";
		
		case 74:
			return "AWS_823";
		
		case 75:
			return "AWS_824";
		
		case 76:
			return "AWS_825";
		
		case 77:
			return "AWS_826";
		
		case 78:
			return "AWS_827";
		
		case 79:
			return "AWS_828";
		
		case 80:
			return "AWS_829";
		
		case 81:
			return "AWS_830";
		
		case 82:
			return "AWS_831";
		
		case 83:
			return "AWS_832";
		
		case 84:
			return "AWS_833";
		
		case 85:
			return "AWS_834";
		
		case 86:
			return "AWS_835";
		
		case 87:
			if (iParam1 == 5)
			{
				return "AWS_845_4" /* GXT: Complete 50 Casino Work missions for Agatha and earn $100,000. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_845_3" /* GXT: Complete 25 Casino Work missions for Agatha and earn $50,000. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_845_2" /* GXT: Complete 10 Casino Work missions for Agatha and earn $20,000. */;
			}
			else
			{
				return "AWS_845_1" /* GXT: Complete 5 Casino Work missions for Agatha and earn $10,000. */;
			}
			break;
		
		case 88:
			if (iParam1 == 5)
			{
				return "AWS_847_4" /* GXT: Complete 40 prep missions as part of The Diamond Casino Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_847_3" /* GXT: Complete 20 prep missions as part of The Diamond Casino Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_847_2" /* GXT: Complete 10 prep missions as part of The Diamond Casino Heist. */;
			}
			else
			{
				return "AWS_847_1" /* GXT: Complete 5 prep missions as part of The Diamond Casino Heist. */;
			}
			break;
		
		case 89:
			if (iParam1 == 5)
			{
				return "AWS_848_4" /* GXT: Use the Drone to tranquilize 20 guards during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_848_3" /* GXT: Use the Drone to tranquilize 15 guards during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_848_2" /* GXT: Use the Drone to tranquilize 10 guards during The Diamond Casino Heist. */;
			}
			else
			{
				return "AWS_848_1" /* GXT: Use the Drone to tranquilize 5 guards during The Diamond Casino Heist. */;
			}
			break;
		
		case 90:
			if (iParam1 == 5)
			{
				return "AWS_849_4" /* GXT: Steal a total of $100000 from the Daily Vault during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_849_3" /* GXT: Steal a total of $75000 from the Daily Vault during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_849_2" /* GXT: Steal a total of $50000 from the Daily Vault during The Diamond Casino Heist. */;
			}
			else
			{
				return "AWS_849_1" /* GXT: Steal a total of $25000 from the Daily Vault during The Diamond Casino Heist. */;
			}
			break;
		
		case 91:
			if (iParam1 == 5)
			{
				return "AWS_850_4" /* GXT: Destroy 40 security cameras during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_850_3" /* GXT: Destroy 30 security cameras during The Diamond Casino Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_850_2" /* GXT: Destroy 20 security cameras during The Diamond Casino Heist. */;
			}
			else
			{
				return "AWS_850_1" /* GXT: Destroy 10 security cameras during The Diamond Casino Heist. */;
			}
			break;
		
		case 92:
			if (iParam1 == 5)
			{
				return "AWS_851_4" /* GXT: Kill 40 flying critters across all levels of Badlands Revenge II. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_851_3" /* GXT: Kill 20 flying critters across all levels of Badlands Revenge II. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_851_2" /* GXT: Kill 10 flying critters across all levels of Badlands Revenge II. */;
			}
			else
			{
				return "AWS_851_1" /* GXT: Kill 5 flying critters across all levels of Badlands Revenge II. */;
			}
			break;
		
		case 93:
			if (iParam1 == 5)
			{
				return "AWS_852_4" /* GXT: Win 40 races against an opponent in Race And Chase. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_852_3" /* GXT: Win 20 races against an opponent in Race And Chase. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_852_2" /* GXT: Win 10 races against an opponent in Race And Chase. */;
			}
			else
			{
				return "AWS_852_1" /* GXT: Win 5 races against an opponent in Race And Chase. */;
			}
			break;
		
		case 94:
			if (iParam1 == 5)
			{
				return "AWS_853_4" /* GXT: Score at least 1000000 during a single play of The Wizard's Ruin. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_853_3" /* GXT: Score at least 750000 during a single play of The Wizard's Ruin. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_853_2" /* GXT: Score at least 500000 during a single play of The Wizard's Ruin. */;
			}
			else
			{
				return "AWS_853_1" /* GXT: Score at least 250000 during a single play of The Wizard's Ruin. */;
			}
			break;
		
		case 95:
			if (iParam1 == 5)
			{
				return "AWS_854_4" /* GXT: Collect 950000 treasures during a single play of The Wizard's Ruin. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_854_3" /* GXT: Collect 700000 treasures during a single play of The Wizard's Ruin. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_854_2" /* GXT: Collect 450000 treasures during a single play of The Wizard's Ruin. */;
			}
			else
			{
				return "AWS_854_1" /* GXT: Collect 200000 treasures during a single play of The Wizard's Ruin. */;
			}
			break;
		
		case 96:
			if (iParam1 == 5)
			{
				return "AWS_855_4" /* GXT: Score over 3000000 points in a single game of Space Monkey 3: Bananas Gone Bad. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_855_3" /* GXT: Score over 2500000 points in a single game of Space Monkey 3: Bananas Gone Bad. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_855_2" /* GXT: Score over 2000000 points in a single game of Space Monkey 3: Bananas Gone Bad. */;
			}
			else
			{
				return "AWS_855_1" /* GXT: Score over 1500000 points in a single game of Space Monkey 3: Bananas Gone Bad. */;
			}
			break;
		
		case 97:
			if (iParam1 == 5)
			{
				return "AWS_856_4" /* GXT: Score over 40000 points in a single play of Penetrator. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_856_3" /* GXT: Score over 20000 points in a single play of Penetrator. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_856_2" /* GXT: Score over 10000 points in a single play of Penetrator. */;
			}
			else
			{
				return "AWS_856_1" /* GXT: Score over 5000 points in a single play of Penetrator. */;
			}
			break;
		
		case 99:
			if (iParam1 == 5)
			{
				return "AWS_936d" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_936c" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_936b" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 15 minutes. */;
			}
			else
			{
				return "AWS_936a" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 5 minutes. */;
			}
			break;
		
		case 100:
			if (iParam1 == 5)
			{
				return "AWS_937d" /* GXT: Steal the loot from 50 treasure chests found on Cayo Perico. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_937c" /* GXT: Steal the loot from 20 treasure chests found on Cayo Perico. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_937b" /* GXT: Steal the loot from 10 treasure chests found on Cayo Perico. */;
			}
			else
			{
				return "AWS_937a" /* GXT: Steal the loot from 5 treasure chests found on Cayo Perico. */;
			}
			break;
		
		case 101:
			if (iParam1 == 5)
			{
				return "AWS_938d" /* GXT: Steal a total of $1,000,000 from hidden caches found around the San Andreas coast. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_938c" /* GXT: Steal a total of $750,000 from hidden caches found around the San Andreas coast. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_938b" /* GXT: Steal a total of $250,000 from hidden caches found around the San Andreas coast. */;
			}
			else
			{
				return "AWS_938a" /* GXT: Steal a total of $50,000 from hidden caches found around the San Andreas coast. */;
			}
			break;
		
		case 102:
			if (iParam1 == 5)
			{
				return "AWS_939d" /* GXT: Dance to Keinemusik's set in The Music Locker for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_939c" /* GXT: Dance to Keinemusik's set in The Music Locker for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_939b" /* GXT: Dance to Keinemusik's set in The Music Locker for 15 minutes. */;
			}
			else
			{
				return "AWS_939a" /* GXT: Dance to Keinemusik's set in The Music Locker for 5 minutes. */;
			}
			break;
		
		case 103:
			if (iParam1 == 5)
			{
				return "AWS_940d" /* GXT: Dance to Palms Trax set in The Music Locker for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_940c" /* GXT: Dance to Palms Trax set in The Music Locker for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_940b" /* GXT: Dance to Palms Trax set in The Music Locker for 15 minutes. */;
			}
			else
			{
				return "AWS_940a" /* GXT: Dance to Palms Trax set in The Music Locker for 5 minutes. */;
			}
			break;
		
		case 104:
			if (iParam1 == 5)
			{
				return "AWS_941d" /* GXT: Dance to Moodymann's set in The Music Locker for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_941c" /* GXT: Dance to Moodymann's set in The Music Locker for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_941b" /* GXT: Dance to Moodymann's set in The Music Locker for 15 minutes. */;
			}
			else
			{
				return "AWS_941a" /* GXT: Dance to Moodymann's set in The Music Locker for 5 minutes. */;
			}
			break;
		
		case 105:
			if (iParam1 == 5)
			{
				return "AWS_942d" /* GXT: Steal a total of $20,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_942c" /* GXT: Steal a total of $10,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_942b" /* GXT: Steal a total of $5,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			else
			{
				return "AWS_942a" /* GXT: Steal a total of $1,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			break;
		
		case 106:
			if (iParam1 == 5)
			{
				return "AWS_943d" /* GXT: Complete 50 prep missions as part of The Cayo Perico Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_943c" /* GXT: Complete 20 prep missions as part of The Cayo Perico Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_943b" /* GXT: Complete 10 prep missions as part of The Cayo Perico Heist. */;
			}
			else
			{
				return "AWS_943a" /* GXT: Complete 5 prep missions as part of The Cayo Perico Heist. */;
			}
			break;
		
		case 107:
			if (iParam1 == 5)
			{
				return "AWS_945d" /* GXT: Reach LS Car Meet Reputation Level 100. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_945c" /* GXT: Reach LS Car Meet Reputation Level 50. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_945b" /* GXT: Reach LS Car Meet Reputation Level 25. */;
			}
			else
			{
				return "AWS_945a" /* GXT: Reach LS Car Meet Reputation Level 5. */;
			}
			break;
		
		case 108:
			if (iParam1 == 5)
			{
				return "AWS_967d" /* GXT: Win 50 Sprints. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_967c" /* GXT: Win 25 Sprints. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_967b" /* GXT: Win 10 Sprints. */;
			}
			else
			{
				return "AWS_967a" /* GXT: Win 5 Sprints. */;
			}
			break;
		
		case 109:
			if (iParam1 == 5)
			{
				return "AWS_946d" /* GXT: Win 50 races in the Street Race Series. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_946c" /* GXT: Win 25 races in the Street Race Series. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_946b" /* GXT: Win 10 races in the Street Race Series. */;
			}
			else
			{
				return "AWS_946a" /* GXT: Win 5 races in the Street Race Series. */;
			}
			break;
		
		case 110:
			if (iParam1 == 5)
			{
				return "AWS_947d" /* GXT: Win 50 races in the Pursuit Series. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_947c" /* GXT: Win 25 races in the Pursuit Series. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_947b" /* GXT: Win 10 races in the Pursuit Series. */;
			}
			else
			{
				return "AWS_947a" /* GXT: Win 5 races in the Pursuit Series. */;
			}
			break;
		
		case 112:
			if (iParam1 == 5)
			{
				return "AWS_949d" /* GXT: Successfully mod and deliver 50 customer vehicles from your Auto Shop. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_949c" /* GXT: Successfully mod and deliver 25 customer vehicles from your Auto Shop. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_949b" /* GXT: Successfully mod and deliver 10 customer vehicles from your Auto Shop. */;
			}
			else
			{
				return "AWS_949a" /* GXT: Successfully mod and deliver 5 customer vehicles from your Auto Shop. */;
			}
			break;
		
		case 114:
			if (iParam1 == 5)
			{
				return "AWS_952d" /* GXT: Complete 40 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_952c" /* GXT: Complete 20 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_952b" /* GXT: Complete 10 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			else
			{
				return "AWS_952a" /* GXT: Complete 5 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			break;
		
		case 115:
			if (iParam1 == 5)
			{
				return "AWS_961d" /* GXT: Complete 100 Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_961c" /* GXT: Complete 50 Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_961b" /* GXT: Complete 25 Contracts for KDJ and Sessanta. */;
			}
			else
			{
				return "AWS_961a" /* GXT: Complete 5 Contracts for KDJ and Sessanta. */;
			}
			break;
		
		case 116:
			if (iParam1 == 5)
			{
				return "AWS_962d" /* GXT: Carry out over 30 headshots across all scenes in Camhedz. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_962c" /* GXT: Carry out over 20 headshots across all scenes in Camhedz. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_962b" /* GXT: Carry out over 10 headshots across all scenes in Camhedz. */;
			}
			else
			{
				return "AWS_962a" /* GXT: Carry out over 5 headshots across all scenes in Camhedz. */;
			}
			break;
		
		case 111:
			if (iParam1 == 5)
			{
				return "AWS_948d" /* GXT: Drive one of the test rides for 240 minutes inside the Test Track. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_948c" /* GXT: Drive one of the test rides for 120 minutes inside the Test Track. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_948b" /* GXT: Drive one of the test rides for 60 minutes inside the Test Track. */;
			}
			else
			{
				return "AWS_948a" /* GXT: Drive one of the test rides for 30 minutes inside the Test Track. */;
			}
			break;
		
		case 113:
			if (iParam1 == 5)
			{
				return "AWS_950d" /* GXT: Deliver 100 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_950c" /* GXT: Deliver 50 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_950b" /* GXT: Deliver 25 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			else
			{
				return "AWS_950a" /* GXT: Deliver 10 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			break;
		
		case 117:
			if (iParam1 == 5)
			{
				return "AWS_978d" /* GXT: Complete 50 Security Contracts. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_978c" /* GXT: Complete 25 Security Contracts. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_978b" /* GXT: Complete 15 Security Contracts. */;
			}
			else
			{
				return "AWS_978a" /* GXT: Complete 5 Security Contracts. */;
			}
			break;
		
		case 118:
			if (iParam1 == 5)
			{
				return "AWS_979d" /* GXT: Complete 50 Payphone Hits. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_979c" /* GXT: Complete 25 Payphone Hits. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_979b" /* GXT: Complete 15 Payphone Hits. */;
			}
			else
			{
				return "AWS_979a" /* GXT: Complete 5 Payphone Hits. */;
			}
			break;
		
		case 119:
			return "AWS_983" /* GXT: Watch Dr. Dre working in Record A Studios. */;
			break;
		
		case 120:
			return "AWS_1002" /* GXT: Reach the gateway as the rabbit in First Dose - Uncontrolled Substance. */;
			break;
		
		case 121:
			if (iParam1 == 5)
			{
				return "AWS_1003d" /* GXT: Complete 50 Fooligan Jobs for Dax. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_1003c" /* GXT: Complete 20 Fooligan Jobs for Dax. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_1003b" /* GXT: Complete 10 Fooligan Jobs for Dax. */;
			}
			else
			{
				return "AWS_1003a" /* GXT: Complete 5 Fooligan Jobs for Dax. */;
			}
			break;
		
		case 122:
			if (iParam1 == 5)
			{
				return "AWS_1004d" /* GXT: Source Supplies for the Acid Lab 50 times. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_1004c" /* GXT: Source Supplies for the Acid Lab 20 times. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_1004b" /* GXT: Source Supplies for the Acid Lab 10 times. */;
			}
			else
			{
				return "AWS_1004a" /* GXT: Source Supplies for the Acid Lab 5 times. */;
			}
			break;
		
		case 123:
			if (iParam1 == 5)
			{
				return "AWS_1005d" /* GXT: Raid and steal from 50 stash houses. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_1005c" /* GXT: Raid and steal from 20 stash houses. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_1005b" /* GXT: Raid and steal from 10 stash houses. */;
			}
			else
			{
				return "AWS_1005a" /* GXT: Raid and steal from 5 stash houses. */;
			}
			break;
		
		case 124:
			if (iParam1 == 5)
			{
				return "AWS_1006d" /* GXT: Collect 50 G's Caches around Los Santos and Blaine County. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_1006c" /* GXT: Collect 20 G's Caches around Los Santos and Blaine County. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_1006b" /* GXT: Collect 10 G's Caches around Los Santos and Blaine County. */;
			}
			else
			{
				return "AWS_1006a" /* GXT: Collect 5 G's Caches around Los Santos and Blaine County. */;
			}
			break;
		
		case 125:
			if (iParam1 == 5)
			{
				return "AWS_1007d" /* GXT: Return stolen cash to a shop 5 times. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_1007c" /* GXT: Return stolen cash to a shop 3 times. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_1007b" /* GXT: Return stolen cash to a shop 2 times. */;
			}
			else
			{
				return "AWS_1007a" /* GXT: Return stolen cash to a shop once. */;
			}
			break;
		
		case 126:
			return "AWS_1008" /* GXT: Take out the hostile versions of yourself. */;
			break;
		
		case 127:
			if (iParam1 == 5)
			{
				return "AWS_1009d" /* GXT: Complete 50 fares during Taxi Work. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_1009c" /* GXT: Complete 20 fares during Taxi Work. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_1009b" /* GXT: Complete 10 fares during Taxi Work. */;
			}
			else
			{
				return "AWS_1009a" /* GXT: Complete 5 fares during Taxi Work. */;
			}
			break;
	}
	return "";
}

char* func_122(int iParam0, int iParam1)//Position - 0xF9CE
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "AWT_721";
		
		case 39:
			return "AWT_678";
		
		case 51:
			return "AWT_707";
		
		case 52:
			return "AWT_708";
		
		case 60:
			return "AWT_728";
		
		case 61:
			return "AWT_730";
		
		case 62:
			return "AWT_731";
		
		case 63:
			return "AWT_732";
		
		case 16:
			return "AWT_550";
		
		case 0:
			return "AWT_282";
		
		case 12:
			return "AWT_581";
		
		case 11:
			return "AWT_582";
		
		case 19:
			return "AWT_534";
		
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWT_509";
			}
			else
			{
				return "AWT_509";
			}
			break;
		
		case 15:
			return "AWT_559";
		
		case 17:
			return "AWT_535";
		
		case 21:
			return "AWT_586";
		
		case 14:
			return "AWT_566";
		
		case 22:
			return "AWT_589";
		
		case 1:
			return "AWT_506";
		
		case 2:
			return "AWT_585";
		
		case 3:
			return "AWT_541";
		
		case 4:
			return "AWT_584";
		
		case 5:
			return "AWT_540";
		
		case 6:
			return "AWT_539";
		
		case 7:
			return "AWT_538";
		
		case 8:
			return "AWT_537";
		
		case 9:
			return "AWT_536";
		
		case 10:
			return "AWT_583";
		
		case 23:
			return "AWT_610";
		
		case 24:
			return "AWT_611";
		
		case 25:
			return "AWT_631";
		
		case 26:
			return "AWT_632";
		
		case 27:
			return "AWT_639";
		
		case 28:
			return "AWT_640";
		
		case 29:
			return "AWT_699";
		
		case 30:
			return "AWT_661";
		
		case 31:
			return "AWT_662";
		
		case 32:
			return "AWT_663";
		
		case 33:
			return "AWT_665";
		
		case 34:
			return "AWT_666";
		
		case 35:
			return "AWT_668";
		
		case 36:
			return "AWT_669";
		
		case 37:
			return "AWT_675";
		
		case 38:
			return "AWT_676";
		
		case 40:
			return "AWT_679";
		
		case 41:
			return "AWT_681";
		
		case 42:
			return "AWT_682";
		
		case 43:
			return "AWT_677";
		
		case 44:
			return "AWT_683";
		
		case 45:
			return "AWT_684";
		
		case 46:
			return "AWT_685";
		
		case 47:
			return "AWT_692";
		
		case 48:
			return "AWT_696";
		
		case 49:
			return "AWT_693";
		
		case 54:
			return "AWT_710";
		
		case 55:
			return "AWT_703";
		
		case 56:
			return "AWT_704";
		
		case 57:
			return "AWT_722";
		
		case 58:
			return "AWT_723";
		
		case 59:
			return "AWT_716";
		
		case 134:
			return "AWT_740" /* GXT: Captured */;
		
		case 135:
			return "AWT_741" /* GXT: The Postman */;
		
		case 136:
			return "AWT_742" /* GXT: Gimme That */;
		
		case 137:
			return "AWT_743" /* GXT: No You Don't */;
		
		case 138:
			return "AWT_744" /* GXT: Death Defying */;
		
		case 67:
			return "AWT_782";
		
		case 128:
			return "AWT_745" /* GXT: The Big Time */;
		
		case 129:
			return "AWT_746" /* GXT: Be Prepared */;
		
		case 130:
			return "AWT_747" /* GXT: For Hire */;
		
		case 131:
			return "AWT_748" /* GXT: Shot Caller */;
		
		case 132:
			return "AWT_749";
		
		case 133:
			return "AWT_752" /* GXT: Decorated */;
		
		case 139:
			return "AWT_755" /* GXT: Lights Out */;
		
		case 140:
			return "AWT_757" /* GXT: In Control */;
		
		case 141:
			return "AWT_758" /* GXT: Psycho Killer */;
		
		case 142:
			return "AWT_759" /* GXT: Calm Down */;
		
		case 143:
			return "AWT_760" /* GXT: Still Standing */;
		
		case 144:
			return "AWT_761" /* GXT: One and Only */;
		
		case 145:
			return "AWT_762" /* GXT: One Man Army */;
		
		case 146:
			return "AWT_764" /* GXT: Moving Day */;
		
		case 147:
			return "AWT_788";
		
		case 148:
			return "AWT_789";
		
		case 149:
			return "AWT_790";
		
		case 150:
			return "AWT_791";
		
		case 151:
			return "AWT_792";
		
		case 70:
			return "AWT_817";
		
		case 71:
			return "AWT_818";
		
		case 72:
			return "AWT_821";
		
		case 73:
			return "AWT_822";
		
		case 74:
			return "AWT_823";
		
		case 75:
			return "AWT_824";
		
		case 76:
			return "AWT_825";
		
		case 77:
			return "AWT_826";
		
		case 78:
			return "AWT_827";
		
		case 79:
			return "AWT_828";
		
		case 80:
			return "AWT_829";
		
		case 81:
			return "AWT_830";
		
		case 82:
			return "AWT_831";
		
		case 83:
			return "AWT_832";
		
		case 84:
			return "AWT_833";
		
		case 85:
			return "AWT_834";
		
		case 86:
			return "AWT_835";
		
		case 87:
			return "AWT_845" /* GXT: High Roller */;
		
		case 88:
			return "AWT_847" /* GXT: Preparation */;
		
		case 89:
			return "AWT_848" /* GXT: Asleep On The Job */;
		
		case 90:
			return "AWT_849" /* GXT: Daily Cash Grab */;
		
		case 91:
			return "AWT_850" /* GXT: Big Brother */;
		
		case 92:
			return "AWT_851" /* GXT: Sharpshooter */;
		
		case 93:
			return "AWT_852" /* GXT: Race Champion */;
		
		case 94:
			return "AWT_853" /* GXT: Platinum Sword */;
		
		case 95:
			return "AWT_854" /* GXT: Coin Purse */;
		
		case 96:
			return "AWT_855" /* GXT: Astrochimp */;
		
		case 97:
			return "AWT_856" /* GXT: Masterful */;
		
		case 99:
			return "AWT_936" /* GXT: Sun Set */;
		
		case 100:
			return "AWT_937" /* GXT: Treasure Hunter */;
		
		case 101:
			return "AWT_938" /* GXT: Wreck Diving */;
		
		case 102:
			return "AWT_939" /* GXT: Keinemusik */;
		
		case 103:
			return "AWT_940" /* GXT: Palms Trax */;
		
		case 104:
			return "AWT_941" /* GXT: Moodymann */;
		
		case 105:
			return "AWT_942" /* GXT: Fill Your Bags */;
		
		case 106:
			return "AWT_943" /* GXT: Prepped */;
		
		case 107:
			return "AWT_945" /* GXT: LS Car Meet Member */;
			break;
		
		case 108:
			return "AWT_967" /* GXT: Sprint Racer */;
			break;
		
		case 109:
			return "AWT_946" /* GXT: Street Racer */;
			break;
		
		case 110:
			return "AWT_947" /* GXT: Pursuit Racer */;
			break;
		
		case 112:
			return "AWT_949" /* GXT: Special Delivery */;
			break;
		
		case 114:
			return "AWT_952" /* GXT: Groundwork */;
			break;
		
		case 115:
			return "AWT_961" /* GXT: Contractual Criminal */;
			break;
		
		case 116:
			return "AWT_962" /* GXT: Faces Of Death */;
			break;
		
		case 111:
			return "AWT_948" /* GXT: Tried and Tested */;
			break;
		
		case 113:
			return "AWT_950" /* GXT: Car Exporter */;
			break;
		
		case 117:
			return "AWT_978" /* GXT: Contractual Obligations */;
			break;
		
		case 118:
			return "AWT_979" /* GXT: Cold Caller */;
			break;
		
		case 119:
			return "AWT_983" /* GXT: Producer */;
			break;
		
		case 120:
			return "AWT_1002" /* GXT: Run Rabbit Run */;
			break;
		
		case 121:
			return "AWT_1003" /* GXT: Call Me */;
			break;
		
		case 122:
			return "AWT_1004" /* GXT: Chemical Attraction */;
			break;
		
		case 123:
			return "AWT_1005" /* GXT: Stashes To Stashes */;
			break;
		
		case 124:
			return "AWT_1006" /* GXT: Here Comes The Drop */;
			break;
		
		case 125:
			return "AWT_1007" /* GXT: Good Samaritan */;
			break;
		
		case 126:
			return "AWT_1008" /* GXT: Your Own Worst Enemy */;
			break;
		
		case 127:
			return "AWT_1009" /* GXT: Taxi Driver */;
			break;
	}
	return "";
}

int func_123(int iParam0, int iParam1)//Position - 0x10181
{
	if (func_80(func_50(iParam0, -1), func_52(iParam0, 5, iParam1)))
	{
		return 5;
	}
	if (func_80(func_50(iParam0, -1), func_52(iParam0, 4, iParam1)))
	{
		return 5;
	}
	if (func_80(func_50(iParam0, -1), func_52(iParam0, 3, iParam1)))
	{
		return 4;
	}
	if (func_80(func_50(iParam0, -1), func_52(iParam0, 2, iParam1)))
	{
		return 3;
	}
	return 2;
}

int func_124(int iParam0, int iParam1)//Position - 0x101F6
{
	if (!func_80(func_50(iParam0, -1), func_52(iParam0, 2, iParam1)))
	{
		return 0;
	}
	if (!func_80(func_50(iParam0, -1), func_52(iParam0, 3, iParam1)))
	{
		return 2;
	}
	if (!func_80(func_50(iParam0, -1), func_52(iParam0, 4, iParam1)))
	{
		return 3;
	}
	if (!func_80(func_50(iParam0, -1), func_52(iParam0, 5, iParam1)))
	{
		return 4;
	}
	return 5;
}

bool func_125()//Position - 0x1026F
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_126()//Position - 0x10285
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_127()//Position - 0x1029B
{
	return Global_262145.f_33965 /* Tunable: XM22_STORY_PART_TWO_ENABLED */;
}

void func_128(var uParam0, var uParam1)//Position - 0x102AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 12;
	iVar1 = uParam0->f_455;
	switch (uParam1->f_5)
	{
		case 0:
			iVar1 = iVar1;
			break;
		
		default:
			if (uParam1->f_5 < iLocal_109)
			{
				iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
			}
			else
			{
				iVar1 = (iVar1 + (iVar0 * uParam1->f_5));
			}
			break;
	}
	func_138(Global_1652690.f_473[uParam0->f_455]);
	func_130(Global_1652690.f_486[uParam0->f_455]);
	iVar2 = uParam1->f_5 + 1;
	iVar3 = iLocal_109 + 1;
	func_129(0, iVar2, iVar3, "HUD_PAGE" /* GXT: Page ~1~ of ~1~ */, 0);
}

void func_129(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)//Position - 0x1033D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_22("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_130(int iParam0)//Position - 0x1039A
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_137(iParam0))
	{
		bVar0 = false;
		bVar1 = false;
		if (func_137(iParam0))
		{
			bVar0 = func_136(iParam0);
			if (func_133(iParam0))
			{
				bVar1 = true;
			}
		}
		if (!BitTest(Global_1652690.f_471, bVar0))
		{
			MISC::SET_BIT(&(Global_1652690.f_471), bVar0);
		}
		if (bVar1)
		{
			if (!BitTest(Global_1652690.f_472, bVar0))
			{
				MISC::SET_BIT(&(Global_1652690.f_472), bVar0);
			}
		}
	}
	if (func_132(iParam0))
	{
		bVar2 = false;
		bVar3 = false;
		if (func_132(iParam0))
		{
			bVar2 = func_131(iParam0);
			if (func_133(iParam0))
			{
				bVar3 = true;
			}
		}
		if (!BitTest(Global_1652690.f_499, bVar2))
		{
			MISC::SET_BIT(&(Global_1652690.f_499), bVar2);
		}
		if (bVar3)
		{
			if (!BitTest(Global_1652690.f_500, bVar2))
			{
				MISC::SET_BIT(&(Global_1652690.f_500), bVar2);
			}
		}
	}
}

int func_131(int iParam0)//Position - 0x10470
{
	switch (iParam0)
	{
		case 120:
			return 13;
			break;
		
		case 121:
			return 14;
			break;
		
		case 122:
			return 18;
			break;
		
		case 123:
			return 19;
			break;
		
		case 124:
			return 20;
			break;
		
		case 125:
			return 21;
			break;
		
		case 126:
			return 22;
			break;
		
		case 127:
			return 23;
			break;
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x104F0
{
	switch (iParam0)
	{
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
			return 1;
			break;
	}
	return 0;
}

bool func_133(int iParam0)//Position - 0x10537
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_134(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_55(iVar1));
}

int func_134(var uParam0)//Position - 0x10554
{
	switch (func_135(uParam0))
	{
		case 758:
			return func_49(758, -1);
		
		case 759:
			return func_49(759, -1);
		
		case 760:
			return func_49(760, -1);
		
		case 761:
			return func_49(761, -1);
		
		case 8735:
			return func_49(8735, -1);
		
		default:
	}
	return 0;
}

int func_135(var uParam0)//Position - 0x105BD
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_58(iVar0);
	switch (iVar1)
	{
		case 0:
			return 758;
			break;
		
		case 1:
			return 759;
			break;
		
		case 2:
			return 760;
			break;
		
		case 3:
			return 761;
			break;
		
		case 4:
			return 8735;
			break;
	}
	return 14385;
}

int func_136(int iParam0)//Position - 0x10626
{
	switch (iParam0)
	{
		case 117:
			return 13;
			break;
		
		case 118:
			return 14;
			break;
		
		case 119:
			return 18;
			break;
	}
	return 0;
}

int func_137(int iParam0)//Position - 0x10660
{
	switch (iParam0)
	{
		case 117:
		case 118:
		case 119:
			return 1;
			break;
	}
	return 0;
}

void func_138(int iParam0)//Position - 0x10689
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	if (func_142(iParam0))
	{
		bVar0 = false;
		bVar1 = false;
		if (func_142(iParam0))
		{
			bVar0 = func_141(iParam0);
			bVar1 = func_108(iParam0, -1);
		}
		if (!BitTest(Global_1652690.f_471, bVar0))
		{
			MISC::SET_BIT(&(Global_1652690.f_471), bVar0);
		}
		if (bVar1)
		{
			if (!BitTest(Global_1652690.f_472, bVar0))
			{
				MISC::SET_BIT(&(Global_1652690.f_472), bVar0);
			}
		}
	}
	if (func_140(iParam0))
	{
		bVar2 = false;
		bVar3 = false;
		if (func_140(iParam0))
		{
			bVar2 = func_139(iParam0);
			bVar3 = func_108(iParam0, -1);
		}
		if (!BitTest(Global_1652690.f_499, bVar2))
		{
			MISC::SET_BIT(&(Global_1652690.f_499), bVar2);
		}
		if (bVar3)
		{
			if (!BitTest(Global_1652690.f_500, bVar2))
			{
				MISC::SET_BIT(&(Global_1652690.f_500), bVar2);
			}
		}
	}
}

int func_139(int iParam0)//Position - 0x10759
{
	switch (iParam0)
	{
		case 143:
			return 0;
			break;
		
		case 144:
			return 1;
			break;
		
		case 145:
			return 2;
			break;
		
		case 146:
			return 3;
			break;
		
		case 147:
			return 4;
			break;
		
		case 148:
			return 5;
			break;
		
		case 149:
			return 6;
			break;
		
		case 150:
			return 7;
			break;
		
		case 151:
			return 8;
			break;
		
		case 152:
			return 9;
			break;
		
		case 153:
			return 10;
			break;
		
		case 154:
			return 11;
			break;
		
		case 155:
			return 12;
			break;
		
		case 156:
			return 15;
			break;
		
		case 157:
			return 16;
			break;
		
		case 158:
			return 17;
			break;
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x10841
{
	switch (iParam0)
	{
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			return 1;
			break;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x108B8
{
	switch (iParam0)
	{
		case 127:
			return 0;
			break;
		
		case 128:
			return 1;
			break;
		
		case 129:
			return 2;
			break;
		
		case 130:
			return 3;
			break;
		
		case 131:
			return 4;
			break;
		
		case 132:
			return 5;
			break;
		
		case 133:
			return 6;
			break;
		
		case 134:
			return 7;
			break;
		
		case 135:
			return 8;
			break;
		
		case 136:
			return 9;
			break;
		
		case 140:
			return 10;
			break;
		
		case 141:
			return 11;
			break;
		
		case 142:
			return 12;
			break;
		
		case 137:
			return 15;
			break;
		
		case 138:
			return 16;
			break;
		
		case 139:
			return 17;
			break;
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x109A0
{
	switch (iParam0)
	{
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 142:
		case 141:
			return 1;
			break;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x10A17
{
	int iVar0;
	int iVar1;
	
	iVar0 = (*uParam0 + *uParam1 * 4);
	switch (iParam3)
	{
		case 188:
			if (iParam2 == iLocal_109)
			{
				if (iVar0 < 0 || iVar0 > (iLocal_110 - 1))
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 < 0 || iVar0 > (iLocal_110 - 1))
						{
							*uParam1 = (3 - iVar1);
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
			}
			break;
		
		case 187:
			if (iParam2 == iLocal_109)
			{
				if (iVar0 < 0 || iVar0 > (iLocal_110 - 1))
				{
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 < 0 || iVar0 > (iLocal_110 - 1))
						{
							*uParam1 = iVar1;
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
			}
			break;
		
		case 189:
			break;
		
		case 190:
			if (iParam2 == iLocal_109)
			{
				if (*uParam0 == 0)
				{
					iVar0 = (*uParam0 + *uParam1 * 4);
					iVar1 = 0;
					while (iVar1 <= 3)
					{
						if (iVar0 > (iLocal_110 - 1))
						{
							*uParam1 = (*uParam1 - 1);
							iVar0 = (*uParam0 + *uParam1 * 4);
						}
						else
						{
							iVar1 = 3;
						}
						iVar1++;
					}
				}
				else if (iVar0 > (iLocal_110 - 1))
				{
					if (*uParam0 > 0)
					{
						*uParam0 = (*uParam0 - 1);
					}
					else
					{
						*uParam0 = 0;
					}
					iVar0 = (*uParam0 + *uParam1 * 4);
				}
			}
			break;
	}
	return iVar0;
}

void func_144(var uParam0, var uParam1)//Position - 0x10B81
{
	if (uParam1->f_5 > iLocal_109)
	{
		func_153(uParam0);
		uParam1->f_5 = 0;
		uParam1->f_1 = 0;
	}
}

void func_145()//Position - 0x10BA2
{
	func_129(0, -1, -1, 0, 0);
}

void func_146()//Position - 0x10BB3
{
	func_147();
	func_129(0, -1, -1, 0, 0);
}

void func_147()//Position - 0x10BC8
{
	func_148(0);
}

void func_148(bool bParam0)//Position - 0x10BD5
{
	if (bParam0)
	{
		func_149(0, 3, 0, 2, 0, 0);
	}
	else
	{
		func_149(0, 2, 0, 2, 1, 0);
	}
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x10BF9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_150(var uParam0)//Position - 0x10C3C
{
	uParam0->f_463 = 1;
}

void func_151(var uParam0)//Position - 0x10C4A
{
	uParam0->f_462 = 1;
}

void func_152(int iParam0, var uParam1)//Position - 0x10C58
{
	uParam1->f_455 = iParam0;
	uParam1->f_456 = iParam0;
}

void func_153(var uParam0)//Position - 0x10C6E
{
	func_154(uParam0);
	uParam0->f_460 = 1;
}

void func_154(var uParam0)//Position - 0x10C82
{
	struct<501> Var0;
	
	Var0.f_1 = 12;
	Var0.f_14 = 12;
	Var0.f_111 = 12;
	Var0.f_208 = 12;
	Var0.f_221 = 12;
	Var0.f_234 = 12;
	Var0.f_331 = 12;
	Var0.f_428 = 12;
	Var0.f_441 = 12;
	Var0.f_473 = 12;
	Var0.f_486 = 12;
	*uParam0 = { Var0 };
}

void func_155(var uParam0)//Position - 0x10CEB
{
	uParam0->f_429 = 1;
}

void func_156(int iParam0, var uParam1)//Position - 0x10CF9
{
	uParam1->f_426 = iParam0;
}

void func_157(var uParam0)//Position - 0x10D08
{
	func_158(uParam0);
	uParam0->f_428 = 1;
}

void func_158(var uParam0)//Position - 0x10D1C
{
	struct<430> Var0;
	
	Var0.f_1 = 18;
	Var0.f_20 = 18;
	Var0.f_309 = 18;
	Var0.f_328 = 18;
	Var0.f_347 = 18;
	Var0.f_366 = 18;
	Var0.f_385 = 18;
	Var0.f_404 = 18;
	*uParam0 = { Var0 };
}

