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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int* iLocal_68 = NULL;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	char* sLocal_80[3] = { NULL, NULL, NULL };
	char* sLocal_84 = NULL;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	struct<3> Local_87[4];
	float fLocal_100[4] = { 0f, 0f, 0f, 0f };
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<4> Local_107 = { 0, 0, 0, 0 } ;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 15;
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
	var uLocal_170 = 16;
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
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339[5] = { 0, 0, 0, 0, 0 };
	float fLocal_345[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_351[5];
	struct<3> Local_367[5];
	int iLocal_383 = 0;
	struct<3> Local_384 = { 0, 0, 0 } ;
	struct<3> Local_387 = { 0, 0, 0 } ;
	float fLocal_390 = 0f;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	bool bLocal_393 = 0;
	int iLocal_394 = 0;
	struct<3> Local_395 = { 0, 0, 0 } ;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	float fLocal_409 = 0f;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	struct<3> Local_413 = { 0, 0, 0 } ;
	int iLocal_416 = 0;
	struct<3> Local_417 = { 0, 0, 0 } ;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	struct<3> Local_423 = { 0, 0, 0 } ;
	struct<3> Local_426 = { 0, 0, 0 } ;
	float fLocal_429 = 0f;
	struct<3> Local_430 = { 0, 0, 0 } ;
	struct<3> Local_433 = { 0, 0, 0 } ;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	struct<3> Local_438[8];
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	char* sLocal_474 = NULL;
	char* sLocal_475 = NULL;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	iLocal_52 = -1;
	sLocal_84 = "null";
	iLocal_85 = -1;
	iLocal_86 = -1;
	iLocal_116 = 1;
	fLocal_390 = 200f;
	iLocal_411 = MISC::GET_GAME_TIMER();
	iLocal_412 = 10000;
	iLocal_464 = -1;
	iLocal_473 = joaat("LAYOUT_STANDARD");
	sLocal_474 = "std_ds_open_door_for_chop";
	sLocal_475 = "creatures@rottweiler@in_vehicle@std_car";
	iLocal_483 = MISC::GET_GAME_TIMER();
	iLocal_486 = MISC::GET_GAME_TIMER();
	iLocal_488 = AUDIO::GET_SOUND_ID();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_181();
	}
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_490 = CAM::IS_GAMEPLAY_HINT_ACTIVE();
	Local_413 = { ScriptParam_0.f_1[0 /*3*/] };
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
	{
		func_181();
	}
	if (!func_180(63))
	{
		func_181();
	}
	if (!func_179(5) && !func_179(6))
	{
		func_181();
	}
	if (func_179(6) && func_178(Local_413, 1, 0) == 5)
	{
		func_181();
	}
	if (!func_171(1))
	{
		func_181();
	}
	if (Global_32431 == 1)
	{
		func_181();
	}
	if (Global_97733 == 1)
	{
		func_181();
	}
	if (func_168(0))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("sh_intro_f_hills")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("martin1")) == 0)
		{
			func_181();
		}
	}
	if ((((func_167() == 206 || func_167() == 207) || func_167() == 204) || func_167() == 205) || func_167() == 203)
	{
		iLocal_391 = 1;
	}
	else if (func_167() == 47)
	{
		iLocal_392 = 1;
	}
	else
	{
		if ((MISC::GET_DISTANCE_BETWEEN_COORDS(Local_413, 154.0731f, 765.5721f, 209.6901f, true) <= 50f || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_413, -268.139f, 415.2881f, 109.7258f, true) <= 50f) || MISC::GET_DISTANCE_BETWEEN_COORDS(Local_413, 314.4171f, 965.207f, 208.4024f, true) <= 50f)
		{
			func_181();
		}
		iLocal_391 = 0;
		iLocal_392 = 0;
		if (Global_78687 == 1)
		{
			func_181();
		}
	}
	while (true)
	{
		if (!func_164())
		{
			switch (iLocal_48)
			{
				case 0:
					func_155();
					break;
				
				case 1:
					func_1();
					break;
			}
		}
		else
		{
			func_181();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2AC
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iLocal_67))
	{
		return;
	}
	func_153();
	func_152();
	if (iLocal_49 != 11)
	{
		func_151();
		func_150();
		func_130();
		func_129();
		func_127();
	}
	func_2();
}

void func_2()//Position - 0x2F5
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	switch (iLocal_49)
	{
		case 11:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@sleep_in_kennel@"))
				{
					if (func_126(iLocal_67))
					{
						TASK::TASK_PLAY_ANIM(iLocal_67, "creatures@rottweiler@amb@sleep_in_kennel@", "sleep_in_kennel", 1000f, -8f, -1, 1, 0f, false, false, false);
						func_125(iLocal_67, Local_395.f_5, Local_395.f_8, 0, 1);
					}
					iLocal_404 = MISC::GET_GAME_TIMER();
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_124())
				{
					STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
					if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@sleep_in_kennel@") && func_126(iLocal_67))
					{
						TASK::TASK_PLAY_ANIM(iLocal_67, "creatures@rottweiler@amb@sleep_in_kennel@", "exit_kennel", 8f, -8f, -1, 0, 0f, false, false, false);
						func_123("WHINE");
						iLocal_50++;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_67, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
				{
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
					func_123("PLAYFUL");
					func_122(1, 1);
				}
			}
			break;
		
		case 1:
			if (iLocal_406 == 0 && func_119(PLAYER::PLAYER_PED_ID(), 1))
			{
				func_122(18, 1);
			}
			else
			{
				func_118();
				func_117();
				func_116();
			}
			break;
		
		case 17:
			func_118();
			func_117();
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_80[0]);
				STREAMING::REQUEST_ANIM_DICT(sLocal_80[1]);
				STREAMING::REQUEST_ANIM_DICT(sLocal_80[2]);
				if ((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80[0]) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80[1])) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_80[2]))
				{
					TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_80[0], "enter", 8f, -8f, -1, 0, 0f, false, false, false);
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if ((!func_114(iLocal_67, joaat("SCRIPT_TASK_PLAY_ANIM")) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_67, sLocal_80[0], "enter", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_67, sLocal_80[0], "enter") > 0.98f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_67, sLocal_80[1], sLocal_84, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_67, sLocal_80[1], sLocal_84) > 0.98f))
				{
					if (iLocal_51 == 0)
					{
						if (iLocal_79 == 1)
						{
							TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_80[1], "base", 8f, -8f, -1, 0, 0f, false, false, false);
							sLocal_84 = "base";
							iLocal_50++;
						}
						else
						{
							func_113();
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
							{
								iLocal_50++;
							}
						}
					}
					else
					{
						if (iLocal_51 != 5)
						{
							func_109("CHOP_WAIT", 0);
						}
						TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_80[2], "exit", 8f, -8f, -1, 0, 0f, false, false, false);
						iLocal_50 = 3;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (!func_114(iLocal_67, joaat("SCRIPT_TASK_PLAY_ANIM")) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_67, sLocal_80[1], sLocal_84, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_67, sLocal_80[1], sLocal_84) > 0.98f))
				{
					TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_80[2], "exit", 8f, -8f, -1, 0, 0f, false, false, false);
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 3)
			{
				if (!func_114(iLocal_67, joaat("SCRIPT_TASK_PLAY_ANIM")))
				{
					iLocal_420 = 0;
					if (iLocal_51 == 0)
					{
						func_122(1, 1);
					}
					else
					{
						func_122(iLocal_51, 1);
					}
				}
			}
			break;
		
		case 18:
			func_117();
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
				TASK::TASK_GO_TO_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 3f, 1f, 2f, 0);
				iLocal_50++;
			}
			else if (iLocal_50 == 1)
			{
				if (iLocal_51 == 0)
				{
					if (!func_114(iLocal_67, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
					{
						if ((STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@enter") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@exit"))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
							iLocal_50++;
						}
					}
				}
				else
				{
					func_122(iLocal_51, 1);
				}
			}
			else if (iLocal_50 == 2)
			{
				if (func_108())
				{
					iLocal_406 = 1;
					if (iLocal_51 == 0)
					{
						func_122(1, 1);
					}
					else
					{
						func_122(iLocal_51, 1);
					}
				}
			}
			break;
		
		case 2:
			func_103();
			if (iLocal_50 == 0)
			{
				if ((func_126(iLocal_67) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false)) && !PED::IS_PED_IN_GROUP(iLocal_67))
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
				}
				func_101();
				func_100(0, 0, 0);
				func_99(1);
				iLocal_58 = -1;
				iLocal_338 = MISC::GET_GAME_TIMER();
				iLocal_60 = MISC::GET_GAME_TIMER();
				iLocal_61 = (MISC::GET_GAME_TIMER() - 10000);
				Local_74 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true) };
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
				iLocal_50++;
			}
			else if (iLocal_50 == 1)
			{
				func_84();
				func_55();
				func_54();
				func_45();
				func_44();
				func_41();
				func_118();
			}
			break;
		
		case 3:
			if (iLocal_50 == 0)
			{
				func_123("WHINE");
				func_109("CHOP_GOHOME", 0);
				func_40(0);
				STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
				if (func_126(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), false))
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"));
				}
				if (PED::IS_PED_IN_GROUP(iLocal_67))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_67);
				}
				if (func_119(iLocal_67, 1))
				{
					func_122(1, 1);
				}
				else if (func_39(iLocal_67, Local_395, 1) < 100f)
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
					if (func_39(iLocal_67, Local_395, 1) < 20f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, Local_395, 1f, 20000, 0.25f, 32, Local_395.f_3);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, Local_395, 3f, 60000, 0.25f, 32, Local_395.f_3);
					}
					iLocal_50++;
				}
				else
				{
					func_122(4, 1);
				}
			}
			else if (iLocal_50 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_67, Local_395, 2.5f, 2.5f, 4f, false, true, 0))
					{
						func_122(1, 1);
					}
					else
					{
						func_122(3, 1);
					}
				}
			}
			break;
		
		case 4:
			if (!func_114(iLocal_67, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_67, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			}
			break;
		
		case 5:
			if (iLocal_50 == 0)
			{
				if (func_38())
				{
					if (func_35())
					{
						if (PED::IS_PED_IN_GROUP(iLocal_67))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_67);
						}
						TASK::CLEAR_PED_TASKS(iLocal_67);
						iLocal_54 = MISC::GET_GAME_TIMER();
						iLocal_56 = 1000;
						iLocal_407 = 0;
						iLocal_65 = -1;
						func_34();
						iLocal_50++;
					}
					else
					{
						func_32();
					}
				}
			}
			else if (iLocal_50 == 1)
			{
				if (((!func_24() || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_22())) || (iLocal_65 > -1 && (MISC::GET_GAME_TIMER() - iLocal_65) > 30000)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_384, 1f, 1f, 1f, false, true, 0))
				{
					iLocal_50++;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_67, Local_387, 3f, 3f, 4f, false, true, 0))
				{
					func_20();
					if (iLocal_65 == -1)
					{
						iLocal_65 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					func_17();
					if (func_114(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
					{
						iVar0 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iLocal_67, &uVar2, &uVar1);
						if (iVar0 == 2)
						{
							iLocal_407++;
						}
						else if (iVar0 == 3)
						{
							if (iLocal_407 != 0)
							{
								iLocal_407 = 0;
							}
						}
						if (iLocal_407 > 9)
						{
							func_32();
						}
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, Local_387, 3f, -1, 3f, 36, 40000f);
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				TASK::CLEAR_PED_TASKS(iLocal_67);
				STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@indication@");
				func_122(2, 1);
			}
			func_103();
			break;
		
		case 6:
			if (iLocal_50 == 0)
			{
				if (PED::IS_PED_IN_GROUP(iLocal_67))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_67);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, false);
				iLocal_50++;
			}
			else if (iLocal_50 == 1)
			{
				if (func_126(PLAYER::PLAYER_PED_ID()))
				{
					if ((!func_114(iLocal_67, joaat("SCRIPT_TASK_COMBAT")) && !PED::IS_PED_IN_COMBAT(iLocal_67, 0)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						iLocal_60 = MISC::GET_GAME_TIMER();
						func_122(2, 1);
					}
				}
			}
			func_103();
			break;
		
		case 7:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
					if (!PED::IS_PED_FACING_PED(iLocal_67, PLAYER::PLAYER_PED_ID(), 10f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "beg_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					func_123("PLAYFUL");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					func_109("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
		
		case 8:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
					if (!PED::IS_PED_FACING_PED(iLocal_67, PLAYER::PLAYER_PED_ID(), 10f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					func_123("PLAYFUL");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					func_109("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
		
		case 9:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
					if (!PED::IS_PED_FACING_PED(iLocal_67, PLAYER::PLAYER_PED_ID(), 10f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					}
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "paw_right_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					func_123("PLAYFUL");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					func_109("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
		
		case 10:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 0);
				iLocal_50++;
			}
			else if (iLocal_50 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 7)
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
					Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1f, 1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &(Var3.f_2), false, false);
					if (func_39(iLocal_67, Var3, 0) > 0.3f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, Var3, 1f, 5000, 0.25f, 0, 40000f);
					}
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7 || func_39(iLocal_67, Var3, 0) < 0.3f)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_67, PLAYER::PLAYER_PED_ID(), 15f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), 0);
						iLocal_480 = 0;
					}
					else
					{
						iLocal_480 = 1;
					}
					if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_67, 15f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, 0);
						iLocal_481 = 0;
					}
					else
					{
						iLocal_481 = 1;
					}
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 3)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (((iLocal_480 == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_67, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 7) && (iLocal_481 == 1 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 7)) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::TASK_PLAY_ANIM(iLocal_67, "creatures@rottweiler@tricks@", "petting_chop", 8f, -8f, -1, 8, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@rottweiler@tricks@", "petting_franklin", 8f, -8f, -1, 8, 0f, false, false, false);
					func_123("PLAYFUL");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_67, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
				{
					func_109("CHOP_RETURN1", 0);
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					func_16();
				}
			}
			break;
		
		case 12:
			if (iLocal_50 == 0)
			{
				if (PED::IS_PED_IN_GROUP(iLocal_67))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_67);
				}
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@tricks@", "sit_loop", 8f, -8f, -1, 4097, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (!func_15())
				{
					STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@tricks@");
					if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@tricks@"))
					{
						TASK::CLEAR_PED_TASKS(iLocal_67);
						TASK::TASK_PLAY_ANIM(iLocal_67, "creatures@rottweiler@tricks@", "sit_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
						func_109("CHOP_WALK", 0);
						iLocal_50++;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_67, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
				{
					STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
					iLocal_60 = MISC::GET_GAME_TIMER();
					func_122(2, 1);
				}
			}
			break;
		
		case 13:
			if (iLocal_50 == 0)
			{
				if (PED::IS_PED_IN_GROUP(iLocal_67))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_67);
				}
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
				STREAMING::REQUEST_PTFX_ASSET();
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move") && STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "dump_enter", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "dump_loop", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "dump_exit", 8f, -8f, -1, 4096, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					func_123("AGITATED");
					iLocal_62 = MISC::GET_GAME_TIMER();
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (func_108())
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					}
					if (func_119(iLocal_67, 0))
					{
						func_122(1, 1);
					}
					else
					{
						func_122(2, 1);
					}
				}
				else if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
				{
					if (iLocal_62 > -1 && (MISC::GET_GAME_TIMER() - iLocal_62) > 4000)
					{
						iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_dog_poo", iLocal_67, 0f, -0.15f, -0.2f, 0f, 0f, 0f, 1f, false, false, false);
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_62) > 10000)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					iLocal_62 = -1;
				}
			}
			break;
		
		case 14:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (PED::IS_PED_IN_GROUP(iLocal_67))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_67);
					}
					func_123("AGITATED");
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
				if (!func_114(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, ENTITY::GET_ENTITY_COORDS(iLocal_421, true), 2f, 20000, 0.25f, 36, 40000f);
				}
				if (func_39(iLocal_67, ENTITY::GET_ENTITY_COORDS(iLocal_421, true), 1) < 2f)
				{
					if ((!BitTest(Global_113810.f_10052.f_94, 10) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113810.f_10052.f_94), 10);
					}
					TASK::CLEAR_PED_TASKS(iLocal_67);
					if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move") && ENTITY::GET_ENTITY_SPEED(iLocal_67) < 1f)
					{
						Local_423 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true) };
						iLocal_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						fLocal_429 = func_14(Local_423, ENTITY::GET_ENTITY_COORDS(iLocal_421, true));
						if (iLocal_422 == 0)
						{
							Local_426 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_423, fLocal_429, -0.5f, 1f, 0f) };
						}
						else
						{
							Local_426 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_423, fLocal_429, 0.5f, 1f, 0f) };
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_426, 0);
						if (iLocal_422 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_right_enter", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_right_idle", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_right_exit", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_left_enter", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_left_idle", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "pee_left_exit", 8f, -8f, -1, 0, 0f, false, false, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
						iLocal_62 = MISC::GET_GAME_TIMER();
						iLocal_50++;
					}
				}
			}
			else if (iLocal_50 == 2)
			{
				if (func_108())
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					}
					func_123("BARK");
					func_122(2, 1);
				}
				else if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
				{
					if (iLocal_62 > -1 && (MISC::GET_GAME_TIMER() - iLocal_62) > 7000)
					{
						if (iLocal_422 == 0)
						{
							iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_dog_peeing", iLocal_67, 0.1f, -0.32f, -0.04f, 0f, 0f, 30f, 1f, false, false, false);
						}
						else
						{
							iLocal_77 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_anim_dog_peeing", iLocal_67, -0.1f, -0.32f, -0.04f, 0f, 0f, 150f, 1f, false, false, false);
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_62) > 16000)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
					iLocal_62 = -1;
				}
			}
			break;
		
		case 15:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				func_40(0);
				iLocal_60 = MISC::GET_GAME_TIMER();
				func_122(2, 1);
			}
			else
			{
				if (iLocal_50 == 0)
				{
					func_40(1);
					if (MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), iLocal_471, 50f, &uLocal_466, &iLocal_465, false))
					{
						func_6(294, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						iLocal_469 = 0;
						iLocal_470 = 0;
						iLocal_408 = 0;
						if (PED::IS_PED_IN_GROUP(iLocal_67))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_67);
						}
						iLocal_472 = MISC::GET_GAME_TIMER();
						iLocal_50++;
					}
				}
				else if (iLocal_50 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_465))
					{
						if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_465))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_472) > 500)
							{
								if (func_5())
								{
									STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
									if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move"))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
										if (iLocal_471 == joaat("WEAPON_BALL"))
										{
											TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "fetch_pickup", 8f, -8f, -1, 49152, 0f, false, false, false);
										}
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 4f, 3f, 2f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
										if (iLocal_471 == joaat("WEAPON_BALL"))
										{
											iLocal_469 = 1;
										}
										iLocal_50++;
									}
								}
								else if (!func_114(iLocal_67, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
								{
									TASK::TASK_GO_TO_ENTITY(iLocal_67, iLocal_465, 30000, 0.5f, 3f, 2f, 0);
									iLocal_408++;
									iLocal_407 = 0;
									if (iLocal_408 > 3)
									{
										TASK::TASK_GO_TO_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
										func_40(1);
										iLocal_50++;
									}
								}
								else
								{
									iVar0 = TASK::GET_NAVMESH_ROUTE_DISTANCE_REMAINING(iLocal_67, &uVar2, &uVar1);
									if (iVar0 == 2)
									{
										fLocal_409 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_465);
										if (fLocal_409 < 1f)
										{
											iLocal_407++;
										}
									}
									else if (iVar0 == 3)
									{
										if (iLocal_470 == 0)
										{
											func_123("BARK");
											if (iLocal_471 == joaat("WEAPON_BALL"))
											{
												func_109("CHOP_FETCH", 0);
											}
											iLocal_470 = 1;
										}
									}
									if (iLocal_407 > 9)
									{
										TASK::TASK_GO_TO_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
										func_40(1);
										iLocal_50++;
									}
								}
							}
						}
						else
						{
							TASK::TASK_GO_TO_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
							iLocal_50++;
						}
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), 20000, 5f, 3f, 2f, 0);
						iLocal_50++;
					}
				}
				else if (iLocal_50 == 2)
				{
					if (iLocal_469 == 1)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_465) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_67, "creatures@rottweiler@move", "fetch_pickup", 3)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_67, "creatures@rottweiler@move", "fetch_pickup") > 0.25f)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_465, iLocal_67, 28, 0.2042f, 0f, -0.0608f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							AUDIO::SET_AUDIO_FLAG("DisableBarks", true);
							iLocal_50++;
						}
					}
					else
					{
						iLocal_50++;
					}
				}
				else if (iLocal_50 == 3)
				{
					if (func_4(PLAYER::PLAYER_PED_ID(), iLocal_67, 1) < 5f)
					{
						if (iLocal_471 == joaat("WEAPON_BALL"))
						{
							if (iLocal_469 == 1)
							{
								STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@move");
								if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@move"))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@move", "fetch_drop", 8f, -8f, -1, 16384, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
									func_109("CHOP_RETURN1", 0);
									AUDIO::SET_AUDIO_FLAG("DisableBarks", false);
									iLocal_50++;
								}
							}
							else
							{
								func_123("BREATH_AGITATED");
								func_109("CHOP_RETURN2", 0);
								func_122(2, 1);
							}
						}
						else
						{
							func_123("BARK_WHINE");
							func_40(1);
							func_122(2, 1);
						}
					}
				}
				else if (iLocal_50 == 4)
				{
					if (!func_114(iLocal_67, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) && !ENTITY::DOES_ENTITY_EXIST(iLocal_465))
					{
						if (func_3(0))
						{
							func_100(0, 1, 0);
						}
						else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
						{
							func_100(0, 1, 1);
						}
						else
						{
							func_100(1, 1, 1);
						}
						iLocal_60 = MISC::GET_GAME_TIMER();
						func_122(2, 1);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_465))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_465))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_67, "creatures@rottweiler@move", "fetch_drop", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_67, "creatures@rottweiler@move", "fetch_drop") > 0.4f)
							{
								ENTITY::DETACH_ENTITY(iLocal_465, true, true);
							}
						}
						else
						{
							if ((func_4(PLAYER::PLAYER_PED_ID(), iLocal_465, 1) < 1.5f || func_4(PLAYER::PLAYER_PED_ID(), iLocal_465, 1) > 20f) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								func_40(1);
							}
							if (!func_114(iLocal_67, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								func_101();
							}
						}
					}
				}
				func_103();
			}
			break;
		
		case 16:
			if (iLocal_50 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@in_vehicle@std_car");
				if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@in_vehicle@std_car"))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_67))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_67);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_67, ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID()), 0, 0f, 0f, -6.1f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
					TASK::TASK_PLAY_ANIM(iLocal_67, "creatures@rottweiler@in_vehicle@std_car", "sit", 1000f, -1000f, -1, 9, 0f, false, false, false);
					iLocal_50++;
				}
			}
			else if (iLocal_50 == 1)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					fVar6 = 99999f;
					iVar8 = 0;
					while (iVar8 < 4)
					{
						fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_87[iVar8 /*3*/], true);
						if (fVar7 < fVar6)
						{
							fVar6 = fVar7;
							iVar9 = iVar8;
						}
						iVar8++;
					}
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_67))
					{
						ENTITY::DETACH_ENTITY(iLocal_67, true, true);
					}
					func_125(iLocal_67, Local_87[iVar9 /*3*/], fLocal_100[iVar9], 0, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
					iLocal_60 = MISC::GET_GAME_TIMER();
					func_122(2, 1);
				}
			}
			break;
	}
}

