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
	struct<75> Local_86 = { 0, 0, 3, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_161[32];
	struct<54> Local_482 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	int iLocal_538 = 0;
	char* sLocal_539 = NULL;
	int iLocal_540 = 0;
	struct<3> Local_541 = { 0, 0, 0 } ;
	struct<3> Local_544 = { 0, 0, 0 } ;
	float fLocal_547 = 0f;
	int iLocal_548 = 0;
	struct<3> Local_549 = { 0, 0, 0 } ;
	struct<3> Local_552 = { 0, 0, 0 } ;
	int iLocal_555 = 0;
	var uLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	struct<3> Local_565 = { 0, 0, 0 } ;
	float fLocal_568 = 0f;
	struct<3> Local_569 = { 0, 0, 0 } ;
	float fLocal_572 = 0f;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	struct<3> Local_585 = { 0, 0, 0 } ;
	struct<3> Local_588 = { 0, 0, 0 } ;
	struct<3> Local_591 = { 0, 0, 0 } ;
	struct<3> Local_594 = { 0, 0, 0 } ;
	float fLocal_597 = 0f;
	struct<3> Local_598 = { 0, 0, 0 } ;
	struct<3> Local_601 = { 0, 0, 0 } ;
	float fLocal_604 = 0f;
	var uLocal_605 = 16;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	int iLocal_770[5] = { 0, 0, 0, 0, 0 };
	int iLocal_776[5] = { 0, 0, 0, 0, 0 };
	float fLocal_782 = 0f;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	struct<3> Local_806 = { 0, 0, 0 } ;
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
	iLocal_540 = joaat("MP_M_ShopKeep_01");
	iLocal_548 = -1;
	iLocal_555 = -1;
	iLocal_573 = joaat("prop_till_01");
	iLocal_574 = SYSTEM::ROUND(Global_262145.f_2432 /* Tunable: LOW_HOLD_UPS_MODIFIER */);
	iLocal_575 = SYSTEM::ROUND(Global_262145.f_2428 /* Tunable: HIGH_HOLD_UPS_MODIFIER */) + 1;
	iLocal_576 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_483(ScriptParam_0))
		{
			func_478();
		}
		if (func_477(1))
		{
			func_464(PLAYER::PLAYER_ID(), 0, 98816, 0);
		}
	}
	while (true)
	{
		func_463();
		if (func_455())
		{
			func_478();
		}
		func_444();
		if (BitTest(Local_86.f_25, 6))
		{
			if (func_477(1))
			{
				func_464(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_441();
				MISC::CLEAR_BIT(&(Local_482.f_53), 7);
				func_440();
			}
		}
		switch (func_439(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
				if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
				{
					if (func_429())
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_428(Local_482.f_0), false);
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_0))
						{
							if (func_427() > 0)
							{
								if (!func_426(Local_86.f_0))
								{
									func_425(&uLocal_605, 3, NETWORK::NET_TO_PED(Local_86.f_0), &(Local_86.f_48), 1, 0);
									func_424();
								}
								MISC::SET_BIT(&(Local_482.f_52), 22);
								Global_1984597 = Local_482.f_0;
								Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_427() == 6)
				{
					Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_272(&Local_482, Local_549, Local_552, &Local_86, &(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_PED(Local_86.f_0), Local_598, Local_601, fLocal_604, false, true, 0), 0);
				func_265();
				if (func_427() == 2)
				{
					func_134();
				}
				else if (func_427() == 6)
				{
					Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_588, 30f, 30f, 30f, false, true, 0))
				{
					Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_133(&(Local_86.f_71));
				if (func_132(&(Local_86.f_71)))
				{
					Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
			
			case 6:
				func_54();
				func_478();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_427())
			{
				case 0:
					if (!BitTest(Local_482.f_52, 16))
					{
						func_52(func_53(0));
						func_52(func_53(1));
						func_52(func_53(2));
						STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
						if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
						{
							if (func_429())
							{
								MISC::CLEAR_AREA(Local_549, 1.5f, false, true, false, true);
								MISC::CLEAR_AREA(Local_544, 1.5f, false, true, false, true);
								MISC::SET_BIT(&(Local_482.f_52), 16);
							}
						}
					}
					else if (func_50())
					{
						Local_86.f_13 = 2;
					}
					break;
				
				case 2:
					func_49();
					func_46();
					func_30();
					func_29();
					func_22();
					func_21();
					func_13();
					func_12();
					if (func_4())
					{
						func_1();
						Local_86.f_13 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x397
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_14))
	{
		if (func_3(Local_86.f_14))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_86.f_14)))
			{
				ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_86.f_14), true, true);
				func_2(&(Local_86.f_14));
			}
		}
	}
}

void func_2(var uParam0)//Position - 0x3DA
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_3(int iParam0)//Position - 0x3FE
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_4()//Position - 0x420
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()//Position - 0x434
{
	if (BitTest(Local_86.f_25, 2))
	{
		return 1;
	}
	if (BitTest(Local_86.f_25, 3))
	{
		return 1;
	}
	if (!func_11())
	{
		if ((BitTest(Local_86.f_25, 11) || BitTest(Local_86.f_25, 19)) || (BitTest(Local_86.f_25, 9) && !BitTest(Local_86.f_25, 20)))
		{
			func_6(Local_482.f_50, 1, func_7());
			return 1;
		}
		if (BitTest(Local_86.f_25, 18))
		{
			func_6(Local_482.f_50, 1, func_7());
			return 1;
		}
	}
	if (BitTest(Local_86.f_25, 18))
	{
		if (!BitTest(Local_86.f_26, 7))
		{
			func_6(Local_482.f_50, 1, func_7());
			MISC::SET_BIT(&(Local_86.f_26), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x4E9
{
	struct<4> Var0;
	
	Var0.f_0 = 1925046697;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_7()//Position - 0x521
{
	return func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_10(), -1, 0));
}

int func_8(int iParam0)//Position - 0x537
{
	var uVar0;
	
	if (func_9(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(var uParam0)//Position - 0x552
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

char* func_10()//Position - 0x574
{
	switch (Global_2697098)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_11()//Position - 0x594
{
	if ((BitTest(Local_86.f_25, 13) || BitTest(Local_86.f_25, 27)) || BitTest(Local_86.f_25, 28))
	{
		return 1;
	}
	return 0;
}

void func_12()//Position - 0x5C5
{
	var uVar0;
	
	if (!BitTest(Local_86.f_25, 21))
	{
		if (func_426(Local_86.f_0))
		{
			Local_86.f_74 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_86.f_0, &uVar0);
			MISC::SET_BIT(&(Local_86.f_25), 21);
		}
	}
	if (!BitTest(Local_86.f_25, 19))
	{
		if (BitTest(Local_86.f_25, 10) && Local_86.f_39 <= 0f)
		{
			MISC::SET_BIT(&(Local_86.f_25), 19);
		}
	}
	if (!BitTest(Local_86.f_26, 17))
	{
		if (BitTest(Local_86.f_25, 20))
		{
			if (func_3(Local_86.f_14))
			{
				OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_86.f_14), false, false);
				MISC::SET_BIT(&(Local_86.f_26), 17);
			}
		}
	}
	if (!BitTest(Local_86.f_25, 6))
	{
		if (Global_2794162.f_8 == 1)
		{
			MISC::SET_BIT(&(Local_86.f_25), 6);
			MISC::SET_BIT(&(Local_86.f_25), 16);
		}
	}
}

int func_13()//Position - 0x680
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || !BitTest(Local_86.f_27, 0))
	{
		return 0;
	}
	if (Local_86.f_68 != 6)
	{
		if (Local_86.f_68 > 0 && func_426(Local_86.f_16))
		{
			Local_86.f_68 = 6;
			return 0;
		}
		switch (Local_86.f_68)
		{
			case 0:
				if (!func_19(&uLocal_795, 10000, 0))
				{
					iVar0 = PED::GET_RANDOM_PED_AT_COORD(Local_598, 20f, 20f, 20f, -1);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							if (((((((iVar1 != joaat("MP_M_Freemode_01") && iVar1 != joaat("MP_F_Freemode_01")) && !PED::IS_COP_PED_IN_AREA_3D(Local_598, 25f, 25f, 25f)) && !ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_585, 1f, 1f, 2f, false, true, 0)) && !WEAPON::IS_PED_ARMED(iVar0, 7)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, true)) && PED::IS_PED_HUMAN(iVar0)) && func_18(iVar1))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
								{
									if (func_17(&(Local_86.f_16), iVar0, 1, 0))
									{
										WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_16), joaat("WEAPON_PISTOL"), 25000, false);
										PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_16), true);
										Local_86.f_68 = 1;
										MISC::SET_BIT(&(Local_86.f_27), 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_86.f_16), Global_1837221);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_86.f_16), 2);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_86.f_16), SYSTEM::ROUND((200f * Global_262145.f_165 /* Tunable: AI_HEALTH */)), 0);
										func_425(&uLocal_605, 4, NETWORK::NET_TO_PED(Local_86.f_16), "StoreHero", 1, 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_86.f_16), func_16(), 0, true);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((BitTest(Local_86.f_25, 9) || BitTest(Local_86.f_25, 5)) || BitTest(Local_86.f_25, 4))
				{
					Local_86.f_68 = 2;
				}
				break;
			
			case 2:
				if (func_19(&(Local_86.f_69), 3000, 0) || (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1))
				{
					func_15(&(Local_86.f_69));
					Local_86.f_68 = 3;
				}
				break;
			
			case 3:
				if (((BitTest(Local_86.f_25, 5) || BitTest(Local_86.f_27, 8)) || BitTest(Local_86.f_27, 9)) || func_19(&(Local_86.f_69), 5000, 0))
				{
					if (func_14() || func_19(&(Local_86.f_69), 5000, 0))
					{
						Local_86.f_68 = 4;
					}
					else
					{
						Local_86.f_68 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_14()//Position - 0x94A
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_15(var uParam0)//Position - 0x968
{
	uParam0->f_1 = 0;
}

char* func_16()//Position - 0x975
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_17(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x9B4
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, bParam2, bParam3);
	*uParam0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam2)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x9EB
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("MP_M_Freemode_01") || iParam0 == joaat("MP_M_FIBSec_01")) || iParam0 == joaat("MP_S_M_Armoured_01")) || iParam0 == joaat("S_F_Y_AirHostess_01")) || iParam0 == joaat("S_F_Y_Baywatch_01")) || iParam0 == joaat("S_F_Y_Cop_01")) || iParam0 == joaat("S_F_Y_Ranger_01")) || iParam0 == joaat("S_F_Y_Scrubs_01")) || iParam0 == joaat("S_F_Y_Sheriff_01")) || iParam0 == joaat("S_M_M_Armoured_01")) || iParam0 == joaat("S_M_M_Armoured_02")) || iParam0 == joaat("S_M_M_Bouncer_01")) || iParam0 == joaat("S_M_M_CIASec_01")) || iParam0 == joaat("S_M_M_ChemSec_01")) || iParam0 == joaat("S_M_M_Doctor_01")) || iParam0 == joaat("S_M_M_FIBOffice_01")) || iParam0 == joaat("S_M_M_FIBOffice_02")) || iParam0 == joaat("S_M_M_HighSec_01")) || iParam0 == joaat("S_M_M_HighSec_02")) || iParam0 == joaat("S_M_M_Janitor")) || iParam0 == joaat("S_M_M_LSMetro_01")) || iParam0 == joaat("S_M_M_Marine_01")) || iParam0 == joaat("S_M_M_Marine_02")) || iParam0 == joaat("S_M_M_Paramedic_01")) || iParam0 == joaat("S_M_M_Pilot_01")) || iParam0 == joaat("S_M_M_Pilot_02")) || iParam0 == joaat("S_M_M_Postal_01")) || iParam0 == joaat("S_M_M_Postal_02")) || iParam0 == joaat("S_M_M_PrisGuard_01")) || iParam0 == joaat("S_M_M_Scientist_01")) || iParam0 == joaat("S_M_M_Security_01")) || iParam0 == joaat("S_M_M_UPS_01")) || iParam0 == joaat("S_M_M_UPS_02")) || iParam0 == joaat("S_M_Y_AirWorker")) || iParam0 == joaat("S_M_Y_ArmyMech_01")) || iParam0 == joaat("S_M_Y_BayWatch_01")) || iParam0 == joaat("S_M_Y_BlackOps_01")) || iParam0 == joaat("S_M_Y_BlackOps_02")) || iParam0 == joaat("S_M_Y_Cop_01")) || iParam0 == joaat("S_M_Y_Doorman_01")) || iParam0 == joaat("S_M_Y_Fireman_01")) || iParam0 == joaat("S_M_Y_Garbage")) || iParam0 == joaat("S_M_Y_HwayCop_01")) || iParam0 == joaat("S_M_Y_Marine_01")) || iParam0 == joaat("S_M_Y_Marine_02")) || iParam0 == joaat("S_M_Y_Marine_03")) || iParam0 == joaat("S_M_Y_Pilot_01")) || iParam0 == joaat("S_M_Y_Ranger_01")) || iParam0 == joaat("S_M_Y_Sheriff_01")) || iParam0 == joaat("S_M_Y_Swat_01")) || iParam0 == joaat("S_M_Y_USCG_01")) || iParam0 == joaat("S_M_Y_Valet_01")) || iParam0 == joaat("S_M_Y_Waiter_01")) || iParam0 == joaat("U_M_M_JewelSec_01")) || iParam0 == joaat("S_M_Y_Casino_01"))
	{
		return 0;
	}
	return 1;
}

int func_19(var uParam0, int iParam1, bool bParam2)//Position - 0xCF7
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
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

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0xD55
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

void func_21()//Position - 0xD9A
{
	if (Local_86.f_32 == 0)
	{
		if (Local_86.f_3 >= 2 && Local_86.f_3 != 9)
		{
			Local_86.f_32 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(101 /*EVENT_SHOCKING_MUGGING*/, PLAYER::PLAYER_PED_ID(), 60000f);
		}
	}
}

void func_22()//Position - 0xDD2
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!BitTest(Local_86.f_1, 5))
	{
		if (Local_86.f_43 > 0)
		{
			func_26();
			if (!BitTest(Local_86.f_1, 5))
			{
				return;
			}
		}
	}
	if (BitTest(Local_86.f_1, 1))
	{
		if (Local_86.f_2 == 3 && !BitTest(Local_86.f_25, 9))
		{
			Local_86.f_2 = 0;
		}
		MISC::CLEAR_BIT(&(Local_86.f_1), 1);
	}
	switch (Local_86.f_2)
	{
		case 0:
			if ((((func_3(Local_86.f_0) && !func_426(Local_86.f_0)) && func_3(Local_86.f_17[Local_86.f_28])) && Local_86.f_3 != 8) && Local_86.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_86.f_0)))
				{
					if (BitTest(Local_86.f_25, 9) || BitTest(Local_86.f_1, 4))
					{
						Local_86.f_2 = 2;
						return;
					}
					if (!iLocal_538)
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_86.f_0), Local_86.f_44, 1600);
						iLocal_538 = 1;
					}
					if (func_19(&uLocal_785, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_86.f_0));
						fVar1 = (Local_86.f_44 - 10f);
						fVar2 = (Local_86.f_44 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_86.f_44 - 10f) + 360f);
							fVar1 = ((Local_86.f_44 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_86.f_44 - 10f) - 360f);
							fVar1 = ((Local_86.f_44 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_19(&uLocal_791, 1000, 0)) || func_19(&uLocal_791, 3125, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_86.f_0));
							Local_86.f_29 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_PED(Local_86.f_0), -0.65f, 0.87f, -0.02f), Local_552, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_86.f_0), Local_86.f_29, "mp_am_hold_up", func_25(Local_86.f_28), 1.5f, -1.5f, 157, 16, 1000f, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[Local_86.f_28]))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_17[Local_86.f_28]), true, false);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_86.f_17[Local_86.f_28]), Local_86.f_29, "mp_am_hold_up", func_24(Local_86.f_28), 4f, -4f, 8);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_86.f_29);
							Local_86.f_2 = 1;
							iLocal_555 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_29);
						}
					}
				}
			}
			break;
		
		case 1:
			if (BitTest(Local_86.f_25, 9) || BitTest(Local_86.f_1, 4))
			{
				iLocal_555 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_29);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_555))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_86.f_29);
				}
				Local_86.f_2 = 2;
				return;
			}
			if (iLocal_555 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_555) || func_19(&uLocal_787, 2000, 0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_555) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_555) == 1f) || func_19(&uLocal_787, 2000, 0))
					{
						if ((func_3(Local_86.f_0) && !func_426(Local_86.f_0)) && !BitTest(Local_86.f_25, 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_86.f_0));
						}
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_86.f_29);
						Local_86.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_555 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_29);
			}
			break;
		
		case 2:
			func_3(Local_86.f_17[Local_86.f_28]);
			if (func_19(&uLocal_793, 1000, 0) && func_3(Local_86.f_17[Local_86.f_28]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_OBJ(Local_86.f_17[Local_86.f_28])))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_17[Local_86.f_28]), false, false);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_17[Local_86.f_28]), true);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_86.f_17[Local_86.f_28]), func_23(Local_86.f_28), true, false, false, true);
				}
				iLocal_555 = -1;
				iLocal_538 = 0;
				if (BitTest(Local_86.f_1, 4))
				{
					MISC::CLEAR_BIT(&(Local_86.f_1), 4);
				}
				func_15(&uLocal_793);
				func_15(&uLocal_787);
				func_15(&uLocal_785);
				func_15(&uLocal_791);
				Local_86.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_23(int iParam0)//Position - 0x1209
{
	switch (iParam0)
	{
		case 3:
			return Local_569 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return Local_569 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return Local_569 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return Local_569 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return Local_569 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return Local_569 - Vector(1f, -0.2f, -0.1f);
		
		case 6:
			return Local_569 - Vector(1f, -0.2f, 0.2f);
		
		default:
	}
	return Local_569 - Vector(1f, 0f, -0.1f);
}

char* func_24(int iParam0)//Position - 0x12D3
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		case 6:
			return "purchase_beer";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_25(int iParam0)//Position - 0x1339
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		case 6:
			return "purchase_beer_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_26()//Position - 0x13A1
{
	if ((((((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[3]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[1])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[2])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[4])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[0])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[5])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[6]))
	{
		if ((((((func_52(func_28(3)) && func_52(func_28(1))) && func_52(func_28(2))) && func_52(func_28(4))) && func_52(func_28(0))) && func_52(func_28(5))) && func_52(func_28(6)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 7, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[3]))
				{
					if (func_27(&(Local_86.f_17[3]), func_28(3), func_23(3), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_86.f_17[3]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_17[3]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_17[3]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[1]))
				{
					if (func_27(&(Local_86.f_17[1]), func_28(1), func_23(1), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_86.f_17[1]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_17[1]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_17[1]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[2]))
				{
					if (func_27(&(Local_86.f_17[2]), func_28(2), func_23(2), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_86.f_17[2]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_17[2]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_17[2]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[4]))
				{
					if (func_27(&(Local_86.f_17[4]), func_28(4), func_23(4), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_86.f_17[4]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_17[4]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_17[4]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[0]))
				{
					if (func_27(&(Local_86.f_17[0]), func_28(0), func_23(0), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_86.f_17[0]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_17[0]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_17[0]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[5]))
				{
					if (func_27(&(Local_86.f_17[5]), func_28(5), func_23(5), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_86.f_17[5]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_17[5]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_17[5]), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_17[6]))
				{
					if (func_27(&(Local_86.f_17[6]), func_28(6), func_23(6), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_86.f_17[6]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_17[6]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_17[6]), false, false);
					}
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&(Local_86.f_1), 5);
		return 1;
	}
	return 0;
}

int func_27(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x1777
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_28(int iParam0)//Position - 0x181C
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		case 6:
			return joaat("prop_ld_can_01b");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_29()//Position - 0x1892
{
	float fVar0;
	
	if (!BitTest(Local_86.f_25, 9))
	{
		if (Global_2794162.f_8 == 1 || BitTest(Local_86.f_25, 6))
		{
			if ((((func_3(Local_86.f_14) && func_3(Local_86.f_0)) && !func_426(Local_86.f_0)) && Local_86.f_3 != 8) && Local_86.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_86.f_0)))
				{
					if (!BitTest(Local_482.f_52, 30))
					{
						TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_86.f_0), Local_86.f_44, 1600);
						MISC::SET_BIT(&(Local_482.f_52), 30);
					}
					if (func_19(&uLocal_783, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_86.f_0));
						if ((fVar0 > (Local_86.f_44 - 20f) && fVar0 < (Local_86.f_44 + 20f)) || func_19(&uLocal_789, 1500, 0))
						{
							TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_86.f_0));
							Local_86.f_31 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_549, Local_552, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_86.f_0), Local_86.f_31, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1000f, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_14))
							{
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_14), false);
								ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_86.f_14), true);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_86.f_14), Local_86.f_31, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_15))
							{
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_86.f_15), Local_86.f_31, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_86.f_31);
							MISC::SET_BIT(&(Local_86.f_25), 9);
						}
					}
				}
				else
				{
					Local_86.f_3 = 8;
				}
			}
		}
	}
	else if (!BitTest(Local_86.f_25, 17))
	{
		iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
		if (iLocal_548 != -1)
		{
			func_3(Local_86.f_0);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				MISC::SET_BIT(&(Local_86.f_25), 17);
			}
		}
	}
	else if (!BitTest(Local_86.f_26, 15))
	{
		iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
		if (iLocal_548 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
			{
				func_3(Local_86.f_0);
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_14) && func_3(Local_86.f_14)) && func_3(Local_86.f_0))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548) > 0.44f)
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_14), true, false);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_86.f_14), true, false);
						MISC::SET_BIT(&(Local_86.f_26), 15);
					}
				}
			}
		}
	}
}

int func_30()//Position - 0x1B1B
{
	int iVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_44();
	if (Local_86.f_3 != 9)
	{
		if (func_426(Local_86.f_0))
		{
			Local_86.f_3 = 9;
			return 0;
		}
		if ((BitTest(Local_86.f_25, 6) && !BitTest(Local_86.f_25, 9)) && Local_86.f_3 < 8)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_14) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_15))
			{
				Local_86.f_3 = 8;
			}
		}
		switch (Local_86.f_3)
		{
			case 0:
				if (!func_426(Local_86.f_0))
				{
					Local_86.f_3 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_86.f_25, 4))
				{
					Local_86.f_3 = 2;
				}
				else if (BitTest(Local_86.f_25, 6) || BitTest(Local_86.f_25, 9))
				{
					Local_86.f_3 = 4;
				}
				else if (func_42() || func_35(0))
				{
					Local_86.f_3 = 8;
				}
				else if (func_33())
				{
					Local_86.f_3 = 7;
				}
				break;
			
			case 2:
				if (BitTest(Local_86.f_25, 6) || BitTest(Local_86.f_25, 9))
				{
					Local_86.f_3 = 4;
				}
				else if (func_42() || func_35(1))
				{
					Local_86.f_3 = 8;
				}
				else if (func_33())
				{
					Local_86.f_3 = 7;
				}
				break;
			
			case 3:
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 1)
				{
					Local_86.f_3 = 4;
				}
				else if (func_35(1))
				{
					Local_86.f_3 = 8;
				}
				else if (func_33())
				{
					Local_86.f_3 = 7;
				}
				break;
			
			case 4:
				if (BitTest(Local_86.f_25, 17))
				{
					iVar0 = 0;
					iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
					if (iLocal_548 != -1)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
						{
							if (MISC::IS_BULLET_IN_AREA(Local_541, 3f, false))
							{
								if (!BitTest(Local_86.f_25, 25))
								{
									MISC::SET_BIT(&(Local_86.f_25), 25);
								}
								Local_86.f_35 = (Local_86.f_35 + 0.35f);
							}
							fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548);
							if (fVar1 >= 0.8f)
							{
								Local_86.f_39 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_86.f_39 = 0f;
							}
							else if (fVar1 > Local_86.f_39)
							{
								Local_86.f_39 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_86.f_39 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_86.f_3 = 6;
					}
					else if (func_35(1))
					{
						Local_86.f_3 = 8;
					}
					else if (func_33())
					{
						Local_86.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_42() || func_35(1))
				{
					Local_86.f_3 = 8;
				}
				break;
			
			case 6:
				func_31();
				if (func_42() || func_35(1))
				{
					Local_86.f_3 = 8;
				}
				else if (func_33())
				{
					Local_86.f_3 = 7;
				}
				else if (BitTest(Local_86.f_26, 3))
				{
					if (!BitTest(Local_86.f_26, 4))
					{
						Local_86.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_31();
				break;
			
			case 7:
				break;
		}
	}
	else if (!BitTest(Local_86.f_26, 10))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_0))
		{
			Local_86.f_45 = (Local_86.f_45 - 1);
			MISC::SET_BIT(&(Local_86.f_26), 10);
		}
	}
	return 1;
}

void func_31()//Position - 0x1E63
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Local_86.f_26, 2))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1 = (iLocal_576 + func_32());
		if (iVar0 < iVar1)
		{
			MISC::SET_BIT(&(Local_86.f_26), 3);
		}
		MISC::SET_BIT(&(Local_86.f_26), 2);
	}
}

int func_32()//Position - 0x1EA1
{
	int iVar0;
	
	iVar0 = (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_33()//Position - 0x1EC6
{
	int iVar0;
	int iVar1;
	
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/))
	{
		iVar0 = func_34(PLAYER::PLAYER_PED_ID());
		if ((((((iVar0 != joaat("WEAPON_UNARMED") && iVar0 != 0) && iVar0 != joaat("VEHICLE_WEAPON_PLAYER_BULLET")) && iVar0 != joaat("VEHICLE_WEAPON_PLAYER_BUZZARD")) && iVar0 != joaat("VEHICLE_WEAPON_PLAYER_LASER")) && iVar0 != joaat("VEHICLE_WEAPON_TANK")) && iVar0 != joaat("WEAPON_FLARE"))
		{
			iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
			if (((((((WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0 && iVar1 != joaat("GROUP_MELEE")) && iVar1 != joaat("GROUP_LOUDHAILER")) && iVar1 != 0) && iVar1 != joaat("GROUP_FIREEXTINGUISHER")) && iVar1 != joaat("GROUP_NIGHTVISION")) && iVar1 != joaat("GROUP_PARACHUTE")) && iVar1 != joaat("GROUP_DIGISCANNER"))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_581)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_34(int iParam0)//Position - 0x1FC6
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

int func_35(int iParam0)//Position - 0x1FDA
{
	int iVar0;
	struct<2> Var1;
	int iVar14;
	int iVar15;
	
	if (func_40(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	if (func_39(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (BitTest(Local_86.f_25, 5))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_86.f_0)))
	{
		return 1;
	}
	if (func_38() || func_37())
	{
		return 1;
	}
	if (func_36())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) == 186)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 13))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var1.f_0) && ENTITY::IS_ENTITY_A_PED(Var1.f_0))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_0);
					if (PED::IS_PED_INJURED(iVar14) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar14) == iLocal_581)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
						{
							iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
							if (iVar15 != NETWORK::NET_TO_PED(Local_86.f_0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Local_86.f_26, 5))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(Local_591 - Vector(25f, 25f, 25f), Local_591 + Vector(25f, 25f, 25f)))
			{
				MISC::SET_BIT(&(Local_86.f_26), 5);
			}
		}
	}
	return 0;
}

int func_36()//Position - 0x2120
{
	if (Local_482.f_50 >= 15 && Local_482.f_50 <= 19)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(9, Local_591, 40f))
		{
			return 1;
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_591, Local_594, fLocal_597))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_598, Local_601, fLocal_604))
	{
		return 1;
	}
	return 0;
}

int func_37()//Position - 0x218A
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_598, Local_601, fLocal_604, joaat("WEAPON_GRENADE"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_598, Local_601, fLocal_604, joaat("WEAPON_MOLOTOV"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_598, Local_601, fLocal_604, joaat("WEAPON_STICKYBOMB"), false))
	{
		return 1;
	}
	return 0;
}

int func_38()//Position - 0x21EB
{
	if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_591, Local_594, fLocal_597, joaat("WEAPON_GRENADE"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_591, Local_594, fLocal_597, joaat("WEAPON_MOLOTOV"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_591, Local_594, fLocal_597, joaat("WEAPON_STICKYBOMB"), false))
	{
		return 1;
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x224C
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2765083;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_40(int iParam0, int iParam1)//Position - 0x22B8
{
	if (Global_1895156[iParam0 /*609*/] == iParam1)
	{
		return func_41(iParam0);
	}
	return 0;
}

int func_41(int iParam0)//Position - 0x22D8
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

int func_42()//Position - 0x22FB
{
	if (func_43() || func_36())
	{
		return 1;
	}
	return 0;
}

int func_43()//Position - 0x2319
{
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_591, Local_594, fLocal_597, false))
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_598, Local_601, fLocal_604, false))
	{
		return 1;
	}
	return 0;
}

