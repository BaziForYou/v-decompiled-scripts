#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
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
	struct<3> Local_41 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	struct<3> Local_53[2];
	float fLocal_60[2] = { 0f, 0f };
	struct<3> Local_63[3];
	float fLocal_73[3] = { 0f, 0f, 0f };
	struct<3> Local_77[4];
	float fLocal_90[4] = { 0f, 0f, 0f, 0f };
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	int iLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112[2] = { 0, 0 };
	int iLocal_115[3] = { 0, 0, 0 };
	int iLocal_119[4] = { 0, 0, 0, 0 };
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = 0;
	int iLocal_139[2] = { 0, 0 };
	int iLocal_142[2] = { 0, 0 };
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	bool bLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166[2] = { 0, 0 };
	int iLocal_169 = 0;
	struct<3> Local_170 = { 0, 0, 0 } ;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	bool bLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	var uLocal_183[2] = { 0, 0 };
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	struct<3> Local_192 = { 0, 0, 0 } ;
	float fLocal_195 = 0f;
	struct<3> Local_196 = { 0, 0, 0 } ;
	struct<3> Local_199 = { 0, 0, 0 } ;
	struct<3> Local_202 = { 0, 0, 0 } ;
	struct<3> Local_205 = { 0, 0, 0 } ;
	int iLocal_208 = 0;
	char* sLocal_209 = NULL;
	char* sLocal_210 = NULL;
	char* sLocal_211 = NULL;
	char* sLocal_212 = NULL;
	char* sLocal_213 = NULL;
	int iLocal_214 = 0;
	float fLocal_215 = 0f;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 16;
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
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
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
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_13 = 0.001f;
	iLocal_16 = -1;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_126 = { -824.1719f, -187.654f, 36.5707f };
	Local_129 = { -1202.94f, -779.74f, 17.33f };
	Local_48 = { ScriptParam_0.f_1[0 /*3*/] };
	func_250();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_248();
		func_236();
	}
	if (iLocal_47 == 1)
	{
		if (!func_235(0) || !func_234(0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else if (iLocal_47 == 2)
	{
		if (!func_235(14) || !func_234(14))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (func_204(Local_48, 5, bLocal_132, 0, 0))
	{
		func_201(5);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_162)
		{
			if (!func_200())
			{
				if (func_199())
				{
					func_236();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SR", 0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				switch (iLocal_46)
				{
					case 0:
						if (iLocal_51)
						{
							iLocal_221 = 1;
							iLocal_46 = 1;
						}
						else
						{
							if (func_187())
							{
								func_236();
							}
							if (!bLocal_52)
							{
								func_186();
							}
							if (bLocal_52)
							{
								func_185();
							}
						}
						break;
					
					case 1:
						switch (iLocal_44)
						{
							case 0:
								if (!iLocal_135)
								{
									func_184();
									if (INTERIOR::IS_INTERIOR_READY(iLocal_151))
									{
										func_178();
										iLocal_135 = 1;
									}
								}
								else
								{
									if (iLocal_47 == 1)
									{
										RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
									}
									func_175();
									INTERIOR::UNPIN_INTERIOR(iLocal_151);
									if (func_174())
									{
										if (!iLocal_157)
										{
											if (iLocal_47 == 1)
											{
												if (func_173(&uLocal_230, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													iLocal_157 = 1;
												}
											}
											else if (iLocal_47 == 2)
											{
												if (func_173(&uLocal_230, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													iLocal_157 = 1;
												}
											}
										}
									}
									if (func_172())
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_191))
										{
											HUD::REMOVE_BLIP(&iLocal_191);
										}
										PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_112)
										{
											if (!PED::IS_PED_INJURED(iLocal_112[iVar0]))
											{
												TASK::TASK_COMBAT_PED(iLocal_112[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_112[iVar0], true);
												if (!HUD::DOES_BLIP_EXIST(uLocal_183[iVar0]))
												{
													uLocal_183[iVar0] = func_171(iLocal_112[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_47 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_115)
											{
												if (!PED::IS_PED_INJURED(iLocal_115[iVar0]))
												{
													TASK::TASK_COWER(iLocal_115[iVar0], -1);
													PED::SET_PED_KEEP_TASK(iLocal_115[iVar0], true);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_119)
											{
												if (!PED::IS_PED_INJURED(iLocal_119[iVar0]))
												{
													TASK::TASK_COWER(iLocal_119[iVar0], -1);
													PED::SET_PED_KEEP_TASK(iLocal_119[iVar0], true);
												}
												iVar0++;
											}
										}
										OBJECT::DELETE_OBJECT(&iLocal_165);
										bLocal_138 = true;
										iLocal_44 = 1;
										iLocal_45 = 3;
									}
									if (func_170())
									{
										func_163(1);
										SYSTEM::SETTIMERA(0);
										EVENT::ADD_SHOCKING_EVENT_AT_POSITION(90 /*EVENT_SHOCKING_GUN_FIGHT*/, Local_192, 15000f);
										iLocal_44 = 1;
									}
								}
								break;
							
							case 1:
								PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
								func_175();
								iVar1 = 0;
								while (iVar1 < iLocal_115)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_115[iVar1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_115[iVar1], PLAYER::PLAYER_PED_ID(), true))
										{
											func_162();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_119)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[iVar1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_119[iVar1], PLAYER::PLAYER_PED_ID(), true))
										{
											func_162();
										}
									}
									iVar1++;
								}
								switch (iLocal_45)
								{
									case 0:
										if (func_170())
										{
											func_158();
											func_156();
										}
										break;
									
									case 1:
										func_155();
										func_156();
										break;
									
									case 2:
										func_154();
										func_153();
										func_152();
										if (SYSTEM::TIMERB() > 500)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
											{
												if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_165))
												{
													func_151();
													WEAPON::SET_CURRENT_PED_WEAPON(iLocal_112[0], joaat("WEAPON_UNARMED"), true);
													ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_165, iLocal_112[0], PED::GET_PED_BONE_INDEX(iLocal_112[0], 57005), 0.3f, 0f, 0f, 80f, -90f, 0f, true, true, false, false, 2, true, 0);
												}
											}
										}
										if (MISC::IS_PROJECTILE_IN_AREA(Local_192 - Vector(20f, 20f, 20f), Local_192 + Vector(20f, 20f, 20f), false))
										{
											if (!PED::IS_PED_INJURED(iLocal_115[1]))
											{
												TASK::TASK_SMART_FLEE_COORD(iLocal_115[1], Local_101, 150f, -1, false, false);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[1], false);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_115[1]));
											}
											if (!PED::IS_PED_INJURED(iLocal_115[2]))
											{
												TASK::TASK_SMART_FLEE_COORD(iLocal_115[2], Local_101, 150f, -1, false, false);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[2], false);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_115[2]));
											}
											iVar2 = 0;
											while (iVar2 <= (iLocal_111 - 1))
											{
												if (!PED::IS_PED_INJURED(iLocal_119[iVar2]))
												{
													ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_119[iVar2], true, 1);
													TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
													if (iLocal_47 == 1)
													{
														TASK::TASK_PLAY_ANIM(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, false, true, false);
													}
													else if (iLocal_47 == 2)
													{
														TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1201.4758f, -790.2733f, 15.5475f, 2f, -1, 0.25f, 0, 40000f);
													}
													TASK::TASK_SMART_FLEE_COORD(0, Local_101, 150f, -1, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_119[iVar2], iLocal_150);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
													PED::SET_PED_KEEP_TASK(iLocal_119[iVar2], true);
													PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[iVar2], false);
													PED::SET_PED_CAN_BE_TARGETTED(iLocal_119[iVar2], true);
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_119[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_150() || SYSTEM::TIMERA() > 20000)
										{
											if (!iLocal_162)
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_112[0], false))
												{
													func_141(0, 1, 1, 0, 0, 0, 0);
													func_134(0);
													HUD::DISPLAY_HUD(true);
													HUD::DISPLAY_RADAR(true);
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
													TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, 0f, false, false, false);
													if (iLocal_47 == 1)
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
														{
															ENTITY::SET_ENTITY_VISIBLE(iLocal_165, false, false);
															ENTITY::SET_ENTITY_COLLISION(iLocal_165, false, false);
														}
													}
													else if (iLocal_47 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_115)
													{
														if (!PED::IS_PED_INJURED(iLocal_115[iVar1]))
														{
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[iVar1], false);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_119)
													{
														if (!PED::IS_PED_INJURED(iLocal_119[iVar1]))
														{
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[iVar1], false);
														}
														iVar1++;
													}
													if (!PED::IS_PED_INJURED(iLocal_115[0]))
													{
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[0], true);
														TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
														TASK::TASK_PLAY_ANIM(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, false, false, false);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
														TASK::TASK_PERFORM_SEQUENCE(iLocal_115[0], iLocal_150);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
														PED::SET_PED_KEEP_TASK(iLocal_115[0], true);
													}
													if (!func_133())
													{
														func_117(&uLocal_230, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													iLocal_162 = 1;
												}
											}
										}
										if (!iLocal_137)
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p") > 0.7f || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p") > 0.6f && func_116(64)))
												{
													TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
													iLocal_137 = 1;
												}
											}
										}
										if (iLocal_47 == 1)
										{
											if (!func_170())
											{
												if (!iLocal_178)
												{
													iLocal_178 = 1;
												}
											}
											if (!bLocal_159)
											{
												func_115();
											}
											if (!PED::IS_PED_INJURED(iLocal_112[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173, false))
											{
												if (PED::IS_PED_IN_VEHICLE(iLocal_112[0], iLocal_173, false))
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
													{
														OBJECT::DELETE_OBJECT(&iLocal_165);
														bLocal_159 = true;
													}
												}
											}
											if (func_114() && !iLocal_160)
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_183[0]))
												{
													HUD::REMOVE_BLIP(&(uLocal_183[0]));
												}
												if (HUD::DOES_BLIP_EXIST(uLocal_183[1]))
												{
													HUD::REMOVE_BLIP(&(uLocal_183[1]));
												}
												if (!HUD::DOES_BLIP_EXIST(iLocal_189))
												{
													iLocal_189 = func_112(iLocal_173, 1, 0);
												}
												bLocal_159 = true;
												if (!PED::IS_PED_INJURED(iLocal_182))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_182, 17, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_182, 6, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_182, 1, true);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_182, iLocal_173, PLAYER::PLAYER_PED_ID(), 8, 16f, 786469, -1f, -1f, true);
													PED::SET_PED_KEEP_TASK(iLocal_182, true);
													iLocal_160 = 1;
												}
											}
											if (iLocal_160 && !iLocal_222)
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173, false) && !PED::IS_PED_INJURED(iLocal_182))
												{
													if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_173, Local_53[0 /*3*/], 20f, 20f, 10f, false, true, 0))
													{
														TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_182, iLocal_173, PLAYER::PLAYER_PED_ID(), 8, 19f, 786469, -1f, -1f, true);
														iLocal_222 = 1;
													}
												}
											}
											if (func_111())
											{
												if (!PED::IS_PED_INJURED(iLocal_182))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173, false))
													{
														if (!iLocal_161)
														{
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_182, 17, true);
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_182, 6, true);
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_182, 1, true);
															TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_182, iLocal_173, PLAYER::PLAYER_PED_ID(), 8, 17f, 786469, -1f, -1f, true);
															iLocal_161 = 1;
														}
														if (!PED::IS_PED_INJURED(iLocal_112[0]))
														{
															if (PED::IS_PED_IN_VEHICLE(iLocal_112[0], iLocal_173, false))
															{
																if (HUD::DOES_BLIP_EXIST(uLocal_183[0]))
																{
																	HUD::REMOVE_BLIP(&(uLocal_183[0]));
																}
																if (HUD::DOES_BLIP_EXIST(uLocal_183[1]))
																{
																	HUD::REMOVE_BLIP(&(uLocal_183[1]));
																}
																if (!HUD::DOES_BLIP_EXIST(iLocal_189))
																{
																	iLocal_189 = func_112(iLocal_173, 1, 0);
																}
																bLocal_159 = true;
															}
														}
													}
												}
												iVar3 = 0;
												while (iVar3 <= (iLocal_109 - 1))
												{
													if (!iLocal_139[iVar3])
													{
														if (!PED::IS_PED_INJURED(iLocal_112[iVar3]))
														{
															if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_112[iVar3], false) && !PED::IS_PED_INJURED(iLocal_182))
															{
																TASK::TASK_DRIVE_BY(iLocal_112[iVar3], PLAYER::PLAYER_PED_ID(), 0, 0.3f, 0.7f, 1.9f, -1f, 15, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
																iLocal_139[iVar3] = 1;
															}
															else if (!HUD::DOES_BLIP_EXIST(iLocal_190))
															{
																TASK::TASK_COMBAT_PED(iLocal_112[iVar3], PLAYER::PLAYER_PED_ID(), 0, 16);
																PED::SET_PED_KEEP_TASK(iLocal_112[iVar3], true);
																if (HUD::DOES_BLIP_EXIST(iLocal_189))
																{
																	HUD::REMOVE_BLIP(&iLocal_189);
																}
																if (!HUD::DOES_BLIP_EXIST(uLocal_183[iVar3]))
																{
																	uLocal_183[iVar3] = func_171(iLocal_112[iVar3], 1, 145);
																}
																iLocal_139[iVar3] = 1;
															}
														}
													}
													if (!iLocal_142[iVar3])
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173, false))
														{
															if (!PED::IS_PED_INJURED(iLocal_112[iVar3]))
															{
																if ((PED::IS_PED_INJURED(iLocal_182) || VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_173, -1, false)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_112[iVar3]))
																{
																	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_112[iVar3], true, 1);
																	TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
																	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																	TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
																	TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
																	TASK::TASK_PERFORM_SEQUENCE(iLocal_112[iVar3], iLocal_150);
																	TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
																	PED::SET_PED_KEEP_TASK(iLocal_112[iVar3], true);
																	if (!PED::IS_PED_INJURED(iLocal_182))
																	{
																		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_182, true, 1);
																		TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
																		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
																		TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
																		TASK::TASK_PERFORM_SEQUENCE(iLocal_182, iLocal_150);
																		TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
																		PED::SET_PED_KEEP_TASK(iLocal_182, true);
																	}
																	if (!HUD::DOES_BLIP_EXIST(iLocal_190))
																	{
																		if (HUD::DOES_BLIP_EXIST(iLocal_189))
																		{
																			HUD::REMOVE_BLIP(&iLocal_189);
																		}
																		if (!HUD::DOES_BLIP_EXIST(uLocal_183[iVar3]))
																		{
																			uLocal_183[iVar3] = func_171(iLocal_112[iVar3], 1, 145);
																		}
																	}
																	iLocal_142[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!PED::IS_PED_INJURED(iLocal_112[iVar3]))
															{
																ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_112[iVar3], true, 1);
																TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
																TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
																TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
																TASK::TASK_PERFORM_SEQUENCE(iLocal_112[iVar3], iLocal_150);
																TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
																PED::SET_PED_KEEP_TASK(iLocal_112[iVar3], true);
															}
															if (!PED::IS_PED_INJURED(iLocal_182))
															{
																ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_182, true, 1);
																TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
																TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
																TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
																TASK::TASK_PERFORM_SEQUENCE(iLocal_182, iLocal_150);
																TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
																PED::SET_PED_KEEP_TASK(iLocal_182, true);
															}
															if (!HUD::DOES_BLIP_EXIST(iLocal_190))
															{
																if (HUD::DOES_BLIP_EXIST(iLocal_189))
																{
																	HUD::REMOVE_BLIP(&iLocal_189);
																}
																if (!HUD::DOES_BLIP_EXIST(uLocal_183[iVar3]))
																{
																	uLocal_183[iVar3] = func_171(iLocal_112[iVar3], 1, 145);
																}
																iLocal_142[iVar3] = 1;
															}
														}
													}
													iVar3++;
												}
											}
											if (bLocal_159)
											{
												if (func_110())
												{
													func_109();
													func_106();
													iLocal_45 = 9;
												}
											}
										}
										else if (iLocal_47 == 2)
										{
											if (PED::IS_PED_INJURED(iLocal_112[0]))
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_183[0]))
												{
													func_105(&uLocal_230, 3);
													HUD::REMOVE_BLIP(&(uLocal_183[0]));
												}
											}
											if (PED::IS_PED_INJURED(iLocal_112[1]))
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_183[1]))
												{
													func_105(&uLocal_230, 4);
													HUD::REMOVE_BLIP(&(uLocal_183[1]));
												}
											}
											if (PED::IS_PED_INJURED(iLocal_112[0]))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
												{
													if (ENTITY::IS_ENTITY_ATTACHED(iLocal_165))
													{
														ENTITY::DETACH_ENTITY(iLocal_165, true, true);
													}
													OBJECT::DELETE_OBJECT(&iLocal_165);
													func_109();
													func_106();
													iLocal_45 = 9;
												}
											}
											else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_112[0], PLAYER::PLAYER_PED_ID(), true))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
												{
													if (ENTITY::IS_ENTITY_ATTACHED(iLocal_165))
													{
														ENTITY::DETACH_ENTITY(iLocal_165, true, true);
													}
													OBJECT::DELETE_OBJECT(&iLocal_165);
													func_109();
													func_106();
													iLocal_45 = 9;
												}
											}
										}
										break;
									
									case 3:
										func_155();
										break;
									
									case 9:
										func_154();
										func_103();
										break;
									
									case 10:
										func_100(2);
										func_99(iLocal_191, &uLocal_227);
										if (iLocal_47 == 1)
										{
											if (!iLocal_158)
											{
												STREAMING::REQUEST_ANIM_DICT("random@robbery");
												if (!STREAMING::HAS_ANIM_DICT_LOADED("random@robbery"))
												{
													STREAMING::REQUEST_ANIM_DICT("random@robbery");
												}
												else if (!PED::IS_PED_INJURED(iLocal_115[0]))
												{
													ENTITY::SET_ENTITY_COORDS(iLocal_115[0], -818.5553f, -185.4815f, 36.5689f, true, false, false, true);
													ENTITY::SET_ENTITY_HEADING(iLocal_115[0], 47.0582f);
													TASK::TASK_PLAY_ANIM(iLocal_115[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, false, false, false);
													if (!PED::IS_PED_INJURED(iLocal_115[1]))
													{
														TASK::TASK_SMART_FLEE_COORD(iLocal_115[1], Local_101, 150f, -1, false, false);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[1], false);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_115[1]));
													}
													if (!PED::IS_PED_INJURED(iLocal_115[2]))
													{
														TASK::TASK_SMART_FLEE_COORD(iLocal_115[2], Local_101, 150f, -1, false, false);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[2], false);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_115[2]));
													}
													iVar4 = 0;
													while (iVar4 <= (iLocal_111 - 1))
													{
														if (!PED::IS_PED_INJURED(iLocal_119[iVar4]))
														{
															TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
															TASK::TASK_PLAY_ANIM(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, false, true, false);
															TASK::TASK_SMART_FLEE_COORD(0, Local_101, 150f, -1, false, false);
															TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
															TASK::TASK_PERFORM_SEQUENCE(iLocal_119[iVar4], iLocal_150);
															TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
															PED::SET_PED_KEEP_TASK(iLocal_119[iVar4], true);
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[iVar4], false);
															PED::SET_PED_CAN_BE_TARGETTED(iLocal_119[iVar4], true);
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_119[iVar4]));
														}
														iVar4++;
													}
													iLocal_158 = 1;
												}
											}
											func_75(6, 3);
											func_75(7, 3);
										}
										else if (iLocal_47 == 2)
										{
											if (!iLocal_158)
											{
												STREAMING::REQUEST_ANIM_DICT("random@robbery");
												if (!STREAMING::HAS_ANIM_DICT_LOADED("random@robbery"))
												{
													STREAMING::REQUEST_ANIM_DICT("random@robbery");
												}
												else if (!PED::IS_PED_INJURED(iLocal_115[0]))
												{
													ENTITY::SET_ENTITY_COORDS(iLocal_115[0], -1197.4552f, -776.0289f, 16.3254f, true, false, false, true);
													ENTITY::SET_ENTITY_HEADING(iLocal_115[0], 205.7753f);
													TASK::TASK_PLAY_ANIM(iLocal_115[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, false, false, false);
													if (!PED::IS_PED_INJURED(iLocal_115[1]))
													{
														TASK::TASK_SMART_FLEE_COORD(iLocal_115[1], Local_101, 150f, -1, false, false);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[1], false);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_115[1]));
													}
													if (!PED::IS_PED_INJURED(iLocal_115[2]))
													{
														TASK::TASK_SMART_FLEE_COORD(iLocal_115[2], Local_101, 150f, -1, false, false);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[2], false);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_115[2]));
													}
													iVar5 = 0;
													while (iVar5 <= (iLocal_111 - 1))
													{
														if (!PED::IS_PED_INJURED(iLocal_119[iVar5]))
														{
															TASK::TASK_SMART_FLEE_COORD(iLocal_119[iVar5], Local_101, 150f, -1, false, false);
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[iVar5], false);
															PED::SET_PED_CAN_BE_TARGETTED(iLocal_119[iVar5], true);
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_119[iVar5]));
														}
														iVar5++;
													}
													iLocal_158 = 1;
												}
											}
											if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1201.43f, -776.86f, 17.99f, 6f, joaat("v_ilev_clothmiddoor"), false))
											{
												OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_clothmiddoor"), -1201.43f, -776.86f, 17.99f, false, 0f, false);
											}
										}
										if (func_174())
										{
										}
										if ((func_170() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_45 = 11;
										}
										if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_250()) > (fLocal_195 + 150f))
										{
											iLocal_45 = 12;
										}
										if (SYSTEM::TIMERA() > 120000)
										{
											iLocal_45 = 14;
										}
										if (PED::IS_PED_INJURED(iLocal_115[0]))
										{
											func_74(2);
											func_54();
										}
										else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_115[0], PLAYER::PLAYER_PED_ID(), true))
										{
											func_74(2);
											func_54();
										}
										break;
									
									case 11:
										func_1();
										break;
									
									case 12:
										func_74(2);
										func_54();
										break;
									
									case 7:
										func_54();
										break;
									
									case 14:
										func_74(2);
										func_54();
										break;
									
									case 13:
										if (!iLocal_223)
										{
											if (!PED::IS_PED_INJURED(iLocal_115[0]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_115[0]);
												if (iLocal_47 == 1)
												{
													func_117(&uLocal_230, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_47 == 2)
												{
													func_117(&uLocal_230, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												TASK::TASK_USE_MOBILE_PHONE_TIMED(iLocal_115[0], 20000);
												PED::SET_PED_KEEP_TASK(iLocal_115[0], true);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[0], false);
												iLocal_223 = 1;
											}
										}
										if (!func_133())
										{
											iLocal_44 = 2;
										}
										break;
								}
								break;
							
							case 2:
								func_162();
								break;
						}
						break;
					}
			}
		}
		else
		{
			func_236();
		}
	}
}