int func_3(int iParam0)//Position - 0x1C73
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

float func_4(int iParam0, int iParam1, bool bParam2)//Position - 0x1CCA
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_5()//Position - 0x1D28
{
	struct<3> Var0;
	float fVar3;
	
	if (func_4(iLocal_67, iLocal_465, 1) < (0.5f + 0.25f))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_465, true) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0.f_0, Var0.f_1, (Var0.f_2 + 1f), &fVar3, false, false))
		{
			if (MISC::ABSF((Var0.f_2 - fVar3)) < 0.1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_6(int iParam0, int iParam1, int iParam2)//Position - 0x1D85
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_12((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113810.f_10197[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113810.f_10197[iParam0 /*12*/].f_6 == 11 || Global_113810.f_10197[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113810.f_10197[iParam0 /*12*/].f_5 = 1;
		Global_113810.f_10197[iParam0 /*12*/].f_10 = iParam1;
		Global_113810.f_10197[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_7();
	}
}

void func_7()//Position - 0x1E6B
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_113546 = 0;
	Global_113547 = 0;
	Global_113548 = 0;
	Global_113549 = 0;
	Global_113550 = 0;
	Global_113551 = 0;
	Global_113552 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113810.f_10197.f_3853;
	Global_113810.f_10197.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113810.f_10197[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113810.f_10197[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113546++;
					fVar1 = (fVar1 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113547++;
					fVar2 = (fVar2 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113548++;
					fVar3 = (fVar3 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113549++;
					fVar4 = (fVar4 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113550++;
					fVar5 = (fVar5 + (Global_113810.f_10197[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113551++;
					fVar6 = (fVar6 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113552++;
					fVar7 = (fVar7 + Global_113810.f_10197[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113529 > 0)
	{
		if (Global_113546 == Global_113529)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113530 > 0)
	{
		if (Global_113547 == Global_113530)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113531 > 0)
	{
		if (Global_113548 == Global_113531)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113532 > 0)
	{
		if (Global_113549 == Global_113532)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113533 > 0)
	{
		if (((Global_113550 == Global_113533 || (Global_113533 * 10 / Global_113550) < 41) || Global_113550 > Global_113536) || Global_113550 == Global_113536)
		{
			if (!BitTest(Global_113810.f_10197.f_3856, 14))
			{
				if (Global_113550 == Global_113533)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113533, 0);
					MISC::SET_BIT(&(Global_113810.f_10197.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113534 > 0)
	{
		if (Global_113551 == Global_113534)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113535 > 0)
	{
		if (Global_113552 == Global_113535)
		{
			fVar7 = 5f;
		}
	}
	Global_113810.f_10197.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113550 > Global_113536 || Global_113550 == Global_113536)
	{
		iVar9 = Global_113536;
	}
	else
	{
		iVar9 = Global_113550;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113546, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113529, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113547, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113530, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113548, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113531, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113549, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113532, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113536, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113552 + Global_113551), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113535 + Global_113534), true);
	Global_113553 = (Global_113546 * 100 / Global_113529);
	Global_113555 = ((Global_113548 + Global_113547) * 100 / (Global_113531 + Global_113530));
	Global_113554 = ((Global_113549 + iVar9) * 100 / (Global_113532 + Global_113536));
	Global_113556 = ((Global_113551 + Global_113552) * 100 / (Global_113534 + Global_113535));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113810.f_10197.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113553, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113554, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113555, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113810.f_10197.f_3853))
	{
		func_11(13, SYSTEM::FLOOR(Global_113810.f_10197.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78689)
		{
			if (func_10() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113544 = 0;
				}
				if (!Global_63485)
				{
					func_8();
				}
			}
		}
	}
}

int func_8()//Position - 0x2329
{
	if (func_9(0))
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

int func_9(bool bParam0)//Position - 0x2374
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

int func_10()//Position - 0x239C
{
	return Global_32283;
}

int func_11(int iParam0, int iParam1)//Position - 0x23A7
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

void func_12(int iParam0, bool bParam1, int iParam2)//Position - 0x23F8
{
	if (iParam2 == -1)
	{
		iParam2 = func_13();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_13()//Position - 0x2416
{
	return Global_1574918;
}

float func_14(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5)//Position - 0x2422
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

bool func_15()//Position - 0x243C
{
	return Global_100885.f_393 > 0;
}

void func_16()//Position - 0x244D
{
	iLocal_60 = MISC::GET_GAME_TIMER();
	if (iLocal_73 == 0)
	{
		func_122(1, 1);
	}
	else
	{
		func_122(2, 1);
	}
}

void func_17()//Position - 0x2470
{
	float fVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_54) > iLocal_56)
	{
		fVar0 = func_39(iLocal_67, Local_387, 1);
		if (fVar0 < 10f)
		{
			func_123("BARK_SEQ");
		}
		else
		{
			func_123("BARK");
		}
		iLocal_54 = MISC::GET_GAME_TIMER();
		if (fVar0 < 20f)
		{
			iLocal_56 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000);
		}
		else if (fVar0 < 50f)
		{
			iLocal_56 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
		}
		else
		{
			iLocal_56 = MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000);
		}
		if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113810.f_10052.f_94, 1)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			MISC::SET_BIT(&(Global_113810.f_10052.f_94), 1);
			func_18("CHOP_H_HUNT" /* GXT: Chop will bark more often when he nears pickups. */, -1);
		}
	}
}

void func_18(char* sParam0, int iParam1)//Position - 0x253A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_19()//Position - 0x2551
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_67) || (iLocal_49 == 10 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 25 /*INPUT_AIM*/)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
	}
	return 0;
}

void func_20()//Position - 0x2598
{
	if (!func_114(iLocal_67, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
	{
		STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@indication@");
		if (STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@indication@"))
		{
			TASK::CLEAR_PED_TASKS(iLocal_67);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_384, 0);
			TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@indication@", func_21(), 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
		}
	}
}

char* func_21()//Position - 0x260A
{
	char* sVar0;
	struct<3> Var1;
	
	if (func_126(iLocal_67))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true) };
		if ((Var1.f_2 + 1f) < Local_384.f_2)
		{
			sVar0 = "indicate_high";
		}
		else if ((Var1.f_2 - 1f) > Local_384.f_2)
		{
			sVar0 = "indicate_low";
		}
		else
		{
			sVar0 = "indicate_ahead";
		}
	}
	return sVar0;
}

int func_22()//Position - 0x265E
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) || func_23())
		{
			return 1;
		}
	}
	return 0;
}

int func_23()//Position - 0x269F
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true));
		if ((((((((((((((((((iVar0 == joaat("caddy") || iVar0 == joaat("caddy2")) || iVar0 == joaat("dune")) || iVar0 == joaat("airtug")) || iVar0 == joaat("blazer")) || iVar0 == joaat("blazer2")) || iVar0 == joaat("bulldozer")) || iVar0 == joaat("cutter")) || iVar0 == joaat("dump")) || iVar0 == joaat("forklift")) || iVar0 == joaat("handler")) || iVar0 == joaat("mower")) || iVar0 == joaat("rhino")) || iVar0 == joaat("tractor")) || iVar0 == joaat("tractor2")) || iVar0 == joaat("tractor3")) || iVar0 == MISC::GET_HASH_KEY("bifta" /* GXT: Bifta */)) || iVar0 == joaat("blazer3")) || iVar0 == joaat("dune2"))
		{
			return 1;
		}
	}
	return 0;
}

int func_24()//Position - 0x27D1
{
	switch (iLocal_336)
	{
		case 2:
			if (!func_27(2))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 1:
			if (!func_27(1))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 0:
			if (!func_27(0))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 3:
			if (func_26(iLocal_383))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
		
		case 4:
			if (func_25(iLocal_383))
			{
				func_109("CHOP_RETURN1", 1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_25(int iParam0)//Position - 0x287F
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113810.f_10052.f_125, iParam0);
	}
	return BitTest(Global_113810.f_10052.f_125.f_1, (iParam0 - 32));
}

int func_26(int iParam0)//Position - 0x28C4
{
	if (iParam0 < 0 || iParam0 >= 50)
	{
		return 0;
	}
	if (iParam0 <= 31)
	{
		return BitTest(Global_113810.f_10052.f_122, iParam0);
	}
	return BitTest(Global_113810.f_10052.f_122.f_1, (iParam0 - 32));
}

int func_27(int iParam0)//Position - 0x2909
{
	if (func_31())
	{
		func_30(iParam0, iLocal_383);
	}
	if (func_29())
	{
		if (func_28())
		{
			func_34();
			return 0;
		}
		func_34();
	}
	return 1;
}

bool func_28()//Position - 0x293C
{
	return Global_32531;
}

int func_29()//Position - 0x2947
{
	if (Global_32528 == 2)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0, int iParam1)//Position - 0x295B
{
	if (Global_32528 == 0)
	{
		Global_32528 = 1;
		Global_32529 = iParam0;
		Global_32530 = iParam1;
	}
}

int func_31()//Position - 0x2978
{
	if (Global_32528 == 0)
	{
		return 1;
	}
	return 0;
}

void func_32()//Position - 0x298C
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true) };
	func_33(Var0);
	func_123("WHINE");
	func_109("CHOP_NONEAR", 0);
	func_16();
}

void func_33(struct<3> Param0)//Position - 0x29BB
{
	if (SYSTEM::VDIST(Param0, Param0) > 1f)
	{
	}
}

void func_34()//Position - 0x29D4
{
	Global_32528 = 3;
}

int func_35()//Position - 0x29E0
{
	iLocal_383 = -1;
	Local_384 = { 0f, 0f, 0f };
	Local_387 = { 0f, 0f, 0f };
	func_36(0);
	if (iLocal_383 == -1)
	{
		func_36(1);
	}
	if (iLocal_383 > -1)
	{
		return 1;
	}
	return 0;
}

void func_36(int iParam0)//Position - 0x2A19
{
	float fVar0;
	int iVar1;
	
	fVar0 = 9999f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if ((iLocal_339[iVar1] > -1 && fLocal_345[iVar1] < fVar0) && func_37(iParam0, iVar1))
		{
			fVar0 = fLocal_345[iVar1];
			iLocal_383 = iLocal_339[iVar1];
			iLocal_336 = iVar1;
			Local_384 = { Local_351[iVar1 /*3*/] };
			Local_387 = { Local_367[iVar1 /*3*/] };
		}
		iVar1++;
	}
}

int func_37(int iParam0, int iParam1)//Position - 0x2A99
{
	if (iParam0 == 1)
	{
		return 1;
	}
	if (iParam1 == 1 && ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) >= 200)
	{
		return 0;
	}
	if (iParam1 == 0 && PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()) >= 100)
	{
		return 0;
	}
	return 1;
}

int func_38()//Position - 0x2AE2
{
	if (iLocal_337 == 5)
	{
		iLocal_337 = 0;
	}
	switch (iLocal_337)
	{
		case 0:
			if (iLocal_339[0] > -1)
			{
				if (func_31())
				{
					func_30(0, iLocal_339[0]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_339[0] = -1;
					}
					func_34();
					iLocal_337 = 1;
				}
			}
			else
			{
				iLocal_337 = 1;
			}
			break;
		
		case 1:
			if (iLocal_339[1] > -1)
			{
				if (func_31())
				{
					func_30(1, iLocal_339[1]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_339[1] = -1;
					}
					func_34();
					iLocal_337 = 2;
				}
			}
			else
			{
				iLocal_337 = 2;
			}
			break;
		
		case 2:
			if (iLocal_339[2] > -1)
			{
				if (func_31())
				{
					func_30(2, iLocal_339[2]);
				}
				if (func_29())
				{
					if (func_28())
					{
						iLocal_339[2] = -1;
					}
					func_34();
					iLocal_337 = 3;
				}
			}
			else
			{
				iLocal_337 = 3;
			}
			break;
		
		case 3:
			if (iLocal_339[3] > -1)
			{
				if (func_26(iLocal_339[3]))
				{
					iLocal_339[3] = -1;
				}
			}
			if (iLocal_339[4] > -1)
			{
				if (func_25(iLocal_339[4]))
				{
					iLocal_339[4] = -1;
				}
			}
			iLocal_337 = 5;
			return 1;
			break;
	}
	return 0;
}

float func_39(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x2C26
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_40(int iParam0)//Position - 0x2C60
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_465))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_465, true) };
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_465))
		{
			ENTITY::DETACH_ENTITY(iLocal_465, true, true);
		}
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_465);
		if (iParam0 == 1 && iLocal_471 == joaat("WEAPON_BALL"))
		{
			MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 0.1f, 0);
		}
	}
}

void func_41()//Position - 0x2CBB
{
	struct<3> Var0;
	
	if ((((((func_43() != 1 && (MISC::GET_GAME_TIMER() - iLocal_60) > 10000) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && iLocal_105 == 0) && iLocal_471 != joaat("WEAPON_BALL")) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f) == 0) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(iLocal_67, ENTITY::GET_ENTITY_COORDS(iLocal_67, true), 100f) == 0)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_74, false) < 1f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_433, false) > 20f)
				{
					func_42(&iLocal_421, 0);
					iLocal_421 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 10f, joaat("prop_streetlight_01"), true, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_421))
					{
						Local_433 = { ENTITY::GET_ENTITY_COORDS(iLocal_421, true) };
						func_122(14, 1);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_430, false) > 20f)
				{
					Local_430 = { Var0 };
					func_122(13, 1);
				}
			}
			Local_74 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true) };
			iLocal_60 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_42(int* iParam0, bool bParam1)//Position - 0x2DF0
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*iParam0);
		}
	}
}