void func_44()//Position - 0x2354
{
	if (Local_86.f_35 > 0f)
	{
		if (func_45(&(Local_86.f_36), 50, 0))
		{
			Local_86.f_35 = (Local_86.f_35 - 0.02f);
			if (Local_86.f_35 < 0f)
			{
				Local_86.f_35 = 0f;
			}
			func_15(&(Local_86.f_36));
		}
	}
}

int func_45(var uParam0, int iParam1, bool bParam2)//Position - 0x2397
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_15(uParam0);
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_15(uParam0);
		return 1;
	}
	return 0;
}

void func_46()//Position - 0x2401
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_562)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_562));
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!BitTest(Local_86.f_25, 11))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 5))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_86.f_14))
				{
					if (func_3(Local_86.f_14))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_86.f_14), true, true);
						func_48(&(Local_86.f_14));
					}
				}
				else
				{
					Local_86.f_40 = { Local_161[iLocal_562 /*10*/].f_7 };
					Local_86.f_46 = 7;
					MISC::SET_BIT(&(Local_86.f_25), 11);
				}
			}
		}
		if (!BitTest(Local_86.f_25, 14))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 6))
			{
				MISC::SET_BIT(&(Local_86.f_25), 14);
			}
		}
		if (!BitTest(Local_86.f_25, 15))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 7))
			{
				MISC::SET_BIT(&(Local_86.f_25), 15);
			}
		}
		if (!BitTest(Local_86.f_25, 26))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 24))
			{
				MISC::SET_BIT(&(Local_86.f_25), 26);
			}
		}
		if (!BitTest(Local_86.f_25, 22))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 22))
			{
				MISC::SET_BIT(&(Local_86.f_25), 22);
			}
		}
		if (!BitTest(Local_86.f_25, 23))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 23))
			{
				MISC::SET_BIT(&(Local_86.f_25), 23);
			}
		}
		if (!BitTest(Local_86.f_25, 30))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 25))
			{
				MISC::SET_BIT(&(Local_86.f_25), 30);
			}
		}
		if (!BitTest(Local_86.f_25, 31))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 26))
			{
				MISC::SET_BIT(&(Local_86.f_25), 31);
			}
		}
		if (!BitTest(Local_86.f_26, 6))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 29))
			{
				MISC::SET_BIT(&(Local_86.f_26), 6);
			}
		}
		if (!BitTest(Local_86.f_26, 9))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 31))
			{
				MISC::SET_BIT(&(Local_86.f_26), 9);
			}
		}
		if (!BitTest(Local_86.f_1, 3))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/].f_1, 3))
			{
				MISC::SET_BIT(&(Local_86.f_1), 3);
			}
		}
		if (BitTest(Local_86.f_27, 1))
		{
			if (!BitTest(Local_86.f_27, 6))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/].f_5, 1))
				{
					MISC::SET_BIT(&(Local_86.f_27), 6);
				}
			}
			if (!BitTest(Local_86.f_27, 7))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/].f_5, 2))
				{
					MISC::SET_BIT(&(Local_86.f_27), 7);
				}
			}
			if (!BitTest(Local_86.f_27, 5))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/].f_5, 0))
				{
					MISC::SET_BIT(&(Local_86.f_27), 5);
				}
			}
		}
		if (!BitTest(Local_86.f_25, 20))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 11))
			{
				MISC::SET_BIT(&(Local_86.f_25), 20);
			}
		}
		if (!BitTest(Local_86.f_26, 17))
		{
			if (BitTest(Local_161[iLocal_562 /*10*/], 13))
			{
				MISC::SET_BIT(&(Local_86.f_26), 17);
			}
		}
		if (func_47(iVar0, 1, 1))
		{
			if (!BitTest(Local_86.f_25, 5))
			{
				if (!func_426(Local_86.f_0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), iVar1, true))
					{
						MISC::SET_BIT(&(Local_86.f_25), 5);
					}
				}
			}
			if (BitTest(Local_86.f_27, 1))
			{
				if (!BitTest(Local_86.f_27, 8))
				{
					if (!func_426(Local_86.f_16))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_86.f_16), iVar1, true))
						{
							MISC::SET_BIT(&(Local_86.f_27), 8);
						}
					}
				}
				if (!BitTest(Local_86.f_27, 9))
				{
					if (BitTest(Local_161[iLocal_562 /*10*/].f_5, 3))
					{
						MISC::SET_BIT(&(Local_86.f_27), 9);
					}
				}
			}
			if (!BitTest(Local_86.f_25, 6))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/], 1))
				{
					MISC::SET_BIT(&(Local_86.f_25), 6);
				}
			}
			if (!BitTest(Local_86.f_25, 16))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/], 8))
				{
					MISC::SET_BIT(&(Local_86.f_25), 16);
				}
			}
			if (!BitTest(Local_86.f_26, 1))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/], 27))
				{
					MISC::SET_BIT(&(Local_86.f_26), 1);
				}
			}
			if (!BitTest(Local_86.f_25, 7))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/], 0))
				{
					MISC::SET_BIT(&(Local_86.f_25), 7);
				}
			}
			if (!BitTest(Local_86.f_25, 10))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/], 4))
				{
					if (Local_86.f_3 != 5 && Local_86.f_3 != 6)
					{
						Local_86.f_3 = 5;
					}
					MISC::SET_BIT(&(Local_86.f_25), 10);
				}
			}
			if (!BitTest(Local_86.f_1, 2))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/].f_1, 2))
				{
					MISC::SET_BIT(&(Local_86.f_1), 2);
					MISC::SET_BIT(&(Local_86.f_1), 4);
					iLocal_564 = iLocal_562;
				}
			}
			else if (!BitTest(Local_161[iLocal_564 /*10*/].f_1, 2))
			{
				MISC::CLEAR_BIT(&(Local_86.f_1), 2);
				if (BitTest(Local_86.f_1, 3))
				{
					MISC::CLEAR_BIT(&(Local_86.f_1), 3);
				}
			}
			if (!BitTest(Local_86.f_26, 8))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/], 30))
				{
					MISC::SET_BIT(&(Local_86.f_26), 8);
				}
			}
			if (!BitTest(Local_86.f_1, 0))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/].f_1, 0))
				{
					MISC::SET_BIT(&(Local_86.f_1), 0);
					MISC::SET_BIT(&(Local_86.f_1), 1);
					Local_86.f_28 = Local_161[iLocal_562 /*10*/].f_2;
					iLocal_563 = iLocal_562;
				}
			}
			else if (!BitTest(Local_161[iLocal_563 /*10*/].f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_86.f_1), 0);
			}
			if (!BitTest(Local_86.f_26, 13))
			{
				if (BitTest(Local_161[iLocal_562 /*10*/], 21))
				{
					MISC::SET_BIT(&(Local_86.f_26), 13);
				}
			}
		}
	}
	iLocal_562++;
	if (iLocal_562 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_562 = 0;
	}
}

int func_47(int iParam0, bool bParam1, bool bParam2)//Position - 0x28F1
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

void func_48(var uParam0)//Position - 0x2951
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_49()//Position - 0x298A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	MISC::SET_BIT(&(Local_86.f_25), 2);
	MISC::SET_BIT(&(Local_86.f_25), 3);
	MISC::CLEAR_BIT(&(Local_86.f_25), 13);
	MISC::CLEAR_BIT(&(Local_86.f_25), 27);
	MISC::CLEAR_BIT(&(Local_86.f_25), 28);
	MISC::CLEAR_BIT(&(Local_86.f_26), 4);
	if (!BitTest(Local_86.f_25, 18))
	{
		if (func_426(Local_86.f_0))
		{
			if (Local_86.f_39 <= 0f)
			{
				MISC::SET_BIT(&(Local_86.f_25), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (Local_161[iVar0 /*10*/].f_3 > 0)
			{
				Local_86.f_4 = (Local_86.f_4 + Local_161[iVar0 /*10*/].f_3);
				Local_161[iVar0 /*10*/].f_3 = 0;
			}
			if (BitTest(Local_86.f_25, 3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_588, 30f, 30f, 30f, false, true, 0))
				{
					MISC::CLEAR_BIT(&(Local_86.f_25), 3);
				}
			}
			if (!BitTest(Local_86.f_26, 16))
			{
				if (BitTest(Local_161[iVar0 /*10*/], 12))
				{
					MISC::SET_BIT(&(Local_86.f_26), 16);
				}
			}
			if (func_47(iVar5, 1, 1))
			{
				if (BitTest(Local_86.f_25, 2))
				{
					MISC::CLEAR_BIT(&(Local_86.f_25), 2);
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar6) == iLocal_581)
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_582 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_583)
					{
						iVar2 = 1;
					}
					else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_584)
					{
						MISC::SET_BIT(&(Local_86.f_25), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					MISC::SET_BIT(&(Local_86.f_25), 13);
					iVar4++;
					if (!BitTest(Local_86.f_25, 9) && !BitTest(Local_86.f_25, 21))
					{
						if (!BitTest(Local_86.f_25, 4))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(iVar6, &iVar1, true))
							{
								if ((((iVar1 != joaat("WEAPON_UNARMED") && iVar1 != 0) && iVar1 != joaat("OBJECT")) && iVar1 != joaat("WEAPON_FLARE")) && iVar1 != joaat("WEAPON_SNOWBALL"))
								{
									if (Local_86.f_34 == -1)
									{
										Local_86.f_34 = iVar0;
									}
									else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_34)))
									{
										Local_86.f_34 = -1;
									}
									MISC::SET_BIT(&(Local_86.f_25), 4);
									if (!BitTest(Local_86.f_25, 12))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_541, 2.5f, 2.5f, 3f, false, true, 0))
										{
											MISC::SET_BIT(&(Local_86.f_25), 12);
										}
									}
								}
							}
						}
						if (!BitTest(Local_86.f_26, 0))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar5) > 0)
							{
								MISC::SET_BIT(&(Local_86.f_26), 0);
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_588, 5f, 5f, 2.5f, false, true, 0))
				{
					MISC::SET_BIT(&(Local_86.f_25), 28);
					iVar4++;
				}
				if (!BitTest(Local_86.f_26, 4))
				{
					if (BitTest(Local_161[iVar0 /*10*/], 28))
					{
						MISC::SET_BIT(&(Local_86.f_26), 4);
					}
				}
				if ((BitTest(Local_86.f_25, 9) && !BitTest(Local_86.f_25, 20)) && !BitTest(Local_86.f_25, 19))
				{
					if (Local_161[iLocal_562 /*10*/].f_6 > Local_86.f_35)
					{
						Local_86.f_35 = Local_161[iVar0 /*10*/].f_6;
						func_15(&(Local_86.f_36));
						if (!BitTest(Local_86.f_25, 24))
						{
							if (Local_86.f_35 > (0.55f + 0.2f))
							{
								MISC::SET_BIT(&(Local_86.f_25), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_86.f_43 != iVar4)
	{
		Local_86.f_43 = iVar4;
	}
}

int func_50()//Position - 0x2CD7
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_14)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_15))
	{
		if ((func_52(iLocal_540) && func_52(func_53(1))) && func_52(func_53(2)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 2, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_0))
				{
					if (func_51(&Local_86, 4, iLocal_540, Local_541 - Vector(1f, 0f, 0f), Local_86.f_44, 1, 1, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_86.f_0), 0, iLocal_770[0], iLocal_776[0], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_86.f_0), 2, iLocal_770[1], iLocal_776[1], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_86.f_0), 3, iLocal_770[2], iLocal_776[2], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_86.f_0), 4, iLocal_770[3], iLocal_776[3], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_86.f_0), 8, iLocal_770[4], iLocal_776[4], 0);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_PED(Local_86.f_0), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_0), true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_86.f_0), true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_86.f_0), true, 0f);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_86.f_0), 16);
						PED::SET_PED_CAN_EVASIVE_DIVE(NETWORK::NET_TO_PED(Local_86.f_0), false);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_86.f_0), 1024, true);
						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(Local_86.f_0), true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_86.f_0), SYSTEM::ROUND((200f * Global_262145.f_165 /* Tunable: AI_HEALTH */)), 0);
						if (!DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_86.f_0), "XP_Blocker"))
						{
							DECORATOR::DECOR_SET_BOOL(NETWORK::NET_TO_PED(Local_86.f_0), "XP_Blocker", true);
						}
						func_425(&uLocal_605, 3, NETWORK::NET_TO_PED(Local_86.f_0), &(Local_86.f_48), 1, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_14))
				{
					iVar0 = OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED_LOW_GLOW"), Local_565, false, func_53(1));
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						Local_86.f_14 = NETWORK::OBJ_TO_NET(iVar0);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_14), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_86.f_14), false, false);
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_86.f_14), fLocal_568);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_86.f_14), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_86.f_14), true);
						OBJECT::SET_PICKUP_OBJECT_GLOW_OFFSET(NETWORK::NET_TO_OBJ(Local_86.f_14), -0.2f, true);
						OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_86.f_14), true, false);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_86.f_14), false, false);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_15))
				{
					if (func_27(&(Local_86.f_15), func_53(2), Local_569 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_86.f_15), fLocal_572);
						INTERIOR::RETAIN_ENTITY_IN_INTERIOR(NETWORK::NET_TO_OBJ(Local_86.f_15), INTERIOR::GET_INTERIOR_AT_COORDS(Local_541));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_86.f_15), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_51(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x2FAC
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*iParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*iParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

bool func_52(int iParam0)//Position - 0x300B
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_53(int iParam0)//Position - 0x3029
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_M_ShopKeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("MP_M_ShopKeep_01");
}

void func_54()//Position - 0x3067
{
	if (!BitTest(Local_482.f_52, 20))
	{
		if (BitTest(Local_86.f_25, 11) || BitTest(Local_86.f_26, 16))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_581 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_588, 5f, 5f, 2.5f, false, true, 0))
			{
				func_57();
				func_55();
				func_6(Local_482.f_50, 1, func_7());
				MISC::SET_BIT(&(Local_482.f_52), 20);
			}
			else
			{
				if ((BitTest(Local_482.f_52, 31) && (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_588, 20f, 20f, 20f, false, true, 0))
				{
					func_57();
				}
				MISC::SET_BIT(&(Local_482.f_52), 20);
			}
		}
	}
}

