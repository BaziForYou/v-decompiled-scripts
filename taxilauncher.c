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
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	struct<31> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 16;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
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
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	int iLocal_267 = 0;
	char cLocal_268[16] = "";
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	struct<3> Local_272 = { 0, 0, 0 } ;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
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
	iLocal_44 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_45 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_88 = 1;
	iLocal_93 = -1;
	iLocal_97 = func_147();
	iLocal_98 = func_146();
	StringCopy(&cLocal_268, "TAXI_HAIL", 16);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_145();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	Global_113810.f_10052.f_120 = 1;
	while (true)
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_144())
				{
					iLocal_49 = 1;
				}
				else
				{
					SYSTEM::WAIT(500);
				}
				break;
			
			case 1:
				if (func_144())
				{
					Local_272 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
					func_112();
					if (func_111())
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
						func_110();
						if (!func_108())
						{
							func_65();
							func_31();
							func_15();
						}
					}
					else
					{
						func_4(0);
						iLocal_49 = 1;
						func_1();
						SYSTEM::WAIT(500);
					}
				}
				else
				{
					func_4(1);
					iLocal_49 = 0;
				}
				break;
			
			case 2:
				if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_267))
				{
					func_4(1);
					iLocal_52 = 3;
					iLocal_49 = 0;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x16C
{
	if (!func_3())
	{
		if (MISC::ARE_STRINGS_EQUAL("NULL", &Global_112866))
		{
			func_2(0);
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&Global_112866)) == 0)
		{
			func_2(0);
		}
	}
}

void func_2(bool bParam0)//Position - 0x1A6
{
	if (bParam0)
	{
		StringCopy(&Global_112866, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_112860 = 1;
	}
	else
	{
		StringCopy(&Global_112866, "NULL", 24);
		Global_112860 = 0;
	}
}

int func_3()//Position - 0x1D2
{
	if (!Global_112859)
	{
		return 0;
	}
	if (Global_112860)
	{
		return 0;
	}
	return 1;
}

void func_4(bool bParam0)//Position - 0x1F2
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
	func_13();
	func_10();
	func_5();
	iLocal_88 = 1;
	iLocal_86 = 0;
	iLocal_50 = 0;
	iLocal_51 = 0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	iLocal_94 = 0;
	if (bParam0)
	{
		iLocal_49 = 0;
	}
}

void func_5()//Position - 0x22D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "HAIL_TAXI", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "HAIL_TAXI", &cLocal_268, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FP_HAIL_TAXI", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FP_HAIL_TAXI", &cLocal_268, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FUCK_U", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FUCK_U", &cLocal_268, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FORGET_IT", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FORGET_IT", &cLocal_268, -2f);
		}
		if (iLocal_93 != -1)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
		}
		if (iLocal_90 == 1)
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
			iLocal_90 = 0;
		}
	}
	STREAMING::REMOVE_ANIM_DICT(&cLocal_268);
	if (iLocal_93 != -1)
	{
		func_8(&iLocal_93);
	}
	if (func_7("TXM_H01" /* GXT: Press ~INPUT_CONTEXT~ to hail a taxi. */))
	{
		iLocal_92++;
		if (iLocal_92 == 3)
		{
			Global_113810.f_10052.f_120 = 1;
		}
		HUD::CLEAR_HELP(true);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_91))
	{
		HUD::SET_BLIP_ROUTE(iLocal_91, false);
		HUD::REMOVE_BLIP(&iLocal_91);
	}
	if (iLocal_86)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112842))
	{
		if (!PED::IS_PED_INJURED(Global_112842))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112842, &cLocal_268, "Aknowledge_R", 3))
			{
				ENTITY::STOP_ENTITY_ANIM(Global_112842, "Aknowledge_R", &cLocal_268, -4f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112842, &cLocal_268, "Aknowledge_L", 3))
			{
				ENTITY::STOP_ENTITY_ANIM(Global_112842, "Aknowledge_L", &cLocal_268, -4f);
			}
		}
	}
	if (iLocal_52 == 0)
	{
		func_6();
	}
	iLocal_276 = 0;
	iLocal_85 = 0;
	iLocal_86 = 0;
	iLocal_95 = 0;
	iLocal_96 = 0;
	Global_112878 = -1;
	iLocal_53 = 0;
}

void func_6()//Position - 0x3EC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_112842))
	{
		if (!PED::IS_PED_INJURED(Global_112842))
		{
			PED::SET_PED_CONFIG_FLAG(Global_112842, 251, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112842, false);
			if (!PED::IS_PED_FLEEING(Global_112842) && !PED::IS_PED_IN_COMBAT(Global_112842, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_112842, false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_112841))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112841, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112842, Global_112841))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Global_112842, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_112842, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112841, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112841, 2, false)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112841, 0, false))
									{
										TASK::TASK_PAUSE(0, 2000);
									}
									else
									{
										TASK::TASK_PAUSE(0, 500);
									}
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, Global_112841, 12f, 790699);
									TASK::CLOSE_SEQUENCE_TASK(iVar0);
									TASK::TASK_PERFORM_SEQUENCE(Global_112842, iVar0);
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								}
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(Global_112842, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							}
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Global_112842, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_112842, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_112842, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 0)
				{
					TASK::TASK_WANDER_STANDARD(Global_112842, 40000f, 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112842))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112842))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112842, false))
			{
				if (!PED::IS_PED_INJURED(Global_112842))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_112842, false, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112842, false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Global_112842);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112841))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112841))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_112841, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112841, false))
				{
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_112841, false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_112841, true, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_112841, false);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_112841);
			}
		}
	}
	Global_112842 = 0;
	Global_112841 = 0;
	StringCopy(&Global_112872, "NULL", 24);
	Global_112878 = -1;
}

bool func_7(char* sParam0)//Position - 0x62A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_8(int iParam0)//Position - 0x63D
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_9(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_44123[iVar0 /*32*/])
		{
			Global_44123[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_9(int iParam0)//Position - 0x694
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

void func_10()//Position - 0x6CF
{
	if (iLocal_52 == 1)
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
		func_11();
	}
	else if (iLocal_52 == 2)
	{
		if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
		}
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
		func_11();
	}
	func_6();
	if (func_7("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */))
	{
		HUD::CLEAR_HELP(true);
	}
	iLocal_94 = 0;
	iLocal_52 = 0;
}

void func_11()//Position - 0x72A
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (PED::DOES_GROUP_EXIST(func_12()))
	{
		PED::GET_GROUP_SIZE(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				TASK::CLEAR_PED_TASKS(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(Global_112841, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar2, Global_112841, false))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar2, Global_112841, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					if (!ENTITY::IS_ENTITY_DEAD(Global_112841, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iVar2, Global_112841, false))
						{
							TASK::TASK_LEAVE_VEHICLE(iVar2, Global_112841, 64);
						}
					}
				}
			}
		}
	}
}

int func_12()//Position - 0x7D9
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_13()//Position - 0x7E9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_54.f_1))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_54.f_1, false))
		{
			if (Local_54.f_1 != Global_112842)
			{
				if (!PED::IS_PED_INJURED(Local_54.f_1))
				{
					PED::SET_PED_CONFIG_FLAG(Local_54.f_1, 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54.f_1, false);
					if (!PED::IS_PED_FLEEING(Local_54.f_1) && !PED::IS_PED_IN_COMBAT(Local_54.f_1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_1, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_54.f_0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_54.f_0, false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_1, Local_54.f_0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_54.f_0, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Local_54.f_0, 2, false)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Local_54.f_0, 0, false))
										{
											TASK::TASK_PAUSE(0, 2000);
										}
										else
										{
											TASK::TASK_PAUSE(0, 500);
										}
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_54.f_0, 12f, 790699);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(Local_54.f_1, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(Local_54.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
									}
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(Local_54.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
								}
							}
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(Local_54.f_1, 40000f, 0);
						}
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_54.f_1));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_54.f_1));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_54.f_0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_54.f_0, false))
		{
			if (Local_54.f_0 != Global_112841)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_54);
			}
		}
	}
	if (iLocal_51 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_98);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_97);
	}
	Local_54.f_0 = 0;
	Local_54.f_1 = 0;
	Local_54.f_2 = 0;
	Local_54.f_3 = 0;
	Local_54.f_5 = 0f;
	Local_54.f_6 = 0f;
	Local_54.f_7 = 45f;
	Local_54.f_8 = 0;
	Local_54.f_10 = 0;
	Local_54.f_9 = 0;
	Local_54.f_11 = { 0f, 0f, 0f };
	Local_54.f_14 = { 0f, 0f, 0f };
	Local_54.f_17 = { 0f, 0f, 0f };
	Local_54.f_20 = { 0f, 0f, 0f };
	Local_54.f_23 = { 0f, 0f, 0f };
	Local_54.f_26 = { 0f, 0f, 0f };
	Local_54.f_29 = 1076367531;
	Local_54.f_30 = func_14();
	iLocal_51 = 0;
}

int func_14()//Position - 0x9F1
{
	if (Global_32283 == 0 || Global_32283 == 2)
	{
		return 193;
	}
	return 161;
}

void func_15()//Position - 0xA13
{
	if (iLocal_52 == 0)
	{
		func_27();
	}
	else if (iLocal_52 == 1)
	{
		func_23();
	}
	else if (iLocal_52 == 2)
	{
		func_16();
	}
	else if (iLocal_52 == 3)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_52 = 0;
		}
	}
}

void func_16()//Position - 0xA58
{
	if (func_22(&Global_112841, iLocal_98, iLocal_97))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112841, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112841))
			{
				func_21();
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112841, 1, false) == PLAYER::PLAYER_PED_ID())
				{
					iLocal_277 = 1;
				}
				else
				{
					iLocal_277 = 2;
				}
				func_20(&Global_112841, iLocal_277);
				if (!PED::IS_PED_INJURED(Global_112842) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112841, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112842, Global_112841))
					{
						if (!func_19(Global_112842, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_112842, Global_112841, 1, 1000000);
						}
					}
				}
				func_13();
				func_5();
				if (iLocal_87)
				{
					if (func_7("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */))
					{
						HUD::CLEAR_HELP(true);
					}
					iLocal_87 = 0;
				}
				func_18();
				func_17();
				PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
				SCRIPT::REQUEST_SCRIPT("taxiService");
				if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
				{
					iLocal_267 = SYSTEM::START_NEW_SCRIPT("taxiService", 1828);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
					iLocal_49 = 2;
				}
			}
		}
		else
		{
			func_4(1);
		}
	}
	else
	{
		func_10();
	}
}

void func_17()//Position - 0xB6B
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1.5f, 1.5f, 1.5f, -1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_ON_FOOT(iVar0))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			}
		}
	}
}

void func_18()//Position - 0xBC3
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112841, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112841, 1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112841, 1, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112841, 2, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112841, 2, false);
			if (PLAYER::PLAYER_PED_ID() != iVar0)
			{
				if (!PED::IS_PED_GROUP_MEMBER(iVar0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
				{
					TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
			}
		}
	}
}

int func_19(int iParam0, int iParam1)//Position - 0xC65
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_20(var uParam0, int iParam1)//Position - 0xCAD
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (PED::DOES_GROUP_EXIST(func_12()))
	{
		PED::GET_GROUP_SIZE(func_12(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					if (iVar3 == PLAYER::PLAYER_PED_ID())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, false))
				{
					bVar4 = false;
				}
				if (func_19(iVar2, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar5, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						if (iVar3 == PLAYER::PLAYER_PED_ID())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (PED::GET_PED_CONFIG_FLAG(iVar2, 167, false))
					{
						bVar4 = false;
					}
					if (func_19(iVar2, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						TASK::TASK_ENTER_VEHICLE(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

void func_21()//Position - 0xDE5
{
	Global_23251.f_6 = 1;
}

int func_22(int iParam0, int iParam1, int iParam2)//Position - 0xDF3
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == iParam1)
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_IN_COMBAT(iVar0, 0))
							{
								if (PED::IS_PED_MODEL(iVar0, iParam2))
								{
									if (ENTITY::IS_ENTITY_UPRIGHT(*iParam0, 90f))
									{
										iVar1 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*iParam0);
										if (iVar1 != 3 && iVar1 != 2)
										{
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_23()//Position - 0xE87
{
	if (func_22(&Global_112841, iLocal_98, iLocal_97))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112841, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112841))
			{
				iLocal_52 = 2;
			}
			func_21();
		}
		else
		{
			func_24();
		}
	}
	else
	{
		func_10();
	}
}

void func_24()//Position - 0xED2
{
	int iVar0;
	
	if (func_25(&Global_112841))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 == iLocal_275)
			{
				func_21();
				if (!PED::IS_PED_INJURED(Global_112842) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112841, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112842, Global_112841))
					{
						if (!func_19(Global_112842, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_112842, Global_112841, 1, 1000000);
						}
					}
				}
			}
			else
			{
				iLocal_52 = 0;
			}
		}
		else
		{
			iLocal_52 = 0;
		}
	}
	else
	{
		iLocal_52 = 0;
	}
}