int func_43()//Position - 0x2E2B
{
	if (Global_113810.f_20121.f_254.f_5)
	{
		if (Global_113810.f_20121.f_254 > 66f)
		{
			return 1;
		}
		else if (Global_113810.f_20121.f_254 > 33f)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	return 2;
}

void func_44()//Position - 0x2E78
{
	if (((!BitTest(Global_113810.f_10052.f_94, 7) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		MISC::SET_BIT(&(Global_113810.f_10052.f_94), 7);
		func_18("CHOP_H_BALL" /* GXT: When taking Chop for a walk, Franklin can play fetch using the ball in the weapon wheel. */, -1);
	}
	if (((func_126(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && func_126(iLocal_67)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, true))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_471, true);
		if (((((iLocal_471 == joaat("WEAPON_BALL") || iLocal_471 == joaat("WEAPON_GRENADE")) || iLocal_471 == joaat("WEAPON_SMOKEGRENADE")) || iLocal_471 == joaat("WEAPON_STICKYBOMB")) || iLocal_471 == joaat("WEAPON_MOLOTOV")) || iLocal_471 == joaat("WEAPON_FLARE"))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_122(15, 1);
			}
			else if (((MISC::GET_GAME_TIMER() - iLocal_61) > 10000 && ENTITY::GET_ENTITY_SPEED(iLocal_67) < 1f) && func_4(PLAYER::PLAYER_PED_ID(), iLocal_67, 1) < 5f)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
				if ((STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@enter") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@rottweiler@amb@world_dog_barking@exit"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_67);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "creatures@rottweiler@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
					iLocal_61 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_45()//Position - 0x3058
{
	if (func_15() && !func_46(4))
	{
		if ((func_126(iLocal_67) && iLocal_105 == 0) && PED::IS_PED_IN_GROUP(iLocal_67))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_67);
		}
		func_122(12, 1);
	}
}

int func_46(int iParam0)//Position - 0x309C
{
	int iVar0;
	
	if (func_15())
	{
		iVar0 = 0;
		while (iVar0 < 61)
		{
			if (func_53(iVar0) == iParam0)
			{
				if (func_47(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_47(int iParam0)//Position - 0x30D7
{
	return func_48(iParam0, 5, 1);
}

int func_48(int iParam0, int iParam1, bool bParam2)//Position - 0x30E7
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100885.f_1414[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			return BitTest(func_49(func_52(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_49(int iParam0, int iParam1)//Position - 0x3147
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_50(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_50(int iParam0, var uParam1)//Position - 0x3176
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_51(uParam1));
}

int func_51(var uParam0)//Position - 0x318B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_13();
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

int func_52(int iParam0)//Position - 0x31BF
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 12514;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		case 58:
			return 11433;
			break;
		
		case 59:
			return 11844;
			break;
		
		case 60:
			return 11901;
			break;
		
		default:
			break;
	}
	return 14385;
}

int func_53(int iParam0)//Position - 0x3567
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
	}
	return 6;
}

void func_54()//Position - 0x389D
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (iLocal_58 == -1)
		{
			iLocal_58 = MISC::GET_GAME_TIMER();
			iLocal_59 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000);
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_58) > iLocal_59)
		{
			func_123("SNARL");
			iLocal_58 = -1;
		}
	}
}

void func_55()//Position - 0x38E0
{
	if (func_126(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_105 > 1 && iLocal_105 < 8)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 309, true);
		}
		if (iLocal_115 == 1 && iLocal_105 == 1)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 313, true);
		}
	}
	switch (iLocal_105)
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_476 = MISC::GET_GAME_TIMER();
				iLocal_63 = -1;
				iLocal_64 = -1;
				iLocal_55 = MISC::GET_GAME_TIMER();
				func_83();
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
				iLocal_489 = 1;
				iLocal_105 = 1;
			}
			else
			{
				if (iLocal_473 != 0)
				{
					iLocal_473 = 0;
				}
				iLocal_335 = 0;
				iLocal_57 = -1;
				if (func_82())
				{
					func_122(3, 1);
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_105 = 15;
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (func_81())
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) != PLAYER::PLAYER_PED_ID())
					{
						func_122(3, 1);
					}
					else
					{
						if (!func_126(iLocal_78))
						{
							iLocal_78 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							func_80();
							func_79();
						}
						STREAMING::REQUEST_ANIM_DICT(sLocal_475);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475) && func_126(iLocal_78))
						{
							if (PED::IS_PED_IN_GROUP(iLocal_67))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_67);
							}
							if (func_78())
							{
								if (iLocal_63 == -1)
								{
									iLocal_63 = MISC::GET_GAME_TIMER();
								}
								if (func_77())
								{
									func_76(1);
									iLocal_105 = 6;
								}
								else
								{
									func_75();
								}
							}
							else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iLocal_78, 0, false, false))
							{
								if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, 1) > 0.9f)
								{
									iLocal_105 = 4;
								}
								else
								{
									iLocal_105 = 2;
								}
							}
							else
							{
								func_76(1);
								iLocal_105 = 6;
							}
						}
					}
				}
				else if (func_22())
				{
					iLocal_105 = 14;
				}
				else
				{
					if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113810.f_10052.f_94, 3)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113810.f_10052.f_94), 3);
						func_18("CHOP_H_NOVEH" /* GXT: Chop can only get into suitable cars with an empty front passenger seat. */, -1);
					}
					func_122(3, 1);
				}
			}
			else
			{
				if (func_81())
				{
					STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
					func_75();
				}
				if (iLocal_335 == 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_67, 185, false);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !func_23())
					{
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) == joaat("taxi"))
						{
						}
						else if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) >= 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0, false))
						{
							if (!func_74())
							{
								func_109("CHOP_RIDE", 0);
							}
						}
					}
					else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) || func_23())
					{
						func_109("CHOP_FOLLOW", 0);
					}
					iLocal_335 = 1;
				}
			}
			break;
		
		case 2:
			func_73();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_105 = 15;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit"))
				{
					func_72();
					iLocal_105 = 3;
				}
			}
			break;
		
		case 3:
			func_73();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_105 = 15;
			}
			else if (func_126(iLocal_78) && func_71())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_116, false, false);
				}
				iLocal_487 = MISC::GET_GAME_TIMER();
				iLocal_63 = MISC::GET_GAME_TIMER();
				iLocal_105 = 4;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_105 = 15;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_475);
				if (func_126(iLocal_78))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, iLocal_116) < 0.95f)
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_116, false, false);
						iLocal_487 = MISC::GET_GAME_TIMER();
					}
					if (func_77() && MISC::GET_GAME_TIMER() >= iLocal_487 + 300)
					{
						if (!func_114(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475))
						{
							func_73();
							func_70(1, 1);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_67);
							iLocal_106 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_106, iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_67, iLocal_106, sLocal_475, "get_in", 1000f, -8f, 4, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
							iLocal_105 = 5;
						}
					}
					else
					{
						func_75();
					}
				}
			}
			break;
		
		case 5:
			func_73();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(iLocal_484))
				{
					CAM::SET_USE_HI_DOF();
				}
				STREAMING::REQUEST_ANIM_DICT(sLocal_475);
				if (((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_106) > 0.99f) && func_126(iLocal_78))
				{
					func_70(0, 1);
					func_76(0);
					iLocal_105 = 6;
				}
			}
			break;
		
		case 6:
			func_73();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit") && func_126(iLocal_78))
				{
					if ((!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, 1) > 0.1f) && !func_78())
					{
						func_72();
					}
					iLocal_105 = 7;
				}
			}
			break;
		
		case 7:
			func_73();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else if (func_126(iLocal_78) && func_71())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_78, iLocal_116, false);
				}
				iLocal_105 = 8;
			}
			break;
		
		case 8:
			func_73();
			func_68(&iLocal_68);
			func_40(1);
			if (iLocal_52 == -1)
			{
				iLocal_52 = MISC::GET_GAME_TIMER();
				iLocal_53 = 7000;
			}
			if (func_126(iLocal_78))
			{
				if (func_67())
				{
					func_69(2f, 0f, 0f, 1);
				}
				else if (FIRE::IS_ENTITY_ON_FIRE(iLocal_78))
				{
					func_69(2f, 0f, 0f, 1);
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SPEED(iLocal_78) < 5f)
					{
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_116, false, false);
						}
						iLocal_105 = 12;
					}
				}
				else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
				{
					if (ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_78))
					{
						func_69(2f, 0f, 0f, 1);
					}
					else if (func_78())
					{
						iLocal_105 = 9;
					}
					else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iLocal_78, 0, false, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_78, 10f, 1, false);
						if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116))
						{
							iLocal_105 = 12;
						}
						else
						{
							iLocal_105 = 10;
						}
					}
					else if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iLocal_78, -1, false, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_78, 10f, 1, false);
						func_69(-2f, 0f, 0f, 0);
					}
					else
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_78, 10f, 1, false);
						func_69(0f, -4f, 0f, 0);
					}
				}
				else
				{
					func_66();
					func_64();
					func_63();
					if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113810.f_10052.f_94, 2)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113810.f_10052.f_94), 2);
						func_18("CHOP_H_CAR" /* GXT: Chop will follow Franklin into suitable cars with an empty front passenger seat. */, -1);
					}
				}
			}
			else
			{
				func_69(2f, 0f, 0f, 1);
			}
			break;
		
		case 9:
			func_73();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_114(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				func_69(2f, 0f, 0f, 1);
			}
			break;
		
		case 10:
			func_73();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("misschop_vehicleenter_exit");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschop_vehicleenter_exit"))
				{
					func_72();
					iLocal_105 = 11;
				}
			}
			break;
		
		case 11:
			func_73();
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_69(2f, 0f, 0f, 1);
			}
			else if (func_126(iLocal_78) && func_71())
			{
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_116, false, false);
				}
				iLocal_105 = 12;
			}
			break;
		
		case 12:
			func_73();
			STREAMING::REQUEST_ANIM_DICT(sLocal_475);
			if ((!func_114(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475)) && func_126(iLocal_78))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_67);
				iLocal_106 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_106, iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f"));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_67, iLocal_106, sLocal_475, "get_out", 1000f, -8f, 10, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
				iLocal_105 = 13;
			}
			break;
		
		case 13:
			func_73();
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && (MISC::GET_GAME_TIMER() - iLocal_477) > 1500) && !func_114(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_106) > 0.99f))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(iLocal_67, iLocal_67, 0f, 5f, 0f, 1f, 20000);
				iLocal_105 = 15;
			}
			break;
		
		case 14:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_105 = 15;
			}
			else
			{
				func_66();
				if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113810.f_10052.f_94, 5)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_113810.f_10052.f_94), 5);
					func_18("CHOP_H_BIKE" /* GXT: Chop will follow bikes and other vehicles he cannot get inside. */, -1);
				}
			}
			break;
		
		case 15:
			func_73();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_58();
				func_100(0, 0, 0);
				STREAMING::REMOVE_ANIM_DICT("misschop_vehicleenter_exit");
				STREAMING::REMOVE_ANIM_DICT(sLocal_475);
				iLocal_60 = MISC::GET_GAME_TIMER();
				func_57();
				func_56(&iLocal_78);
				iLocal_78 = 0;
				iLocal_52 = -1;
				TASK::CLEAR_PED_TASKS(iLocal_67);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_67, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_67, 185, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
				func_122(2, 1);
			}
			else if (!func_114(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			break;
	}
}

void func_56(int* iParam0)//Position - 0x42EF
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*iParam0, false);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_57()//Position - 0x4327
{
	if (((iLocal_489 == 1 && func_126(VEHICLE::GET_LAST_DRIVEN_VEHICLE())) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) > 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_116))
	{
		VEHICLE::SET_VEHICLE_DOOR_LATCHED(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), iLocal_116, false, true, false);
	}
}

void func_58()//Position - 0x4370
{
	if ((!HUD::DOES_BLIP_EXIST(iLocal_68) && func_126(iLocal_67)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, true))
	{
		if (func_180(126))
		{
			func_62(139, 0, 0);
		}
		else
		{
			func_62(138, 0, 0);
		}
		iLocal_68 = func_59(iLocal_67, 0, 145);
		HUD::SET_BLIP_SPRITE(iLocal_68, 273 /*RADAR_CHOP*/);
	}
}

int func_59(int iParam0, bool bParam1, int iParam2)//Position - 0x43CA
{
	int iVar0;
	
	iVar0 = func_60(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2058[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_60(int iParam0, bool bParam1, bool bParam2)//Position - 0x4414
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_61(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_61(bool bParam0, float fParam1, float fParam2)//Position - 0x44B8
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_62(int iParam0, bool bParam1, bool bParam2)//Position - 0x44CF
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = BitTest(Global_32663[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != BitTest(Global_32663[iVar0 /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 18);
		if (Global_32660 == 1)
		{
			Global_32661 = 1;
		}
		Global_32660 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_32663[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_32663[iVar0 /*23*/].f_11), 15);
	}
	if (!BitTest(Global_32663[iVar0 /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_32663[iVar0 /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_32663[iVar0 /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}
}

void func_63()//Position - 0x45CF
{
	if (func_126(iLocal_67) && func_126(iLocal_78))
	{
		if (iLocal_476 > -1)
		{
			if (((MISC::GET_GAME_TIMER() - iLocal_476) > 500 && ENTITY::GET_ENTITY_SPEED(iLocal_78) > 5f) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_78))
			{
				TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_475, "shunt_from_back", 8f, -8f, -1, 0, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
				func_123("GROWL");
				iLocal_476 = -1;
				iLocal_55 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_67, sLocal_475, "shunt_from_back", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_67, sLocal_475, "shunt_from_back", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_67, sLocal_475, "shunt_from_back") > 0.98f))
		{
			TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_475, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
			iLocal_476 = MISC::GET_GAME_TIMER();
			iLocal_55 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_64()//Position - 0x46C3
{
	if (iLocal_476 > -1 && (MISC::GET_GAME_TIMER() - iLocal_52) > iLocal_53)
	{
		if (((AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 7 || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 8) || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 9) || AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 13)
		{
			func_65();
			iLocal_52 = MISC::GET_GAME_TIMER();
			iLocal_53 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000);
		}
	}
}

void func_65()//Position - 0x4728
{
	if ((MISC::GET_GAME_TIMER() - iLocal_55) > 500)
	{
		iLocal_55 = MISC::GET_GAME_TIMER();
		if (func_126(iLocal_67) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_117);
			TASK::TASK_PLAY_ANIM(0, sLocal_475, "bark", 4f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sLocal_475, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_117);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iLocal_117);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_117);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
		}
	}
}

void func_66()//Position - 0x47AE
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && bLocal_393 == 1)
	{
		if (iLocal_57 == -1)
		{
			iLocal_57 = MISC::GET_GAME_TIMER();
		}
		if (((MISC::GET_GAME_TIMER() - iLocal_57) > 10000 && iLocal_476 > -1) && func_38())
		{
			if (func_35())
			{
				if (func_126(iLocal_67))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false))
					{
						func_65();
					}
					else
					{
						func_123("BARK");
					}
				}
			}
			iLocal_57 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_67()//Position - 0x4829
{
	float fVar0;
	struct<3> Var1;
	
	if (func_126(iLocal_78))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iLocal_78))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_78, true) };
			if (iLocal_66 == -1)
			{
				iLocal_66 = MISC::GET_GAME_TIMER();
			}
			if (WATER::GET_WATER_HEIGHT(Var1, &fVar0))
			{
				if ((fVar0 - Var1.f_2) > 1f)
				{
					return 1;
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_66) > 3000)
				{
					func_123("AGITATED");
					iLocal_66 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			iLocal_66 = -1;
		}
	}
	return 0;
}

void func_68(int* iParam0)//Position - 0x489C
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_69(struct<3> Param0, int iParam3)//Position - 0x48BC
{
	if (func_126(PLAYER::PLAYER_PED_ID()) && func_126(iLocal_67))
	{
		if (func_126(iLocal_78))
		{
			if ((iParam3 == 1 && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116)) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_78, 1) < 0.9f)
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_116, false, false);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iLocal_106);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_67);
			func_125(iLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_78, Param0), ENTITY::GET_ENTITY_HEADING(iLocal_67), 1, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
			func_70(0, 0);
			iLocal_105 = 15;
		}
		else
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106))
			{
				PED::DETACH_SYNCHRONIZED_SCENE(iLocal_106);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_67);
			func_125(iLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), (Param0.f_0 + 1f), Param0.f_1, Param0.f_2), ENTITY::GET_ENTITY_HEADING(iLocal_67), 1, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
			func_70(0, 0);
			iLocal_105 = 15;
		}
	}
}

void func_70(int iParam0, int iParam1)//Position - 0x49A1
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	
	if (iParam0 == 1)
	{
		if (!CAM::DOES_CAM_EXIST(iLocal_484) && func_126(iLocal_78))
		{
			iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			if (iVar6 == 0)
			{
				Var0 = { 1.11573f, -1.40338f, 0.555789f };
				Var3 = { 0.5f, 0f, 0.3f };
			}
			else if (iVar6 == 1)
			{
				Var0 = { -1.15872f, 1.75252f, 0.761228f };
				Var3 = { 0f, 0f, 0.3f };
			}
			else if (iVar6 == 2)
			{
				Var0 = { -1.89975f, 0.339287f, 0.661881f };
				Var3 = { 0f, 0f, 0.3f };
			}
			else
			{
				Var0 = { 1.38134f, -0.1248f, 0.580783f };
				Var3 = { 0f, 0f, 0.3f };
			}
			iLocal_484 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
			Var7 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f")) };
			Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_78, Var7) };
			Var13 = { Var0 + Var10 };
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_484, iLocal_78, Var13, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_484, iLocal_78, Var10 + Var3, true);
			CAM::SET_CAM_FOV(iLocal_484, 50f);
			CAM::SHAKE_CAM(iLocal_484, "HAND_SHAKE", 0.3f);
			CAM::SET_CAM_DOF_PLANES(iLocal_484, 0f, 0f, 100000f, 100000f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_484))
	{
		if (iParam1 == 1)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_ALL_CAMS(false);
	}
}

int func_71()//Position - 0x4B2E
{
	if (func_126(iLocal_78))
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_477) > 500 || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116)) || func_78())
		{
			return 1;
		}
	}
	return 0;
}

void func_72()//Position - 0x4B6B
{
	TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misschop_vehicleenter_exit", sLocal_474, 8f, -8f, -1, 40, 0f, false, false, false);
	iLocal_477 = MISC::GET_GAME_TIMER();
}

void func_73()//Position - 0x4B9A
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
}

int func_74()//Position - 0x4BB2
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_75()//Position - 0x4BD4
{
	if (!func_114(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) && func_4(PLAYER::PLAYER_PED_ID(), iLocal_67, 1) > 1f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 2f, 0f, 0f), 2f, 20000, 0.25f, 0, 40000f);
	}
}

void func_76(int iParam0)//Position - 0x4C22
{
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	func_68(&iLocal_68);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_67, true);
	PED::SET_PED_INTO_VEHICLE(iLocal_67, iLocal_78, 0);
	TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_475, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
}

int func_77()//Position - 0x4C7A
{
	float fVar0;
	
	if (func_126(iLocal_78) && func_126(iLocal_67))
	{
		if (iLocal_64 == -1)
		{
			fVar0 = func_4(iLocal_78, iLocal_67, 1);
			iLocal_64 = SYSTEM::FLOOR((fVar0 * 1000f));
			if (iLocal_64 < 5000)
			{
				iLocal_64 = 5000;
			}
		}
		if (((func_39(iLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_78, 2f, 0f, 0f), 0) < 1f || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || (iLocal_63 > -1 && (MISC::GET_GAME_TIMER() - iLocal_63) > iLocal_64))
		{
			return 1;
		}
	}
	return 0;
}

int func_78()//Position - 0x4D0F
{
	int iVar0;
	
	if (func_126(iLocal_78))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true));
		if (((((((((((((((((((((((iVar0 == joaat("airbus") || iVar0 == joaat("barracks")) || iVar0 == joaat("barracks2")) || iVar0 == joaat("biff")) || iVar0 == joaat("bus")) || iVar0 == joaat("coach")) || iVar0 == joaat("hauler")) || iVar0 == joaat("mixer")) || iVar0 == joaat("mixer2")) || iVar0 == joaat("packer")) || iVar0 == joaat("pbus")) || iVar0 == joaat("phantom")) || iVar0 == joaat("pounder")) || iVar0 == joaat("riot")) || iVar0 == joaat("rubble")) || iVar0 == joaat("scrap")) || iVar0 == joaat("stockade")) || iVar0 == joaat("stockade3")) || iVar0 == joaat("tiptruck")) || iVar0 == joaat("tiptruck2")) || iVar0 == joaat("towtruck")) || iVar0 == joaat("towtruck2")) || iVar0 == MISC::GET_HASH_KEY("monster" /* GXT: The Liberator */)) || iVar0 == MISC::GET_HASH_KEY("marshall" /* GXT: Marshall */))
		{
			return 1;
		}
	}
	return 0;
}

void func_79()//Position - 0x4E87
{
	int iVar0;
	
	if (func_126(iLocal_78))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_78);
		if (iVar0 == joaat("coach"))
		{
			iLocal_116 = 0;
		}
		else
		{
			iLocal_116 = 1;
		}
	}
}