void func_55()//Position - 0x3142
{
	int iVar0;
	
	iVar0 = func_56(47);
	Global_2645174[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2645174[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_56(int iParam0)//Position - 0x316F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2645174[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2645174[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_57()//Position - 0x31BC
{
	int iVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
	{
		iVar0 = func_131(1182, -1);
		if (!BitTest(iVar0, Local_482.f_50))
		{
			func_129(14, 1, -1);
			MISC::SET_BIT(&iVar0, Local_482.f_50);
			func_127(1182, iVar0, -1, 1);
			if (func_125(14, -1) >= 20)
			{
				func_111(44, 1);
			}
			else
			{
				func_110(44, func_125(14, -1));
			}
		}
		func_108(1168, 1, -1);
		func_107(12, 1, -1);
		func_105(19);
		iLocal_798 = 100;
		iLocal_798 = SYSTEM::ROUND((IntToFloat(iLocal_798) * Global_262145.f_4236 /* Tunable: XP_TUNABLE_HOLD_UPS */));
		func_58(2, "XPT_HOLDUP", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_HOLD_UP"), iLocal_798, 1, -1, 0);
	}
}

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x3282
{
	return func_59(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_59(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x329E
{
	var uVar0;
	
	uVar0 = func_60(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_60(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x32C1
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_95();
	if (func_94(sParam2))
	{
	}
	if (func_93())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_91(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_90(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_87(0, &iVar1);
					break;
				
				case 3:
					func_87(1, &iVar1);
					break;
				
				case 1:
					func_78(&iVar1);
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
			func_108(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_69((func_77(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 != -1)
				{
					func_108(1166, iVar1, -1);
				}
				func_65(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_61((func_63(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_61((func_63(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_61(int iParam0)//Position - 0x342C
{
	if (func_93())
	{
		Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5 = iParam0;
		func_62(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_62(int iParam0, int iParam1)//Position - 0x3457
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_63(int iParam0)//Position - 0x3473
{
	if (iParam0 > -1)
	{
		if (func_47(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_64(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_5;
			}
		}
		else
		{
			return func_64(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x34C4
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

void func_65(int iParam0)//Position - 0x34E2
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_68(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_66(func_67(&Var0));
			if (iVar13 == 0)
			{
				func_62(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_64(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_62(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_64(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_62(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_64(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_62(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_64(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_62(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_64(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_66(int iParam0)//Position - 0x35AC
{
	if (iParam0 == func_64(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_64(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_64(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_64(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_64(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_67(var* uParam0)//Position - 0x3622
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

struct<13> func_68(int iParam0)//Position - 0x3645
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_69(int iParam0, int iParam1, int iParam2)//Position - 0x365C
{
	if (func_93())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10242 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_131(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_131(640, -1))
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
		if (func_76(PLAYER::PLAYER_ID()))
		{
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1 = iParam0;
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6 = func_73(iParam0, 1);
		}
		func_127(640, iParam0, -1, 1);
		func_127(641, func_73(iParam0, 1), -1, 1);
		func_70(-1109644434, 7, 0);
	}
}

void func_70(int iParam0, int iParam1, int iParam2)//Position - 0x376E
{
	int iVar0;
	
	if (func_72(iParam1, iParam2))
	{
		iVar0 = func_71();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_71()//Position - 0x379B
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

int func_72(int iParam0, var uParam1)//Position - 0x37D0
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

int func_73(int iParam0, bool bParam1)//Position - 0x3856
{
	if (bParam1)
	{
	}
	return func_74(iParam0, 0);
}

int func_74(int iParam0, int iParam1)//Position - 0x386A
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
		if (func_75(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_75(iVar3) < iParam0)
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

int func_75(int iParam0)//Position - 0x3925
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

int func_76(int iParam0)//Position - 0x3E60
{
	if (!func_9(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672524.f_1, iParam0);
}

int func_77(int iParam0)//Position - 0x3E7F
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_131(640, -1);
			}
			else if (func_76(iParam0))
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_131(640, -1);
	}
	return 0;
}

void func_78(int iParam0)//Position - 0x3ED6
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_81(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_80(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_79(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_79(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_79(int iParam0, int iParam1)//Position - 0x3FC2
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_80(int iParam0, int iParam1)//Position - 0x3FE3
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764376 = { func_68(iParam0) };
		Global_2764389 = { func_68(iParam1) };
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

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4052
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
							if (!func_82(iParam0, bVar0, iParam1, bVar1) || !func_82(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_82(iParam0, bVar0, iParam1, bVar1) || !func_82(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_82(iParam0, bVar0, iParam1, bVar1) || !func_82(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_82(iParam0, bVar0, iParam1, bVar1) || !func_82(iParam1, bVar1, iParam0, bVar0))
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

int func_82(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x439D
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
		if (((!func_47(iVar1, 1, 1) || func_84(iVar1, 0)) || BitTest(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_83(iVar1))
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

var func_83(int iParam0)//Position - 0x44C9
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

bool func_84(int iParam0, int iParam1)//Position - 0x44E1
{
	bool bVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_85(-1, 0) == 8;
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

int func_85(int iParam0, bool bParam1)//Position - 0x453A
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_86();
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

int func_86()//Position - 0x457B
{
	return Global_1574918;
}

void func_87(bool bParam0, int iParam1)//Position - 0x4587
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
				if (func_47(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_80(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_47(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_88(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_80(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_79(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_79(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_88(int iParam0, int iParam1)//Position - 0x469F
{
	return SYSTEM::VDIST(func_89(iParam0), func_89(iParam1));
	return 0f;
}

Vector3 func_89(int iParam0)//Position - 0x46BB
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_90(int iParam0)//Position - 0x46CE
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_79(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_91(int iParam0)//Position - 0x4705
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_77(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_77(PLAYER::PLAYER_ID());
		}
	}
	if (func_92(8000, 0, 0) > 0)
	{
		if (func_92(8000, 0, 0) < (iParam0 + func_77(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_92(8000, 0, 0) - func_77(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_92(int iParam0, bool bParam1, int iParam2)//Position - 0x4769
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
	return func_75(iParam0);
}

int func_93()//Position - 0x478F
{
	return 1;
}

int func_94(char* sParam0)//Position - 0x4798
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

int func_95()//Position - 0x47D2
{
	int iVar0;
	
	if (func_104(PLAYER::PLAYER_ID()) || func_103(PLAYER::PLAYER_ID()))
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
	else if (func_100() || func_96(PLAYER::PLAYER_ID()))
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

int func_96(int iParam0)//Position - 0x486C
{
	return func_97(func_98(iParam0));
}

int func_97(int iParam0)//Position - 0x487E
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_98(int iParam0)//Position - 0x4898
{
	if (func_9(iParam0))
	{
		if (func_99(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_99(int iParam0, int iParam1)//Position - 0x48C4
{
	if (func_9(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_100()//Position - 0x4908
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_102();
	}
	return func_101(Global_4718592.f_117591);
}

int func_101(int iParam0)//Position - 0x492C
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

var func_102()//Position - 0x4966
{
	return Global_2683883.f_19;
}

bool func_103(int iParam0)//Position - 0x4974
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

bool func_104(int iParam0)//Position - 0x4989
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

void func_105(int iParam0)//Position - 0x499E
{
	int iVar0;
	
	if (Global_262145.f_9208 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_106() /*5568*/].f_681.f_4242[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_106()//Position - 0x4A01
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_107(int iParam0, bool bParam1, int iParam2)//Position - 0x4A0E
{
	if (iParam2 == -1)
	{
		iParam2 = func_86();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_108(int iParam0, int iParam1, int iParam2)//Position - 0x4A2C
{
	int iVar0;
	
	iVar0 = func_131(iParam0, func_109(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_127(iParam0, iVar0, iParam2, 1);
}

int func_109(var uParam0)//Position - 0x4A54
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_86();
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

int func_110(int iParam0, int iParam1)//Position - 0x4A88
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_111(int iParam0, int iParam1)//Position - 0x4AD9
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_112(iParam0, iParam1);
}

int func_112(int iParam0, int iParam1)//Position - 0x4AF4
{
	if (func_124(14) && !func_123(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_32534 != 0 && !Global_78689)
	{
		return 0;
	}
	if (func_122(&Global_4542602))
	{
		if (func_120(&Global_4542602, iParam0))
		{
			return 0;
		}
		if (func_113(&Global_4542602, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_113(var uParam0, int iParam1)//Position - 0x4B91
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_124(14) && !func_123(iParam1))
	{
		return 0;
	}
	if (func_120(uParam0, iParam1))
	{
		return 0;
	}
	if (func_119(uParam0) < 0f)
	{
		func_118(uParam0, 0);
	}
	func_116(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_114(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_114(var uParam0, int iParam1)//Position - 0x4C42
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_124(14) && !func_123(iParam1))
	{
		return 0;
	}
	if (func_120(uParam0, iParam1))
	{
		return 0;
	}
	if (func_119(uParam0) < 0f)
	{
		func_118(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_115(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_115(var uParam0, int iParam1)//Position - 0x4CBD
{
	return (*uParam0)[iParam1] == 78;
}

void func_116(var uParam0)//Position - 0x4CCE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_117(uParam0, iVar0);
		iVar0++;
	}
	func_118(uParam0, (Global_4542601 - 0.5f));
}

void func_117(var uParam0, int iParam1)//Position - 0x4D02
{
	(*uParam0)[iParam1] = 78;
}

void func_118(var uParam0, float fParam1)//Position - 0x4D12
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_119(var uParam0)//Position - 0x4D2F
{
	return uParam0->f_80;
}

bool func_120(var uParam0, int iParam1)//Position - 0x4D3B
{
	return func_121(uParam0, iParam1) != -1;
}

int func_121(var uParam0, int iParam1)//Position - 0x4D4D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_122(var uParam0)//Position - 0x4D7A
{
	return uParam0->f_79 == 1;
}

int func_123(int iParam0)//Position - 0x4D88
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_124(int iParam0)//Position - 0x4DD8
{
	return Global_43377 == iParam0;
}

int func_125(int iParam0, int iParam1)//Position - 0x4DE6
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_126(iParam0, iParam1);
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_126(int iParam0, var uParam1)//Position - 0x4E0A
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(8, iParam0, func_109(uParam1));
}

void func_127(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4E20
{
	int iVar0;
	
	iVar0 = func_128(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_128(int iParam0, var uParam1)//Position - 0x4E43
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_109(uParam1));
}

void func_129(int iParam0, int iParam1, int iParam2)//Position - 0x4E58
{
	int iVar0;
	
	iVar0 = func_125(iParam0, func_109(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_130(iParam0, iVar0, iParam2);
}

void func_130(int iParam0, int iParam1, var uParam2)//Position - 0x4E7F
{
	int iVar0;
	
	iVar0 = func_126(iParam0, uParam2);
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_131(int iParam0, int iParam1)//Position - 0x4E9B
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_128(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_132(var uParam0)//Position - 0x4ECA
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

void func_133(var uParam0)//Position - 0x4EF3
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_134()//Position - 0x4F12
{
	bool bVar0;
	int iVar1;
	
	func_257();
	func_227();
	func_177();
	func_54();
	func_175();
	func_174();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_581)
		{
			if (Global_2794162.f_5999.f_1 == 0)
			{
				Global_2794162.f_5999.f_1 = 1;
			}
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_582 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_583)
			{
				bVar0 = true;
			}
			else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_584)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2794162.f_5999.f_1 == 1)
		{
			Global_2794162.f_5999.f_1 = 0;
		}
	}
	if (!BitTest(Local_482.f_52, 31))
	{
		if (func_98(PLAYER::PLAYER_ID()) != 154)
		{
			if ((bVar0 || iVar1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_588, (5f / 2f), (5f / 2f), (5f / 2f), false, true, 0))
			{
				if (!func_39(PLAYER::PLAYER_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					MISC::SET_BIT(&(Local_482.f_52), 31);
				}
			}
		}
	}
	if ((!BitTest(Local_482.f_52, 26) && bVar0) && !(func_173(0) || func_172()))
	{
		if (func_170("SNK_MNU", Local_482.f_0, 0))
		{
			MISC::SET_BIT(&(Local_482.f_52), 26);
		}
	}
	if (!bVar0 && BitTest(Local_482.f_52, 26))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || (CAM::DOES_CAM_EXIST(Local_482.f_1) && CAM::IS_CAM_ACTIVE(Local_482.f_1)))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (Local_482.f_51 > 0)
			{
				Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3 = Local_482.f_51;
				Local_482.f_51 = 0;
			}
			func_441();
			MISC::CLEAR_BIT(&(Local_482.f_53), 7);
			if (CAM::DOES_CAM_EXIST(Local_482.f_1))
			{
				CAM::DESTROY_CAM(Local_482.f_1, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		func_167(1, Local_482.f_0);
		MISC::CLEAR_BIT(&(Local_482.f_52), 26);
	}
	if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 21))
	{
		if (iVar1 || func_165(PLAYER::PLAYER_PED_ID(), Local_482.f_50))
		{
			MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_162();
		func_156();
		func_150();
		func_146(1);
		func_139();
		PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		if (BitTest(Global_2794162.f_7, 0))
		{
			PLAYER::SET_LAW_RESPONSE_DELAY_OVERRIDE(Local_86.f_73);
			func_137(Local_588, func_138(30), 0);
			MISC::CLEAR_BIT(&(Global_2794162.f_7), 0);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_588, 5f, 5f, 2.5f, false, true, 0))
		{
			func_146(0);
		}
		if (!BitTest(Global_2794162.f_7, 0))
		{
			PLAYER::RESET_LAW_RESPONSE_DELAY_OVERRIDE();
			func_135(Local_588, func_138(30), "");
			MISC::SET_BIT(&(Global_2794162.f_7), 0);
		}
	}
	if ((BitTest(Local_86.f_25, 22) || BitTest(Local_86.f_25, 23)) || BitTest(Local_86.f_25, 7))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

int func_135(struct<3> Param0, char* sParam3, char* sParam4)//Position - 0x5234
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), sParam3))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2794162.f_4070[iVar0 /*26*/].f_4)))
				{
					Global_2794162.f_4070[iVar0 /*26*/] = 1;
					Global_2794162.f_4070[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_136(Global_2794162.f_4070[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2794162.f_4070[iVar0 /*26*/] = 1;
				Global_2794162.f_4070[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_136(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x5335
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_137(struct<3> Param0, char* sParam3, int iParam4)//Position - 0x537C
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_136(Global_2794162.f_4070[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2794162.f_4070[iVar0 /*26*/] = 0;
					Global_2794162.f_4070[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2794162.f_4070[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_138(int iParam0)//Position - 0x541E
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_139()//Position - 0x5431
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	MISC::CLEAR_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
	if (!func_426(Local_86.f_0) && func_47(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
		{
			if ((((iVar0 != joaat("WEAPON_UNARMED") && iVar0 != joaat("OBJECT")) && iVar0 != joaat("WEAPON_FLARE")) && iVar0 != joaat("WEAPON_SNOWBALL")) && iVar0 != joaat("WEAPON_FLASHLIGHT"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_86.f_0), 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_86.f_0), 5f, 5f, 2f, false, true, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_86.f_0))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_86.f_0)))
				{
					if (!(func_173(0) || func_172()) && ((!func_143(PLAYER::PLAYER_ID()) || func_98(PLAYER::PLAYER_ID()) == 154) || func_98(PLAYER::PLAYER_ID()) == 171))
					{
						if (func_141(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_86.f_0)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
							{
								func_140(func_8(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
								MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 1);
							}
							if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 8))
							{
								MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 8);
							}
						}
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!BitTest(Local_482.f_52, 28))
	{
		if (BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
			{
				if (iVar1 != 0 && iVar1 != joaat("WEAPON_SNOWBALL"))
				{
					iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
					if (iVar2 == joaat("GROUP_PISTOL"))
					{
						sLocal_539 = "hold_up_head_additive_pistol";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_539, 8f, -8f, -1, 305, 0f, false, false, false);
					}
					else if ((((iVar2 == joaat("GROUP_MG") || iVar2 == joaat("GROUP_RIFLE")) || iVar2 == joaat("GROUP_SHOTGUN")) || iVar2 == joaat("GROUP_SNIPER")) || iVar2 == joaat("GROUP_SMG"))
					{
						sLocal_539 = "hold_up_head_additive_rifle";
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_539, 8f, -8f, -1, 305, 0f, false, false, false);
					}
					else
					{
						sLocal_539 = "";
					}
					MISC::SET_BIT(&(Local_482.f_52), 28);
				}
			}
		}
	}
	else if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_539))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_539, 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_539, -8f);
			}
		}
		MISC::CLEAR_BIT(&(Local_482.f_52), 28);
	}
	if (BitTest(Local_86.f_27, 1))
	{
		if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 3))
		{
			if (!func_426(Local_86.f_16) && func_47(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true))
				{
					if ((((iVar3 != joaat("WEAPON_UNARMED") && iVar3 != joaat("OBJECT")) && iVar3 != joaat("WEAPON_FLARE")) && iVar3 != joaat("WEAPON_SNOWBALL")) && !(func_173(0) || func_172()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_86.f_16)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_86.f_16)))
						{
							if (func_141(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_86.f_16)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
							{
								MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_140(int iParam0)//Position - 0x57F9
{
	struct<2> Var0;
	
	Var0.f_0 = -2095300399;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_141(int iParam0, int iParam1)//Position - 0x5825
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (func_47(iParam0, 1, 1))
	{
		Var0 = { func_89(iParam0) };
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	Var9 = { Var3 - Var0 };
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 7f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_142(Var9, Var12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_142(struct<3> Param0, struct<3> Param3)//Position - 0x58B0
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_143(int iParam0)//Position - 0x58D1
{
	if (func_41(iParam0))
	{
		return 1;
	}
	if (func_144(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0)//Position - 0x58F4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_145(iParam0, 9);
	}
	return 0;
}

var func_145(int iParam0, int iParam1)//Position - 0x5912
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

void func_146(int iParam0)//Position - 0x592A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (PLAYER::PLAYER_ID() != Global_2794162.f_5156 && !func_39(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Local_482.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
				{
					if ((((iVar2 != joaat("WEAPON_UNARMED") && iVar2 != 0) && iVar2 != joaat("OBJECT")) && iVar2 != joaat("WEAPON_FLARE")) && iVar2 != joaat("WEAPON_SNOWBALL"))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_541, 2.5f, 2.5f, 3f, false, true, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) || (iVar0 == 1 && Local_86.f_3 >= 3)) || (iVar0 == 1 && BitTest(Local_86.f_26, 16))) || BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12))
				{
					if (((!BitTest(Local_86.f_25, 12) || Local_86.f_3 >= 3) || BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) || (iVar0 == 1 && BitTest(Local_86.f_26, 16)))
					{
						Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_36++;
						func_15(&(Global_2672524.f_3543));
						func_20(&(Global_2672524.f_3543), 0, 0);
						if (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_36 <= 2)
						{
							if (func_149())
							{
								if (func_148() < 2)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_148()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
							}
						}
						else if (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_36 >= 5)
						{
							if (func_149())
							{
								if (func_148() < 3)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_148()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
							}
						}
						else if (func_149())
						{
							if (func_148() < 3)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_148()));
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
							}
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
						if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
						MISC::SET_BIT(&(Local_482.f_52), 6);
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
					}
				}
			}
			if (!BitTest(Local_482.f_52, 27) && !BitTest(Local_482.f_52, 6))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_19(&uLocal_579, 2000, 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
						MISC::SET_BIT(&(Local_482.f_52), 27);
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 27);
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
					}
				}
				else if (func_147(&uLocal_579))
				{
					func_15(&uLocal_579);
				}
			}
		}
		if (!BitTest(Local_482.f_52, 24))
		{
			if (BitTest(Local_482.f_52, 31))
			{
				if (func_426(Local_86.f_0))
				{
					if (func_149())
					{
						if (func_148() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_148()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					MISC::SET_BIT(&(Local_482.f_52), 24);
					if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_147(var uParam0)//Position - 0x5CED
{
	return uParam0->f_1;
}

int func_148()//Position - 0x5CF9
{
	return Global_262145.f_13245 /* Tunable: GB_SMASHANDGRAB_WANTED_CAP */;
}

int func_149()//Position - 0x5D08
{
	if (func_144(PLAYER::PLAYER_ID()) && func_98(PLAYER::PLAYER_ID()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_150()//Position - 0x5D30
{
	int iVar0;
	int iVar1;
	
	if (func_47(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!BitTest(Local_482.f_52, 23) && BitTest(Local_86.f_25, 17))
		{
			if (!func_426(Local_86.f_0))
			{
				iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
				if (iLocal_548 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
					{
						if ((!BitTest(Global_1927215, 15) && func_155()) && func_154())
						{
							MISC::SET_BIT(&Global_1927215, 15);
						}
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = func_131(1191, -1);
							if (!BitTest(iVar0, 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548) < 0.4f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_581)
								{
									func_153("FHU_HELP3" /* GXT: Shout through your headset to make the store clerk fill the bag with cash faster. */, -1);
									MISC::SET_BIT(&iVar0, 3);
									func_127(1191, iVar0, -1, 1);
								}
							}
							else if (!BitTest(iVar0, 5) || !BitTest(iVar0, 6))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548) < 0.7f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_581)
								{
									func_153("FHU_HELP4" /* GXT: ~s~Wait for the store clerk to empty the register to get the full amount of cash. */, -1);
									MISC::SET_BIT(&iVar0, 5);
									func_127(1191, iVar0, -1, 1);
									MISC::SET_BIT(&(Local_482.f_52), 23);
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_482.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_40(PLAYER::PLAYER_ID(), 146) && !func_152()) && func_98(PLAYER::PLAYER_ID()) != 167) && func_98(PLAYER::PLAYER_ID()) != 190) && func_98(PLAYER::PLAYER_ID()) != 191) && func_98(PLAYER::PLAYER_ID()) != 250) && func_98(PLAYER::PLAYER_ID()) != 237) && func_98(PLAYER::PLAYER_ID()) != 238) && !func_39(PLAYER::PLAYER_ID())) && (!func_143(PLAYER::PLAYER_ID()) || func_98(PLAYER::PLAYER_ID()) == 154))
		{
			if (!BitTest(Local_482.f_53, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (((((func_426(Local_86.f_0) || Local_86.f_3 > 7) && !BitTest(Local_86.f_25, 20)) && !BitTest(Local_86.f_25, 11)) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_549, 1.5f) == 0)
					{
						iVar1 = func_131(1191, -1);
						if (!BitTest(iVar1, 20) || !BitTest(iVar1, 21))
						{
							func_153("FHU_HELPM" /* GXT: The store clerk is no longer able to empty the register. Go up to the register the store clerk was using and empty it manually with ~INPUT_CONTEXT~ */, -1);
							if (!BitTest(iVar1, 20))
							{
								MISC::SET_BIT(&iVar1, 20);
							}
							else
							{
								MISC::SET_BIT(&iVar1, 21);
							}
							func_127(1191, iVar1, -1, 1);
							MISC::SET_BIT(&(Local_482.f_53), 1);
						}
						else
						{
							MISC::SET_BIT(&(Local_482.f_53), 1);
						}
					}
				}
			}
			else if (func_151("FHU_HELPM" /* GXT: The store clerk is no longer able to empty the register. Go up to the register the store clerk was using and empty it manually with ~INPUT_CONTEXT~ */))
			{
				if ((BitTest(Local_86.f_25, 20) || BitTest(Local_86.f_25, 11)) || BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
	}
}

bool func_151(char* sParam0)//Position - 0x6017
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_152()//Position - 0x602A
{
	return Global_1835493;
}

void func_153(char* sParam0, int iParam1)//Position - 0x6036
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

var func_154()//Position - 0x604D
{
	return BitTest(Global_2794162.f_1832, 21);
}

var func_155()//Position - 0x605F
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 3);
}

void func_156()//Position - 0x6076
{
	float fVar0;
	float fVar1;
	
	if (Local_86.f_3 == 4)
	{
		if (func_47(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_426(Local_86.f_0))
			{
				iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
				if (iLocal_548 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_157(SYSTEM::ROUND(fVar0), 890, "HUP_PROG" /* GXT: INTIMIDATION */, func_161(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())), 0, 1, 13);
						}
						fVar1 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_157(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6128
{
	func_158(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}

void func_158(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)//Position - 0x6168
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_160(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_159(0, iVar0);
		Global_1655612.f_1177[iVar0] = uParam0;
		Global_1655612.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1655612.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1655612.f_1177.f_194[iVar0] = uParam3;
		Global_1655612.f_1177.f_183[iVar0] = uParam4;
		Global_1655612.f_1177.f_216[iVar0] = uParam5;
		Global_1655612.f_1177.f_227[iVar0 /*3*/] = fParam6;
		Global_1655612.f_1177.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1655612.f_1177.f_258[iVar0] = iParam8;
		Global_1655612.f_1177.f_269[iVar0] = uParam9;
		Global_1655612.f_1177.f_312[iVar0] = iParam10;
		Global_1655612.f_1177.f_323[iVar0] = iParam11;
		Global_1655612.f_1177.f_334[iVar0] = iParam12;
		Global_1655612.f_1177.f_345[iVar0] = iParam13;
		Global_1655612.f_1172 = 1;
		Global_1655612.f_1177.f_356[iVar0] = iParam14;
		Global_1655612.f_1177.f_367[iVar0] = iParam15;
		Global_1655612.f_1177.f_378[iVar0] = iParam16;
		Global_1655612.f_1177.f_389[iVar0] = iParam17;
		Global_1655612.f_1177.f_400[iVar0] = iParam18;
		Global_1655612.f_1177.f_411[iVar0] = iParam19;
		Global_1655612.f_1177.f_422[iVar0] = iParam20;
		Global_1655612.f_1177.f_433[iVar0] = iParam21;
		Global_1655612.f_1177.f_444[iVar0] = iParam22;
		Global_1655612.f_1177.f_455[iVar0] = iParam23;
		Global_1655612.f_1177.f_466[iVar0] = iParam24;
		Global_1655612.f_1177.f_205[iVar0] = iParam25;
		Global_1655612.f_1177.f_477[iVar0] = iParam26;
		Global_1655612.f_1177.f_488[iVar0] = iParam27;
		Global_1655612.f_1177.f_499[iVar0] = iParam28;
		Global_1655612.f_1177.f_510[iVar0] = iParam29;
		Global_1655612.f_1177.f_521[iVar0] = iParam30;
		Global_1655612.f_1177.f_532[iVar0] = iParam31;
		Global_1655612.f_1177.f_543[iVar0] = iParam32;
		Global_1655612.f_1177.f_554[iVar0] = iParam33;
		Global_1655612.f_1177.f_565[iVar0] = iParam34;
		Global_1655612.f_1177.f_576[iVar0] = iParam35;
		Global_1655612.f_1177.f_587[iVar0] = iParam36;
	}
}

void func_159(int iParam0, int iParam1)//Position - 0x6400
{
	MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_160(int iParam0, int iParam1)//Position - 0x6419
{
	return BitTest(Global_1655612.f_7009[iParam0], iParam1);
}

int func_161(int iParam0)//Position - 0x642F
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_162()//Position - 0x643F
{
	if (!BitTest(Local_482.f_53, 2))
	{
		STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
		STREAMING::REQUEST_ANIM_DICT(func_163());
		if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till") && STREAMING::HAS_ANIM_DICT_LOADED(func_163()))
		{
			MISC::SET_BIT(&(Local_482.f_53), 2);
		}
	}
}

char* func_163()//Position - 0x6484
{
	if (func_164(PLAYER::PLAYER_ID()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_164(int iParam0)//Position - 0x64A2
{
	if (!func_9(iParam0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2657704[iParam0 /*463*/].f_240;
}

int func_165(int iParam0, int iParam1)//Position - 0x64D2
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_166(iParam1, &Var0, &Var3, &fVar6);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var0, Var3, fVar6, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x6512
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.0328f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.4117f, 3607.156f, 36.382877f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.59314f, 6.908931f };
		*uParam2 = { -3037.2837f, 585.03754f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.1239f, 11.830711f };
		*uParam2 = { -3240.5044f, 999.77826f, 14.466454f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.4644f, 41.156513f };
		*uParam2 = { 548.9114f, 2673.1077f, 43.776596f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.3164f, 380.8569f, 107.622986f };
		*uParam2 = { 2558.9802f, 380.69083f, 110.26842f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.8074f, 54.24115f };
		*uParam2 = { 2679.5774f, 3278.5256f, 56.895496f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.1453f, 6417.8345f, 34.037243f };
		*uParam2 = { 1727.0696f, 6413.635f, 36.664417f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.6097f, 3742.5125f, 31.343761f };
		*uParam2 = { 1960.9578f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.510925f, -1344.449f, 28.497032f };
		*uParam2 = { 24.52224f, -1349.0839f, 31.142721f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.29602f, 329.23785f, 102.566414f };
		*uParam2 = { 372.13467f, 324.69855f, 105.21404f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.1833f, 2711.2026f, 37.063164f };
		*uParam2 = { 1163.1436f, 2711.2463f, 40.166878f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.1418f, 388.64178f, 14.043308f };
		*uParam2 = { -2965.8118f, 393.64728f, 17.172482f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.5989f, -909.89844f, 11.326351f };
		*uParam2 = { -1219.443f, -907.07556f, 14.459287f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.5243f, -980.30865f, 45.415825f };
		*uParam2 = { 1134.2202f, -985.284f, 48.532352f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.4132f, -379.32364f, 39.16341f };
		*uParam2 = { -1487.9541f, -375.76657f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.4468f, 4921.5703f, 41.063656f };
		*uParam2 = { 1695.6401f, 4924.2446f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.70264f, -916.37396f, 21.335445f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.269947f, -1756.6688f, 28.421005f };
		*uParam2 = { -48.260365f, -1760.2849f, 31.563421f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.6973f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.08994f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.2046f, 795.8699f, 137.08931f };
		*uParam2 = { -1818.0406f, 792.3982f, 140.18362f };
		*fParam3 = 2.25f;
	}
}

void func_167(bool bParam0, int iParam1)//Position - 0x696F
{
	int iVar0;
	
	if (!func_169(&iVar0, 0, iParam1))
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
		func_168(&(Global_23390.f_6103[iVar0 /*10*/]));
		Global_23390.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23390.f_6164[iVar0] = 0;
	}
}

void func_168(int* iParam0)//Position - 0x6A2D
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

int func_169(var uParam0, bool bParam1, int iParam2)//Position - 0x6A59
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

bool func_170(char* sParam0, int iParam1, bool bParam2)//Position - 0x6AF6
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_169(&iVar0, 1, iParam1))
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
	bVar2 = func_171(&(Global_23390.f_6103[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_171(var uParam0)//Position - 0x6BEC
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

int func_172()//Position - 0x6C8E
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_173(int iParam0)//Position - 0x6CAB
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

void func_174()//Position - 0x6D02
{
	if (PLAYER::PLAYER_ID() != Global_2794162.f_5156 && !func_39(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Local_482.f_52, 24))
		{
			if (Local_86.f_74 == PLAYER::PLAYER_ID() || (BitTest(Local_482.f_52, 31) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_591, 20f, 20f, 20f, false, true, 0)))
			{
				if (func_426(Local_86.f_0))
				{
					if (func_149())
					{
						if (func_148() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_148()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					MISC::SET_BIT(&(Local_482.f_52), 24);
					if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_175()//Position - 0x6DE5
{
	if (!BitTest(Local_86.f_27, 0))
	{
		return 0;
	}
	if (func_426(Local_86.f_16))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_797))
		{
			HUD::REMOVE_BLIP(&iLocal_797);
		}
		return 0;
	}
	if (Local_86.f_68 == 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_797))
		{
			iLocal_797 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_86.f_16));
			HUD::SET_BLIP_COLOUR(iLocal_797, 1);
			HUD::SET_BLIP_SCALE(iLocal_797, 0.7f);
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_16))
	{
		return 0;
	}
	switch (Local_86.f_68)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
				{
					if (func_47(PLAYER::PLAYER_ID(), 1, 1))
					{
						TASK::TASK_GO_TO_ENTITY(NETWORK::NET_TO_PED(Local_86.f_16), PLAYER::PLAYER_PED_ID(), -1, 4f, 2f, 2f, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!BitTest(Local_86.f_27, 5) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_86.f_16), PLAYER::PLAYER_PED_ID(), 10000);
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 0);
				}
			}
			if ((!BitTest(Local_86.f_27, 6) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 1)) && !func_176())
			{
				func_425(&uLocal_605, 4, NETWORK::NET_TO_PED(Local_86.f_16), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_86.f_16), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!BitTest(Local_86.f_27, 7) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2)) && !func_176())
			{
				func_425(&uLocal_605, 4, NETWORK::NET_TO_PED(Local_86.f_16), "StoreHero", 1, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(NETWORK::NET_TO_PED(Local_86.f_16), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 2);
			}
			if (BitTest(Local_86.f_27, 7) || BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_86.f_16));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_86.f_16), Global_1837222);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_86.f_16), 20f, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_16), true);
				}
			}
			break;
		
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
			{
				TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_86.f_16));
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_86.f_16), iLocal_557);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_16), true);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_16), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 0)
			{
				if (func_19(&uLocal_577, 5000, 0))
				{
					func_15(&uLocal_577);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_86.f_16), PLAYER::PLAYER_PED_ID(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_176()//Position - 0x714E
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_177()//Position - 0x7170
{
	if (Local_86.f_3 == 4)
	{
		if ((!BitTest(Local_86.f_25, 10) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 4)) && BitTest(Local_86.f_25, 17))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_14))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_14) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_86.f_14) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (!func_426(Local_86.f_0))
					{
						if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_86.f_0)))
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_86.f_14), true, false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_86.f_14), true);
							ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_86.f_14), 0f, 0f, -1f);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_86.f_0), 16);
							MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_86.f_14), true, false);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_86.f_14), true);
						ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_86.f_14), 0f, 0f, -1f);
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_178();
}

void func_178()//Position - 0x726D
{
	int iVar0;
	var uVar1;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_86.f_14), false))
		{
			if ((!BitTest(Local_86.f_25, 11) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && Local_86.f_39 > 0f)
			{
				if (((func_226() || func_225(0.87f)) || Local_86.f_3 >= 5) || BitTest(Local_86.f_25, 10))
				{
					if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 11))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_14))
						{
							OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_86.f_14), false, false);
							MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 13);
						}
						if (func_98(PLAYER::PLAYER_ID()) != 155)
						{
							OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_53(1), 1);
						}
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 11);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_86.f_14), PLAYER::PLAYER_PED_ID()))
					{
						Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7, &(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7.f_2), false, false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_14))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_86.f_14), true, true);
							func_48(&(Local_86.f_14));
						}
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iLocal_574, iLocal_575);
						if (BitTest(Local_86.f_25, 10))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_86.f_39));
						}
						if (Local_86.f_4 > 1000)
						{
							Local_86.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_86.f_4);
						iVar0 = func_224(iVar0, 1);
						if (iVar0 > Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */)
						{
							iVar0 = Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */;
						}
						if (func_223(PLAYER::PLAYER_ID()) && func_221(func_222(PLAYER::PLAYER_ID())) < 1f)
						{
							if (Global_262145.f_4237 /* Tunable: HOLD_UP_FM_EVENT_MULT */ > 1f)
							{
								Global_262145.f_4237 = 1f;
							}
							iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4237 /* Tunable: HOLD_UP_FM_EVENT_MULT */));
						}
						if (iVar0 > 0)
						{
							if (func_220())
							{
								func_209(joaat("SERVICE_EARN_HOLDUPS"), iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_205(iVar0, 1, 1, 1092616192);
								MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar0);
							}
						}
						Global_2794162.f_5999 = (Global_2794162.f_5999 + iVar0);
						Global_2794162.f_5999.f_2 = 1;
						Global_2794162.f_5999.f_5 = 1;
						iLocal_799 = (iLocal_799 + iVar0);
						func_204(3);
						if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
						{
							func_203(Local_86.f_40, iVar0);
						}
						else
						{
							func_194(PLAYER::PLAYER_PED_ID(), iVar0);
						}
						func_192(1, iVar0);
						if (func_188(1))
						{
							func_179(4);
						}
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 5);
						MISC::SET_BIT(&(Local_482.f_53), 6);
					}
				}
			}
		}
	}
}

void func_179(int iParam0)//Position - 0x7504
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_18341 /* Tunable: -539038925 */;
			break;
		
		case 1:
			iVar0 = Global_262145.f_18331 /* Tunable: BIKER_MC_POINTS_WIN_MINIGAME */;
			break;
		
		case 2:
			iVar0 = Global_262145.f_18342 /* Tunable: 771289284 */;
			break;
		
		case 3:
			iVar0 = Global_262145.f_18334 /* Tunable: BIKER_MC_POINTS_DESTROY_PRODUCT */;
			break;
		
		case 4:
			iVar0 = Global_262145.f_18330 /* Tunable: BIKER_MC_POINTS_ROB_SHOP */;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_18345 /* Tunable: BIKER_MC_POINTS_DESTROY_MEMBERS_PV */;
			break;
		
		case 8:
			iVar0 = Global_262145.f_18346 /* Tunable: -555621765 */;
			break;
		
		case 9:
			iVar0 = Global_262145.f_18349 /* Tunable: 45776395 */;
			break;
		
		case 22:
			iVar0 = Global_262145.f_18350 /* Tunable: BIKER_MC_POINTS_DRIVE_CAR */;
			break;
		
		case 23:
			iVar0 = Global_262145.f_18343 /* Tunable: 419613951 */;
			break;
		
		case 25:
			iVar0 = Global_262145.f_19235 /* Tunable: 1684681813 */;
			break;
		
		case 26:
			iVar0 = Global_262145.f_19234 /* Tunable: -1825390724 */;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::PLAYSTATS_EARNED_MC_POINTS(func_186(func_187()), func_184(func_187()), func_183(), func_182(), iParam0, iVar0);
	}
	func_181(iVar0);
	func_180(iVar0);
}

void func_180(int iParam0)//Position - 0x7629
{
	int iVar0;
	
	iVar0 = func_131(3971, -1);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_469 = iVar0;
	func_127(3971, iVar0, -1, 1);
}

void func_181(int iParam0)//Position - 0x7675
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1895156[iVar0 /*609*/].f_10.f_468 = (Global_1895156[iVar0 /*609*/].f_10.f_468 + iParam0);
	if (Global_1895156[iVar0 /*609*/].f_10.f_468 < -9999)
	{
		Global_1895156[iVar0 /*609*/].f_10.f_468 = 9999;
	}
	else if (Global_1895156[iVar0 /*609*/].f_10.f_468 > 9999)
	{
		Global_1895156[iVar0 /*609*/].f_10.f_468 = 9999;
	}
}

int func_182()//Position - 0x76EF
{
	if (Global_1948440.f_3 != 0)
	{
		return Global_1948440.f_3;
	}
	return -1;
}

int func_183()//Position - 0x770B
{
	if (Global_1948440.f_2 != 0)
	{
		return Global_1948440.f_2;
	}
	return -1;
}

int func_184(int iParam0)//Position - 0x7727
{
	if (iParam0 == func_185())
	{
		return -1;
	}
	return Global_1895156[iParam0 /*609*/].f_10.f_8[1];
}

int func_185()//Position - 0x774C
{
	return -1;
}

int func_186(int iParam0)//Position - 0x7755
{
	if (iParam0 == func_185())
	{
		return -1;
	}
	return Global_1895156[iParam0 /*609*/].f_10.f_8[0];
}

int func_187()//Position - 0x777A
{
	return Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10;
}

bool func_188(bool bParam0)//Position - 0x778F
{
	return func_189(PLAYER::PLAYER_ID(), bParam0);
}

int func_189(int iParam0, bool bParam1)//Position - 0x77A1
{
	return func_190(iParam0, bParam1, 1);
}

int func_190(int iParam0, bool bParam1, int iParam2)//Position - 0x77B2
{
	int iVar0;
	
	if (!func_9(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_191(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1895156[iParam0 /*609*/].f_10;
	if (iVar0 != func_185() && Global_1895156[iVar0 /*609*/].f_10.f_429 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0, int iParam1)//Position - 0x780F
{
	if (func_9(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_185())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 == iParam0 && Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_192(int iParam0, int iParam1)//Position - 0x785E
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24178 /* Tunable: 277748102 */ != -1)
		{
			if (func_193())
			{
				Global_2794162.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7127 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7127 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2794162.f_284 = iParam1;
				Global_2794162.f_285 = 0;
			}
		}
	}
}

int func_193()//Position - 0x78B3
{
	if (MISC::IS_PC_VERSION() && Global_1984719 == 0)
	{
		return 0;
	}
	return 0;
}

void func_194(int iParam0, int iParam1)//Position - 0x78D2
{
	struct<3> Var0;
	
	Var0 = { func_201(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam0 == func_200(PLAYER::PLAYER_PED_ID()))
	{
		func_199(1);
	}
	func_195(Var0, iParam1, 7, 0, 0);
}

void func_195(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x7906
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
			Global_2672524.f_1081[iVar1 /*30*/].f_4 = func_198(Global_2672524.f_1081[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2672524.f_1081[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1081[iVar1 /*30*/].f_3 = iParam3;
			Global_2672524.f_1081[iVar1 /*30*/].f_8 = iParam4;
			Global_2672524.f_1081[iVar1 /*30*/].f_9 = func_197();
			Global_2672524.f_1081[iVar1 /*30*/].f_10 = func_196();
			StringCopy(&(Global_2672524.f_1081[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2672524.f_1081[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_196()//Position - 0x7A1D
{
	if (Global_2672524.f_1682)
	{
		Global_2672524.f_1682 = 0;
		return 1;
	}
	Global_2672524.f_1682 = 0;
	return 0;
}

var func_197()//Position - 0x7A47
{
	var uVar0;
	
	uVar0 = Global_2672524.f_1684;
	Global_2672524.f_1684 = 1;
	return uVar0;
}

float func_198(struct<3> Param0, var uParam3, var uParam4)//Position - 0x7A62
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

void func_199(int iParam0)//Position - 0x7AFB
{
	Global_2672524.f_1682 = iParam0;
}

int func_200(int iParam0)//Position - 0x7B0C
{
	return iParam0;
}

Vector3 func_201(int iParam0, bool bParam1)//Position - 0x7B16
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
	if (iParam0 == func_202(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
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

int func_202(int iParam0)//Position - 0x7BDA
{
	return iParam0;
}

void func_203(struct<3> Param0, int iParam3)//Position - 0x7BE4
{
	func_195(Param0, iParam3, 6, 0, 0);
}

void func_204(int iParam0)//Position - 0x7BF9
{
	Global_2672524.f_1684 = iParam0;
}

void func_205(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x7C0A
{
	func_206(iParam0, iParam1, iParam2, fParam3);
}

void func_206(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x7C1E
{
	func_207(iParam0, iParam1, iParam2, fParam3);
}

void func_207(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x7C32
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
		func_208(iVar1, 0);
	}
}

void func_208(int iParam0, bool bParam1)//Position - 0x7CB5
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_209(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x7CC6
{
	int iVar0;
	
	if (!func_220())
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
				func_210(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_210(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
				func_210(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_210(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_210(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x8891
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_220())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_86()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_217(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_216(1, iParam4);
			Global_4536677 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_211(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8A3E
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_212(iParam0);
	}
}

void func_212(int iParam0)//Position - 0x8A76
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_220())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_215(iParam0))
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
		func_213(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_213(var uParam0)//Position - 0x8ACA
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
	func_214(&(uParam0->f_14));
	func_214(&(uParam0->f_14.f_13));
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

void func_214(var uParam0)//Position - 0x8BDA
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

int func_215(int iParam0)//Position - 0x8C22
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_216(int iParam0, int iParam1)//Position - 0x8C4D
{
	Global_2697092 = iParam1;
	Global_2697091 = iParam0;
}

int func_217(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0x8C61
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_220())
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
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && bParam10)
			{
				func_218(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_218(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x8D9E
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
	iVar36 = func_8(Var0.f_1);
	if ((Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24259 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24260 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_219();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_219()//Position - 0x8E30
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_220()//Position - 0x8E40
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

float func_221(int iParam0)//Position - 0x8E57
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_222(int iParam0)//Position - 0x8F0F
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/];
	}
	return -1;
}

int func_223(int iParam0)//Position - 0x8F2E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/] != -1;
	}
	return 0;
}

int func_224(int iParam0, int iParam1)//Position - 0x8F4F
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_225(float fParam0)//Position - 0x8F90
{
	iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
	if (iLocal_548 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_226()//Position - 0x8FC6
{
	iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
	if (iLocal_548 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_227()//Position - 0x8FFB
{
	func_228();
}

int func_228()//Position - 0x9008
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_0))
	{
		return 0;
	}
	if (func_426(Local_86.f_0))
	{
		if (!BitTest(Local_482.f_53, 3))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_86.f_0));
			MISC::SET_BIT(&(Local_482.f_53), 3);
		}
		return 0;
	}
	switch (Local_86.f_3)
	{
		case 0:
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_86.f_0), 71, true);
			break;
		
		case 1:
			if (!BitTest(Local_86.f_25, 4) && !BitTest(Local_86.f_25, 12))
			{
				if (BitTest(Local_86.f_25, 13))
				{
					if (!BitTest(Local_482.f_52, 17))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_86.f_0), 16);
						TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							func_234(10);
						}
						else if (BitTest(Local_86.f_26, 0))
						{
							if (!BitTest(Local_86.f_26, 11))
							{
								if (!BitTest(Local_86.f_26, 12))
								{
									func_234(13);
								}
								else
								{
									func_234(20);
								}
							}
							else
							{
								func_234(17);
							}
							MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						}
						else if (!BitTest(Local_86.f_26, 11))
						{
							if (!BitTest(Local_86.f_26, 12))
							{
								func_234(0);
							}
							else
							{
								func_234(18);
							}
						}
						else
						{
							func_234(15);
						}
						MISC::SET_BIT(&(Local_482.f_52), 17);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 0)
					{
						if (func_19(&uLocal_577, 5000, 0))
						{
							func_15(&uLocal_577);
							if (!iLocal_538)
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), PLAYER::PLAYER_PED_ID(), 10000);
							}
							TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
				}
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_86.f_0), 71, true);
			break;
		
		case 2:
			if (!BitTest(Local_86.f_25, 7) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 0))
			{
				iVar1 = PLAYER::PLAYER_PED_ID();
				if (Local_86.f_34 > -1)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_34)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_34));
						iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), iVar1, -1, 0, 2);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_86.f_0), 16);
					TASK::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_86.f_0), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0f, false, false, false);
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 0)
			{
				if (func_19(&uLocal_577, 5000, 0))
				{
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_86.f_34 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_34)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_34));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					func_15(&uLocal_577);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), iVar1, -1, 0, 2);
				}
			}
			if (BitTest(Local_86.f_25, 16))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_86.f_0), 16);
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_86.f_0), 71, true);
			break;
		
		case 3:
			if (!BitTest(Local_482.f_52, 25))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_ACHIEVE_HEADING")) != 1)
				{
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_0), true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_86.f_0), 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_86.f_0), 8, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_86.f_0), 16, true);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_86.f_0), 16);
					TASK::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_86.f_0), Local_86.f_44, -1);
					MISC::SET_BIT(&(Local_482.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!BitTest(Local_86.f_25, 17) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 3))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_2794162.f_8 = 1;
				}
				iVar2 = PLAYER::PLAYER_PED_ID();
				if (Global_2794162.f_9 != func_185())
				{
					if (func_47(Global_2794162.f_9, 1, 1))
					{
						iVar2 = PLAYER::GET_PLAYER_PED(Global_2794162.f_9);
					}
				}
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), iVar2, 30000, 0, 3);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_86.f_0), "mood_stressed_1", 0);
				MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 3);
			}
			else
			{
				iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
				if (iLocal_548 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
					{
						fLocal_782 = (Local_86.f_35 + 0.6f);
						if (fLocal_782 < 0.75f)
						{
							fLocal_782 = 0.75f;
						}
						if (BitTest(Local_86.f_26, 4))
						{
							fLocal_782 = (fLocal_782 + 0.25f);
						}
						if (fLocal_782 > 1.75f)
						{
							fLocal_782 = 1.75f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_548, fLocal_782);
					}
				}
			}
			break;
		
		case 5:
			if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_86.f_0)))
					{
						iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
						if ((iLocal_548 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548)) || iLocal_548 == -1)
						{
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_86.f_0), iLocal_557);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_86.f_0), 16);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_0), true);
							MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
						}
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 0)
			{
				if (func_19(&uLocal_577, 5000, 0))
				{
					func_15(&uLocal_577);
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_86.f_34 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_34)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_34));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), iVar1, 10000);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_86.f_0), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if ((iLocal_548 == -1 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548)) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548) >= 0.95f)
				{
					func_233();
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_86.f_34 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_34)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_86.f_34));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					TASK::TASK_HANDS_UP(NETWORK::NET_TO_PED(Local_86.f_0), -1, iVar1, -1, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_PED(Local_86.f_0), false, false);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_86.f_0), 16);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_0), true);
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
			{
				if (!func_176())
				{
					func_232();
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_86.f_0));
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_86.f_0), 20f, 0);
					func_234(4);
				}
			}
			break;
		
		case 8:
			if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
			{
				func_233();
				iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
				if ((iLocal_548 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548)) || iLocal_548 == -1)
				{
					if ((!BitTest(Local_86.f_25, 27) && !func_38()) && !func_37())
					{
						if (BitTest(Local_86.f_26, 2))
						{
							if (!BitTest(Local_86.f_26, 3))
							{
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_86.f_0), iLocal_559);
								iVar3 = 1;
							}
							else
							{
								func_232();
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_86.f_0), iLocal_560);
								iVar3 = 1;
							}
						}
					}
					else
					{
						TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_86.f_0), Local_544, 250f, -1, true, false);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_234(25);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_0), true);
						func_6(Local_482.f_50, 1, func_7());
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 9);
					}
				}
			}
			else if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 19))
			{
				iVar4 = TASK::GET_NAVMESH_ROUTE_RESULT(NETWORK::NET_TO_PED(Local_86.f_0));
				if (iVar4 == 3)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_86.f_0));
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_86.f_0));
					if (!BitTest(Local_86.f_26, 3))
					{
						TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_86.f_0), iLocal_561);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_86.f_0), 20f, 0);
					}
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
			}
			break;
	}
	func_229();
	return 1;
}