int func_25(int iParam0)//Position - 0xF61
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 5f, 5f, 2f, false, true, 0))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(*iParam0) > 0.5f)
	{
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!func_26(*iParam0))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)//Position - 0xFCC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()//Position - 0xFF1
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275))
	{
		if (func_22(&iLocal_275, iLocal_98, iLocal_97))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_29();
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_275))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_275, -1, false);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_275, 1, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_275, 1, false) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_277 = 1;
						}
					}
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_275, 2, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_275, 2, false) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_277 = 2;
						}
					}
					if (iLocal_53 == 4 || iLocal_53 == 2)
					{
						if (iLocal_275 != Global_112841)
						{
							func_5();
						}
					}
					func_21();
					if (func_28(&iLocal_275, &iVar0, 0))
					{
						iLocal_275 = 0;
						iLocal_52 = 2;
					}
				}
				else
				{
					func_10();
				}
			}
		}
	}
}

int func_28(int iParam0, int iParam1, bool bParam2)//Position - 0x10C9
{
	if (!*iParam0 == Global_112841 && !Global_112841 == 0)
	{
		func_6();
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (!PED::IS_PED_INJURED(*iParam1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam1, *iParam0))
				{
					Global_112841 = *iParam0;
					Global_112842 = *iParam1;
					Global_112856 = 1;
					if (bParam2)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112842, true, true);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112841, true, true);
						StringCopy(&Global_112872, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112842))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112842, true, false);
						}
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_112841))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112841, true, false);
							StringCopy(&Global_112872, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
						}
					}
					PED::SET_PED_CONFIG_FLAG(Global_112842, 251, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_112842, 5, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Global_112842, 17, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Global_112842, 512, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112842, true);
					AUDIO::SET_AMBIENT_VOICE_NAME(Global_112842, "A_M_M_EASTSA_02_LATINO_FULL_01");
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_112841, 1);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Global_112841, true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_112841, false, 0);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_112841, true);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_29()//Position - 0x120C
{
	int iVar0;
	int iVar1;
	
	if (func_25(&iLocal_275))
	{
		if (!iLocal_87)
		{
			if (iLocal_275 == Global_112841 && iLocal_53 == 4)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					if (!func_7("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */))
					{
						if (Global_113810.f_10052.f_121 < 5)
						{
							func_30("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */, -1);
							Global_113810.f_10052.f_121++;
						}
						iLocal_87 = 1;
					}
				}
			}
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 == iLocal_275)
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_275, -1, false);
				if (iLocal_53 == 4 || iLocal_53 == 2)
				{
					if (iLocal_275 != Global_112841)
					{
						func_5();
					}
				}
				func_21();
				if (func_28(&iLocal_275, &iVar1, 0))
				{
					if (iLocal_86)
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(false);
						}
						iLocal_86 = 0;
					}
					if (!PED::IS_PED_INJURED(Global_112842) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112841, false))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112842, Global_112841))
						{
							if (!func_19(Global_112842, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_112842, Global_112841, 1, 10000);
							}
						}
					}
					iLocal_87 = 0;
					iLocal_52 = 1;
				}
			}
		}
	}
	else if (func_7("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_30(char* sParam0, int iParam1)//Position - 0x1343
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_31()//Position - 0x135A
{
	if (iLocal_53 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
		{
			iLocal_53 = 1;
		}
	}
	else if (iLocal_53 == 1)
	{
		func_58();
	}
	else if (iLocal_53 == 2)
	{
		func_49();
	}
	else if (iLocal_53 == 3)
	{
		func_43();
	}
	else if (iLocal_53 == 4)
	{
		func_32();
	}
}

void func_32()//Position - 0x13A9
{
	if (func_42(&Global_112841, &Global_112842, iLocal_98, iLocal_97))
	{
		if (!func_36())
		{
			if (!func_19(Global_112842, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(Global_112842, Global_112841, 1, 1000000);
			}
			PED::SET_PED_CONFIG_FLAG(Global_112842, 251, true);
			func_33();
			if (HUD::DOES_BLIP_EXIST(iLocal_91))
			{
				HUD::SET_BLIP_FLASH_TIMER(iLocal_91, 10000);
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_33()//Position - 0x141D
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (iLocal_86)
		{
			if (func_34())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
		}
	}
}

int func_34()//Position - 0x143D
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	func_35(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (((iVar0 > 64 || iVar0 < -64) || iVar1 > 64) || iVar1 < -64)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x1482
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) * 127f));
		}
	}
}

int func_36()//Position - 0x1557
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (iLocal_53 == 4)
	{
		if (Global_112878 == -1 || Global_112878 == 0)
		{
			Global_112878 = MISC::GET_GAME_TIMER();
		}
		else if (func_41(Global_112878, 30000))
		{
			if (iLocal_52 == 0 || iLocal_52 == 3)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112841, true))
				{
					return 1;
				}
			}
		}
	}
	if (func_39(Global_112841))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Global_112841, false) };
		if (iLocal_53 == 4)
		{
			if (!func_38(Local_272, Var0, 75f))
			{
				return 1;
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112841, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, false))
		{
			return 1;
		}
		fVar3 = 15f;
		Var4 = { Var0 };
		Var7 = { Var4 };
		Var4.f_0 = (Var4.f_0 - fVar3);
		Var4.f_1 = (Var4.f_1 - fVar3);
		Var4.f_2 = (Var4.f_2 - fVar3);
		Var7.f_0 = (Var7.f_0 + fVar3);
		Var7.f_1 = (Var7.f_1 + fVar3);
		Var7.f_2 = (Var7.f_2 + fVar3);
		if (MISC::IS_PROJECTILE_IN_AREA(Var4, Var7, true))
		{
			return 1;
		}
		if (func_38(Local_272, Var0, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Global_112841) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Global_112841))
			{
				return 1;
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	if (func_37(Global_112842))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112842, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x16F2
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_38(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x171D
{
	return SYSTEM::VDIST2(Param0, Param3) <= (fParam6 * fParam6);
}

int func_39(int iParam0)//Position - 0x1737
{
	if (func_40(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x1761
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

bool func_41(int iParam0, int iParam1)//Position - 0x1782
{
	return (MISC::GET_GAME_TIMER() - iParam0) > iParam1;
}

int func_42(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1794
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (!PED::IS_PED_INJURED(*uParam1))
				{
					if (!PED::IS_PED_FLEEING(*uParam1))
					{
						if (!PED::IS_PED_IN_COMBAT(*uParam1, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam1, *uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(*uParam0) == iParam2)
								{
									if (PED::IS_PED_MODEL(*uParam1, iParam3))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_43()//Position - 0x1807
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FP_HAIL_TAXI", 3))
	{
		return;
	}
	else if (func_41(iLocal_95, 3000))
	{
		STREAMING::REQUEST_ANIM_DICT(&cLocal_268);
		if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_268))
		{
			if (func_44())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FORGET_IT", 4f, -2f, -1, 48, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FUCK_U", 4f, -2f, -1, 48, 0f, false, false, false);
				}
			}
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) == 1)
			{
				if (!Global_44568)
				{
					iLocal_85 = 1;
				}
			}
			iLocal_95 = MISC::GET_GAME_TIMER();
			iLocal_96 = MISC::GET_GAME_TIMER();
			if (iLocal_90 == 1)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
				iLocal_90 = 0;
			}
			if (iLocal_93 != -1)
			{
				func_8(&iLocal_93);
			}
			iLocal_53 = 0;
		}
	}
}

int func_44()//Position - 0x18F7
{
	if (iLocal_52 != 0)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!Global_44568 && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 0;
	}
	if (func_48(0))
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	if (func_46())
	{
		return 0;
	}
	if (func_45())
	{
		return 0;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}

bool func_45()//Position - 0x19A6
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

bool func_46()//Position - 0x19BB
{
	return Global_100885.f_394 > 0;
}

bool func_47()//Position - 0x19CC
{
	return Global_75816;
}

int func_48(int iParam0)//Position - 0x19D8
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

void func_49()//Position - 0x1A2F
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (func_42(&Global_112841, &Global_112842, iLocal_98, iLocal_97))
	{
		bVar0 = false;
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 23 /*INPUT_ENTER*/))
		{
			bVar0 = true;
		}
		if (func_41(iLocal_95, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
			{
				if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FORGET_IT", 3))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
						if (iLocal_90 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							iLocal_90 = 0;
						}
						bVar0 = true;
					}
				}
			}
		}
		if (bVar0)
		{
			STREAMING::REQUEST_ANIM_DICT(&cLocal_268);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_268))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) < 8)
				{
					if (!func_54(0, 0))
					{
						bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar1)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
						func_52(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL", 34);
						if (bVar1)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
					}
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				if (func_51(Global_112841))
				{
					TASK::TASK_PLAY_ANIM(0, &cLocal_268, "Aknowledge_R", 8f, -4f, -1, 16785456, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, &cLocal_268, "Aknowledge_L", 8f, -4f, -1, 16785456, 0f, false, false, false);
				}
				TASK::TASK_VEHICLE_MISSION(0, Global_112841, Global_112841, 22, 12f, 262275, 3f, 3f, true);
				TASK::TASK_VEHICLE_MISSION(0, Global_112841, Global_112841, 5, 12f, 262275, 3f, 3f, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(Global_112842, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				func_50();
				iLocal_53 = 4;
			}
		}
	}
	else
	{
		func_5();
	}
}

void func_50()//Position - 0x1C13
{
	if (HUD::DOES_BLIP_EXIST(iLocal_91))
	{
		HUD::SET_BLIP_ROUTE(iLocal_91, false);
		HUD::REMOVE_BLIP(&iLocal_91);
	}
	if (func_39(Global_112841))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_91))
		{
			iLocal_91 = HUD::ADD_BLIP_FOR_ENTITY(Global_112841);
			HUD::SET_BLIP_SPRITE(iLocal_91, 198 /*RADAR_TAXI*/);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_91, "TXM_BLIP" /* GXT: Taxi */);
			HUD::SET_BLIP_FLASHES(iLocal_91, true);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_91, 10000);
		}
	}
}

int func_51(int iParam0)//Position - 0x1C71
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) };
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		Var9 = { Var3 - Var0 };
		Var12 = { Var6 - Var0 };
		if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var9.f_0, Var9.f_1, Var12.f_0, Var12.f_1) < 90f)
		{
			return 1;
		}
	}
	return 0;
}

void func_52(int iParam0, char* sParam1, int iParam2)//Position - 0x1CEC
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_53(iParam2), 1);
}