void func_80()//Position - 0x4EB3
{
	if (func_126(iLocal_78))
	{
		iLocal_473 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(iLocal_78);
		switch (iLocal_473)
		{
			case joaat("LAYOUT_VAN"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_VAN_BOXVILLE"):
			case joaat("LAYOUT_VAN_CADDY"):
			case joaat("LAYOUT_VAN_JOURNEY"):
			case joaat("LAYOUT_VAN_MULE"):
			case joaat("LAYOUT_VAN_POLICE"):
			case joaat("LAYOUT_VAN_TRASH"):
			case joaat("LAYOUT_4X4_DUBSTA"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
				sLocal_475 = "creatures@rottweiler@in_vehicle@van";
				sLocal_474 = "van_ds_open_door_for_chop";
				break;
			
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_DUNE"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_TURISMOR"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
				sLocal_475 = "creatures@rottweiler@in_vehicle@low_car";
				sLocal_474 = "low_ds_open_door_for_chop";
				break;
			
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
				sLocal_475 = "creatures@rottweiler@in_vehicle@4x4";
				sLocal_474 = "std_ds_open_door_for_chop";
				break;
			
			default:
				sLocal_475 = "creatures@rottweiler@in_vehicle@std_car";
				sLocal_474 = "std_ds_open_door_for_chop";
				break;
		}
		if (ENTITY::GET_ENTITY_MODEL(iLocal_78) == joaat("brawler"))
		{
			sLocal_475 = "creatures@rottweiler@in_vehicle@4x4";
			sLocal_474 = "std_ds_open_door_for_chop";
		}
	}
}

int func_81()//Position - 0x4FC1
{
	if ((((((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1) && VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0, false)) && !func_23())
	{
		return 1;
	}
	return 0;
}

int func_82()//Position - 0x5057
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-14.5f, -1437.2f, 31.1f))
		{
			return 1;
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(7.6f, 537.3f, 176f))
		{
			return 1;
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(130.2632f, -1295.0345f, 28.2695f))
		{
			return 1;
		}
	}
	return 0;
}

void func_83()//Position - 0x50D5
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 2f, 0f, 0f) };
	Var9 = { Var3 - Var0 };
	Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), -2f, 0f, 0f) };
	Var12 = { Var6 - Var0 };
	if (SYSTEM::VMAG(Var9) < SYSTEM::VMAG(Var12))
	{
		iLocal_115 = 1;
	}
	else
	{
		iLocal_115 = 0;
	}
}

void func_84()//Position - 0x514D
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	if ((iLocal_337 != 5 || (MISC::GET_GAME_TIMER() - iLocal_338) < 1000) || bLocal_393 == 0)
	{
		return;
	}
	func_98();
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 102)
	{
		if (func_97(iVar4))
		{
			Var0 = { func_96(iVar4, 1) };
			if (!func_95(Var0))
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_67, true), Var0, true);
				if (fVar3 < fLocal_345[2] && fVar3 < fLocal_390)
				{
					iLocal_339[2] = iVar4;
					fLocal_345[2] = fVar3;
					Local_351[2 /*3*/] = { func_96(iVar4, 0) };
					Local_367[2 /*3*/] = { Var0 };
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 76)
	{
		if (func_94(iVar4))
		{
			Var0 = { func_93(iVar4, 1) };
			if (!func_95(Var0))
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_67, true), Var0, true);
				if (fVar3 < fLocal_345[1] && fVar3 < fLocal_390)
				{
					iLocal_339[1] = iVar4;
					fLocal_345[1] = fVar3;
					Local_351[1 /*3*/] = { func_93(iVar4, 0) };
					Local_367[1 /*3*/] = { Var0 };
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 45)
	{
		if (func_92(iVar4))
		{
			Var0 = { func_91(iVar4, 1) };
			if (!func_95(Var0))
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_67, true), Var0, true);
				if (fVar3 < fLocal_345[0] && fVar3 < fLocal_390)
				{
					iLocal_339[0] = iVar4;
					fLocal_345[0] = fVar3;
					Local_351[0 /*3*/] = { func_91(iVar4, 0) };
					Local_367[0 /*3*/] = { Var0 };
				}
			}
		}
		iVar4++;
	}
	if (func_90())
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50)
		{
			if (!func_26(iVar4) && func_89(iVar4))
			{
				Var0 = { func_88(iVar4, 1) };
				if (!func_95(Var0))
				{
					fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_67, true), Var0, true);
					if (fVar3 < fLocal_345[3] && fVar3 < fLocal_390)
					{
						iLocal_339[3] = iVar4;
						fLocal_345[3] = fVar3;
						Local_351[3 /*3*/] = { func_88(iVar4, 0) };
						Local_367[3 /*3*/] = { Var0 };
					}
				}
			}
			iVar4++;
		}
	}
	if (func_87())
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 50)
		{
			if (!func_25(iVar4) && func_86(iVar4))
			{
				Var0 = { func_85(iVar4, 1) };
				if (!func_95(Var0))
				{
					fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_67, true), Var0, true);
					if (fVar3 < fLocal_345[4] && fVar3 < fLocal_390)
					{
						iLocal_339[4] = iVar4;
						fLocal_345[4] = fVar3;
						Local_351[4 /*3*/] = { func_85(iVar4, 0) };
						Local_367[4 /*3*/] = { Var0 };
					}
				}
			}
			iVar4++;
		}
	}
	iLocal_338 = MISC::GET_GAME_TIMER();
}

Vector3 func_85(int iParam0, int iParam1)//Position - 0x5460
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.1875f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.7903f, -16.5774f;
			}
			break;
		
		case 2:
			return 1590.5997f, -2810.174f, 3.4494f;
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.1057f, 42.6543f;
			}
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 1134.4216f, -2607.0237f, 14.77071f;
			}
			else
			{
				return 1133.6882f, -2605.0728f, 14.9729f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 368.93164f, -2118.5327f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.7556f, 16.1688f;
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.0242f, -1618.7767f, 111.8313f;
			}
			break;
		
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		
		case 8:
			return 17.5926f, -1213.2073f, 28.3678f;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return -910.01715f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.5511f, 31.8047f;
			}
			break;
		
		case 10:
			if (iParam1 == 1)
			{
				return 1237.7278f, -1099.1497f, 37.52579f;
			}
			else
			{
				return 1231.9734f, -1102.3076f, 34.4289f;
			}
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.12582f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		
		case 12:
			if (iParam1 == 1)
			{
				return -1900.9506f, 1389.5819f, 218.1509f;
			}
			else
			{
				return -1907.5149f, 1388.69f, 217.9728f;
			}
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 467.36896f, -730.75525f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		
		case 16:
			if (iParam1 == 1)
			{
				return -1183.1521f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.5385f, -525.5859f, 39.9114f;
			}
			break;
		
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -1169.3975f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.4877f, -65.4649f, 44.6563f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return 1679.0564f, 39.44059f, 160.77364f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.38968f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.67746f;
			}
			else
			{
				return -1529.7219f, 871.4257f, 180.6421f;
			}
			break;
		
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		
		case 26:
			return -2809.3538f, 1449.643f, 99.928f;
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 3144.0452f, 2184.4133f, -5.2961f;
			}
			else
			{
				return 3144.0452f, 2184.4133f, -5.2961f;
			}
			break;
		
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		
		case 31:
			return 1367.4128f, 2180.6316f, 96.6914f;
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.1313f, 89.7842f;
			}
			break;
		
		case 33:
			return 889.3209f, 2870.0522f, 55.2834f;
			break;
		
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		
		case 35:
			return -390.384f, 2963.2605f, 18.2713f;
			break;
		
		case 36:
			return 71.6642f, 3279.3682f, 30.3918f;
			break;
		
		case 37:
			return 1924.1864f, 3471.2563f, 50.3238f;
			break;
		
		case 38:
			return -583.1569f, 3580.3752f, 266.2471f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return 2514.3015f, 3789.5193f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		
		case 40:
			if (iParam1 == 1)
			{
				return 1517.6129f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.0475f, 3857.2168f, 22.2905f;
			}
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -530.27386f, 4474.3584f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.6436f, 31.7384f;
			}
			break;
		
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.8132f, 4441.683f, 1.8007f;
			}
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.0546f, 4585.1943f, 46.6362f;
			}
			break;
		
		case 44:
			return 2437.5452f, 4779.9595f, 33.5101f;
			break;
		
		case 45:
			return -1441.4948f, 5414.888f, 23.3f;
			break;
		
		case 46:
			return 2196.2507f, 5599.034f, 52.7129f;
			break;
		
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.6104f, 48.8487f;
			}
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return -378.41922f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		
		case 49:
			return 440.9546f, 6459.6416f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_86(int iParam0)//Position - 0x5CAC
{
	switch (iParam0)
	{
		case 2:
		case 14:
		case 18:
		case 25:
			return 0;
			break;
		
		case 16:
			if (BitTest(Global_32443, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_87()//Position - 0x5CF0
{
	return Global_113810.f_10052.f_125.f_2;
}

Vector3 func_88(int iParam0, int iParam1)//Position - 0x5D03
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1034.2743f, -3026.2754f, 4.90197f;
			}
			else
			{
				return 1026.7053f, -3026.0515f, 13.3323f;
			}
			break;
		
		case 1:
			if (iParam1 == 1)
			{
				return -1040.9789f, -2743.5093f, 12.94983f;
			}
			else
			{
				return -1048.6035f, -2734.218f, 12.8895f;
			}
			break;
		
		case 2:
			if (iParam1 == 1)
			{
				return -93.9012f, -2711.3145f, 5.01752f;
			}
			else
			{
				return -81.1199f, -2726.5112f, 7.74f;
			}
			break;
		
		case 3:
			return -917.6909f, -2527.3843f, 22.3218f;
			break;
		
		case 4:
			if (iParam1 == 1)
			{
				return 746.45f, -2310.32f, 26.03f;
			}
			else
			{
				return 748.922f, -2298.114f, 19.624f;
			}
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 1509.7421f, -2126.0376f, 75.21973f;
			}
			else
			{
				return 1509.0994f, -2120.551f, 75.61f;
			}
			break;
		
		case 6:
			return 76.0032f, -1970.4752f, 20.1302f;
			break;
		
		case 7:
			if (iParam1 == 1)
			{
				return -1.82327f, -1732.6144f, 28.29367f;
			}
			else
			{
				return 0.067f, -1734.027f, 30.606f;
			}
			break;
		
		case 8:
			if (iParam1 == 1)
			{
				return -1377.7656f, -1409.837f, 4.63205f;
			}
			else
			{
				return -1380.4912f, -1404.3735f, 1.7273f;
			}
			break;
		
		case 9:
			return 2864.8079f, -1372.8402f, 1.3151f;
			break;
		
		case 10:
			return -1035.8115f, -1273.0769f, 0.8919f;
			break;
		
		case 11:
			return -1821.1364f, -1201.3599f, 18.1698f;
			break;
		
		case 12:
			return 643.0116f, -1035.6504f, 35.8891f;
			break;
		
		case 13:
			return -119.0616f, -977.2228f, 303.23f;
			break;
		
		case 14:
			if (iParam1 == 1)
			{
				return -1243.1036f, -507.8057f, 30.10775f;
			}
			else
			{
				return -1238.7655f, -506.7138f, 37.6019f;
			}
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 83.79993f, -431.9302f, 36.55315f;
			}
			else
			{
				return 86.4f, -433.9f, 36f;
			}
			break;
		
		case 16:
			return 1095.9534f, -210.4642f, 54.9477f;
			break;
		
		case 17:
			return -1724.5217f, -196f, 57.2387f;
			break;
		
		case 18:
			return 265.374f, -199.546f, 60.795f;
			break;
		
		case 19:
			if (iParam1 == 1)
			{
				return -3020.4749f, 36.55431f, 9.11777f;
			}
			else
			{
				return -3021.4f, 38f, 10.2945f;
			}
			break;
		
		case 20:
			if (iParam1 == 1)
			{
				return -347.52768f, 53.37161f, 52.97814f;
			}
			else
			{
				return -347.3f, 54.865f, 53.921f;
			}
			break;
		
		case 21:
			return 1052.2484f, 167.611f, 87.7406f;
			break;
		
		case 22:
			return -2303.7976f, 217.4301f, 166.6017f;
			break;
		
		case 23:
			return -138.9423f, 868.3885f, 231.6956f;
			break;
		
		case 24:
			if (iParam1 == 1)
			{
				return 688.1073f, 1204.6713f, 323.3438f;
			}
			else
			{
				return 682.4505f, 1204.9277f, 344.3322f;
			}
			break;
		
		case 25:
			return -1548.7627f, 1380.1727f, 125.3728f;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return -432.14f, 1598.46f, 355.73f;
			}
			else
			{
				return -432.0034f, 1597.1292f, 356.613f;
			}
			break;
		
		case 27:
			return 3081.93f, 1648.29f, 2.42f;
			break;
		
		case 28:
			return -594.38f, 2092f, 130.57f;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 3069.213f, 2160.9883f, 1.1327f;
			}
			else
			{
				return 3063.5828f, 2212.63f, 2.5863f;
			}
			break;
		
		case 30:
			return 180.21f, 2263.83f, 91.87f;
			break;
		
		case 31:
			if (iParam1 == 1)
			{
				return 926.96f, 2445.36f, 49.09f;
			}
			else
			{
				return 929.6946f, 2444.1155f, 48.43f;
			}
			break;
		
		case 32:
			if (iParam1 == 1)
			{
				return -2380.2124f, 2655.1758f, 0.832f;
			}
			else
			{
				return -2379.9482f, 2656.9534f, 1.4906f;
			}
			break;
		
		case 33:
			return -861.38f, 2753.3f, 12.867f;
			break;
		
		case 34:
			return -289.0195f, 2848.8533f, 53.331f;
			break;
		
		case 35:
			if (iParam1 == 1)
			{
				return 288.84085f, 2871.9116f, 42.6422f;
			}
			else
			{
				return 265.7415f, 2866.416f, 73.19f;
			}
			break;
		
		case 36:
			if (iParam1 == 1)
			{
				return 1297.378f, 2988.7102f, 40.11787f;
			}
			else
			{
				return 1294.2f, 3001.9f, 57.7f;
			}
			break;
		
		case 37:
			return 1568.65f, 3572.8f, 32.294f;
			break;
		
		case 38:
			return -1608.62f, 4274.25f, 102.95f;
			break;
		
		case 39:
			if (iParam1 == 1)
			{
				return -3.51812f, 4332.4507f, 31.21602f;
			}
			else
			{
				return -1.9585f, 4334.787f, 32.3702f;
			}
			break;
		
		case 40:
			return 1336.7367f, 4307.1997f, 37.1325f;
			break;
		
		case 41:
			if (iParam1 == 1)
			{
				return -1007.10284f, 4836.936f, 268.5488f;
			}
			else
			{
				return -1001.48f, 4851.322f, 273.6112f;
			}
			break;
		
		case 42:
			return 1877.09f, 5078.98f, 50.49f;
			break;
		
		case 43:
			if (iParam1 == 1)
			{
				return 3366.0986f, 5182.4614f, 0.68317f;
			}
			else
			{
				return 3436.4526f, 5176.911f, 6.386f;
			}
			break;
		
		case 44:
			if (iParam1 == 1)
			{
				return -576.12f, 5472.24f, 59.28f;
			}
			else
			{
				return -578.8057f, 5470.164f, 59.0295f;
			}
			break;
		
		case 45:
			return 444.6518f, 5571.7812f, 780.1888f;
			break;
		
		case 46:
			return -402.9948f, 6319.2793f, 31.2256f;
			break;
		
		case 47:
			return 1439.5989f, 6335.2075f, 22.9485f;
			break;
		
		case 48:
			if (iParam1 == 1)
			{
				return 1466.109f, 6552.2656f, 12.95773f;
			}
			else
			{
				return 1469.6321f, 6552.1743f, 13.6854f;
			}
			break;
		
		case 49:
			if (iParam1 == 1)
			{
				return 66.19278f, 6668.8877f, 30.80633f;
			}
			else
			{
				return 66.7136f, 6663.1978f, 30.7821f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_89(int iParam0)//Position - 0x64E3
{
	switch (iParam0)
	{
		case 3:
		case 9:
		case 10:
		case 13:
		case 27:
		case 38:
			return 0;
			break;
		
		case 14:
			if (BitTest(Global_32443, 7))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_90()//Position - 0x6533
{
	return Global_113810.f_10052.f_122.f_2;
}

Vector3 func_91(int iParam0, bool bParam1)//Position - 0x6546
{
	switch (iParam0)
	{
		case 0:
			return 473.1829f, -2643.1838f, 4.7209f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return 291.41f, -2090.78f, 16.29f;
			}
			else
			{
				return 289.2062f, -2091.221f, 16.0234f;
			}
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return 1173.8392f, -1499.7808f, 33.84875f;
			}
			else
			{
				return 1173.5656f, -1495.7628f, 34.1121f;
			}
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -461.71393f, -1699.2019f, 17.85122f;
			}
			else
			{
				return -462f, -1701f, 18.8f;
			}
			break;
		
		case 4:
			return -1384.6276f, -521.0416f, 30.084f;
			break;
		
		case 5:
			return -521.5692f, -601.7532f, 29.4482f;
			break;
		
		case 6:
			return -664.5f, 165.4552f, 58.3821f;
			break;
		
		case 7:
			return 329.3609f, -190.5986f, 53.2262f;
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return -477.44f, -1052.99f, 39.81f;
			}
			else
			{
				return -478.7744f, -1051.0792f, 40.93f;
			}
			break;
		
		case 9:
			return -1268.0712f, -1917.4076f, 4.8583f;
			break;
		
		case 10:
			return -1221.908f, -2771.7622f, 13.0545f;
			break;
		
		case 11:
			return -3088.6682f, 652.9629f, 0.989f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return -629.3048f, 2036.0667f, 157.3307f;
			}
			else
			{
				return -627.2166f, 2035.032f, 157.5585f;
			}
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return -2071.9026f, 3411.5042f, 30.36414f;
			}
			else
			{
				return -2048.4832f, 3406.1624f, 31.1504f;
			}
			break;
		
		case 14:
			return -424.0321f, 4012.767f, 80.4744f;
			break;
		
		case 15:
			return 1983.1f, 5174.5f, 47.6f;
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 2341.1f, 2576f, 45.7f;
			}
			else
			{
				return 2340.17f, 2573.89f, 45.77f;
			}
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 1663.9004f, -25.91945f, 172.77475f;
			}
			else
			{
				return 1663.96f, -24.1101f, 172.7747f;
			}
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return 2614.4507f, 1695.1271f, 26.59907f;
			}
			else
			{
				return 2617.729f, 1693.4167f, 30.8743f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -187.31f, 1545.16f, 314.07f;
			}
			else
			{
				return -187.0338f, 1555.6766f, 321.2431f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 859.5025f, 2426.0396f, 53.18517f;
			}
			else
			{
				return 868.7573f, 2423.5361f, 60.8942f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return -1822.0751f, 805.7814f, 137.7265f;
			}
			else
			{
				return -1822.9667f, 803.8147f, 138.2005f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -1852.9221f, 2054.4197f, 139.98405f;
			}
			else
			{
				return -1851.6283f, 2053.836f, 139.9841f;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -1075.5149f, 4898.4966f, 213.27675f;
			}
			else
			{
				return -1070.6506f, 4898.9336f, 213.2752f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1301.56f, 4306.6f, 36.39f;
			}
			else
			{
				return 1300.1f, 4308.1f, 37.3f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return -436.44f, 5983.5f, 30.49f;
			}
			else
			{
				return -437.94f, 5985.04f, 31.29f;
			}
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 1840.5687f, 3693.7703f, 33.2668f;
			}
			else
			{
				return 1838.577f, 3692.028f, 33.6172f;
			}
			break;
		
		case 27:
			return 533.1f, -23.8f, 70.6f;
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 445.83f, -986.48f, 29.69f;
			}
			else
			{
				return 446.4f, -988.5f, 29.77f;
			}
			break;
		
		case 29:
			return -1119.4977f, -847.3371f, 18.6886f;
			break;
		
		case 30:
			return 391.2f, -1603.9f, 28.38f;
			break;
		
		case 31:
			return -890.8f, -2386.2f, 13.4f;
			break;
		
		case 32:
			if (bParam1 == 1)
			{
				return 282.75f, 953.05f, 209.95f;
			}
			else
			{
				return 284.7f, 954.2f, 210.1514f;
			}
			break;
		
		case 33:
			return -2003.1145f, 544.7549f, 114.5077f;
			break;
		
		case 34:
			if (bParam1 == 1)
			{
				return -397.57858f, 1127.3531f, 321.72913f;
			}
			else
			{
				return -386.8739f, 1142.4197f, 321.5892f;
			}
			break;
		
		case 35:
			return -1521.8113f, 1560.201f, 106.9392f;
			break;
		
		case 36:
			return 1391.9453f, 3616.6548f, 37.9259f;
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 45.37f, -1911.45f, 20.79f;
			}
			else
			{
				return 40.5177f, -1910.727f, 20.9706f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return 68.14f, 3749.36f, 38.73f;
			}
			else
			{
				return 70.3786f, 3755.6055f, 38.7487f;
			}
			break;
		
		case 39:
			return 119.45f, -755.29f, 258.15f;
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return 156.35f, -1192.1f, 28.37f;
			}
			else
			{
				return 160.4134f, -1191.7f, 28.87f;
			}
			break;
		
		case 41:
			return 23.9296f, -633.9206f, 6.5084f;
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return 31.67f, 6542.78f, 30.44f;
			}
			else
			{
				return 30.9162f, 6546.791f, 30.4058f;
			}
			break;
		
		case 43:
			if (bParam1)
			{
				return 1333.0566f, 4381.278f, 43.3703f;
			}
			else
			{
				return 1331.3549f, 4392.887f, 44.012f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -1147.31f, 4939.27f, 221.27f;
			}
			else
			{
				return -1149.3918f, 4938.771f, 221.3682f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_92(int iParam0)//Position - 0x6CD4
{
	switch (iParam0)
	{
		case 33:
		case 39:
		case 41:
			return 0;
			break;
	}
	return 1;
}

Vector3 func_93(int iParam0, bool bParam1)//Position - 0x6CFD
{
	switch (iParam0)
	{
		case 0:
			return 131.2f, 6920.1f, 20.8f;
			break;
		
		case 1:
			if (bParam1 == 1)
			{
				return -1048.5695f, 4917.414f, 208.4216f;
			}
			else
			{
				return -1046.2772f, 4918.7393f, 211.5379f;
			}
			break;
		
		case 2:
			return -2358.46f, 3251.397f, 100.5504f;
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				return -247.62189f, 6331.341f, 31.42602f;
			}
			else
			{
				return -249.9504f, 6331.219f, 32.7262f;
			}
			break;
		
		case 4:
			if (bParam1 == 1)
			{
				return -140.9f, -2491.45f, 43.45f;
			}
			else
			{
				return -141.0976f, -2498.239f, 40.0124f;
			}
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return -2924.6968f, 46.50282f, 10.60369f;
			}
			else
			{
				return -2925.7f, 47.4f, 11.6f;
			}
			break;
		
		case 6:
			return -793.1981f, -726.4421f, 26.28f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return 124.00925f, -673.00964f, 41.02729f;
			}
			else
			{
				return 123.5196f, -674.2917f, 41.4945f;
			}
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				return 1195.7374f, -1481.6945f, 33.8595f;
			}
			else
			{
				return 1194.7092f, -1482.4723f, 33.9594f;
			}
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return -35.88743f, 1945.7378f, 189.18681f;
			}
			else
			{
				return -35.5254f, 1947.2894f, 189.186f;
			}
			break;
		
		case 10:
			if (bParam1)
			{
				return 753.4579f, 4174.9956f, 39.8011f;
			}
			else
			{
				return 751.72f, 4175.14f, 40.95f;
			}
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 1791.2565f, 4592.3833f, 36.68283f;
			}
			else
			{
				return 1789.8f, 4592.4f, 36.78f;
			}
			break;
		
		case 12:
			return 341.311f, 2618.9182f, 43.5124f;
			break;
		
		case 13:
			return 442.3755f, -223.602f, 55.0215f;
			break;
		
		case 14:
			if (bParam1 == 1)
			{
				return 1291.02f, -1760.94f, 51.05f;
			}
			else
			{
				return 1286.5f, -1754.4f, 52f;
			}
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 1659.4376f, 5.4271f, 165.1176f;
			}
			else
			{
				return 1658.621f, 6.7752f, 166.1676f;
			}
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				return 1645.91f, 4866.72f, 40.98f;
			}
			else
			{
				return 1647.3992f, 4865.8394f, 41f;
			}
			break;
		
		case 17:
			return -1144.5892f, -2004.4523f, 12.3803f;
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				return -1047.3f, -520.6f, 35f;
			}
			else
			{
				return -1048.32f, -521.2f, 35.14f;
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				return -1576.0459f, -587.82574f, 33.97909f;
			}
			else
			{
				return -1576.8167f, -586.3887f, 34.8528f;
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 953.44f, -123.42f, 73.35f;
			}
			else
			{
				return 954.5f, -121.34f, 74.18f;
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				return 1134.2009f, -665.94135f, 56.08261f;
			}
			else
			{
				return 1135.4014f, -663.7875f, 56.088f;
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return -2196.1975f, 248.9123f, 173.612f;
			}
			else
			{
				return -2195.0288f, 250.4256f, 173.6017f;
			}
			break;
		
		case 23:
			return 29.2f, 3635.4f, 39.8f;
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return 1724.4291f, 3299.0234f, 40.2235f;
			}
			else
			{
				return 1721.9596f, 3300.4644f, 40.3835f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 2617.3206f, 3659.452f, 100.38673f;
			}
			else
			{
				return 2612.7124f, 3662.5642f, 101.1074f;
			}
			break;
		
		case 26:
			return -459.9625f, 1101.076f, 328.0211f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 2432.6072f, 4994.3335f, 45.25828f;
			}
			else
			{
				return 2430.9065f, 4995.561f, 45.2685f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return 3722.4556f, 4521.837f, 20.39456f;
			}
			else
			{
				return 3724.5f, 4524.5f, 21.6f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return -446.9024f, 5997.598f, 30.3407f;
			}
			else
			{
				return -446.045f, 6000.882f, 31.9163f;
			}
			break;
		
		case 30:
			return 3291.4f, 5192.5f, 18.4f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 390.81f, -1436.07f, 28.45f;
			}
			else
			{
				return 388.7f, -1434.3f, 29.8f;
			}
			break;
		
		case 32:
			return -445.26f, -442.49f, 32.26f;
			break;
		
		case 33:
			if (bParam1)
			{
				return -1501.46f, 858.17f, 180.59f;
			}
			else
			{
				return -1500.08f, 857.59f, 180.59f;
			}
			break;
		
		case 34:
			return 2822.2f, -741.4f, 1.8f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return -3166.9783f, 1102.6224f, 19.80827f;
			}
			else
			{
				return -3165.6125f, 1102.2405f, 19.8928f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 1842.8818f, 3670.4568f, 32.68f;
			}
			else
			{
				return 1841.114f, 3675.253f, 34.086f;
			}
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				return 1828.7944f, 2605.504f, 44.61582f;
			}
			else
			{
				return 1830.535f, 2603.828f, 45.7491f;
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				return -32.61f, -1089.67f, 25.42f;
			}
			else
			{
				return -40.0528f, -1084.016f, 26.6224f;
			}
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 1439.0122f, 6336.812f, 22.96477f;
			}
			else
			{
				return 1445.544f, 6334.057f, 23.975f;
			}
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				return -782.5126f, -1352.2454f, 8.0001f;
			}
			else
			{
				return -784.4851f, -1351.364f, 8.1001f;
			}
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return 962.88055f, -1826.4192f, 30.07195f;
			}
			else
			{
				return 963.1673f, -1831.149f, 36.2055f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -1246.155f, -1531.6471f, 3.2962f;
			}
			else
			{
				return -1246.494f, -1533.677f, 4.5262f;
			}
			break;
		
		case 43:
			if (bParam1 == 1)
			{
				return -765.5466f, 698.8101f, 143.36932f;
			}
			else
			{
				return -761.1058f, 701.9452f, 145.05f;
			}
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -512.10944f, 28.86313f, 43.6153f;
			}
			else
			{
				return -513.4391f, 30.9069f, 43.9018f;
			}
			break;
		
		case 45:
			if (bParam1 == 1)
			{
				return 781.38385f, 1292.073f, 359.29965f;
			}
			else
			{
				return 780.3879f, 1295.705f, 361.6941f;
			}
			break;
		
		case 46:
			return 208.69f, 337.76f, 104.64f;
			break;
		
		case 47:
			if (bParam1 == 1)
			{
				return -1889.99f, 2078.38f, 140f;
			}
			else
			{
				return -1890.24f, 2073.26f, 140.11f;
			}
			break;
		
		case 48:
			return 153.6156f, -3073.9983f, 4.8962f;
			break;
		
		case 49:
			if (bParam1)
			{
				return -306.2449f, -1180.5382f, 22.711f;
			}
			else
			{
				return -304.0894f, -1180.886f, 23.9493f;
			}
			break;
		
		case 50:
			return -2006.9866f, -556.4998f, 11.8813f;
			break;
		
		case 51:
			if (bParam1 == 1)
			{
				return -590.20795f, -289.8196f, 40.68631f;
			}
			else
			{
				return -588.1934f, -290.4782f, 43.7101f;
			}
			break;
		
		case 52:
			return -1795.8262f, -855.7111f, 8.2048f;
			break;
		
		case 53:
			return -1557.108f, -1155.2465f, 2.9158f;
			break;
		
		case 54:
			if (bParam1 == 1)
			{
				return -1470.71f, -1389.33f, 1.58f;
			}
			else
			{
				return -1467.4833f, -1387.5068f, 3.1432f;
			}
			break;
		
		case 55:
			return -684.8126f, -180.648f, 48.02f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return -1311.4127f, 640.11536f, 136.92444f;
			}
			else
			{
				return -1307.062f, 641.4211f, 138.0582f;
			}
			break;
		
		case 57:
			return 2493.6855f, 4963.541f, 43.7358f;
			break;
		
		case 58:
			if (bParam1 == 1)
			{
				return 1392.76f, 3602.94f, 33.98f;
			}
			else
			{
				return 1392.6086f, 3605.7986f, 34.9939f;
			}
			break;
		
		case 59:
			if (bParam1 == 1)
			{
				return -527.33f, 5295.7f, 73.17f;
			}
			else
			{
				return -535.4436f, 5297.496f, 76.3891f;
			}
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return -564.26f, 5353.13f, 69.23f;
			}
			else
			{
				return -551.5837f, 5349.4043f, 75.253f;
			}
			break;
		
		case 61:
			if (bParam1 == 1)
			{
				return 3.18f, -1827.1f, 24.22f;
			}
			else
			{
				return 0.1911f, -1825.9047f, 24.3295f;
			}
			break;
		
		case 62:
			if (bParam1 == 1)
			{
				return 62.25f, 3681.06f, 38.84f;
			}
			else
			{
				return 63.8867f, 3683.49f, 39.1543f;
			}
			break;
		
		case 63:
			return 155.384f, -741.179f, 258.6519f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return 126.61f, -1206.29f, 28.3f;
			}
			else
			{
				return 124.265f, -1205.882f, 28.2951f;
			}
			break;
		
		case 65:
			return 27.449f, -625.31f, 15.462f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -129.04f, -662.04f, 39.51f;
			}
			else
			{
				return -129.0374f, -659.2689f, 41.0016f;
			}
			break;
		
		case 67:
			if (bParam1)
			{
				return 1138.62f, -1598.56f, 33.69f;
			}
			else
			{
				return 1138.63f, -1596.61f, 35.07f;
			}
			break;
		
		case 68:
			if (bParam1)
			{
				return 1149.68f, -1525.56f, 33.84f;
			}
			else
			{
				return 1147.55f, -1527.83f, 36.01f;
			}
			break;
		
		case 69:
			if (bParam1)
			{
				return 297.48f, -1448.79f, 28.97f;
			}
			else
			{
				return 296.44f, -1450.75f, 30.4f;
			}
			break;
		
		case 70:
			if (bParam1)
			{
				return 324.21f, -1392.68f, 31.51f;
			}
			else
			{
				return 322.27f, -1393.75f, 32.79f;
			}
			break;
		
		case 71:
			if (bParam1)
			{
				return 293.2f, -597.92f, 42.28f;
			}
			else
			{
				return 294.3f, -598.1f, 43.73f;
			}
			break;
		
		case 72:
			if (bParam1)
			{
				return 358f, -592.66f, 27.79f;
			}
			else
			{
				return 357.07f, -590.63f, 29.08f;
			}
			break;
		
		case 73:
			if (bParam1)
			{
				return -495.45f, -326.18f, 33.5f;
			}
			else
			{
				return -496.4f, -324.7f, 34.75f;
			}
			break;
		
		case 74:
			if (bParam1)
			{
				return -450.91f, -351.93f, 33.5f;
			}
			else
			{
				return -449.82f, -353.49f, 34.75f;
			}
			break;
		
		case 75:
			return -2258.833f, 323.9413f, 184.9015f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_94(int iParam0)//Position - 0x7AD5
{
	switch (iParam0)
	{
		case 2:
		case 17:
		case 55:
		case 63:
		case 65:
			return 0;
			break;
	}
	return 1;
}