void func_229()//Position - 0x9894
{
	if ((Local_86.f_3 != 8 && Local_86.f_3 != 7) && Local_86.f_2 == 3)
	{
		if ((((!BitTest(Local_86.f_25, 14) || !BitTest(Local_86.f_25, 15)) || !BitTest(Local_86.f_25, 22)) || !BitTest(Local_86.f_25, 23)) || !BitTest(Local_86.f_25, 30))
		{
			iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
			if (iLocal_548 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
				{
					if (!func_176())
					{
						if (!BitTest(Local_86.f_25, 14) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 6))
						{
							func_234(2);
							MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 6);
						}
						if (!BitTest(Local_86.f_25, 15) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 7))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_548) > 0.87f)
							{
								func_234(3);
								MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 7);
							}
						}
						if (!BitTest(Local_86.f_25, 22) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 22))
						{
							if (BitTest(Local_86.f_25, 24) && !func_176())
							{
								func_234(11);
								MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 22);
							}
						}
						if (!BitTest(Local_86.f_25, 23) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 23))
						{
							if (BitTest(Local_86.f_25, 25) && !func_176())
							{
								func_234(12);
								MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!BitTest(Local_86.f_25, 9))
		{
			if (!BitTest(Local_86.f_25, 26) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 24))
			{
				if (BitTest(Local_86.f_25, 7))
				{
					if (!func_176())
					{
						if (!BitTest(Local_86.f_26, 11))
						{
							if (!BitTest(Local_86.f_26, 12))
							{
								func_234(1);
							}
							else
							{
								func_234(19);
							}
						}
						else
						{
							func_234(16);
						}
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 24);
						return;
					}
					else
					{
						func_230();
						return;
					}
				}
			}
			if (((!BitTest(Local_86.f_25, 30) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 25)) && !BitTest(Local_86.f_25, 7)) && !BitTest(Local_86.f_25, 4))
			{
				if (BitTest(Local_86.f_26, 0) && !func_176())
				{
					if ((BitTest(Local_86.f_25, 7) && BitTest(Local_86.f_25, 4)) || (!BitTest(Local_86.f_25, 7) && !BitTest(Local_86.f_25, 4)))
					{
						if (!BitTest(Local_86.f_26, 11))
						{
							if (!BitTest(Local_86.f_26, 12))
							{
								func_234(13);
							}
							else
							{
								func_234(20);
							}
						}
						else
						{
							func_234(17);
						}
						MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						return;
					}
				}
			}
			if (!BitTest(Local_86.f_25, 31) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 26))
			{
				if (BitTest(Local_86.f_26, 1) && !func_176())
				{
					func_234(14);
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 26);
					return;
				}
			}
			if (!BitTest(Local_86.f_26, 9) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 31))
			{
				if (BitTest(Local_86.f_26, 8) && !func_176())
				{
					func_234(22);
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 31);
					return;
				}
			}
			if (!BitTest(Local_86.f_1, 3) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 3))
			{
				if (BitTest(Local_86.f_1, 2) && !func_176())
				{
					func_234(24);
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 3);
					return;
				}
			}
			if (!BitTest(Local_86.f_26, 14) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 20))
			{
				if (BitTest(Local_86.f_26, 13) && !func_176())
				{
					func_234(23);
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!BitTest(Local_86.f_26, 6) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 29))
	{
		if (BitTest(Local_86.f_26, 5))
		{
			if (!func_176())
			{
				func_234(21);
				MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_230()//Position - 0x9CA6
{
	Global_20711 = 0;
	func_231();
}

void func_231()//Position - 0x9CB6
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}
}

void func_232()//Position - 0x9CD7
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iVar0 < 3)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_PISTOL"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_86.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 35));
	}
	else if (iVar0 < 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_COMBATPISTOL"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_86.f_0), MISC::GET_RANDOM_INT_IN_RANGE(15, 40));
	}
	else if (iVar0 == 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_MICROSMG"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_86.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	else if (iVar0 == 7)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_COMBATMG"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_86.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 15));
	}
	else if (iVar0 == 8)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_BAT"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_86.f_0), MISC::GET_RANDOM_INT_IN_RANGE(20, 40));
	}
	else if (iVar0 == 9)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_ASSAULTRIFLE"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_86.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 30));
	}
	else if (iVar0 == 10)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_SAWNOFFSHOTGUN"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_86.f_0), MISC::GET_RANDOM_INT_IN_RANGE(5, 20));
	}
	else
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_PUMPSHOTGUN"), 25000, false);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_86.f_0), MISC::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	func_6(Local_482.f_50, 1, func_7());
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_86.f_0), Global_1837222);
	PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_86.f_0), true);
	PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_86.f_0), 1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_86.f_0), Local_541, 20f, false, false);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_0), true);
}

void func_233()//Position - 0x9E9D
{
	iLocal_548 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(Local_86.f_31);
	if (iLocal_548 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_548))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_86.f_31);
		}
	}
}

void func_234(int iParam0)//Position - 0x9EC9
{
	struct<2> Var0;
	int iVar4;
	
	if (BitTest(Local_86.f_25, 13))
	{
		if (!func_426(Local_86.f_0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_86.f_0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_86.f_0)))
				{
					if (Local_86.f_47 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_86.f_47 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_86.f_33, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "RB_SH241"))
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true))
						{
							if ((((((iVar4 == joaat("WEAPON_UNARMED") || iVar4 == 0) || iVar4 == joaat("OBJECT")) || iVar4 == joaat("WEAPON_FLARE")) || iVar4 == joaat("WEAPON_SNOWBALL")) || func_256(iVar4)) || func_255(iVar4))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_425(&uLocal_605, 3, NETWORK::NET_TO_PED(Local_86.f_0), &(Local_86.f_48), 1, 0);
					switch (iParam0)
					{
						case 0:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_GREET", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 1:
							func_235(&uLocal_605, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_235(&uLocal_605, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_235(&uLocal_605, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_BRAVE", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 10:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_REMOVE_VEHICLE", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 11:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_REACT_TO_SHOUT", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 12:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_HURRYING", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 13:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_NO_COPS", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 14:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_THREATENED", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 15:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_GREET_START", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 16:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_SCARED_START", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 17:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_NO_COPS_START", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 18:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_GREET_END", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 19:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_SCARED_END", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 20:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_NO_COPS_END", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 21:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_COPS_ARRIVED", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 22:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_SELL", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 23:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_NO_ENTRY" /* GXT: Friendly */, &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 24:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SHOP_STEAL", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						
						case 25:
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(Local_86.f_0), "SCREAM_PANIC", &(Local_86.f_52), "SPEECH_PARAMS_FORCE", true);
							break;
						}
					}
				}
			}
	}
}

int func_235(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA277
{
	func_254(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21852 = 0;
	Global_21854 = 0;
	Global_21859 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_2883585 = 1;
	return func_236(sParam2, iParam3, 0);
}

int func_236(char* sParam0, int iParam1, bool bParam2)//Position - 0xA2C5
{
	Global_21846 = 0;
	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam1 > Global_21847)
			{
				if (Global_21852 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
					Global_21856 = 0;
					Global_21855 = 0;
					Global_20499 = 0;
				}
				else
				{
					func_253();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_252(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_251();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_22841 = Global_22842;
		Global_21464.f_370 = Global_22834;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21841 = Global_21842;
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
			if (bParam2)
			{
				func_244();
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20500.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20466 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_243())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78689)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_242())
			{
				return 0;
			}
			else
			{
				switch (Global_20500.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_8370, 9))
				{
					return 0;
				}
			}
			func_241();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_240();
		func_237();
		return 1;
	}
	if (Global_21845 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21847 || iParam1 == Global_21847)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_253();
	}
	return 0;
}

void func_237()//Position - 0xA593
{
	if (!func_238())
	{
		return;
	}
	if (Global_21851)
	{
		MemCopy(&(Global_1978312.f_1), {Global_21464}, 4);
		Global_1978312 = Global_7685;
		Global_1978312.f_6 = Global_21855;
	}
}