int func_53(int iParam0)//Position - 0x1D03
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_54(int iParam0, bool bParam1)//Position - 0x1EF3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0))
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_55())
	{
		func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::DOES_GROUP_EXIST(func_12()))
		{
			PED::GET_GROUP_SIZE(func_12(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = PED::GET_PED_AS_GROUP_MEMBER(func_12(), iVar2);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0))
						{
							func_56("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_55()//Position - 0x1FCE
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_56(char* sParam0)//Position - 0x1FF0
{
	func_57(sParam0);
}

void func_57(char* sParam0)//Position - 0x1FFE
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_58()//Position - 0x2011
{
	int iVar0;
	
	func_64();
	func_33();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
	{
		if (func_22(&iLocal_276, iLocal_98, iLocal_97))
		{
			if (func_44())
			{
				STREAMING::REQUEST_ANIM_DICT(&cLocal_268);
				if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_268))
				{
					if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FORGET_IT", 3))
					{
						if (!func_63(&iLocal_276))
						{
							if (!VEHICLE::IS_TAXI_LIGHT_ON(iLocal_276))
							{
								VEHICLE::SET_TAXI_LIGHTS(iLocal_276, true);
							}
						}
						if (iLocal_93 == -1)
						{
							func_62(&iLocal_93, 0, "TXM_H01" /* GXT: Press ~INPUT_CONTEXT~ to hail a taxi. */, 1, 0, 0, 0);
						}
						if (func_61(iLocal_93, 1))
						{
							if (func_7("TXM_H01" /* GXT: Press ~INPUT_CONTEXT~ to hail a taxi. */))
							{
								HUD::CLEAR_HELP(true);
							}
							if (iLocal_90 == 0)
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
								iLocal_90 = 1;
							}
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_276, 5000, 0, 2);
							func_60();
							func_59();
							iLocal_95 = MISC::GET_GAME_TIMER();
							func_8(&iLocal_93);
							if (func_63(&iLocal_276))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_276, false))
								{
									VEHICLE::SET_TAXI_LIGHTS(iLocal_276, false);
								}
								iLocal_86 = 0;
								iLocal_53 = 3;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_276, -1, false);
								if (func_28(&iLocal_276, &iVar0, 0))
								{
									iLocal_276 = 0;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_112841, 5000, 0, 2);
									Global_112878 = MISC::GET_GAME_TIMER();
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112841, false))
									{
										if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
										{
											CAM::SET_GAMEPLAY_VEHICLE_HINT(Global_112841, 0f, 0f, 0f, true, 4000, 2000, 2000);
											iLocal_86 = 1;
										}
									}
									Global_113810.f_10052.f_120 = 1;
									iLocal_53 = 2;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_59()//Position - 0x21C6
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
}

void func_60()//Position - 0x2209
{
	int iVar0;
	bool bVar1;
	struct<20> Var2;
	struct<22> Var24;
	int iVar46;
	int iVar47;
	
	bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	if (!Global_44568)
	{
		Var2.f_4 = 1065353216;
		Var2.f_5 = 1065353216;
		Var2.f_9 = 1065353216;
		Var2.f_10 = 1065353216;
		Var2.f_14 = 1065353216;
		Var2.f_15 = 1065353216;
		Var2.f_17 = 1040187392;
		Var2.f_18 = 1040187392;
		Var2.f_19 = -1;
		Var24.f_4 = 1065353216;
		Var24.f_5 = 1065353216;
		Var24.f_9 = 1065353216;
		Var24.f_10 = 1065353216;
		Var24.f_14 = 1065353216;
		Var24.f_15 = 1065353216;
		Var24.f_17 = 1040187392;
		Var24.f_18 = 1040187392;
		Var24.f_19 = -1;
		iVar46 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			Var24.f_0 = 1;
			Var24.f_2 = "FP_HAIL_TAXI";
			Var24.f_1 = "TAXI_HAIL";
			Var24.f_3 = 0f;
			Var24.f_4 = 1f;
			Var24.f_16 = MISC::GET_HASH_KEY("UpperbodyAndIk_filter");
			iVar46 += 16;
			iVar46 += 32;
			iVar46 += 8192;
			Var24.f_20 = iVar46;
			Var24.f_21 = 1024;
		}
		else
		{
			Var24.f_0 = 1;
			Var24.f_2 = "HAIL_TAXI";
			Var24.f_1 = "TAXI_HAIL";
			Var24.f_3 = 0f;
			Var24.f_4 = 1f;
			Var24.f_16 = MISC::GET_HASH_KEY("BONEMASK_HEAD_NECK_AND_L_ARM");
			iVar46 += 32;
			iVar46 += 8192;
			Var24.f_20 = iVar46;
		}
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar47, true);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (MISC::ARE_STRINGS_EQUAL(Var24.f_2, "FP_HAIL_TAXI") && iVar47 == joaat("WEAPON_PETROLCAN")))
		{
			if (iVar47 != joaat("WEAPON_PETROLCAN") || !MISC::ARE_STRINGS_EQUAL(Var24.f_2, "FP_HAIL_TAXI"))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_SWAP_WEAPON(0, false);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Var24, &Var2, &Var2, 0.25f, 0.25f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &Var24, &Var2, &Var2, 0.25f, 0.25f);
		}
	}
	else
	{
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
		}
		func_52(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL_DRUNK", 7);
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
		}
	}
}

int func_61(int iParam0, bool bParam1)//Position - 0x2449
{
	int iVar0;
	
	iVar0 = func_9(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_48(0))
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

void func_62(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x2501
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_8(iParam0);
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

int func_63(int iParam0)//Position - 0x262C
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 1, false);
		if (!iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (!PED::IS_PED_GROUP_MEMBER(iVar0, func_12()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*iParam0))
				{
					VEHICLE::SET_TAXI_LIGHTS(*iParam0, false);
				}
				return 1;
			}
		}
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 2, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 2, false);
		if (!iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (!PED::IS_PED_GROUP_MEMBER(iVar0, func_12()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*iParam0))
				{
					VEHICLE::SET_TAXI_LIGHTS(*iParam0, false);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_64()//Position - 0x26C3
{
	bool bVar0;
	
	if (iLocal_85)
	{
		if (func_41(iLocal_96, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
				{
					if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FORGET_IT", 3))
					{
						if (!Global_44568)
						{
							bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
							if (!bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
							}
							func_52(PLAYER::PLAYER_PED_ID(), "TAXI_DRIVES_PAST", 24);
							if (!bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
							}
						}
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
						if (iLocal_90 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							iLocal_90 = 0;
						}
						iLocal_85 = 0;
					}
				}
			}
		}
	}
}

void func_65()//Position - 0x27AD
{
	if (iLocal_51 != 0)
	{
		if (func_107())
		{
			func_13();
		}
	}
	if (iLocal_51 == 0)
	{
	}
	else if (iLocal_51 == 1)
	{
		func_99();
	}
	else if (iLocal_51 == 2)
	{
		func_74();
	}
	else if (iLocal_51 == 3)
	{
		func_66();
	}
}

void func_66()//Position - 0x27F3
{
	if (func_67())
	{
		if (iLocal_52 == 0 && iLocal_53 != 4)
		{
			func_5();
			if (func_28(&Local_54, &(Local_54.f_1), 0))
			{
				Global_112878 = 0;
				if (func_39(Global_112841))
				{
					VEHICLE::START_VEHICLE_HORN(Global_112841, 2500, MISC::GET_HASH_KEY("NORMAL"), false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_112842))
				{
					if (!PED::IS_PED_INJURED(Global_112842))
					{
						TASK::TASK_LOOK_AT_ENTITY(Global_112842, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_112842, 3000, 0, 2);
					}
				}
				func_50();
				iLocal_53 = 4;
				func_13();
			}
			else
			{
				func_13();
			}
		}
	}
}

int func_67()//Position - 0x2893
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_54.f_0, false) };
	if (!Local_54.f_2)
	{
		if (!Local_54.f_3)
		{
			if (func_68(Var0, Local_54.f_14, Local_54.f_6, &(Local_54.f_17), &(Local_54.f_6)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_54.f_1, false))
				{
					PED::SET_DRIVER_ABILITY(Local_54.f_1, 0.5f);
					if (Local_54.f_4)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_54.f_1, Local_54.f_0, Local_54.f_17, 10f, 0, ENTITY::GET_ENTITY_MODEL(Local_54.f_0), Local_54.f_29, 5f, MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_54.f_17, true));
						Local_54.f_4 = 0;
					}
					else
					{
						TASK::TASK_VEHICLE_PARK(Local_54.f_1, Local_54.f_0, Local_54.f_17, Local_54.f_6, 3, 90f, true);
					}
				}
				Local_54.f_2 = 1;
			}
		}
		else
		{
			PED::SET_DRIVER_ABILITY(Local_54.f_1, 0.5f);
			Local_54.f_17 = { Var0 };
			TASK::TASK_VEHICLE_TEMP_ACTION(Local_54.f_1, Local_54.f_0, 6, 15000);
			Local_54.f_2 = 1;
		}
	}
	else if (!func_19(Local_54.f_1, joaat("SCRIPT_TASK_VEHICLE_PARK")))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(Local_54.f_0))
		{
			TASK::TASK_VEHICLE_TEMP_ACTION(Local_54.f_1, Local_54.f_0, 1, 1000000);
			return 1;
		}
	}
	else
	{
		if (func_38(Var0, Local_272, 5f))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(Local_54.f_0) || VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Local_54.f_0))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(Local_54.f_1, Local_54.f_0, 1, 1000000);
				return 1;
			}
		}
		if (!Local_54.f_3)
		{
			if (!func_38(Var0, Local_54.f_17, 10f))
			{
				if (func_38(Var0, Local_272, 5f))
				{
					Local_54.f_14 = { Local_272 };
					Local_54.f_3 = 1;
					Local_54.f_2 = 0;
				}
			}
		}
	}
	return 0;
}

int func_68(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)//Position - 0x2A2B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	
	iVar10 = 1;
	if (!func_73(Param3))
	{
		iVar10 = 9;
	}
	iVar9 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param3, 1, iVar10, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar9))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar9, &Var0);
		if (PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, 0, &Var3) && PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, 1, &Var6))
		{
			Var11 = { Var3 - Var0 };
			Var14 = { -Var11.f_1, Var11.f_0, 0f };
			Var17 = { Param0 - Param3 };
			fVar20 = func_72(Var14, Var17);
			if (fVar20 < 0f)
			{
				*uParam7 = { Var3 };
				*uParam8 = uParam6;
				if (func_70(uParam7, Var0))
				{
					Local_54.f_4 = 1;
				}
			}
			else
			{
				*uParam7 = { Var6 };
				*uParam8 = (*uParam8 + 180f);
				*uParam8 = func_69(*uParam8, 0f, 360f);
				if (func_70(uParam7, Var0))
				{
					Local_54.f_4 = 1;
				}
			}
			return 1;
		}
		else if (PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, -1, &Var3))
		{
			*uParam7 = { Var3 };
			*uParam8 = uParam6;
			return 1;
		}
	}
	return 0;
}

float func_69(float fParam0, float fParam1, float fParam2)//Position - 0x2B48
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_70(var uParam0, struct<3> Param1)//Position - 0x2B8A
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, 1000f, &uVar0, false, false))
	{
		*uParam0 = { Param1 };
		return 0;
	}
	Var1 = { *uParam0, uParam0->f_1, uVar0 };
	if (func_71(Var1, Param1))
	{
		Var4 = { Param1 - Var1 / Vector(5f, 5f, 5f) };
		iVar7 = 1;
		while (iVar7 <= 5)
		{
			Var1 = { Var1 + Var4 };
			if (!func_71(Var1, Param1))
			{
				*uParam0 = { Var1 };
				return 1;
			}
			iVar7++;
		}
		*uParam0 = { Param1 };
		return 1;
	}
	return 0;
}

int func_71(struct<3> Param0, struct<3> Param3)//Position - 0x2C2A
{
	if ((Param0.f_2 - Param3.f_2) > 0.45f || (Param0.f_2 - Param3.f_2) < -0.45f)
	{
		return 1;
	}
	return 0;
}