int func_95(struct<3> Param0)//Position - 0x7B0A
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_96(int iParam0, bool bParam1)//Position - 0x7B34
{
	switch (iParam0)
	{
		case 0:
			if (bParam1 == 1)
			{
				return -1760.36f, 428.6f, 126.31f;
			}
			else
			{
				return -1756.974f, 427.531f, 126.7f;
			}
			break;
		
		case 1:
			return -1595.7422f, 2799.3706f, 16.0205f;
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				return -197.14859f, 1482.6846f, 288.253f;
			}
			else
			{
				return -200.0114f, 1481.6971f, 289.4303f;
			}
			break;
		
		case 3:
			return 256.77f, 2841.0466f, 42.6599f;
			break;
		
		case 4:
			return -1360.2231f, 4435.7515f, 27.7754f;
			break;
		
		case 5:
			return 64.63f, 7051.2534f, 15.8272f;
			break;
		
		case 6:
			return -456.2838f, 1593.7988f, 358.0119f;
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				return -3114.617f, 749.84454f, 11.59352f;
			}
			else
			{
				return -3111.6143f, 749.2816f, 12.6285f;
			}
			break;
		
		case 8:
			return 713.6797f, 4095.9688f, 33.765f;
			break;
		
		case 9:
			return 255.2671f, 2586.2815f, 43.9619f;
			break;
		
		case 10:
			return -1292.64f, -3345.82f, 23.27f;
			break;
		
		case 11:
			return 3111.531f, 2214.8481f, -8.6457f;
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				return 555.82f, -839.05f, 39.84f;
			}
			else
			{
				return 555f, -837.81f, 55.08f;
			}
			break;
		
		case 13:
			return -2360f, 3245f, 91.9f;
			break;
		
		case 14:
			return 1691.1517f, 2640.859f, 54.0693f;
			break;
		
		case 15:
			return 1982.37f, 6203.64f, 41.15f;
			break;
		
		case 16:
			return -2979f, 1588f, 23.3f;
			break;
		
		case 17:
			return 963.5308f, -1824.0399f, 30.0708f;
			break;
		
		case 18:
			return -295.41867f, 6188.7856f, 30.48932f;
			break;
		
		case 19:
			return -1778f, 124f, 67.9f;
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				return 157.57587f, 3133.9941f, 42.45733f;
			}
			else
			{
				return 161.2925f, 3131.8538f, 42.5892f;
			}
			break;
		
		case 21:
			return -888f, 5406f, 30.5f;
			break;
		
		case 22:
			return -1840f, 793f, 138.7f;
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return -495.80392f, -1750.2067f, 17.42509f;
			}
			else
			{
				return -495.9968f, -1747.231f, 18.5194f;
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				return -1764.695f, -265.58093f, 47.6187f;
			}
			else
			{
				return -1763.3588f, -263.2062f, 47.1481f;
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 548.0715f, -1642.4506f, 27.2033f;
			}
			else
			{
				return 548.5943f, -1642.603f, 27.4425f;
			}
			break;
		
		case 26:
			return 736.0563f, 2595.556f, 72.9165f;
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 701.0009f, -1179.7015f, 23.28737f;
			}
			else
			{
				return 699.2748f, -1181.6705f, 33.2608f;
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				return -1146.74f, 4938.93f, 221.27f;
			}
			else
			{
				return -1149.437f, 4940.362f, 221.3282f;
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 2543.91f, -432.76f, 93.12f;
			}
			else
			{
				return 2513.5347f, -442.8484f, 113.0888f;
			}
			break;
		
		case 30:
			return -553.1764f, -2239.8767f, 121.3704f;
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				return 987.16f, -108.02f, 73.3f;
			}
			else
			{
				return 987.15f, -105.88f, 74.13f;
			}
			break;
		
		case 32:
			return -1048f, -836f, 10.5f;
			break;
		
		case 33:
			return 312.6026f, 6606.8965f, 27.8835f;
			break;
		
		case 34:
			return -37.21f, 2871.26f, 58.61f;
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				return 61.91f, 3690.51f, 38.83f;
			}
			else
			{
				return 59f, 3692f, 38.92f;
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				return 2933.33f, 4617.07f, 47.72f;
			}
			else
			{
				return 2934.499f, 4617.067f, 47.736f;
			}
			break;
		
		case 37:
			return 57.8219f, -1932.1208f, 20.4939f;
			break;
		
		case 38:
			return 378.26f, -334.3f, 45.63f;
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				return 2673.6624f, 2793.7021f, 31.8124f;
			}
			else
			{
				return 2676.0454f, 2793.2493f, 39.5934f;
			}
			break;
		
		case 40:
			return -1582.278f, 770.3486f, 188.1942f;
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				return -1641.139f, -1032.8152f, 4.63165f;
			}
			else
			{
				return -1640.5464f, -1034.1287f, 4.6074f;
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				return -151.09f, -214.36f, 44.73f;
			}
			else
			{
				return -159.7137f, -209.1721f, 48.938f;
			}
			break;
		
		case 43:
			return -1276.9862f, -2451.8862f, 72.0481f;
			break;
		
		case 44:
			if (bParam1 == 1)
			{
				return -403.58267f, 1056.2117f, 322.84143f;
			}
			else
			{
				return -402f, 1053f, 323f;
			}
			break;
		
		case 45:
			return 2728.9866f, 1576.3821f, 65.5818f;
			break;
		
		case 46:
			if (bParam1 == 1)
			{
				return -221.27f, 6133.62f, 30.48f;
			}
			else
			{
				return -215.9002f, 6125.27f, 56.278f;
			}
			break;
		
		case 47:
			return 2092.2253f, 2492.3015f, 89.4046f;
			break;
		
		case 48:
			return -1124.666f, -967.1614f, 5.6319f;
			break;
		
		case 49:
			if (bParam1 == 1)
			{
				return -405.5299f, 323.40634f, 107.72269f;
			}
			else
			{
				return -405f, 325f, 108.7f;
			}
			break;
		
		case 50:
			return -1087.31f, -2429.3f, 13f;
			break;
		
		case 51:
			return -1042.6445f, 879.7763f, 160.2144f;
			break;
		
		case 52:
			if (bParam1 == 1)
			{
				return -1081.2289f, 678.94543f, 141.80563f;
			}
			else
			{
				return -1078.3499f, 682.2944f, 144.904f;
			}
			break;
		
		case 53:
			return -402.0679f, 1355.0619f, 329.8384f;
			break;
		
		case 54:
			return 153.3876f, 713.6584f, 207.2551f;
			break;
		
		case 55:
			return 186.9f, 243.0269f, 140.55f;
			break;
		
		case 56:
			if (bParam1 == 1)
			{
				return 302.01f, -3254.45f, 4.8f;
			}
			else
			{
				return 304f, -3259f, 5f;
			}
			break;
		
		case 57:
			if (bParam1 == 1)
			{
				return -398.57f, -1883.96f, 20.54f;
			}
			else
			{
				return -397f, -1885f, 21.5f;
			}
			break;
		
		case 58:
			return 780.7208f, -211.0616f, 65.1143f;
			break;
		
		case 59:
			return -1755.0115f, 184.3929f, 63.3711f;
			break;
		
		case 60:
			if (bParam1 == 1)
			{
				return 788.84f, 2164.06f, 52.1f;
			}
			else
			{
				return 786.0139f, 2164.9507f, 52.0981f;
			}
			break;
		
		case 61:
			return 1707.2278f, 4920.156f, 41.0637f;
			break;
		
		case 62:
			return -684.9417f, 5793.045f, 16.331f;
			break;
		
		case 63:
			return -2188f, 4251f, 48f;
			break;
		
		case 64:
			if (bParam1 == 1)
			{
				return -1099.08f, 2711.35f, 18.11f;
			}
			else
			{
				return -1103f, 2715f, 19f;
			}
			break;
		
		case 65:
			return 581f, -2805f, 5.5f;
			break;
		
		case 66:
			if (bParam1 == 1)
			{
				return -663.95f, -1998.85f, 6.1f;
			}
			else
			{
				return -665.4316f, -2002.0398f, 7.5968f;
			}
			break;
		
		case 67:
			return 1442.9049f, -1479.7588f, 62.2245f;
			break;
		
		case 68:
			if (bParam1 == 1)
			{
				return -361.92f, -141.76f, 37.58f;
			}
			else
			{
				return -356.5324f, -145.0359f, 41.7413f;
			}
			break;
		
		case 69:
			return 624.0116f, 558.6531f, 129.2455f;
			break;
		
		case 70:
			return 2833f, 2807f, 56.3785f;
			break;
		
		case 71:
			if (bParam1 == 1)
			{
				return 92.14449f, 6360.1816f, 30.37612f;
			}
			else
			{
				return 94.0769f, 6356.961f, 30.3761f;
			}
			break;
		
		case 72:
			return -2231.5142f, 3477.7915f, 29.3291f;
			break;
		
		case 73:
			return 377f, 3582f, 32.5f;
			break;
		
		case 74:
			if (bParam1 == 1)
			{
				return -2947.47f, 445.6f, 14.29f;
			}
			else
			{
				return -2948f, 441f, 15f;
			}
			break;
		
		case 75:
			if (bParam1 == 1)
			{
				return 1292.88f, -3341.78f, 4.9f;
			}
			else
			{
				return 1296f, -3348f, 5.2f;
			}
			break;
		
		case 76:
			if (bParam1 == 1)
			{
				return -1165.46f, -2054.09f, 13.2f;
			}
			else
			{
				return -1165.8832f, -2051.0264f, 13.2268f;
			}
			break;
		
		case 77:
			if (bParam1 == 1)
			{
				return 1235.57f, -452.01f, 65.7f;
			}
			else
			{
				return 1235f, -450f, 66.5f;
			}
			break;
		
		case 78:
			return -467.0458f, -934.8019f, 46.9844f;
			break;
		
		case 79:
			return 226.7f, -1761f, 28.5f;
			break;
		
		case 80:
			if (bParam1 == 1)
			{
				return 1218.07f, 1898.69f, 76.87f;
			}
			else
			{
				return 1221f, 1898f, 77.4f;
			}
			break;
		
		case 81:
			if (bParam1 == 1)
			{
				return 1545.99f, 3802.7f, 32.42f;
			}
			else
			{
				return 1535.8291f, 3798.2166f, 33.4563f;
			}
			break;
		
		case 82:
			return 756.8601f, 6462.329f, 30.4229f;
			break;
		
		case 83:
			return -2319f, 4124f, 26f;
			break;
		
		case 84:
			return -3185f, 1053f, 20.2f;
			break;
		
		case 85:
			return 818.9215f, -3188.1667f, 4.9007f;
			break;
		
		case 86:
			if (bParam1 == 1)
			{
				return -451.05f, -2264.24f, 6.61f;
			}
			else
			{
				return -457.3656f, -2262.646f, 7.5212f;
			}
			break;
		
		case 87:
			if (bParam1 == 1)
			{
				return 1409.86f, -757.22f, 65.8f;
			}
			else
			{
				return 1410.091f, -752.1061f, 66.2362f;
			}
			break;
		
		case 88:
			return 8.4875f, -441.2103f, 44.5639f;
			break;
		
		case 89:
			if (bParam1 == 1)
			{
				return -935.04f, 387.39f, 76.62f;
			}
			else
			{
				return -937.0176f, 391.544f, 80.2377f;
			}
			break;
		
		case 90:
			if (bParam1 == 1)
			{
				return 2748.49f, 3463.02f, 54.77f;
			}
			else
			{
				return 2746.5537f, 3463.5254f, 54.7144f;
			}
			break;
		
		case 91:
			return 1898.8965f, 4921.9746f, 47.8088f;
			break;
		
		case 92:
			if (bParam1 == 1)
			{
				return -315.51f, 6310.89f, 31.37f;
			}
			else
			{
				return -315.9772f, 6307.3853f, 31.4906f;
			}
			break;
		
		case 93:
			return -1171f, 4927f, 224f;
			break;
		
		case 94:
			return -281.1712f, 2528.0125f, 73.6376f;
			break;
		
		case 95:
			if (bParam1 == 1)
			{
				return 68.45f, 3756.27f, 38.74f;
			}
			else
			{
				return 68.453f, 3758.9668f, 38.7395f;
			}
			break;
		
		case 96:
			return 25.2888f, -634.2637f, 6.5084f;
			break;
		
		case 97:
			if (bParam1 == 1)
			{
				return -1146.67f, 4939.11f, 221.27f;
			}
			else
			{
				return -1145.2826f, 4940.2856f, 221.3038f;
			}
			break;
		
		case 98:
			return 441.64f, 5570.38f, 780.45f;
			break;
		
		case 99:
			if (bParam1)
			{
				return 1353.1516f, 4377.2227f, 43.3416f;
			}
			else
			{
				return 1357.2092f, 4388.445f, 43.872f;
			}
			break;
		
		case 100:
			return -102.0671f, -968.1538f, 295.5635f;
			break;
		
		case 101:
			return 2492.6902f, 4963.014f, 43.6478f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_97(int iParam0)//Position - 0x8A73
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 11:
		case 13:
		case 14:
		case 30:
		case 34:
		case 43:
		case 45:
		case 50:
		case 55:
		case 88:
		case 96:
		case 98:
		case 100:
			return 0;
			break;
	}
	return 1;
}