int func_238()//Position - 0xA5CA
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_185())
	{
		return 0;
	}
	if (func_239(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_239(int iParam0)//Position - 0xA62D
{
	return func_145(iParam0, 20);
}

void func_240()//Position - 0xA63D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20713[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21845 = 1;
}

void func_241()//Position - 0xA66F
{
	Global_21898 = Global_21897;
	Global_21892 = Global_21893;
	Global_21939 = { Global_21927 };
	Global_21945 = { Global_21933 };
	Global_21900 = Global_21899;
	Global_21969 = { Global_21951 };
	Global_21975 = { Global_21957 };
	Global_21981 = { Global_21963 };
	Global_21987 = { Global_21993 };
	Global_7685 = Global_7686;
	Global_7687 = Global_7688;
	Global_21856 = Global_21857;
	Global_21858 = Global_21859;
	Global_21860 = { Global_21876 };
	Global_21849 = Global_21850;
	Global_22861 = 0;
	Global_21894 = 0;
	Global_21895 = 0;
	MISC::CLEAR_BIT(&Global_8371, 16);
}

int func_242()//Position - 0xA704
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_243()//Position - 0xA72B
{
	int iVar0;
	int iVar1;
	
	if (Global_78689)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("WEAPON_REMOTESNIPER"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_244()//Position - 0xA7C4
{
	if (func_124(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[0 /*29*/])
			{
				Global_20500 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[1 /*29*/])
			{
				Global_20500 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113810.f_28053[2 /*29*/])
			{
				Global_20500 = 2;
			}
			else
			{
				Global_20500 = 0;
			}
		}
	}
	else
	{
		Global_20500 = func_245();
		if (Global_20500 == 145)
		{
			Global_20500 = 3;
		}
		if (Global_78689)
		{
			Global_20500 = 3;
		}
		if (Global_20500 > 3)
		{
			Global_20500 = 3;
		}
	}
}

var func_245()//Position - 0xA866
{
	func_246();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_246()//Position - 0xA87F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_249(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_248(PLAYER::PLAYER_PED_ID());
			if (func_247(iVar0) && (!func_124(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_247(Global_113810.f_2366.f_539.f_4321))
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

bool func_247(int iParam0)//Position - 0xA97C
{
	return iParam0 < 3;
}

int func_248(int iParam0)//Position - 0xA988
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_249(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_249(int iParam0)//Position - 0xA9C5
{
	if (func_247(iParam0))
	{
		return func_250(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_250(int iParam0)//Position - 0xA9EA
{
	return Global_2058[iParam0 /*29*/];
}

void func_251()//Position - 0xA9F9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_21134[iVar0 /*10*/] = 0;
		StringCopy(&(Global_21134[iVar0 /*10*/].f_1), "", 24);
		Global_21134[iVar0 /*10*/].f_7 = 0;
		Global_21134[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_21134.f_161 = -99;
	Global_21134.f_162 = { 0f, 0f, 0f };
}

bool func_252(int iParam0, int iParam1)//Position - 0xAA51
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

void func_253()//Position - 0xAA89
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20500.f_1 == 9) || Global_20499 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

void func_254(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0xAAE0
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = uParam5;
	if (iParam3 == 0)
	{
		Global_22832 = 1;
		Global_22830 = 0;
	}
	else
	{
		Global_22832 = 0;
		Global_22830 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22833 = 1;
		Global_22831 = 0;
	}
	else
	{
		Global_22833 = 0;
		Global_22831 = 1;
	}
}

int func_255(int iParam0)//Position - 0xAB36
{
	switch (iParam0)
	{
		case joaat("WEAPON_MOLOTOV"):
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_PROXMINE"):
			return 1;
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			return 1;
			break;
	}
	return 0;
}

int func_256(int iParam0)//Position - 0xAB78
{
	switch (iParam0)
	{
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_HATCHET"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
			return 1;
		
		default:
	}
	return 0;
}

void func_257()//Position - 0xABEC
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_86.f_45 != iVar0)
	{
		if (Local_86.f_45 < iVar0 || func_264(Local_86.f_45, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_86.f_45);
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_86.f_46 != iVar0)
	{
		if (Local_86.f_46 < iVar0 || func_258(Local_86.f_46, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_86.f_46);
		}
	}
}

int func_258(int iParam0, bool bParam1, bool bParam2)//Position - 0xAC5A
{
	return func_259(2, iParam0, 1, bParam1, bParam2);
}

int func_259(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xAC6E
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666708, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_263(iParam0) - func_262(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_262(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_263(iParam0) - func_261(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_262(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_263(iParam0) - func_262(iParam0, 1));
		}
		if (!bParam4 && Global_1853988[PLAYER::PLAYER_ID() /*867*/] != 3)
		{
			iVar1 = (iVar1 - func_260(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_260(int iParam0)//Position - 0xAD34
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_261(int iParam0)//Position - 0xAD6E
{
	switch (iParam0)
	{
		case 0:
			return Global_1666708.f_1;
			break;
		
		case 1:
			return Global_1666708.f_2;
			break;
		
		case 2:
			return Global_1666708.f_3;
			break;
	}
	return 0;
}

int func_262(int iParam0, bool bParam1)//Position - 0xADB4
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_220;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2657704[iVar0 /*463*/].f_221;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_263(int iParam0)//Position - 0xAE51
{
	switch (iParam0)
	{
		case 0:
			return Global_1666716;
			break;
		
		case 1:
			return Global_1666717;
			break;
		
		case 2:
			return Global_1666718;
			break;
	}
	return 0;
}

int func_264(int iParam0, bool bParam1, bool bParam2)//Position - 0xAE91
{
	return func_259(0, iParam0, 1, bParam1, bParam2);
}

void func_265()//Position - 0xAEA5
{
	float fVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	switch (iLocal_800)
	{
		case 0:
			if (!BitTest(Local_482.f_53, 0))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_15))
				{
					if (func_271(Local_806))
					{
						Local_806 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_86.f_15), 0f, -0.5f, 0f) };
						MISC::SET_BIT(&(Local_482.f_53), 0);
					}
				}
			}
			if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_806, 0.5f, 0.5f, 1f, false, true, 0) && (func_426(Local_86.f_0) || Local_86.f_3 > 7)) && !BitTest(Local_86.f_25, 20)) && !BitTest(Local_86.f_25, 11)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_549, 1.5f) == 0)
			{
				if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_173(0)) && !func_270()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_40(PLAYER::PLAYER_ID(), 146)) && !func_39(PLAYER::PLAYER_ID())) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_15)) && (!func_143(PLAYER::PLAYER_ID()) || func_98(PLAYER::PLAYER_ID()) == 154))
				{
					func_153("FHU_MANR" /* GXT: Press ~INPUT_CONTEXT~ to take cash. */, -1);
					Global_2794162.f_5999.f_4 = 1;
					iLocal_800 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!BitTest(Local_86.f_26, 16) && !BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) && !BitTest(Local_86.f_25, 20)) && !BitTest(Local_86.f_25, 11)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_806, 0.5f, 0.5f, 1f, false, true, 0)) && (!func_143(PLAYER::PLAYER_ID()) || func_98(PLAYER::PLAYER_ID()) == 154))
			{
				if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !func_269(0)) && !func_270()) && !HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_151("FHU_MANR" /* GXT: Press ~INPUT_CONTEXT~ to take cash. */))
					{
						HUD::CLEAR_HELP(true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 640);
					MISC::SET_BIT(&(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 12);
					iLocal_800 = 2;
				}
				else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
					if (iLocal_805 == 0)
					{
						func_266(&iLocal_805, 4, "FHU_MANR" /* GXT: Press ~INPUT_CONTEXT~ to take cash. */, 0, 0, 0, 0);
					}
				}
			}
			else if (func_151("FHU_MANR" /* GXT: Press ~INPUT_CONTEXT~ to take cash. */))
			{
				HUD::CLEAR_HELP(true);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Local_806.f_2 = (Var3.f_2 - 1f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_806, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D((Local_569.f_0 - Local_806.f_0), (Local_569.f_1 - Local_806.f_1)));
				TASK::CLEAR_SEQUENCE_TASK(&iVar6);
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar6);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar6);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_804, true);
				if (bVar2)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				if (!CAM::DOES_CAM_EXIST(iLocal_801))
				{
					iLocal_801 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_801, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_801, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_801, 35f);
				CAM::SHAKE_CAM(iLocal_801, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(iLocal_801, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			iLocal_800 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_802))
				{
					iLocal_802 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_802, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_802, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, true);
				CAM::SET_CAM_FOV(iLocal_802, 35f);
				CAM::SHAKE_CAM(iLocal_802, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_802, iLocal_801, 6000, 1, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			iLocal_800 = 4;
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_802))
			{
				iLocal_800 = 5;
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_803)
						{
							iVar7 = SYSTEM::ROUND(((IntToFloat(iLocal_574) * 0.75f) / 4f));
							iVar8 = SYSTEM::ROUND(((IntToFloat(iLocal_575) * 0.75f) / 4f));
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(iVar7, iVar8 + 1);
							iVar1 = func_224(iVar1, 1);
							if (iVar1 > (Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */ / 4))
							{
								iVar1 = (Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */ / 4);
							}
							if (func_223(PLAYER::PLAYER_ID()) && func_221(func_222(PLAYER::PLAYER_ID())) < 1f)
							{
								if (Global_262145.f_4237 /* Tunable: HOLD_UP_FM_EVENT_MULT */ > 1f)
								{
									Global_262145.f_4237 = 1f;
								}
								iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_4237 /* Tunable: HOLD_UP_FM_EVENT_MULT */));
							}
							if (iVar1 > 0)
							{
								if (func_220())
								{
									func_209(joaat("SERVICE_EARN_HOLDUPS"), iVar1, &uVar9, 0, 0, 0);
								}
								else
								{
									func_205(iVar1, 1, 1, 1092616192);
									MONEY::NETWORK_EARN_FROM_HOLDUPS(iVar1);
								}
							}
							Global_2794162.f_5999 = (Global_2794162.f_5999 + iVar1);
							iLocal_799 = (iLocal_799 + iVar1);
							func_192(1, iLocal_799);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", true);
							iLocal_803 = 1;
						}
					}
					else if (iLocal_803)
					{
						iLocal_803 = 0;
					}
				}
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, true);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
			}
			break;
		
		case 5:
			if (iLocal_804 != joaat("WEAPON_UNARMED") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_804, true);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (CAM::DOES_CAM_EXIST(iLocal_801))
			{
				CAM::DESTROY_CAM(iLocal_801, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_802))
			{
				CAM::DESTROY_CAM(iLocal_802, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			Global_2794162.f_5999.f_2 = 1;
			Global_2794162.f_5999.f_5 = 1;
			if (func_188(1))
			{
				func_179(4);
			}
			iLocal_800 = 7;
			break;
		
		case 6:
			CAM::SET_CAM_ACTIVE(iLocal_802, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			iLocal_800 = 5;
			break;
	}
}

void func_266(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xB608
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_267(iParam0);
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

void func_267(var uParam0)//Position - 0xB733
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_268(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44123[iVar0 /*32*/])
		{
			Global_44123[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_268(int iParam0)//Position - 0xB78A
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

int func_269(int iParam0)//Position - 0xB7C5
{
	if (iParam0 == 1)
	{
		if (Global_20500.f_1 > 3)
		{
			if (BitTest(Global_8370, 14))
			{
				if (Global_20499 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_20499 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_20500.f_1 > 3)
	{
		if (Global_20499 == 1)
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

bool func_270()//Position - 0xB846
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

int func_271(struct<3> Param0)//Position - 0xB85B
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_272(var uParam0, var uParam1, var uParam2, var uParam3, struct<3> Param4, var uParam7, int* iParam8, bool bParam9, bool bParam10)//Position - 0xB885
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	int iVar9;
	char* sVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	
	if (((uParam7->f_4 >= 1000 || (uParam7->f_4 + uParam0->f_51) >= 1000) || func_423(&(uParam7->f_5))) || (func_147(&(Global_2794162.f_10)) && !func_422(Global_2794162.f_10, 300000, 0)))
	{
		if (func_147(&(Global_2794162.f_10)))
		{
			if ((MISC::GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_147(&(Global_2794162.f_10)))
			{
				func_20(&(Global_2794162.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_147(&(Global_2794162.f_10)))
		{
			func_15(&(Global_2794162.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((MISC::GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((uParam7->f_3 < 2 && func_47(PLAYER::PLAYER_ID(), 1, 1)) && BitTest(uParam0->f_52, 26)) && !func_421(-1082130432)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !bParam9) && !func_426(*uParam7))
	{
		bVar8 = false;
		iVar9 = 0;
		if ((HUD::IS_PAUSE_MENU_ACTIVE() && uParam0->f_54 != 0) && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			if (!bParam10)
			{
				uParam0->f_54 = 0;
				func_420(uParam0, &(iParam8->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!HUD::IS_PAUSE_MENU_ACTIVE() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && (!func_143(PLAYER::PLAYER_ID()) || func_98(PLAYER::PLAYER_ID()) == 154)) && !func_419(PLAYER::PLAYER_ID(), 21))
				{
					if (func_418(*uParam0, &uParam1, Param4.f_2, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), true) };
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, uParam0->f_23, true) < 5f && MISC::ABSF((Var2.f_2 - Var5.f_2)) < 0.25f) || func_477(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, false, true, 0) || func_477(1))
							{
								if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || func_477(1))
								{
									if (uParam0->f_34)
									{
										if (func_477(1))
										{
											func_440();
										}
										if (((!func_151("SHR_HOLDUP_1" /* GXT: Rob the cash register by pointing a weapon at the shop clerk. */) && !func_151("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */)) && !func_417()) && func_416())
										{
											func_153("SHR_SOLD_OUT" /* GXT: Store is currently sold out. */, -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_477(1))
										{
										}
										uParam0->f_14 = -1;
										func_266(&(uParam0->f_14), 4, "SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */, 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((MISC::GET_GAME_TIMER() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((MISC::GET_GAME_TIMER() % 8000) < 50)
								{
								}
								GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((MISC::GET_GAME_TIMER() % 8000) < 50)
							{
							}
							GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_151("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					if (func_41(PLAYER::PLAYER_ID()))
					{
						if (!BitTest(uParam0->f_53, 4))
						{
							func_153("SHR_FM_CRIT" /* GXT: Convenience stores are not available while a key player in a Freemode Event. */, -1);
							HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
							MISC::SET_BIT(&(uParam0->f_53), 4);
						}
					}
					if ((MISC::GET_GAME_TIMER() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), true) };
				if ((!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || MISC::ABSF((Var2.f_2 - Var5.f_2)) >= 0.25f) && !func_477(1))
				{
					if (func_151("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_267(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_151("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_267(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_173(0) || func_172())
				{
					if (func_151("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_267(&(uParam0->f_14));
					func_167(1, *uParam0);
					MISC::CLEAR_BIT(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_415(uParam0->f_14, 1) || func_477(1))
					{
						if (func_477(1))
						{
							func_440();
						}
						if (func_151("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
						{
							HUD::CLEAR_HELP(true);
						}
						func_413(&(uParam0->f_44));
						func_267(&(uParam0->f_14));
						func_407(0, 0);
						MISC::SET_BIT(&(uParam0->f_53), 7);
						func_464(PLAYER::PLAYER_ID(), 0, 66048, 0);
						HUD::THEFEED_FLUSH_QUEUE();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_426(*uParam7))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(*uParam7), 0);
							MISC::CLEAR_BIT(&(iParam8->f_1), 1);
						}
						func_406();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam10)
				{
					if (!CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 50f, false, 2);
						func_405(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &fVar11);
						CAM::SET_CAM_COORD(uParam0->f_1, uParam0->f_2);
						CAM::SET_CAM_ROT(uParam0->f_1, uParam0->f_5, 2);
						CAM::SET_CAM_FOV(uParam0->f_1, fVar11);
						CAM::SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0.1f);
						CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					uParam0->f_37 = func_428(*uParam0);
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				uParam0->f_13 = func_404();
				func_403(0, 0);
				func_402(1, 1, 0, 0, 0);
				func_401(1, 2, 1, 1, 1);
				func_400("SNK_ITEM");
				if (!bParam10)
				{
					func_398(1, uParam0->f_37, uParam0->f_37);
				}
				iVar12 = 0;
				while (iVar12 < uParam0->f_13)
				{
					bVar8 = func_397(iVar12);
					func_392(iVar12, func_396(iVar12), 0, !bVar8, 0, 0, 0);
					if (uParam7->f_5[iVar12] >= 10 || ((func_147(&(Global_2794162.f_12[iVar12 /*2*/])) && !func_422(Global_2794162.f_12[iVar12 /*2*/], 150000, 0)) && *uParam0 == Global_2794162.f_27))
					{
						func_392(iVar12, "", 1, 1, 0, 0, 0);
						func_391(15, 0);
						if (func_147(&(Global_2794162.f_12[iVar12 /*2*/])) && !func_422(Global_2794162.f_12[iVar12 /*2*/], 150000, 0))
						{
							uParam7->f_5[iVar12] = 10;
						}
						if (!func_147(&(Global_2794162.f_12[iVar12 /*2*/])))
						{
							Global_2794162.f_27 = *uParam0;
							func_20(&(Global_2794162.f_12[iVar12 /*2*/]), 0, 0);
						}
					}
					else if (bVar8)
					{
						func_392(iVar12, "SNK_FULL", 0, !bVar8, 0, 0, 0);
					}
					else if (!bParam10)
					{
						func_392(iVar12, "ITEM_COST" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
						func_387(func_390(uParam0, iVar12), 0);
					}
					else
					{
						func_392(iVar12, "SNK_FREE", 0, 1, 0, 0, 0);
					}
					iVar12++;
				}
				func_386(0);
				func_385(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam10)
					{
						func_384("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_384("SNK_STORED", 0, 0);
					}
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10)
				{
					func_384("SNK_SOUT", 0, 0);
				}
				else
				{
					func_384(func_383(uParam0->f_12), 0, 0);
				}
				func_382(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
				if (bParam10)
				{
					func_382(203, "STORE_TAKE_ALL" /* GXT: Take all */, -1, 0);
				}
				func_382(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
				if (!bParam10)
				{
					func_382(203, "SNK_LIFT", -1, 0);
					func_349(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 7)
				{
					if (!BitTest(iParam8->f_1, 1))
					{
						if (!bParam10)
						{
							func_464(PLAYER::PLAYER_ID(), 0, 98816, 0);
						}
						else
						{
							func_464(PLAYER::PLAYER_ID(), 0, 256, 0);
						}
						MISC::SET_BIT(&(iParam8->f_1), 1);
					}
				}
				iVar9 = 0;
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
						func_345(0, 0, 0, 1);
						func_344(0, -1, 1);
						if (func_343())
						{
							if (Global_4541034 != uParam0->f_12)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								uParam0->f_12 = Global_4541034;
								func_385(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar10 = func_383(uParam0->f_12);
								if (HUD::DOES_TEXT_LABEL_EXIST(sVar10))
								{
									func_384(sVar10, 0, 0);
								}
							}
							else
							{
								iVar9 = 1;
							}
						}
					}
				}
				if (!bParam10)
				{
					func_349(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_333(uParam0, &(uParam7->f_5), bParam10);
				if ((uParam7->f_2 > 2 && BitTest(uParam7->f_1, 0)) && BitTest(iParam8->f_1, 0))
				{
					MISC::CLEAR_BIT(&(iParam8->f_1), 0);
				}
				if (bParam10 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
				{
					func_328(uParam0, bParam10);
					uParam0->f_35 = 1;
					uParam0->f_54 = 3;
				}
				if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar9 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_413(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_220())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_390(uParam0, uParam0->f_12);
							}
							func_316(uParam0, joaat("CATEGORY_MART"), joaat("NET_SHOP_ACTION_SPEND"), iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_390(uParam0, uParam0->f_12);
							}
							func_315(MISC::GET_HASH_KEY(func_383(uParam0->f_12)), iVar0, 0);
							func_308(0, 31, 3);
							uParam0->f_54 = 11;
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam10)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam7->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_413(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
						}
						else if (!uParam0->f_31)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", true);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_163(), func_307(), 8f, -8f, -1, 1048576, 0f, false, false, false);
							uParam0->f_54 = 8;
							uParam0->f_15 = MISC::GET_GAME_TIMER();
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_LIQUOR_STORE_SOUNDSET", true);
							if (!bParam10)
							{
								func_420(uParam0, &(iParam8->f_3));
							}
						}
					}
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
				{
					if (func_477(1))
					{
						func_440();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = MISC::GET_GAME_TIMER();
					if (!bParam10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
						func_420(uParam0, &(iParam8->f_3));
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FREEMODE_SOUNDSET", true);
						Global_2694606 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = MISC::GET_GAME_TIMER();
					if (!bParam10)
					{
						func_420(uParam0, &(iParam8->f_3));
					}
					func_153("SHR_SOLD_OUT" /* GXT: Store is currently sold out. */, -1);
				}
				iVar13 = 0;
				while (iVar13 < uParam0->f_13)
				{
					if (func_147(&(Global_2794162.f_12[iVar13 /*2*/])) && func_422(Global_2794162.f_12[iVar13 /*2*/], 150000, 0))
					{
						func_15(&(Global_2794162.f_12[iVar13 /*2*/]));
						uParam7->f_5[iVar13] = 0;
						uParam0->f_54 = 3;
					}
					iVar13++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam10)
				{
					func_349(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_390(uParam0, uParam0->f_12);
				}
				if (func_316(uParam0, joaat("CATEGORY_MART"), joaat("NET_SHOP_ACTION_SPEND"), iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam10)
								{
									iVar0 = func_390(uParam0, uParam0->f_12);
								}
								func_315(MISC::GET_HASH_KEY(func_383(uParam0->f_12)), iVar0, 0);
								func_308(0, 31, 3);
								func_306();
								func_305();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_477(1))
								{
									func_440();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = MISC::GET_GAME_TIMER();
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", true);
								if (!bParam10)
								{
									func_420(uParam0, &(iParam8->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", true);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam10)
				{
					func_349(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_220())
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_303(func_304()));
				}
				if (bParam10)
				{
					if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_133, 6))
					{
						MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_133), 6);
					}
					MONEY::NETWORK_SPENT_PA_SERVICE_SNACK(0, uParam0->f_12, 0, 1);
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_108(1276, 1, -1);
							func_107(16, 1, -1);
							func_279(1, -251807494, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 1:
							func_108(1277, 1, -1);
							func_107(15, 1, -1);
							func_279(1, 1199442189, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 2:
							func_107(14, 1, -1);
							func_108(1278, 1, -1);
							func_279(1, 1486811039, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_131(1098, -1) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_131(1098, -1));
							}
							func_279(1, -181862273, joaat("snack"), uParam0->f_55, func_286(), joaat("purchase"), 0, joaat("pa"));
							func_108(1098, uParam0->f_55, -1);
							break;
						
						case 0:
							func_108(62, 1, -1);
							func_279(1, -39155154, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 5:
							func_108(63, 1, -1);
							func_279(1, -1600998734, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("pa"));
							break;
						
						case 6:
							func_108(10404, 1, -1);
							func_279(1, 495696637, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("pa"));
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_278(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_390(uParam0, uParam0->f_12);
							}
							func_108(1276, 1, -1);
							func_279(1, -251807494, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("store"));
							func_107(16, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM1"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 1:
							if (func_278(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_390(uParam0, uParam0->f_12);
							}
							func_108(1277, 1, -1);
							func_279(1, 1199442189, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("store"));
							func_107(15, 1, -1);
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM2"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 2:
							if (func_278(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_390(uParam0, uParam0->f_12);
							}
							func_107(14, 1, -1);
							func_108(1278, 1, -1);
							func_279(1, 1486811039, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM3"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 4:
							if (func_278(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_390(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_131(1098, -1) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_131(1098, -1));
							}
							func_108(1098, uParam0->f_55, -1);
							func_279(1, -181862273, joaat("snack"), uParam0->f_55, func_286(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM4"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 0:
							if (func_278(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_390(uParam0, uParam0->f_12);
							}
							func_108(62, 1, -1);
							func_279(1, -39155154, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM5"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 6:
							if (func_278(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_390(uParam0, uParam0->f_12);
							}
							func_108(10404, 1, -1);
							func_279(1, 495696637, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM7"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						
						case 5:
							if (func_278(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_390(uParam0, uParam0->f_12);
							}
							func_108(63, 1, -1);
							func_279(1, -1600998734, joaat("snack"), 1, func_286(), joaat("purchase"), 0, joaat("store"));
							MONEY::NETWORK_BUY_ITEM(iVar1, MISC::GET_HASH_KEY("SNK_ITEM6"), 12, 1, false, 0, 0, 0, 0, true);
							break;
						}
				}
				if (func_220())
				{
					func_212(func_304());
				}
				func_277(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!BitTest(*iParam8, 30))
				{
					MISC::SET_BIT(iParam8, 30);
				}
				if (!BitTest(iParam8->f_1, 0))
				{
					MISC::SET_BIT(&(iParam8->f_1), 0);
					iParam8->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam10)
					{
						func_420(uParam0, &(iParam8->f_3));
					}
					func_153("SHR_SOLD_OUT" /* GXT: Store is currently sold out. */, -1);
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10 || func_397(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_199(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_275(0, 1f, 3);
						func_279(1, -251807494, joaat("snack"), 1, func_286(), joaat("steal"), 0, joaat("store"));
						func_108(1276, 1, -1);
						func_107(13, 1, -1);
						break;
					
					case 1:
						func_275(1, 1f, 3);
						func_108(1277, 1, -1);
						func_279(1, 1199442189, joaat("snack"), 1, func_286(), joaat("steal"), 0, joaat("store"));
						func_107(13, 1, -1);
						break;
					
					case 2:
						func_275(2, 1f, 3);
						func_108(1278, 1, -1);
						func_279(1, 1486811039, joaat("snack"), 1, func_286(), joaat("steal"), 0, joaat("store"));
						func_107(13, 1, -1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_131(1098, -1) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_131(1098, -1));
						}
						func_275(6, SYSTEM::TO_FLOAT(uParam0->f_55), 3);
						func_108(1098, uParam0->f_55, -1);
						func_279(1, -181862273, joaat("snack"), 1, func_286(), joaat("steal"), 0, joaat("store"));
						break;
					
					case 0:
						func_275(3, 1f, 3);
						func_108(62, 1, -1);
						func_279(1, -39155154, joaat("snack"), 1, func_286(), joaat("steal"), 0, joaat("store"));
						break;
					
					case 6:
						func_275(5, 1f, 3);
						func_108(10404, 1, -1);
						func_279(1, 495696637, joaat("snack"), 1, func_286(), joaat("steal"), 0, joaat("store"));
						break;
					
					case 5:
						func_275(4, 1f, 3);
						func_108(63, 1, -1);
						func_279(1, -1600998734, joaat("snack"), 1, func_286(), joaat("steal"), 0, joaat("store"));
						break;
				}
				if (!bParam10)
				{
					func_464(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1 && !func_273(PLAYER::PLAYER_ID()))
				{
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
					MISC::SET_BIT(iParam8, 25);
					if (!BitTest(*iParam8, 1))
					{
						MISC::SET_BIT(iParam8, 2);
					}
				}
				if (!BitTest(iParam8->f_1, 2))
				{
					MISC::SET_BIT(&(iParam8->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_100885.f_1482 && !NETWORK::IS_COMMERCE_STORE_OPEN())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam10)
				{
					func_464(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if ((MISC::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
				}
				break;
			
			case 9:
				if ((MISC::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
					PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
				}
				break;
			
			case 12:
				if (BitTest(uParam7->f_1, 3))
				{
					if (BitTest(iParam8->f_1, 2))
					{
						MISC::CLEAR_BIT(&(iParam8->f_1), 2);
					}
					if (BitTest(iParam8->f_1, 3))
					{
						MISC::CLEAR_BIT(&(iParam8->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 8000) < 50)
		{
		}
		if (BitTest(uParam7->f_1, 3))
		{
			if (BitTest(iParam8->f_1, 2))
			{
				MISC::CLEAR_BIT(&(iParam8->f_1), 2);
			}
			if (BitTest(iParam8->f_1, 3))
			{
				MISC::CLEAR_BIT(&(iParam8->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && BitTest(uParam0->f_52, 26)) && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_420(uParam0, &(iParam8->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_267(&(uParam0->f_14));
		}
	}
}

int func_273(int iParam0)//Position - 0xD047
{
	if ((func_41(iParam0) || func_274(iParam0)) && func_221(func_222(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_274(int iParam0)//Position - 0xD07A
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 7);
	}
	return 0;
}

void func_275(int iParam0, float fParam1, int iParam2)//Position - 0xD09D
{
	struct<8> Var0;
	struct<3> Var8;
	int iVar11;
	int iVar12;
	
	if (fParam1 > 0f)
	{
		if (func_276(iParam0, &Var0))
		{
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			func_199(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2672524.f_1081[iVar11 /*30*/].f_6 == 0 || Global_2672524.f_1081[iVar11 /*30*/].f_6 == 7)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2672524.f_1081[iVar12 /*30*/] = { Var8 };
				Global_2672524.f_1081[iVar12 /*30*/].f_6 = 1;
				Global_2672524.f_1081[iVar12 /*30*/].f_4 = func_198(Global_2672524.f_1081[iVar12 /*30*/], &Global_1574479, &Global_1574480);
				Global_2672524.f_1081[iVar12 /*30*/].f_5 = fParam1;
				Global_2672524.f_1081[iVar12 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
				Global_2672524.f_1081[iVar12 /*30*/].f_8 = iParam2;
				Global_2672524.f_1081[iVar12 /*30*/].f_14 = { Var0 };
				Global_2672524.f_1081[iVar12 /*30*/].f_9 = func_197();
				Global_2672524.f_1081[iVar12 /*30*/].f_10 = func_196();
			}
		}
	}
}

int func_276(int iParam0, char* sParam1)//Position - 0xD1BF
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1" /* GXT: Snack +~1~ */, 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2" /* GXT: Snack +~1~ */, 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3" /* GXT: Snack +~1~ */, 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1" /* GXT: eCola +~1~ */, 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2" /* GXT: Pisswasser +~1~ */, 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_11" /* GXT: Smokes +~1~ */, 32);
			return 1;
		
		case 7:
			StringCopy(sParam1, "PU_REWARD_PC" /* GXT: +~1~ points */, 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_D3" /* GXT: Sprunk +~1~ */, 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_277(int iParam0, int iParam1)//Position - 0xD25F
{
	func_207(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_208(iParam0, 0);
	}
}

int func_278(int iParam0, bool bParam1, bool bParam2)//Position - 0xD27D
{
	if (iParam0 == func_185())
	{
		return 0;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_279(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD2E1
{
	bool bVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (Global_1890689)
	{
		if (Global_1890689.f_3.f_6 != iParam1)
		{
			bVar0 = true;
		}
		else if (Global_1890689.f_3 != iParam0)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1890689.f_3.f_3 != iParam4)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1890689.f_3.f_5 != iParam2)
		{
			bVar0 = true;
		}
		else if (Global_1890689.f_3.f_1 != iParam5)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1890689.f_3.f_4 != iParam7)
		{
			bVar0 = true;
			iVar1 = 1;
		}
		else if (Global_1890689.f_3.f_9 != iParam6)
		{
			bVar0 = true;
		}
		else if (Global_1890689.f_3.f_2 != func_284())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_283(&(Global_1890689.f_3));
		STATS::PLAYSTATS_INVENTORY(&(Global_1890689.f_3));
		func_282();
	}
	Global_1890689 = 1;
	Global_1890689.f_3 = iParam0;
	if (func_280())
	{
		Global_1890689.f_3.f_2 = func_284();
	}
	Global_1890689.f_3.f_6 = iParam1;
	Global_1890689.f_3.f_5 = iParam2;
	Global_1890689.f_3.f_7 = (Global_1890689.f_3.f_7 + iParam3);
	Global_1890689.f_3.f_3 = iParam4;
	Global_1890689.f_3.f_1 = iParam5;
	Global_1890689.f_3.f_4 = iParam7;
	Global_1890689.f_3.f_9 = iParam6;
	if (((((iVar1 || Global_1890689.f_13 != Global_1890689.f_3) || Global_1890689.f_13.f_3 != Global_1890689.f_3.f_3) || Global_1890689.f_13.f_1 != Global_1890689.f_3.f_1) || Global_1890689.f_13.f_4 != Global_1890689.f_3.f_4) || (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1890689.f_3.f_8) >= 120)
	{
		if (Global_1890689.f_3 != 0)
		{
			Global_1890689.f_3.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else
		{
			Global_1890689.f_3.f_8 = 0;
		}
	}
	func_15(&(Global_1890689.f_1));
	func_20(&(Global_1890689.f_1), 0, 0);
}

int func_280()//Position - 0xD4D9
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_281() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_281()//Position - 0xD521
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_282()//Position - 0xD536
{
	Global_1890689.f_13 = { Global_1890689.f_3 };
	Global_1890689 = 0;
	Global_1890689.f_3 = 0;
	Global_1890689.f_3.f_2 = 0;
	Global_1890689.f_3.f_6 = 0;
	Global_1890689.f_3.f_5 = 0;
	Global_1890689.f_3.f_7 = 0;
	Global_1890689.f_3.f_3 = 0;
	Global_1890689.f_3.f_1 = 0;
	Global_1890689.f_3.f_4 = 0;
	Global_1890689.f_3.f_9 = 0;
	func_15(&(Global_1890689.f_1));
}

void func_283(var uParam0)//Position - 0xD5AE
{
}

int func_284()//Position - 0xD5B6
{
	struct<13> Var0;
	
	Var0 = { func_281() };
	return func_285(&Var0);
}

int func_285(var* uParam0)//Position - 0xD5CD
{
	var uVar0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar0, 35, uParam0);
				return uVar0;
			}
		}
	}
	return -1;
}

int func_286()//Position - 0xD5FD
{
	return MISC::GET_HASH_KEY(func_287());
}

char* func_287()//Position - 0xD60D
{
	int iVar0;
	int iVar1;
	
	if (func_302())
	{
		return func_300(func_301(PLAYER::PLAYER_ID()));
	}
	else if (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33 != -1)
	{
		return func_299(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_33);
	}
	else if (func_298(PLAYER::PLAYER_ID()))
	{
		return "SIMEON_SHOWROOM";
	}
	else if (func_296(PLAYER::PLAYER_ID()))
	{
		return "BEACH_PARTY";
	}
	else if (func_295())
	{
		return "ARENA_BOX";
	}
	else if (Global_2794162.f_5999.f_1 && Global_1984597 != -1)
	{
		return func_294(Global_1984597);
	}
	else if (Global_100885.f_393 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			iVar1 = func_293(iVar0);
			if (BitTest(Global_100885.f_1414[iVar1], 5))
			{
				return func_292(iVar0);
			}
			iVar0++;
		}
	}
	return func_288();
}

char* func_288()//Position - 0xD6FF
{
	char cVar0[24];
	
	if (func_47(PLAYER::PLAYER_ID(), 1, 1))
	{
		StringCopy(&cVar0, "FREEMODE_", 24);
		StringConCat(&cVar0, func_290(ZONE::GET_NAME_OF_ZONE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))), 24);
		return func_289(&cVar0);
	}
	return "FREEMODE_DEAD";
}

var func_289(char[4] cParam0)//Position - 0xD73E
{
	return cParam0;
}

char* func_290(char* sParam0)//Position - 0xD748
{
	struct<8> Var0;
	char cVar16[64];
	char cVar32[64];
	int iVar48;
	
	if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			iVar48 = 0;
			iVar48 = 0;
			while (iVar48 <= (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) - 1))
			{
				StringCopy(&Var0, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, iVar48, iVar48 + 1), 64);
				StringCopy(&cVar16, func_291(&Var0), 64);
				StringConCat(&cVar32, &cVar16, 64);
				iVar48++;
			}
			return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(&cVar32, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar32));
		}
	}
	return sParam0;
}

char* func_291(char* sParam0)//Position - 0xD7B0
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) == 1)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "a") || MISC::ARE_STRINGS_EQUAL(sParam0, "A"))
			{
				return "A";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "b") || MISC::ARE_STRINGS_EQUAL(sParam0, "B"))
			{
				return "B";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "c") || MISC::ARE_STRINGS_EQUAL(sParam0, "C"))
			{
				return "C";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "d") || MISC::ARE_STRINGS_EQUAL(sParam0, "D"))
			{
				return "D";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "e") || MISC::ARE_STRINGS_EQUAL(sParam0, "E"))
			{
				return "E";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "f") || MISC::ARE_STRINGS_EQUAL(sParam0, "F"))
			{
				return "F";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "g") || MISC::ARE_STRINGS_EQUAL(sParam0, "G"))
			{
				return "G";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "h") || MISC::ARE_STRINGS_EQUAL(sParam0, "H"))
			{
				return "H";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "i") || MISC::ARE_STRINGS_EQUAL(sParam0, "I"))
			{
				return "I";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "j") || MISC::ARE_STRINGS_EQUAL(sParam0, "J"))
			{
				return "J";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "k") || MISC::ARE_STRINGS_EQUAL(sParam0, "K"))
			{
				return "K";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "l") || MISC::ARE_STRINGS_EQUAL(sParam0, "L"))
			{
				return "L";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "m") || MISC::ARE_STRINGS_EQUAL(sParam0, "M"))
			{
				return "M";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "n") || MISC::ARE_STRINGS_EQUAL(sParam0, "N"))
			{
				return "N";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "o") || MISC::ARE_STRINGS_EQUAL(sParam0, "O"))
			{
				return "O";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "p") || MISC::ARE_STRINGS_EQUAL(sParam0, "P"))
			{
				return "P";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "q") || MISC::ARE_STRINGS_EQUAL(sParam0, "Q"))
			{
				return "Q";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "r") || MISC::ARE_STRINGS_EQUAL(sParam0, "R"))
			{
				return "R";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "s") || MISC::ARE_STRINGS_EQUAL(sParam0, "S"))
			{
				return "S";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "t") || MISC::ARE_STRINGS_EQUAL(sParam0, "T"))
			{
				return "T";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "u") || MISC::ARE_STRINGS_EQUAL(sParam0, "U"))
			{
				return "U";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "v") || MISC::ARE_STRINGS_EQUAL(sParam0, "V"))
			{
				return "V";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "w") || MISC::ARE_STRINGS_EQUAL(sParam0, "W"))
			{
				return "W";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "x") || MISC::ARE_STRINGS_EQUAL(sParam0, "X"))
			{
				return "X";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "y") || MISC::ARE_STRINGS_EQUAL(sParam0, "Y"))
			{
				return "Y";
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam0, "z") || MISC::ARE_STRINGS_EQUAL(sParam0, "Z"))
			{
				return "Z";
			}
		}
	}
	return sParam0;
}

char* func_292(int iParam0)//Position - 0xDBC1
{
	switch (iParam0)
	{
		case 0:
			return "GUN_SHOP_01_DT";
		
		case 1:
			return "GUN_SHOP_02_SS";
		
		case 2:
			return "GUN_SHOP_03_HW";
		
		case 3:
			return "GUN_SHOP_04_ELS";
		
		case 4:
			return "GUN_SHOP_05_PB";
		
		case 5:
			return "GUN_SHOP_06_LS";
		
		case 6:
			return "GUN_SHOP_07_MW";
		
		case 7:
			return "GUN_SHOP_08_CS";
		
		case 8:
			return "GUN_SHOP_09_GOH";
		
		case 9:
			return "GUN_SHOP_10_VWH";
		
		case 10:
			return "GUN_SHOP_11_ID1";
		
		case 11:
			return "GUN_SHOP_ARMORY";
		
		case 12:
			return "GUN_SHOP_ARMORY_AVENGER";
		
		case 13:
			return "GUN_SHOP_ARMORY_HACKER_TRUCK";
		
		case 14:
			return "GUN_SHOP_ARMORY_ARENA";
		
		case 15:
			return "GUN_SHOP_ARMORY_ARCADE";
		
		case 16:
			return "GUN_SHOP_ARMORY_SUB";
		
		case 17:
			return "GUN_SHOP_ARMORY_FIXER";
		
		case 18:
			return "GUN_SHOP_ARMORY_JUGGALO";
		
		case 19:
			return "GUN_SHOP_ARMORY_HANGAR";
		
		default:
	}
	return "";
}

int func_293(int iParam0)//Position - 0xDCD8
{
	switch (iParam0)
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
			return 46;
		
		case 12:
			return 47;
		
		case 13:
			return 48;
		
		case 14:
			return 49;
		
		case 15:
			return 52;
		
		case 16:
			return 53;
		
		case 17:
			return 56;
		
		case 18:
			return 59;
		
		case 19:
			return 60;
		
		default:
	}
	return -1;
}

char* func_294(int iParam0)//Position - 0xDDC4
{
	switch (iParam0)
	{
		case -2:
			return "SHOP_ROBBERIES_SHOP_CONV_10";
		
		case 0:
			return "SHOP_ROBBERIES_SHOP_GAS_1";
		
		case 1:
			return "SHOP_ROBBERIES_SHOP_GAS_2";
		
		case 2:
			return "SHOP_ROBBERIES_SHOP_GAS_3";
		
		case 3:
			return "SHOP_ROBBERIES_SHOP_GAS_4";
		
		case 4:
			return "SHOP_ROBBERIES_SHOP_GAS_5";
		
		case 5:
			return "SHOP_ROBBERIES_SHOP_LIQ_1";
		
		case 6:
			return "SHOP_ROBBERIES_SHOP_LIQ_2";
		
		case 7:
			return "SHOP_ROBBERIES_SHOP_LIQ_3";
		
		case 8:
			return "SHOP_ROBBERIES_SHOP_LIQ_4";
		
		case 9:
			return "SHOP_ROBBERIES_SHOP_LIQ_5";
		
		case 10:
			return "SHOP_ROBBERIES_SHOP_CONV_1";
		
		case 11:
			return "SHOP_ROBBERIES_SHOP_CONV_2";
		
		case 12:
			return "SHOP_ROBBERIES_SHOP_CONV_3";
		
		case 13:
			return "SHOP_ROBBERIES_SHOP_CONV_4";
		
		case 14:
			return "SHOP_ROBBERIES_SHOP_CONV_5";
		
		case 15:
			return "SHOP_ROBBERIES_SHOP_CONV_6";
		
		case 16:
			return "SHOP_ROBBERIES_SHOP_CONV_7";
		
		case 17:
			return "SHOP_ROBBERIES_SHOP_CONV_8";
		
		case 18:
			return "SHOP_ROBBERIES_SHOP_CONV_9";
		
		default:
	}
	return "SHOP_ROBBERIES_SHOP_NONE";
}

bool func_295()//Position - 0xDEDB
{
	return Global_2764793;
}

bool func_296(int iParam0)//Position - 0xDEE7
{
	return func_297(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}

var func_297(var uParam0, int iParam1)//Position - 0xDF00
{
	return BitTest(*uParam0, iParam1);
}

int func_298(int iParam0)//Position - 0xDF0E
{
	if (iParam0 != func_185())
	{
		return BitTest(Global_2657704[iParam0 /*463*/].f_321.f_5, 25);
	}
	return 0;
}

char* func_299(int iParam0)//Position - 0xDF34
{
	switch (iParam0)
	{
		case 1:
			return "PROPERTY_HIGH_APT_1";
		
		case 2:
			return "PROPERTY_HIGH_APT_2";
		
		case 3:
			return "PROPERTY_HIGH_APT_3";
		
		case 4:
			return "PROPERTY_HIGH_APT_4";
		
		case 5:
			return "PROPERTY_HIGH_APT_5";
		
		case 6:
			return "PROPERTY_HIGH_APT_6";
		
		case 7:
			return "PROPERTY_HIGH_APT_7";
		
		case 8:
			return "PROPERTY_MEDIUM_APT_1";
		
		case 9:
			return "PROPERTY_MEDIUM_APT_2";
		
		case 10:
			return "PROPERTY_MEDIUM_APT_3";
		
		case 11:
			return "PROPERTY_MEDIUM_APT_4";
		
		case 12:
			return "PROPERTY_MEDIUM_APT_5";
		
		case 13:
			return "PROPERTY_MEDIUM_APT_6";
		
		case 14:
			return "PROPERTY_MEDIUM_APT_7";
		
		case 15:
			return "PROPERTY_MEDIUM_APT_8";
		
		case 16:
			return "PROPERTY_MEDIUM_APT_9";
		
		case 17:
			return "PROPERTY_LOW_APT_1";
		
		case 18:
			return "PROPERTY_LOW_APT_2";
		
		case 19:
			return "PROPERTY_LOW_APT_3";
		
		case 20:
			return "PROPERTY_LOW_APT_4";
		
		case 21:
			return "PROPERTY_LOW_APT_5";
		
		case 22:
			return "PROPERTY_LOW_APT_6";
		
		case 23:
			return "PROPERTY_LOW_APT_7";
		
		case 24:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_1";
		
		case 25:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_2";
		
		case 26:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_3";
		
		case 27:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_4";
		
		case 28:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_5";
		
		case 29:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_6";
		
		case 30:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_7";
		
		case 31:
			return "PROPERTY_GARAGE_EAST_LOS_SANTOS_8";
		
		case 32:
			return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_1";
		
		case 33:
			return "PROPERTY_GARAGE_SOUTH_LOS_SANTOS_2";
		
		case 34:
			return "PROPERTY_HIGH_APT_8";
		
		case 35:
			return "PROPERTY_HIGH_APT_9";
		
		case 36:
			return "PROPERTY_HIGH_APT_10";
		
		case 37:
			return "PROPERTY_HIGH_APT_11";
		
		case 38:
			return "PROPERTY_HIGH_APT_12";
		
		case 39:
			return "PROPERTY_HIGH_APT_13";
		
		case 40:
			return "PROPERTY_HIGH_APT_14";
		
		case 41:
			return "PROPERTY_HIGH_APT_15";
		
		case 42:
			return "PROPERTY_HIGH_APT_16";
		
		case 43:
			return "PROPERTY_HIGH_APT_17";
		
		case 44:
			return "PROPERTY_GARAGE_NEW_1";
		
		case 45:
			return "PROPERTY_GARAGE_NEW_2";
		
		case 46:
			return "PROPERTY_GARAGE_NEW_3";
		
		case 47:
			return "PROPERTY_GARAGE_NEW_5";
		
		case 48:
			return "PROPERTY_GARAGE_NEW_6";
		
		case 49:
			return "PROPERTY_GARAGE_NEW_7";
		
		case 50:
			return "PROPERTY_GARAGE_NEW_8";
		
		case 51:
			return "PROPERTY_GARAGE_NEW_9";
		
		case 52:
			return "PROPERTY_GARAGE_NEW_14";
		
		case 53:
			return "PROPERTY_GARAGE_NEW_16";
		
		case 54:
			return "PROPERTY_GARAGE_NEW_17";
		
		case 55:
			return "PROPERTY_GARAGE_NEW_18";
		
		case 56:
			return "PROPERTY_GARAGE_NEW_19";
		
		case 57:
			return "PROPERTY_GARAGE_NEW_20";
		
		case 58:
			return "PROPERTY_GARAGE_NEW_21";
		
		case 59:
			return "PROPERTY_GARAGE_NEW_22";
		
		case 60:
			return "PROPERTY_GARAGE_NEW_23";
		
		case 61:
			return "PROPERTY_BUS_HIGH_APT_1";
		
		case 62:
			return "PROPERTY_BUS_HIGH_APT_2";
		
		case 63:
			return "PROPERTY_BUS_HIGH_APT_3";
		
		case 64:
			return "PROPERTY_BUS_HIGH_APT_4";
		
		case 65:
			return "PROPERTY_BUS_HIGH_APT_5";
		
		case 66:
			return "PROPERTY_IND_DAY_MEDIUM_1";
		
		case 67:
			return "PROPERTY_IND_DAY_MEDIUM_2";
		
		case 68:
			return "PROPERTY_IND_DAY_MEDIUM_3";
		
		case 69:
			return "PROPERTY_IND_DAY_MEDIUM_4";
		
		case 70:
			return "PROPERTY_IND_DAY_LOW_1";
		
		case 71:
			return "PROPERTY_IND_DAY_LOW_2";
		
		case 72:
			return "PROPERTY_IND_DAY_LOW_3";
		
		case 73:
			return "PROPERTY_STILT_APT_1_BASE_B";
		
		case 74:
			return "PROPERTY_STILT_APT_2_B";
		
		case 75:
			return "PROPERTY_STILT_APT_3_B";
		
		case 76:
			return "PROPERTY_STILT_APT_4_B";
		
		case 77:
			return "PROPERTY_STILT_APT_5_BASE_A";
		
		case 78:
			return "PROPERTY_STILT_APT_7_A";
		
		case 79:
			return "PROPERTY_STILT_APT_8_A";
		
		case 80:
			return "PROPERTY_STILT_APT_10_A";
		
		case 81:
			return "PROPERTY_STILT_APT_12_A";
		
		case 82:
			return "PROPERTY_STILT_APT_13_A";
		
		case 83:
			return "PROPERTY_CUSTOM_APT_1_BASE";
		
		case 84:
			return "PROPERTY_CUSTOM_APT_2";
		
		case 85:
			return "PROPERTY_CUSTOM_APT_3";
		
		case 86:
			return "PROPERTY_YACHT_APT_1_BASE";
		
		case 87:
			return "PROPERTY_OFFICE_1";
		
		case 88:
			return "PROPERTY_OFFICE_2_BASE";
		
		case 89:
			return "PROPERTY_OFFICE_3";
		
		case 90:
			return "PROPERTY_OFFICE_4";
		
		case 91:
			return "PROPERTY_CLUBHOUSE_1_BASE_A";
		
		case 92:
			return "PROPERTY_CLUBHOUSE_2_BASE_A";
		
		case 93:
			return "PROPERTY_CLUBHOUSE_3_BASE_A";
		
		case 94:
			return "PROPERTY_CLUBHOUSE_4_BASE_A";
		
		case 95:
			return "PROPERTY_CLUBHOUSE_5_BASE_A";
		
		case 96:
			return "PROPERTY_CLUBHOUSE_6_BASE_A";
		
		case 97:
			return "PROPERTY_CLUBHOUSE_7_BASE_B";
		
		case 98:
			return "PROPERTY_CLUBHOUSE_8_BASE_B";
		
		case 99:
			return "PROPERTY_CLUBHOUSE_9_BASE_B";
		
		case 100:
			return "PROPERTY_CLUBHOUSE_10_BASE_B";
		
		case 101:
			return "PROPERTY_CLUBHOUSE_11_BASE_B";
		
		case 102:
			return "PROPERTY_CLUBHOUSE_12_BASE_B";
		
		case 103:
			return "PROPERTY_OFFICE_1_GARAGE_LVL1";
		
		case 104:
			return "PROPERTY_OFFICE_1_GARAGE_LVL2";
		
		case 105:
			return "PROPERTY_OFFICE_1_GARAGE_LVL3";
		
		case 106:
			return "PROPERTY_OFFICE_2_GARAGE_LVL1";
		
		case 107:
			return "PROPERTY_OFFICE_2_GARAGE_LVL2";
		
		case 108:
			return "PROPERTY_OFFICE_2_GARAGE_LVL3";
		
		case 109:
			return "PROPERTY_OFFICE_3_GARAGE_LVL1";
		
		case 110:
			return "PROPERTY_OFFICE_3_GARAGE_LVL2";
		
		case 111:
			return "PROPERTY_OFFICE_3_GARAGE_LVL3";
		
		case 112:
			return "PROPERTY_OFFICE_4_GARAGE_LVL1";
		
		case 113:
			return "PROPERTY_OFFICE_4_GARAGE_LVL2";
		
		case 114:
			return "PROPERTY_OFFICE_4_GARAGE_LVL3";
		
		case 115:
			return "PROPERTY_IMPEXP_VEH_WAREHOUSE";
		
		case 116:
			return "PROPERTY_HANGAR";
		
		case 117:
			return "PROPERTY_DEFUNC_BASE";
		
		case 118:
			return "PROPERTY_NIGHTCLUB";
		
		case 119:
			return "PROPERTY_MEGAWARE_GARAGE_LVL1";
		
		case 120:
			return "PROPERTY_MEGAWARE_GARAGE_LVL2";
		
		case 121:
			return "PROPERTY_MEGAWARE_GARAGE_LVL3";
		
		case 122:
			return "PROPERTY_ARENAWARS_GARAGE_LVL1";
		
		case 123:
			return "PROPERTY_ARENAWARS_GARAGE_LVL2";
		
		case 124:
			return "PROPERTY_ARENAWARS_GARAGE_LVL3";
		
		case 125:
			return "PROPERTY_CASINO_GARAGE";
		
		case 126:
			return "PROPERTY_ARCADE_GARAGE";
		
		case 127:
			return "PROPERTY_AUTO_SHOP";
		
		case 128:
			return "PROPERTY_SECURITY_OFFICE_GARAGE";
		
		default:
	}
	return "PROPERTY_INVALID";
}

char* func_300(int iParam0)//Position - 0xE5C7
{
	switch (iParam0)
	{
		case 0:
			return "SIMPLE_INTERIOR_WAREHOUSE_1";
		
		case 1:
			return "SIMPLE_INTERIOR_WAREHOUSE_2";
		
		case 2:
			return "SIMPLE_INTERIOR_WAREHOUSE_3";
		
		case 3:
			return "SIMPLE_INTERIOR_WAREHOUSE_4";
		
		case 4:
			return "SIMPLE_INTERIOR_WAREHOUSE_5";
		
		case 5:
			return "SIMPLE_INTERIOR_WAREHOUSE_6";
		
		case 6:
			return "SIMPLE_INTERIOR_WAREHOUSE_7";
		
		case 7:
			return "SIMPLE_INTERIOR_WAREHOUSE_8";
		
		case 8:
			return "SIMPLE_INTERIOR_WAREHOUSE_9";
		
		case 9:
			return "SIMPLE_INTERIOR_WAREHOUSE_10";
		
		case 10:
			return "SIMPLE_INTERIOR_WAREHOUSE_11";
		
		case 11:
			return "SIMPLE_INTERIOR_WAREHOUSE_12";
		
		case 12:
			return "SIMPLE_INTERIOR_WAREHOUSE_13";
		
		case 13:
			return "SIMPLE_INTERIOR_WAREHOUSE_14";
		
		case 14:
			return "SIMPLE_INTERIOR_WAREHOUSE_15";
		
		case 15:
			return "SIMPLE_INTERIOR_WAREHOUSE_16";
		
		case 16:
			return "SIMPLE_INTERIOR_WAREHOUSE_17";
		
		case 17:
			return "SIMPLE_INTERIOR_WAREHOUSE_18";
		
		case 18:
			return "SIMPLE_INTERIOR_WAREHOUSE_19";
		
		case 19:
			return "SIMPLE_INTERIOR_WAREHOUSE_20";
		
		case 20:
			return "SIMPLE_INTERIOR_WAREHOUSE_21";
		
		case 21:
			return "SIMPLE_INTERIOR_WAREHOUSE_22";
		
		case 22:
			return "SIMPLE_INTERIOR_FACTORY_METH_1";
		
		case 23:
			return "SIMPLE_INTERIOR_FACTORY_WEED_1";
		
		case 24:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_1";
		
		case 25:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_1";
		
		case 26:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_1";
		
		case 27:
			return "SIMPLE_INTERIOR_FACTORY_METH_2";
		
		case 28:
			return "SIMPLE_INTERIOR_FACTORY_WEED_2";
		
		case 29:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_2";
		
		case 30:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_2";
		
		case 31:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_2";
		
		case 32:
			return "SIMPLE_INTERIOR_FACTORY_METH_3";
		
		case 33:
			return "SIMPLE_INTERIOR_FACTORY_WEED_3";
		
		case 34:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_3";
		
		case 35:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_3";
		
		case 36:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_3";
		
		case 37:
			return "SIMPLE_INTERIOR_FACTORY_METH_4";
		
		case 38:
			return "SIMPLE_INTERIOR_FACTORY_WEED_4";
		
		case 39:
			return "SIMPLE_INTERIOR_FACTORY_CRACK_4";
		
		case 40:
			return "SIMPLE_INTERIOR_FACTORY_MONEY_4";
		
		case 41:
			return "SIMPLE_INTERIOR_FACTORY_DOCUMENTS_4";
		
		case 42:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_POLICE_STATION";
		
		case 43:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MC_CLUBHOUSE";
		
		case 44:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ROCKFORD";
		
		case 45:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PILLBOX";
		
		case 46:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_ALTA";
		
		case 47:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_BURTON";
		
		case 48:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_PALETO";
		
		case 49:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_GRAND_SENORA";
		
		case 50:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BANK_CHUMASH";
		
		case 51:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ROCKCLUB";
		
		case 52:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY";
		
		case 53:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_2";
		
		case 54:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_3";
		
		case 55:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_CHICKEN_FACTORY_PART_4";
		
		case 56:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FARMHOUSE";
		
		case 57:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HEIST_YACHT";
		
		case 58:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_RECYCLING_PLANT";
		
		case 59:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB";
		
		case 60:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_1";
		
		case 61:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_2";
		
		case 62:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_3";
		
		case 63:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_4";
		
		case 64:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_5";
		
		case 65:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_6";
		
		case 66:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_7";
		
		case 67:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_8";
		
		case 68:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_9";
		
		case 69:
			return "SIMPLE_INTERIOR_IE_WAREHOUSE_10";
		
		case 70:
			return "SIMPLE_INTERIOR_BUNKER_1";
		
		case 71:
			return "SIMPLE_INTERIOR_BUNKER_2";
		
		case 72:
			return "SIMPLE_INTERIOR_BUNKER_3";
		
		case 73:
			return "SIMPLE_INTERIOR_BUNKER_4";
		
		case 74:
			return "SIMPLE_INTERIOR_BUNKER_5";
		
		case 75:
			return "SIMPLE_INTERIOR_BUNKER_6";
		
		case 76:
			return "SIMPLE_INTERIOR_BUNKER_7";
		
		case 77:
			return "SIMPLE_INTERIOR_BUNKER_9";
		
		case 78:
			return "SIMPLE_INTERIOR_BUNKER_10";
		
		case 79:
			return "SIMPLE_INTERIOR_BUNKER_11";
		
		case 80:
			return "SIMPLE_INTERIOR_BUNKER_12";
		
		case 81:
			return "SIMPLE_INTERIOR_ARMORY_TRUCK_1";
		
		case 82:
			return "SIMPLE_INTERIOR_CREATOR_TRAILER_1";
		
		case 83:
			return "SIMPLE_INTERIOR_HANGAR_1";
		
		case 84:
			return "SIMPLE_INTERIOR_HANGAR_2";
		
		case 85:
			return "SIMPLE_INTERIOR_HANGAR_3";
		
		case 86:
			return "SIMPLE_INTERIOR_HANGAR_4";
		
		case 87:
			return "SIMPLE_INTERIOR_HANGAR_5";
		
		case 88:
			return "SIMPLE_INTERIOR_ARMORY_AIRCRAFT_1";
		
		case 89:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_1";
		
		case 90:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_2";
		
		case 91:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_3";
		
		case 92:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_4";
		
		case 93:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_6";
		
		case 94:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_7";
		
		case 95:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_8";
		
		case 96:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_9";
		
		case 97:
			return "SIMPLE_INTERIOR_DEFUNCT_BASE_10";
		
		case 98:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MEDIUM_GARAGE";
		
		case 99:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LOWEND_STUDIO";
		
		case 100:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MIDEND_APARTMENT";
		
		case 101:
			return "SIMPLE_INTERIOR_CREATOR_AIRCRAFT_1";
		
		case 102:
			return "SIMPLE_INTERIOR_HUB_LA_MESA";
		
		case 103:
			return "SIMPLE_INTERIOR_HUB_MISSION_ROW";
		
		case 104:
			return "SIMPLE_INTERIOR_HUB_STRAWBERRY_WAREHOUSE";
		
		case 105:
			return "SIMPLE_INTERIOR_HUB_WEST_VINEWOOD";
		
		case 106:
			return "SIMPLE_INTERIOR_HUB_CYPRESS_FLATS";
		
		case 107:
			return "SIMPLE_INTERIOR_HUB_LSIA_WAREHOUSE";
		
		case 108:
			return "SIMPLE_INTERIOR_HUB_ELYSIAN_ISLAND";
		
		case 109:
			return "SIMPLE_INTERIOR_HUB_DOWNTOWN_VINEWOOD";
		
		case 110:
			return "SIMPLE_INTERIOR_HUB_DEL_PERRO_BUILDING";
		
		case 111:
			return "SIMPLE_INTERIOR_HUB_VESPUCCI_CANALS";
		
		case 112:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF";
		
		case 113:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SHERIFF2";
		
		case 114:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_UNION_DEPOSITORY_CARPARK";
		
		case 115:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_SIMEON_SHOWROOM";
		
		case 116:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_ABATTOIR";
		
		case 117:
			return "SIMPLE_INTERIOR_HACKER_TRUCK";
		
		case 118:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_JEWEL_STORE";
		
		case 119:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_LIFE_INVADER";
		
		case 120:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_DJ_YACHT";
		
		case 121:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MELANOMA_GARAGE";
		
		case 122:
			return "SIMPLE_INTERIOR_ARENA_GARAGE_1";
		
		case 123:
			return "SIMPLE_INTERIOR_CASINO";
		
		case 124:
			return "SIMPLE_INTERIOR_CASINO_APT";
		
		case 125:
			return "SIMPLE_INTERIOR_CASINO_VAL_GARAGE";
		
		case 126:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_HAYES_AUTOS";
		
		case 127:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_METH_LAB";
		
		case 128:
			return "SIMPLE_INTERIOR_ARCADE_PALETO_BAY";
		
		case 129:
			return "SIMPLE_INTERIOR_ARCADE_GRAPESEED";
		
		case 130:
			return "SIMPLE_INTERIOR_ARCADE_DAVIS";
		
		case 131:
			return "SIMPLE_INTERIOR_ARCADE_WEST_VINEWOOD";
		
		case 132:
			return "SIMPLE_INTERIOR_ARCADE_ROCKFORD_HILLS";
		
		case 133:
			return "SIMPLE_INTERIOR_ARCADE_LA_MESA";
		
		case 134:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FIB_BUILDING";
		
		case 135:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_BIOLAB_AND_TUNNEL";
		
		case 136:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_FOUNDRY";
		
		case 137:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_MAX_RENDA";
		
		case 138:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER";
		
		case 139:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_2";
		
		case 140:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_3";
		
		case 141:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_4";
		
		case 142:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_5";
		
		case 143:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_AIRCRAFT_CARRIER_PART_6";
		
		case 144:
			return "SIMPLE_INTERIOR_RESTRICTED_INTERIOR_OMEGA";
		
		case 145:
			return "SIMPLE_INTERIOR_SOLOMONS_OFFICE";
		
		case 146:
			return "SIMPLE_INTERIOR_CASINO_NIGHTCLUB";
		
		case 147:
			return "SIMPLE_INTERIOR_SUBMARINE";
		
		case 148:
			return "SIMPLE_INTERIOR_MUSIC_STUDIO";
		
		case 149:
			return "SIMPLE_INTERIOR_AUTO_SHOP_LA_MESA";
		
		case 150:
			return "SIMPLE_INTERIOR_AUTO_SHOP_STRAWBERRY";
		
		case 151:
			return "SIMPLE_INTERIOR_AUTO_SHOP_BURTON";
		
		case 152:
			return "SIMPLE_INTERIOR_AUTO_SHOP_RANCHO";
		
		case 153:
			return "SIMPLE_INTERIOR_AUTO_SHOP_MISSION_ROW";
		
		case 154:
			return "SIMPLE_INTERIOR_CAR_MEET";
		
		case 155:
			return "SIMPLE_INTERIOR_FIXER_HQ_HAWICK";
		
		case 156:
			return "SIMPLE_INTERIOR_FIXER_HQ_ROCKFORD";
		
		case 157:
			return "SIMPLE_INTERIOR_FIXER_HQ_SEOUL";
		
		case 158:
			return "SIMPLE_INTERIOR_FIXER_HQ_VESPUCCI";
		
		case 159:
			return "SIMPLE_INTERIOR_ACID_LAB";
		
		case 160:
			return "SIMPLE_INTERIOR_JUGGALO_HIDEOUT";
		
		case 161:
			return "SIMPLE_INTERIOR_MULTISTOREY_GARAGE";
		
		default:
	}
	return "SIMPLE_INTERIOR_INVALID";
}

int func_301(int iParam0)//Position - 0xEE14
{
	if (iParam0 != func_185())
	{
		if (func_47(iParam0, 1, 1))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
		else if (((Global_1575063 || Global_2635560.f_2780) && iParam0 == PLAYER::PLAYER_ID()) && func_47(iParam0, 1, 0))
		{
			return Global_2657704[iParam0 /*463*/].f_321.f_7;
		}
	}
	return -1;
}

bool func_302()//Position - 0xEE83
{
	return Global_1950844.f_514 != -1;
}

int func_303(int iParam0)//Position - 0xEE94
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_304()//Position - 0xEEBB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_303(iVar0) != 2147483647)
		{
			if (func_215(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_305()//Position - 0xEEF6
{
	Global_2683883.f_785.f_32 = 1;
}

void func_306()//Position - 0xEF08
{
	Global_2683883.f_785.f_28 = 1;
	Global_2683883.f_785.f_32 = 0;
	Global_2683883.f_785.f_31 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	func_15(&(Global_2683883.f_785.f_29));
}

char* func_307()//Position - 0xEF42
{
	if (func_14())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_308(int iParam0, int iParam1, int iParam2)//Position - 0xEF5C
{
	int iVar0;
	
	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_312(PLAYER::PLAYER_ID(), 1, 0))
	{
		return;
	}
	if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/))
	{
		return;
	}
	if (HUD::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_311())
	{
		return;
	}
	if (!func_309())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_100885.f_1482 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			iVar0 = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX" /* GXT: Alert */, "BRDISTEX" /* GXT: You have insufficient funds. You can add GTA Dollars to your in-game account. */, iVar0, "BRSHETEX" /* GXT: Would you like to visit the Store? */, false, -1, 0, 0, true, 0);
			Global_2695765 = iParam1;
			Global_100885.f_1482 = 1;
			Global_100885.f_1483 = iParam2;
		}
	}
}

int func_309()//Position - 0xF037
{
	if (func_310())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_310()//Position - 0xF057
{
	return Global_2695084;
}

bool func_311()//Position - 0xF063
{
	return Global_2695872;
}

int func_312(int iParam0, bool bParam1, bool bParam2)//Position - 0xF06F
{
	if (bParam1)
	{
		if (func_313(iParam0))
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

bool func_313(int iParam0)//Position - 0xF0A1
{
	return func_314(iParam0);
}

var func_314(int iParam0)//Position - 0xF0AF
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

void func_315(int iParam0, int iParam1, int iParam2)//Position - 0xF0C6
{
	Global_100885.f_1484 = iParam0;
	Global_100885.f_1485 = iParam1;
	Global_100885.f_1486 = iParam2;
}

int func_316(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF0E9
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_396(uParam0->f_12);
				func_324(&sVar4, cVar3, func_325(uParam0));
				if (func_321(joaat("NET_SHOP_TTYPE_BASKET"), iParam1, MISC::GET_HASH_KEY(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_319())
					{
						HUD::USE_FAKE_MP_CASH(true);
						HUD::CHANGE_FAKE_MP_CASH(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_318(func_304()))
				{
					if (func_317(func_304()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_212(func_304());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				HUD::USE_FAKE_MP_CASH(false);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_317(int iParam0)//Position - 0xF266
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_318(int iParam0)//Position - 0xF28F
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_319()//Position - 0xF2BA
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_220())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_304();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_86()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_320(Global_4535172[iVar2 /*85*/].f_66.f_6, Global_4535172[iVar2 /*85*/].f_66.f_4, Global_4535172[iVar2 /*85*/].f_66.f_1) == 1)
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
	iVar3 = func_303(iVar2);
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
				func_218(Global_4535172[iVar2 /*85*/], iVar2);
			}
			Global_4536659 = 1;
			return 1;
		}
	}
	return 0;
}

int func_320(int iParam0, int iParam1, int iParam2)//Position - 0xF41A
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

int func_321(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0xFA69
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_220())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_86()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam1 == joaat("CATEGORY_WEAPON_AMMO") || iParam1 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_304();
	if (iVar1 == -1)
	{
		if (!func_323(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_322(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4535172[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4535172[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4535172[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_322(int iParam0)//Position - 0xFB8B
{
	switch (iParam0)
	{
		case joaat("CATEGORY_INVENTORY_ITEM"):
		case joaat("CATEGORY_INVENTORY_VEHICLE"):
		case joaat("CATEGORY_INVENTORY_VEHICLE_MOD"):
		case joaat("CATEGORY_INVENTORY_PROPERTIE"):
		case joaat("CATEGORY_INVENTORY_BEARD"):
		case joaat("CATEGORY_INVENTORY_MKUP"):
		case joaat("CATEGORY_INVENTORY_HAIR"):
		case joaat("CATEGORY_INVENTORY_EYEBROWS"):
		case joaat("CATEGORY_INVENTORY_CHEST_HAIR"):
		case joaat("CATEGORY_INVENTORY_CONTACTS"):
		case joaat("CATEGORY_INVENTORY_FACEPAINT"):
		case joaat("CATEGORY_INVENTORY_BLUSHER"):
		case joaat("CATEGORY_INVENTORY_LIPSTICK"):
		case joaat("CATEGORY_INVENTORY_PROPERTY_INTERIOR"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE"):
		case joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_QNTY"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE_INTERIOR"):
		case joaat("CATEGORY_WAREHOUSE_VEHICLE_INDEX"):
			return 1;
			break;
	}
	return 0;
}

int func_323(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0xFC1A
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_220())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_86()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536678 = 1;
			return 0;
		}
		if (Global_2695872)
		{
			if (iParam2 == joaat("CATEGORY_WEAPON_AMMO") || iParam2 == joaat("CATEGORY_MART"))
			{
				Global_4536679 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4535172[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4535172[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_217(iVar3, iParam1, joaat("SERVICE_INVALID"), iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_324(char* sParam0, char* sParam1, int iParam2)//Position - 0xFD17
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_325(var uParam0)//Position - 0xFD3B
{
	if (func_278(PLAYER::PLAYER_ID(), 1, 0) || func_326(PLAYER::PLAYER_ID()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_326(int iParam0)//Position - 0xFDA4
{
	if (iParam0 != func_185())
	{
		if (func_47(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_327(Global_2657704[iParam0 /*463*/].f_321.f_7) == 9;
			}
		}
	}
	return 0;
}

int func_327(int iParam0)//Position - 0xFDEB
{
	switch (iParam0)
	{
		case 0:
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
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
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
			return 3;
			break;
		
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
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
	}
	return -1;
}

void func_328(var uParam0, bool bParam1)//Position - 0x104AD
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_397(uParam0->f_12))
	{
		iVar1 = (func_332(uParam0->f_12) - func_131(func_331(uParam0->f_12), -1));
		func_279(1, func_330(uParam0->f_12), joaat("snack"), iVar1, func_286(), joaat("purchase"), 1, func_329(bParam1, joaat("pa"), joaat("store")));
		func_127(func_331(uParam0->f_12), func_332(uParam0->f_12), -1, 1);
		bVar0 = true;
	}
	if (bVar0)
	{
		MONEY::NETWORK_BUY_ITEM(0, MISC::GET_HASH_KEY(func_396(uParam0->f_12)), 12, 1, false, 0, 0, 0, 0, true);
	}
	if (!bVar0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
}

int func_329(bool bParam0, int iParam1, int iParam2)//Position - 0x10567
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_330(var uParam0)//Position - 0x1057E
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return -251807494;
		
		case 1:
			return 1199442189;
		
		case 2:
			return 1486811039;
		
		case 4:
			return -181862273;
		
		case 0:
			return -39155154;
		
		case 5:
			return -1600998734;
		
		case 6:
			return 495696637;
		
		default:
	}
	return 0;
}

int func_331(var uParam0)//Position - 0x105F4
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1276;
		
		case 1:
			return 1277;
		
		case 2:
			return 1278;
		
		case 4:
			return 1098;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		case 6:
			return 10404;
		
		default:
	}
	return 14385;
}

int func_332(var uParam0)//Position - 0x1065C
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		case 6:
			return 10;
		
		default:
	}
	return 0;
}

void func_333(var uParam0, var uParam1, bool bParam2)//Position - 0x106BC
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_342(uParam0))
	{
		uParam0->f_27 = 0;
		func_341(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_385(uParam0->f_12, 1, 1);
		sVar0 = func_383(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_384(sVar0, 0, 0);
		}
	}
	if (func_338(uParam0))
	{
		uParam0->f_27 = 0;
		func_341(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", true);
		func_385(uParam0->f_12, 1, 1);
		sVar0 = func_383(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_384(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(func_390(uParam0, uParam0->f_12), false, true, false, -1, 0))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_131(1276, -1) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_131(1277, -1) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_131(1278, -1) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_131(1098, -1) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_131(62, -1) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_131(63, -1) < 10;
		}
		else if (uParam0->f_12 == 6)
		{
			if (Global_262145.f_120 /* Tunable: ENABLE_SPRUNK_GTAO_PURCHASING */)
			{
				uParam0->f_31 = func_131(10404, -1) < 10;
			}
			else
			{
				uParam0->f_31 = 0;
			}
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_384("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_334(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_384("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_384("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_384("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_384("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_384("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_384("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_384("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_384("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_384("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_384("SNK_DRK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 6)
				{
					func_384("SNK_DRK7FU", 0, 0);
				}
				else
				{
					func_384("SNK_NEEDED", 0, 0);
				}
				MISC::SET_BIT(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_341(&(uParam0->f_44));
			sVar0 = func_383(uParam0->f_12);
			if (HUD::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_384(sVar0, 0, 0);
			}
		}
	}
}

float func_334(var uParam0)//Position - 0x10A31
{
	if (func_337(uParam0))
	{
		if (func_336(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_335(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_335(bool bParam0)//Position - 0x10A6A
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

bool func_336(var uParam0)//Position - 0x10AC2
{
	return BitTest(*uParam0, 2);
}

bool func_337(var uParam0)//Position - 0x10ACF
{
	return BitTest(*uParam0, 1);
}

int func_338(var uParam0)//Position - 0x10ADC
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if ((fVar0 > 0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
	{
		if (!func_337(&(uParam0->f_41)))
		{
			func_340(&(uParam0->f_41));
			return 1;
		}
		else if (func_339(&(uParam0->f_41)) > 0.25f)
		{
			func_413(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_337(&(uParam0->f_41)))
	{
		func_341(&(uParam0->f_41));
	}
	return 0;
}

float func_339(var uParam0)//Position - 0x10B61
{
	if (func_337(uParam0))
	{
		if (func_336(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_335(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_340(int* iParam0)//Position - 0x10B9D
{
	if (!func_337(iParam0))
	{
		func_413(iParam0);
	}
}

void func_341(var uParam0)//Position - 0x10BB5
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_342(var uParam0)//Position - 0x10BCB
{
	float fVar0;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/);
	if ((fVar0 < -0.8f || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
	{
		if (!func_337(&(uParam0->f_38)))
		{
			func_340(&(uParam0->f_38));
			return 1;
		}
		else if (func_339(&(uParam0->f_38)) > 0.25f)
		{
			func_413(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_337(&(uParam0->f_38)))
	{
		func_341(&(uParam0->f_38));
	}
	return 0;
}

int func_343()//Position - 0x10C50
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (Global_4541034 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_344(int iParam0, int iParam1, bool bParam2)//Position - 0x10C77
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4541034 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			return 1;
		}
		else
		{
			Global_4541034 = -1;
			return 0;
		}
	}
	if (((Global_4541034 > -1 || Global_4541034 == -3) || Global_4541034 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4541034 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4541034 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_345(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x10D57
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
	func_348();
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
				func_347(0);
			}
			return;
		}
		if (((Global_4541028 >= fVar0 && Global_4541028 <= fVar2) && Global_4541029 >= (fVar3 + fVar6)) && Global_4541029 < (fVar3 + 0.034722f))
		{
			Global_4541034 = -3;
			if (bParam3)
			{
				func_347(0);
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
				func_346(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23389, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
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

void func_346(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x11003
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

void func_347(bool bParam0)//Position - 0x11032
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
		func_346(fVar0, fVar1, Global_23389, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4541034 == -3)
	{
		func_346(fVar0, (fVar1 + fVar2), Global_23389, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_348()//Position - 0x110BB
{
	Global_4541030 = Global_4541028;
	Global_4541031 = Global_4541029;
	Global_4541028 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
	Global_4541029 = PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
	Global_4541032 = (Global_4541028 - Global_4541030);
	Global_4541033 = (Global_4541029 - Global_4541031);
}

void func_349(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x11103
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
	
	if (!func_169(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_380(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_23390)
	{
		if (func_378(29, 1, 1, &fVar36, &fVar37, bParam7))
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
	func_376(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_23390.f_5661 <= 1)
		{
			func_392(Global_23390.f_5661 + 1, "DFLT_MNU_OPT" /* GXT: Exit */, 0, 1, 0, 0, 0);
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
					StringCopy(&cVar63, func_375(29), 64);
					StringCopy(&cVar79, func_373(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23390.f_7488[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_346(Global_23387, Global_23388, fParam5, fVar57, 0, 0, 0, 255);
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
				func_346(Global_23387, (Global_23388 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_23388 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23390.f_1)) != 0)
				{
					func_372();
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
					func_372();
					func_370((((Global_23387 + fParam5) - 0.00390625f) - func_371("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6179, Global_23390.f_6180)), ((Global_23388 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6179, Global_23390.f_6180);
				}
				else if (Global_23390.f_6174 > Global_23390.f_5668)
				{
					if (Global_23390.f_6177 != 0)
					{
						func_372();
						func_370((((Global_23387 + fParam5) - 0.00390625f) - func_371("CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6177, Global_23390.f_6176)), ((Global_23388 + fVar57) + 0.00416664f), "CM_ITEM_COUNT" /* GXT: ~1~ / ~1~ */, Global_23390.f_6177, Global_23390.f_6176);
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
				func_346(Global_23387, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_378(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_369(fVar42);
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
				func_346(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_369(fVar42);
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
					func_378(Global_23390.f_5165, 1, 1, &fVar36, &fVar37, bParam7);
					func_368(Global_23390.f_5165, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_375(Global_23390.f_5165), func_373(Global_23390.f_5165, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_5087)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_369(fVar42);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23390.f_5087));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_346(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
					func_369(fVar42);
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
				func_369(fVar42);
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
				func_346(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_369(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23390.f_5087));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4540958.f_21)) != 0 && Global_4540958.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_23387 + 0.0046875f);
				if (Global_4540958.f_67 != 0)
				{
					func_378(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_23387 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_369(fVar42);
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
				func_346(Global_23387, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_369(fVar42);
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
					func_378(Global_4540958.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_368(Global_4540958.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_375(Global_4540958.f_67), func_373(Global_4540958.f_67, 1), ((Global_23387 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
			func_363(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_361(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, iVar104, bVar53, bVar52);
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
												if (func_378(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_378(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_378(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_375(26), func_373(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_378(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_378(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_375(27), func_373(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
										func_361(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_360(bVar32);
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
												if (func_378(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_378(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_368(Global_23390.f_4824[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_23390.f_5526[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_375(Global_23390.f_4824[(iVar22 + iVar28)]), func_373(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_375(Global_23390.f_4824[(iVar22 + iVar28)]), func_373(Global_23390.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
											if (func_359() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23390.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_361(0, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
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
												if (func_378(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_378(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_368(Global_23390.f_4824[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_23390.f_4824[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_375(Global_23390.f_4824[(iVar22 + iVar14)]), func_373(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (Global_23387 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else if (Global_23390.f_5526[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_375(Global_23390.f_4824[(iVar22 + iVar14)]), func_373(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_375(Global_23390.f_4824[(iVar22 + iVar14)]), func_373(Global_23390.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
										func_361(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_360(bVar32);
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
										if (func_378(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_378(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_375(26), func_373(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_378(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_378(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_375(27), func_373(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_361(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										func_358((fVar34 + fVar42), fVar35, "NUMBER", Global_23390.f_4309[iVar20], 0);
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
										func_361(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_23390.f_8888 && Global_23390.f_8889 == iVar6)
										{
											func_360(bVar32);
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
										if (func_378(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23390.f_5526[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_378(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_375(26), func_373(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
										if (func_378(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_378(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_375(27), func_373(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
												}
											}
										}
									}
									func_361(bVar32, Global_23390.f_1616[iVar24], Global_23390.f_1873[iVar24], bVar55, 0, 0, 0);
									func_357((fVar34 + fVar42), fVar35, "NUMBER", Global_23390.f_4566[iVar21], Global_23390.f_4695[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_378(Global_23390.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_378(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23390.f_5526[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_378(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_368(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_375(26), func_373(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
											if (func_378(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_378(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_368(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_375(27), func_373(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_378(Global_23390.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_368(Global_23390.f_4824[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_375(Global_23390.f_4824[iVar22]), func_373(Global_23390.f_4824[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_356(Global_23390.f_4824[iVar22])), (fVar37 * func_356(Global_23390.f_4824[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, false, 0);
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
								if (func_378(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_351(0);
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
		func_350(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_350(int iParam0)//Position - 0x14260
{
	Global_1655612.f_1163 = iParam0;
}

void func_351(int iParam0)//Position - 0x14271
{
	if (func_355())
	{
		return;
	}
	if (!Global_20500.f_1 == 1)
	{
		if (func_173(0))
		{
			func_352(iParam0);
		}
		MISC::SET_BIT(&Global_8371, 2);
	}
}

void func_352(int iParam0)//Position - 0x142A4
{
	if (func_355())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_354())
		{
			func_353(1, 1);
		}
		else
		{
			func_353(0, 0);
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
	if (!func_242())
	{
		Global_20500.f_1 = 3;
	}
}

void func_353(bool bParam0, bool bParam1)//Position - 0x1432E
{
	if (bParam0)
	{
		if (func_173(0))
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

bool func_354()//Position - 0x143A2
{
	return BitTest(Global_1963795, 5);
}

bool func_355()//Position - 0x143B0
{
	return BitTest(Global_1963795, 19);
}

float func_356(int iParam0)//Position - 0x143BF
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

void func_357(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x1442E
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_358(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1444D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_359()//Position - 0x1446B
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_360(bool bParam0)//Position - 0x1447C
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

void func_361(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x144C2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_362(Global_23390.f_6454[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_362(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x14670
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

void func_363(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x148FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_169(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_380(bParam4, bParam8))
	{
		return;
	}
	if (func_366())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_84(PLAYER::PLAYER_ID(), 0))
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
					func_365(&(Global_23390.f_5168[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_23390.f_5393[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_365(&(Global_23390.f_5168[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23390.f_5450[iVar1] == -1)
					{
						func_364(&(Global_23390.f_5393[iVar1 /*4*/]));
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
				func_365(&Global_4540958);
				if (Global_4540958.f_20 == -1)
				{
					func_364(&(Global_4540958.f_16));
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

void func_364(char* sParam0)//Position - 0x14DFF
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_365(char* sParam0)//Position - 0x14E11
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_366()//Position - 0x14E1F
{
	struct<3> Var0;
	
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	if (func_367())
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

int func_367()//Position - 0x14E8D
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_368(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x14EA7
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

void func_369(float fParam0)//Position - 0x14FC8
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

void func_370(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x15027
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_371(char* sParam0, int iParam1, int iParam2)//Position - 0x1504A
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
	func_372();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_372()//Position - 0x1508C
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

var func_373(int iParam0, bool bParam1)//Position - 0x15116
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_7488[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23390.f_7488[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var19 = { func_68(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_374(&uVar3);
			}
		}
		else
		{
			return func_374(&(Global_23390.f_7488[iParam0 /*16*/]));
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

var func_374(var uParam0)//Position - 0x15640
{
	return uParam0;
}

char* func_375(int iParam0)//Position - 0x1564A
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23390.f_6463[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23390.f_6463[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var16 = { func_68(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_374(&uVar0);
		}
		else
		{
			return func_374(&(Global_23390.f_6463[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 52)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_376(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0x156BF
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
	if (func_377(*iParam1, *iParam2))
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

bool func_377(int iParam0, int iParam1)//Position - 0x15747
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_378(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x15762
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_375(iParam0), 64);
	StringCopy(&cVar16, func_373(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_376(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_379(iParam0) / fVar34);
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

float func_379(int iParam0)//Position - 0x1588E
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

int func_380(bool bParam0, bool bParam1)//Position - 0x15962
{
	if (Global_2672524.f_1685.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_252(8, -1) && func_381() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78950) || Global_23390.f_8891) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100885.f_1482)
	{
		return 0;
	}
	return 1;
}

int func_381()//Position - 0x159FF
{
	return Global_1574996;
}

void func_382(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x15A0B
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
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23390.f_5495), Global_23390.f_5166);
	}
	StringCopy(&(Global_23390.f_5168[Global_23390.f_5166 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23390.f_5393[Global_23390.f_5166 /*4*/]), sParam1, 16);
	Global_23390.f_5450[Global_23390.f_5166] = iParam2;
	Global_23390.f_5465[Global_23390.f_5166] = iParam0;
	Global_23390.f_5480[Global_23390.f_5166] = 32;
	Global_23390.f_5166++;
}

char* func_383(int iParam0)//Position - 0x15AC0
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 7;
	}
	switch (iVar0)
	{
		case 7:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		case 6:
			return "SNK_ITEM7_D";
		
		default:
	}
	return "";
}

void func_384(char* sParam0, int iParam1, int iParam2)//Position - 0x15B4B
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

void func_385(var uParam0, bool bParam1, int iParam2)//Position - 0x15BB0
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

void func_386(int iParam0)//Position - 0x15D02
{
	Global_23390.f_6181 = iParam0;
}

void func_387(var uParam0, bool bParam1)//Position - 0x15D12
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23390.f_5665 >= 256)
	{
		return;
	}
	if (Global_23390.f_6186 >= 4)
	{
		return;
	}
	if (Global_23390.f_6187 != 1)
	{
		return;
	}
	if (Global_23390.f_6186 >= Global_23390.f_6184)
	{
		return;
	}
	Global_23390.f_4309[Global_23390.f_5665] = uParam0;
	Global_23390.f_5665++;
	Global_23390.f_2387[Global_23390.f_6185 /*5*/][Global_23390.f_6186] = 2;
	Global_23390.f_6186++;
	if (Global_23390.f_6186 >= Global_23390.f_6184)
	{
		fVar0 = func_389();
		if (Global_23390.f_5518[Global_23390.f_5662] && Global_23390.f_6186 == Global_23390.f_6184)
		{
			func_378(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23390.f_5511[(Global_23390.f_5662 - 1)])
		{
			Global_23390.f_5511[(Global_23390.f_5662 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23390.f_6186 >= Global_23390.f_6184)
		{
			fVar3 = func_388();
			if (fVar3 > Global_23390.f_6188[Global_23390.f_5661])
			{
				Global_23390.f_6188[Global_23390.f_5661] = fVar3;
			}
		}
	}
}

float func_388()//Position - 0x15E4D
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23390.f_6186)
	{
		if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23390.f_4824[((Global_23390.f_5667 - iVar1) + iVar0)] != 0)
		{
			if (func_378(Global_23390.f_4824[((Global_23390.f_5667 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_389()//Position - 0x15F00
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23390.f_6186)
	{
		if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_361(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
	{
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_23390.f_79[Global_23390.f_6185 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23390.f_6186)
	{
		if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(Global_23390.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23390.f_79[(Global_23390.f_6185 + iVar8) /*6*/]));
			}
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23390.f_4309[((Global_23390.f_5665 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23390.f_4566[((Global_23390.f_5666 - iVar4) + iVar10)], Global_23390.f_4695[((Global_23390.f_5666 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23390.f_2387[Global_23390.f_6185 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2695123[((Global_23390.f_5664 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23390.f_79[Global_23390.f_6185 /*6*/])) != 0)
	{
		fVar0 = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23390.f_4824[((Global_23390.f_5667 - iVar5) + iVar7)] != 0)
		{
			func_378(Global_23390.f_4824[((Global_23390.f_5667 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_390(var uParam0, int iParam1)//Position - 0x16347
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_325(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return Global_262145.f_127 /* Tunable: SHOP_ECOLA_CAN_COST */;
				
				case 6:
					return Global_262145.f_125 /* Tunable: SHOP_SPRUNK_CAN_COST */;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return Global_262145.f_127 /* Tunable: SHOP_ECOLA_CAN_COST */;
				
				case 6:
					return Global_262145.f_125 /* Tunable: SHOP_SPRUNK_CAN_COST */;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return Global_262145.f_128 /* Tunable: PROPERTY_ECOLA_CAN_COST */;
				
				case 6:
					return Global_262145.f_126 /* Tunable: PROPERTY_SPRUNK_CAN_COST */;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

void func_391(int iParam0, bool bParam1)//Position - 0x16480
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_23390.f_5667 >= 256)
	{
		return;
	}
	if (Global_23390.f_6186 >= 4)
	{
		return;
	}
	if (Global_23390.f_6187 != 1)
	{
		return;
	}
	if (Global_23390.f_6186 >= Global_23390.f_6184)
	{
		return;
	}
	Global_23390.f_4824[Global_23390.f_5667] = iParam0;
	Global_23390.f_5667++;
	Global_23390.f_2387[Global_23390.f_6185 /*5*/][Global_23390.f_6186] = 4;
	Global_23390.f_6186++;
	if (Global_23390.f_6186 >= Global_23390.f_6184)
	{
		fVar0 = func_389();
		if (Global_23390.f_5518[Global_23390.f_5662] && Global_23390.f_6186 == Global_23390.f_6184)
		{
			func_378(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23390.f_5511[(Global_23390.f_5662 - 1)])
		{
			Global_23390.f_5511[(Global_23390.f_5662 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23390.f_6186 >= Global_23390.f_6184)
		{
			fVar3 = func_388();
			if (fVar3 > Global_23390.f_6188[Global_23390.f_5661])
			{
				Global_23390.f_6188[Global_23390.f_5661] = fVar3;
			}
		}
	}
}

void func_392(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x165BB
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
		func_395(Global_23390.f_5661, 1);
	}
	else
	{
		func_395(Global_23390.f_5661, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_394(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
		if (Global_23390.f_5518[Global_23390.f_5662])
		{
			func_378(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_393(&(Global_23390.f_79[Global_23390.f_5663 /*6*/]));
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

float func_393(char* sParam0)//Position - 0x167D7
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_394(char* sParam0)//Position - 0x167F3
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
	func_361(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_395(int iParam0, bool bParam1)//Position - 0x16830
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

char* func_396(int iParam0)//Position - 0x1687C
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		case 6:
			return "SNK_ITEM7";
		
		default:
	}
	return "";
}

int func_397(int iParam0)//Position - 0x168EE
{
	if (func_131(func_331(iParam0), -1) >= func_332(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_398(int iParam0, char* sParam1, char* sParam2)//Position - 0x1690F
{
	Global_23390 = iParam0;
	func_399(29, sParam1, sParam2);
}

void func_399(int iParam0, char* sParam1, char* sParam2)//Position - 0x16926
{
	StringCopy(&(Global_23390.f_6463[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23390.f_7488[iParam0 /*16*/]), sParam2, 64);
}

void func_400(char* sParam0)//Position - 0x1694A
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

void func_401(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x16995
{
	Global_23390.f_5526[0] = iParam0;
	Global_23390.f_5526[1] = iParam1;
	Global_23390.f_5526[2] = iParam2;
	Global_23390.f_5526[3] = iParam3;
	Global_23390.f_5526[4] = iParam4;
}

void func_402(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x169D4
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

void func_403(bool bParam0, bool bParam1)//Position - 0x16A7E
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

int func_404()//Position - 0x16F71
{
	if (!Global_262145.f_120 /* Tunable: ENABLE_SPRUNK_GTAO_PURCHASING */)
	{
		return (7 - 1);
	}
	return 7;
}

int func_405(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x16F8A
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-706.6382f, -913.68866f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1698.3065f, 4923.3706f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1820.4653f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			Var0 = { 1165.9581f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			Var0 = { -2967.0269f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			Var0 = { -1222.3306f, -907.82336f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			Var0 = { 1134.8114f, -982.36145f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			Var0 = { -1486.6729f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			Var0 = { -3244.5735f, 1000.6578f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			Var0 = { -3041.3567f, 584.26654f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			Var0 = { 548.9015f, 2668.9414f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			Var0 = { 2554.875f, 381.38574f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			Var0 = { 2676.2124f, 3280.9695f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			Var0 = { 1729.3295f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			Var0 = { 1959.323f, 3742.2896f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			Var0 = { 24.94562f, -1344.9545f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			Var0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.6526f, 3598.9656f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_406()//Position - 0x17723
{
	if (MISC::IS_PC_VERSION())
	{
		PAD::SET_CURSOR_POSITION(0.325f, 0.3f);
	}
}

void func_407(int iParam0, int iParam1)//Position - 0x17741
{
	if (!func_312(PLAYER::PLAYER_ID(), 1, 0) || iParam1)
	{
		if (!func_412())
		{
			Global_1574582.f_1 = 1;
			Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1574582.f_2 = 1;
			}
			func_408(7, 0, -1);
		}
	}
}

void func_408(int iParam0, int iParam1, int iParam2)//Position - 0x17796
{
	if (!func_412() || iParam1)
	{
		Global_1574582 = 1;
		func_411(1);
		if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_410()) && !func_409(PLAYER::PLAYER_ID())) && !func_143(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 1;
		}
		Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8 = 1;
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(true, iParam0, iParam2, -1);
	}
}

int func_409(int iParam0)//Position - 0x17803
{
	if (func_312(iParam0, 1, 0))
	{
		if (Global_1853988[iParam0 /*867*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_410()//Position - 0x17828
{
	return Global_2683883.f_841;
}

void func_411(bool bParam0)//Position - 0x17837
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_412())
		{
			if (func_47(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
				if (bParam0)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_47(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_412()//Position - 0x17930
{
	return Global_1574582;
}

void func_413(int* iParam0)//Position - 0x1793C
{
	func_414(iParam0, 0f);
}

void func_414(int* iParam0, float fParam1)//Position - 0x1794B
{
	iParam0->f_1 = (func_335(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_415(int iParam0, bool bParam1)//Position - 0x17976
{
	int iVar0;
	
	iVar0 = func_268(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_173(0))
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

int func_416()//Position - 0x17A2E
{
	if (Global_113810.f_20413.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_417()//Position - 0x17A4B
{
	return Global_23249;
}

int func_418(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x17A56
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.9547f, 3604.3794f, 33.98091f };
			*uParam4 = { 1394.4752f, 3605.6636f, 35.98091f };
			*uParam5 = { 1392.5505f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_419(int iParam0, int iParam1)//Position - 0x17C3C
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

void func_420(var uParam0, var uParam1)//Position - 0x17C52
{
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	func_464(PLAYER::PLAYER_ID(), 1, 0, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_441();
	MISC::CLEAR_BIT(&(uParam0->f_53), 7);
	if (func_151("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (uParam0->f_14 != -1)
	{
		func_267(&(uParam0->f_14));
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

int func_421(float fParam0)//Position - 0x17CDD
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fParam0 <= 0f)
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0) > 0;
		}
	}
	return 0;
}

int func_422(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x17D2F
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_423(var uParam0)//Position - 0x17D82
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_424()//Position - 0x17DAC
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_557);
	TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_557);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_558);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0f, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_558);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_559);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_544, 2f, -1, 0.25f, 0, fLocal_547);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
	TASK::TASK_SMART_FLEE_COORD(0, Local_544, 250f, -1, true, false);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_559);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_561);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_561);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_560);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_544, 2f, -1, 0.25f, 0, (fLocal_547 - 180f));
	TASK::TASK_SWAP_WEAPON(0, true);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_560);
}

void func_425(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x17F33
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78689)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

int func_426(int iParam0)//Position - 0x17FCE
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_427()//Position - 0x17FED
{
	return Local_86.f_13;
}

char* func_428(int iParam0)//Position - 0x17FF9
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_429()//Position - 0x180A7
{
	struct<3> Var0;
	
	if (func_437(&(Local_482.f_50), 0))
	{
		func_435(Local_482.f_50, &iLocal_581, &iLocal_582, &iLocal_583, &iLocal_584, &Local_585, &Local_588);
		func_434(Local_482.f_50, &Local_591, &Local_594, &fLocal_597);
		func_433(Local_482.f_50, &Local_598, &Local_601, &fLocal_604);
		switch (Local_482.f_50)
		{
			case 0:
				Local_549 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				Local_552 = { 0f, 0f, 21.89f };
				iLocal_540 = func_53(0);
				Local_544 = { 1394.852f, 3609.5088f, 33.9809f };
				fLocal_547 = 116.5329f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 1:
				Local_552 = { 0f, 0f, -160f };
				Local_549 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { -3047.5117f, 588.9807f, 6.9089f };
				fLocal_547 = 178.8753f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				break;
			
			case 2:
				Local_549 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				Local_552 = { 0f, 0f, 175.52f };
				iLocal_540 = func_53(0);
				Local_544 = { -3249.1143f, 1006.5576f, 11.8307f };
				fLocal_547 = 191.594f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				break;
			
			case 3:
				Local_552 = { 0f, 0f, -82.38f };
				Local_549 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { 543.0796f, 2663.9673f, 41.1565f };
				fLocal_547 = 228.4295f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 4:
				Local_552 = { 0f, 0f, 180f };
				Local_549 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_547 = 197.2994f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				break;
			
			case 5:
				Local_552 = { 0f, 0f, 155f };
				Local_549 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { 2671.3508f, 3283.136f, 54.2411f };
				fLocal_547 = 296.5427f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				break;
			
			case 6:
				Local_552 = { 0f, 0f, 63.3f };
				Local_549 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_547 = 130.9518f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 7:
				Local_552 = { 0f, 0f, 117f };
				Local_549 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { 1958.9199f, 3746.2673f, 31.3438f };
				fLocal_547 = 73.6245f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 1;
				}
				break;
			
			case 8:
				Local_552 = { 0f, 0f, 92f };
				Local_549 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { 30.5721f, -1339.7816f, 28.4939f };
				fLocal_547 = 110.7699f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 2;
				}
				break;
			
			case 9:
				Local_552 = { 0f, 0f, 75f };
				Local_549 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_547 = 52.0064f;
				iLocal_576 = 1;
				if (func_431(6, 18))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 0;
					iLocal_776[4] = 0;
				}
				break;
			
			case 10:
				Local_552 = { 0f, 0f, 0f };
				Local_549 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_540 = func_53(0);
				Local_544 = { 1168.9711f, 2719.118f, 36.0632f };
				fLocal_547 = 136.5945f;
				iLocal_576 = 3;
				if (func_431(10, 22))
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 11:
				Local_552 = { 0f, 0f, -92f };
				Local_549 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_547 = 176.1174f;
				iLocal_576 = 3;
				if (func_431(10, 22))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 12:
				Local_552 = { 0f, 0f, -145f };
				Local_549 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { -1218.2826f, -915.7103f, 10.3264f };
				fLocal_547 = 43.8031f;
				iLocal_576 = 3;
				if (func_431(10, 22))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 13:
				Local_552 = { 0f, 0f, 103f };
				Local_549 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { 1130.1548f, -979.2816f, 45.4158f };
				fLocal_547 = 269.2587f;
				iLocal_576 = 3;
				if (func_431(10, 22))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 14:
				Local_552 = { 0f, 0f, -41f };
				Local_549 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_540 = func_53(0);
				Local_544 = { -1479.1631f, -375.0302f, 38.1633f };
				fLocal_547 = 36.5415f;
				iLocal_576 = 3;
				if (func_431(10, 22))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 15:
				Local_552 = { 0f, 0f, 145f };
				Local_549 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_540 = func_53(0);
				Local_544 = { 1707.3031f, 4918.31f, 41.0636f };
				fLocal_547 = 24.9178f;
				iLocal_576 = 2;
				if (func_431(8, 20))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 16:
				Local_552 = { 0f, 0f, -87f };
				Local_549 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_540 = func_53(0);
				Local_544 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_547 = 291.6504f;
				iLocal_576 = 2;
				if (func_431(8, 20))
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 1;
					iLocal_776[1] = 0;
					iLocal_770[2] = 1;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 17:
				Local_552 = { 0f, 0f, -125f };
				Local_549 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_540 = func_53(0);
				Local_544 = { -40.42f, -1751.4232f, 28.421f };
				fLocal_547 = 145.6553f;
				iLocal_576 = 2;
				if (func_431(8, 20))
				{
					iLocal_770[0] = 1;
					iLocal_776[0] = 0;
					iLocal_770[1] = 1;
					iLocal_776[1] = 1;
					iLocal_770[2] = 1;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 2;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 18:
				Local_552 = { 0f, 0f, -74f };
				Local_549 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_540 = func_53(0);
				Local_544 = { 1159.6815f, -314.254f, 68.2051f };
				fLocal_547 = 232.6337f;
				iLocal_576 = 2;
				if (func_431(8, 20))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 0;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 1;
					iLocal_770[1] = 2;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 0;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
			
			case 19:
				Local_549 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				Local_552 = { 0f, 0f, -47.3f };
				iLocal_540 = func_53(0);
				Local_544 = { -1828.9071f, 799.6096f, 137.1776f };
				fLocal_547 = 247.1234f;
				iLocal_576 = 2;
				if (func_431(8, 20))
				{
					iLocal_770[0] = 2;
					iLocal_776[0] = 1;
					iLocal_770[1] = 0;
					iLocal_776[1] = 0;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 0;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				else
				{
					iLocal_770[0] = 0;
					iLocal_776[0] = 2;
					iLocal_770[1] = 2;
					iLocal_776[1] = 1;
					iLocal_770[2] = 0;
					iLocal_776[2] = 1;
					iLocal_770[3] = 0;
					iLocal_776[3] = 1;
					iLocal_770[4] = 1;
					iLocal_776[4] = 0;
				}
				break;
		}
		Local_549 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_549, Local_552.f_2, 0f, 0.075f, 0f) };
		Local_541 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s", Local_549, Local_552, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s", Local_549, Local_552, 0f, 2) };
		Local_86.f_44 = Var0.f_2;
		Local_565 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_bag", Local_549, Local_552, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_bag", Local_549, Local_552, 0f, 2) };
		fLocal_568 = Var0.f_2;
		Local_569 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_till", Local_549, Local_552, 0f, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_till", Local_549, Local_552, 0f, 2) };
		fLocal_572 = Var0.f_2;
		Local_482.f_0 = func_430(Local_482.f_50);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_86.f_47 = iLocal_770[0];
			if (Local_86.f_47 == 0)
			{
				StringCopy(&(Local_86.f_52), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_86.f_48), "StoreOwner2", 16);
			}
			else if (Local_86.f_47 == 1)
			{
				StringCopy(&(Local_86.f_52), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_86.f_48), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_86.f_52), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_86.f_48), "StoreOwner3", 16);
			}
		}
		if (!BitTest(Local_482.f_52, 29))
		{
			ENTITY::CREATE_MODEL_HIDE(Local_549, 0.5f, iLocal_573, true);
			MISC::SET_BIT(&(Local_482.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_430(int iParam0)//Position - 0x19533
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_431(int iParam0, int iParam1)//Position - 0x19618
{
	return func_432(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_432(int iParam0, int iParam1, int iParam2)//Position - 0x1962C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_433(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x196D5
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.0907f, 3607.3828f, 33.980896f };
		*uParam2 = { 1391.1785f, 3612.5159f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.0134f, 585.96655f, (10.354213f - 0.2f) };
		*uParam2 = { -3048.7139f, 584.79614f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.3125f, 1003.6574f, (15.274335f - 0.2f) };
		*uParam2 = { -3251.1567f, 1003.9843f, 11.835008f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.54736f, 2665.6416f, (44.601078f - 0.2f) };
		*uParam2 = { 547.05396f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552.0005f, 384.25275f, (111.065636f - 0.2f) };
		*uParam2 = { 2548.1453f, 384.41327f, 107.62407f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.9463f, 3284.8328f, (57.680878f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.6987f, 54.244644f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.1194f, 6418.5786f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.8386f, 6422.032f, 34.037506f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.2238f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.2946f, 3749.5994f, 31.345217f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.713818f, -1341.9679f, (31.933138f - 0.2f) };
		*uParam2 = { 27.710491f, -1338.1095f, 28.494787f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.01828f, 330.808f, (106.01123f - 0.2f) };
		*uParam2 = { 377.94992f, 334.55228f, 102.56696f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.0151f, 2711.6013f, (40.661472f - 0.2f) };
		*uParam2 = { 1167.0822f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.7046f, 389.66962f, (17.641619f - 0.2f) };
		*uParam2 = { -2957.095f, 389.13898f, 13.043233f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.4021f, -909.5575f, (14.924662f - 0.2f) };
		*uParam2 = { -1217.6823f, -916.79736f, 10.337352f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.2837f, -981.47296f, (49.014137f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.8833f, -378.26944f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.7708f, -372.16638f, 38.169476f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.5562f, 4921.8057f, (44.026867f - 0.2f) };
		*uParam2 = { 1708.2848f, 4919.1963f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.71594f, (21.179176f - 0.2f) };
		*uParam2 = { -709.0177f, -903.15155f, 18.216183f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.379726f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.0898f, 28.420994f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.42145f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.0327f, -312.93204f, 68.205086f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.2177f, 796.6393f, (140.13344f - 0.2f) };
		*uParam2 = { -1829.3009f, 799.99963f, 137.18004f };
		*uParam3 = 4f;
	}
}

void func_434(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x19B96
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.5479f, 3600.5752f, 33.98914f };
		*uParam2 = { 1392.0798f, 3609.9834f, (37.335434f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.4758f, 587.4066f, (11.312223f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.0322f, 1004.48175f, 11.830701f };
		*uParam2 = { -3247.1875f, 1005.10693f, (16.252235f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.22784f, 2672.5005f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.1763f, 385.39355f, 107.62297f };
		*uParam2 = { 2552.0544f, 385.60565f, (112.16383f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.6025f, 54.24114f };
		*uParam2 = { 2675.5862f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.2367f, 6411.5566f, 34.03723f };
		*uParam2 = { 1734.3833f, 6417.952f, (38.584606f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.9989f, 3740.7947f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.895706f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.493917f, -1348.5073f, 27.033585f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.3823f, 27.056143f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.63092f, 323.55328f, 102.56641f };
		*uParam2 = { 378.32535f, 330.47934f, (107.10951f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.4972f, 2703.756f, 37.063072f };
		*uParam2 = { 1166.5249f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.5117f, 390.78732f, 14.043219f };
		*uParam2 = { -2965.2883f, 390.2452f, (18.543219f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.4175f, -902.67377f, 11.334959f };
		*uParam2 = { -1221.7646f, -909.58875f, (15.826262f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.3501f, -980.9322f, 45.415943f };
		*uParam2 = { 1132.9756f, -982.0952f, (49.915737f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.9487f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.0065f, -377.61673f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.9796f, 4929.0933f, 41.063572f };
		*uParam2 = { 1705.2332f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.76996f, -916.4685f, 18.215569f };
		*uParam2 = { -711.73676f, -908.7517f, (22.764883f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.4739f, 28.42097f };
		*uParam2 = { -47.925232f, -1750.6141f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.50867f, 68.20507f };
		*uParam2 = { 1158.3352f, -318.91226f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.3729f, 788.2851f, 137.18762f };
		*uParam2 = { -1827.4835f, 794.07385f, (141.69327f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_435(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1A043
{
	func_436(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_methlab");
			}
			*uParam2 = joaat("V_39_ShopRm");
			*uParam4 = joaat("V_39_StairsRm");
			*uParam3 = -1;
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
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_shop_247");
			}
			*uParam2 = joaat("V_66_ShopRm");
			*uParam4 = joaat("V_66_BackRm");
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gen_liquor");
			}
			*uParam2 = joaat("liquor_front");
			*uParam4 = joaat("liquor_back");
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gasstation");
			}
			*uParam2 = joaat("V_68_GasRm");
			*uParam4 = joaat("V_68_BackRm");
			*uParam3 = joaat("V_68_Toilets");
			break;
	}
}

void func_436(int iParam0, var uParam1, var uParam2)//Position - 0x1A18C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.1692f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.5479f, 3600.5752f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.9082f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.4334f, 11.8307f };
			*uParam2 = { -3240.0322f, 1004.48175f, 11.830701f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.8113f, 41.1566f };
			*uParam2 = { 544.22784f, 2672.5005f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.1763f, 385.39355f, 107.62297f };
			break;
		
		case 5:
			*uParam1 = { 2682.0034f, 3282.5432f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.6025f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.2098f, 6411.4033f, 34.0372f };
			*uParam2 = { 1731.2367f, 6411.5566f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.0542f, 3740.5552f, 31.3448f };
			*uParam2 = { 1964.9989f, 3740.7947f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.8127f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.493917f, -1348.5073f, 27.033585f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.63092f, 323.55328f, 102.56641f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.1143f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.4972f, 2703.756f, 37.063072f };
			break;
		
		case 11:
			*uParam1 = { -2973.2617f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.5117f, 390.78732f, 14.043219f };
			break;
		
		case 12:
			*uParam1 = { -1226.4644f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.4175f, -902.67377f, 11.334959f };
			break;
		
		case 13:
			*uParam1 = { 1141.3596f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.3501f, -980.9322f, 45.415943f };
			break;
		
		case 14:
			*uParam1 = { -1491.0565f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.9487f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.8085f, 4929.1978f, 41.0783f };
			*uParam2 = { 1698.9796f, 4929.0933f, 41.063572f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.76996f, -916.4685f, 18.215569f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.4054f, 28.421f };
			*uParam2 = { -52.90452f, -1756.4739f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.5421f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.50867f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.2866f, 788.006f, 137.1859f };
			*uParam2 = { -1822.3729f, 788.2851f, 137.18762f };
			break;
	}
}

int func_437(var uParam0, bool bParam1)//Position - 0x1A563
{
	float fVar0;
	float fVar1;
	bool bVar2;
	
	fVar1 = 9999.9f;
	bVar2 = false;
	while (bVar2 < 20)
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_89(PLAYER::PLAYER_ID()), func_438(bVar2), true);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!BitTest(Global_2657533.f_62, bVar2) && BitTest(Global_2657533.f_64, bVar2))
				{
					fVar1 = fVar0;
					*uParam0 = bVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = bVar2;
			}
		}
		bVar2++;
	}
	return 1;
}

Vector3 func_438(int iParam0)//Position - 0x1A5D8
{
	struct<3> Var0;
	var uVar3;
	
	func_436(iParam0, &Var0, &uVar3);
	return Var0;
}

int func_439(int iParam0)//Position - 0x1A5EE
{
	return Local_161[iParam0 /*10*/].f_4;
}

void func_440()//Position - 0x1A5FE
{
	Global_2683883.f_785.f_28 = 0;
}

void func_441()//Position - 0x1A610
{
	if (Global_1574582.f_1 == 1)
	{
		func_442(7, 0, 1);
		Global_1574582.f_1 = 0;
		Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_9 = 0;
	}
}

void func_442(int iParam0, int iParam1, bool bParam2)//Position - 0x1A63E
{
	if (func_412())
	{
		if (iParam1 == 1)
		{
			if (Global_2794162.f_4499 == -1)
			{
				Global_2794162.f_4499 = Global_262145.f_27370 /* Tunable: 945146471 */;
			}
			func_443(&(Global_2794162.f_4497), 0, 0);
			if (bParam2)
			{
				if (Global_2794162.f_4502 == -1)
				{
					Global_2794162.f_4502 = Global_262145.f_27371 /* Tunable: -29732167 */;
				}
				func_443(&(Global_2794162.f_4500), 0, 0);
			}
			else
			{
				Global_1574582 = 0;
				Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
				func_411(1);
			}
		}
		else
		{
			Global_1574582 = 0;
			Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_8 = 0;
			func_411(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_410()) && !func_409(PLAYER::PLAYER_ID()))
		{
			Global_1057408 = 0;
		}
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

void func_443(var uParam0, bool bParam1, bool bParam2)//Position - 0x1A708
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

void func_444()//Position - 0x1A745
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_47(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = 1;
		if (BitTest(Local_482.f_53, 6) && !BitTest(Local_482.f_53, 5))
		{
			iVar1 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
			iVar2 = 0;
			MISC::SET_BIT(&iVar2, 8);
			MISC::SET_BIT(&iVar2, 4);
			MISC::SET_BIT(&iVar2, 1);
			if (iLocal_799 > Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */)
			{
				iLocal_799 = Global_262145.f_177 /* Tunable: HOLD_UP_CASH_REWARD_CAP */;
			}
			if (iVar1 < iLocal_799)
			{
				if (iVar1 > 0)
				{
					if (func_52(func_53(1)))
					{
						if (MONEY::NETWORK_CAN_SPEND_MONEY2(iVar1, false, false, false, &uVar3, -1, 0))
						{
							if (func_220())
							{
								if (!BitTest(Global_2794162.f_7, 1))
								{
									Global_2794162.f_5056 = iVar1;
									Global_2794162.f_5057 = iVar2;
									Global_2794162.f_5058 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f) };
									func_210(&(Global_2794162.f_5055), joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"), Global_2794162.f_5056, 1, 3);
									MISC::SET_BIT(&(Global_2794162.f_7), 1);
									iLocal_799 = 0;
									MISC::SET_BIT(&(Local_482.f_53), 5);
								}
							}
							else
							{
								func_446(joaat("PICKUP_MONEY_VARIABLE"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f), iVar2, iVar1, func_53(1), 0, 0);
								func_205(-iVar1, 1, 1, 1092616192);
								MONEY::NETWORK_SPENT_HOLDUPS(iVar1, false, false);
								func_209(joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"), iVar1, &uVar4, 0, 0, 0);
								iLocal_799 = 0;
								func_445();
								MISC::SET_BIT(&(Local_482.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_799 > 0)
			{
				if (func_52(func_53(1)))
				{
					if (MONEY::NETWORK_CAN_SPEND_MONEY2(iLocal_799, false, false, false, &uVar3, -1, 0))
					{
						if (func_220())
						{
							if (!BitTest(Global_2794162.f_7, 1))
							{
								Global_2794162.f_5056 = iLocal_799;
								Global_2794162.f_5057 = iVar2;
								Global_2794162.f_5058 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f) };
								func_210(&(Global_2794162.f_5055), joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"), Global_2794162.f_5056, 1, 3);
								MISC::SET_BIT(&(Global_2794162.f_7), 1);
								iLocal_799 = 0;
								MISC::SET_BIT(&(Local_482.f_53), 5);
							}
						}
						else
						{
							func_446(joaat("PICKUP_MONEY_VARIABLE"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1.2f, 1.5f), iVar2, iLocal_799, func_53(1), 0, 0);
							func_205(-iLocal_799, 1, 1, 1092616192);
							MONEY::NETWORK_SPENT_HOLDUPS(iLocal_799, false, false);
							func_209(joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"), iLocal_799, &uVar5, 0, 0, 0);
							iLocal_799 = 0;
							func_445();
							MISC::SET_BIT(&(Local_482.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_478();
		}
		else
		{
			return;
		}
	}
}

void func_445()//Position - 0x1A9FB
{
	Global_2794162.f_283 = 0;
	Global_2794162.f_284 = 0;
	Global_2794162.f_285 = 0;
}

struct<5> func_446(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)//Position - 0x1AA1B
{
	struct<5> Var0;
	
	Var0 = 123;
	if (func_454() && func_453(iParam0))
	{
		Var0 = { func_447(iParam0, Param1, iParam4, iParam5, iParam6, bParam7) };
	}
	else
	{
		Var0.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, bParam8);
	}
	return Var0;
}

struct<5> func_447(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x1AA72
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	int iVar11;
	
	Var0 = 123;
	if (func_452() == -1)
	{
		return Var0;
	}
	iVar5 = func_451(-1);
	if (iVar5 == -1)
	{
		return Var0;
	}
	Var6 = 123;
	Var6.f_0 = iParam0;
	Var6.f_1 = { Param1 };
	if (func_448(&Var6) != -1)
	{
		return Var0;
	}
	MISC::SET_BIT(&iParam4, 5);
	Var6.f_4 = OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(iParam0, Param1, iParam4, iParam5, iParam6, bParam7, false);
	iVar11 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam7)
	{
		Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
		if (Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_13 == 0)
		{
			Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_11 = 1;
		}
		else
		{
			Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_11 = 2;
		}
	}
	Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/] = { Var6 };
	Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_5 = { Param1 };
	Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_8 = iParam4;
	Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_9 = iParam5;
	Global_1914706[iVar11 /*299*/].f_98.f_21[iVar5 /*14*/].f_10 = iParam6;
	return Var6;
}

int func_448(var uParam0)//Position - 0x1ABEF
{
	int iVar0;
	
	if (!func_450(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_449(uParam0, &(Global_2652364.f_2452[iVar0 /*16*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_449(var uParam0, var uParam1)//Position - 0x1AC32
{
	if ((*uParam0 == *uParam1 && func_136(uParam0->f_1, uParam1->f_1, 0)) && uParam0->f_4 == uParam1->f_4)
	{
		return 1;
	}
	return 0;
}

int func_450(var uParam0)//Position - 0x1AC6D
{
	if ((*uParam0 == 123 || func_271(uParam0->f_1)) || uParam0->f_4 == 0)
	{
		return 0;
	}
	return 1;
}

int func_451(int iParam0)//Position - 0x1AC9F
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_450(&(Global_1914706[iParam0 /*299*/].f_98.f_21[iVar1 /*14*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_452()//Position - 0x1ACEB
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!func_450(&(Global_2652364.f_2452[iVar1 /*16*/])))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_453(int iParam0)//Position - 0x1AD25
{
	switch (iParam0)
	{
		case joaat("PICKUP_MONEY_VARIABLE"):
		case joaat("PICKUP_MONEY_CASE"):
		case joaat("PICKUP_MONEY_WALLET"):
		case joaat("PICKUP_MONEY_PURSE"):
		case joaat("PICKUP_MONEY_DEP_BAG"):
		case joaat("PICKUP_MONEY_MED_BAG"):
		case joaat("PICKUP_MONEY_PAPER_BAG"):
		case joaat("PICKUP_MONEY_SECURITY_CASE"):
		case joaat("PICKUP_GANG_ATTACK_MONEY"):
			return 1;
		
		default:
	}
	return 0;
}

var func_454()//Position - 0x1AD6F
{
	return Global_262145.f_31144 /* Tunable: 2071833430 */;
}

int func_455()//Position - 0x1AD7E
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_462())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_461())
	{
		return 1;
	}
	if (func_460(159))
	{
		if (!func_459())
		{
			return 1;
		}
	}
	if (func_460(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_456() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_456()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_456()//Position - 0x1AE02
{
	switch (func_458())
	{
		case 0:
			return func_457();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_457()//Position - 0x1AE35
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_458()//Position - 0x1AE59
{
	return Global_32283;
}

bool func_459()//Position - 0x1AE64
{
	return Global_2683883.f_698;
}

int func_460(int iParam0)//Position - 0x1AE73
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_461()//Position - 0x1AE8A
{
	return Global_2694576;
}

bool func_462()//Position - 0x1AE96
{
	return Global_2683883.f_693;
}

void func_463()//Position - 0x1AEA5
{
	SYSTEM::WAIT(0);
}

void func_464(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1AEB2
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_476())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_474())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || ((!func_84(PLAYER::PLAYER_ID(), 0) && !func_473()) && !func_472(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2657704[iParam0 /*463*/].f_254 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_469(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_468(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_467();
					func_466();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2657704[iParam0 /*463*/].f_255 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2635560.f_2781)
				{
					Global_2635560.f_2781 = 0;
				}
			}
			else
			{
				if (!func_468(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar27, true);
						}
					}
					if (func_465(Global_4718592.f_171044))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575038)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_465(int iParam0)//Position - 0x1B34E
{
	return iParam0 == 17;
}

void func_466()//Position - 0x1B35B
{
	struct<3> Var0;
	
	Global_2672524.f_1024 = 0;
	Global_2672524.f_1025 = 0;
	Global_2672524.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672524.f_1031 = -1;
	Global_2672524.f_1032 = 0;
	Global_2635560.f_2792 = { Var0 };
}

void func_467()//Position - 0x1B3A8
{
	Global_2635560.f_702 = 0;
	Global_2635560.f_2835 = 0;
	Global_2635560.f_515 = 0;
	Global_2635560.f_606 = 0;
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635560.f_2790 = 0;
}

int func_468(int iParam0)//Position - 0x1B3E6
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_469(bool bParam0, int iParam1, int iParam2)//Position - 0x1B417
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_471();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_84(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_470(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_470(int iParam0, bool bParam1)//Position - 0x1B4E7
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_471()//Position - 0x1B503
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

int func_472(int iParam0)//Position - 0x1B55B
{
	if (func_84(iParam0, 0))
	{
		return 1;
	}
	if (func_473())
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

bool func_473()//Position - 0x1B59A
{
	return BitTest(Global_2621446, 3);
}

int func_474()//Position - 0x1B5A8
{
	if (func_475() == 0)
	{
		return 1;
	}
	return 0;
}

int func_475()//Position - 0x1B5BD
{
	return Global_1574632.f_18;
}

int func_476()//Position - 0x1B5CB
{
	if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_477(bool bParam0)//Position - 0x1B5FC
{
	if (bParam0)
	{
		return (Global_2683883.f_785.f_28 && MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2683883.f_785.f_31);
	}
	return Global_2683883.f_785.f_28;
}

void func_478()//Position - 0x1B638
{
	int iVar0;
	
	Global_2794162.f_8 = 0;
	Global_1984597 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_426(Local_86.f_0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_86.f_0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_86.f_0), 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_86.f_0));
				if (BitTest(Local_482.f_52, 22))
				{
					if (BitTest(Local_482.f_52, 20))
					{
						if (Local_86.f_3 != 7)
						{
							if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
							{
								TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_86.f_0));
								TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_86.f_0), iLocal_559);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_86.f_0), false);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 0 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_86.f_0), joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) != 1)
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_86.f_0));
							if (!WEAPON::HAS_PED_GOT_WEAPON(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_PISTOL"), false))
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_86.f_0), joaat("WEAPON_PISTOL"), 25000, true);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_86.f_0), 30);
							}
							func_234(4);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_86.f_0), 20f, 0);
						}
					}
					else if ((BitTest(Local_86.f_25, 3) || !func_11()) || !func_482())
					{
						if (!BitTest(Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
						{
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_86.f_0));
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_86.f_0), iLocal_559);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_86.f_0), false);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_86.f_0));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_86.f_0), true);
						TASK::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_86.f_0), -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_86.f_0), false);
					}
				}
			}
		}
		if ((BitTest(Local_86.f_25, 3) || !func_11()) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_14))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_14))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_86.f_14), true, true);
					func_48(&(Local_86.f_14));
				}
			}
		}
		if (((BitTest(Local_86.f_25, 3) || !func_11()) || BitTest(Local_482.f_52, 20)) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_15))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_86.f_15))
				{
					func_48(&(Local_86.f_15));
				}
			}
		}
		if (func_220() && BitTest(Global_2794162.f_7, 1))
		{
			if (func_317(Global_2794162.f_5055) == 1)
			{
				func_481(Global_2794162.f_5055, 4);
			}
			else
			{
				func_212(Global_2794162.f_5055);
			}
			MISC::CLEAR_BIT(&(Global_2794162.f_7), 1);
		}
		if (Local_86.f_13 == 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_86.f_0))
			{
				if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_86.f_0), "XP_Blocker"))
				{
					DECORATOR::DECOR_REMOVE(NETWORK::NET_TO_PED(Local_86.f_0), "XP_Blocker");
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			EVENT::REMOVE_SHOCKING_EVENT(Local_86.f_32);
		}
	}
	func_480();
	STREAMING::REMOVE_ANIM_DICT("mp_am_hold_up");
	PLAYER::RESET_LAW_RESPONSE_DELAY_OVERRIDE();
	if (func_151("SHR_MENU" /* GXT: Press ~INPUT_CONTEXT~ to shop.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
	Global_2794162.f_9 = func_185();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_428(Local_482.f_0));
	func_167(1, Local_482.f_0);
	if (Local_482.f_14 != -1)
	{
		func_267(&(Local_482.f_14));
	}
	Global_2794162.f_27 = Local_482.f_0;
	if (Global_2794162.f_5999.f_4 == 1)
	{
		Global_2794162.f_5999.f_4 = 0;
	}
	if (Global_2794162.f_5999.f_5 == 1)
	{
		Global_2794162.f_5999.f_5 = 0;
	}
	if (BitTest(Local_482.f_52, 29))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_549, 0.5f, iLocal_573, true);
	}
	if (BitTest(Local_482.f_53, 7))
	{
		func_441();
		MISC::CLEAR_BIT(&(Local_482.f_53), 7);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Local_86.f_25, 6) || BitTest(Local_86.f_25, 21))
		{
			if (BitTest(Local_86.f_25, 21))
			{
				iVar0 = 1;
			}
			STATS::PLAYSTATS_HOLD_UP_MISSION_DONE(30, iLocal_798, iLocal_799, iVar0);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_482.f_1))
	{
		if (CAM::IS_CAM_ACTIVE(Local_482.f_1))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(Local_482.f_1, false);
	}
	func_479();
}

void func_479()//Position - 0x1BA2A
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_480()//Position - 0x1BA36
{
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_556);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_557);
}

void func_481(int iParam0, int iParam1)//Position - 0x1BA4C
{
	if (func_303(iParam0) != -1)
	{
		if (Global_4535172[iParam0 /*85*/].f_66.f_2 == 1)
		{
			Global_4535172[iParam0 /*85*/].f_66.f_11 = iParam1;
		}
	}
}

int func_482()//Position - 0x1BA7C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_47(iVar1, 1, 1))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar2) == iLocal_581)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_483(struct<21> Param0)//Position - 0x1BAD6
{
	var uVar0;
	
	func_489(func_490(Param0.f_0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(8);
	func_487(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_86, 75, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_161, 321, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_486())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_52(func_53(0));
		func_52(func_53(1));
		func_52(func_53(2));
		STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
		STREAMING::REQUEST_ANIM_DICT("mp_missheist_countrybank@cower");
		Local_86.f_46 = 8;
		if (func_485())
		{
			MISC::SET_BIT(&(Local_86.f_26), 11);
		}
		else if (func_484())
		{
			MISC::SET_BIT(&(Local_86.f_26), 12);
		}
		Local_86.f_30 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
		Local_86.f_33 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
		if ((func_14() && !func_419(PLAYER::PLAYER_ID(), 1)) && !func_419(PLAYER::PLAYER_ID(), 2))
		{
			Local_86.f_45 = 2;
			MISC::SET_BIT(&(Local_86.f_27), 0);
		}
		else
		{
			Local_86.f_45 = 1;
		}
		Local_86.f_73 = MISC::GET_RANDOM_FLOAT_IN_RANGE(18f, 28f);
	}
	if (func_98(PLAYER::PLAYER_ID()) != 155)
	{
		OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(func_53(1), 0);
	}
	uVar0 = func_131(1191, -1);
	if (BitTest(uVar0, 20) && BitTest(uVar0, 21))
	{
		MISC::SET_BIT(&(Local_482.f_53), 1);
	}
	Local_161[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 0;
	return 1;
}

int func_484()//Position - 0x1BC2D
{
	if (Local_482.f_50 >= 0 && Local_482.f_50 <= 9)
	{
		if (func_431(5, 6) || func_431(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_482.f_50 >= 10 && Local_482.f_50 <= 14)
	{
		if (func_431(9, 10) || func_431(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_482.f_50 >= 15 && Local_482.f_50 <= 19)
	{
		if (func_431(7, 8) || func_431(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_485()//Position - 0x1BCD9
{
	if (Local_482.f_50 >= 0 && Local_482.f_50 <= 9)
	{
		if (func_431(6, 7) || func_431(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_482.f_50 >= 10 && Local_482.f_50 <= 14)
	{
		if (func_431(10, 11) || func_431(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_482.f_50 >= 15 && Local_482.f_50 <= 19)
	{
		if (func_431(8, 9) || func_431(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_486()//Position - 0x1BD85
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
		if (func_462())
		{
			return 0;
		}
		if (func_460(157))
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

int func_487(int iParam0, int iParam1, bool bParam2)//Position - 0x1BDDE
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_479();
			}
			else
			{
				return 0;
			}
		}
		if (!func_488(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_479();
					}
					else
					{
						return 0;
					}
				}
				if (func_462())
				{
					if (!bParam2)
					{
						func_479();
					}
					else
					{
						return 0;
					}
				}
				if (func_460(157))
				{
					if (!bParam2)
					{
						func_479();
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
					func_479();
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
				func_479();
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
			func_479();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_488(bool bParam0)//Position - 0x1BEF4
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_489(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x1BF05
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_479();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_490(int iParam0)//Position - 0x1BF24
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
	switch (func_491(func_492(iParam0, 1)))
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

int func_491(int iParam0)//Position - 0x1C784
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

int func_492(int iParam0, bool bParam1)//Position - 0x1C992
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