void func_1()//Position - 0x122B
{
	if (func_170())
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_191))
		{
			HUD::REMOVE_BLIP(&iLocal_191);
		}
		if (!iLocal_180)
		{
			if (!PED::IS_PED_INJURED(iLocal_115[0]))
			{
				func_141(1, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::CLEAR_HELP(true);
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iLocal_115[0], true), 20f, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				if (iLocal_47 == 1)
				{
					bLocal_179 = true;
				}
				else if (iLocal_47 == 2)
				{
				}
				iLocal_180 = 1;
			}
		}
	}
	if (!bLocal_179)
	{
		if (!PED::IS_PED_INJURED(iLocal_115[0]))
		{
			bLocal_179 = true;
		}
	}
	if (bLocal_179)
	{
		if (!iLocal_181)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			if (HUD::DOES_BLIP_EXIST(iLocal_191))
			{
				HUD::REMOVE_BLIP(&iLocal_191);
			}
			Local_196 = { ENTITY::GET_ENTITY_COORDS(iLocal_115[0], false) };
			if (iLocal_47 == 1)
			{
				Local_196 = { -820.77f, -186.514f, 36.569f };
				Local_202 = { 0f, 0f, -60f };
				fLocal_215 = 0.855f;
				sLocal_209 = "random@robbery";
				sLocal_210 = "return_bag_stand_b";
				sLocal_211 = "return_bag_stand_b_female";
				sLocal_212 = "return_bag_stand_b_bag";
				sLocal_213 = "return_bag_stand_b_cam";
			}
			else if (iLocal_47 == 2)
			{
				Local_196 = { -1198.295f, -776.533f, 16.326f };
				Local_202 = { 0f, 0f, -60.25f };
				fLocal_215 = 0.785f;
				sLocal_209 = "random@robbery";
				sLocal_210 = "return_bag_stand_c_rt";
				sLocal_211 = "return_bag_stand_c_rt_female";
				sLocal_212 = "return_bag_stand_c_rt_bag";
				sLocal_213 = "return_bag_stand_c_rt_cam";
			}
			iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(Local_196, Local_202, 2);
			iLocal_208 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_208, iLocal_214, sLocal_213, sLocal_209);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_214, sLocal_209, sLocal_210, 1000f, -2f, 5, 0, 1000f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_115[0]);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_115[0], iLocal_214, sLocal_209, sLocal_211, 1000f, -2f, 4, 0, 1000f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_115[0], false, false);
			iLocal_165 = OBJECT::CREATE_OBJECT(joaat("prop_cs_duffel_01"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_165, iLocal_214, sLocal_212, sLocal_209, 1000f, 8f, 0, 1000f);
			if (!PED::IS_PED_INJURED(iLocal_115[0]))
			{
				func_53();
				CAM::SET_CAM_ACTIVE(iLocal_208, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_181 = 1;
			}
		}
	}
	if ((SYSTEM::TIMERA() > 1500 && iLocal_181) && !iLocal_156)
	{
		func_51();
		SYSTEM::WAIT(0);
		if (iLocal_47 == 1)
		{
			func_117(&uLocal_230, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_47 == 2)
		{
			func_117(&uLocal_230, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		iLocal_156 = 1;
	}
	if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_214) > fLocal_215 && iLocal_181)
	{
		if (!PED::IS_PED_INJURED(iLocal_115[0]))
		{
			PED::SET_PED_MONEY(iLocal_115[0], iLocal_187);
			TASK::CLEAR_PED_TASKS(iLocal_115[0]);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
			TASK::TASK_PLAY_ANIM(0, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_115[0], iLocal_150);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
			PED::SET_PED_KEEP_TASK(iLocal_115[0], true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
		{
			OBJECT::DELETE_OBJECT(&iLocal_165);
		}
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 650, 0f, true, false, 0);
		func_141(0, 1, 1, 0, 0, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 4);
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
		CAM::DESTROY_CAM(iLocal_208, false);
		func_50();
		func_49(joaat("RC_WALLETS_RETURNED"), 1);
		if (iLocal_47 == 1)
		{
			func_13(func_43(), 1, iLocal_187);
			func_2(0, func_43(), 1);
		}
		else if (iLocal_47 == 2)
		{
			func_13(func_43(), 1, iLocal_187);
			func_2(14, func_43(), 1);
		}
		func_74(3);
		func_54();
	}
}

void func_2(int iParam0, bool bParam1, bool bParam2)//Position - 0x160E
{
	int iVar0;
	
	switch (bParam1)
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 7;
			break;
		
		case 2:
			iVar0 = 6;
			break;
		
		default:
			return;
			break;
	}
	if (bParam2)
	{
		if (!func_12(iParam0, iVar0, 0))
		{
			func_11(iParam0, iVar0, 0);
		}
	}
	else if (func_12(iParam0, iVar0, 0))
	{
		func_3(iParam0, iVar0, 0);
	}
}