void func_98()//Position - 0x8AE4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_339[iVar0] = -1;
		fLocal_345[iVar0] = 999999f;
		Local_351[iVar0 /*3*/] = { 0f, 0f, 0f };
		Local_367[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

void func_99(bool bParam0)//Position - 0x8B2D
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Retriever"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Rottweiler"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Boar"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Coyote"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Deer"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MtLion"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_Pig"), bParam0);
}

void func_100(bool bParam0, int iParam1, bool bParam2)//Position - 0x8B82
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL")) == 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), 1, bParam0, bParam2);
		HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(joaat("WEAPON_BALL"));
		if (iParam1 == 1)
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_488, "PICKUP_WEAPON_BALL", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
		}
	}
}

void func_101()//Position - 0x8BE2
{
	if (!PED::IS_PED_IN_GROUP(iLocal_67))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iLocal_67, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
	}
	if (PED::IS_PED_IN_GROUP(iLocal_67))
	{
		PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_67, true);
		PED::SET_GROUP_FORMATION_SPACING(func_102(), 1f, 0.9f, 3f);
		PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(iLocal_67, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()), true);
	}
}

int func_102()//Position - 0x8C30
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_103()//Position - 0x8C40
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		if (func_107(PLAYER::PLAYER_PED_ID(), iLocal_67) > 10f || func_106("CHOP_H_WHIS" /* GXT: Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin. */))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_410) > 4000 && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 47 /*INPUT_DETONATE*/))
			{
				iLocal_410 = MISC::GET_GAME_TIMER();
				func_104(PLAYER::PLAYER_PED_ID(), "CALL_CHOP", 3);
				if (func_106("CHOP_H_WHIS" /* GXT: Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin. */))
				{
					HUD::CLEAR_HELP(true);
				}
				if (iLocal_49 == 15 && iLocal_50 > 1)
				{
				}
				else
				{
					func_40(0);
					if (iLocal_49 == 2)
					{
						func_122(2, 0);
					}
					else
					{
						func_122(2, 1);
					}
				}
			}
			if (((!BitTest(Global_113810.f_10052.f_94, 8) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				MISC::SET_BIT(&(Global_113810.f_10052.f_94), 8);
				func_18("CHOP_H_WHIS" /* GXT: Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin. */, -1);
			}
		}
	}
}

void func_104(int iParam0, char* sParam1, int iParam2)//Position - 0x8D37
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_105(iParam2), 1);
}

int func_105(int iParam0)//Position - 0x8D4E
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

bool func_106(char* sParam0)//Position - 0x8F43
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

float func_107(int iParam0, int iParam1)//Position - 0x8F56
{
	return func_4(iParam0, iParam1, 1);
}

int func_108()//Position - 0x8F67
{
	if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_67, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || PED::IS_PED_RAGDOLL(iLocal_67)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_67))
	{
		WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_67);
		return 1;
	}
	return 0;
}

void func_109(char* sParam0, int iParam1)//Position - 0x8FA2
{
	func_112(&uLocal_170, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	func_110(&uLocal_170, "CHOP_AU", sParam0, 3, iParam1, 0);
}

void func_110(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8FCB
{
	func_111(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	MISC::SET_BIT(&Global_20711, 0);
	Global_21848 = iParam3;
	StringCopy(&Global_21835, sParam2, 24);
}

void func_111(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9006
{
	Global_21299 = { *uParam0 };
	Global_7686 = iParam1;
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

void func_112(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x905C
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

void func_113()//Position - 0x90F7
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	if (iVar0 == 0)
	{
		TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_80[1], "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
		sLocal_84 = "idle_a";
	}
	else if (iVar0 == 1)
	{
		TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_80[1], "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
		sLocal_84 = "idle_c";
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_80[1], "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
		sLocal_84 = "idle_b";
	}
}

int func_114(int iParam0, int iParam1)//Position - 0x9188
{
	if (func_115(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)//Position - 0x91BB
{
	if (func_126(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_116()//Position - 0x91DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_463 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_67, Local_438[iVar0 /*3*/], 2f, 2f, 4f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_438[iVar0 /*3*/], 2f, 2f, 4f, false, true, 0))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, Local_438[iVar0 /*3*/], 1f, 20000, 0.25f, 8192, 40000f);
			iLocal_463 = 1;
		}
	}
	else if (!func_114(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
	{
		if (func_43() == 2)
		{
			iVar1 = 15;
		}
		else if (func_43() == 0)
		{
			iVar1 = 10;
		}
		else
		{
			iVar1 = -1;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar2 < iVar1 && iLocal_420 == 0)
		{
			iLocal_420 = 1;
			func_122(13, 1);
		}
		else if (iVar2 < 50)
		{
			iLocal_79 = 1;
			sLocal_80[0] = "creatures@rottweiler@amb@world_dog_barking@enter";
			sLocal_80[1] = "creatures@rottweiler@amb@world_dog_barking@base";
			sLocal_80[2] = "creatures@rottweiler@amb@world_dog_barking@exit";
			func_122(17, 1);
		}
		else
		{
			iLocal_79 = 0;
			sLocal_80[0] = "creatures@rottweiler@amb@world_dog_sitting@enter";
			sLocal_80[1] = "creatures@rottweiler@amb@world_dog_sitting@idle_a";
			sLocal_80[2] = "creatures@rottweiler@amb@world_dog_sitting@exit";
			func_122(17, 1);
		}
	}
}

void func_117()//Position - 0x92FC
{
	if (((MISC::GET_GAME_TIMER() - iLocal_482) > 2000 && func_126(iLocal_67)) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_67, true), 5f, true))
	{
		func_123("WHINE");
		iLocal_482 = MISC::GET_GAME_TIMER();
	}
}

void func_118()//Position - 0x933E
{
	if (func_43() == 2 && (MISC::GET_GAME_TIMER() - iLocal_411) > iLocal_412)
	{
		iLocal_411 = MISC::GET_GAME_TIMER();
		iLocal_412 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
		func_123("WHINE");
	}
}

int func_119(int iParam0, int iParam1)//Position - 0x937B
{
	struct<3> Var0;
	struct<3> Var3;
	
	if ((func_126(iLocal_67) && func_126(PLAYER::PLAYER_PED_ID())) && func_121(iParam0, Local_395, 30f))
	{
		if (iParam1 == 1)
		{
			if (func_120(&uLocal_118, ENTITY::GET_ENTITY_COORDS(iParam0, true)))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (MISC::ABSF((Var0.f_2 - Var3.f_2)) < 2.5f)
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_120(var uParam0, struct<2> Param1, Vector3 vParam3)//Position - 0x93FE
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

bool func_121(int iParam0, struct<3> Param1, float fParam4)//Position - 0x94BA
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var3 = { Param1 - Var0 };
	return ((Var3.f_0 * Var3.f_0) + (Var3.f_1 * Var3.f_1)) <= (fParam4 * fParam4);
}

void func_122(int iParam0, int iParam1)//Position - 0x94EF
{
	iLocal_105 = 0;
	if (func_126(iLocal_67))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, true);
		WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_67);
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false))
		{
			if (iParam1 == 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_67);
			}
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_67, false);
		}
	}
	iLocal_49 = iParam0;
	iLocal_51 = 0;
	iLocal_50 = 0;
	iLocal_383 = -1;
	Local_384 = { 0f, 0f, 0f };
	Local_387 = { 0f, 0f, 0f };
	iLocal_337 = 5;
	func_34();
	iLocal_463 = 0;
	iLocal_437 = 0;
	iLocal_482 = MISC::GET_GAME_TIMER();
	AUDIO::SET_AUDIO_FLAG("DisableBarks", false);
}

void func_123(char* sParam0)//Position - 0x956C
{
	AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_67, 3, sParam0);
}

int func_124()//Position - 0x957D
{
	if (func_119(PLAYER::PLAYER_PED_ID(), 1))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_404) > iLocal_405)
		{
			return 1;
		}
		if (func_39(PLAYER::PLAYER_PED_ID(), Local_395.f_5, 1) < 8f)
		{
			func_109("CHOP_KENNEL", 0);
			return 1;
		}
	}
	return 0;
}

int func_125(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)//Position - 0x95CA
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_126(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar1, false, false);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, bParam6);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x9626
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

void func_127()//Position - 0x9647
{
	if ((MISC::GET_GAME_TIMER() - iLocal_486) > 60000)
	{
		iLocal_486 = MISC::GET_GAME_TIMER();
		if ((iLocal_49 == 2 || iLocal_49 == 5) || iLocal_49 == 15)
		{
			if (func_43() == 1)
			{
				func_128(115, 1);
			}
			else
			{
				func_128(116, 1);
			}
		}
	}
}

void func_128(int iParam0, int iParam1)//Position - 0x969A
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_59227[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59227[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_59227[iParam0 /*7*/].f_1, iVar0, true);
	}
}

void func_129()//Position - 0x96F7
{
	if ((MISC::GET_GAME_TIMER() - iLocal_483) > 500)
	{
		iLocal_483 = MISC::GET_GAME_TIMER();
		if (iLocal_49 != 15 && MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), 1.5f, &uLocal_466, &iLocal_465, false))
		{
			func_40(1);
		}
	}
}

void func_130()//Position - 0x973F
{
	int iVar0;
	
	if (((((((((((func_145() && func_144()) && !func_143()) && iLocal_51 == 0) && iLocal_49 != 6) && func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !PED::IS_PED_IN_COMBAT(iLocal_67, 0)) && !func_82()) && !func_15()) && !func_3(0)) && !func_142())
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		if (iLocal_394 == 0)
		{
			func_139(SYSTEM::FLOOR(Global_113810.f_20121.f_254), 100, "CHOP_H_HAPPY" /* GXT: Happiness */, 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		else
		{
			func_139(100, 100, "CHOP_H_HAPPY" /* GXT: Happiness */, 1, -1, 2, -1f, -1f, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
		}
		if (func_138())
		{
			if (Global_32430 == 0)
			{
				Global_32430 = 1;
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
			}
			else
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_67, 0f, 0f, 0f, true, -1, 1000, 1000, joaat("CHOP_HINT_HELPER"));
				iLocal_490 = 0;
			}
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(0));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(1));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(2));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(3));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(4));
			PAD::SET_INPUT_EXCLUSIVE(func_137(), func_136(5));
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(0), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(1), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(2), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(3), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(4), true);
				PAD::DISABLE_CONTROL_ACTION(func_137(), func_136(5), true);
			}
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(func_137(), func_136(0)) && func_135())
			{
				switch (iLocal_49)
				{
					case 1:
					case 3:
					case 4:
						iLocal_73 = 1;
						func_134(0);
						func_123("PLAYFUL");
						func_109("CHOP_WALK", 0);
						func_122(2, 1);
						break;
					
					case 2:
					case 5:
					case 15:
						iLocal_73 = 0;
						func_134(0);
						func_122(3, 1);
						break;
					
					case 17:
					case 18:
						iLocal_73 = 1;
						func_134(0);
						func_109("CHOP_WALK", 0);
						iLocal_51 = 2;
						break;
				}
				if (iLocal_73 == 1 && STATS::STAT_GET_INT(joaat("SP_CHOP_WALK_DONE"), &iLocal_485, -1))
				{
					iLocal_485++;
					STATS::STAT_SET_INT(joaat("SP_CHOP_WALK_DONE"), iLocal_485, true);
				}
			}
			if (bLocal_393 == 1)
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(1)) && func_135())
				{
					if (iLocal_49 == 17 || iLocal_49 == 18)
					{
						iLocal_51 = 5;
					}
					else
					{
						func_122(5, 1);
					}
				}
				if (func_43() == 2 && iLocal_394 == 0)
				{
					if (func_133() >= 1)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(2)))
						{
							func_109("CHOP_CANT", 0);
						}
					}
					if (func_133() >= 2)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(3)))
						{
							func_109("CHOP_CANT", 0);
						}
					}
					if (func_133() >= 3)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(4)))
						{
							func_109("CHOP_CANT", 0);
						}
					}
					if (func_133() >= 4)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(5)))
						{
							func_109("CHOP_CANT", 0);
						}
					}
				}
				else
				{
					if (func_133() >= 1)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(2)) && func_135())
						{
							func_109("CHOP_SIT", 0);
							if (iLocal_49 == 17 || iLocal_49 == 18)
							{
								iLocal_51 = 8;
							}
							else
							{
								func_122(8, 1);
							}
						}
					}
					if (func_133() >= 2)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(3)) && func_135())
						{
							func_109("CHOP_PAW", 0);
							if (iLocal_49 == 17 || iLocal_49 == 18)
							{
								iLocal_51 = 9;
							}
							else
							{
								func_122(9, 1);
							}
						}
					}
					if (func_133() >= 3)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(4)) && func_135())
						{
							func_109("CHOP_BEG", 0);
							if (iLocal_49 == 17 || iLocal_49 == 18)
							{
								iLocal_51 = 7;
							}
							else
							{
								func_122(7, 1);
							}
						}
					}
					if (func_133() >= 4)
					{
						if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(func_137(), func_136(5)) && func_135())
						{
							func_109("CHOP_PET", 0);
							if (iLocal_49 == 17 || iLocal_49 == 18)
							{
								iLocal_51 = 10;
							}
							else
							{
								func_122(10, 1);
							}
						}
					}
				}
			}
		}
		else
		{
			HUD::CLEAR_HELP(true);
			if (!BitTest(Global_113810.f_10052.f_94, 0))
			{
				MISC::SET_BIT(&(Global_113810.f_10052.f_94), 0);
			}
			if (bLocal_393 == 0)
			{
				bLocal_393 = func_132();
			}
			if (bLocal_393 == 1)
			{
				iVar0 = func_133();
				if (iVar0 > 4)
				{
					iVar0 = 4;
				}
				if ((((iLocal_49 == 1 || iLocal_49 == 17) || iLocal_49 == 18) || iLocal_49 == 3) || iLocal_49 == 4)
				{
					StringCopy(&Local_107, "CHOP_H_WAIT_", 32);
					StringIntConCat(&Local_107, iVar0, 32);
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						StringConCat(&Local_107, "_KM", 32);
					}
				}
				else if (iLocal_49 == 2 || iLocal_49 == 15)
				{
					StringCopy(&Local_107, "CHOP_H_WALK_", 32);
					StringIntConCat(&Local_107, iVar0, 32);
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						StringConCat(&Local_107, "_KM", 32);
					}
				}
				func_131(&Local_107);
			}
			else if (iLocal_49 == 2 || iLocal_49 == 15)
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					func_131("CHOP_H_HOME_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop. */);
				}
				else
				{
					func_131("CHOP_H_HOME" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop. */);
				}
			}
			else if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				func_131("CHOP_H_NO_AD_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk. */);
			}
			else
			{
				func_131("CHOP_H_NO_AD" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk. */);
			}
		}
	}
	else
	{
		func_134(1);
	}
}