float func_72(struct<3> Param0, struct<3> Param3)//Position - 0x2C5E
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_73(struct<3> Param0)//Position - 0x2C7F
{
	char* sVar0;
	
	sVar0 = ZONE::GET_NAME_OF_ZONE(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((MISC::ARE_STRINGS_EQUAL("SanAnd" /* GXT: San Andreas */, sVar0) || MISC::ARE_STRINGS_EQUAL("Alamo" /* GXT: Alamo Sea */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ArmyB" /* GXT: Fort Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BhamCa" /* GXT: Banham Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Baytre" /* GXT: Baytree Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradT" /* GXT: Braddock Tunnel */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradP" /* GXT: Braddock Pass */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CANNY" /* GXT: Raton Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CCreak" /* GXT: Cassidy Creek */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ChamH" /* GXT: Chamberlain Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CHU" /* GXT: Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("COSI" /* GXT: Countryside */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CMSW" /* GXT: Chiliad Mountain State Wilderness */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Cypre" /* GXT: Cypress Flats */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Desrt" /* GXT: Grand Senora Desert */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ELGorl" /* GXT: El Gordo Lighthouse */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galli" /* GXT: Galileo Park */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galfish" /* GXT: Galilee */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Harmo" /* GXT: Harmony */, sVar0)) || MISC::ARE_STRINGS_EQUAL("HumLab" /* GXT: Humane Labs and Research */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Jail" /* GXT: Bolingbroke Penitentiary */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LAct" /* GXT: Land Act Reservoir */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LDam" /* GXT: Land Act Dam */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Lago" /* GXT: Lago Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTChil" /* GXT: Mount Chiliad */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTJose" /* GXT: Mount Josiah */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTGordo" /* GXT: Mount Gordo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("NCHU" /* GXT: North Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Oceana" /* GXT: Pacific Ocean */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Palmpow" /* GXT: Palmer-Taylor Power Station */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PBluff" /* GXT: Pacific Bluffs */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Paleto" /* GXT: Paleto Bay */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalCov" /* GXT: Paleto Cove */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalFor" /* GXT: Paleto Forest */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalHigh" /* GXT: Palomino Highlands */, sVar0)) || MISC::ARE_STRINGS_EQUAL("RTRAK" /* GXT: Redwood Lights Track */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Rancho" /* GXT: Rancho */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SANDY" /* GXT: Sandy Shores */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaH" /* GXT: Tongva Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaV" /* GXT: Tongva Valley */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zenora" /* GXT: Senora Freeway */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Slab" /* GXT: Stab City */, sVar0)) || MISC::ARE_STRINGS_EQUAL("WindF" /* GXT: Ron Alternates Wind Farm */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zancudo" /* GXT: Zancudo River */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SanChia" /* GXT: San Chianski Mountain Range */, sVar0)) || MISC::ARE_STRINGS_EQUAL("zQ_UAR" /* GXT: Davis Quartz */, sVar0))
	{
		return 1;
	}
	return 0;
}

void func_74()//Position - 0x2F73
{
	if (func_75())
	{
		Local_54.f_2 = 0;
		iLocal_51 = 3;
	}
}

int func_75()//Position - 0x2F8A
{
	struct<3> Var0;
	
	if (!Local_54.f_2)
	{
		if (func_76(Local_54.f_20, &(Local_54.f_14), &(Local_54.f_6), &(Local_54.f_8), 250))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_54.f_1, Local_54.f_0, Local_54.f_14, 12f, 0, ENTITY::GET_ENTITY_MODEL(Local_54.f_0), Local_54.f_29, (Local_54.f_7 - 20f), 20f);
			Local_54.f_2 = 1;
		}
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_54.f_0, true) };
		if (func_38(Var0, Local_54.f_14, Local_54.f_7))
		{
			return 1;
		}
		else if (func_38(Var0, Local_272, 5f))
		{
			Local_54.f_14 = { Local_272 };
			return 1;
		}
		else if (!func_19(Local_54.f_1, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")))
		{
			Local_54.f_2 = 0;
			Local_54.f_8 = 0;
		}
	}
	return 0;
}