void func_3(int iParam0, int iParam1, bool bParam2)//Position - 0x167A
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_8(func_9(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_4(func_9(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

void func_4(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x16EA
{
	int iVar0;
	
	iVar0 = func_5(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_5(int iParam0, var uParam1)//Position - 0x170D
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_6(uParam1));
}

int func_6(var uParam0)//Position - 0x1722
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

int func_7()//Position - 0x1756
{
	return Global_1574918;
}

int func_8(int iParam0, int iParam1)//Position - 0x1762
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_5(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_9(int iParam0)//Position - 0x1791
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

int func_10()//Position - 0x1B39
{
	return Global_32283;
}

void func_11(int iParam0, int iParam1, bool bParam2)//Position - 0x1B44
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100885.f_1414[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_10() == 0)
		{
			iVar0 = func_8(func_9(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_4(func_9(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

int func_12(int iParam0, int iParam1, bool bParam2)//Position - 0x1BB4
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
			return BitTest(func_8(func_9(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_13(bool bParam0, int iParam1, int iParam2)//Position - 0x1C14
{
	if (func_42(bParam0) == 3)
	{
		return 0;
	}
	if (func_42(bParam0) == 4)
	{
		return 0;
	}
	return func_14(func_42(bParam0), 0, iParam1, iParam2, 0);
}

int func_14(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1C48
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_41();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_40(99, 1);
					func_49(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_49(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_49(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_24(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_22(5))
					{
						fVar0 = 0.9f;
						bVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_49(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_49(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_22(1))
					{
						fVar0 = 0f;
						bVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_49(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_49(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_49(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_49(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_49(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_49(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_49(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_49(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_49(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_49(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_22(0))
							{
								fVar0 = 0f;
								bVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_49(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_49(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_49(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_49(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_21(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_40(95, iParam3);
					break;
				
				case 1:
					func_40(97, iParam3);
					break;
				
				case 2:
					func_40(96, iParam3);
					break;
			}
			func_40(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_17(bVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_17(bVar1);
	}
	iVar5 = (Global_60659[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_60659[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_60659[iVar2] = 2147483647;
				}
				else
				{
					Global_60659[iVar2] = (Global_60659[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_49(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_49(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_49(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_60659[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_60659[iVar2];
			Global_60659[iVar2] = (Global_60659[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_2[Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113810.f_20567.f_233[iVar2 /*69*/]++;
		Global_113810.f_20567.f_233[iVar2 /*69*/].f_1++;
		if (Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_113810.f_20567.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_16(iParam0);
	if (Global_43377 == 15)
	{
		func_15(0);
	}
	return 1;
}

void func_15(bool bParam0)//Position - 0x2247
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_113810.f_20567.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_60667[iVar0 /*3*/][0] = Global_113810.f_20567[iVar0];
		Global_60667.f_31[iVar0 /*3*/][0] = Global_113810.f_20567.f_11[iVar0];
		Global_60667.f_62[iVar0 /*3*/][0] = Global_113810.f_20567.f_22[iVar0];
		Global_60667.f_93[iVar0 /*3*/][0] = Global_113810.f_20567.f_33[iVar0];
		Global_60667.f_124[iVar0 /*3*/][0] = Global_113810.f_20567.f_44[iVar0];
		Global_60667.f_155[iVar0 /*3*/][0] = Global_113810.f_20567.f_55[iVar0];
		Global_60667.f_186[iVar0 /*3*/][0] = Global_113810.f_20567.f_66[iVar0];
		Global_60667.f_217[iVar0 /*3*/][0] = Global_113810.f_20567.f_77[iVar0];
		Global_60667.f_248[iVar0 /*3*/][0] = Global_113810.f_20567.f_88[iVar0];
		if (!bParam0)
		{
			Global_60667[iVar0 /*3*/][1] = Global_113810.f_20567[iVar0];
			Global_60667.f_31[iVar0 /*3*/][1] = Global_113810.f_20567.f_11[iVar0];
			Global_60667.f_62[iVar0 /*3*/][1] = Global_113810.f_20567.f_22[iVar0];
			Global_60667.f_93[iVar0 /*3*/][1] = Global_113810.f_20567.f_33[iVar0];
			Global_60667.f_124[iVar0 /*3*/][1] = Global_113810.f_20567.f_44[iVar0];
			Global_60667.f_155[iVar0 /*3*/][1] = Global_113810.f_20567.f_55[iVar0];
			Global_60667.f_186[iVar0 /*3*/][1] = Global_113810.f_20567.f_66[iVar0];
			Global_60667.f_217[iVar0 /*3*/][1] = Global_113810.f_20567.f_77[iVar0];
			Global_60667.f_248[iVar0 /*3*/][1] = Global_113810.f_20567.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_16(int iParam0)//Position - 0x24C9
{
	int iVar0;
	
	iVar0 = Global_60659[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), iVar0, true);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), iVar0, true);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), iVar0, true);
			break;
	}
}

void func_17(bool bParam0)//Position - 0x2523
{
	bool bVar0;
	char cVar1[64];
	
	if (bParam0 == 8)
	{
		func_20(129, 0, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_20(135, 0, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_20(136, 0, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_20(137, 0, -1);
		return;
	}
	if (bParam0 == 12)
	{
		func_4(8272, 0, -1, 1);
		return;
	}
	if (bParam0 == 13)
	{
		func_4(8273, 0, -1, 1);
		return;
	}
	if (bParam0 == 14)
	{
		func_4(8274, 0, -1, 1);
		return;
	}
	if (bParam0 == 15)
	{
		func_4(8275, 0, -1, 1);
		return;
	}
	if (bParam0 == 16)
	{
		func_4(8276, 0, -1, 1);
		return;
	}
	if (bParam0 == 17)
	{
		func_4(8277, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_113810.f_20567.f_471, bParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		}
	}
	else if (BitTest(Global_113810.f_20567.f_471, bParam0) || BitTest(Global_2359296[func_19() /*5568*/].f_681.f_10, bParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_113810.f_20567.f_471), bParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_19() /*5568*/].f_681.f_10), bParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /* GXT: You have redeemed your promotion for ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_18(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
	}
}

char* func_18(bool bParam0)//Position - 0x269D
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC" /* GXT: one free haircut. */;
		
		case 1:
			return "COUP_TATTOO" /* GXT: one free tattoo. */;
		
		case 2:
			return "COUP_WARSTOCK" /* GXT: 10% off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 3:
			return "COUP_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 4:
			return "COUP_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 5:
			return "COUP_MEDSPENS" /* GXT: 10 percent off your next medical expenses. */;
		
		case 6:
			return "COUP_SPRUNK" /* GXT: one free can of Sprunk. */;
		
		case 7:
			return "COUP_RESPRAY" /* GXT: one free respray. */;
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS" /* GXT: 10 percent off your next purchase at ElitasTravel.com. */;
		
		case 13:
			return "COUP_CAS_DOCKTEASE" /* GXT: 10 percent off your next purchase at DockTease.com. */;
		
		case 14:
			return "COUP_CAS_MOSPORT" /* GXT: 10 percent off your next purchase at LegendaryMotorsport.net. */;
		
		case 15:
			return "COUP_CAS_SSASA" /* GXT: 10 percent off your next purchase at southernsanandreassuperautos.com. */;
		
		case 16:
			return "COUP_CAS_WARSTOCK" /* GXT: 10 percent off your next purchase at Warstock-Cache-and-Carry.com. */;
		
		case 17:
			return "COUP_CAS_PANDM" /* GXT: 10 percent off your next purchase at pandmcycles.com. */;
			break;
		
		default:
			break;
	}
	return "";
}

int func_19()//Position - 0x27A0
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_20(int iParam0, bool bParam1, int iParam2)//Position - 0x27AD
{
	if (iParam2 == -1)
	{
		iParam2 = func_7();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_21(int iParam0)//Position - 0x27CB
{
	func_40(93, iParam0);
	func_40(29, iParam0);
	func_40(30, iParam0);
}

int func_22(int iParam0)//Position - 0x27EB
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
	
	if (iParam0 == 8)
	{
		return func_23(129, -1);
	}
	if (iParam0 == 9)
	{
		return func_23(135, -1);
	}
	if (iParam0 == 10)
	{
		return func_23(136, -1);
	}
	if (iParam0 == 11)
	{
		return func_23(137, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_8(8272, -1);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_8(8273, -1);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_8(8274, -1);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_8(8275, -1);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_8(8276, -1);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_8(8277, -1);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return BitTest(Global_113810.f_20567.f_471, iParam0);
	}
	return BitTest(Global_2359296[func_19() /*5568*/].f_681.f_10, iParam0);
}

bool func_23(int iParam0, int iParam1)//Position - 0x298B
{
	if (iParam1 == -1)
	{
		iParam1 = func_7();
	}
	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_24(bool bParam0)//Position - 0x29A7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		func_39(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_25(27, 1);
	return 1;
}

int func_25(int iParam0, int iParam1)//Position - 0x2A5E
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_26(iParam0, iParam1);
}

int func_26(int iParam0, int iParam1)//Position - 0x2A79
{
	if (func_38(14) && !func_37(iParam0))
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
	if (func_36(&Global_4542602))
	{
		if (func_34(&Global_4542602, iParam0))
		{
			return 0;
		}
		if (func_27(&Global_4542602, iParam0))
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

int func_27(var uParam0, int iParam1)//Position - 0x2B16
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	func_30(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_28(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_28(var uParam0, int iParam1)//Position - 0x2BC7
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_38(14) && !func_37(iParam1))
	{
		return 0;
	}
	if (func_34(uParam0, iParam1))
	{
		return 0;
	}
	if (func_33(uParam0) < 0f)
	{
		func_32(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_29(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_29(var uParam0, int iParam1)//Position - 0x2C42
{
	return (*uParam0)[iParam1] == 78;
}

void func_30(var uParam0)//Position - 0x2C53
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_31(uParam0, iVar0);
		iVar0++;
	}
	func_32(uParam0, (Global_4542601 - 0.5f));
}

void func_31(var uParam0, int iParam1)//Position - 0x2C87
{
	(*uParam0)[iParam1] = 78;
}

void func_32(var uParam0, float fParam1)//Position - 0x2C97
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

float func_33(var uParam0)//Position - 0x2CB4
{
	return uParam0->f_80;
}

bool func_34(var uParam0, int iParam1)//Position - 0x2CC0
{
	return func_35(uParam0, iParam1) != -1;
}

int func_35(var uParam0, int iParam1)//Position - 0x2CD2
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

bool func_36(var uParam0)//Position - 0x2CFF
{
	return uParam0->f_79 == 1;
}

int func_37(int iParam0)//Position - 0x2D0D
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

bool func_38(int iParam0)//Position - 0x2D5D
{
	return Global_43377 == iParam0;
}

int func_39(int iParam0, int iParam1)//Position - 0x2D6B
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

void func_40(int iParam0, int iParam1)//Position - 0x2DBC
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

void func_41()//Position - 0x2E19
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[0] == iVar0)
		{
			Global_60659[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[1] == iVar0)
		{
			Global_60659[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_60659[2] == iVar0)
		{
			Global_60659[2] = iVar0;
		}
	}
}

int func_42(int iParam0)//Position - 0x2E8E
{
	return Global_2058[iParam0 /*29*/].f_17;
}

bool func_43()//Position - 0x2E9F
{
	func_44();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_44()//Position - 0x2EB8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_47(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_46(PLAYER::PLAYER_PED_ID());
			if (func_45(iVar0) && (!func_38(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_45(Global_113810.f_2366.f_539.f_4321))
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

bool func_45(bool bParam0)//Position - 0x2FB5
{
	return bParam0 < 3;
}

int func_46(int iParam0)//Position - 0x2FC1
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)//Position - 0x2FFE
{
	if (func_45(iParam0))
	{
		return func_48(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_48(int iParam0)//Position - 0x3023
{
	return Global_2058[iParam0 /*29*/];
}

void func_49(int iParam0, int iParam1)//Position - 0x3032
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, true);
}

void func_50()//Position - 0x3055
{
	if (iLocal_47 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_115[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_115[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[0], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_115[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_115[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_115[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[1], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_115[1]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_119[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[0], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_119[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_119[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[1], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_119[1]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[2]))
		{
			if (!PED::IS_PED_INJURED(iLocal_119[2]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_119[2], -820.424f, -181.9059f, 36.5687f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_119[2], 167.7909f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[2], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_119[2]));
			}
		}
	}
}

void func_51()//Position - 0x3169
{
	Global_20711 = 0;
	func_52();
}

void func_52()//Position - 0x3179
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}
}

void func_53()//Position - 0x319A
{
	if (iLocal_47 == 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f, 8f, 8f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -823.1281f, -187.9591f, 36.6189f, 8f, 8f, 8f, false, true, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -831.9709f, -192.0823f, 36.5008f, false, false, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
			}
		}
		MISC::CLEAR_AREA(-823.1281f, -187.9591f, 36.6189f, 3f, true, false, false, false);
	}
	else if (iLocal_47 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f, 8f, 8f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1201.0172f, -777.5527f, 16.3398f, 8f, 8f, 8f, false, true, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1205.936f, -781.2014f, 16.0088f, false, false, false, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
			}
		}
		MISC::CLEAR_AREA(-1201.0172f, -777.5527f, 16.3398f, 8f, true, false, false, false);
	}
}

void func_54()//Position - 0x32F9
{
	while (!func_73())
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
	func_58(5, bLocal_132);
	func_55();
	func_236();
}

void func_55()//Position - 0x332A
{
	func_56();
}

int func_56()//Position - 0x3337
{
	if (func_57(0))
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

int func_57(bool bParam0)//Position - 0x3382
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_58(int iParam0, bool bParam1)//Position - 0x33AA
{
	if (iParam0 == -1)
	{
		iParam0 = func_71();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_70(iParam0))
	{
		func_69(iParam0, bParam1);
		if (!func_68(51))
		{
			func_64("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, func_67(), 0, 138, 0);
			func_63(51);
		}
		if (func_62(iParam0))
		{
			Global_113810.f_24998.f_2 = 3;
		}
		if (func_61(iParam0, bParam1) != 322)
		{
			func_59(func_61(iParam0, bParam1), Local_41.f_0, Local_41.f_1);
		}
		Global_113798 = bParam1;
		if (Global_113796 == 0)
		{
			if (((Global_113799 == 1 || Global_113799 == 5) || Global_113799 == 11) || Global_113799 == 25)
			{
				func_74(2);
			}
			else if ((Global_113799 == 26 || Global_113799 == 8) || Global_113799 == 17)
			{
				func_74(7);
			}
			else
			{
				func_74(1);
			}
		}
	}
}

void func_59(int iParam0, var uParam1, var uParam2)//Position - 0x34AE
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
		func_20((891 + iParam0), 1, -1);
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
		Global_113810.f_10197[iParam0 /*12*/].f_10 = uParam1;
		Global_113810.f_10197[iParam0 /*12*/].f_11 = uParam2;
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
		func_60();
	}
}

void func_60()//Position - 0x3594
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
		func_39(13, SYSTEM::FLOOR(Global_113810.f_10197.f_3853));
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
					func_56();
				}
			}
		}
	}
}

int func_61(int iParam0, int iParam1)//Position - 0x3A52
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_62(int iParam0)//Position - 0x3DC6
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_63(int iParam0)//Position - 0x3DF5
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

void func_64(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3E37
{
	func_65(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_65(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x3E59
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
		func_66();
	}
}

void func_66()//Position - 0x402E
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

int func_67()//Position - 0x4145
{
	func_44();
	switch (Global_113810.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x418B
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

void func_69(int iParam0, int iParam1)//Position - 0x41CB
{
	MISC::SET_BIT(&(Global_113810.f_24998.f_8[iParam0]), iParam1);
}

int func_70(int iParam0)//Position - 0x41E6
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_71()//Position - 0x4297
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_72(Var0);
	return uVar16;
}

int func_72(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x42B4
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_73()//Position - 0x448E
{
	return 1;
}

void func_74(int iParam0)//Position - 0x4497
{
	Global_113796 = iParam0;
}

void func_75(int iParam0, int iParam1)//Position - 0x44A5
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_78689)
		{
			iVar0 = Global_42911[iParam0];
		}
		else
		{
			iVar0 = Global_113810.f_7264[iParam0];
		}
		if (iVar0 != iParam1 || BitTest(Global_38737[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_38746[(iParam0 / 32)]), (iParam0 % 32));
				Global_39209[iParam0] = iParam1;
			}
			else if (Global_78689)
			{
				Global_42911[iParam0] = iParam1;
			}
			else
			{
				Global_113810.f_7264[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
			func_77(iParam0);
			if (BitTest(Global_38737[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_76(iParam0);
			}
		}
	}
}

void func_76(int iParam0)//Position - 0x4592
{
	if (!BitTest(Global_39680.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_39680.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_39680[Global_39680.f_227] = iParam0;
		Global_39680.f_227++;
	}
}

void func_77(int iParam0)//Position - 0x45DD
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!func_97())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_96(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		func_82(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((BitTest(Global_38746[(iParam0 / 32)], (iParam0 % 32)) && Global_39209[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_38746[(iParam0 / 32)]), (iParam0 % 32));
		Global_38755[iParam0] = 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38982[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_100885.f_391 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_100885.f_391 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_100885.f_391;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_38746[(iParam0 / 32)]), (iParam0 % 32));
					Global_39209[iParam0] = 3;
					MISC::SET_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_38982[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_38746[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_39209[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113810.f_9088)
		{
			iVar9 = func_79(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (func_38(14))
		{
			iVar9 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_78())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_113810.f_7264[iParam0];
	}
	if (Global_39436[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (BitTest(Global_38737[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_38746[(iParam0 / 32)], (iParam0 % 32)) || (Global_38755[iParam0] == 0 && Global_39209[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_38736)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar9)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
			Global_39436[iParam0] = iVar9;
		}
	}
	if (BitTest(Global_38746[(iParam0 / 32)], (iParam0 % 32)) && Global_39209[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_38737[(iParam0 / 32)]), (iParam0 % 32));
		func_76(iParam0);
		if (Global_38755[iParam0] < 2)
		{
			Global_38755[iParam0]++;
		}
	}
}

int func_78()//Position - 0x4AA2
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	switch (func_43())
	{
		case 0:
			if (Global_113810.f_9088.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_113810.f_9088.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_113810.f_9088.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_79(int iParam0)//Position - 0x4B21
{
	bool bVar0;
	
	bVar0 = func_43();
	if (func_80(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (bVar0 == 1)
		{
			if (BitTest(Global_113810.f_7232[5], 0) || BitTest(Global_113810.f_7232[6], 0))
			{
				return 0;
			}
		}
		if (func_45(bVar0))
		{
			if (BitTest(Global_95840[5], bVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (bVar0 == 0)
			{
				if (BitTest(Global_113810.f_7232[0], 0))
				{
					return 0;
				}
			}
			if (func_45(bVar0))
			{
				if (BitTest(Global_95840[0], bVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113810.f_7232[5], 0))
				{
					return 0;
				}
			}
			if (func_45(bVar0))
			{
				if (BitTest(Global_95840[5], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (bVar0 == 1)
			{
				if (BitTest(Global_113810.f_7232[6], 0))
				{
					return 0;
				}
			}
			if (func_45(bVar0))
			{
				if (BitTest(Global_95840[6], bVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113810.f_7232[2], 0))
				{
					return 0;
				}
				if (func_45(bVar0))
				{
					if (BitTest(Global_95840[2], bVar0))
					{
						return 0;
					}
				}
			}
			else if (bVar0 == 0)
			{
				if (BitTest(Global_113810.f_7232[1], 0))
				{
					return 0;
				}
				if (func_45(bVar0))
				{
					if (BitTest(Global_95840[1], bVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (bVar0 == 2)
			{
				if (BitTest(Global_113810.f_7232[3], 0))
				{
					return 0;
				}
			}
			if (func_45(bVar0))
			{
				if (BitTest(Global_95840[3], bVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_80(int iParam0)//Position - 0x4D49
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_81(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_81(int iParam0)//Position - 0x4DB5
{
	return iParam0;
}

void func_82(int iParam0, var uParam1)//Position - 0x4DBF
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_85();
	iVar1 = func_84(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_83(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_113810.f_7264[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_83(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_113810.f_7264[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_83(iParam0))
			{
				if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0) && !Global_113810.f_9088.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_113810.f_7264[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_113810.f_9088.f_99.f_58[4])
				{
					Global_113810.f_7264[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (Global_113810.f_9088.f_99.f_58[4])
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113810.f_7264[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113810.f_7264[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_83(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_113810.f_7264[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_83(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_83(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) == 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) > 0)
			{
				Global_113810.f_7264[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[70 /*34*/].f_6) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("omega2")) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_83(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[26 /*34*/].f_6) == 0)
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_83(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[43 /*34*/].f_6) == 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_83(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 193:
			if (!func_83(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[93 /*34*/].f_6) > 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_83(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 80:
			if (!func_83(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[8 /*34*/].f_6) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[10 /*34*/].f_6) == 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_83(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[47 /*34*/].f_6) == 0)
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[70 /*34*/].f_6) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[48 /*34*/].f_6) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91601[39 /*34*/].f_6) == 0)
			{
				if (!func_83(iParam0))
				{
					Global_113810.f_7264[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
				}
			}
			break;
		
		case 216:
			if (!func_83(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 217:
		case 218:
			if (!func_83(iParam0))
			{
				Global_113810.f_7264[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_83(iParam0))
			{
				Global_113810.f_7264[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113810.f_7264[iParam0], true, true);
			}
			break;
	}
}

bool func_83(int iParam0)//Position - 0x5757
{
	struct<7> Var0;
	int iVar7;
	
	Var0 = { func_96(iParam0) };
	iVar7 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
	return ((iVar7 == 1 || iVar7 == 4) || iVar7 == 2);
}

int func_84(int iParam0)//Position - 0x578B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_85()//Position - 0x579E
{
	var uVar0;
	
	func_95(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_94(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_93(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_88(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_87(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_86(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_86(var uParam0, int iParam1)//Position - 0x57E4
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_87(var uParam0, int iParam1)//Position - 0x586A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_88(var uParam0, int iParam1)//Position - 0x589D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_92(*uParam0);
	iVar1 = func_90(*uParam0);
	if (iParam1 < 1 || iParam1 > func_89(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_89(int iParam0, int iParam1)//Position - 0x58EE
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_90(int iParam0)//Position - 0x5990
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_91(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_91(bool bParam0, int iParam1, int iParam2)//Position - 0x59B2
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_92(int iParam0)//Position - 0x59C9
{
	return iParam0 & 15;
}

void func_93(var uParam0, int iParam1)//Position - 0x59D6
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_94(var uParam0, int iParam1)//Position - 0x5A10
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_95(var uParam0, int iParam1)//Position - 0x5A4B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_96(int iParam0)//Position - 0x5A87
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.8568f, -1115.7416f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.9518f, 3725.1536f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.8732f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.7817f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.7518f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.4758f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.9832f, 4821.7407f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.2817f, 4819.4844f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.6613f, 2705.4458f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.9652f, 2706.9636f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.5444f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.4065f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.9136f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.4349f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.0222f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.5358f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.7819f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.2007f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { -289.1752f, 6199.1123f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.4541f, -1424.0079f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.2856f, -1650.5967f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.7888f, 1074.7668f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = joaat("DOORHASH_T_TRAILER_CS");
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.7874f, 3824.5537f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.8765f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.3054f, 2645.2422f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.6542f, 2645.2422f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = joaat("lr_prop_supermod_door_01");
			Var0 = { -205.7007f, -1310.6917f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = joaat("v_ilev_ml_door1");
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.5471f, -1975.4354f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.0791f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.3069f, -2018.5613f, 41.6289f };
			Var0.f_5 = -726993043;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = joaat("v_ilev_fh_door4");
			Var0 = { 1988.3529f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = joaat("v_ilev_epsstoredoor");
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.9326f, -2748.1675f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.8408f, -2746.4888f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.1199f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.5161f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.6201f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.9744f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.2578f, -2079.9495f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1051.4019f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = joaat("prop_sec_barrier_ld_01a");
			Var0 = { -1049.2853f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1210.9567f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = joaat("prop_sec_barrier_ld_02a");
			Var0 = { -1212.4453f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = joaat("prop_ld_bankdoors_01");
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = joaat("hei_prop_hei_bankdoor_new");
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = joaat("hei_v_ilev_bk_gate_pris");
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.2217f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.6848f, 3683.9302f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.6055f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.4951f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.1763f, 3751.5056f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.9371f, 3753.4202f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.5391f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.5391f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.2695f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.8259f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.0089f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.0708f, 2691.5046f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.8452f, 1081.3917f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.8115f, 1083.7784f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.9045f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.3037f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.2695f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.2695f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.2095f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.4927f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.8137f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_97()//Position - 0x8691
{
	if ((func_10() == -1 || func_10() == 999) && !func_98() == 0)
	{
		return 1;
	}
	return 0;
}

int func_98()//Position - 0x86C1
{
	return Global_32284;
}

void func_99(int iParam0, var uParam1)//Position - 0x86CC
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}

void func_100(int iParam0)//Position - 0x876B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113810.f_24998.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_101(func_102(iParam0), -1);
					Global_113810.f_24998.f_2++;
					MISC::SET_BIT(&Global_113806, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113806, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_101(func_102(iParam0), -1);
					Global_113810.f_24998.f_3++;
					MISC::SET_BIT(&Global_113806, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113806, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_101(func_102(iParam0), -1);
					Global_113810.f_24998.f_4++;
					MISC::SET_BIT(&Global_113806, 2);
				}
			}
			break;
	}
}

void func_101(char* sParam0, int iParam1)//Position - 0x8846
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_102(int iParam0)//Position - 0x885D
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS" /* GXT: Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby. */;
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP" /* GXT: Flashing blue and red blips indicate situations around San Andreas that you can choose to help with. */;
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER" /* GXT: If you retrieve a stolen item, you can choose to keep it or return it for a reward. */;
			break;
	}
	return sVar0;
}

void func_103()//Position - 0x88A1
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_108))
	{
		func_49(joaat("RC_WALLETS_RECOVERED"), 1);
		if (!PED::IS_PED_INJURED(iLocal_115[0]))
		{
			iLocal_191 = func_171(iLocal_115[0], 0, 145);
		}
		func_104(&uLocal_227);
		fLocal_195 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_250());
		SYSTEM::SETTIMERA(0);
		iLocal_45 = 10;
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_108))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iLocal_108)) > 200f)
		{
			func_162();
		}
	}
}

void func_104(var uParam0)//Position - 0x8922
{
	*uParam0 = -99;
}

void func_105(var uParam0, int iParam1)//Position - 0x8930
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_106()//Position - 0x894D
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_108))
	{
		MISC::SET_BIT(&iLocal_104, 3);
		MISC::SET_BIT(&iLocal_104, 4);
		MISC::SET_BIT(&iLocal_104, 1);
		if (!bLocal_159)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_112[0], false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_112[0]))
				{
					Local_105 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_112[0], 1.2f, 1.5f) };
				}
			}
			else
			{
				Local_105 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_112[0], true), 1.2f, 1.5f) };
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
		{
			Local_105 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_173, false), 1.2f, 1.5f) };
		}
		Local_105 = { Local_105.f_0, Local_105.f_1, (Local_105.f_2 + 0.25f) };
		iLocal_108 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_MED_BAG"), Local_105, iLocal_104, iLocal_187, true, joaat("prop_cs_duffel_01"));
		iLocal_190 = func_107(iLocal_108);
		if (iLocal_47 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_109 - 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_112[iVar0]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_112[iVar0], true, 1);
					TASK::CLEAR_PED_TASKS(iLocal_112[iVar0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_112[iVar0], iLocal_150);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
					PED::SET_PED_KEEP_TASK(iLocal_112[iVar0], true);
				}
				iVar0++;
			}
		}
		else if (iLocal_47 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_112[0]))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_112[0]);
				if (!TASK::IS_PED_IN_WRITHE(iLocal_112[0]))
				{
					func_51();
					SYSTEM::WAIT(0);
					func_117(&uLocal_230, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_107(int iParam0)//Position - 0x8AEA
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_108(bool bParam0, float fParam1, float fParam2)//Position - 0x8B22
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_109()//Position - 0x8B39
{
	if (HUD::DOES_BLIP_EXIST(iLocal_190))
	{
		HUD::REMOVE_BLIP(&iLocal_190);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_191))
	{
		HUD::REMOVE_BLIP(&iLocal_191);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_189))
	{
		HUD::REMOVE_BLIP(&iLocal_189);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_183[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_183[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_183[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_183[1]));
	}
}

int func_110()//Position - 0x8B98
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_112[0]))
	{
		iLocal_147 = 1;
	}
	else if (PED::IS_PED_INJURED(iLocal_112[0]))
	{
		iLocal_147 = 1;
	}
	if (!bLocal_159)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_112[1]))
		{
			iLocal_148 = 1;
		}
		else if (PED::IS_PED_INJURED(iLocal_112[1]))
		{
			iLocal_148 = 1;
		}
	}
	else
	{
		iLocal_148 = 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_182))
	{
		iLocal_149 = 1;
	}
	else if (PED::IS_PED_INJURED(iLocal_182) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_182, false))
	{
		iLocal_149 = 1;
	}
	if ((iLocal_147 && iLocal_148) || iLocal_149)
	{
		return 1;
	}
	return 0;
}

int func_111()//Position - 0x8C33
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_109 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_112[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_112[iVar0]) || ENTITY::IS_ENTITY_DEAD(iLocal_112[iVar0], false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_112[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_109 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_112[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_112[iVar0]))
			{
				if (PED::IS_PED_BEING_JACKED(iLocal_112[iVar0]))
				{
					if (PED::GET_PEDS_JACKER(iLocal_112[iVar0]) == PLAYER::PLAYER_PED_ID())
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_112[iVar0], true, 1);
						TASK::TASK_SMART_FLEE_PED(iLocal_112[iVar0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_112[iVar0], true);
						SYSTEM::WAIT(0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_112[iVar0]));
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_182))
	{
		if (!PED::IS_PED_INJURED(iLocal_182) || ENTITY::IS_ENTITY_DEAD(iLocal_182, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_182, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_182))
		{
			if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN")))
			{
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_182))
	{
		if (!PED::IS_PED_INJURED(iLocal_182))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_182))
			{
				if (PED::GET_PEDS_JACKER(iLocal_182) == PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_182, true, 1);
					TASK::TASK_SMART_FLEE_PED(iLocal_182, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_182, true);
					SYSTEM::WAIT(0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_182);
					return 1;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_173, false) || ENTITY::IS_ENTITY_DEAD(iLocal_173, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_173, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_112(int iParam0, bool bParam1, bool bParam2)//Position - 0x8DFD
{
	return func_113(iParam0, !bParam1, bParam2);
}

int func_113(int iParam0, bool bParam1, bool bParam2)//Position - 0x8E10
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_108(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_114()//Position - 0x8EB4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_112[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_112[0], iLocal_173, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_112[1]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_112[1], iLocal_173, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_115()//Position - 0x8F03
{
	if (PED::IS_PED_INJURED(iLocal_112[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_165))
			{
				ENTITY::DETACH_ENTITY(iLocal_165, true, true);
			}
			OBJECT::DELETE_OBJECT(&iLocal_165);
			func_109();
			func_106();
			iLocal_45 = 9;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_112[0], PLAYER::PLAYER_PED_ID(), true))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_165))
			{
				ENTITY::DETACH_ENTITY(iLocal_165, true, true);
			}
			OBJECT::DELETE_OBJECT(&iLocal_165);
			func_109();
			func_106();
			iLocal_45 = 9;
		}
	}
}

int func_116(int iParam0)//Position - 0x8F83
{
	int iVar0;
	int iVar1;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 128);
	iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_117(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8FD3
{
	func_132(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2883585 = 0;
	return func_118(sParam2, iParam3, 0);
}

int func_118(char* sParam0, int iParam1, bool bParam2)//Position - 0x9021
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
					func_131();
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
		if (func_130(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_129();
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
				func_128();
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
				if (func_127())
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
			if (func_126())
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
			func_125();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_124();
		func_119();
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
		func_131();
	}
	return 0;
}

void func_119()//Position - 0x92EF
{
	if (!func_120())
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

int func_120()//Position - 0x9326
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_123())
	{
		return 0;
	}
	if (func_121(PLAYER::PLAYER_ID()))
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

bool func_121(int iParam0)//Position - 0x9389
{
	return func_122(iParam0, 20);
}

var func_122(int iParam0, int iParam1)//Position - 0x9399
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_123()//Position - 0x93B1
{
	return -1;
}

void func_124()//Position - 0x93BA
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

void func_125()//Position - 0x93EC
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

int func_126()//Position - 0x9481
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_127()//Position - 0x94A8
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

void func_128()//Position - 0x9541
{
	if (func_38(14))
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
		Global_20500 = func_43();
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

void func_129()//Position - 0x95E3
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

bool func_130(int iParam0, int iParam1)//Position - 0x963B
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

void func_131()//Position - 0x9673
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

void func_132(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x96CA
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

int func_133()//Position - 0x9720
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_134(bool bParam0)//Position - 0x9742
{
	if (bParam0)
	{
		func_140();
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8371, 16);
		}
		Global_20500.f_1 = 1;
		if (func_139(0))
		{
			func_135(0);
		}
	}
	else if (Global_20500.f_1 == 1)
	{
		if (!Global_20500.f_1 == 0)
		{
			Global_20500.f_1 = 3;
		}
	}
}

void func_135(int iParam0)//Position - 0x97A5
{
	if (func_138())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_137())
		{
			func_136(1, 1);
		}
		else
		{
			func_136(0, 0);
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
	if (!func_126())
	{
		Global_20500.f_1 = 3;
	}
}

void func_136(bool bParam0, bool bParam1)//Position - 0x982F
{
	if (bParam0)
	{
		if (func_139(0))
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

bool func_137()//Position - 0x98A3
{
	return BitTest(Global_1963795, 5);
}

bool func_138()//Position - 0x98B1
{
	return BitTest(Global_1963795, 19);
}

int func_139(int iParam0)//Position - 0x98C0
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

void func_140()//Position - 0x9917
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}
}

void func_141(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9940
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_149(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_126())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_148(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_149(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_148(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_146(PLAYER::PLAYER_ID())) && !func_143(PLAYER::PLAYER_ID(), 0)) && !func_142()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_146(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_142()//Position - 0x9A8D
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_143(int iParam0, int iParam1)//Position - 0x9AA7
{
	bool bVar0;
	
	if (!func_145(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_144(-1, 0) == 8;
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

int func_144(int iParam0, bool bParam1)//Position - 0x9B00
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
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

int func_145(var uParam0)//Position - 0x9B41
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

int func_146(int iParam0)//Position - 0x9B63
{
	if (func_143(iParam0, 0))
	{
		return 1;
	}
	if (func_147())
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

bool func_147()//Position - 0x9BA2
{
	return BitTest(Global_2621446, 3);
}

int func_148(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x9BB0
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && uParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_149(int iParam0)//Position - 0x9BE3
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 13);
	}
}

int func_150()//Position - 0x9C06
{
	if (!PED::IS_PED_INJURED(iLocal_112[0]) && !PED::IS_PED_INJURED(iLocal_112[1]))
	{
		if (iLocal_47 == 1)
		{
			if (!iLocal_163)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_112[0], -823.5066f, -187.34647f, 40.36355f, -803.6377f, -175.94965f, 36.433704f, 11.9375f, false, true, 0))
				{
					iLocal_163 = 1;
				}
			}
			if (!iLocal_164)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_112[1], -823.5066f, -187.34647f, 40.36355f, -803.6377f, -175.94965f, 36.433704f, 11.9375f, false, true, 0))
				{
					iLocal_164 = 1;
				}
			}
		}
		else if (iLocal_47 == 2)
		{
			if (!iLocal_163)
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_112[0], -1204.0306f, -779.62897f, 16.335648f, -1174.7986f, -757.0704f, 21.012814f, 12.125f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_112[0], -1206.5447f, -777.8941f, 21.203548f, -1204.3134f, -778.2245f, 16.08434f, 2.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_112[0], -1202.9276f, -782.6883f, 21.203688f, -1202.583f, -780.50665f, 16.082426f, 2.25f, false, true, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_112[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					iLocal_163 = 1;
				}
			}
			if (!iLocal_164)
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_112[1], -1204.0306f, -779.62897f, 16.335648f, -1174.7986f, -757.0704f, 21.012814f, 12.125f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_112[1], -1206.5447f, -777.8941f, 21.203548f, -1204.3134f, -778.2245f, 16.08434f, 2.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_112[1], -1202.9276f, -782.6883f, 21.203688f, -1202.583f, -780.50665f, 16.082426f, 2.25f, false, true, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_112[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					iLocal_164 = 1;
				}
			}
		}
	}
	if (iLocal_163 && iLocal_164)
	{
		return 1;
	}
	return 0;
}

void func_151()//Position - 0x9E38
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_165, true) };
	Var3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_165, 2) };
	OBJECT::DELETE_OBJECT(&iLocal_165);
	iLocal_165 = OBJECT::CREATE_OBJECT(joaat("prop_cs_duffel_01"), Var0, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_165, Var3, 2, true);
}

void func_152()//Position - 0x9E7A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_112[0]))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_112[0], false)) > 200f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_112[0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_183[0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_183[0]));
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_112[0]));
			bLocal_145 = true;
		}
	}
	else
	{
		bLocal_145 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_173, false)) > 200f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_173))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_189))
			{
				HUD::REMOVE_BLIP(&iLocal_189);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_173);
			bLocal_146 = true;
		}
	}
	else
	{
		bLocal_146 = true;
	}
	if (bLocal_159)
	{
		if (bLocal_146)
		{
			if (func_170())
			{
				iLocal_45 = 13;
			}
			else
			{
				SYSTEM::WAIT(0);
				iLocal_44 = 2;
			}
		}
	}
	else if (bLocal_145)
	{
		SYSTEM::WAIT(0);
		if (func_170())
		{
			iLocal_45 = 13;
		}
		else
		{
			iLocal_44 = 2;
		}
	}
}

void func_153()//Position - 0x9F70
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_173, false))
	{
		if (ENTITY::GET_ENTITY_HEALTH(iLocal_173) < 800)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_173, 0, 0);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_173, 10f);
		}
	}
}

void func_154()//Position - 0x9FA2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_109 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_112[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_112[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_183[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_183[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_155()//Position - 0x9FF0
{
	int iVar0;
	int iVar1;
	
	if (iLocal_47 == 1)
	{
		if (PED::IS_PED_INJURED(iLocal_112[0]) && PED::IS_PED_INJURED(iLocal_112[1]))
		{
			iLocal_45 = 7;
		}
	}
	else if (iLocal_47 == 2)
	{
		if (PED::IS_PED_INJURED(iLocal_112[0]) && PED::IS_PED_INJURED(iLocal_112[1]))
		{
			iLocal_45 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_112)
	{
		if (PED::IS_PED_INJURED(iLocal_112[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_183[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_183[iVar0]));
			}
		}
		iVar0++;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_138)
		{
			iVar1 = 0;
			while (iVar1 <= (iLocal_109 - 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_112[iVar1]))
				{
					TASK::TASK_COMBAT_PED(iLocal_112[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iVar1++;
			}
			bLocal_138 = true;
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_165))
			{
				iLocal_45 = 5;
			}
		}
	}
	if (!iLocal_152 && !bLocal_138)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE51A_SHOP");
		func_51();
		SYSTEM::WAIT(0);
		if (iLocal_47 == 1)
		{
			if (func_117(&uLocal_230, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				iLocal_152 = 1;
			}
		}
		else if (iLocal_47 == 2)
		{
			if (func_117(&uLocal_230, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				iLocal_152 = 1;
			}
		}
	}
	if ((iLocal_152 && !iLocal_153) && !bLocal_138)
	{
		if (!func_133())
		{
			if (func_43() == 0)
			{
				func_117(&uLocal_230, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (func_43() == 1)
			{
				func_117(&uLocal_230, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (func_43() == 2)
			{
				func_117(&uLocal_230, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			iLocal_153 = 1;
		}
	}
	if (!bLocal_138)
	{
		if (!func_133())
		{
			if (iLocal_153 && !iLocal_154)
			{
				if (iLocal_47 == 1)
				{
					if (func_173(&uLocal_230, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						iLocal_154 = 1;
					}
				}
				else if (iLocal_47 == 2)
				{
					if (func_173(&uLocal_230, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						iLocal_154 = 1;
					}
				}
			}
		}
		if (iLocal_47 == 1)
		{
			if (!func_133())
			{
				if (!iLocal_155)
				{
					if (iLocal_47 == 1)
					{
						func_117(&uLocal_230, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_47 == 2)
					{
						func_117(&uLocal_230, "REROBAU", "REROB_LV", 4, 0, 0, 0);
					}
					iLocal_155 = 1;
				}
			}
		}
		else if (iLocal_47 == 2)
		{
			if (SYSTEM::TIMERA() > 4000)
			{
				if (!iLocal_155)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
					{
						if (!PED::IS_PED_INJURED(iLocal_115[0]))
						{
							iLocal_155 = 1;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_165) && !PED::IS_PED_INJURED(iLocal_112[0]))
			{
				if (!iLocal_176)
				{
					iLocal_176 = 1;
				}
			}
		}
		if (!iLocal_136)
		{
			if (iLocal_47 == 1)
			{
				if (SYSTEM::TIMERA() > 14100)
				{
					OBJECT::DELETE_OBJECT(&(iLocal_166[0]));
					OBJECT::DELETE_OBJECT(&(iLocal_166[1]));
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_173, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_112[0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_112[0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_173, -1, 0, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_112[0], iLocal_150);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
						}
						if (!PED::IS_PED_INJURED(iLocal_112[1]))
						{
							PED::FORCE_PED_MOTION_STATE(iLocal_112[1], joaat("MotionState_Run"), true, 0, false);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_173, -1, 1, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_112[1], iLocal_150);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
						}
						iLocal_45 = 2;
						iLocal_136 = 1;
					}
					else
					{
						if (!PED::IS_PED_INJURED(iLocal_112[0]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_112[0], true, 1);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_112[0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_112[0], iLocal_150);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
						}
						if (!PED::IS_PED_INJURED(iLocal_112[1]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_112[1], true, 1);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_112[1]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_112[1], iLocal_150);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
						}
						iLocal_45 = 2;
						iLocal_136 = 1;
					}
				}
			}
			else if (iLocal_47 == 2)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_214) > 0.453f)
				{
					if (!PED::IS_PED_INJURED(iLocal_115[0]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[0], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
						TASK::TASK_PLAY_ANIM(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_115[0], iLocal_150);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
						PED::SET_PED_KEEP_TASK(iLocal_115[0], true);
					}
					if (!PED::IS_PED_INJURED(iLocal_112[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_112[0]);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_112[0], 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_112[0], 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_112[0], 17, true);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_112[0], 1.6f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_112[0], true, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
						TASK::TASK_PLAY_ANIM(0, "random@robbery", "run", 2f, -2f, -1, 49, 0f, false, false, false);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_shoprobbery", 0, 0, 16);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_112[0], iLocal_150);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
						PED::SET_PED_KEEP_TASK(iLocal_112[0], true);
						SYSTEM::SETTIMERB(0);
					}
					if (!PED::IS_PED_INJURED(iLocal_112[1]))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_112[1], 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_112[1], 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_112[1], 17, true);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_112[1], 1.6f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_112[1], true, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_shoprobbery2", 0, 0, 17);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_112[1], iLocal_150);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
						PED::SET_PED_KEEP_TASK(iLocal_112[1], true);
					}
					iLocal_45 = 2;
					iLocal_136 = 1;
				}
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
	}
}

void func_156()//Position - 0xA5B4
{
	switch (iLocal_225)
	{
		case 0:
			func_141(1, 1, 1, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_PEDS(func_157(PLAYER::PLAYER_ID()), 10f, 0);
			iLocal_224 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
			CAM::SET_CAM_ACTIVE(iLocal_224, true);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_224, iLocal_214, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_47 == 1)
			{
				INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("Hair_room");
			}
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iLocal_226 = MISC::GET_GAME_TIMER() + 3500;
			iLocal_225++;
			break;
		
		case 1:
			if (iLocal_226 < MISC::GET_GAME_TIMER())
			{
				if (iLocal_47 == 1)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(115f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.1222f, 1f);
				}
				else if (iLocal_47 == 2)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(44.5236f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-18.1582f, 1f);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				CAM::SET_CAM_ACTIVE(iLocal_224, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				func_53();
				func_141(0, 1, 1, 0, 0, 0, 0);
				iLocal_225++;
			}
			break;
		
		case 2:
			break;
	}
}

Vector3 func_157(int iParam0)//Position - 0xA6B8
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_158()//Position - 0xA6CB
{
	int iVar0;
	
	if (!iLocal_134 && func_161(1, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_191))
		{
			HUD::REMOVE_BLIP(&iLocal_191);
		}
		func_141(1, 1, 1, 0, 0, 0, 0);
		HUD::CLEAR_HELP(true);
		HUD::DISPLAY_HUD(false);
		HUD::DISPLAY_RADAR(false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		if (iLocal_47 == 1)
		{
			if (!iLocal_175)
			{
				iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(Local_199, Local_205, 2);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_214, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				if (((!PED::IS_PED_INJURED(iLocal_112[0]) && !PED::IS_PED_INJURED(iLocal_112[1])) && !PED::IS_PED_INJURED(iLocal_115[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_165))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_112[0], iLocal_214, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_112[1], iLocal_214, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_115[0], iLocal_214, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_165, iLocal_214, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1000f);
				}
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_214, 0.06f);
				iLocal_175 = 1;
			}
		}
		else if (iLocal_47 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_115[0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_115[0]);
				TASK::TASK_PLAY_ANIM(iLocal_115[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, 0f, false, false, false);
			}
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1195.0616f, -773.2098f, 16.324f, 20f, 4);
			iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(Local_199, Local_205, 2);
			if (((!PED::IS_PED_INJURED(iLocal_112[0]) && !PED::IS_PED_INJURED(iLocal_112[1])) && !PED::IS_PED_INJURED(iLocal_115[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_165))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_112[0], iLocal_214, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_115[0], iLocal_214, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1000f, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_166[1]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_166[0], iLocal_115[0], PED::GET_PED_BONE_INDEX(iLocal_115[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_166[1], iLocal_115[0], PED::GET_PED_BONE_INDEX(iLocal_115[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
				}
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_214, 0.05f);
			Local_199 = { -1199.369f, -776.1991f, 16.3235f };
			Local_205 = { 0f, 0f, -60f };
			iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(Local_199, Local_205, 2);
			if (!PED::IS_PED_INJURED(iLocal_112[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_112[1], iLocal_214, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1000f, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_214, 0.06f);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1200.4554f, -777.6201f, 16.3244f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 305.3806f);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
			TASK::TASK_PLAY_ANIM(0, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0.06f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_150);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		}
		iLocal_134 = 1;
	}
	if (!iLocal_174)
	{
		func_159();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_109 - 1))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_183[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_112[iVar0]))
			{
				uLocal_183[iVar0] = func_171(iLocal_112[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_47 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_173)) || iLocal_47 == 2)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_45 = 1;
	}
}

void func_159()//Position - 0xAB06
{
	int iVar0;
	
	iVar0 = joaat("baller");
	if (!iLocal_177)
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_177 = 1;
		}
		else
		{
			STREAMING::REQUEST_MODEL(iVar0);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (func_160())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_169, -828.3692f, -194.46695f, 36.413845f, -824.58014f, -201.13535f, 39.394363f, 4.3125f, false, true, 0))
			{
				Local_170 = { -822.1784f, -205.811f, 36.3444f };
			}
			else
			{
				Local_170 = { -826.2828f, -197.8547f, 36.3995f };
			}
		}
		else
		{
			Local_170 = { -826.2828f, -197.8547f, 36.3995f };
		}
		iLocal_173 = VEHICLE::CREATE_VEHICLE(iVar0, Local_170, 31.9252f, true, true, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_173, true, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_173, 5f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_173, true, true, false);
		iLocal_182 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_173, 26, joaat("G_M_Y_Korean_01"), -1, true, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_182, 134, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_182, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_182, iLocal_188);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_182, 8, false);
		PED::SET_PED_COMBAT_ABILITY(iLocal_182, 0);
		PED::SET_PED_ACCURACY(iLocal_182, 13);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_182, joaat("WEAPON_PISTOL"), -1, true, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_182, true, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_182, 42, true);
		iLocal_174 = 1;
	}
}

int func_160()//Position - 0xAC4C
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iVar0, -829.3693f, -191.9869f, 36.4616f, 15f, 15f, 5f, false, true, 0))
		{
			iLocal_169 = iVar0;
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_169))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_169, true, false);
			}
			return 1;
		}
	}
	return 0;
}

int func_161(bool bParam0, bool bParam1, bool bParam2)//Position - 0xACA5
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_162()//Position - 0xAD8A
{
	func_236();
}

int func_163(int iParam0)//Position - 0xAD96
{
	if (func_164())
	{
		Global_113800 = 1;
		Global_113797 = MISC::GET_GAME_TIMER();
		if (func_62(Global_113799))
		{
			func_100(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && func_62(Global_113799))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

int func_164()//Position - 0xADE9
{
	switch (func_165(&Global_32343, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_165(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xAE1F
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_98291.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_169(0))
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23251.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43377 = iParam2;
		Global_43339 = *uParam0;
		Global_43340 = iParam4;
		Global_43338 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43338 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43338)
			{
				if (Global_43344[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43339 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_167(iParam2))
		{
			return 0;
		}
		if (Global_43338 == 8)
		{
			return 0;
		}
		Global_43341++;
		*uParam0 = Global_43341;
		Global_43344[Global_43338 /*4*/] = Global_43341;
		Global_43344[Global_43338 /*4*/].f_1 = iParam1;
		Global_43344[Global_43338 /*4*/].f_2 = iParam2;
		Global_43344[Global_43338 /*4*/].f_3 = 0;
		Global_43338++;
		if (iParam4 != 0)
		{
			func_166(uParam0, iParam4);
		}
	}
	return 2;
}

void func_166(var uParam0, int iParam1)//Position - 0xAF56
{
	int iVar0;
	
	if (Global_43338 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43338)
	{
		if (Global_43344[iVar0 /*4*/] == *uParam0)
		{
			Global_43344[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_167(int iParam0)//Position - 0xAFA5
{
	return func_168(iParam0, Global_43377);
}

int func_168(int iParam0, int iParam1)//Position - 0xAFB6
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

int func_169(int iParam0)//Position - 0xB197
{
	if (Global_43377 == 15)
	{
		return 0;
	}
	if (func_167(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_170()//Position - 0xB1B9
{
	if (iLocal_47 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4598f, -175.81352f, 36.28367f, -823.02423f, -187.04622f, 40.535473f, 11.9375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -823.3706f, -188.06018f, 36.621624f, -822.83606f, -187.74661f, 39.069138f, 1.5f, false, true, 0))
		{
			return 1;
		}
	}
	else if (iLocal_47 == 2)
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1204.0306f, -779.62897f, 16.335648f, -1174.7986f, -757.0704f, 21.012814f, 12.125f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1203.8992f, -776.9178f, 20.168028f, -1201.2893f, -780.46985f, 15.615259f, 3.9375f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1206.5447f, -777.8941f, 21.203548f, -1204.3134f, -778.2245f, 16.08434f, 2.25f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1202.9276f, -782.6883f, 21.203688f, -1202.583f, -780.50665f, 16.082426f, 2.25f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_171(int iParam0, bool bParam1, int iParam2)//Position - 0xB30B
{
	int iVar0;
	
	iVar0 = func_113(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2058[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2058[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_172()//Position - 0xB355
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -823.1281f, -187.9591f, 36.6189f, 12f, 12f, 12f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1201.0172f, -777.5527f, 16.3398f, 12f, 12f, 12f, false, true, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_112[0]) && !PED::IS_PED_INJURED(iLocal_112[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_112[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_112[1], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_112[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_112[1], PLAYER::PLAYER_PED_ID()))
			{
				if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_112[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_112[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_112[1])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_112[1]))
				{
					if (iLocal_124 == -1)
					{
						iLocal_124 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_124 = -1;
				}
				if (iLocal_124 != -1 && MISC::GET_GAME_TIMER() > iLocal_124 + 1500)
				{
					return 1;
				}
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_AREA(-1, Local_192 - Vector(20f, 20f, 20f), Local_192 + Vector(20f, 20f, 20f)))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_112[0], false) || ENTITY::IS_ENTITY_DEAD(iLocal_112[1], false))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_170())
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && func_170())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_112[0]) && !PED::IS_PED_INJURED(iLocal_112[1]))
	{
		if (((PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_112[1], true) - Vector(12f, 12f, 12f), ENTITY::GET_ENTITY_COORDS(iLocal_112[1], true) + Vector(12f, 12f, 12f), false, true) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_112[0], true), 3f, true)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_112[1], true), 3f, true))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_115)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_115[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_115[iVar0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_119)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_119[iVar0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_173(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB623
{
	func_132(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21852 = 0;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 1;
	Global_22838 = 0;
	Global_22842 = 0;
	StringCopy(&Global_22849, sParam3, 24);
	Global_2883585 = 0;
	return func_118(sParam2, iParam4, 0);
}

int func_174()//Position - 0xB677
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -823.1281f, -187.9591f, 36.6189f, 4f, 4f, 4f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1201.0172f, -777.5527f, 16.3398f, 4f, 4f, 4f, false, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, 1, 0);
		return 1;
	}
	return 0;
}

void func_175()//Position - 0xB6E3
{
	if (!PED::IS_PED_INJURED(iLocal_115[1]))
	{
		if (PED::IS_PED_MALE(iLocal_115[1]))
		{
			func_176(iLocal_115[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			func_176(iLocal_115[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		AUDIO::PLAY_PAIN(iLocal_115[1], 26, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_119[1]))
	{
		func_176(iLocal_119[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		AUDIO::PLAY_PAIN(iLocal_119[1], 3, 0, 0);
	}
}

void func_176(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xB763
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_177(iParam3), false);
}

int func_177(int iParam0)//Position - 0xB77C
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

void func_178()//Position - 0xB971
{
	int iVar0;
	
	PED::SET_CREATE_RANDOM_COPS(false);
	PED::ADD_RELATIONSHIP_GROUP("ROBBERS", &iLocal_188);
	iVar0 = 0;
	while (iVar0 <= (iLocal_109 - 1))
	{
		iLocal_112[iVar0] = PED::CREATE_PED(26, iLocal_220, Local_53[iVar0 /*3*/], fLocal_60[iVar0], true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_112[iVar0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_112[iVar0], iLocal_188);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_112[iVar0], 8, false);
		PED::SET_PED_COMBAT_ABILITY(iLocal_112[iVar0], 0);
		PED::SET_PED_ACCURACY(iLocal_112[iVar0], 13);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_112[iVar0], joaat("WEAPON_PISTOL"), -1, true, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_112[iVar0], true, 0f);
		PED::SET_PED_CONFIG_FLAG(iLocal_112[iVar0], 42, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_112[iVar0], 269, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_112[iVar0], 188, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_112[iVar0], false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_112[iVar0], 128, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_112[iVar0], 8, true);
		iVar0++;
	}
	PED::SET_PED_NAME_DEBUG(iLocal_112[0], "pedRobber[0]");
	PED::SET_PED_NAME_DEBUG(iLocal_112[1], "pedRobber[1]");
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_188, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_188);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_188, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_188);
	if (func_43() == 0)
	{
		func_183(&uLocal_230, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (func_43() == 1)
	{
		func_183(&uLocal_230, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (func_43() == 2)
	{
		func_183(&uLocal_230, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	iLocal_165 = OBJECT::CREATE_OBJECT(iLocal_186, Local_95, true, true, false);
	if (iLocal_47 == 1)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_126 - Vector(20f, 20f, 20f), Local_126 + Vector(20f, 20f, 20f), false, true, true, true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller"), true);
		iLocal_166[0] = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_01"), Local_95, true, true, false);
		iLocal_166[1] = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_01"), Local_95 - Vector(0.1f, 0f, 0f), true, true, false);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_112[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_112[1], "G_M_Y_Korean_01_Korean_MINI_02");
		Local_199 = { -821.565f, -186.467f, 36.6f };
		Local_205 = { 0f, 0f, -59.96f };
		iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(Local_199, Local_205, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_214, true);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_112[1], iLocal_214, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1000f, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_165, iLocal_214, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 8f, 0, 1000f);
		iVar0 = 0;
		while (iVar0 <= (iLocal_110 - 1))
		{
			iLocal_115[iVar0] = PED::CREATE_PED(26, iLocal_217, Local_63[iVar0 /*3*/], fLocal_73[iVar0], true, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_115[iVar0], 17, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[iVar0], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_115[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(iLocal_115[iVar0], 269, true);
			iVar0++;
		}
		PED::SET_PED_NAME_DEBUG(iLocal_115[0], "pedWorker[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_115[1], "pedWorker[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_115[2], "pedWorker[2]");
		iLocal_119[0] = PED::CREATE_PED(26, iLocal_218, Local_77[0 /*3*/], fLocal_90[0], true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_119[0], 17, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[0], true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_119[0], false);
		PED::SET_PED_CONFIG_FLAG(iLocal_119[0], 269, true);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_119[iVar0] = PED::CREATE_PED(26, iLocal_219, Local_77[iVar0 /*3*/], fLocal_90[iVar0], true, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_119[iVar0], 17, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[iVar0], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_119[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(iLocal_119[iVar0], 269, true);
			iVar0++;
		}
		PED::SET_PED_NAME_DEBUG(iLocal_119[0], "pedShopper[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_119[1], "pedShopper[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_119[2], "pedShopper[2]");
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[0], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[0], 2, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[0], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[0], 5, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_115[0], iLocal_214, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1000f, 0);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_115[0], "A_M_Y_BevHills_01_White_Mini_01");
		func_183(&uLocal_230, 5, iLocal_115[0], "REROBShopworker", 0, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[1], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[1], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[1], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[1], 5, 0, 0, 0);
		TASK::TASK_COWER(iLocal_115[1], -1);
		PED::SET_PED_KEEP_TASK(iLocal_115[1], true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[2], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[2], 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[2], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_115[2], 5, 0, 0, 0);
		TASK::TASK_COWER(iLocal_115[2], -1);
		PED::SET_PED_KEEP_TASK(iLocal_115[2], true);
		iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(-812.37f, -185.65f, 37.5804f, 0f, 0f, 30f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_214, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[0], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[0], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[0], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[0], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[0], 8, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_119[0], iLocal_214, "random@robbery", "cower", 8f, -8f, 5, 0, 1000f, 0);
		PED::SET_PED_KEEP_TASK(iLocal_119[0], true);
		iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(-817.5606f, -190.8273f, 37.6114f, 0f, 0f, 25.8399f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_214, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[1], 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[1], 4, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[1], 8, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_119[1], iLocal_214, "random@robbery", "cower", 8f, -8f, 5, 0, 1000f, 0);
		PED::SET_PED_KEEP_TASK(iLocal_119[1], true);
		iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(-816.1862f, -182.897f, 37.68f, 0f, 0f, 30f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_214, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[2], 2, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[2], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[2], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_119[2], 8, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_119[2], iLocal_214, "random@robbery", "cower", 8f, -8f, 5, 0, 1000f, 0);
		PED::SET_PED_KEEP_TASK(iLocal_119[2], true);
		TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_112[0], iLocal_115[0], -1, false);
		PATHFIND::SET_ROADS_IN_AREA(-871f, -246f, 0f, -798f, -163f, 50f, false, true);
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Hairdresser1");
		func_182(0, 1);
		func_181(0);
		SYSTEM::WAIT(500);
		func_179(0, 0, 0);
	}
	else if (iLocal_47 == 2)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_129 - Vector(20f, 20f, 20f), Local_129 + Vector(20f, 20f, 20f), false, true, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_165, Local_98, 2, true);
		iLocal_115[0] = PED::CREATE_PED(26, iLocal_217, Local_63[0 /*3*/], fLocal_73[0], true, true);
		PED::SET_PED_NAME_DEBUG(iLocal_115[0], "pedWorker[0]");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_115[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		func_183(&uLocal_230, 6, iLocal_115[0], "REROBShopworker2", 0, 1);
		iLocal_115[1] = PED::CREATE_PED(26, iLocal_216, Local_63[1 /*3*/], fLocal_73[1], true, true);
		PED::SET_PED_NAME_DEBUG(iLocal_115[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_110 - 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_115[iVar0], 17, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[iVar0], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_115[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(iLocal_115[iVar0], 269, true);
			iVar0++;
		}
		iLocal_119[0] = PED::CREATE_PED(26, iLocal_218, Local_77[0 /*3*/], fLocal_90[0], true, true);
		PED::SET_PED_NAME_DEBUG(iLocal_119[0], "pedShopper[0]");
		iLocal_119[1] = PED::CREATE_PED(26, iLocal_219, Local_77[1 /*3*/], fLocal_90[1], true, true);
		PED::SET_PED_NAME_DEBUG(iLocal_119[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_119[iVar0], 17, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_119[iVar0], true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_119[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(iLocal_119[iVar0], 269, true);
			iVar0++;
		}
		TASK::TASK_PLAY_ANIM(iLocal_115[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, 0f, false, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_115[0], true);
		TASK::TASK_PLAY_ANIM(iLocal_115[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, 0f, false, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_115[1], true);
		TASK::TASK_COWER(iLocal_119[0], -1);
		PED::SET_PED_KEEP_TASK(iLocal_119[0], true);
		TASK::TASK_PLAY_ANIM(iLocal_119[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, 0f, false, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_119[1], true);
		Local_199 = { -1192.01f, -768.929f, 16.358f };
		Local_205 = { 0f, 0f, -59.5f };
		iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(Local_199, Local_205, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_214, true);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_112[0], iLocal_214, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_115[0], iLocal_214, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1000f, 0);
		TASK::TASK_PLAY_ANIM(iLocal_112[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, 0f, false, false, false);
		func_182(14, 1);
		func_181(14);
		SYSTEM::WAIT(500);
		func_179(14, 0, 0);
	}
	func_183(&uLocal_230, 3, iLocal_112[0], "REROBRobber1", 0, 1);
	func_183(&uLocal_230, 4, iLocal_112[1], "REROBRobber2", 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_BevHills_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_BevHills_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Hipster_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Hipster_04"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Korean_01"));
}

void func_179(int iParam0, bool bParam1, bool bParam2)//Position - 0xC3C5
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (iParam0 == 58)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 3;
		}
	}
	iVar1 = func_180(iParam0, 0);
	if (iVar1 != 226)
	{
		func_75(iVar1, iVar0);
	}
	iVar1 = func_180(iParam0, 1);
	if (iVar1 != 226)
	{
		func_75(iVar1, iVar0);
	}
}

int func_180(int iParam0, int iParam1)//Position - 0xC432
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

void func_181(int iParam0)//Position - 0xC8B3
{
	func_11(iParam0, 9, 1);
}

void func_182(int iParam0, bool bParam1)//Position - 0xC8C4
{
	if (bParam1)
	{
		if (!func_12(iParam0, 4, 1))
		{
			func_11(iParam0, 4, 1);
			func_40(137, 1);
		}
	}
	else if (func_12(iParam0, 4, 1))
	{
		func_3(iParam0, 4, 1);
	}
}

void func_183(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xC902
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

void func_184()//Position - 0xC99D
{
	if (!iLocal_133)
	{
		iLocal_151 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_53[0 /*3*/]);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_151);
		iLocal_133 = 1;
	}
}

void func_185()//Position - 0xC9C1
{
	STREAMING::REQUEST_MODEL(iLocal_217);
	STREAMING::REQUEST_MODEL(iLocal_218);
	STREAMING::REQUEST_MODEL(iLocal_219);
	STREAMING::REQUEST_MODEL(iLocal_220);
	STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_duffel_01"));
	TASK::REQUEST_WAYPOINT_RECORDING("re_shoprobbery");
	TASK::REQUEST_WAYPOINT_RECORDING("re_shoprobbery2");
	STREAMING::REQUEST_ANIM_DICT("random@robbery");
	STREAMING::REQUEST_ANIM_DICT("random@shop_robbery");
	AUDIO::PREPARE_MUSIC_EVENT("RE51A_SHOP");
	if ((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_217) && STREAMING::HAS_MODEL_LOADED(iLocal_218)) && STREAMING::HAS_MODEL_LOADED(iLocal_219)) && STREAMING::HAS_MODEL_LOADED(iLocal_220)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_duffel_01"))) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("re_shoprobbery")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("re_shoprobbery2")) && STREAMING::HAS_ANIM_DICT_LOADED("random@robbery")) && STREAMING::HAS_ANIM_DICT_LOADED("random@shop_robbery")) && AUDIO::PREPARE_MUSIC_EVENT("RE51A_SHOP"))
	{
		iLocal_51 = 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_217);
		STREAMING::REQUEST_MODEL(iLocal_218);
		STREAMING::REQUEST_MODEL(iLocal_219);
		STREAMING::REQUEST_MODEL(iLocal_220);
		STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_cs_duffel_01"));
		STREAMING::REQUEST_ANIM_DICT("random@robbery");
		STREAMING::REQUEST_ANIM_DICT("random@shop_robbery");
		AUDIO::PREPARE_MUSIC_EVENT("RE51A_SHOP");
	}
}

void func_186()//Position - 0xCAE6
{
	iLocal_139[0] = 0;
	iLocal_139[1] = 0;
	if (iLocal_47 == 1)
	{
		iLocal_217 = joaat("A_F_Y_BevHills_02");
		iLocal_218 = joaat("A_M_Y_BevHills_02");
		iLocal_219 = joaat("A_F_Y_BevHills_02");
		iLocal_220 = joaat("G_M_Y_Korean_01");
		iLocal_109 = 2;
		iLocal_110 = 3;
		iLocal_111 = 3;
		Local_53[0 /*3*/] = { -821.4461f, -184.84744f, 37.566795f };
		fLocal_60[0] = 252.381f;
		Local_53[1 /*3*/] = { -819.4664f, -186.8146f, 36.5671f };
		fLocal_60[1] = -153.95622f;
		Local_63[0 /*3*/] = { -821.941f, -183.3325f, 36.5689f };
		fLocal_73[0] = 203.3684f;
		Local_63[1 /*3*/] = { -813.6672f, -185.5652f, 36.5689f };
		fLocal_73[1] = 90.1761f;
		Local_63[2 /*3*/] = { -816.1049f, -183.9966f, 36.5689f };
		fLocal_73[2] = 192.7338f;
		Local_77[0 /*3*/] = { -813.008f, -184.931f, 37.869f };
		fLocal_90[0] = 337.68f;
		Local_77[1 /*3*/] = { -817.5606f, -190.8273f, 37.3114f };
		fLocal_90[1] = 25.8399f;
		Local_77[2 /*3*/] = { -816.1862f, -182.897f, 37.6304f };
		fLocal_90[2] = 30f;
		Local_95 = { -822.2148f, -184.0822f, 37.7027f };
		Local_98 = { -1.8236f, 0.6172f, 75.8024f };
		Local_101 = { -808.5918f, -180.0378f, 36.5689f };
		iLocal_186 = joaat("prop_cs_duffel_01");
		iLocal_187 = 2000;
		Local_192 = { -822.8538f, -187.7645f, 36.5792f };
	}
	else if (iLocal_47 == 2)
	{
		iLocal_216 = joaat("A_M_Y_Hipster_01");
		iLocal_217 = joaat("A_F_Y_Hipster_04");
		iLocal_218 = joaat("A_M_Y_Hipster_01");
		iLocal_219 = joaat("A_F_Y_Hipster_04");
		iLocal_220 = joaat("G_M_Y_StrPunk_02");
		iLocal_109 = 2;
		iLocal_110 = 2;
		iLocal_111 = 2;
		Local_53[0 /*3*/] = { -1193.045f, -769.304f, 16.321f };
		fLocal_60[0] = -85.5f;
		Local_53[1 /*3*/] = { -1199.0454f, -778.8358f, 16.3277f };
		fLocal_60[1] = 329.1899f;
		Local_63[0 /*3*/] = { -1193.8021f, -766.8922f, 16.331f };
		fLocal_73[0] = 221.3152f;
		Local_63[1 /*3*/] = { -1193.8497f, -771.4392f, 16.3227f };
		fLocal_73[1] = 247.1149f;
		Local_77[0 /*3*/] = { -1184.3588f, -767.0463f, 16.3468f };
		fLocal_90[0] = 103.3015f;
		Local_77[1 /*3*/] = { -1185.9325f, -770.624f, 16.344f };
		fLocal_90[1] = 43.215f;
		Local_95 = { -1192.9675f, -767.0651f, 17.2968f };
		Local_98 = { 0f, 0f, -128.52f };
		Local_101 = { -1180.4567f, -763.9163f, 16.3267f };
		iLocal_186 = joaat("prop_cs_duffel_01");
		iLocal_187 = 2000;
		Local_192 = { -1201.0062f, -777.4955f, 16.3235f };
	}
	bLocal_52 = true;
}

int func_187()//Position - 0xCDC5
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_41) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_198())
		{
			return 0;
		}
	}
	if (func_194())
	{
		return 1;
	}
	if (func_188(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_188(float fParam0, bool bParam1)//Position - 0xCE4B
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_45(func_43()))
		{
			iVar36 = func_67();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113810.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_113810.f_18577[iVar32 /*6*/], 3))
				{
					func_189(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_189(int iParam0, var uParam1)//Position - 0xCEFC
{
	switch (iParam0)
	{
		case 0:
			func_190(uParam1, "Abigail1", func_192(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 1:
			func_190(uParam1, "Abigail2", func_192(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 2:
			func_190(uParam1, "Barry1", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 3:
			func_190(uParam1, "Barry2", func_192(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 4:
			func_190(uParam1, "Barry3", func_192(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 5:
			func_190(uParam1, "Barry3A", func_192(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 6:
			func_190(uParam1, "Barry3C", func_192(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 7:
			func_190(uParam1, "Barry4", func_192(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_191(iParam0), 0, 0);
			break;
		
		case 8:
			func_190(uParam1, "Dreyfuss1", func_192(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 9:
			func_190(uParam1, "Epsilon1", func_192(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 10:
			func_190(uParam1, "Epsilon2", func_192(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 11:
			func_190(uParam1, "Epsilon3", func_192(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 12:
			func_190(uParam1, "Epsilon4", func_192(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 13:
			func_190(uParam1, "Epsilon5", func_192(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 14:
			func_190(uParam1, "Epsilon6", func_192(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 15:
			func_190(uParam1, "Epsilon7", func_192(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 16:
			func_190(uParam1, "Epsilon8", func_192(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 17:
			func_190(uParam1, "Extreme1", func_192(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 18:
			func_190(uParam1, "Extreme2", func_192(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 19:
			func_190(uParam1, "Extreme3", func_192(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 20:
			func_190(uParam1, "Extreme4", func_192(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 21:
			func_190(uParam1, "Fanatic1", func_192(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_191(iParam0), 1, 0);
			break;
		
		case 22:
			func_190(uParam1, "Fanatic2", func_192(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_191(iParam0), 1, 0);
			break;
		
		case 23:
			func_190(uParam1, "Fanatic3", func_192(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_191(iParam0), 0, 1);
			break;
		
		case 24:
			func_190(uParam1, "Hao1", func_192(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_191(iParam0), 0, 1);
			break;
		
		case 25:
			func_190(uParam1, "Hunting1", func_192(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 26:
			func_190(uParam1, "Hunting2", func_192(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 27:
			func_190(uParam1, "Josh1", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 28:
			func_190(uParam1, "Josh2", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 29:
			func_190(uParam1, "Josh3", func_192(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 30:
			func_190(uParam1, "Josh4", func_192(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 31:
			func_190(uParam1, "Maude1", func_192(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 32:
			func_190(uParam1, "Minute1", func_192(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 33:
			func_190(uParam1, "Minute2", func_192(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 34:
			func_190(uParam1, "Minute3", func_192(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 35:
			func_190(uParam1, "MrsPhilips1", func_192(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 36:
			func_190(uParam1, "MrsPhilips2", func_192(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 37:
			func_190(uParam1, "Nigel1", func_192(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 38:
			func_190(uParam1, "Nigel1A", func_192(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 39:
			func_190(uParam1, "Nigel1B", func_192(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 40:
			func_190(uParam1, "Nigel1C", func_192(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 41:
			func_190(uParam1, "Nigel1D", func_192(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_191(iParam0), 1, 1);
			break;
		
		case 42:
			func_190(uParam1, "Nigel2", func_192(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 43:
			func_190(uParam1, "Nigel3", func_192(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 1);
			break;
		
		case 44:
			func_190(uParam1, "Omega1", func_192(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 45:
			func_190(uParam1, "Omega2", func_192(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 46:
			func_190(uParam1, "Paparazzo1", func_192(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 47:
			func_190(uParam1, "Paparazzo2", func_192(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 48:
			func_190(uParam1, "Paparazzo3", func_192(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 49:
			func_190(uParam1, "Paparazzo3A", func_192(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 50:
			func_190(uParam1, "Paparazzo3B", func_192(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 51:
			func_190(uParam1, "Paparazzo4", func_192(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 52:
			func_190(uParam1, "Rampage1", func_192(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 54:
			func_190(uParam1, "Rampage3", func_192(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 55:
			func_190(uParam1, "Rampage4", func_192(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 56:
			func_190(uParam1, "Rampage5", func_192(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_191(iParam0), 0, 0);
			break;
		
		case 53:
			func_190(uParam1, "Rampage2", func_192(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_191(iParam0), 1, 0);
			break;
		
		case 57:
			func_190(uParam1, "TheLastOne", func_192(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 58:
			func_190(uParam1, "Tonya1", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 59:
			func_190(uParam1, "Tonya2", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 60:
			func_190(uParam1, "Tonya3", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 61:
			func_190(uParam1, "Tonya4", func_192(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		case 62:
			func_190(uParam1, "Tonya5", func_192(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_191(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_190(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0xE143
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_191(int iParam0)//Position - 0xE1D4
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_192(int iParam0)//Position - 0xE51A
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_193(iParam0) };
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

struct<2> func_193(int iParam0)//Position - 0xE552
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

int func_194()//Position - 0xE99F
{
	if (func_197() && !func_198())
	{
		return 1;
	}
	if (func_196() && func_195())
	{
		return 1;
	}
	return 0;
}

bool func_195()//Position - 0xE9D1
{
	return Global_113528 > 0;
}

int func_196()//Position - 0xE9DF
{
	if (Global_97735 != -1)
	{
		return 1;
	}
	return 0;
}

int func_197()//Position - 0xE9F4
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 20);
	}
	return 0;
}

int func_198()//Position - 0xEA17
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_199()//Position - 0xEA34
{
	if (!func_167(5))
	{
		return 1;
	}
	if (func_194())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_198())
		{
			return 0;
		}
	}
	if (func_188(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_200()//Position - 0xEA96
{
	if ((Global_113799 == func_71() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113800)
	{
		return 1;
	}
	return 0;
}

void func_201(int iParam0)//Position - 0xEAC1
{
	if (iParam0 == -1)
	{
		iParam0 = func_71();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_203(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113796 = 0;
	func_202();
}

void func_202()//Position - 0xEAF7
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_203(int iParam0)//Position - 0xEB34
{
	Global_113799 = iParam0;
}

int func_204(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xEB42
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_152397)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_71();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_233())
		{
			return 0;
		}
	}
	Local_41 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_198())
			{
				return 0;
			}
		}
		if (!Global_113810.f_9088)
		{
			return 0;
		}
		if (func_57(0))
		{
			return 0;
		}
		if (func_194())
		{
			return 0;
		}
		if (func_232())
		{
			return 0;
		}
		if (Global_113799 != -1)
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_188(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_41.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_231(iParam3))
		{
			return 0;
		}
		if (func_45(func_43()))
		{
			if (func_230(func_43()) == 4 || func_230(func_43()) == 5)
			{
				return 0;
			}
		}
		if (func_45(func_43()))
		{
			if (!func_229(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_228(Global_113810.f_24998.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113801) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_227())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_218(4))
		{
			return 0;
		}
		if (!func_167(5))
		{
			return 0;
		}
		if (func_217(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_217(0, 0))
		{
			return 0;
		}
		if (Global_32430)
		{
			return 0;
		}
		if (func_231(30) && !func_217(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_45(func_43()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113810.f_2366.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113810.f_2366.f_539.f_2296[iVar4];
				if (func_216(iVar8))
				{
					if (func_206(iVar4))
					{
						if (!func_205(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_43() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_205(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xEEDC
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_206(int iParam0)//Position - 0xEF23
{
	int iVar0;
	
	iVar0 = Global_113810.f_2366.f_539.f_2296[iParam0];
	return func_207(iVar0);
}

int func_207(int iParam0)//Position - 0xEF44
{
	return func_208(iParam0, 1);
}

int func_208(int iParam0, int iParam1)//Position - 0xEF53
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_216(iParam0))
	{
		return 0;
	}
	func_209(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_209(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xEFA6
{
	func_210(func_85(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_210(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xEFC4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_215(iParam0, iParam1))
	{
		iVar0 = func_92(iParam1);
		iVar1 = func_90(iParam0);
		iVar2 = (func_90(iParam0) - func_90(iParam1));
		iVar3 = (func_92(iParam0) - func_92(iParam1));
		iVar4 = (func_214(iParam0) - func_214(iParam1));
		iVar5 = (func_84(iParam0) - func_84(iParam1));
		iVar6 = (func_213(iParam0) - func_213(iParam1));
		iVar7 = (func_212(iParam0) - func_212(iParam1));
	}
	else
	{
		iVar0 = func_92(iParam0);
		iVar1 = func_90(iParam1);
		iVar2 = (func_90(iParam1) - func_90(iParam0));
		iVar3 = (func_92(iParam1) - func_92(iParam0));
		iVar4 = (func_214(iParam1) - func_214(iParam0));
		iVar5 = (func_84(iParam1) - func_84(iParam0));
		iVar6 = (func_213(iParam1) - func_213(iParam0));
		iVar7 = (func_212(iParam1) - func_212(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_89(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_211(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_211(float fParam0, float fParam1, float fParam2)//Position - 0xF1C5
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

int func_212(int iParam0)//Position - 0xF207
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_213(int iParam0)//Position - 0xF21A
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_214(int iParam0)//Position - 0xF22D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_215(int iParam0, int iParam1)//Position - 0xF23F
{
	int iVar0;
	int iVar1;
	
	if (!func_216(iParam1) || !func_216(iParam0))
	{
		return 1;
	}
	iVar0 = func_90(iParam0);
	iVar1 = func_90(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_92(iParam0);
	iVar1 = func_92(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_214(iParam0);
	iVar1 = func_214(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_84(iParam0);
	iVar1 = func_84(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_213(iParam0);
	iVar1 = func_213(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)//Position - 0xF34B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_213(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_84(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_90(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_92(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_214(iParam0);
	if (iVar5 < 1 || iVar5 > func_89(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_217(int iParam0, bool bParam1)//Position - 0xF427
{
	if (BitTest(Global_113810.f_24998.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_218(int iParam0)//Position - 0xF447
{
	bool bVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				bVar0 = func_43();
				if (!func_45(bVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_226()) || Global_112857) || Global_32286) || func_225()) || func_130(8, -1)) || func_224()) || func_223()) || func_222()) || func_221()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_226()) || Global_32286) || func_225()) || func_130(8, -1)) || func_222()) || func_224()) || func_223()) || func_221()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_226()) || Global_112857) || Global_32286) || func_225()) || func_130(8, -1)) || func_222()) || func_224()) || func_223()) || func_221()) || Global_113810.f_7691.f_919[bVar0] == 5) || Global_43924 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_226()) || Global_112857) || Global_32286) || func_225()) || func_130(8, -1)) || func_224()) || func_223()) || func_221()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_226() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_130(8, -1)) || func_221()) || func_220()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_130(8, -1) || func_224()) || func_223()) || func_220()) || func_219())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_226()) || Global_32286) || func_225()) || func_130(8, -1)) || func_223()) || func_222()) || func_221()) || Global_113810.f_7691.f_919[bVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_226()) || func_223()) || Global_112857) || Global_32286) || func_225()) || Global_44569) || func_130(8, -1)) || func_222()) || func_220()) || func_221()) || Global_113810.f_7691.f_919[bVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_226()) || Global_112857) || Global_32286) || func_225()) || func_130(8, -1)) || func_222()) || func_220()) || func_224()) || func_223()) || func_221())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_219()//Position - 0xFB64
{
	return Global_100872.f_1;
}

int func_220()//Position - 0xFB72
{
	if (Global_97735 != -1)
	{
		return BitTest(Global_91601[Global_97735 /*34*/].f_15, 13);
	}
	return 0;
}

int func_221()//Position - 0xFB95
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_222()//Position - 0xFBAF
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

bool func_223()//Position - 0xFBD9
{
	return Global_100885.f_394 > 0;
}

bool func_224()//Position - 0xFBEA
{
	return Global_100885.f_393 > 0;
}

var func_225()//Position - 0xFBFB
{
	return Global_1575063;
}

int func_226()//Position - 0xFC07
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98291.f_44 == 1;
	}
	return 0;
}

int func_227()//Position - 0xFC23
{
	func_128();
	if (Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_228(int iParam0)//Position - 0xFC4B
{
	return func_215(func_85(), iParam0);
}

int func_229(int iParam0, int iParam1, int iParam2)//Position - 0xFC5D
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = func_43();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		bVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (bVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (bVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (bVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
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
			break;
		
		case 22:
			if (iParam1 == 2 || bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (bVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_230(bool bParam0)//Position - 0xFD41
{
	if (!func_45(bParam0))
	{
		return 7;
	}
	return Global_113810.f_7691.f_919[bParam0];
}

int func_231(int iParam0)//Position - 0xFD65
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_233())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113810.f_24998, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113810.f_24998.f_1, iVar0);
	}
	return iVar1;
}

int func_232()//Position - 0xFDBD
{
	int iVar0;
	
	if (Global_32435)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_233()//Position - 0xFE01
{
	int iVar0;
	
	if (Global_152686 == 2)
	{
		return 1;
	}
	else if (Global_152686 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_234(int iParam0)//Position - 0xFEB9
{
	return func_12(iParam0, 0, 0);
}

bool func_235(int iParam0)//Position - 0xFEC9
{
	return func_12(iParam0, 7, 1);
}

void func_236()//Position - 0xFED9
{
	int iVar0;
	
	if (iLocal_221)
	{
		func_134(0);
		AUDIO::CANCEL_MUSIC_EVENT("RE51A_SHOP");
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-871f, -246f, 0f, -798f, -163f, 50f, 1);
		TASK::REMOVE_WAYPOINT_RECORDING("re_shoprobbery");
		TASK::REMOVE_WAYPOINT_RECORDING("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= (iLocal_109 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_112[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_112[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_112[iVar0], false))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_112[iVar0], Local_101, 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_112[iVar0], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_112[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_183[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_183[iVar0]));
			}
			iVar0++;
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_190))
		{
			HUD::REMOVE_BLIP(&iLocal_190);
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_119[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_119[iVar0]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_119[iVar0], true, 1);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
					if (iLocal_47 == 1)
					{
						TASK::TASK_PLAY_ANIM(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, false, true, false);
					}
					else if (iLocal_47 == 2)
					{
						TASK::CLEAR_PED_TASKS(iLocal_119[iVar0]);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1201.4758f, -790.2733f, 15.5475f, 2f, -1, 0.25f, 0, 40000f);
					}
					TASK::TASK_SMART_FLEE_COORD(0, Local_101, 150f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_119[iVar0], iLocal_150);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
					PED::SET_PED_KEEP_TASK(iLocal_119[iVar0], true);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_110 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_115[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_115[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_115[iVar0], 317, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_115[iVar0], true, 1);
					if (iVar0 == 0)
					{
						if (!iLocal_181)
						{
							TASK::CLEAR_PED_TASKS(iLocal_115[iVar0]);
							TASK::TASK_SMART_FLEE_COORD(iLocal_115[iVar0], Local_101, 150f, -1, false, false);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[iVar0], false);
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_150);
						if (iLocal_47 == 2)
						{
							TASK::CLEAR_PED_TASKS(iLocal_115[iVar0]);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1201.4758f, -790.2733f, 15.5475f, 2f, -1, 0.25f, 0, 40000f);
						}
						TASK::TASK_SMART_FLEE_COORD(0, Local_101, 150f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_150);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_115[iVar0], iLocal_150);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_150);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_115[iVar0], false);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_115[iVar0], true);
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_182))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_182);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_165))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_165))
			{
				ENTITY::DETACH_ENTITY(iLocal_165, true, true);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_165);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_173);
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PED::SET_CREATE_RANDOM_COPS(true);
		if (iLocal_47 == 1)
		{
			func_182(0, 0);
			func_179(0, 1, 0);
		}
		else if (iLocal_47 == 2)
		{
			func_182(14, 0);
			func_179(14, 1, 0);
		}
	}
	func_237(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_237(int iParam0)//Position - 0x1022E
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_71();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_200())
	{
		func_241(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113801 = MISC::GET_GAME_TIMER();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_113799, 1), 64);
		if (func_70(Global_113799) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113798, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113796, (MISC::GET_GAME_TIMER() - Global_113797), 0);
	}
	else if (BitTest(Global_113806, 0) && Global_113810.f_24998.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113806, 0);
	}
	func_238(&Global_32343);
	Global_113800 = 0;
	func_203(-1);
}

void func_238(var uParam0)//Position - 0x102E0
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43339)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43338 = 0;
	Global_43340 = 0;
	Global_43377 = 15;
	Global_63482 = 0;
	Global_63483 = 0;
}

char* func_239(int iParam0, bool bParam1)//Position - 0x1031D
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_240(int iParam0)//Position - 0x10566
{
	Global_43928 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_241(int iParam0)//Position - 0x10578
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)//Position - 0x1058D
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_85();
	func_245(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)//Position - 0x105BC
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_84(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_213(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_212(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_214(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_92(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_90(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)//Position - 0x1068D
{
	Global_113810.f_24998.f_43[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x106A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_90(*uParam0);
	iVar1 = func_92(*uParam0);
	iVar2 = func_214(*uParam0);
	iVar3 = func_84(*uParam0);
	iVar4 = func_213(*uParam0);
	iVar5 = func_212(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_89(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_89(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x10827
{
	func_95(uParam0, iParam1);
	func_94(uParam0, iParam2);
	func_93(uParam0, iParam3);
	func_87(uParam0, iParam5);
	func_88(uParam0, iParam4);
	func_86(uParam0, iParam6);
}

int func_247(int iParam0)//Position - 0x1085F
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_248()//Position - 0x10A02
{
	Global_20711 = 0;
	func_249();
}

void func_249()//Position - 0x10A12
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22856 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21845 = 6;
		return;
	}
}

Vector3 func_250()//Position - 0x10A36
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_126, true);
		iLocal_125 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_129, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_129, true);
			iLocal_125 = 2;
		}
		if (iLocal_125 == 1)
		{
			bLocal_132 = true;
			iLocal_47 = 1;
			return Local_126;
		}
		else if (iLocal_125 == 2)
		{
			bLocal_132 = 2;
			iLocal_47 = 2;
			return Local_129;
		}
	}
	return 0f, 0f, 0f;
}