void func_131(char* sParam0)//Position - 0x9D45
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_132()//Position - 0x9D5B
{
	if (Global_113810.f_20121.f_263)
	{
		return 1;
	}
	return 0;
}

int func_133()//Position - 0x9D75
{
	return Global_113810.f_20121.f_254.f_3;
}

void func_134(int iParam0)//Position - 0x9D88
{
	if (func_138())
	{
		HUD::CLEAR_HELP(true);
	}
	if (iParam0 == 1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_135()//Position - 0x9DB1
{
	if (((iLocal_49 == 8 || iLocal_49 == 7) || iLocal_49 == 9) || iLocal_49 == 10)
	{
		return 0;
	}
	return 1;
}

int func_136(int iParam0)//Position - 0x9DE6
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		switch (iParam0)
		{
			case 0:
				return 24;
			
			case 1:
				return 22;
			
			case 2:
				return 44;
			
			case 3:
				return 45;
			
			case 4:
				return 51;
			
			case 5:
				return 23;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 227;
			
			case 1:
				return 229;
			
			case 2:
				return 224;
			
			case 3:
				return 225;
			
			case 4:
				return 223;
			
			case 5:
				return 222;
			}
		
		default:
	}
	return 0;
}

int func_137()//Position - 0x9E8C
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		return 0;
	}
	return 2;
}

int func_138()//Position - 0x9EA4
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if ((((((((((((((((((((func_106("CHOP_H_WAIT_0" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups. */) || func_106("CHOP_H_WAIT_1" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~ */)) || func_106("CHOP_H_WAIT_2" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~ */)) || func_106("CHOP_H_WAIT_3" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~ */)) || func_106("CHOP_H_WAIT_4" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~ */)) || func_106("CHOP_H_WAIT_H1" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WAIT_H2" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WAIT_H3" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WAIT_H4" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_HOME" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop. */)) || func_106("CHOP_H_WALK_0" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups. */)) || func_106("CHOP_H_WALK_1" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~ */)) || func_106("CHOP_H_WALK_2" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~ */)) || func_106("CHOP_H_WALK_3" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~ */)) || func_106("CHOP_H_WALK_4" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~ */)) || func_106("CHOP_H_WALK_H1" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WALK_H2" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WALK_H3" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WALK_H4" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_NOAPP" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~You can teach Chop to perform tricks. Download the iFruit app for your personal smartphone device or tablet to train him. */)) || func_106("CHOP_H_NO_AD" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk. */))
		{
			return 1;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if ((((((((((((((((((((func_106("CHOP_H_WAIT_0_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups. */) || func_106("CHOP_H_WAIT_1_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~ */)) || func_106("CHOP_H_WAIT_2_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~ */)) || func_106("CHOP_H_WAIT_3_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~ */)) || func_106("CHOP_H_WAIT_4_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~ */)) || func_106("CHOP_H_WAIT_H1_KM")) || func_106("CHOP_H_WAIT_H2_KM")) || func_106("CHOP_H_WAIT_H3_KM")) || func_106("CHOP_H_WAIT_H4_KM")) || func_106("CHOP_H_HOME_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop. */)) || func_106("CHOP_H_WALK_0_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups. */)) || func_106("CHOP_H_WALK_1_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~ */)) || func_106("CHOP_H_WALK_2_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~ */)) || func_106("CHOP_H_WALK_3_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~ */)) || func_106("CHOP_H_WALK_4_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~ */)) || func_106("CHOP_H_WALK_H1_KM")) || func_106("CHOP_H_WALK_H2_KM")) || func_106("CHOP_H_WALK_H3_KM")) || func_106("CHOP_H_WALK_H4_KM")) || func_106("CHOP_H_NOAPP_KM")) || func_106("CHOP_H_NO_AD_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk. */))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_139(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)//Position - 0xA110
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_141(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1655612.f_1 = 1;
		func_140(0, iVar0);
		Global_1655612.f_1177[iVar0] = iParam0;
		Global_1655612.f_1177.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1655612.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1655612.f_1177.f_194[iVar0] = iParam3;
		Global_1655612.f_1177.f_183[iVar0] = iParam4;
		Global_1655612.f_1177.f_216[iVar0] = iParam5;
		Global_1655612.f_1177.f_227[iVar0 /*3*/] = fParam6;
		Global_1655612.f_1177.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1655612.f_1177.f_258[iVar0] = iParam8;
		Global_1655612.f_1177.f_269[iVar0] = iParam9;
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

void func_140(int iParam0, int iParam1)//Position - 0xA3A8
{
	MISC::SET_BIT(&(Global_1655612.f_7009[iParam0]), iParam1);
}

int func_141(int iParam0, int iParam1)//Position - 0xA3C1
{
	return BitTest(Global_1655612.f_7009[iParam0], iParam1);
}

bool func_142()//Position - 0xA3D7
{
	return Global_75816;
}

bool func_143()//Position - 0xA3E3
{
	return MISC::GET_GAME_TIMER() <= Global_23390.f_6321 + 100;
}

int func_144()//Position - 0xA3F8
{
	if (iLocal_49 == 12)
	{
		return 0;
	}
	if (iLocal_49 == 13 || (iLocal_49 == 14 && func_114(iLocal_67, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))))
	{
		if (iLocal_437 == 0 && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/))
		{
			func_109("CHOP_BUSY", 0);
			iLocal_437 = 1;
		}
		return 0;
	}
	return 1;
}

int func_145()//Position - 0xA454
{
	if (func_107(PLAYER::PLAYER_PED_ID(), iLocal_67) < 10f)
	{
		if (iLocal_49 == 15 && iLocal_50 < 4)
		{
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			func_149(0);
			func_148(0);
			return 0;
		}
		else
		{
			func_146();
			func_149(1);
			func_148(1);
			return 1;
		}
	}
	func_149(0);
	func_148(0);
	if (func_106("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */) || (MISC::IS_PC_VERSION() && func_106("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */)))
	{
		HUD::CLEAR_HELP(true);
	}
	return 0;
}

void func_146()//Position - 0xA4E4
{
	if ((((((((!BitTest(Global_113810.f_10052.f_94, 0) && !(func_106("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */) || (MISC::IS_PC_VERSION() && func_106("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */)))) && !func_106("PW_HELP_1" /* GXT: Use ~INPUT_CELLPHONE_EXTRA_OPTION~ to email the photograph to the LS Tourist Board. */)) && !func_106("PW_HELP_2" /* GXT: Use ~INPUT_CELLPHONE_SELECT~ to send the email to the LS Tourist Board. */)) && !func_147()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !func_3(0)) && !func_143()) && !func_142())
	{
		if ((iLocal_49 == 1 || iLocal_49 == 17) || iLocal_49 == 18)
		{
			if (func_119(PLAYER::PLAYER_PED_ID(), 1))
			{
				HUD::CLEAR_HELP(true);
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					func_131("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */);
				}
				else
				{
					func_131("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */);
				}
			}
		}
	}
	if ((MISC::IS_PC_VERSION() && func_106("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */)) || func_106("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */))
	{
		if ((((func_147() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_3(0)) || func_143()) || func_142())
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_147()//Position - 0xA60F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_148(int iParam0)//Position - 0xA629
{
	if (iParam0 == 1)
	{
		if (func_126(iLocal_67))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_67, -1, 48, 2);
			iLocal_71 = 1;
		}
	}
	else if (iLocal_71 == 1 && func_126(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		iLocal_71 = 0;
	}
}

void func_149(int iParam0)//Position - 0xA673
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (iLocal_72 == 1 && iVar0 != joaat("WEAPON_UNARMED"))
	{
		iParam0 = 0;
	}
	if (iParam0 == 1)
	{
		if (iLocal_72 == 0 && iVar0 == joaat("WEAPON_UNARMED"))
		{
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_67, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_67, true, 0f);
			PED::SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(iLocal_67, true);
			PED::SET_USE_CAMERA_HEADING_FOR_DESIRED_DIRECTION_LOCK_ON_TEST(iLocal_67, true);
			iLocal_72 = 1;
		}
	}
	else if (iLocal_72 == 1)
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_67, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_67, false, 0f);
		PED::SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(iLocal_67, false);
		iLocal_72 = 0;
	}
}

void func_150()//Position - 0xA6FA
{
	int iVar0;
	var uVar1[5];
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	if ((iLocal_49 != 6 && iLocal_105 == 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (((iLocal_49 == 2 || iLocal_49 == 5) || iLocal_49 == 15) || (iLocal_49 == 14 && !func_114(iLocal_67, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"))))
		{
			if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f) > 0 || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(iLocal_67, ENTITY::GET_ENTITY_COORDS(iLocal_67, true), 100f) > 0)
			{
				STREAMING::REQUEST_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
				iVar0 = 0;
				while (iVar0 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1))
				{
					if ((((!func_126(iVar7) && func_126(uVar1[iVar0])) && (PED::IS_PED_IN_COMBAT(uVar1[iVar0], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COMBAT(uVar1[iVar0], iLocal_67))) && !PED::IS_PED_IN_ANY_VEHICLE(uVar1[iVar0], false)) && uVar1[iVar0] != iLocal_67)
					{
						iVar7 = uVar1[iVar0];
					}
					iVar0++;
				}
				if (func_126(iVar7))
				{
					TASK::TASK_COMBAT_PED(iLocal_67, iVar7, 0, 16);
					func_109("CHOP_ATTACK2", 0);
					if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113810.f_10052.f_94, 6)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113810.f_10052.f_94), 6);
						func_18("CHOP_H_ATTACK" /* GXT: Chop will attack anyone who attacks Franklin. */, -1);
					}
					func_40(0);
					func_122(6, 0);
				}
			}
			else
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar8, true);
				if (iVar8 != joaat("WEAPON_BALL") && !(iLocal_49 == 15 && iLocal_50 == 1))
				{
					if (PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar9) || PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar9))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar9))
						{
							iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9);
							if (((!PED::IS_PED_INJURED(iVar10) && iVar10 != iLocal_67) && !PED::IS_PED_IN_ANY_VEHICLE(iVar10, false)) && func_4(PLAYER::PLAYER_PED_ID(), iVar10, 1) < 50f)
							{
								TASK::TASK_COMBAT_PED(iLocal_67, iVar10, 0, 16);
								iLocal_478++;
								if (iLocal_478 >= 3)
								{
									PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
								}
								func_109("CHOP_ATTACK1", 0);
								if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !BitTest(Global_113810.f_10052.f_94, 11)) && !func_19()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
								{
									MISC::SET_BIT(&(Global_113810.f_10052.f_94), 11);
									func_18("CHOP_H_AIM" /* GXT: Chop will attack anyone who Franklin targets. */, -1);
								}
								func_40(0);
								func_122(6, 0);
							}
						}
					}
				}
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_479) > 60000)
	{
		iLocal_479 = MISC::GET_GAME_TIMER();
		if (iLocal_478 > 0)
		{
			iLocal_478 = (iLocal_478 - 1);
		}
	}
}

void func_151()//Position - 0xA9C7
{
	if ((iLocal_49 != 16 && Global_32289 == 1) && ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(PLAYER::PLAYER_PED_ID()))
	{
		func_122(16, 1);
	}
}

void func_152()//Position - 0xA9F5
{
	if (iLocal_436 == 0)
	{
		if (func_119(PLAYER::PLAYER_PED_ID(), 1))
		{
			func_109("CHOP_DUMP", 0);
			iLocal_436 = 1;
		}
	}
}

void func_153()//Position - 0xAA1D
{
	if (iLocal_464 != func_154() && func_126(iLocal_67))
	{
		if (func_132())
		{
			iLocal_464 = func_154();
			PED::SET_PED_COMPONENT_VARIATION(iLocal_67, 3, 0, iLocal_464, 0);
		}
		else if (iLocal_464 != 4)
		{
			iLocal_464 = 4;
			PED::SET_PED_COMPONENT_VARIATION(iLocal_67, 3, 0, iLocal_464, 0);
		}
	}
}

int func_154()//Position - 0xAA6F
{
	return Global_113810.f_20121.f_254.f_4;
}

void func_155()//Position - 0xAA82
{
	int iVar0;
	
	Global_32430 = 0;
	STREAMING::REQUEST_MODEL(func_163());
	if (!STREAMING::HAS_MODEL_LOADED(func_163()))
	{
		return;
	}
	if (func_179(6))
	{
		Local_395.f_4 = 6;
		Local_395 = { 18.1531f, 535.2469f, 169.6324f };
		Local_395.f_3 = 204.8112f;
		Local_395.f_5 = { 19.527712f, 537.43604f, 170.14302f };
		Local_395.f_8 = 151.30635f;
		Local_417 = { 19.45963f, 535.78174f, 169.6277f };
		Local_438[0 /*3*/] = { 17.36033f, 528.8973f, 169.6277f };
		Local_438[1 /*3*/] = { 19.46877f, 529.17847f, 169.6277f };
		Local_438[2 /*3*/] = { 20.82979f, 531.51685f, 169.6277f };
		Local_438[3 /*3*/] = { 22.83555f, 532.3281f, 169.6277f };
		Local_438[4 /*3*/] = { 20.79285f, 535.001f, 169.6277f };
		Local_438[5 /*3*/] = { 18.05178f, 535.63214f, 169.6277f };
		Local_438[6 /*3*/] = { 18.92047f, 534.09375f, 169.6277f };
		Local_438[7 /*3*/] = { 17.51333f, 533.4775f, 169.6277f };
		func_162(&uLocal_118);
		func_161(&uLocal_118, 12.41124f, 535.5469f, 169.6277f);
		func_161(&uLocal_118, 19.04497f, 538.5729f, 169.6277f);
		func_161(&uLocal_118, 25.00015f, 534.4414f, 169.6277f);
		func_161(&uLocal_118, 28.0998f, 527.76385f, 169.42769f);
		func_161(&uLocal_118, 17.75896f, 523.3129f, 169.22769f);
		func_160(&uLocal_118);
	}
	else
	{
		Local_395.f_4 = 5;
		Local_395 = { -10.25168f, -1422.907f, 29.67775f };
		Local_395.f_3 = 157.9037f;
		Local_395.f_5 = { -9.73f, -1421.55f, 30.1f };
		Local_395.f_8 = 148.26f;
		Local_417 = { -10.6379f, -1424.5605f, 29.67365f };
		Local_438[0 /*3*/] = { -10.03643f, -1423.5287f, 29.67602f };
		Local_438[1 /*3*/] = { -10.78779f, -1425.3057f, 29.70937f };
		Local_438[2 /*3*/] = { -12.7048f, -1424.748f, 29.72222f };
		Local_438[3 /*3*/] = { -12.47465f, -1422.4846f, 29.74699f };
		Local_438[4 /*3*/] = { -14.26666f, -1424.8552f, 29.71964f };
		Local_438[5 /*3*/] = { -14.55816f, -1423.0481f, 29.78372f };
		Local_438[6 /*3*/] = { -16.13293f, -1424.4891f, 29.76139f };
		Local_438[7 /*3*/] = { -16.25662f, -1423.325f, 29.81294f };
		func_162(&uLocal_118);
		func_161(&uLocal_118, -7.26821f, -1427.0648f, 29.67468f);
		func_161(&uLocal_118, -7.39631f, -1418.8508f, 29.5858f);
		func_161(&uLocal_118, -14.27201f, -1421.5902f, 29.76819f);
		func_161(&uLocal_118, -22.85347f, -1423.1727f, 29.74042f);
		func_161(&uLocal_118, -22.77974f, -1427.168f, 29.65953f);
		func_160(&uLocal_118);
	}
	bLocal_393 = func_132();
	func_157();
	if (func_43() == 2)
	{
		MISC::CLEAR_AREA_OF_OBJECTS(Local_417, 2f, 2);
		STREAMING::REQUEST_MODEL(joaat("prop_big_shit_02"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("prop_big_shit_02")))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_416 = OBJECT::CREATE_OBJECT(joaat("prop_big_shit_02"), Local_417, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_big_shit_02"));
		iLocal_436 = 0;
	}
	else
	{
		iLocal_436 = 1;
	}
	iLocal_420 = 0;
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
	{
		iLocal_405 = -1;
	}
	else
	{
		iLocal_405 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000);
	}
	if (iLocal_391 == 1)
	{
		iLocal_49 = 7;
		iLocal_73 = 1;
	}
	else if (iLocal_392 == 1)
	{
		iLocal_49 = 2;
	}
	else if (iLocal_405 > -1)
	{
		iLocal_49 = 11;
		iLocal_73 = 0;
	}
	else
	{
		iLocal_49 = 1;
		iLocal_73 = 0;
	}
	iLocal_85 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(11.23f, 515.4f, 168f, 9f, 21f, 4f, func_156(113f), false, 7);
	iLocal_86 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(24f, 528f, 168f, 5f, 5f, 4f, func_156(113f), false, 7);
	Local_87[0 /*3*/] = { 444.1685f, 5569.016f, 780.1895f };
	Local_87[1 /*3*/] = { 443.8968f, 5574.931f, 780.1895f };
	Local_87[2 /*3*/] = { -739.1624f, 5596.7837f, 40.6594f };
	Local_87[3 /*3*/] = { -738.8002f, 5593.2686f, 40.6594f };
	fLocal_100[0] = 270f;
	fLocal_100[1] = 270f;
	fLocal_100[2] = 95f;
	fLocal_100[3] = 95f;
	func_98();
	iLocal_71 = 0;
	iLocal_406 = 0;
	iLocal_410 = MISC::GET_GAME_TIMER();
	iVar0 = func_133();
	if (iVar0 > 4)
	{
		iVar0 = 4;
	}
	StringCopy(&Local_107, "CHOP_H_WAIT_", 32);
	StringIntConCat(&Local_107, iVar0, 32);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		StringConCat(&Local_107, "_KM", 32);
	}
	Global_32432 = 0;
	iLocal_48 = 1;
}

float func_156(float fParam0)//Position - 0xAF88
{
	return (fParam0 * 0.017453292f);
}

void func_157()//Position - 0xAF98
{
	if (iLocal_391 == 1)
	{
		if (func_159())
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_67, true, true);
			TASK::CLEAR_PED_TASKS(iLocal_67);
			func_153();
			while (func_147())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else if (iLocal_392 == 1)
	{
		if (func_126(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_78 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				func_80();
				func_79();
				func_158(&iLocal_67, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 1);
				if (func_126(iLocal_67))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, true);
					PED::SET_PED_ALLOW_VEHICLES_OVERRIDE(iLocal_67, true);
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_67, false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_67, false);
					func_101();
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_67, true);
					PED::SET_PED_INTO_VEHICLE(iLocal_67, iLocal_78, 0);
					iLocal_105 = 8;
					func_153();
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
				}
				while (func_147())
				{
					if (func_126(iLocal_67) && !func_114(iLocal_67, joaat("SCRIPT_TASK_PLAY_ANIM")))
					{
						STREAMING::REQUEST_ANIM_DICT(sLocal_475);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475))
						{
							TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_475, "sit", 8f, -8f, -1, 1, 0f, false, false, false);
						}
					}
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		func_158(&iLocal_67, Local_395, Local_395.f_3, 1);
	}
	if (func_126(iLocal_67))
	{
		PED::ADD_RELATIONSHIP_GROUP("rel_group_chop", &iLocal_69);
		iLocal_70 = 1;
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_69);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_69, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("CAT"), iLocal_69);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_69, joaat("CAT"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_67, iLocal_69);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, true);
		PED::SET_PED_ALLOW_VEHICLES_OVERRIDE(iLocal_67, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 185, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 32, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 29, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 116, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 118, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 132, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 268, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 107, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 281, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 137, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 146, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 157, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 45, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 167, true);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_67, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_67, false);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_67, joaat("WEAPON_ANIMAL"), 1, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67, 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67, 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_67, 46, true);
		PED::SET_PED_HEARING_RANGE(iLocal_67, 100f);
		PED::SET_PED_SEEING_RANGE(iLocal_67, 100f);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_67, 512, true);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_67, false);
		PED::SET_PED_MAX_HEALTH(iLocal_67, 800);
		ENTITY::SET_ENTITY_HEALTH(iLocal_67, 800, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_67, 200);
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false))
		{
			func_58();
		}
		func_112(&uLocal_170, 3, iLocal_67, "CHOP", 0, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_67, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_67, false, 0f);
		PED::SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(iLocal_67, false);
		iLocal_72 = 0;
		Global_32429 = 0;
		iLocal_478 = 0;
		iLocal_479 = MISC::GET_GAME_TIMER();
	}
}