int func_76(struct<3> Param0, var* uParam3, float* fParam4, var uParam5, int iParam6)//Position - 0x3052
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0;
	iVar6 = *uParam5 + 2;
	iVar7 = 50;
	bVar8 = false;
	iVar9 = 1;
	if (!func_73(Param0))
	{
		iVar9 = 9;
	}
	func_97(Param0, Param0, &(Local_54.f_23), &(Local_54.f_26), iParam6);
	if (func_96(Local_54.f_23, Local_54.f_26))
	{
		if (!func_79(Param0, uParam3, fParam4, 1))
		{
			while (!bVar8 && *uParam5 < iVar6)
			{
				if (Param0.f_2 == 1f)
				{
					fVar0 = 0f;
				}
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, *uParam5, uParam3, fParam4, &uVar4, iVar9, fVar0, fVar1))
				{
					iVar5 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam3, 1, iVar9, 3f, 0f);
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar5))
					{
						fVar2 = (Param0.f_2 - uParam3->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (func_78(Param0, *uParam3) || fVar2 < 0.5f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_54.f_0, false))
							{
								iVar3 = Local_54.f_0;
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*uParam3, 3f, 3f, 3f, iVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam5++;
				if (*uParam5 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			Local_54.f_5 = func_77(Param0, *uParam3);
			return 1;
		}
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param3)//Position - 0x31B1
{
	struct<3> Var0;
	
	Var0 = { Param0 - Param3 };
	Var0.f_2 = 0f;
	return SYSTEM::VMAG(Var0);
}

int func_78(struct<3> Param0, struct<3> Param3)//Position - 0x31D3
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param3.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_56("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = SYSTEM::VDIST(Param0, Param3);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_56("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_79(struct<3> Param0, var uParam3, var uParam4, int iParam5)//Position - 0x3235
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4[6];
	int iVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	
	if (func_95(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam3 = { 1261.5804f, -3332.6846f, 5.4191f };
		*uParam4 = 163.87f;
		return 1;
	}
	else if (func_95(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam3 = { -1577.1599f, 5166.5103f, 19.1864f };
		*uParam4 = 0f;
		return 1;
	}
	else if (func_95(Param0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*uParam3 = { -856.6151f, 163.7361f, 65.093f };
		*uParam4 = 355.3355f;
		return 1;
	}
	else if (func_95(Param0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*uParam3 = { -15.5181f, -1456.3999f, 29.4244f };
		*uParam4 = 94.6893f;
		return 1;
	}
	else if (func_95(Param0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
	{
		*uParam3 = { 1996.3718f, 3818.8308f, 31.1612f };
		*uParam4 = 170.0221f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.218704f, -1086.951f, -100f, -10.545177f, -1106.8953f, 100f, 43.5f, false, true))
	{
		*uParam3 = { -63.5854f, -1074.732f, 26.0995f };
		*uParam4 = 324.1257f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 398.78986f, -1651.4174f, -100f, 423.83725f, -1619.4325f, 100f, 45f, false, true))
	{
		*uParam3 = { 416.871f, -1613.0814f, 28.1401f };
		*uParam4 = 227.9333f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -988.8535f, -2553.1775f, -100f, -1041.4865f, -2644.97f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -1039.5425f, -2574.467f, 12.7566f };
		*uParam4 = 162.2744f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -906.90204f, -2600.4607f, -100f, -959.76514f, -2692.0571f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam3 = { -911.1597f, -2676.1316f, 12.7567f };
		*uParam4 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -209.33719f, -2011.0995f, 26.620369f, -257.22247f, -2076.9631f, 36.620373f, 30f, false, true))
	{
		*uParam3 = { -211.8546f, -2030.7715f, 26.6204f };
		*uParam4 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		*uParam3 = { -623.3622f, 3996f, 120.7669f };
		*uParam4 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2203.1675f, 183.35495f, 167.40219f, -2311.5874f, 434.3828f, 195.46692f, 138.5f, false, true))
	{
		*uParam3 = { -2294.9446f, 376.2506f, 173.4669f };
		*uParam4 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2041.478f, -553.21594f, -0.089962f, -1787.0801f, -768.08856f, 37.999176f, 220f, false, true))
	{
		*uParam3 = { -1897.0765f, -557.3334f, 10.7279f };
		*uParam4 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1882.8832f, -541.7442f, 4.675224f, -1929.6265f, -598.6026f, 40.4298f, 35f, false, true))
		{
			return 1;
		}
		else
		{
			Var4[0 /*3*/] = { -1962.4679f, -503.4229f, 10.8349f };
			Var4[1 /*3*/] = { -1924.4722f, -534.7357f, 10.8181f };
			Var4[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var4[3 /*3*/] = { -1850.6611f, -595.8367f, 10.4649f };
			Var4[4 /*3*/] = { -1808.9995f, -632.1207f, 10.0016f };
			Var4[5 /*3*/] = { -1745.0428f, -694.4053f, 9.1245f };
			iVar23 = -1;
			fVar24 = 99999f;
			iVar26 = 0;
			while (iVar26 <= 5)
			{
				fVar25 = SYSTEM::VDIST(Var4[iVar26 /*3*/], Var1);
				if (fVar25 < fVar24)
				{
					fVar24 = fVar25;
					iVar23 = iVar26;
				}
				iVar26++;
			}
			*uParam3 = { Var4[iVar23 /*3*/] };
			if (iVar23 == 0)
			{
				*uParam4 = 234.3999f;
			}
			else if (iVar23 == 1)
			{
				*uParam4 = 232.2255f;
			}
			else if (iVar23 == 2)
			{
				*uParam4 = 228.2855f;
			}
			else if (iVar23 == 3)
			{
				*uParam4 = 231.4914f;
			}
			else if (iVar23 == 4)
			{
				*uParam4 = 230.6703f;
			}
			else if (iVar23 == 5)
			{
				*uParam4 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -446.12f, 1057.4515f, 318.61685f, -405.83362f, 1194.4865f, 337.09656f, 106.25f, false, true))
	{
		*uParam3 = { -411.3629f, 1174.5865f, 324.6421f };
		*uParam4 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1362.0906f, -29.26777f, -100f, -1377.9531f, 152.23888f, 100f, 50f, false, true))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { -1380.1006f, 95.1566f, 53.5054f };
				*uParam4 = 4.555f;
				break;
			
			case 2:
				*uParam3 = { -1379.1394f, 84.2472f, 53.0592f };
				*uParam4 = 6.9278f;
				break;
			
			case 3:
				*uParam3 = { -1378.4266f, 74.5077f, 52.6622f };
				*uParam4 = 2.6813f;
				break;
			
			case 4:
				*uParam3 = { -1384.1774f, 73.9207f, 52.7438f };
				*uParam4 = 5.542f;
				break;
			
			case 5:
				*uParam3 = { -1381.1179f, 35.7838f, 52.659f };
				*uParam4 = 7.6687f;
				break;
			
			case 6:
				*uParam3 = { -1383.7413f, 64.1491f, 52.6647f };
				*uParam4 = 2.5572f;
				break;
			
			case 7:
				*uParam3 = { -1382.6162f, 49.6876f, 52.6585f };
				*uParam4 = 3.0185f;
				break;
			
			default:
				*uParam3 = { -1383.2987f, 54.4598f, 52.6562f };
				*uParam4 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.6694f, 28.030502f, -12.123452f, -1112.0841f, 36.08567f, 60f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { 50.9889f, -1092.5254f, 28.2152f };
					*uParam4 = 150.8833f;
					break;
				
				case 2:
					*uParam3 = { 46.7725f, -1099.7506f, 28.1639f };
					*uParam4 = 149.4322f;
					break;
				
				case 3:
					*uParam3 = { 41.6146f, -1107.742f, 28.1318f };
					*uParam4 = 154.1378f;
					break;
				
				case 4:
					*uParam3 = { 38.1922f, -1113.3936f, 28.1507f };
					*uParam4 = 146.3778f;
					break;
				
				case 5:
					*uParam3 = { 13.0436f, -1124.7668f, 27.7359f };
					*uParam4 = 91.163f;
					break;
				
				case 6:
					*uParam3 = { 1.4336f, -1125.0425f, 27.1705f };
					*uParam4 = 91.0578f;
					break;
				
				case 7:
					*uParam3 = { -11.1811f, -1125.8105f, 26.3688f };
					*uParam4 = 91.866f;
					break;
				
				default:
					*uParam3 = { 21.9431f, -1124.5731f, 27.9417f };
					*uParam4 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
					*uParam4 = 148.7004f;
					break;
				
				case 2:
					*uParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
					*uParam4 = 148.7144f;
					break;
				
				case 3:
					*uParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
					*uParam4 = 150.0955f;
					break;
				
				case 4:
					*uParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
					*uParam4 = 149.5649f;
					break;
				
				case 5:
					*uParam3 = { -1050.578f, -2536.2185f, 19.0824f };
					*uParam4 = 150.7363f;
					break;
				
				case 6:
					*uParam3 = { -1036.0316f, -2510.902f, 19.0794f };
					*uParam4 = 147.2113f;
					break;
				
				case 7:
					*uParam3 = { -1044.4872f, -2525.5342f, 19.079f };
					*uParam4 = 150.7597f;
					break;
				
				default:
					*uParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
					*uParam4 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1044.7413f, -2528.786f, 12.7568f };
					*uParam4 = 150.9439f;
					break;
				
				case 2:
					*uParam3 = { -1050.7631f, -2539.4978f, 12.7566f };
					*uParam4 = 150.851f;
					break;
				
				case 3:
					*uParam3 = { -1054.9523f, -2546.8596f, 12.7566f };
					*uParam4 = 149.9285f;
					break;
				
				case 4:
					*uParam3 = { -1060.3972f, -2556.898f, 12.6066f };
					*uParam4 = 150.8244f;
					break;
				
				case 5:
					*uParam3 = { -1020.7437f, -2490.0842f, 12.6396f };
					*uParam4 = 148.6134f;
					break;
				
				case 6:
					*uParam3 = { -1076.9043f, -2589.1794f, 12.6858f };
					*uParam4 = 149.0112f;
					break;
				
				case 7:
					*uParam3 = { -1026.3866f, -2501.9521f, 12.6923f };
					*uParam4 = 149.7553f;
					break;
				
				default:
					*uParam3 = { -1070.5065f, -2578.3892f, 12.6932f };
					*uParam4 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -1067.8463f, -2708.9397f, 19.0588f };
					*uParam4 = 230.9025f;
					break;
				
				case 2:
					*uParam3 = { -1058.2238f, -2716.2166f, 19.06f };
					*uParam4 = 237.1285f;
					break;
				
				case 3:
					*uParam3 = { -1004.5667f, -2744.797f, 19.0811f };
					*uParam4 = 255.6885f;
					break;
				
				case 4:
					*uParam3 = { -1049.5092f, -2721.58f, 19.0546f };
					*uParam4 = 242.3581f;
					break;
				
				case 5:
					*uParam3 = { -1017.1544f, -2740.1174f, 19.0525f };
					*uParam4 = 243.5798f;
					break;
				
				case 6:
					*uParam3 = { -1042.0872f, -2726.0767f, 19.0452f };
					*uParam4 = 240.2381f;
					break;
				
				case 7:
					*uParam3 = { -1027.353f, -2734.4617f, 19.0509f };
					*uParam4 = 239.8703f;
					break;
				
				default:
					*uParam3 = { -1033.7404f, -2730.7458f, 19.0521f };
					*uParam4 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true))
		{
			iVar0 = (iParam5 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam3 = { -971.9154f, -2749.122f, 12.6069f };
					*uParam4 = 265.8022f;
					break;
				
				case 2:
					*uParam3 = { -980.6166f, -2748.535f, 12.757f };
					*uParam4 = 263.5472f;
					break;
				
				case 3:
					*uParam3 = { -987.6072f, -2747.2734f, 12.6069f };
					*uParam4 = 257.2886f;
					break;
				
				case 4:
					*uParam3 = { -1006.8151f, -2739.345f, 12.6334f };
					*uParam4 = 242.1315f;
					break;
				
				case 5:
					*uParam3 = { -1051.8304f, -2713.5527f, 12.6333f };
					*uParam4 = 239.9312f;
					break;
				
				case 6:
					*uParam3 = { -1041.0035f, -2719.6467f, 12.6402f };
					*uParam4 = 240.1081f;
					break;
				
				case 7:
					*uParam3 = { -1023.8323f, -2729.4646f, 12.6445f };
					*uParam4 = 239.6737f;
					break;
				
				default:
					*uParam3 = { -1012.8478f, -2735.1724f, 12.6656f };
					*uParam4 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 845.7216f, -990.7473f, 37.469604f, 846.3397f, -1066.8805f, 16.966232f, 90f, false, true))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 868.1039f, -995.9224f, 29.7369f };
				*uParam4 = 93.132f;
				break;
			
			case 2:
				*uParam3 = { 859.283f, -996.4102f, 28.7865f };
				*uParam4 = 92.2581f;
				break;
			
			case 3:
				*uParam3 = { 849.4288f, -997.1062f, 27.5347f };
				*uParam4 = 92.714f;
				break;
			
			case 4:
				*uParam3 = { 841.1268f, -997.4826f, 26.5744f };
				*uParam4 = 92.8628f;
				break;
			
			case 5:
				*uParam3 = { 831.2605f, -1009.556f, 25.599f };
				*uParam4 = 268.6186f;
				break;
			
			case 6:
				*uParam3 = { 844.6506f, -1010.0903f, 26.9894f };
				*uParam4 = 270.076f;
				break;
			
			case 7:
				*uParam3 = { 852.2498f, -1010.1324f, 27.8091f };
				*uParam4 = 269.722f;
				break;
			
			default:
				*uParam3 = { 861.4028f, -1010.0249f, 28.808f };
				*uParam4 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 767.3736f, -1077.4288f, -10.786545f, 682.82837f, -1080.6858f, 79.673035f, 60f, false, true))
	{
		iVar0 = (iParam5 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam3 = { 703.2726f, -1067.6997f, 21.4765f };
				*uParam4 = 181.3629f;
				break;
			
			case 2:
				*uParam3 = { 715.2089f, -1070.3993f, 21.2708f };
				*uParam4 = 175.43623f;
				break;
			
			case 3:
				*uParam3 = { 715.2911f, -1059.42f, 21.0876f };
				*uParam4 = 181.0347f;
				break;
			
			case 4:
				*uParam3 = { 709.6841f, -1086.78f, 21.419f };
				*uParam4 = 233.169f;
				break;
			
			case 5:
				*uParam3 = { 703.807f, -1057.8665f, 21.4152f };
				*uParam4 = 170.1609f;
				break;
			
			case 6:
				*uParam3 = { 708.1994f, -1048.1937f, 21.216f };
				*uParam4 = 134.2729f;
				break;
			
			case 7:
				*uParam3 = { 711.1124f, -1069.4229f, 21.3129f };
				*uParam4 = 177.9198f;
				break;
			
			default:
				*uParam3 = { 703.545f, -1078.7177f, 21.3987f };
				*uParam4 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_92(3, Var1))
	{
		if (func_91(Var1, 3, 0, 0))
		{
			*uParam3 = { -1520.1213f, 2731.511f, 16.6437f };
			*uParam4 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1535.9866f, -2041.497f, 68.21275f, 1529.3566f, -2204.4634f, 96.111946f, 105f, false, true))
	{
		*uParam3 = { 1540.75f, -2051.49f, 76.85f };
		*uParam4 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1185.8104f, -1768.3672f, 28.311447f, 1369.068f, -1701.4515f, 66.25389f, 70f, true, true))
	{
		if (func_90(Var1, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*uParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
			*uParam4 = 275.4274f;
			return 1;
		}
		if (func_90(Var1, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*uParam3 = { 1334.3861f, -1709.7625f, 55.70131f };
			*uParam4 = 275.4411f;
			return 1;
		}
		if (func_90(Var1, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*uParam3 = { 1246.1661f, -1750.6246f, 45.35691f };
			*uParam4 = 301.2981f;
			return 1;
		}
		if (func_90(Var1, 1196.2716f, -1753.0505f, 37.63976f, 32f))
		{
			*uParam3 = { 1196.2716f, -1753.0505f, 37.63976f };
			*uParam4 = 209.4354f;
			return 1;
		}
		*uParam3 = { 1283.3257f, -1731.5222f, 51.78555f };
		*uParam4 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_90(Var1, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			*uParam3 = { -1624.4452f, -976.9755f, 12.0175f };
			*uParam4 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		*uParam3 = { -1095.63f, -1577.24f, 3.82f };
		*uParam4 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
	{
		iVar0 = 3;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
		{
			case 0:
				*uParam3 = { 1369.246f, 1147.6527f, 112.7592f };
				*uParam4 = 182.0998f;
				break;
			
			case 1:
				*uParam3 = { 1360.8483f, 1139.121f, 112.7592f };
				*uParam4 = 83.3356f;
				break;
			
			case 2:
				*uParam3 = { 1364.7513f, 1154.3668f, 112.7592f };
				*uParam4 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1737.3901f, 3287.7954f, 35.13897f, 1724.3452f, 3337.854f, 57.200382f, 40f, false, true))
	{
		*uParam3 = { 1782.1903f, 3300.076f, 40.4593f };
		*uParam4 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -695.7981f, -1379.6785f, 24.481243f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*uParam3 = { -658.2056f, -1388.7886f, 9.499f };
		*uParam4 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(Var1, -75.59782f, -818.60815f, 325.1745f) < (58f * 58f))
	{
		*uParam3 = { -142.367f, -895.0251f, 28.191f };
		*uParam4 = 71.6555f;
		return 1;
	}
	if (!func_81())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_92(7, Var1))
		{
			if (func_91(Var1, 7, 0, 0))
			{
				*uParam3 = { -1012.3105f, -465.1634f, 36.1141f };
				*uParam4 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_92(2, Var1))
	{
		if (func_91(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
				{
					case 0:
						*uParam3 = { -979.95f, -2746.1086f, 12.7091f };
						*uParam4 = 91.4929f;
						break;
					
					case 1:
						*uParam3 = { -1025.1935f, -2728.2175f, 12.6647f };
						*uParam4 = 239.0041f;
						break;
					
					case 2:
						*uParam3 = { -1051.315f, -2713.0686f, 12.6676f };
						*uParam4 = 236.4666f;
						break;
					
					case 3:
						*uParam3 = { -1095.7417f, -2637.8713f, 12.6461f };
						*uParam4 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam5 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam3 = { -1023.9825f, -2489.8818f, 19.0755f };
						*uParam4 = 148.7004f;
						break;
					
					case 2:
						*uParam3 = { -1029.9678f, -2500.4377f, 19.0803f };
						*uParam4 = 148.7144f;
						break;
					
					case 3:
						*uParam3 = { -1070.5457f, -2570.8594f, 19.0836f };
						*uParam4 = 150.0955f;
						break;
					
					case 4:
						*uParam3 = { -1056.0647f, -2545.6619f, 19.0809f };
						*uParam4 = 149.5649f;
						break;
					
					case 5:
						*uParam3 = { -1050.578f, -2536.2185f, 19.0824f };
						*uParam4 = 150.7363f;
						break;
					
					case 6:
						*uParam3 = { -1036.0316f, -2510.902f, 19.0794f };
						*uParam4 = 147.2113f;
						break;
					
					case 7:
						*uParam3 = { -1044.4872f, -2525.5342f, 19.079f };
						*uParam4 = 150.7597f;
						break;
					
					default:
						*uParam3 = { -1064.5002f, -2560.6528f, 19.0905f };
						*uParam4 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var27 = { -509.5746f, 4938.9185f, 146.3271f };
	fVar30 = 232.0109f;
	fVar31 = func_80(Param0, Var27);
	Var32 = { 2450.6035f, 5129.2236f, 45.9722f };
	fVar35 = 241.1957f;
	fVar36 = func_80(Param0, Var32);
	Var1 = { Param0 };
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var27 };
		*uParam4 = fVar30;
		if (fVar36 < fVar31)
		{
			*uParam3 = { Var32 };
			*uParam4 = fVar35;
		}
		return 1;
	}
	bVar37 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true))
	{
		bVar37 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
	{
		bVar37 = true;
	}
	if (bVar37)
	{
		*uParam3 = { Var32 };
		*uParam4 = fVar35;
		if (fVar31 < fVar36)
		{
			*uParam3 = { Var27 };
			*uParam4 = fVar30;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_38(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			iVar0 = 2;
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
			{
				*uParam3 = { 29.5582f, -2553.587f, 5.0004f };
				*uParam4 = 253.9545f;
			}
			else
			{
				*uParam3 = { -189.6824f, -2531.6492f, 5.0031f };
				*uParam4 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 412.27902f, 6481.8677f, 25.808207f, 468.9353f, 6442.7524f, 45.607273f, 24f, false, true))
	{
		*uParam3 = { 445.231f, 6476.948f, 28.4862f };
		*uParam4 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true))
	{
		*uParam3 = { 498.185f, -1288.5354f, 28.1923f };
		*uParam4 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
	{
		*uParam3 = { 504.1738f, -1421.2511f, 28.2065f };
		*uParam4 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 951.1704f, -147.00467f, 71.54326f, 1005.24493f, -98.44745f, 95.626785f, 70f, false, true))
	{
		*uParam3 = { 961.3104f, -150.1964f, 73.4016f };
		*uParam4 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
	{
		*uParam3 = { 1118.7509f, 262.0209f, 79.8555f };
		*uParam4 = 52.3086f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 71.89022f, 1010.04596f, -91.566986f, 103.45676f, 180f, false, true))
	{
		*uParam3 = { 1134.0535f, 53.1835f, 79.7553f };
		*uParam4 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 191.87312f, -723.55304f, 40.235764f, 79.586555f, -687.6684f, 29.547338f, 85f, false, true))
	{
		iVar0 = 2;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
		{
			*uParam3 = { 182.6361f, -753.5836f, 31.8051f };
			*uParam4 = 162.0019f;
		}
		else
		{
			*uParam3 = { 81.5318f, -675.4875f, 30.5695f };
			*uParam4 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
	{
		*uParam3 = { -88.4f, -660.9f, 35f };
		*uParam4 = -20f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
	{
		*uParam3 = { 61.4f, -653.2f, 32f };
		*uParam4 = 160f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.2583f, 5.7109f, 10f, false, true))
	{
		*uParam3 = { 484.0132f, -3033.162f, 5.0717f };
		*uParam4 = 140.7302f;
		return 1;
	}
	return 0;
}

float func_80(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x5357
{
	return SYSTEM::VDIST2(Param0.f_0, Param0.f_1, 0f, Param3.f_0, Param3.f_1, 0f);
}

int func_81()//Position - 0x5371
{
	int iVar0;
	
	iVar0 = func_83();
	if (iVar0 == 0)
	{
		if (func_82(65))
		{
			return 1;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_82(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_82(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)//Position - 0x53D0
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113810.f_9088.f_99.f_58[iParam0];
}

int func_83()//Position - 0x53FD
{
	func_84();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_84()//Position - 0x5416
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_88(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_87(PLAYER::PLAYER_PED_ID());
			if (func_86(iVar0) && (!func_85(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_86(Global_113810.f_2366.f_539.f_4321))
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

bool func_85(int iParam0)//Position - 0x5513
{
	return Global_43377 == iParam0;
}

bool func_86(int iParam0)//Position - 0x5521
{
	return iParam0 < 3;
}

int func_87(int iParam0)//Position - 0x552D
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_88(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_88(int iParam0)//Position - 0x556A
{
	if (func_86(iParam0))
	{
		return func_89(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_89(int iParam0)//Position - 0x558F
{
	return Global_2058[iParam0 /*29*/];
}

bool func_90(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x559E
{
	struct<3> Var0;
	
	Var0 = { Param3 - Param0 };
	return ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= (fParam6 * fParam6);
}

int func_91(struct<3> Param0, int iParam3, int iParam4, bool bParam5)//Position - 0x55C8
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	bool bVar110;
	int iVar111;
	
	bVar110 = false;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			Var46[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			Var46[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			Var46[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			Var46[0 /*3*/] = { -1816.9539f, -2768.8933f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.7476f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			Var46[2 /*3*/] = { -1011.08105f, -3086.9038f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.0082f, -2616.2705f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.6105f, -2226.7634f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			Var46[5 /*3*/] = { -1136.9174f, -2617.9546f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			Var46[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			Var46[7 /*3*/] = { -1955.2982f, -3010.4314f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.2683f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			Var46[9 /*3*/] = { -1259.6486f, -3463.4863f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.7148f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			Var46[11 /*3*/] = { -1685.6256f, -2720.3635f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			Var46[12 /*3*/] = { -1110.1978f, -3493.6172f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			Var46[0 /*3*/] = { -2029.7765f, 2845.0833f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			Var46[1 /*3*/] = { -2009.1815f, 2879.8352f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			Var46[2 /*3*/] = { -2033.9279f, 3089.0488f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.7909f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			Var46[4 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			Var46[5 /*3*/] = { -2191.5444f, 3150.4165f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			Var46[6 /*3*/] = { -2715.8708f, 3269.9155f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			Var46[7 /*3*/] = { -1977.5688f, 3330.8882f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.4412f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			Var46[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			Var46[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			fVar92[10] = 140f;
			Var0[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			Var46[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			Var46[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.5753f, 2535.0596f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			Var46[1 /*3*/] = { 1716.9603f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			Var46[2 /*3*/] = { 1650.0776f, 2515.9226f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			Var46[3 /*3*/] = { 1698.5546f, 2460.2078f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			Var46[4 /*3*/] = { 1718.8477f, 2589.1616f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			Var46[5 /*3*/] = { 1774.8124f, 2679.4187f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			Var46[6 /*3*/] = { 1657.2083f, 2595.4844f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.1647f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.8551f, 2705.0369f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			Var46[9 /*3*/] = { 1783.1143f, 2606.7832f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.1936f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.8008f, 3694.3618f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			Var46[2 /*3*/] = { 3650.9143f, 3766.1516f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			Var46[0 /*3*/] = { 523.22894f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			Var46[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			Var46[0 /*3*/] = { -1187.8108f, -477.50366f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			Var46[1 /*3*/] = { -1215.7959f, -464.82806f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			Var46[2 /*3*/] = { -1013.3932f, -475.20575f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.3325f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			Var46[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			Var46[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			Var46[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			Var46[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], bVar110, true))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

bool func_92(int iParam0, struct<3> Param1)//Position - 0x631C
{
	return SYSTEM::VDIST2(Param1, func_94(iParam0)) < func_93(iParam0);
}

float func_93(int iParam0)//Position - 0x6339
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_94(int iParam0)//Position - 0x63D1
{
	switch (iParam0)
	{
		case 1:
			return -1155.8766f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.6664f, 2586.2612f, 51.4925f;
			break;
		
		case 5:
			return 3525.0576f, 3711.3232f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.9612f, 5.0696f;
			break;
		
		case 7:
			return -1142.4111f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_95(struct<3> Param0, struct<3> Param3, struct<3> Param6)//Position - 0x64BB
{
	if (((((Param0.f_0 > Param3.f_0 && Param0.f_0 < Param6.f_0) && Param0.f_1 > Param3.f_1) && Param0.f_1 < Param6.f_1) && Param0.f_2 > Param3.f_2) && Param0.f_2 < Param6.f_2)
	{
		return 1;
	}
	return 0;
}

int func_96(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x6512
{
	if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Param0.f_0, Param0.f_1, Param3.f_0, Param3.f_1))
	{
		return 1;
	}
	return 0;
}

void func_97(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, var uParam6, var uParam7, int iParam8)//Position - 0x6532
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param3.f_0 <= Param0.f_0)
	{
		Var0.f_0 = Param3.f_0;
		Var3.f_0 = Param0.f_0;
	}
	else
	{
		Var0.f_0 = Param0.f_0;
		Var3.f_0 = Param3.f_0;
	}
	if (Param3.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param3.f_1;
		Var3.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var3.f_1 = Param3.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	Var3 = { Var3 + Vector(IntToFloat(iParam8), IntToFloat(iParam8), IntToFloat(iParam8)) };
	if (!func_98(Var0, *uParam6, 1056964608, 0) || !func_98(Var0, *uParam6, 1056964608, 0))
	{
		*uParam6 = { Var0 };
		*uParam7 = { Var3 };
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(*uParam6, uParam6->f_1, *uParam7, uParam7->f_1);
}

int func_98(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x65FD
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_99()//Position - 0x6678
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_41(Local_54.f_9, 10000))
		{
			STREAMING::REQUEST_MODEL(iLocal_98);
			STREAMING::REQUEST_MODEL(iLocal_97);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_98))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_97))
				{
					if (func_73(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (Local_54.f_10 < 2)
						{
							iVar4 = 0;
						}
						else if (Local_54.f_10 < 5)
						{
							iVar4 = 9;
						}
						else
						{
							iVar4 = 1;
						}
					}
					else if (Local_54.f_10 < 5)
					{
						iVar4 = 0;
					}
					else
					{
						iVar4 = 9;
					}
					if (func_101(&Var0, &fVar3, &(Local_54.f_8), iVar4, 1103626240))
					{
						MISC::CLEAR_AREA(Var0, 5f, true, false, false, false);
						if (func_100(&Local_54, &(Local_54.f_1), Var0, fVar3))
						{
							Local_54.f_5 = func_77(ENTITY::GET_ENTITY_COORDS(Local_54.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
							Local_54.f_2 = 0;
							Local_54.f_8 = 0;
							iLocal_51 = 2;
						}
					}
					else if (Local_54.f_8 >= 5)
					{
						Local_54.f_10++;
						if (Local_54.f_10 > 10)
						{
							func_13();
						}
						else
						{
							Local_54.f_8 = 0;
							Local_54.f_9 = (MISC::GET_GAME_TIMER() - 9000);
						}
					}
				}
			}
		}
	}
}

int func_100(var uParam0, var uParam1, struct<3> Param2, float fParam5)//Position - 0x6799
{
	STREAMING::REQUEST_MODEL(func_147());
	STREAMING::REQUEST_MODEL(func_146());
	if (STREAMING::HAS_MODEL_LOADED(func_146()))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_147()))
		{
			*uParam0 = VEHICLE::CREATE_VEHICLE(func_146(), Param2, fParam5, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
					VEHICLE::SET_TAXI_LIGHTS(*uParam0, true);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(*uParam0, true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, false, 0);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*uParam0, true);
					*uParam1 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 25, func_147(), -1, true, true);
					if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
					{
						if (!PED::IS_PED_INJURED(*uParam1))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(*uParam0, 5f);
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam1))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam1, true, false);
							}
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
							PED::SET_PED_CONFIG_FLAG(*uParam1, 251, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 5, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 17, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*uParam1, 512, false);
							AUDIO::SET_AMBIENT_VOICE_NAME(*uParam1, "A_M_M_EASTSA_02_LATINO_FULL_01");
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_146());
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_147());
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_101(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x68C6
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	var uVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	int iVar25;
	struct<3> Var26;
	
	fVar9 = 0f;
	iVar11 = 1;
	if (iParam3 == 0)
	{
		iVar11 = 0;
	}
	bVar12 = false;
	iVar13 = 0;
	fVar14 = 100f;
	fVar15 = 2.5f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var26 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iVar25 = func_106(Var26);
		if (iVar25 != 6)
		{
			if (func_105(Var26, iVar25, uParam0, uParam1))
			{
				return 1;
			}
		}
		else if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var26, *uParam2, &Var0, &fVar9, &uVar10, iParam3, fVar14, fVar15))
		{
			while (!bVar12 && iVar13 < 5)
			{
				if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var0, &Var3, &Var6, 0f, 180f, iParam4, iVar11, 1, 0))
				{
					fVar9 = func_104(0f, 0f, 0f, Var6, 1);
					if (func_102(Var26, Var3, 1133903872, 1101004800))
					{
						bVar12 = true;
						Var16 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, fVar9, 0f, 1f, 0f) };
						Var19 = { Var16 - Var3 };
						Var22 = { Var0 - Var3 };
						if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var19.f_0, Var19.f_1, Var22.f_0, Var22.f_1) > 60f)
						{
							fVar9 = (fVar9 + 180f);
							fVar9 = func_69(fVar9, 0f, 360f);
						}
						*uParam0 = { Var3 };
						*uParam1 = fVar9;
						return 1;
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			*uParam2++;
		}
		else
		{
			*uParam2++;
		}
	}
	return 0;
}

int func_102(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x6A3A
{
	float fVar0;
	
	fVar0 = SYSTEM::VDIST2(Param0, Param3);
	if (fVar0 >= (fParam6 * fParam6))
	{
		return 0;
	}
	if (fVar0 <= (fParam7 * fParam7))
	{
		return 0;
	}
	if (CAM::IS_SPHERE_VISIBLE(Param3, 2.5f))
	{
		return 0;
	}
	if (MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(Param3, 3f, 3f, 3f, 0))
	{
		return 0;
	}
	if (func_103(Param3, 0))
	{
		return 0;
	}
	return 1;
}

int func_103(struct<3> Param0, bool bParam3)//Position - 0x6AA6
{
	if (func_38(Param0, -1144.4973f, 43.01712f, 51.94447f, 325f))
	{
		if (func_91(Param0, 1, 0, 0))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.7686f, 29.526155f, 49.56616f, -1336.5266f, 121.03514f, 75.61888f, 18f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1360.0197f, 110.13066f, 52.634132f, -1365.276f, 172.06244f, 72.01312f, 52f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1363.0066f, 170.53304f, 50.00813f, -1296.9033f, 178.81332f, 73.37104f, 35f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1197.5212f, 199.86429f, 57.04471f, -1298.0396f, 176.13841f, 73.33252f, 34f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1103.7449f, 221.13667f, 55.34814f, -1208.3938f, 191.09093f, 79.137085f, 45f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -989.03284f, -89.39376f, 32.48801f, -1086.2109f, -115.70765f, 50.650505f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -958.5481f, -111.54555f, 30.764324f, -1132.6853f, 190.78412f, 73.903656f, 70f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1077.0282f, -139.7337f, 38.733883f, -1299.5559f, -15.168939f, 63.437103f, 20f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1319.7686f, 29.526155f, 47.56616f, -1287.6193f, -24.88864f, 67.5273f, 20f, false, true))
		{
			return 1;
		}
	}
	if (func_92(2, Param0))
	{
		if (func_91(Param0, 2, 0, 0))
		{
			return 1;
		}
	}
	if (func_92(3, Param0))
	{
		if (func_91(Param0, 3, 0, 0))
		{
			return 1;
		}
	}
	if (func_92(4, Param0))
	{
		if (func_91(Param0, 4, 0, 0))
		{
			return 1;
		}
	}
	if (func_92(5, Param0))
	{
		if (func_91(Param0, 5, 0, 0))
		{
			return 1;
		}
	}
	if (func_92(6, Param0))
	{
		if (func_91(Param0, 6, 0, 0))
		{
			return 1;
		}
	}
	if (!func_81())
	{
		if (func_92(7, Param0))
		{
			if (func_91(Param0, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	if (func_92(8, Param0))
	{
		if (func_91(Param0, 8, 0, 0))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2591.6265f, -268.89395f, 111.88586f, 2591.331f, -614.43555f, 55.369205f, 70f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1112.5862f, -2674.7668f, 12.568037f, -1215.4681f, -2854.5886f, 19.445877f, 41.25f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
	{
		return 1;
	}
	if (((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
	{
		return 1;
	}
	if (func_38(Param0, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1171.7086f, -1524.6598f, 23.379686f, -1139.7214f, -1573.589f, -1.585432f, 55f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
		{
			return 1;
		}
	}
	return 0;
}

float func_104(struct<2> Param0, float fParam2, struct<2> Param3, var uParam5, int iParam6)//Position - 0x7120
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_105(struct<3> Param0, int iParam3, var uParam4, var uParam5)//Position - 0x7185
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 0)
	{
		iVar4 = 0;
		iVar5 = 5;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -883.8992f, 76.3237f, 50.9372f };
				fVar3 = 271.8234f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -838.2045f, 88.1067f, 51.3396f };
				fVar3 = 102.3721f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -884.0715f, 217.2857f, 71.7633f };
				fVar3 = 254.5437f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -834.0018f, 217.2782f, 73.154f };
				fVar3 = 80.7037f;
			}
			else if (iVar4 == 4)
			{
				Var0 = { -830.9222f, 135.3548f, 58.1352f };
				fVar3 = 92.957f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 1)
	{
		iVar4 = 0;
		iVar5 = 6;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -1587.0962f, -928.5875f, 14.3046f };
				fVar3 = 139.9023f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -1532.4579f, -863.667f, 21.6188f };
				fVar3 = 139.9028f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -1472.8877f, -733.0396f, 24.0746f };
				fVar3 = 236.3756f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -1397.3027f, -781.1235f, 19.3347f };
				fVar3 = 48.1876f;
			}
			else if (iVar4 == 4)
			{
				Var0 = { -1605.4087f, -1012.5778f, 12.0175f };
				fVar3 = 51.1191f;
			}
			else if (iVar4 == 5)
			{
				Var0 = { -1572.4573f, -1007.1061f, 12.0184f };
				fVar3 = 141.2024f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 2)
	{
		iVar4 = 0;
		iVar5 = 4;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -1126.5519f, -1530.5911f, 3.294f };
				fVar3 = 214.5477f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -1043.0194f, -1644.1719f, 3.4894f };
				fVar3 = 35.3163f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -1039.3455f, -1532.5812f, 4.1467f };
				fVar3 = 32.1734f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -1067.5765f, -1501.944f, 4.0327f };
				fVar3 = 216.1659f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 3)
	{
		iVar4 = 0;
		iVar5 = 4;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -1247.2906f, 2549.53f, 16.4214f };
				fVar3 = 137.1185f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -1314.11f, 2470.677f, 23.3185f };
				fVar3 = 309.2187f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -1095.3818f, 2686.4868f, 18.5919f };
				fVar3 = 130.0954f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -1373.5143f, 2429.944f, 26.7492f };
				fVar3 = 298.9626f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 4)
	{
		iVar4 = 0;
		iVar5 = 5;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { 1299.198f, 1164.3418f, 105.3728f };
				fVar3 = 3.1765f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { 1304.8314f, 1084.5979f, 104.6453f };
				fVar3 = 8.2195f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { 1290.8727f, 1237.6844f, 107.4217f };
				fVar3 = 186.5802f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { 1310.9749f, 1001.1377f, 104.9354f };
				fVar3 = 359.3654f;
			}
			else if (iVar4 == 4)
			{
				Var0 = { 1284.9357f, 1355.7482f, 103.4301f };
				fVar3 = 182.4582f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	else if (iParam3 == 5)
	{
		iVar4 = 0;
		iVar5 = 5;
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			if (iVar4 == 0)
			{
				Var0 = { -1208.6174f, -1410.7325f, 3.1853f };
				fVar3 = 215.8772f;
			}
			else if (iVar4 == 1)
			{
				Var0 = { -1172.9f, -1412.3802f, 3.6078f };
				fVar3 = 126.9322f;
			}
			else if (iVar4 == 2)
			{
				Var0 = { -1112.8418f, -1437.8954f, 4.031f };
				fVar3 = 211.4814f;
			}
			else if (iVar4 == 3)
			{
				Var0 = { -1079.8854f, -1472.8779f, 4.0784f };
				fVar3 = 32.9476f;
			}
			else if (iVar4 == 4)
			{
				Var0 = { -1086.7677f, -1540.7067f, 3.5549f };
				fVar3 = 128.3527f;
			}
			if (func_102(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam4 = { Var0 };
				*uParam5 = fVar3;
				return 1;
			}
			iVar4++;
		}
	}
	return 0;
}

int func_106(struct<3> Param0)//Position - 0x7738
{
	if (func_95(Param0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		return 0;
	}
	if (func_90(Param0, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		return 2;
	}
	if (func_92(3, Param0))
	{
		if (func_91(Param0, 3, 0, 0))
		{
			return 3;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
	{
		return 4;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1171.7086f, -1524.6598f, 23.379686f, -1139.7214f, -1573.589f, -1.585432f, 55f, false, true))
	{
		return 5;
	}
	return 6;
}

int func_107()//Position - 0x78E3
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	if (!func_38(Local_272, Local_54.f_20, 100f))
	{
		return 1;
	}
	if (func_87(PLAYER::PLAYER_PED_ID()) != Local_54.f_30)
	{
		return 1;
	}
	if (iLocal_53 == 4)
	{
		return 1;
	}
	if (iLocal_51 == 2 || iLocal_51 == 3)
	{
		if (!func_37(Local_54.f_1))
		{
			return 1;
		}
		if (!func_39(Local_54.f_0))
		{
			return 1;
		}
		if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_1, Local_54.f_0))
		{
			return 1;
		}
		if (PED::IS_PED_FLEEING(Local_54.f_1))
		{
			return 1;
		}
		if (PED::IS_PED_IN_COMBAT(Local_54.f_1, 0))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_54.f_0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_54.f_1, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_54.f_0, false) };
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, false))
		{
			return 1;
		}
		fVar3 = 15f;
		Var4 = { Var0 };
		Var7 = { Var4 };
		Var4.f_0 = (Var4.f_0 - fVar3);
		Var4.f_1 = (Var4.f_1 - fVar3);
		Var4.f_2 = (Var4.f_2 - fVar3);
		Var7.f_0 = (Var7.f_0 + fVar3);
		Var7.f_1 = (Var7.f_1 + fVar3);
		Var7.f_2 = (Var7.f_2 + fVar3);
		if (MISC::IS_PROJECTILE_IN_AREA(Var4, Var7, true))
		{
			return 1;
		}
		if (func_38(Local_272, Var0, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_54.f_0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_54.f_0))
			{
				return 1;
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_108()//Position - 0x7A71
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	var uVar19[12];
	
	if (iLocal_52 == 0)
	{
		if (func_41(iLocal_94, 500))
		{
			iVar1 = -1;
			iVar2 = -1;
			iVar5 = 0;
			fVar7 = -99999f;
			if (iLocal_53 != 0 && iLocal_53 != 1)
			{
				iLocal_88 = 0;
			}
			if (iLocal_88)
			{
				iVar0 = 3;
				fVar8 = 35f;
			}
			else
			{
				iVar0 = 1;
				fVar8 = 10f;
			}
			iVar3 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar19);
			if (iVar3 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= (iVar3 - 1))
				{
					if (iVar5 < iVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uVar19[iVar4]))
						{
							if (ENTITY::GET_ENTITY_MODEL(uVar19[iVar4]) == iLocal_98)
							{
								Var9 = { ENTITY::GET_ENTITY_COORDS(uVar19[iVar4], false) };
								fVar12 = SYSTEM::VDIST2(Local_272, Var9);
								if (fVar12 <= (fVar8 * fVar8))
								{
									if (func_22(&(uVar19[iVar4]), iLocal_98, iLocal_97))
									{
										if (iVar2 == -1)
										{
											iVar2 = iVar4;
										}
										if (iLocal_88)
										{
											if (uVar19[iVar4] != Global_112841)
											{
												if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar19[iVar4]) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
												{
													fVar6 = 1f;
													fVar12 = (fVar12 / fVar12);
													fVar12 = (fVar12 - 35f);
													fVar12 = (fVar12 * -1f);
													fVar12 = (fVar12 / 35f);
													fVar12 = (fVar12 * 0.5f);
													fVar12 = (fVar12 + 0.5f);
													fVar6 = (fVar6 * fVar12);
													fVar12 = (Local_272.f_2 - Var9.f_2);
													if (fVar12 < 0f)
													{
														fVar12 = (fVar12 * -1f);
													}
													if (fVar12 < 4f)
													{
														Var13 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
														Var16 = { Var9 - Local_272 };
														if (((Var13.f_0 * Var16.f_0) + (Var13.f_1 * Var16.f_1)) / SYSTEM::VDIST(Var16, 0f, 0f, 0f)) > SYSTEM::COS(120f)
														{
															if (CAM::IS_SPHERE_VISIBLE(Var9, 2f))
															{
																fVar6 = (fVar6 * 0.5f);
															}
															if (func_63(&(uVar19[iVar4])))
															{
																fVar6 = (fVar6 * 0.2f);
															}
															if (!ENTITY::IS_ENTITY_UPRIGHT(uVar19[iVar4], 90f) || ENTITY::IS_ENTITY_IN_WATER(uVar19[iVar4]))
															{
																fVar6 = 0f;
															}
															if (fVar6 > fVar7)
															{
																fVar7 = fVar6;
																iVar1 = iVar4;
															}
														}
													}
												}
											}
										}
										iVar5++;
									}
								}
								else
								{
									iVar4 = iVar3;
								}
							}
						}
						else
						{
							iVar4 = iVar3;
						}
					}
					else
					{
						iVar4 = iVar3;
					}
					iVar4++;
				}
			}
			if (iVar2 == -1)
			{
				func_109(&iLocal_275, 0);
				iLocal_275 = 0;
			}
			else if (iLocal_275 != uVar19[iVar2])
			{
				func_109(&iLocal_275, 0);
				iLocal_275 = uVar19[iVar2];
				func_109(&iLocal_275, 1);
			}
			if (iLocal_88)
			{
				if (iVar1 == -1)
				{
					iLocal_276 = 0;
				}
				else
				{
					iLocal_276 = uVar19[iVar1];
				}
				iLocal_88 = 0;
			}
			else
			{
				iLocal_88 = 1;
			}
			iLocal_94 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

void func_109(int iParam0, bool bParam1)//Position - 0x7D0D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_MODEL(iVar0, func_147()))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 251, bParam1);
					}
				}
			}
		}
	}
}

void func_110()//Position - 0x7D5F
{
	if (iLocal_53 == 2 || iLocal_53 == 3)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_268, "FP_HAIL_TAXI", 3))
		{
			func_59();
		}
	}
}

int func_111()//Position - 0x7DA3
{
	if (!func_3())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

void func_112()//Position - 0x7DD8
{
	if (iLocal_50 == 0)
	{
		if (func_143(131))
		{
			if (func_141(func_83()))
			{
				func_140();
				func_139(&uLocal_99, 0, PLAYER::PLAYER_PED_ID(), sLocal_264, 0, 1);
				func_139(&uLocal_99, 1, 0, "TaxiDispatch", 0, 1);
				if (func_133())
				{
					if (func_132(&uLocal_99, 131, "TAXISAU", sLocal_265, sLocal_265, "TX_2", "TX_2", sLocal_266, sLocal_266, 2, 1, 0, 0, 0))
					{
						iLocal_89 = 0;
						iLocal_50 = 2;
					}
				}
				else if (func_118(&uLocal_99, 131, "TAXISAU", sLocal_265, sLocal_265, "TX_2A", "TX_2A", 2, 1, 0, 0, 0))
				{
					iLocal_50 = 1;
				}
			}
		}
	}
	else if (iLocal_50 == 1)
	{
		if (func_117())
		{
			iLocal_50 = 0;
		}
	}
	else if (iLocal_50 == 2)
	{
		if (func_117())
		{
			if (func_116())
			{
				if (!iLocal_89)
				{
					iLocal_50 = 0;
				}
			}
			else if (func_115())
			{
				if (!iLocal_89)
				{
					iLocal_50 = 0;
				}
			}
			if (iLocal_50 != 0)
			{
				if (!func_114(19))
				{
					func_113(19);
				}
				func_13();
				Local_54.f_9 = MISC::GET_GAME_TIMER();
				Local_54.f_20 = { Local_272 };
				Local_54.f_30 = func_87(PLAYER::PLAYER_PED_ID());
				Local_54.f_8 = 0;
				Local_54.f_10 = 0;
				iLocal_51 = 1;
				iLocal_50 = 0;
			}
		}
		else if (!iLocal_89)
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1)
			{
				iLocal_89 = 1;
			}
		}
	}
}

void func_113(int iParam0)//Position - 0x7F1C
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

int func_114(int iParam0)//Position - 0x7F5E
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

int func_115()//Position - 0x7F9E
{
	if (Global_20485)
	{
		return 1;
	}
	return 0;
}

int func_116()//Position - 0x7FB4
{
	if (Global_21894 == 1 || Global_22861 == 1)
	{
		return 1;
	}
	return 0;
}

int func_117()//Position - 0x7FD7
{
	if (Global_21845 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_118(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x7FEE
{
	var uVar0;
	var uVar11;
	
	func_131(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_130();
	if (iParam8 == 1)
	{
		Global_21857 = 1;
	}
	else
	{
		Global_21857 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_128(2, &uVar0, &uVar11, sParam3, sParam4, sParam5, sParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_119(&uVar0, &uVar11, iParam7, bParam11);
}

int func_119(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x804F
{
	int iVar0;
	
	Global_21846 = 0;
	if (Global_21845 == 0 || Global_21847 == 2)
	{
		if (Global_21845 != 0)
		{
			if (iParam2 > Global_21847)
			{
				if (bParam3 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20500.f_1 = 3;
					Global_21845 = 0;
					Global_21846 = 1;
					Global_21898 = 0;
					Global_21841 = 0;
					Global_21842 = 0;
				}
				else
				{
					func_127();
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
		if (func_126(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_125();
		Global_21134 = { Global_21299 };
		Global_21851 = Global_21852;
		Global_21858 = Global_21859;
		Global_2883586 = Global_2883585;
		Global_21860 = { Global_21876 };
		Global_21853 = Global_21854;
		Global_22835 = Global_22836;
		Global_22843 = { Global_22849 };
		Global_22841 = Global_22842;
		Global_22837 = Global_22838;
		Global_22839 = Global_22840;
		Global_21464.f_368 = Global_22832;
		Global_21464.f_369 = Global_22833;
		Global_21464.f_370 = Global_22834;
		Global_21841 = Global_21842;
		Global_21843 = Global_21844;
		if (Global_22103 == 0)
		{
			Global_21999[0 /*6*/] = { Global_22025[0 /*6*/] };
			Global_21999[1 /*6*/] = { Global_22025[1 /*6*/] };
			Global_22051[0 /*6*/] = { Global_22077[0 /*6*/] };
			Global_22051[1 /*6*/] = { Global_22077[1 /*6*/] };
			Global_22012[0 /*6*/] = { Global_22038[0 /*6*/] };
			Global_22012[1 /*6*/] = { Global_22038[1 /*6*/] };
			Global_22064[0 /*6*/] = { Global_22090[0 /*6*/] };
			Global_22064[1 /*6*/] = { Global_22090[1 /*6*/] };
		}
		if (Global_21851)
		{
			MISC::CLEAR_BIT(&Global_8370, 20);
			MISC::CLEAR_BIT(&Global_8371, 17);
			MISC::CLEAR_BIT(&Global_8372, 0);
			if (bParam3)
			{
				func_124();
				if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
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
				if (func_123())
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
					if (Global_22103 == 0)
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
			}
			if (func_122())
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
			}
			func_121();
			Global_21855 = bParam3;
		}
		Global_21847 = iParam2;
		if (Global_21841 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_21841)
			{
				StringCopy(&(Global_21464.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_21464.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_20711 = 0;
		func_120();
		return 1;
	}
	if (Global_21845 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_21847 || iParam2 == Global_21847)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_127();
	}
	return 0;
}

void func_120()//Position - 0x83BA
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

void func_121()//Position - 0x83EC
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

int func_122()//Position - 0x8481
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_123()//Position - 0x84A8
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

void func_124()//Position - 0x8541
{
	if (func_85(14))
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
		Global_20500 = func_83();
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

void func_125()//Position - 0x85E3
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

bool func_126(int iParam0, int iParam1)//Position - 0x863B
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

void func_127()//Position - 0x8673
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

void func_128(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x86CA
{
	func_129(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_129(var uParam0)//Position - 0x873A
{
	Global_21842 = uParam0;
	Global_21852 = 1;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22842 = 0;
	Global_2883585 = 0;
}

void func_130()//Position - 0x8760
{
	Global_21893 = 0;
	Global_21852 = 1;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_21859 = 0;
	Global_22842 = 0;
	Global_21850 = 0;
	Global_21897 = 0;
	Global_21899 = 0;
	Global_2883585 = 0;
}

void func_131(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8799
{
	Global_21299 = { *uParam0 };
	Global_7686 = uParam1;
	StringCopy(&Global_21915, sParam2, 24);
	Global_22834 = iParam5;
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

bool func_132(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)//Position - 0x87EF
{
	var uVar0;
	var uVar11;
	
	func_131(uParam0, iParam1, sParam2, iParam11, iParam12, 0);
	func_130();
	if (iParam10 == 1)
	{
		Global_21857 = 1;
	}
	else
	{
		Global_21857 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_128(3, &uVar0, &uVar11, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_119(&uVar0, &uVar11, iParam9, bParam13);
}

int func_133()//Position - 0x8850
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	if (iLocal_51 != 0)
	{
		return 0;
	}
	if (iLocal_53 == 4 || iLocal_53 == 2)
	{
		return 0;
	}
	if (iLocal_52 != 0)
	{
		return 0;
	}
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_267))
	{
		return 0;
	}
	if (!func_111())
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			return 0;
		}
	}
	func_134();
	fVar3 = 50f;
	iVar4 = 1;
	if (!func_73(Local_272))
	{
		iVar4 = 9;
	}
	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(Local_272, &Var0, iVar4, 100f, 2.5f))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, fVar3, fVar3, 20f, false, true, 0))
	{
		return 0;
	}
	if (func_103(Local_272, 1))
	{
		return 0;
	}
	return 1;
}

int func_134()//Position - 0x892C
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = func_83();
		if (func_86(bVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar4 = 0;
			while (iVar4 < Global_113810.f_7691.f_136)
			{
				if (BitTest(Global_113810.f_7691[iVar4 /*15*/].f_2, bVar0))
				{
					if (func_137(Var1, func_138(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_113810.f_7691.f_764)
			{
				if (BitTest(Global_113810.f_7691.f_651[iVar4 /*14*/].f_2, bVar0))
				{
					if (func_137(Var1, func_136(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_113810.f_7691.f_866)
			{
				if (BitTest(Global_113810.f_7691.f_765[iVar4 /*10*/].f_2, bVar0))
				{
					if (func_137(Var1, func_135(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_135(int iParam0)//Position - 0x8A2C
{
	return Global_113810.f_7691.f_765[iParam0 /*10*/].f_7;
}

int func_136(int iParam0)//Position - 0x8A44
{
	return Global_113810.f_7691.f_651[iParam0 /*14*/].f_7;
}

int func_137(struct<3> Param0, int iParam3)//Position - 0x8A5C
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_43378)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_43378[iParam3 /*5*/]) <= (Global_43378[iParam3 /*5*/].f_3 * Global_43378[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_43378[iParam3 /*5*/].f_4 != -1)
		{
			return func_137(Param0, Global_43378[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x8AC7
{
	return Global_113810.f_7691[iParam0 /*15*/].f_7;
}

void func_139(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x8ADC
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

void func_140()//Position - 0x8B77
{
	int iVar0;
	
	iVar0 = func_83();
	if (iVar0 == 0)
	{
		sLocal_264 = "MICHAEL";
		sLocal_265 = "TX_1M";
		sLocal_266 = "TX_3M";
	}
	else if (iVar0 == 1)
	{
		sLocal_264 = "FRANKLIN";
		sLocal_265 = "TX_1F";
		sLocal_266 = "TX_3F";
	}
	else if (iVar0 == 2)
	{
		sLocal_264 = "TREVOR";
		sLocal_265 = "TX_1T";
		sLocal_266 = "TX_3T";
	}
}

int func_141(int iParam0)//Position - 0x8BDC
{
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
	{
		if (func_142(131, iParam0) == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == func_14())
	{
		if ((func_142(131, 0) == 1 || func_142(131, 1) == 1) || func_142(131, 2) == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_142(int iParam0, int iParam1)//Position - 0x8C4A
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2058[iParam0 /*29*/].f_12[iParam1];
}

int func_143(int iParam0)//Position - 0x8C74
{
	if ((Global_22959 || Global_22958) || Global_22960)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 172)
	{
		if (Global_20500.f_1 == 10)
		{
			if (Global_7685 == iParam0)
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
	return 0;
}

int func_144()//Position - 0x8CD8
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (Global_97733 == 1)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_112861)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (REPLAY::REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP())
	{
		return 0;
	}
	return 1;
}

void func_145()//Position - 0x8D27
{
	func_6();
	func_4(1);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_268);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_98);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_97);
	if (iLocal_86)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
}

int func_146()//Position - 0x8D66
{
	return joaat("taxi");
}

int func_147()//Position - 0x8D73
{
	return joaat("A_M_Y_StLat_01");
}