int func_158(int* iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0xB274
{
	int iVar0;
	
	iVar0 = func_163();
	STREAMING::REQUEST_MODEL(iVar0);
	if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			PED::DELETE_PED(iParam0);
		}
		*iParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam4, false, false);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 2, 0, 0, 0);
		if (Global_113810.f_20121.f_263)
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, Global_113810.f_20121.f_254.f_4, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(*iParam0, 3, 0, 4, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 11, 0, 0, 0);
		PED::CLEAR_ALL_PED_PROPS(*iParam0, 1);
		if (bParam5)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		return 1;
	}
	return 0;
}

int func_159()//Position - 0xB379
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	
	if (func_126(Global_100554) && PED::IS_PED_MODEL(Global_100554, func_163()))
	{
		iLocal_67 = Global_100554;
		return 1;
	}
	iVar11 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if ((uVar0[iVar12] != 0 && func_126(uVar0[iVar12])) && ENTITY::GET_ENTITY_MODEL(uVar0[iVar12]) == func_163())
		{
			iLocal_67 = uVar0[iVar12];
			return 1;
		}
		iVar12++;
	}
	return 0;
}

void func_160(var uParam0)//Position - 0xB408
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

void func_161(var uParam0, struct<3> Param1)//Position - 0xB4A8
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

void func_162(var uParam0)//Position - 0xB4D9
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

int func_163()//Position - 0xB500
{
	return joaat("A_C_Chop");
}

int func_164()//Position - 0xB50D
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	if (iLocal_48 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
		{
			if (func_168(0) && Global_32289 == 0)
			{
				return 1;
			}
			if (!func_171(1))
			{
				return 1;
			}
			if (Global_113800 == 1)
			{
				return 1;
			}
			if (((((((((((Global_78687 == 1 && Global_32289 == 0) && Global_8374 == 0) && Global_32539 == 0) && Global_32540 == 0) && Global_32541 == 0) && Global_60666 == 0) && !func_147()) && !func_15()) && Global_102993 == 0) && func_126(PLAYER::PLAYER_PED_ID())) && !func_166())
			{
				return 1;
			}
			if (Global_97733 == 1)
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_67, false))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_67, PLAYER::PLAYER_PED_ID(), true))
				{
					Global_32429 = 1;
					if (!BitTest(Global_113810.f_10052.f_94, 9) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						MISC::SET_BIT(&(Global_113810.f_10052.f_94), 9);
						func_18("CHOP_H_DEAD" /* GXT: Franklin killed Chop. Chop will soon return to Franklin's safehouse, but he's not happy. */, -1);
					}
				}
				else if (!BitTest(Global_113810.f_10052.f_94, 12) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					MISC::SET_BIT(&(Global_113810.f_10052.f_94), 12);
					func_18("CHOP_H_DEAD2" /* GXT: Chop was killed. Chop will soon return to Franklin's safehouse. */, -1);
				}
				return 1;
			}
			else
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_165();
				}
				else
				{
					if ((iLocal_49 == 2 || iLocal_49 == 5) || iLocal_49 == 15)
					{
						fVar0 = 200f;
					}
					else
					{
						fVar0 = 100f;
					}
					if (func_4(PLAYER::PLAYER_PED_ID(), iLocal_67, 1) > fVar0)
					{
						if ((!BitTest(Global_113810.f_10052.f_94, 4) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							if (((((iLocal_49 == 1 || iLocal_49 == 17) || iLocal_49 == 11) || iLocal_49 == 4) || iLocal_49 == 3) || iLocal_49 == 13)
							{
							}
							else
							{
								MISC::SET_BIT(&(Global_113810.f_10052.f_94), 4);
								func_18("CHOP_H_RANGE" /* GXT: Chop will stop following if left too far behind. */, -1);
							}
						}
						return 1;
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false) && ENTITY::GET_ENTITY_HEALTH(iLocal_67) > 0)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iLocal_67))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true) };
						if (WATER::GET_WATER_HEIGHT(Var1, &fVar4))
						{
							if ((fVar4 - Var1.f_2) > 0.1f)
							{
								ENTITY::SET_ENTITY_HEALTH(iLocal_67, 0, 0);
							}
						}
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_67))
					{
						ENTITY::SET_ENTITY_HEALTH(iLocal_67, 0, 0);
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_165()//Position - 0xB7AB
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((((((((((((((((((((((((((((((func_106("CHOP_H_INTRO" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */) || func_106("CHOP_H_WAIT_0" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups. */)) || func_106("CHOP_H_WAIT_1" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~ */)) || func_106("CHOP_H_WAIT_2" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~ */)) || func_106("CHOP_H_WAIT_3" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~ */)) || func_106("CHOP_H_WAIT_4" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~ */)) || func_106("CHOP_H_WAIT_H1" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WAIT_H2" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WAIT_H3" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WAIT_H4" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_HOME" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop. */)) || func_106("CHOP_H_WALK_0" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups. */)) || func_106("CHOP_H_WALK_1" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~ */)) || func_106("CHOP_H_WALK_2" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~ */)) || func_106("CHOP_H_WALK_3" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~ */)) || func_106("CHOP_H_WALK_4" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~ */)) || func_106("CHOP_H_WALK_H1" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WALK_H2" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WALK_H3" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_WALK_H4" /* GXT: Press ~INPUT_SCRIPT_RB~ to dismiss Chop.~n~Press ~INPUT_SCRIPT_RT~ to make Chop hunt for pickups.~n~Press ~INPUT_SCRIPT_RLEFT~ to make Chop sit.~n~Press ~INPUT_SCRIPT_RRIGHT~ to make Chop give paw.~n~Press ~INPUT_SCRIPT_RDOWN~ to make Chop beg.~n~Press ~INPUT_SCRIPT_RUP~ to pet Chop.~n~Chop won't perform tricks if he is unhappy. Use the iFruit app to increase his happiness. */)) || func_106("CHOP_H_HUNT" /* GXT: Chop will bark more often when he nears pickups. */)) || func_106("CHOP_H_NOVEH" /* GXT: Chop can only get into suitable cars with an empty front passenger seat. */)) || func_106("CHOP_H_CAR" /* GXT: Chop will follow Franklin into suitable cars with an empty front passenger seat. */)) || func_106("CHOP_H_BIKE" /* GXT: Chop will follow bikes and other vehicles he cannot get inside. */)) || func_106("CHOP_H_ATTACK" /* GXT: Chop will attack anyone who attacks Franklin. */)) || func_106("CHOP_H_BALL" /* GXT: When taking Chop for a walk, Franklin can play fetch using the ball in the weapon wheel. */)) || func_106("CHOP_H_WHIS" /* GXT: Press ~INPUT_DETONATE~ to whistle to make Chop return to Franklin. */)) || func_106("CHOP_H_NOAPP" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk.~n~You can teach Chop to perform tricks. Download the iFruit app for your personal smartphone device or tablet to train him. */)) || func_106("CHOP_H_BEHAVE" /* GXT: Chop is unhappy so is misbehaving. Download the iFruit app for your personal smartphone device or tablet to train him. */)) || func_106("CHOP_H_BEHAVA" /* GXT: Chop is unhappy so is misbehaving. Use the iFruit app to train him. */)) || func_106("CHOP_H_AIM" /* GXT: Chop will attack anyone who Franklin targets. */)) || func_106("CHOP_H_NO_AD" /* GXT: Press ~INPUT_SCRIPT_RB~ to take Chop for a walk. */))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (((((((((((((((((((((func_106("CHOP_H_INTRO_KM" /* GXT: Hold ~INPUT_AIM~ when unarmed to interact with Chop. */) || func_106("CHOP_H_WAIT_0_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups. */)) || func_106("CHOP_H_WAIT_1_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~ */)) || func_106("CHOP_H_WAIT_2_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~ */)) || func_106("CHOP_H_WAIT_3_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~ */)) || func_106("CHOP_H_WAIT_4_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~ */)) || func_106("CHOP_H_WAIT_H1_KM")) || func_106("CHOP_H_WAIT_H2_KM")) || func_106("CHOP_H_WAIT_H3_KM")) || func_106("CHOP_H_WAIT_H4_KM")) || func_106("CHOP_H_HOME_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop. */)) || func_106("CHOP_H_WALK_0_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups. */)) || func_106("CHOP_H_WALK_1_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~ */)) || func_106("CHOP_H_WALK_2_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~ */)) || func_106("CHOP_H_WALK_3_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~ */)) || func_106("CHOP_H_WALK_4_KM" /* GXT: Press ~INPUT_ATTACK~ to dismiss Chop.~n~Press ~INPUT_JUMP~ to make Chop hunt for pickups.~n~Press ~INPUT_COVER~ to make Chop sit.~n~Press ~INPUT_RELOAD~ to make Chop give paw.~n~Press ~INPUT_CONTEXT~ to make Chop beg.~n~Press ~INPUT_ENTER~ to pet Chop.~n~ */)) || func_106("CHOP_H_WALK_H1_KM")) || func_106("CHOP_H_WALK_H2_KM")) || func_106("CHOP_H_WALK_H3_KM")) || func_106("CHOP_H_WALK_H4_KM")) || func_106("CHOP_H_NOAPP_KM")) || func_106("CHOP_H_NO_AD_KM" /* GXT: Press ~INPUT_ATTACK~ to take Chop for a walk. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

bool func_166()//Position - 0xBAC0
{
	return Global_98122;
}

int func_167()//Position - 0xBACC
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return Global_98943;
	}
	if (func_147())
	{
		return Global_98943;
	}
	return 318;
}

int func_168(int iParam0)//Position - 0xBAF3
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	if (func_169(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_169(int iParam0)//Position - 0xBB15
{
	return func_170(iParam0, Global_43377);
}

int func_170(int iParam0, int iParam1)//Position - 0xBB26
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

bool func_171(int iParam0)//Position - 0xBD07
{
	func_172();
	return iParam0 == Global_113810.f_2366.f_539.f_4321;
}

void func_172()//Position - 0xBD23
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_176(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_175(PLAYER::PLAYER_PED_ID());
			if (func_174(iVar0) && (!func_173(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_174(Global_113810.f_2366.f_539.f_4321))
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

bool func_173(int iParam0)//Position - 0xBE20
{
	return Global_43377 == iParam0;
}

bool func_174(int iParam0)//Position - 0xBE2E
{
	return iParam0 < 3;
}

int func_175(int iParam0)//Position - 0xBE3A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_176(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_176(int iParam0)//Position - 0xBE77
{
	if (func_174(iParam0))
	{
		return func_177(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_177(int iParam0)//Position - 0xBE9C
{
	return Global_2058[iParam0 /*29*/];
}

int func_178(struct<3> Param0, int iParam3, int iParam4)//Position - 0xBEAB
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95851[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95851[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_179(iVar0) || iParam4 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95851[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_179(int iParam0)//Position - 0xBF3A
{
	return BitTest(Global_113810.f_7232[iParam0], 0);
}

int func_180(int iParam0)//Position - 0xBF4F
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_113810.f_9088.f_99.f_58[iParam0];
}

void func_181()//Position - 0xBF7C
{
	bool bVar0;
	bool bVar1;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
	{
	}
	else
	{
		Global_32430 = 0;
		func_148(0);
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE() && !iLocal_490)
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		func_68(&iLocal_68);
		if (func_180(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_180(126))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
					{
						func_62(139, 1, 0);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
				{
					func_62(138, 1, 0);
				}
			}
		}
		func_40(1);
		func_42(&iLocal_416, 0);
		func_42(&iLocal_421, 0);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_77))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_77, false);
		}
		STREAMING::REMOVE_PTFX_ASSET();
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"), false))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BALL"));
		}
		if (func_126(PLAYER::PLAYER_PED_ID()) && !func_173(0))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
		{
			if (func_189())
			{
				func_188(&iLocal_67);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_67, false) && func_126(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_67))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_67);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false))
					{
						if (func_126(iLocal_78))
						{
							bVar0 = false;
							while (!bVar0)
							{
								SYSTEM::WAIT(0);
								if (!func_187() || func_185(iLocal_78, 1093140480, 1, 1056964608, 0, 1, 0))
								{
									bVar0 = true;
								}
							}
							if (func_187())
							{
								if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116))
								{
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, iLocal_116, false, false);
								}
								STREAMING::REQUEST_ANIM_DICT(sLocal_475);
								while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_475))
								{
									SYSTEM::WAIT(0);
								}
							}
							if (func_187())
							{
								iLocal_106 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_106, iLocal_78, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_78, "seat_pside_f"));
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_67);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_67, iLocal_106, sLocal_475, "get_out", 1000f, -8f, 10, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
								bVar1 = false;
								while (!bVar1)
								{
									SYSTEM::WAIT(0);
									if (!func_187() || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_106) > 0.99f))
									{
										bVar1 = true;
									}
								}
								SYSTEM::WAIT(0);
								if (func_187() && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iLocal_78, iLocal_116))
								{
									VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_78, iLocal_116, false);
								}
							}
						}
						else if (func_184() == 1)
						{
							if (iLocal_49 == 2 || iLocal_49 == 15)
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_67);
								func_125(iLocal_67, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 1.75f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(iLocal_67), 1, 1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_67, false, false);
							}
						}
					}
					if (func_126(iLocal_67))
					{
						PED::SET_PED_KEEP_TASK(iLocal_67, true);
						TASK::TASK_SMART_FLEE_PED(iLocal_67, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					}
				}
				func_183(&iLocal_67, 1, 0, 1);
			}
		}
		func_57();
		func_56(&iLocal_78);
		func_99(0);
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@move");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@enter");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@base");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@idle_a");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_barking@exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@4x4");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@low_car");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@std_car");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@in_vehicle@van");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@enter");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@idle_a");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@world_dog_sitting@exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@tricks@");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@amb@sleep_in_kennel@");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@indication@");
		STREAMING::REMOVE_ANIM_DICT("misschop_vehicleenter_exit");
		STREAMING::REMOVE_ANIM_DICT("creatures@rottweiler@melee@streamed_taunts@");
		func_182(&uLocal_170, 1);
		func_182(&uLocal_170, 3);
		func_165();
		CAM::DESTROY_ALL_CAMS(false);
		if (iLocal_85 > -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_85);
		}
		if (iLocal_86 > -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_86);
		}
		if (iLocal_70 == 1)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(iLocal_69);
		}
		AUDIO::STOP_SOUND(iLocal_488);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_182(var uParam0, int iParam1)//Position - 0xC367
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_183(int* iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xC384
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			}
			PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_184()//Position - 0xC3D4
{
	func_172();
	return Global_113810.f_2366.f_539.f_4321;
}

int func_185(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xC3ED
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 131 /*INPUT_VEH_SUB_ASCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 132 /*INPUT_VEH_SUB_DESCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 123 /*INPUT_VEH_SUB_TURN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 126 /*INPUT_VEH_SUB_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 129 /*INPUT_VEH_SUB_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 130 /*INPUT_VEH_SUB_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 133 /*INPUT_VEH_SUB_TURN_HARD_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 134 /*INPUT_VEH_SUB_TURN_HARD_RIGHT*/, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_186(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_186(int iParam0)//Position - 0xC585
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

int func_187()//Position - 0xC5B1
{
	if ((func_126(PLAYER::PLAYER_PED_ID()) && func_126(iLocal_78)) && func_126(iLocal_67))
	{
		return 1;
	}
	return 0;
}

void func_188(int* iParam0)//Position - 0xC5DF
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false, 1);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
		}
		PED::DELETE_PED(iParam0);
	}
}

int func_189()//Position - 0xC620
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && func_126(iLocal_67))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_67, false))
		{
			return 1;
		}
	}
	if (Global_32431 == 1)
	{
		return 1;
	}
	if (Global_32432 == 1)
	{
		Global_32432 = 0;
		return 1;
	}
	if (func_126(iLocal_67))
	{
		if (iLocal_49 == 11 && ENTITY::IS_ENTITY_OCCLUDED(iLocal_67))
		{
			return 1;
		}
		if (func_190(ENTITY::GET_ENTITY_COORDS(iLocal_67, false), 1f, 1120403456))
		{
			return 0;
		}
	}
	if (!func_168(0))
	{
		return 0;
	}
	if (func_173(6) || func_173(2))
	{
		return 0;
	}
	return 1;
}

int func_190(struct<3> Param0, float fParam3, float fParam4)//Position - 0xC6CB
{
	if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param0, fParam4, fParam4, fParam4, false, false, 0))
		{
			return 0;
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
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

