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
	struct<55> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_117 = 0;
	struct<5> Local_118[32];
	int iLocal_279 = 0;
	int iLocal_280[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	struct<3> Local_289 = { 0, 0, 0 } ;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int* iLocal_296 = NULL;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 16;
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
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	int iLocal_469 = 0;
	var uLocal_470[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	iLocal_285 = -1;
	iLocal_288 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_570(ScriptParam_0);
	}
	while (true)
	{
		func_569();
		if (func_562())
		{
			func_559();
		}
		iLocal_292 = NETWORK::GET_NETWORK_TIME();
		func_550();
		func_547();
		func_542();
		func_541();
		switch (func_540(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_539() == 1)
				{
					Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 1;
				}
				else if (func_539() == 4)
				{
					Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_539() == 1)
				{
					func_533();
				}
				else if (func_539() == 0)
				{
					func_527();
					Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
				}
				else if (func_539() == 4)
				{
					Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_502();
				func_500(&(Local_62.f_54));
				if (func_499(&(Local_62.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_498(iLocal_285))
					{
						func_502();
						iVar0++;
					}
					Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
			
			case 4:
				func_271();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_269();
			func_268();
			func_267();
			switch (func_539())
			{
				case 0:
					func_266();
					if (func_262())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_287), false))
						{
							func_260(PLAYER::GET_PLAYER_PED(iLocal_287));
						}
						else
						{
							Local_62.f_36 = { Local_289 };
						}
						MISC::CLEAR_BIT(&(Local_62.f_2), 6);
						Local_62.f_0 = 1;
					}
					break;
				
				case 1:
					if (func_71())
					{
						func_70();
						func_69();
					}
					func_51();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()//Position - 0x235
{
	int iVar0;
	
	if (func_539() < 4)
	{
		if (func_23())
		{
			iLocal_293 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_498(iLocal_285) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_62.f_0 = 4;
		}
	}
}

void func_2()//Position - 0x271
{
	var uVar0;
	struct<14> Var1;
	
	if (BitTest(Local_62.f_10[iLocal_293 /*7*/].f_2, 1) || BitTest(Local_62.f_10[iLocal_293 /*7*/].f_2, 6))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_62.f_10[iLocal_293 /*7*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_62.f_10[iLocal_293 /*7*/])))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_62.f_10[iLocal_293 /*7*/]), false))
				{
					if (!BitTest(Local_62.f_10[iLocal_293 /*7*/].f_2, 6))
					{
						if (iLocal_285 == 0)
						{
							Local_62.f_48++;
							if (!BitTest(Local_62.f_2, 12))
							{
								if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_62.f_10[iLocal_293 /*7*/], &uVar0) == iLocal_287)
								{
									MISC::SET_BIT(&(Local_62.f_2), 12);
								}
							}
							if ((Local_62.f_42 == iLocal_293 && !BitTest(Local_62.f_2, 5)) || Local_62.f_48 == func_498(iLocal_285))
							{
								Var1.f_2 = -578453253;
								Var1.f_10 = iLocal_287;
								Var1.f_11 = iLocal_286;
								if (func_498(iLocal_285) > 1)
								{
									Var1.f_12 = PLAYER::INT_TO_PLAYERINDEX(1);
								}
								else
								{
									Var1.f_12 = PLAYER::INT_TO_PLAYERINDEX(0);
								}
								Var1.f_3 = Local_62.f_43;
								func_21(Var1, func_22(1));
								if (Local_62.f_42 == iLocal_293)
								{
									MISC::SET_BIT(&(Local_62.f_2), 5);
								}
							}
							else if (!BitTest(Local_62.f_2, 5))
							{
								Var1.f_2 = 1590597533;
								Var1.f_11 = iLocal_286;
								func_21(Var1, func_22(1));
							}
						}
						MISC::SET_BIT(&(Local_62.f_10[iLocal_293 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!BitTest(Local_62.f_10[iLocal_293 /*7*/].f_2, 5))
					{
						MISC::SET_BIT(&iLocal_279, 2);
					}
					MISC::SET_BIT(&iLocal_279, 1);
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_279, 1);
		MISC::SET_BIT(&iLocal_279, 2);
	}
	func_3(iLocal_293);
	iLocal_293++;
	if (iLocal_293 >= func_498(iLocal_285))
	{
		iLocal_293 = 0;
		if (BitTest(Local_62.f_1, 0))
		{
			if (!BitTest(iLocal_279, 1))
			{
				if (!BitTest(Local_62.f_1, 1))
				{
					MISC::SET_BIT(&(Local_62.f_1), 1);
				}
			}
			if (!BitTest(iLocal_279, 2))
			{
				if (!BitTest(Local_62.f_1, 9))
				{
					MISC::SET_BIT(&(Local_62.f_1), 9);
				}
			}
		}
		MISC::CLEAR_BIT(&iLocal_279, 1);
		MISC::CLEAR_BIT(&iLocal_279, 2);
	}
}

void func_3(int iParam0)//Position - 0x48F
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_62.f_10[iParam0 /*7*/]))
		{
			iVar0 = NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_62.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_20(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						MISC::SET_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_62.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) == 2 || (Global_2657704[iLocal_287 /*463*/].f_246 != -1 && func_19(Global_2657704[iLocal_287 /*463*/].f_246) == 4)) || BitTest(Global_1853988[iLocal_287 /*867*/].f_863, 14)) || func_17(iLocal_287, 0)) || func_9(iLocal_287))
								{
									Local_62.f_10[iParam0 /*7*/].f_3 = iLocal_292;
									MISC::SET_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2 && Global_2657704[iLocal_287 /*463*/].f_246 == -1) && !BitTest(Global_1853988[iLocal_287 /*867*/].f_863, 14)) && !func_17(iLocal_287, 0)) && !func_9(iLocal_287))
							{
								MISC::CLEAR_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_292, Local_62.f_10[iParam0 /*7*/].f_3) > 10000 || TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2)
							{
								if (!BitTest(Local_62.f_2, 10))
								{
									MISC::SET_BIT(&(Local_62.f_2), 10);
									Local_62.f_39 = { func_8(iLocal_287) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_498(iLocal_285))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) == 3f && !PED::GET_PED_CONFIG_FLAG(iVar0, 118, true))
									{
										MISC::SET_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (BitTest(Local_62.f_2, 1))
						{
							MISC::SET_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_287, 1, 1))
						{
							if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_287), true), 25f) || !func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_287), true), 625f))
								{
									MISC::SET_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_287), true)) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_287)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (BitTest(Local_62.f_2, 1))
						{
							MISC::SET_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_287, 1, 1))
						{
							if (!func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_287), true)) && !(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_287)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (PED::GET_PED_CONFIG_FLAG(iVar0, 118, true))
								{
									MISC::SET_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(struct<3> Param0, struct<3> Param3)//Position - 0x87E
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (MISC::ABSF((Param3.f_2 - Param0.f_2)) < 2f)
	{
		Var0.f_0 = Param0.f_0;
		Var0.f_1 = Param0.f_1;
		Var3.f_0 = Param3.f_0;
		Var3.f_1 = Param3.f_1;
		if (func_5(Var0, Var3, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x8C5
{
	if (SYSTEM::VDIST2(Param0, Param3) < fParam6)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x8E4
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

void func_7(int iParam0, int iParam1)//Position - 0x944
{
	Local_62.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)//Position - 0x958
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_9(int iParam0)//Position - 0x96B
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (func_15(iParam0, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			iVar1 = func_11(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x9BF
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)//Position - 0x9FF
{
	if (func_15(iParam0, 1))
	{
		return Global_2794162.f_5231.f_227[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)//Position - 0xA26
{
	if (func_14(iParam0))
	{
		return Global_1895156[iParam0 /*609*/].f_10;
	}
	return func_13();
}

int func_13()//Position - 0xA49
{
	return -1;
}

int func_14(int iParam0)//Position - 0xA52
{
	int iVar0;
	
	iVar0 = iParam0;
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

bool func_15(int iParam0, bool bParam1)//Position - 0xA74
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_16(iParam0))
		{
			return 0;
		}
	}
	return Global_1895156[iParam0 /*609*/].f_10 != func_13();
}

int func_16(int iParam0)//Position - 0xAAD
{
	if (func_14(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10 != func_13())
		{
			return Global_1895156[iParam0 /*609*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)//Position - 0xAE2
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			if (func_18(PED::GET_VEHICLE_PED_IS_IN(iVar0, bParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0, bool bParam1)//Position - 0xB1D
{
	if (Global_78689)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(int iParam0)//Position - 0xB5B
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

int func_20(int iParam0, bool bParam1)//Position - 0xE91
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AttributeDamage", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
		{
			if (BitTest(DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage"), bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_21(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)//Position - 0xEC4
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_22(int iParam0)//Position - 0xEF1
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_23()//Position - 0xF4E
{
	if (BitTest(Local_62.f_1, 0))
	{
		if (iLocal_285 == 1)
		{
			if (BitTest(Local_62.f_1, 4))
			{
				MISC::SET_BIT(&(Local_62.f_3), 11);
				return 1;
			}
		}
		else if (BitTest(Local_62.f_1, 1))
		{
			MISC::SET_BIT(&(Local_62.f_3), 0);
			return 1;
		}
	}
	else if (BitTest(Local_62.f_1, 2))
	{
		MISC::SET_BIT(&(Local_62.f_3), 1);
		MISC::SET_BIT(&Global_1927404, iLocal_285);
		return 1;
	}
	if (BitTest(Local_62.f_3, 12))
	{
		return 1;
	}
	if (iLocal_285 == 0)
	{
		if (BitTest(Local_62.f_2, 2))
		{
			MISC::SET_BIT(&(Local_62.f_3), 2);
			return 1;
		}
		if (BitTest(Local_62.f_2, 8))
		{
			MISC::SET_BIT(&(Local_62.f_3), 8);
			return 1;
		}
		if (BitTest(Local_62.f_2, 5))
		{
			MISC::SET_BIT(&(Local_62.f_3), 3);
			return 1;
		}
		if (BitTest(Local_62.f_2, 9))
		{
			MISC::SET_BIT(&(Local_62.f_3), 9);
			return 1;
		}
		if (BitTest(Local_62.f_1, 15))
		{
			MISC::SET_BIT(&(Local_62.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_287, 0, 1))
	{
		if (iLocal_285 != 0 || !BitTest(Local_62.f_2, 1))
		{
			MISC::SET_BIT(&(Local_62.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_49(iLocal_287, 129))
		{
			MISC::SET_BIT(&(Local_62.f_2), 13);
			MISC::SET_BIT(&(Local_62.f_3), 8);
			return 1;
		}
		if (func_49(iLocal_287, 131) || BitTest(Global_1895156[iLocal_287 /*609*/].f_1, 11))
		{
			MISC::SET_BIT(&(Local_62.f_2), 13);
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_49(iLocal_287, 136) || (func_48(PLAYER::PLAYER_ID(), 24) && func_47(iLocal_287)))
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_49(iLocal_287, 146))
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_46(PLAYER::PLAYER_ID()) && ((func_45(PLAYER::PLAYER_ID()) == 148 || func_45(PLAYER::PLAYER_ID()) == 142) || func_45(PLAYER::PLAYER_ID()) == 164))
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(PLAYER::PLAYER_ID()) == 153)
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_43(PLAYER::PLAYER_ID()) && func_45(PLAYER::PLAYER_ID()) == 170)
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(PLAYER::PLAYER_ID()) == 167)
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(PLAYER::PLAYER_ID()) == 168)
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_43(PLAYER::PLAYER_ID()) && func_45(PLAYER::PLAYER_ID()) == 238)
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_43(PLAYER::PLAYER_ID()) && func_45(PLAYER::PLAYER_ID()) == 249)
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		switch (func_42(PLAYER::PLAYER_ID()))
		{
			case 6:
			case 7:
				if (func_41())
				{
					MISC::SET_BIT(&(Local_62.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_40(iLocal_287))
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_36(iLocal_287))
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_35(iLocal_287))
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(iLocal_287) == 276)
		{
			if (func_33(iLocal_287) == 3)
			{
				MISC::SET_BIT(&(Local_62.f_2), 8);
				return 1;
			}
		}
		if (func_45(iLocal_287) == 309)
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_45(iLocal_287) == 318)
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (func_32(func_45(iLocal_287)))
		{
			MISC::SET_BIT(&(Local_62.f_2), 8);
			return 1;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_287), false))
		{
			if (iLocal_285 == 1)
			{
				if (BitTest(Local_62.f_1, 0))
				{
					MISC::SET_BIT(&(Local_62.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_285 == 1)
			{
				if (func_49(iLocal_287, 146))
				{
					MISC::SET_BIT(&(Local_62.f_3), 7);
					return 1;
				}
				if (!BitTest(Local_62.f_1, 16))
				{
					if (NETWORK::GET_TIME_DIFFERENCE(iLocal_292, Local_62.f_9) > func_31())
					{
						MISC::SET_BIT(&(Local_62.f_3), 7);
						return 1;
					}
				}
				if (func_28())
				{
					MISC::SET_BIT(&(Local_62.f_3), 7);
					return 1;
				}
				if (func_24(iLocal_287, func_12(iLocal_286), 1))
				{
					MISC::SET_BIT(&(Local_62.f_3), 7);
					return 1;
				}
			}
			if (iLocal_288 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_287)))
			{
				MISC::SET_BIT(&(Local_62.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_24(int iParam0, int iParam1, bool bParam2)//Position - 0x13F5
{
	return func_25(iParam0, iParam1, bParam2, 1);
}

int func_25(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1408
{
	if (func_14(iParam1) && func_14(iParam0))
	{
		if (!bParam2)
		{
			if (func_27(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1895156[iParam0 /*609*/].f_10 != func_13())
		{
			if (iParam1 == Global_1895156[iParam0 /*609*/].f_10)
			{
				return func_26(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1)//Position - 0x1469
{
	if (func_16(iParam0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam1;
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2)//Position - 0x148F
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_1895156[iParam0 /*609*/].f_10 != func_13())
			{
				if (Global_1895156[iParam0 /*609*/].f_10 == iParam0)
				{
					if (Global_1895156[iParam0 /*609*/].f_10.f_429 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_28()//Position - 0x14E7
{
	if (((func_30(iLocal_287, 1, 1) || func_48(iLocal_287, 0)) || func_48(iLocal_287, 7)) || func_29(iLocal_287))
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0)//Position - 0x1529
{
	return Global_1853988[iParam0 /*867*/].f_192 != 0;
}

int func_30(int iParam0, bool bParam1, bool bParam2)//Position - 0x153E
{
	if (iParam0 == func_13())
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

int func_31()//Position - 0x15A2
{
	if (Local_62.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_32(int iParam0)//Position - 0x15BC
{
	switch (iParam0)
	{
		case 316:
		case 315:
			return 1;
		
		default:
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x15DC
{
	if (func_34(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_34(int iParam0, int iParam1)//Position - 0x15FF
{
	if (func_14(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x1643
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890739[iVar0 /*138*/].f_77.f_60 != 0;
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x1667
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (func_39(iParam0))
	{
		return 1;
	}
	if (func_38(iParam0))
	{
		return 1;
	}
	if (func_37(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)//Position - 0x16A4
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_429.f_3, 6);
	}
	return 0;
}

int func_38(int iParam0)//Position - 0x16CC
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_366, 29);
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x16F3
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_1853988[iParam0 /*867*/].f_267.f_429.f_2, 16);
	}
	return 0;
}

int func_40(int iParam0)//Position - 0x171C
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

bool func_41()//Position - 0x1788
{
	return Global_1835493;
}

int func_42(int iParam0)//Position - 0x1794
{
	if (func_45(iParam0) == 243)
	{
		return func_33(iParam0);
	}
	return -1;
}

int func_43(int iParam0)//Position - 0x17B1
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_44(iParam0, 9);
	}
	return 0;
}

var func_44(int iParam0, int iParam1)//Position - 0x17CF
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_45(int iParam0)//Position - 0x17E7
{
	if (func_14(iParam0))
	{
		if (func_34(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_46(int iParam0)//Position - 0x1813
{
	if (func_16(iParam0))
	{
		if (func_43(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

var func_47(int iParam0)//Position - 0x1832
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_1, 4);
}

var func_48(int iParam0, int iParam1)//Position - 0x1847
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

int func_49(int iParam0, int iParam1)//Position - 0x185D
{
	if (Global_1895156[iParam0 /*609*/] == iParam1)
	{
		return func_50(iParam0);
	}
	return 0;
}

int func_50(int iParam0)//Position - 0x187D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

void func_51()//Position - 0x18A0
{
	func_62();
	if (iLocal_285 != 1)
	{
		func_2();
	}
	func_52();
}

void func_52()//Position - 0x18BB
{
	int iVar0;
	
	if (func_6(PLAYER::INT_TO_PLAYERINDEX(iLocal_294), 0, 1))
	{
		if (iLocal_285 == 1)
		{
			if (PLAYER::INT_TO_PLAYERINDEX(iLocal_294) == iLocal_287)
			{
				if (!BitTest(Local_62.f_1, 16))
				{
					if (BitTest(Local_118[iLocal_294 /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_62.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!BitTest(Local_62.f_1, 11))
			{
				if (func_58(PLAYER::INT_TO_PLAYERINDEX(iLocal_294)))
				{
					if (!BitTest(Local_62.f_4, iLocal_294))
					{
						MISC::SET_BIT(&(Local_62.f_1), 11);
						MISC::SET_BIT(&(Local_62.f_4), iLocal_294);
					}
				}
				else if (BitTest(Local_62.f_4, iLocal_294))
				{
					MISC::SET_BIT(&(Local_62.f_1), 11);
					MISC::CLEAR_BIT(&(Local_62.f_4), iLocal_294);
				}
			}
			else if (BitTest(Local_118[iLocal_294 /*5*/].f_1, 2))
			{
				MISC::CLEAR_BIT(&(Local_62.f_1), 11);
			}
			if (iLocal_285 == 0)
			{
				if (BitTest(Local_118[iLocal_294 /*5*/].f_1, 0))
				{
					if (Local_118[iLocal_294 /*5*/].f_2 != -1)
					{
						if (!BitTest(Local_62.f_2, 1))
						{
							MISC::SET_BIT(&(Local_62.f_2), 1);
							Local_62.f_42 = Local_118[iLocal_294 /*5*/].f_2;
							Local_62.f_43 = Local_118[iLocal_294 /*5*/].f_3;
							if (!func_57())
							{
								func_56();
							}
						}
					}
					else if (!BitTest(Local_62.f_2, 9))
					{
						if (!func_57())
						{
							func_55();
						}
						iVar0 = 0;
						while (iVar0 < func_498(iLocal_285))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						MISC::SET_BIT(&(Local_62.f_2), 9);
						MISC::SET_BIT(&(Local_62.f_2), 1);
					}
				}
				if (func_57())
				{
					if (!BitTest(iLocal_279, 17))
					{
						if (BitTest(Local_118[iLocal_294 /*5*/].f_1, 5))
						{
							func_56();
							MISC::SET_BIT(&iLocal_279, 17);
						}
						else if (BitTest(Local_118[iLocal_294 /*5*/].f_1, 6))
						{
							func_55();
							MISC::SET_BIT(&iLocal_279, 17);
						}
					}
				}
				if (!BitTest(Local_118[iLocal_294 /*5*/].f_1, 1))
				{
					if (!BitTest(iLocal_279, 3))
					{
						MISC::SET_BIT(&iLocal_279, 3);
					}
				}
				else if (PLAYER::INT_TO_PLAYERINDEX(iLocal_294) == iLocal_287)
				{
					if (iLocal_285 == 0)
					{
						if (!BitTest(Local_62.f_2, 1))
						{
							if (!BitTest(Local_62.f_2, 6))
							{
								MISC::SET_BIT(&(Local_62.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_294++;
	if (iLocal_294 >= 32)
	{
		iLocal_294 = 0;
		if (iLocal_285 == 0)
		{
			if (!BitTest(iLocal_279, 3))
			{
				func_54();
			}
			else
			{
				func_53();
			}
			MISC::CLEAR_BIT(&iLocal_279, 3);
		}
	}
}

void func_53()//Position - 0x1B01
{
	if (BitTest(Local_62.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Local_62.f_2), 3);
	}
}

void func_54()//Position - 0x1B1B
{
	if (!BitTest(Local_62.f_2, 3))
	{
		Local_62.f_6 = iLocal_292;
		MISC::SET_BIT(&(Local_62.f_2), 3);
	}
}

void func_55()//Position - 0x1B3D
{
	struct<14> Var0;
	
	Var0.f_2 = -1209401092;
	Var0.f_10 = iLocal_287;
	Var0.f_11 = iLocal_286;
	func_21(Var0, func_22(1));
}

void func_56()//Position - 0x1B6A
{
	struct<14> Var0;
	
	Var0.f_2 = -1079941038;
	Var0.f_10 = iLocal_287;
	Var0.f_11 = iLocal_286;
	if (func_498(iLocal_285) > 1)
	{
		Var0.f_12 = PLAYER::INT_TO_PLAYERINDEX(1);
	}
	else
	{
		Var0.f_12 = PLAYER::INT_TO_PLAYERINDEX(0);
	}
	Var0.f_3 = Local_62.f_43;
	func_21(Var0, func_22(1));
}

int func_57()//Position - 0x1BBF
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_58(int iParam0)//Position - 0x1BD6
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_61();
	}
	return BitTest(Global_1654054.f_241.f_136[func_60(10) /*33*/][iParam0], func_59(10));
}

int func_59(int iParam0)//Position - 0x1C09
{
	return (iParam0 % 32);
}

int func_60(int iParam0)//Position - 0x1C16
{
	return (iParam0 / 32);
}

var func_61()//Position - 0x1C23
{
	return Global_1574582;
}

void func_62()//Position - 0x1C2F
{
	int iVar0;
	
	if (iLocal_285 == 0)
	{
		if (BitTest(Local_62.f_2, 3))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_292, Local_62.f_6) > 10000)
			{
				if (BitTest(Local_62.f_2, 1))
				{
					MISC::SET_BIT(&(Local_62.f_2), 2);
				}
			}
		}
		if (BitTest(Local_62.f_1, 8))
		{
			if (!BitTest(Local_62.f_2, 1))
			{
				if (func_66())
				{
					MISC::SET_BIT(&(Local_62.f_2), 6);
					func_65();
				}
			}
		}
		if (!BitTest(Local_62.f_1, 0))
		{
			if (func_6(iLocal_287, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iLocal_287);
				if (func_64(iVar0))
				{
					func_260(iVar0);
				}
			}
		}
		if (!BitTest(Local_62.f_2, 1))
		{
			if (!func_6(iLocal_287, 1, 1) || func_29(iLocal_287))
			{
				MISC::SET_BIT(&(Local_62.f_1), 15);
			}
		}
	}
	if (BitTest(Local_62.f_1, 0))
	{
		if (BitTest(Local_62.f_1, 5))
		{
			if (!BitTest(Local_62.f_1, 4))
			{
				if (NETWORK::GET_TIME_DIFFERENCE(iLocal_292, Local_62.f_5) > 600000)
				{
					MISC::SET_BIT(&(Local_62.f_1), 4);
				}
			}
		}
		if (!BitTest(Local_62.f_3, 12))
		{
			if (func_63())
			{
				MISC::SET_BIT(&(Local_62.f_3), 12);
			}
		}
	}
}

int func_63()//Position - 0x1D41
{
	switch (Local_62.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_802 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_802 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x1D96
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (BitTest(Local_62.f_1, 17))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_62.f_36, ENTITY::GET_ENTITY_COORDS(iParam0, true), 625f))
	{
		return 1;
	}
	return 0;
}

void func_65()//Position - 0x1DDE
{
	func_527();
	Local_62.f_0 = 0;
}

int func_66()//Position - 0x1DED
{
	if ((((((((BitTest(Local_62.f_2, 6) || PLAYER::IS_PLAYER_DEAD(iLocal_287)) || func_30(iLocal_287, 1, 1)) || func_68(iLocal_287)) || func_48(iLocal_287, 0)) || func_48(iLocal_287, 7)) || func_29(iLocal_287)) || Global_2657704[iLocal_287 /*463*/].f_248) || func_67(PLAYER::GET_PLAYER_PED(iLocal_287), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_287 != -1)
	{
		if (BitTest(Local_118[iLocal_287 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)//Position - 0x1E96
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x1EDC
{
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853988[iParam0 /*867*/].f_267.f_31, 11))
	{
		return 1;
	}
	return 0;
}

void func_69()//Position - 0x1F15
{
	if (!BitTest(Local_62.f_1, 5))
	{
		Local_62.f_5 = iLocal_292;
		MISC::SET_BIT(&(Local_62.f_1), 5);
	}
}

void func_70()//Position - 0x1F37
{
	if (BitTest(Local_62.f_1, 5))
	{
		MISC::CLEAR_BIT(&(Local_62.f_1), 5);
	}
}

int func_71()//Position - 0x1F51
{
	bool bVar0;
	
	if (BitTest(Local_62.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_262())
		{
			if (iLocal_285 == 1)
			{
				bVar0 = true;
			}
			else if (func_257())
			{
				if (func_254())
				{
					if (func_253())
					{
						bVar0 = true;
					}
					else if (func_251(func_252(iLocal_285)))
					{
						if (func_77())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_69();
			if (func_72())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_72()//Position - 0x1FC8
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (BitTest(Local_62.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_285)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_498(iLocal_285))
					{
						if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_62.f_10[iVar0 /*7*/]) && !BitTest(Local_62.f_10[iVar0 /*7*/].f_2, 1)) && !BitTest(Local_62.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_73(iVar0, func_76(iLocal_285), Local_62.f_32, Local_62.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_285 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_498(iLocal_285))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_62.f_10[iVar0 /*7*/]))
					{
						if (!BitTest(Local_62.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			MISC::SET_BIT(&iLocal_279, 1);
			MISC::SET_BIT(&iLocal_279, 2);
			MISC::SET_BIT(&iLocal_279, 3);
			MISC::SET_BIT(&iLocal_279, 4);
			MISC::SET_BIT(&(Local_62.f_1), 0);
			MISC::SET_BIT(&Global_1927405, iLocal_285);
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1, struct<3> Param2, float fParam5)//Position - 0x20DA
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_62.f_10[iParam0 /*7*/]))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) < NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					if (func_251(func_252(iLocal_285)))
					{
						if (func_75(&(Local_62.f_10[iParam0 /*7*/]), 7, func_252(iLocal_285), Param2, fParam5, 1, 1, 1))
						{
							Local_62.f_10[iParam0 /*7*/].f_1 = iLocal_285;
							Local_62.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_74(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_74(int iParam0)//Position - 0x215C
{
	char cVar0[16];
	
	if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), false))
		{
			if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), Global_1837218);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), true);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), false);
			}
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), false, false, false, false, false, false, true, false);
			PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 41, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 20, true);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 132, true);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 118, false);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 311, true);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 300f, 10);
			PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), true);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			PED::SET_PED_NAME_DEBUG(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_62.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 2, false);
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 2);
					PED::SET_PED_COMBAT_RANGE(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 0);
					PED::SET_PED_USING_ACTION_MODE(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), false, -1, 0);
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 32, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 4, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 1024, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 128, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 32, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 64, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 256, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 16, true);
					if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 0))
					{
						MISC::SET_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 2);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 17, false);
					WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), joaat("WEAPON_KNIFE"), 1, true, true);
					PED::SET_PED_MONEY(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 0);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), PLAYER::GET_PLAYER_PED(iLocal_287), -1, 0, 2);
					NETWORK::SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(Local_62.f_10[iParam0 /*7*/], true);
					break;
			}
			ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), SYSTEM::ROUND((Global_262145.f_165 /* Tunable: AI_HEALTH */ * IntToFloat(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]))))), 0);
			if (!BitTest(Local_62.f_1, 8))
			{
				MISC::SET_BIT(&(Local_62.f_1), 8);
			}
			MISC::SET_BIT(&(Local_62.f_10[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_75(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x24DF
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x253E
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_77()//Position - 0x255B
{
	struct<6> Var0;
	
	if (BitTest(Local_62.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_285)
		{
			case 0:
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_287) && func_6(iLocal_287, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_287), true) };
					Var0.f_5 = 20f;
					if (func_78(Local_62.f_36, 40f, &(Local_62.f_32), &(Local_62.f_35), &Var0))
					{
						MISC::SET_BIT(&(Local_62.f_1), 3);
						return 1;
					}
				}
				else
				{
					NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
					PED::SPAWNPOINTS_CANCEL_SEARCH();
					if (Global_2635560.f_2572)
					{
						PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
						Global_2635560.f_2572 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_78(struct<3> Param0, float fParam3, var uParam4, var uParam5, var uParam6)//Position - 0x2629
{
	struct<17> Var0;
	struct<18> Var34;
	struct<3> Var65;
	
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_28 = -1;
	Var34 = { Param0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_79(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			Var65 = { Param0 - Var0[0 /*3*/] };
			if (Var65.f_2 > uParam6->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_79(var uParam0, var uParam1, var uParam2)//Position - 0x272F
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	float fVar24;
	bool bVar25;
	struct<61> Var26;
	bool bVar87;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2635560.f_2566 == *uParam0 || !Global_2635560.f_2566.f_1 == uParam0->f_1) || !Global_2635560.f_2566.f_2 == uParam0->f_2) || !Global_2635560.f_2569 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2635560.f_2580 == uParam0->f_8 || !Global_2635560.f_2580.f_1 == uParam0->f_8.f_1) || !Global_2635560.f_2580.f_2 == uParam0->f_8.f_2) || !Global_2635560.f_2583 == uParam0->f_11) || !Global_2635560.f_2583.f_1 == uParam0->f_11.f_1) || !Global_2635560.f_2583.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2635560.f_2580 == uParam0->f_8 || !Global_2635560.f_2580.f_1 == uParam0->f_8.f_1) || !Global_2635560.f_2580.f_2 == uParam0->f_8.f_2) || !Global_2635560.f_2583 == uParam0->f_11) || !Global_2635560.f_2583.f_1 == uParam0->f_11.f_1) || !Global_2635560.f_2583.f_2 == uParam0->f_11.f_2) || !Global_2635560.f_2586 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2635560.f_2587 == uParam0->f_7)
		{
			bVar25 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_2573) && !Global_2635560.f_2573 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar25 = true;
		}
	}
	if (bVar25)
	{
		if (Global_2635560.f_2564 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2635560.f_2573))
			{
				if (Global_2635560.f_2573 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2570) < func_250(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2570) < func_250(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_249();
		}
		Global_2635560.f_2564 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2570) > func_250(0))
	{
		Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
		func_243();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2635560.f_2564)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		func_249();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_242(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2635560.f_2587 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2635560.f_2566 = { *uParam0 };
					Global_2635560.f_2569 = uParam0->f_4;
					break;
				
				case 1:
					Global_2635560.f_2580 = { uParam0->f_8 };
					Global_2635560.f_2583 = { uParam0->f_11 };
					Global_2635560.f_2586 = 0f;
					Global_2635560.f_2566 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2635560.f_2580 = { uParam0->f_8 };
					Global_2635560.f_2583 = { uParam0->f_11 };
					Global_2635560.f_2586 = uParam0->f_14;
					Global_2635560.f_2566 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_241(Var8.f_0, Var8.f_1);
			}
			Global_2635560.f_2565 = 1;
			Global_2635560.f_2564 = 1;
			Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
			Global_2635560.f_2570 = NETWORK::GET_NETWORK_TIME();
			Global_2635560.f_2573 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2635560.f_2564)
	{
		if (Global_2635560.f_2565 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 5000)
			{
				Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_240(Global_4718592.f_171044))
					{
						Var26.f_9 = 1;
					}
					Var26.f_60 = uParam0->f_30;
					func_213(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_212(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2635560.f_2565 = 9;
				}
				else
				{
					Global_2635560.f_2565 = 2;
				}
			}
		}
		if (Global_2635560.f_2565 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var11, Var14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var11, Var14) == 0)
			{
				Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_209(PLAYER::PLAYER_ID(), 0))
				{
					Global_2635560.f_2565 = 3;
				}
				else
				{
					Global_2635560.f_2565 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2575) > 7000)
			{
				func_208(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2635560.f_2565 == 3)
		{
			if (func_207() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 10000)
			{
				Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
				Global_2635560.f_2565 = 4;
			}
		}
		if (Global_2635560.f_2565 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				func_243();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
								Global_2635560.f_2565 = 5;
							}
							break;
						
						case 1:
							func_206(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &fVar24);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var18, Var21, fVar24, *uParam1, iVar0))
							{
								Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
								Global_2635560.f_2565 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
								Global_2635560.f_2565 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
					Global_2635560.f_2565 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_206(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &fVar24);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var18, Var21, fVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2635560.f_2565 == 5)
		{
			if (func_132(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2635560.f_2591.f_5)
				{
					Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
					Global_2635560.f_2565 = 6;
				}
				else
				{
					Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2635560.f_2565 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
				Global_2635560.f_2565 = 8;
			}
		}
		if (Global_2635560.f_2565 == 6)
		{
			iVar0 = 0;
			Global_2635560.f_2591.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_131(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_130(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
			Global_2635560.f_2565 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_206(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &fVar24);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var18, Var21, fVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2635560.f_2565 == 7)
		{
			if (func_132(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2635560.f_2725[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_212(Global_2635560.f_2725[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635560.f_2725[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_128(Global_2635560.f_2725[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635560.f_2725[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2635560.f_2725[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2635560.f_2725[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_82(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2635560.f_2565 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635560.f_2571) > 20000)
			{
				Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
				Global_2635560.f_2565 = 8;
			}
		}
		if (Global_2635560.f_2565 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_81(Global_2635560.f_489))
				{
				}
			}
			else if (Global_2635560.f_2591.f_2)
			{
				func_80(uParam2, &(Global_2635560.f_2591.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar87 = false;
				}
				else
				{
					bVar87 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2635560.f_2566 };
				func_82(uParam2[0 /*3*/], 0, bVar87, 0, 0, uParam0, uParam1);
			}
			Global_2635560.f_2571 = NETWORK::GET_NETWORK_TIME();
			Global_2635560.f_2565 = 9;
		}
		if (Global_2635560.f_2565 == 9)
		{
			Global_2635560.f_2564 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_249();
			return 1;
		}
		Global_2635560.f_2570 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_80(var uParam0, var uParam1)//Position - 0x372D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_81(int iParam0)//Position - 0x3777
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_82(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x3796
{
	struct<3> Var0;
	var uVar3;
	struct<61> Var4;
	var uVar65;
	int iVar66;
	bool bVar67;
	int iVar68;
	struct<3> Var69;
	struct<3> Var72;
	struct<3> Var75;
	float fVar78;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar68 = 0;
	}
	else
	{
		iVar68 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar68 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var69 = { *uParam5 };
						if (func_131(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 1:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_130(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 2:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_130(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var69)))
						{
							iVar68 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar68 += 4;
		}
	}
	if (func_96(*uParam0, &Var0, iVar68, iParam3, 1))
	{
	}
	else
	{
		bVar67 = true;
	}
	if (bVar67)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar66 = 0;
		while (iVar66 < 2)
		{
			Var4.f_38[iVar66 /*3*/] = { uParam6->f_13[iVar66 /*3*/] };
			Var4.f_45[iVar66] = uParam6->f_20[iVar66];
			iVar66++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_94(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		Var4.f_60 = uParam5->f_30;
		func_213(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var72 = { *uParam5 };
				fVar78 = uParam5->f_4;
				break;
			
			case 1:
				Var72 = { uParam5->f_8 };
				Var75 = { uParam5->f_11 };
				break;
			
			case 2:
				Var72 = { uParam5->f_8 };
				Var75 = { uParam5->f_11 };
				fVar78 = uParam5->f_14;
				break;
		}
		if (!func_93(Var0, uParam5->f_7, Var72, Var75, fVar78))
		{
			if (func_96(*uParam0, &Var0, iVar68, iParam3, 0))
			{
				if (!func_93(Var0, uParam5->f_7, Var72, Var75, fVar78))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var72 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar65, false, false))
					{
						Var0.f_2 = uVar65;
					}
				}
			}
			else if (func_83(uParam0, 1, 1, 1, 1))
			{
				func_82(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var72 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar65, false, false))
				{
					Var0.f_2 = uVar65;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2635560.f_667 = 1;
}

int func_83(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3C09
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2640611[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640611[iVar0 /*17*/].f_16))
			{
				if (func_92(*uParam0, &(Global_2640611[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640611[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640611[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_84(&Var1, &(Global_2640611[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_83(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_84(&Var1, &(Global_2640611[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_84(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x3CE4
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_91(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_91(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_91(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_89(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635560.f_2835) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_88(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_85(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_85(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)//Position - 0x3DEE
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_87(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_86(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_86(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_87(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_87(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_86(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_86(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_86(struct<3> Param0, struct<3> Param3)//Position - 0x40BF
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_87(struct<3> Param0, struct<3> Param3)//Position - 0x40E0
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_88(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)//Position - 0x4119
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

void func_89(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)//Position - 0x4218
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_90(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_90(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

void func_90(var uParam0, struct<3> Param1)//Position - 0x42C0
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.f_0);
	fVar1 = SYSTEM::SIN(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_91(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)//Position - 0x4397
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_89(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_88(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_85(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_212(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_128(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_92(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)//Position - 0x449A
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_212(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2635560.f_2835) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_128(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_93(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)//Position - 0x45FB
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_128(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param4, Param7, fParam10, false, true);
			break;
	}
	return 0;
}

int func_94(int iParam0, bool bParam1)//Position - 0x4668
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1 && Global_2657704[iParam0 /*463*/].f_321.f_10 != func_13())
			{
				return func_95(Global_2657704[iParam0 /*463*/].f_321.f_7) == 12;
			}
		}
	}
	return 0;
}

int func_95(int iParam0)//Position - 0x46F6
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

int func_96(struct<3> Param0, var* uParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x4BAA
{
	if (func_127(Param0, uParam3))
	{
		if (func_97(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam3, iParam4))
	{
		if (func_97(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_97(struct<3> Param0, var* uParam3, int iParam4, bool bParam5)//Position - 0x4C06
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = SYSTEM::VDIST(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_113(Global_2635560.f_512, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_101(*uParam3, 1056964608))
			{
				if (!func_98(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_98(var uParam0, bool bParam1)//Position - 0x4C8B
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_100(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642212[iVar4])
	{
		if (func_99(Var1, &(Global_2640816[iVar4 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_85(&Var1, Global_2640816[iVar4 /*155*/][iVar0 /*7*/], Global_2640816[iVar4 /*155*/][iVar0 /*7*/].f_3, Global_2640816[iVar4 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642212[8])
	{
		if (func_99(Var1, &(Global_2640816[8 /*155*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_85(&Var1, Global_2640816[8 /*155*/][iVar0 /*7*/], Global_2640816[8 /*155*/][iVar0 /*7*/].f_3, Global_2640816[8 /*155*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_99(struct<3> Param0, var uParam3)//Position - 0x4D98
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_100(struct<2> Param0, var uParam2)//Position - 0x4DB8
{
	if (Param0.f_1 > Global_2642223[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642223[1])
	{
		if (Param0.f_0 < Global_2642227[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642223[2])
	{
		if (Param0.f_0 < Global_2642227[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642227[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642227[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_101(struct<3> Param0, float fParam3)//Position - 0x4E53
{
	int iVar0;
	
	if (func_110(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4980736.f_42750 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_42750)
			{
				if (Global_4980736.f_42751[iVar0 /*160*/].f_7 != 0)
				{
					if (func_102(Param0, Global_4980736.f_42751[iVar0 /*160*/], Global_4980736.f_42751[iVar0 /*160*/].f_6, Global_4980736.f_42751[iVar0 /*160*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_6201 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_6201)
			{
				if (Global_4980736.f_6204[iVar0 /*546*/].f_15 != 0)
				{
					if (func_102(Param0, Global_4980736.f_6204[iVar0 /*546*/], Global_4980736.f_6204[iVar0 /*546*/].f_3, Global_4980736.f_6204[iVar0 /*546*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_91870 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_91870)
			{
				if (Global_4980736.f_91874[iVar0 /*529*/].f_12 != 0)
				{
					if (func_102(Param0, Global_4980736.f_91874[iVar0 /*529*/], Global_4980736.f_91874[iVar0 /*529*/].f_3, Global_4980736.f_91874[iVar0 /*529*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058071.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058071.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058071.f_233[iVar0], false))
				{
					if (func_102(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058071.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058071.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058071.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058071.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058071.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058071.f_119[iVar0], false))
				{
					if (func_102(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058071.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058071.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058071.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_102(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)//Position - 0x50E7
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_109(iParam7, 1008981770))
	{
		func_103(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_103(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)//Position - 0x513A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_90(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_104(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = MISC::ABSF((Var6.f_0 - Var3.f_0));
}

void func_104(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x5206
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_107(iParam0);
		if (iVar0 != 0)
		{
			func_105(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_105(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x5305
{
	int iVar0;
	
	func_106(iParam0, &Global_1578013);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1578013[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1578013[iVar0], &(Global_1578017[iVar0 /*3*/]), &(Global_1578024[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1578017[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1578024[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1578017[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578024[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1578017[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578024[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1578017[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578024[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578031[iVar0] = (Global_1578024[iVar0 /*3*/] - Global_1578017[iVar0 /*3*/]);
		Global_1578034[iVar0] = (Global_1578024[iVar0 /*3*/].f_1 - Global_1578017[iVar0 /*3*/].f_1);
		Global_1578037[iVar0] = (Global_1578024[iVar0 /*3*/].f_2 - Global_1578017[iVar0 /*3*/].f_2);
		if (Global_1578031[iVar0] > Global_1578040)
		{
			Global_1578040 = Global_1578031[iVar0];
		}
		if (Global_1578037[iVar0] > Global_1578041)
		{
			Global_1578041 = Global_1578037[iVar0];
		}
		iVar0++;
	}
	Global_1578042 = (Global_1578040 * -0.5f);
	Global_1578045 = (Global_1578040 * 0.5f);
	Global_1578042.f_1 = ((((0.5f * Global_1578034[0]) + Global_1578034[1]) + Global_1578013.f_3) * -1f);
	Global_1578045.f_1 = (0.5f * Global_1578034[0]);
	Global_1578042.f_2 = (Global_1578037[0] * -0.5f);
	Global_1578045.f_2 = (Global_1578037[0] * 0.5f);
	*uParam1 = { Global_1578042 };
	*uParam2 = { Global_1578045 };
}

void func_106(int iParam0, var uParam1)//Position - 0x5511
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_107(int iParam0)//Position - 0x5592
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_108(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_108(int iParam0)//Position - 0x55C1
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_109(int iParam0, float fParam1)//Position - 0x55D3
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_104(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_110(int iParam0, bool bParam1, bool bParam2)//Position - 0x5653
{
	if (bParam1)
	{
		if (func_111(iParam0))
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

bool func_111(int iParam0)//Position - 0x5685
{
	return func_112(iParam0);
}

var func_112(int iParam0)//Position - 0x5693
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_113(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)//Position - 0x56AA
{
	int iVar0;
	bool bVar1;
	
	if (func_120(Param0))
	{
		if (func_83(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_115(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_114(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_89(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_114(struct<3> Param0, float fParam3)//Position - 0x5766
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2635560.f_2837[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_115(var uParam0, bool bParam1, bool bParam2)//Position - 0x57A1
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_117(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_84(&Var2, &(Global_2635560.f_368[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_117(Var2, &uVar1) || func_116(Var2))
			{
				Var2 = { *uParam0 };
				func_84(&Var2, &(Global_2635560.f_368[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_116(struct<3> Param0)//Position - 0x5825
{
	float fVar0;
	
	if (Global_2635560.f_596 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2635560.f_593);
		if (fVar0 < Global_2635560.f_596)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(struct<3> Param0, var uParam3)//Position - 0x585E
{
	int iVar0;
	int iVar1;
	
	if (func_119())
	{
		return 0;
	}
	iVar1 = func_118();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635560.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (func_92(Param0, &(Global_2635560.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_118()//Position - 0x58C2
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635560.f_368[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_119()//Position - 0x58F5
{
	return Global_1950844.f_529;
}

int func_120(struct<3> Param0)//Position - 0x5904
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635560.f_515 && !Global_2635560.f_516)
	{
		if (!Global_2635560.f_45.f_317)
		{
			if (!func_124(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_123(Param0, 1008981770))
			{
				if (!func_83(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_83(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_122(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_121(&(Global_2635560.f_45[iVar0 /*12*/])) };
					if (!func_83(&Var1, 0, 0, 0, 1))
					{
						if (!func_83(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_121(var uParam0)//Position - 0x59C4
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_122(struct<3> Param0, float fParam3)//Position - 0x5A0D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635560.f_45[iVar0 /*12*/].f_9)
		{
			if (func_92(Param0, &(Global_2635560.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_123(struct<3> Param0, float fParam3)//Position - 0x5A55
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635560.f_45[iVar0 /*12*/].f_9)
		{
			if (func_92(Param0, &(Global_2635560.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_124(int iParam0, bool bParam1)//Position - 0x5A9C
{
	if (func_126() != 0)
	{
		return func_125(iParam0) != 0;
	}
	return func_110(iParam0, bParam1, 0);
}

int func_125(int iParam0)//Position - 0x5AC3
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2657704[iParam0 /*463*/].f_1;
	}
	return 0;
}

int func_126()//Position - 0x5AE5
{
	return Global_32283;
}

int func_127(struct<3> Param0, var uParam3)//Position - 0x5AF0
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2635560.f_2362 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635560.f_2362)
		{
			fVar3 = SYSTEM::VDIST(Global_2635560.f_2363[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2635560.f_2363[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_128(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)//Position - 0x5B6A
{
	func_129(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_129(var uParam0, var uParam1)//Position - 0x5C15
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_130(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x5C77
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (SYSTEM::VMAG(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_131(float fParam0)//Position - 0x5D22
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_132(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5D3A
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2635560.f_2591.f_1 == 0 && Global_2635560.f_2591 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2635560.f_2591.f_1)))
			{
				case 0:
					func_204(uParam1, uParam2);
					if (!Global_2635560.f_2591.f_2)
					{
						if (uParam2->f_7 && Global_2635560.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2635560.f_2566 };
							}
							if (uParam1->f_5 && func_81(Global_2635560.f_489))
							{
								if (!Global_2635560.f_2591.f_5)
								{
									Global_2635560.f_2591.f_5 = 1;
								}
								else
								{
									func_82(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_82(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_204(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_204(uParam1, uParam2);
					Global_2635560.f_2591.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_204(uParam1, uParam2);
				if (!Global_2635560.f_2591.f_2)
				{
					Global_2635560.f_2591.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_201(Global_2635560.f_555, &(Global_2635560.f_2591.f_57), &(Global_2635560.f_2591.f_90));
	}
	if (uParam2->f_7 && !Global_2635560.f_2591.f_4)
	{
		Global_2635560.f_2591.f_4 = 1;
		func_140(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2635560.f_2591.f_1 > 0 || Global_2635560.f_2591 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar4 = 0;
			while (iVar4 < Global_2635560.f_2591.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2635560.f_2591.f_3)
					{
						iVar4 = Global_2635560.f_2591.f_3 + 1;
					}
					if (iVar4 > (Global_2635560.f_2591.f_1 - 1))
					{
						iVar4 = (Global_2635560.f_2591.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar4);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar4, &iVar5);
					}
					func_140(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2635560.f_2591.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2635560.f_2591.f_1;
		}
		if (Global_2635560.f_2591.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2635560.f_2994)
			{
				func_134(&(Global_2635560.f_2591.f_6[0 /*10*/]), &(Global_2635560.f_2591.f_6[1 /*10*/]), &(Global_2635560.f_2591.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_81(Global_2635560.f_489))
			{
				if (Global_2635560.f_2591.f_2)
				{
					func_80(uParam0, &(Global_2635560.f_2591.f_6));
					func_133(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635560.f_2566 };
					func_82(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_133(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2635560.f_2591.f_2)
			{
				func_80(uParam0, &(Global_2635560.f_2591.f_6));
				func_133(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_2591.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_98(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_133(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635560.f_2566 };
					func_82(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_133(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2635560.f_2566 };
				func_82(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_133(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2635560.f_2566 };
		if (uParam1->f_5 && func_81(Global_2635560.f_489))
		{
			if (!Global_2635560.f_2591.f_5)
			{
				Global_2635560.f_2591.f_5 = 1;
			}
			else
			{
				func_82(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_82(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_133(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_133(struct<3> Param0)//Position - 0x6301
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2635560.f_2725[(3 - iVar0) /*3*/] = { Global_2635560.f_2725[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2635560.f_2725[0 /*3*/] = { Param0 };
}

void func_134(var uParam0, var uParam1, var uParam2)//Position - 0x6351
{
	if (func_81(Global_2635560.f_489) && func_139() < 4096)
	{
		func_138(uParam0, 0f);
		func_138(uParam1, uParam0->f_2);
		func_138(uParam2, uParam1->f_2);
	}
	else
	{
		func_137(uParam0);
		func_136(uParam2, uParam0->f_4);
		func_135(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_135(var uParam0, struct<3> Param1, struct<3> Param4)//Position - 0x63B6
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638608[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2638608[iVar0 /*10*/].f_4, Param1);
			fVar3 = SYSTEM::VDIST(Global_2638608[iVar0 /*10*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2638608[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2638608[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_136(var uParam0, struct<3> Param1)//Position - 0x6455
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638608[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2638608[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2638608[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2638608[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_137(var uParam0)//Position - 0x64D7
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638608[iVar0 /*10*/] > 0)
		{
			if (Global_2638608[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2638608[iVar0 /*10*/].f_1;
				Var2 = { Global_2638608[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_138(var uParam0, float fParam1)//Position - 0x6544
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638608[iVar0 /*10*/] > 0)
		{
			if (Global_2638608[iVar0 /*10*/].f_2 < fVar1 && Global_2638608[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2638608[iVar0 /*10*/].f_2;
				Var2 = { Global_2638608[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_139()//Position - 0x65C7
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638608[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2638608[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_140(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)//Position - 0x65FE
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar15;
	int iVar16;
	struct<3> Var17;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2635560.f_489 == 1)
		{
			if (MISC::ABSF((Global_2635560.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_198(PLAYER::PLAYER_ID()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_197(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_196(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(uParam5->f_23) > 0f && SYSTEM::VMAG(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam5->f_23, uParam5->f_26, uParam5->f_29, false, true))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_190(Param0, fParam3, uParam4->f_15, func_195(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2635560.f_3;
		}
	}
	else if (!func_187(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_183(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_183(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2635560.f_701)
		{
			Var12 = { Global_2635560.f_512 };
			if (Global_2635560.f_489 == 26)
			{
				Var12 = { Global_2635560.f_555.f_18 };
			}
			if (!func_114(Param0, 0.5f))
			{
				if (func_120(Var12))
				{
					if (!func_83(&Param0, 0, 0, 0, 1) && !func_182(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_182(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_181(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_180(PLAYER::PLAYER_ID()) && func_179(PLAYER::PLAYER_ID())))
		{
			if (!func_178(&Param0, &(Global_2635560.f_2591.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_179(PLAYER::PLAYER_ID()))
		{
			if (!func_177(Param0, &(Global_2635560.f_2591.f_57), &(Global_2635560.f_2591.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_176(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_81(Global_2635560.f_489))
			{
				if (func_123(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_175(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2635560.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2635560.f_701)
		{
			if (!func_115(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_98(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_122(Param0, 1008981770);
		if (iVar16 > -1)
		{
			func_174(Param0, &Var17, &Var20, &fVar23);
			if (!func_169(&(Global_2635560.f_45[iVar16 /*12*/]), Var17, Var20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_101(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_168(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2635560.f_2994 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_159(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_159(Param0, Global_2635560.f_2566, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_81(Global_2635560.f_489) && iVar8 < 4096)
			{
				Var25.f_2 = func_157(Param0);
			}
			uVar7 = func_146(Param0, 1, 0, 0, 0, 0);
			Var25.f_4 = { Param0 };
			Var25.f_7 = fParam3;
			Var25.f_0 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_145(Var25);
			Global_2635560.f_2591.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2635560.f_2591.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_159(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_159(Param0, Global_2635560.f_2566, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_81(Global_2635560.f_489) && iVar8 == Global_2635560.f_2591.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_157(Param0);
							bVar36 = true;
						}
						if (fVar2 < Global_2635560.f_2591.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { Param0 };
							Var25.f_7 = fParam3;
							Var25.f_0 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_144(Var25, iVar24);
							Global_2635560.f_2591.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2635560.f_2591.f_6[iVar24 /*10*/] || (iVar8 == Global_2635560.f_2591.f_6[iVar24 /*10*/] && fVar0 > Global_2635560.f_2591.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_1 = fVar0;
						func_144(Var25, iVar24);
						Global_2635560.f_2591.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_142(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_146(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_141(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_141(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2635560.f_2591.f_6[iVar24 /*10*/] || (iVar8 == Global_2635560.f_2591.f_6[iVar24 /*10*/] && fVar3 > Global_2635560.f_2591.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_3 = fVar3;
						func_144(Var25, iVar24);
						Global_2635560.f_2591.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_141(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6FBC
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_142(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x705A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_209(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_143(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_143(int iParam0)//Position - 0x71F1
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2657704[iParam0 /*463*/].f_255)
	{
		return 1;
	}
	return 0;
}

void func_144(struct<10> Param0, int iParam10)//Position - 0x721C
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2635560.f_2591.f_6[iParam10 /*10*/] };
	Global_2635560.f_2591.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_144(Var0, iParam10 + 1);
	}
}

void func_145(struct<10> Param0)//Position - 0x726E
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_139();
	if (Param0.f_0 > iVar11)
	{
		iVar11 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638608[iVar0 /*10*/] < iVar11)
		{
			Global_2638608[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638608[iVar0 /*10*/] == 0)
		{
			Global_2638608[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638608[iVar0 /*10*/] > 0)
		{
			if (Global_2638608[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2638608[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2638608[iVar13 /*10*/] = { Param0 };
	}
}

float func_146(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x7362
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_6(iVar11, 1, 1) || (iParam7 == 1 && func_6(iVar11, 0, 0)))
		{
			if (!iVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_147(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar11) == -1 || !func_124(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar11) || !bParam6)
					{
						if (func_143(iVar11))
						{
							Var5 = { func_8(iVar11) };
							if (!iVar11 == PLAYER::PLAYER_ID())
							{
								Var8 = { NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var8, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_147(int iParam0)//Position - 0x74C5
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_155(iParam0))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_110(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_152(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_110(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_148(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x7573
{
	if (func_151(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2764376 = { func_150(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2764376))
	{
		return 1;
	}
	if (func_149(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0, int iParam1)//Position - 0x75BA
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (func_14(iVar0))
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_150(int iParam0)//Position - 0x75E3
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_151(int iParam0, int iParam1)//Position - 0x75FA
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2764376 = { func_150(iParam0) };
		Global_2764389 = { func_150(iParam1) };
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

int func_152(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7667
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
							if (!func_153(iParam0, bVar0, iParam1, bVar1) || !func_153(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_153(iParam0, bVar0, iParam1, bVar1) || !func_153(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_153(iParam0, bVar0, iParam1, bVar1) || !func_153(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_24066[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_153(iParam0, bVar0, iParam1, bVar1) || !func_153(iParam1, bVar1, iParam0, bVar0))
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

int func_153(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x79B2
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
		if (((!func_6(iVar1, 1, 1) || func_209(iVar1, 0)) || BitTest(Global_2657704[iVar1 /*463*/].f_199, 2)) || func_154(iVar1))
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

var func_154(int iParam0)//Position - 0x7ADE
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_36.f_18, 14);
}

int func_155(int iParam0)//Position - 0x7AF6
{
	if (func_209(iParam0, 0))
	{
		return 1;
	}
	if (func_156())
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

bool func_156()//Position - 0x7B35
{
	return BitTest(Global_2621446, 3);
}

float func_157(struct<3> Param0)//Position - 0x7B43
{
	var uVar0;
	
	return func_158(Param0, &(Global_2635560.f_45), &uVar0);
}

float func_158(struct<3> Param0, var uParam3, var uParam4)//Position - 0x7B5B
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 10000000f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635560.f_2835) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_159(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)//Position - 0x7CD7
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_141(SYSTEM::VDIST(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 10000000f;
	fVar4 = func_146(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_141(fVar4, 0f, func_167(), func_165(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_163(Param0);
	fVar0 = func_141(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_124(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_161(Param0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_141(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_160(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_141(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_141(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_141(SYSTEM::VDIST(Global_2635560.f_512, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_160(struct<3> Param0, var uParam3, var uParam4)//Position - 0x7EBE
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	var uVar5;
	
	iVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar3, &Var0);
		*uParam3 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = MISC::ABSF((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_161(struct<3> Param0, int iParam3, int iParam4)//Position - 0x7F17
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
					{
						if (!func_162(iVar3, iParam3))
						{
							if (Global_2648711.f_261[iVar2])
							{
								fVar1 = SYSTEM::VDIST(Global_2648711.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

int func_162(int iParam0, int iParam1)//Position - 0x7FD2
{
	int iVar0;
	
	if (func_14(iParam0) && func_14(iParam1))
	{
		iVar0 = func_12(iParam0);
		if (iVar0 != func_13())
		{
			return iVar0 == func_12(iParam1);
		}
	}
	return 0;
}

float func_163(struct<3> Param0)//Position - 0x800E
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, 2);
	fVar0 = 10000000f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], false))
			{
				if (func_164(uVar6[iVar2]))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], true) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2635560.f_3039)
	{
		if (Global_1058071.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1058071.f_267)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058071.f_152[iVar2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_1058071.f_152[iVar2], false))
					{
						if (func_164(Global_1058071.f_152[iVar2]))
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(Global_1058071.f_152[iVar2], true) };
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_164(int iParam0)//Position - 0x812E
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, joaat("PLAYER")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837183[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1837183[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1836893[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1836893[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_165()//Position - 0x81F9
{
	if (func_166())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635560.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635560.f_45.f_67)) || Global_2635560.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_166()//Position - 0x8255
{
	if (Global_2635560.f_45.f_65 && !Global_2635560.f_45.f_304)
	{
		if (!func_155(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_167()//Position - 0x828B
{
	if (func_166())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635560.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635560.f_45.f_67)) || Global_2635560.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_168(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)//Position - 0x82E7
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam8, false))) || ((iParam3 == 1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam9, true)))
	{
		return 1;
	}
	return 0;
}

int func_169(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x8376
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_173(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_172(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_170(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_170(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)//Position - 0x8402
{
	struct<3> Var0[8];
	int iVar25;
	
	func_171(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar25 /*3*/], Param7, Param10, fParam13, false, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_171(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)//Position - 0x8454
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_87(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(SYSTEM::VMAG(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 };
}

int func_172(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)//Position - 0x8581
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.f_0, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.f_0, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.f_0, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar25 /*3*/], Param6, Param9, fParam12, false, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_173(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)//Position - 0x864B
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar13 /*3*/], Param4, Param7, fParam10, false, true))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_174(struct<3> Param0, var uParam3, var uParam4, var uParam5)//Position - 0x86CF
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_100(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642212[iVar4])
	{
		if (func_99(Var1, &(Global_2640816[iVar4 /*155*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2640816[iVar4 /*155*/][iVar0 /*7*/] };
			*uParam4 = { Global_2640816[iVar4 /*155*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2640816[iVar4 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642212[8])
	{
		if (func_99(Var1, &(Global_2640816[8 /*155*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2640816[8 /*155*/][iVar0 /*7*/] };
			*uParam4 = { Global_2640816[8 /*155*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2640816[8 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_175(struct<3> Param0)//Position - 0x87BD
{
	int iVar0;
	int iVar1;
	
	if (Global_2635560.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2635560.f_45.f_56))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2635560.f_45.f_57)
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
	}
	return 1;
}

int func_176(struct<3> Param0)//Position - 0x8828
{
	switch (Global_2635560.f_2587)
	{
		case 0:
			return func_212(Param0, Global_2635560.f_2566, Global_2635560.f_2569, 0, 0);
			break;
		
		case 1:
			return func_128(Param0, Global_2635560.f_2580, Global_2635560.f_2583, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2635560.f_2580, Global_2635560.f_2583, Global_2635560.f_2586, false, true);
			break;
	}
	return 0;
}

int func_177(struct<3> Param0, var uParam3, var uParam4, float fParam5)//Position - 0x88BA
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var5, fVar8, false, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_178(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x8968
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_89(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_179(int iParam0)//Position - 0x89DB
{
	switch (func_126())
	{
		case 0:
			if (!func_29(iParam0))
			{
				if (Global_1853988[iParam0 /*867*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x8A11
{
	if (func_110(iParam0, 1, 0))
	{
		if (Global_1853988[iParam0 /*867*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_181(struct<3> Param0, float fParam3, int iParam4)//Position - 0x8A36
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2635560.f_2725[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_182(var uParam0, bool bParam1)//Position - 0x8A74
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_116(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_89(&Var1, Global_2635560.f_593, Global_2635560.f_596, 1036831949, 0, fVar4);
			if (func_117(Var1, &uVar0) || func_116(Var1))
			{
				Var1 = { *uParam0 };
				func_89(&Var1, Global_2635560.f_593, Global_2635560.f_596, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_183(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)//Position - 0x8B0C
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_184(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_209(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_143(iVar1) || !bParam10) && !Global_2657704[iVar1 /*463*/].f_270)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_184(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_184(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_184(int iParam0)//Position - 0x8CC4
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_186() && Global_1853988[iVar0 /*867*/].f_834) && !func_185(Global_1853988[iVar0 /*867*/].f_835))
	{
		return Global_1853988[iVar0 /*867*/].f_835;
	}
	return func_8(iParam0);
}

int func_185(struct<3> Param0)//Position - 0x8D17
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_186()//Position - 0x8D41
{
	return Global_2683883.f_19;
}

int func_187(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8D4F
{
	if (func_189(Param0, fParam3, iParam4, iParam5, 0) || func_188(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_188(struct<3> Param0, int iParam3, int iParam4)//Position - 0x8D80
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_102(Param0, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_189(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x8E42
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (Global_2648711.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2648711.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2648711.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_190(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)//Position - 0x8F5F
{
	Global_2635560.f_3 = 0;
	if (!func_187(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2635560.f_3++;
		if (bParam5)
		{
			if (func_242(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2635560.f_3 = (Global_2635560.f_3 + Global_2635560.f_2);
				if (!func_194(Param0, fParam12))
				{
					Global_2635560.f_3++;
					if (!func_101(Param0, 1056964608))
					{
						Global_2635560.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2635560.f_3 = (Global_2635560.f_3 + Global_2635560.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_242(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2635560.f_3 = (Global_2635560.f_3 + Global_2635560.f_2);
				if (!func_194(Param0, fParam12))
				{
					Global_2635560.f_3++;
					if (!func_191(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2635560.f_3++;
						if (!func_101(Param0, 1056964608))
						{
							Global_2635560.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2635560.f_3 = (Global_2635560.f_3 + Global_2635560.f_2);
			}
		}
		else if (func_242(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2635560.f_3 = (Global_2635560.f_3 + Global_2635560.f_2);
			if (!func_194(Param0, fParam12))
			{
				Global_2635560.f_3++;
				if (!func_191(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2635560.f_3++;
					if (!func_101(Param0, 1056964608))
					{
						Global_2635560.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2635560.f_3 = (Global_2635560.f_3 + Global_2635560.f_2);
		}
	}
	return 0;
}

int func_191(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x919F
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_143(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_193(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_192(func_8(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_192(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)//Position - 0x921E
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = SYSTEM::SIN(fParam6);
	Var0.f_1 = SYSTEM::COS(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param3, Var3, fParam8, false, true);
}

bool func_193(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x92AA
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_194(struct<3> Param0, float fParam3)//Position - 0x9322
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_143(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_124(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_193(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, func_8(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_195(int iParam0)//Position - 0x93DE
{
	if ((Global_2635560.f_489 == 9 || Global_2635560.f_489 == 9) || (Global_2635560.f_489 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_196(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)//Position - 0x9421
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_143(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_148(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_197(struct<3> Param0, float fParam3, int iParam4, float fParam5)//Position - 0x9525
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_209(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, true) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_198(int iParam0)//Position - 0x95EA
{
	if (((func_124(iParam0, 1) || func_200(iParam0)) || func_34(iParam0, 0)) || func_199(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)//Position - 0x9626
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2);
}

int func_200(int iParam0)//Position - 0x964E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/] != -1;
	}
	return 0;
}

void func_201(struct<3> Param0, var uParam3, var uParam4)//Position - 0x966F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	struct<3> Var17;
	struct<3> Var20;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!BitTest(Global_4543629[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_4543629[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_4543629[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_4543629[iVar1 /*26*/].f_6.f_2;
					func_203(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6346[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6346[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_203(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 20)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6404[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6404[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_203(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var17 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var17, Param0) < SYSTEM::VDIST(Var20, Param0))
			{
				Var7 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_4543305[iVar1 /*3*/] };
				func_202(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_202(var uParam0, var uParam1, int iParam2)//Position - 0x998F
{
	Global_2643218 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_202(&Global_2643218, uParam1, iParam2 + 1);
	}
}

void func_203(var uParam0, var uParam1, int iParam2)//Position - 0x99CD
{
	Global_2643214 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_203(&Global_2643214, uParam1, iParam2 + 1);
	}
}

void func_204(var uParam0, var uParam1)//Position - 0x9A07
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2635560.f_2362 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635560.f_2362)
		{
			if (func_205(Global_2635560.f_2363[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2635560.f_2363[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2635560.f_2363[iVar0 /*4*/] };
					fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_140(Global_2635560.f_2363[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, uParam0->f_28);
				Global_2635560.f_2591++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2635560.f_2994)
	{
		func_134(&(Global_2635560.f_2591.f_6[0 /*10*/]), &(Global_2635560.f_2591.f_6[1 /*10*/]), &(Global_2635560.f_2591.f_6[2 /*10*/]));
	}
}

int func_205(struct<3> Param0, var uParam3)//Position - 0x9AF7
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_93(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_93(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_206(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, float fParam8)//Position - 0x9B54
{
	float fVar0;
	
	func_129(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*fParam8 = (fVar0 * 0.5f);
}

var func_207()//Position - 0x9BAA
{
	return Global_1573131.f_4;
}

void func_208(float fParam0, float fParam1)//Position - 0x9BB8
{
	func_249();
	func_241(fParam0, fParam1);
}

bool func_209(int iParam0, int iParam1)//Position - 0x9BCC
{
	bool bVar0;
	
	if (!func_14(iParam0))
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

int func_210(int iParam0, bool bParam1)//Position - 0x9C25
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

int func_211()//Position - 0x9C66
{
	return Global_1574918;
}

bool func_212(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)//Position - 0x9C72
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}

void func_213(var uParam0, var uParam1, var uParam2)//Position - 0x9D25
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635560.f_1854 > 0)
	{
		iVar0 = 0;
		while (func_235(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_214(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_214(var uParam0, var uParam1, var uParam2)//Position - 0x9D94
{
	int iVar0;
	struct<3> Var1;
	float* fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float* fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_113(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_234(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	bVar10 = true;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		bVar10 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		bVar10 = false;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2643228.f_162 = 0;
	Global_2643228.f_163 = 0;
	Global_2643228.f_164 = -99;
	Global_2643228.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2643228[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2643228.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_107(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2643228.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2643228.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_182(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_233(Var1))
									{
										Var1 = { func_229(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, bVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_101(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_228(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_234(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_224(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_113(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_223(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_242(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_242(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_221(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_220(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643228.f_162)
																										{
																											Global_2643228[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2643228.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2643228.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643228.f_162 == 0)
																									{
																										Global_2643228[0 /*3*/] = { Var1 };
																										Global_2643228.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643228.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2643228[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_219(Var1, fVar4, iVar16);
																													iVar16 = Global_2643228.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2643228.f_162++;
																									if (Global_2643228.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643228.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643228[Global_2643228.f_162 /*3*/] = { Var1 };
																									Global_2643228.f_121[Global_2643228.f_162] = fVar4;
																									Global_2643228.f_162++;
																									if (func_228(Var1, uParam2))
																									{
																										Global_2643228.f_163++;
																									}
																									if (Global_2643228.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643228.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2643228.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643228[0 /*3*/] };
						*uParam1 = Global_2643228.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643228.f_163 > 0 && !Global_2643228.f_163 == Global_2643228.f_162)
						{
							func_217(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643228.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2643228[0 /*3*/] };
						uVar30 = Global_2643228.f_121[0];
						Global_2643228[0 /*3*/] = { Global_2643228[iVar26 /*3*/] };
						Global_2643228.f_121[0] = Global_2643228.f_121[iVar26];
						Global_2643228[iVar26 /*3*/] = { Var27 };
						Global_2643228.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2643228[0 /*3*/] };
						*uParam1 = Global_2643228.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_216(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, bVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_113(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_234(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_215(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643228.f_164 = iVar8;
	}
	return 0;
}

void func_215(var uParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0xA7C2
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_187(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_216(int iParam0, struct<3> Param1, int iParam4, var* uParam5, float* fParam6, var uParam7, bool bParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)//Position - 0xA846
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (SYSTEM::VMAG(*uParam5) > 0f)
			{
				*uParam5 = { func_229(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_233(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_217(int iParam0, var uParam1)//Position - 0xA8E3
{
	if (!func_228(Global_2643228[iParam0 /*3*/], uParam1))
	{
		Global_2643228.f_162 = (Global_2643228.f_162 - 1);
		func_218(iParam0);
		if (Global_2643228.f_162 > Global_2643228.f_163)
		{
			func_217(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_217(iParam0 + 1, uParam1);
	}
}

void func_218(int iParam0)//Position - 0xA93E
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643228[iParam0 /*3*/] = { Global_2643228[iParam0 + 1 /*3*/] };
			Global_2643228.f_121[iParam0] = Global_2643228.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_219(struct<3> Param0, float fParam3, int iParam4)//Position - 0xA989
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2643228[iParam4 /*3*/] };
	uVar3 = Global_2643228.f_121[iParam4];
	Global_2643228[iParam4 /*3*/] = { Param0 };
	Global_2643228.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2643228.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_219(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_220(struct<3> Param0, float fParam3, float fParam4)//Position - 0xA9F6
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_147(iVar5))
		{
			Var1 = { func_8(iVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_221(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0xAA5E
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_6(iVar1, bParam5, bParam6))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_143(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_148(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_222(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_102(func_8(iVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_222(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)//Position - 0xABD1
{
	if (func_102(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_103(Param0, fParam3, iParam4, &Global_1982109, &(Global_1982109.f_3), &(Global_1982109.f_6), 1036831949);
	func_103(Param5, fParam8, iParam9, &(Global_1982109.f_7), &(Global_1982109.f_10), &(Global_1982109.f_13), 1036831949);
	if (MISC::GET_POINT_AREA_OVERLAP(Global_1982109, Global_1982109.f_3, Global_1982109.f_6, Global_1982109.f_7, Global_1982109.f_10, Global_1982109.f_13))
	{
		return 1;
	}
	return 0;
}

int func_223(struct<3> Param0, float fParam3, int iParam4)//Position - 0xAC6F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_222(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_222(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_224(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xAD7B
{
	if (func_227(Param0, fParam3, iParam4, iParam5, iParam6) || func_225(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_225(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xADB1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_226(Param0, iParam4, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_222(Param0, fParam3, iParam4, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_226(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)//Position - 0xAE8B
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_109(iParam3, 1008981770);
	fVar1 = func_109(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_227(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAECB
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam5, 0, 1))
			{
				if (Global_2648711.f_261[iVar0])
				{
					if (func_102(Global_2648711.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_102(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2648711.f_261[iVar0])
			{
				if (func_102(Global_2648711.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_102(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_228(struct<3> Param0, var uParam3)//Position - 0xAFDA
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_212(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_128(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_229(struct<3> Param0, float* fParam3, int iParam4, bool bParam5, struct<3> Param6, bool bParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)//Position - 0xB06B
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_232(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_231(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_230(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_230(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_232(Param0, *fParam3, Param6))
		{
			if ((bParam5 || uParam16) || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *fParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_230(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_230(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_230(int iParam0, float fParam1)//Position - 0xB4BA
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_104(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_231(struct<3> Param0)//Position - 0xB4F1
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_232(struct<3> Param0, float fParam3, struct<3> Param4)//Position - 0xB529
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_90(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_86(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_233(struct<3> Param0)//Position - 0xB565
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_100(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2642935[iVar1])
	{
		if (func_99(Param0, &(Global_2642232[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642935[8])
	{
		if (func_99(Param0, &(Global_2642232[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_234(var uParam0, bool bParam1)//Position - 0xB5E0
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635560.f_26.f_18)
	{
		switch (Global_2635560.f_26.f_17)
		{
			case 0:
				if (func_212(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_128(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, Global_2635560.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_91(*uParam0, Global_2635560.f_26.f_10, Global_2635560.f_26.f_13, Global_2635560.f_26.f_16, Global_2635560.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_235(var uParam0, var uParam1, var uParam2)//Position - 0xB6D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2635560.f_1854 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_113(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_234(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2643228.f_162 = 0;
		Global_2643228.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2643228[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2643228.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_238(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_237();
		}
		else
		{
			func_236();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635560.f_1854)
		{
			iVar2 = Global_2635560.f_2260[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635560.f_1855[iVar2 /*4*/] };
				fVar6 = Global_2635560.f_1855[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_224(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_113(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0.375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0.375f);
												}
											}
										}
										bVar12 = false;
										if (!func_223(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_242(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_242(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_221(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_220(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2643228.f_162)
															{
																Global_2643228[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2643228.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2643228.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643228.f_162 == 0)
														{
															Global_2643228[0 /*3*/] = { Var3 };
															Global_2643228.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2643228.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2643228[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_219(Var3, fVar6, iVar7);
																		iVar7 = Global_2643228.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2643228.f_162++;
														if (Global_2643228.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635560.f_1854;
															}
															else if (Global_2643228.f_162 == 40)
															{
																iVar1 = Global_2635560.f_1854;
															}
														}
													}
													else
													{
														Global_2643228[Global_2643228.f_162 /*3*/] = { Var3 };
														Global_2643228.f_121[Global_2643228.f_162] = fVar6;
														Global_2643228.f_162++;
														if (Global_2643228.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635560.f_1854;
															}
															else if (Global_2643228.f_162 == 40)
															{
																iVar1 = Global_2635560.f_1854;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2643228.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643228[0 /*3*/] };
				*uParam1 = Global_2643228.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643228.f_163 > 0 && !Global_2643228.f_163 == Global_2643228.f_162)
				{
					func_217(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643228.f_162);
				Var15 = { Global_2643228[0 /*3*/] };
				uVar18 = Global_2643228.f_121[0];
				Global_2643228[0 /*3*/] = { Global_2643228[iVar0 /*3*/] };
				Global_2643228.f_121[0] = Global_2643228.f_121[iVar0];
				Global_2643228[iVar0 /*3*/] = { Var15 };
				Global_2643228.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2643228[0 /*3*/] };
				*uParam1 = Global_2643228.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635560.f_1854 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
				*uParam0 = { Global_2635560.f_1855[iVar0 /*4*/] };
				*uParam1 = Global_2635560.f_1855[iVar0 /*4*/].f_3;
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

void func_236()//Position - 0xBD71
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635560.f_1854)
	{
		Global_2635560.f_2260[iVar0] = iVar0;
		iVar0++;
	}
}

void func_237()//Position - 0xBD9E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635560.f_1854)
	{
		Global_2635560.f_2260[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635560.f_1854)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635560.f_1854);
		uVar3 = Global_2635560.f_2260[iVar1];
		Global_2635560.f_2260[iVar1] = Global_2635560.f_2260[iVar2];
		Global_2635560.f_2260[iVar2] = uVar3;
		iVar0++;
	}
}

void func_238(struct<3> Param0)//Position - 0xBE2F
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635560.f_1854)
	{
		uVar1 = func_239(Param0, fVar0, &fVar0);
		Global_2635560.f_2260[iVar2] = uVar1;
		iVar2++;
	}
}

int func_239(struct<3> Param0, float fParam3, float fParam4)//Position - 0xBE6A
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 100000000f;
	iVar3 = 0;
	while (iVar3 < Global_2635560.f_1854)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2635560.f_1855[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_240(int iParam0)//Position - 0xBECC
{
	return iParam0 == 50;
}

void func_241(float fParam0, float fParam1)//Position - 0xBED9
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2635560.f_2574 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635560.f_2572 = 1;
	Global_2635560.f_2575 = NETWORK::GET_NETWORK_TIME();
}

int func_242(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0xBF0C
{
	Global_2635560.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (fParam14 > 0f)
	{
		if (func_196(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635560.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_183(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635560.f_2++;
	return 1;
}

void func_243()//Position - 0xC01F
{
	func_248();
	func_247();
	func_246();
	func_245();
	func_244();
}

void func_244()//Position - 0xC03B
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2638608[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_245()//Position - 0xC073
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2635560.f_2591.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_246()//Position - 0xC0A2
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2635560.f_2591.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_247()//Position - 0xC0D0
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2635560.f_2591.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_248()//Position - 0xC10C
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2635560.f_2591 = { Var0 };
}

void func_249()//Position - 0xC12A
{
	if (Global_2635560.f_2572)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635560.f_2574)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2635560.f_2572 = 0;
	}
}

int func_250(bool bParam0)//Position - 0xC15D
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_251(int iParam0)//Position - 0xC180
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_252(int iParam0)//Position - 0xC19E
{
	switch (iParam0)
	{
		case 0:
			return Local_62.f_49;
			break;
	}
	return 0;
}

int func_253()//Position - 0xC1BE
{
	if (iLocal_285 == 0)
	{
		if (BitTest(Local_62.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_254()//Position - 0xC1DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!BitTest(Local_62.f_2, 0))
	{
		MISC::SET_BIT(&(Local_62.f_2), 0);
		if (iLocal_285 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_287, 1, 1))
		{
			if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false)) >= func_498(iLocal_285)
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(func_498(iLocal_285)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = PLAYER::GET_PLAYER_PED(iLocal_287);
					iVar3 = PED::GET_PED_NEARBY_PEDS(iVar2, &uLocal_470, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_498(iLocal_285))
							{
								if (iVar5 == -1)
								{
									if (((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_62.f_10[iVar1 /*7*/]) && !BitTest(Local_62.f_10[iVar1 /*7*/].f_2, 1)) && !BitTest(Local_62.f_10[iVar1 /*7*/].f_2, 6)) && !BitTest(Local_62.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_470[iVar0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_470[iVar0], false))
									{
										if (!PED::IS_PED_A_PLAYER(uLocal_470[iVar0]))
										{
											if (func_256(ENTITY::GET_ENTITY_MODEL(uLocal_470[iVar0])))
											{
												if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_470[iVar0]))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_470[iVar0], false))
													{
														if (func_5(ENTITY::GET_ENTITY_COORDS(uLocal_470[iVar0], true), ENTITY::GET_ENTITY_COORDS(iVar2, true), 625f))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_470[iVar0], true, false);
															Local_62.f_10[iVar5 /*7*/].f_6 = iVar0;
															MISC::SET_BIT(&(Local_62.f_10[iVar5 /*7*/].f_2), 8);
															if (!BitTest(Local_62.f_1, 12))
															{
																Local_62.f_8 = iLocal_292;
																MISC::SET_BIT(&(Local_62.f_1), 12);
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
						iVar0++;
					}
				}
			}
		}
	}
	else if (BitTest(Local_62.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_498(iLocal_285))
		{
			if (BitTest(Local_62.f_10[iVar6 /*7*/].f_2, 1) || BitTest(Local_62.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (BitTest(Local_62.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_470[Local_62.f_10[iVar6 /*7*/].f_6], false))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_470[Local_62.f_10[iVar6 /*7*/].f_6]))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uLocal_470[Local_62.f_10[iVar6 /*7*/].f_6]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uLocal_470[Local_62.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_470[Local_62.f_10[iVar6 /*7*/].f_6], true);
							Local_62.f_10[iVar6 /*7*/] = NETWORK::PED_TO_NET(uLocal_470[Local_62.f_10[iVar6 /*7*/].f_6]);
							NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_62.f_10[iVar6 /*7*/], true);
							MISC::SET_BIT(&(Local_62.f_10[iVar6 /*7*/].f_2), 0);
							Local_62.f_10[iVar6 /*7*/].f_1 = iLocal_285;
							Local_62.f_10[iVar6 /*7*/].f_4 = func_76(iLocal_285);
							func_74(iVar6);
							MISC::CLEAR_BIT(&(Local_62.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || NETWORK::GET_TIME_DIFFERENCE(iLocal_292, Local_62.f_8) > 5000)
		{
			if (iVar7 >= func_498(iLocal_285))
			{
				MISC::SET_BIT(&(Local_62.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_470[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_498(iLocal_285))
			{
				if (BitTest(Local_62.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_255(&(Local_62.f_10[iVar6 /*7*/]));
					MISC::CLEAR_BIT(&(Local_62.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			MISC::CLEAR_BIT(&(Local_62.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_255(int iParam0)//Position - 0xC59C
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_256(int iParam0)//Position - 0xC5C0
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("MP_M_Freemode_01") || iParam0 == joaat("MP_M_FIBSec_01")) || iParam0 == joaat("MP_S_M_Armoured_01")) || iParam0 == joaat("S_F_Y_AirHostess_01")) || iParam0 == joaat("S_F_Y_Baywatch_01")) || iParam0 == joaat("S_F_Y_Cop_01")) || iParam0 == joaat("S_F_Y_Ranger_01")) || iParam0 == joaat("S_F_Y_Scrubs_01")) || iParam0 == joaat("S_F_Y_Sheriff_01")) || iParam0 == joaat("S_M_M_Armoured_01")) || iParam0 == joaat("S_M_M_Armoured_02")) || iParam0 == joaat("S_M_M_Bouncer_01")) || iParam0 == joaat("S_M_M_CIASec_01")) || iParam0 == joaat("S_M_M_ChemSec_01")) || iParam0 == joaat("S_M_M_Doctor_01")) || iParam0 == joaat("S_M_M_FIBOffice_01")) || iParam0 == joaat("S_M_M_FIBOffice_02")) || iParam0 == joaat("S_M_M_HighSec_01")) || iParam0 == joaat("S_M_M_HighSec_02")) || iParam0 == joaat("S_M_M_Janitor")) || iParam0 == joaat("S_M_M_LSMetro_01")) || iParam0 == joaat("S_M_M_Marine_01")) || iParam0 == joaat("S_M_M_Marine_02")) || iParam0 == joaat("S_M_M_Paramedic_01")) || iParam0 == joaat("S_M_M_Pilot_01")) || iParam0 == joaat("S_M_M_Pilot_02")) || iParam0 == joaat("S_M_M_Postal_01")) || iParam0 == joaat("S_M_M_Postal_02")) || iParam0 == joaat("S_M_M_PrisGuard_01")) || iParam0 == joaat("S_M_M_Scientist_01")) || iParam0 == joaat("S_M_M_Security_01")) || iParam0 == joaat("S_M_M_UPS_01")) || iParam0 == joaat("S_M_M_UPS_02")) || iParam0 == joaat("S_M_Y_AirWorker")) || iParam0 == joaat("S_M_Y_ArmyMech_01")) || iParam0 == joaat("S_M_Y_BayWatch_01")) || iParam0 == joaat("S_M_Y_BlackOps_01")) || iParam0 == joaat("S_M_Y_BlackOps_02")) || iParam0 == joaat("S_M_Y_Cop_01")) || iParam0 == joaat("S_M_Y_Doorman_01")) || iParam0 == joaat("S_M_Y_Fireman_01")) || iParam0 == joaat("S_M_Y_Garbage")) || iParam0 == joaat("S_M_Y_HwayCop_01")) || iParam0 == joaat("S_M_Y_Marine_01")) || iParam0 == joaat("S_M_Y_Marine_02")) || iParam0 == joaat("S_M_Y_Marine_03")) || iParam0 == joaat("S_M_Y_Pilot_01")) || iParam0 == joaat("S_M_Y_Ranger_01")) || iParam0 == joaat("S_M_Y_Sheriff_01")) || iParam0 == joaat("S_M_Y_Swat_01")) || iParam0 == joaat("S_M_Y_USCG_01")) || iParam0 == joaat("S_M_Y_Valet_01")) || iParam0 == joaat("S_M_Y_Waiter_01")) || iParam0 == joaat("U_M_M_JewelSec_01")) || iParam0 == joaat("S_M_Y_Casino_01"))
	{
		return 0;
	}
	return 1;
}

int func_257()//Position - 0xC8CC
{
	if (BitTest(Local_62.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_285 == 0)
	{
		Local_62.f_49 = func_258(Local_62.f_36, 1);
		MISC::SET_BIT(&(Local_62.f_1), 6);
		return 1;
	}
	else
	{
		MISC::SET_BIT(&(Local_62.f_1), 6);
		return 1;
	}
	return 0;
}

int func_258(struct<3> Param0, int iParam3)//Position - 0xC918
{
	int iVar0;
	
	if (func_259(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("G_M_Y_MexGoon_01");
	}
	else if (func_259(Param0, 1100f, -196f, 300f, 350f, 0) || func_259(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("G_M_Y_Lost_01");
	}
	else if (func_259(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("G_M_Y_BallaOrig_01");
	}
	else if (func_259(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("G_M_Y_FamCA_01");
	}
	else if (func_259(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("G_M_Y_Korean_02");
	}
	else if (func_259(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("A_M_M_Hillbilly_02");
	}
	else if (func_259(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("G_M_Y_SalvaGoon_01");
	}
	else if (iParam3 == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar0 < 33)
		{
			return joaat("MP_G_M_Pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("G_M_M_ArmGoon_01");
		}
		else
		{
			return joaat("G_M_M_ChiGoon_01");
		}
		if (Param0.f_1 > 800f)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar0 < 33)
			{
				return joaat("A_M_M_Hillbilly_02");
			}
		}
	}
	return joaat("MP_G_M_Pros_01");
}

bool func_259(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0xCAD5
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param3, bParam7) <= fParam6;
}

void func_260(int iParam0)//Position - 0xCAEE
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	Local_62.f_36 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (func_261(iParam0, 0))
	{
		MISC::SET_BIT(&(Local_62.f_1), 17);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_62.f_1), 17);
	}
}

int func_261(int iParam0, int iParam1)//Position - 0xCB2D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_262()//Position - 0xCB6E
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (BitTest(Local_62.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_285)
			{
				case 0:
					if (BitTest(Local_62.f_2, 11))
					{
						if (func_6(iLocal_287, 1, 1))
						{
							if (SYSTEM::VDIST2(func_8(iLocal_287), Local_62.f_39) > 625f)
							{
								MISC::CLEAR_BIT(&(Local_62.f_2), 11);
								MISC::CLEAR_BIT(&iLocal_279, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_287, 1, 1))
						{
							bVar0 = true;
							if (func_265())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_69();
						}
						else
						{
							func_70();
						}
						if (BitTest(Local_62.f_1, 5))
						{
							if (func_264())
							{
								func_70();
								MISC::SET_BIT(&(Local_62.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_287, 1, 1))
					{
						bVar0 = true;
						if (func_263())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_69();
					}
					else
					{
						func_70();
					}
					if (BitTest(Local_62.f_1, 5))
					{
						if (NETWORK::GET_TIME_DIFFERENCE(iLocal_292, Local_62.f_5) > 30000)
						{
							func_70();
							MISC::SET_BIT(&(Local_62.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_263()//Position - 0xCC87
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_287);
	if (((((ENTITY::IS_ENTITY_IN_AIR(iVar0) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_30(iLocal_287, 1, 1)) || func_48(iLocal_287, 0)) || func_48(iLocal_287, 7)) || func_29(iLocal_287))
	{
		return 1;
	}
	if (func_124(iLocal_287, 1))
	{
		if (iLocal_287 > -1)
		{
			if (Global_1853988[iLocal_287 /*867*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_264()//Position - 0xCD0E
{
	if (!BitTest(Local_62.f_1, 18))
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iLocal_292, Local_62.f_5) > 5000)
		{
			MISC::SET_BIT(&(Local_62.f_1), 18);
			return 1;
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_292, Local_62.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_265()//Position - 0xCD5A
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_287);
	if (((((((((ENTITY::GET_ENTITY_SPEED(iVar0) > 10f || ENTITY::IS_ENTITY_IN_AIR(iVar0)) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_30(iLocal_287, 1, 1)) || func_68(iLocal_287)) || func_48(iLocal_287, 0)) || func_48(iLocal_287, 7)) || func_29(iLocal_287)) || Global_2657704[iLocal_287 /*463*/].f_248) || func_67(PLAYER::GET_PLAYER_PED(iLocal_287), joaat("titan")))
	{
		return 1;
	}
	if (func_124(iLocal_287, 1))
	{
		if (iLocal_287 > -1)
		{
			if (Global_1853988[iLocal_287 /*867*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_287 != -1)
	{
		if (BitTest(Local_118[iLocal_287 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_266()//Position - 0xCE41
{
	if (!BitTest(Local_62.f_1, 14))
	{
		Local_62.f_9 = iLocal_292;
		MISC::SET_BIT(&(Local_62.f_1), 14);
	}
}

void func_267()//Position - 0xCE65
{
	if (Local_62.f_44 != Local_118[iLocal_286 /*5*/].f_4)
	{
		Local_62.f_44 = Local_118[iLocal_286 /*5*/].f_4;
	}
}

void func_268()//Position - 0xCE8A
{
	if (!BitTest(Local_62.f_1, 10))
	{
		Local_62.f_45 = func_498(iLocal_285);
		Local_62.f_46 = 0;
		Local_62.f_47 = 0;
		MISC::SET_BIT(&(Local_62.f_1), 10);
	}
}

void func_269()//Position - 0xCEBC
{
	func_270();
	if (!BitTest(Local_62.f_1, 8))
	{
		if (BitTest(Local_62.f_2, 7))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_292, Local_62.f_7) > 300000)
			{
				MISC::SET_BIT(&(Local_62.f_2), 8);
			}
		}
	}
}

void func_270()//Position - 0xCEF8
{
	if (!BitTest(Local_62.f_2, 7))
	{
		Local_62.f_7 = iLocal_292;
		MISC::SET_BIT(&(Local_62.f_2), 7);
	}
}

void func_271()//Position - 0xCF1A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	MISC::SET_BIT(&iLocal_279, 7);
	if (BitTest(Local_62.f_3, 1))
	{
	}
	if (BitTest(Local_62.f_3, 2))
	{
	}
	if (BitTest(Local_62.f_3, 3))
	{
	}
	if (BitTest(Local_62.f_3, 9))
	{
	}
	if (BitTest(Local_62.f_3, 4))
	{
	}
	if (BitTest(Local_62.f_3, 5))
	{
	}
	if (BitTest(Local_62.f_3, 11))
	{
		if (PLAYER::PLAYER_ID() == iLocal_286)
		{
			MISC::CLEAR_BIT(&iLocal_279, 7);
			if (Local_62.f_50 || Local_62.f_52)
			{
				MISC::SET_BIT(&iLocal_279, 7);
			}
			else if (func_392("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_279, 7);
			}
		}
	}
	if (BitTest(Local_62.f_3, 6))
	{
		if (PLAYER::PLAYER_ID() == iLocal_286)
		{
			MISC::CLEAR_BIT(&iLocal_279, 7);
			if (Local_62.f_50 || Local_62.f_52)
			{
				MISC::SET_BIT(&iLocal_279, 7);
			}
			else if (func_392("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_279, 7);
			}
		}
	}
	if (BitTest(Local_62.f_3, 7))
	{
		if (PLAYER::PLAYER_ID() == iLocal_286)
		{
			MISC::CLEAR_BIT(&iLocal_279, 7);
			if (func_349())
			{
				if (!Local_62.f_50)
				{
					if (Local_62.f_52)
					{
						iLocal_487 = func_348(Local_62.f_53);
					}
					else
					{
						iLocal_487 = func_344(12);
					}
					if (iLocal_487 > 0)
					{
						func_342(iLocal_487, 1, 0, 0f);
						func_327(iLocal_487, 4, 1, 1);
					}
					MISC::SET_BIT(&iLocal_279, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_279, 7);
				}
			}
		}
	}
	if (BitTest(Local_62.f_3, 0))
	{
		if (PLAYER::PLAYER_ID() == iLocal_286)
		{
			if (!BitTest(Local_62.f_2, 1))
			{
				MISC::CLEAR_BIT(&iLocal_279, 7);
				if (func_392("MPCT_mugfail", "LAMAR", 19))
				{
					MISC::SET_BIT(&iLocal_279, 7);
				}
			}
		}
		else if (PLAYER::PLAYER_ID() == iLocal_287)
		{
			if (BitTest(Local_62.f_2, 1))
			{
				if (BitTest(Local_62.f_2, 12))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_7185 /* Tunable: KILL_A_MUGGER_RP */) * Global_262145.f_4304 /* Tunable: XP_TUNABLE_KILL_MUGGERS */));
					func_287(0, "XPT_MEDIUMT", joaat("XPTYPE_ACTION"), joaat("XPCATEGORY_ACTION_STOPPED_MUGGER"), iVar0, 1, -1, 0);
					func_273(47, 1);
				}
			}
		}
	}
	if (BitTest(Local_62.f_3, 8))
	{
		if (PLAYER::PLAYER_ID() == iLocal_286)
		{
			MISC::CLEAR_BIT(&iLocal_279, 7);
			if (func_349())
			{
				if (iLocal_285 == 0)
				{
					iLocal_487 = (func_344(2) * func_498(iLocal_285));
					iVar1 = 3;
				}
				else
				{
					if (Local_62.f_52)
					{
						iLocal_487 = func_348(Local_62.f_53);
					}
					else
					{
						iLocal_487 = func_344(12);
					}
					iVar1 = 4;
				}
				if (!Local_62.f_50)
				{
					if (iLocal_487 > 0)
					{
						func_342(iLocal_487, 1, 0, 0f);
						func_327(iLocal_487, iVar1, 1, 0);
					}
					MISC::SET_BIT(&iLocal_279, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_279, 7);
				}
			}
		}
	}
	if (BitTest(Local_62.f_3, 10))
	{
		if (PLAYER::PLAYER_ID() == iLocal_286)
		{
			MISC::CLEAR_BIT(&iLocal_279, 7);
			if (func_349())
			{
				if (iLocal_285 == 0)
				{
					iLocal_487 = (func_344(2) * func_498(iLocal_285));
					iVar2 = 3;
				}
				else
				{
					if (Local_62.f_52)
					{
						iLocal_487 = func_348(Local_62.f_53);
					}
					else
					{
						iLocal_487 = func_344(12);
					}
					iVar2 = 4;
				}
				if (!Local_62.f_50)
				{
					if (iLocal_487 > 0)
					{
						func_342(iLocal_487, 1, 0, 0f);
						func_327(iLocal_487, iVar2, 1, 0);
					}
					MISC::SET_BIT(&iLocal_279, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_279, 7);
				}
			}
		}
	}
	if (BitTest(iLocal_279, 7))
	{
		func_272();
	}
}

void func_272()//Position - 0xD242
{
	MISC::CLEAR_BIT(&(Global_1853988[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*867*/].f_140), iLocal_285);
	Global_1853988[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*867*/].f_141 = -1;
	if (iLocal_285 == 1)
	{
		if (MISC::IS_INCIDENT_VALID(iLocal_469))
		{
			MISC::DELETE_INCIDENT(iLocal_469);
		}
	}
	func_527();
	func_559();
}

int func_273(int iParam0, int iParam1)//Position - 0xD28C
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_274(iParam0, iParam1);
}

int func_274(int iParam0, int iParam1)//Position - 0xD2A7
{
	if (func_286(14) && !func_285(iParam0))
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
	if (func_284(&Global_4542602))
	{
		if (func_282(&Global_4542602, iParam0))
		{
			return 0;
		}
		if (func_275(&Global_4542602, iParam0))
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

int func_275(var uParam0, int iParam1)//Position - 0xD344
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_286(14) && !func_285(iParam1))
	{
		return 0;
	}
	if (func_282(uParam0, iParam1))
	{
		return 0;
	}
	if (func_281(uParam0) < 0f)
	{
		func_280(uParam0, 0);
	}
	func_278(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_276(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_276(var uParam0, int iParam1)//Position - 0xD3F5
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_286(14) && !func_285(iParam1))
	{
		return 0;
	}
	if (func_282(uParam0, iParam1))
	{
		return 0;
	}
	if (func_281(uParam0) < 0f)
	{
		func_280(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_277(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_277(var uParam0, int iParam1)//Position - 0xD470
{
	return (*uParam0)[iParam1] == 78;
}

void func_278(var uParam0)//Position - 0xD481
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_279(uParam0, iVar0);
		iVar0++;
	}
	func_280(uParam0, (Global_4542601 - 0.5f));
}

void func_279(var uParam0, int iParam1)//Position - 0xD4B5
{
	(*uParam0)[iParam1] = 78;
}

void func_280(var uParam0, float fParam1)//Position - 0xD4C5
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

float func_281(var uParam0)//Position - 0xD4E2
{
	return uParam0->f_80;
}

bool func_282(var uParam0, int iParam1)//Position - 0xD4EE
{
	return func_283(uParam0, iParam1) != -1;
}

int func_283(var uParam0, int iParam1)//Position - 0xD500
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

bool func_284(var uParam0)//Position - 0xD52D
{
	return uParam0->f_79 == 1;
}

int func_285(int iParam0)//Position - 0xD53B
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

bool func_286(int iParam0)//Position - 0xD58B
{
	return Global_43377 == iParam0;
}

var func_287(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xD599
{
	return func_288(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_288(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xD5B5
{
	var uVar0;
	
	uVar0 = func_289(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_289(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xD5D8
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_320();
	if (func_319(sParam2))
	{
	}
	if (func_318())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_316(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_315(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_313(0, &iVar1);
					break;
				
				case 3:
					func_313(1, &iVar1);
					break;
				
				case 1:
					func_311(&iVar1);
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
			func_310(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_297((func_309(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_2 != -1)
				{
					func_310(1166, iVar1, -1);
				}
				func_294(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_290((func_292(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_290((func_292(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_290(int iParam0)//Position - 0xD743
{
	if (func_318())
	{
		Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_5 = iParam0;
		func_291(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_291(int iParam0, int iParam1)//Position - 0xD76E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_292(int iParam0)//Position - 0xD78A
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_293(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_5;
			}
		}
		else
		{
			return func_293(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_293(int iParam0)//Position - 0xD7DB
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

void func_294(int iParam0)//Position - 0xD7F9
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_150(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_295(func_296(&Var0));
			if (iVar13 == 0)
			{
				func_291(joaat("MPPLY_CREW_LOCAL_XP_0"), (func_293(joaat("MPPLY_CREW_LOCAL_XP_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_291(joaat("MPPLY_CREW_LOCAL_XP_1"), (func_293(joaat("MPPLY_CREW_LOCAL_XP_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_291(joaat("MPPLY_CREW_LOCAL_XP_2"), (func_293(joaat("MPPLY_CREW_LOCAL_XP_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_291(joaat("MPPLY_CREW_LOCAL_XP_3"), (func_293(joaat("MPPLY_CREW_LOCAL_XP_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_291(joaat("MPPLY_CREW_LOCAL_XP_4"), (func_293(joaat("MPPLY_CREW_LOCAL_XP_4")) + iParam0));
			}
		}
	}
}

int func_295(int iParam0)//Position - 0xD8C3
{
	if (iParam0 == func_293(joaat("MPPLY_CREW_0_ID")))
	{
		return 0;
	}
	else if (iParam0 == func_293(joaat("MPPLY_CREW_1_ID")))
	{
		return 1;
	}
	else if (iParam0 == func_293(joaat("MPPLY_CREW_2_ID")))
	{
		return 2;
	}
	else if (iParam0 == func_293(joaat("MPPLY_CREW_3_ID")))
	{
		return 3;
	}
	else if (iParam0 == func_293(joaat("MPPLY_CREW_4_ID")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_296(var* uParam0)//Position - 0xD939
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

void func_297(int iParam0, int iParam1, int iParam2)//Position - 0xD95C
{
	if (func_318())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10242 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_308(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == func_308(640, -1))
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
		if (func_307(PLAYER::PLAYER_ID()))
		{
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_1 = iParam0;
			Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_205.f_6 = func_304(iParam0, 1);
		}
		func_301(640, iParam0, -1, 1);
		func_301(641, func_304(iParam0, 1), -1, 1);
		func_298(-1109644434, 7, 0);
	}
}

void func_298(int iParam0, int iParam1, int iParam2)//Position - 0xDA6E
{
	int iVar0;
	
	if (func_300(iParam1, iParam2))
	{
		iVar0 = func_299();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_299()//Position - 0xDA9B
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

int func_300(int iParam0, var uParam1)//Position - 0xDAD0
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

void func_301(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDB56
{
	int iVar0;
	
	iVar0 = func_302(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_302(int iParam0, var uParam1)//Position - 0xDB79
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_303(uParam1));
}

int func_303(var uParam0)//Position - 0xDB8E
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_211();
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

int func_304(int iParam0, bool bParam1)//Position - 0xDBC2
{
	if (bParam1)
	{
	}
	return func_305(iParam0, 0);
}

int func_305(int iParam0, int iParam1)//Position - 0xDBD6
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
		if (func_306(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_306(iVar3) < iParam0)
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

int func_306(int iParam0)//Position - 0xDC91
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

int func_307(int iParam0)//Position - 0xE1CC
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672524.f_1, iParam0);
}

int func_308(int iParam0, int iParam1)//Position - 0xE1EB
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_302(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_309(int iParam0)//Position - 0xE21A
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_308(640, -1);
			}
			else if (func_307(iParam0))
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_308(640, -1);
	}
	return 0;
}

void func_310(int iParam0, int iParam1, int iParam2)//Position - 0xE271
{
	int iVar0;
	
	iVar0 = func_308(iParam0, func_303(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_301(iParam0, iVar0, iParam2, 1);
}

void func_311(int iParam0)//Position - 0xE299
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_152(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_151(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_312(*iParam0, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_312(*iParam0, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_312(int iParam0, int iParam1)//Position - 0xE385
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_313(bool bParam0, int iParam1)//Position - 0xE3A6
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
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_151(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_314(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_151(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_312(*iParam1, 100) * (10f * Global_262145.f_4228 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_312(*iParam1, 100) * (20f * Global_262145.f_4221 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_314(int iParam0, int iParam1)//Position - 0xE4BE
{
	return SYSTEM::VDIST(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_315(int iParam0)//Position - 0xE4DA
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_312(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_316(int iParam0)//Position - 0xE511
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_309(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_309(PLAYER::PLAYER_ID());
		}
	}
	if (func_317(8000, 0, 0) > 0)
	{
		if (func_317(8000, 0, 0) < (iParam0 + func_309(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_317(8000, 0, 0) - func_309(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_317(int iParam0, bool bParam1, int iParam2)//Position - 0xE575
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
	return func_306(iParam0);
}

int func_318()//Position - 0xE59B
{
	return 1;
}

int func_319(char* sParam0)//Position - 0xE5A4
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

int func_320()//Position - 0xE5DC
{
	int iVar0;
	
	if (func_326(PLAYER::PLAYER_ID()) || func_325(PLAYER::PLAYER_ID()))
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
	else if (func_323() || func_321(PLAYER::PLAYER_ID()))
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

int func_321(int iParam0)//Position - 0xE676
{
	return func_322(func_45(iParam0));
}

int func_322(int iParam0)//Position - 0xE688
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_323()//Position - 0xE6A2
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_186();
	}
	return func_324(Global_4718592.f_117591);
}

int func_324(int iParam0)//Position - 0xE6C6
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

bool func_325(int iParam0)//Position - 0xE700
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

bool func_326(int iParam0)//Position - 0xE715
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

void func_327(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xE72A
{
	struct<4> Var0;
	struct<8> Var4;
	int iVar12;
	int iVar13;
	
	StringCopy(&Var0, func_341(iParam1), 16);
	StringCopy(&Var4, func_340(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar12 = joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS");
			break;
		
		case 1:
			iVar12 = joaat("SERVICE_EARN_REFUND_BACKUP_LOST");
			break;
		
		case 2:
			iVar12 = joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES");
			break;
		
		case 3:
			iVar12 = joaat("SERVICE_EARN_REFUND_HIRE_MUGGER");
			break;
		
		case 4:
			iVar12 = joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY");
			break;
		
		case 5:
			iVar12 = joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF");
			break;
		
		case 6:
			iVar12 = joaat("SERVICE_EARN_REFUND_HELI_PICKUP");
			break;
		
		case 7:
			iVar12 = joaat("SERVICE_EARN_REFUND_BOAT_PICKUP");
			break;
		
		case 8:
			iVar12 = joaat("SERVICE_EARN_REFUND_CLEAR_WANTED");
			break;
		
		case 9:
			iVar12 = joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD");
			break;
		
		case 10:
			iVar12 = joaat("SERVICE_EARN_REFUND_CHALLENGE");
			break;
		
		case 11:
			iVar12 = joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB");
			break;
		
		case 12:
			iVar12 = joaat("SERVICE_EARN_REFUND_LOTTERY");
			break;
		
		case 13:
			iVar12 = joaat("SERVICE_EARN_REFUNDAPPEARANCE");
			break;
		
		case 14:
			iVar12 = joaat("SERVICE_EARN_REFUNDAMMODROP");
			break;
		
		case 15:
			iVar12 = joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL");
			break;
		
		case 16:
			iVar12 = joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO");
			break;
		
		case 17:
			iVar12 = joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY");
			break;
	}
	if (func_57())
	{
		func_328(iVar12, iParam0, &iVar13, bParam3, bParam3, 0);
		Global_4535172[iVar13 /*85*/].f_14.f_40 = { Var0 };
		Global_4535172[iVar13 /*85*/].f_14.f_44 = { Var4 };
	}
	else
	{
		MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_328(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE8B8
{
	int iVar0;
	
	if (!func_57())
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
				func_329(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_329(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
				func_329(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_329(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_329(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xF17D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_211()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_336(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_335(1, iParam4);
			Global_4536677 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_330(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_330(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xF32A
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_331(iParam0);
	}
}

void func_331(int iParam0)//Position - 0xF362
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_57())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_334(iParam0))
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
		func_332(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_332(var uParam0)//Position - 0xF3B6
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
	func_333(&(uParam0->f_14));
	func_333(&(uParam0->f_14.f_13));
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

void func_333(var uParam0)//Position - 0xF4C2
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

int func_334(int iParam0)//Position - 0xF50A
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_335(int iParam0, int iParam1)//Position - 0xF535
{
	Global_2697092 = iParam1;
	Global_2697091 = iParam0;
}

int func_336(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xF549
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_57())
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
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				func_337(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_337(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0xF686
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
	iVar36 = func_339(Var0.f_1);
	if ((Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24259 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24260 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_338();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_338()//Position - 0xF718
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_339(int iParam0)//Position - 0xF727
{
	var uVar0;
	
	if (func_14(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_340(int iParam0)//Position - 0xF742
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT" /* GXT: _ */;
}

char* func_341(int iParam0)//Position - 0xF7CC
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT" /* GXT: _ */;
}

void func_342(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0xF8BA
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
		func_343(iVar1, 0);
	}
}

void func_343(int iParam0, bool bParam1)//Position - 0xF93D
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_344(int iParam0)//Position - 0xF94E
{
	int iVar0;
	
	iVar0 = 0;
	if (func_347(iParam0) >= 0)
	{
		iVar0 = func_347(iParam0);
	}
	else
	{
		iVar0 = func_345(iParam0);
	}
	return iVar0;
}

int func_345(int iParam0)//Position - 0xF978
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_346())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return 200;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return 400;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return 600;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return 800;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_346()//Position - 0xFB8A
{
	return BitTest(func_308(6427, -1), 19);
}

int func_347(int iParam0)//Position - 0xFB9D
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7188 /* Tunable: LESTER_BOUNTY_CUT */;
			break;
		
		case 10:
			return Global_262145.f_4128 /* Tunable: REQUEST_BACKUP_HELI_EXPENDITURE_MODIFIER */;
			break;
		
		case 11:
			return Global_262145.f_4129 /* Tunable: REQUEST_AIRSTRIKE_EXPENDITURE_MODIFIER */;
			break;
		
		case 8:
			return Global_262145.f_4126 /* Tunable: REQUEST_AMMO_DROP_EXPENDITURE_MODIFIER */;
			break;
		
		case 0:
			return Global_262145.f_4112 /* Tunable: REQUEST_BRUCIE_BOX_EXPENDITURE_MODIFIER */;
			break;
		
		case 9:
			return Global_262145.f_4127 /* Tunable: REQUEST_BOAT_PICKUP_EXPENDITURE_MODIFIER */;
			break;
		
		case 13:
			return Global_262145.f_4131 /* Tunable: REQUEST_HELI_PICKUP_EXPENDITURE_MODIFIER */;
			break;
		
		case 12:
			return Global_262145.f_4130 /* Tunable: REQUEST_ARMY_EXPENDITURE_MODIFIER */;
			break;
		
		case 2:
			return Global_262145.f_4122 /* Tunable: REQUEST_THIEF1_EXPENDITURE_MODIFIER */;
			break;
		
		case 14:
			return Global_262145.f_4132 /* Tunable: REQUEST_REVEAL_PLAYERS_EXPENDITURE_MODIFIER */;
			break;
		
		case 20:
			if (func_346())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return Global_262145.f_7195 /* Tunable: LOSE_WANTED_LEVEL_1_CAP */;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return Global_262145.f_7196 /* Tunable: LOSE_WANTED_LEVEL_2_CAP */;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return Global_262145.f_7197 /* Tunable: LOSE_WANTED_LEVEL_3_CAP */;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return Global_262145.f_7198 /* Tunable: LOSE_WANTED_LEVEL_4_CAP */;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return Global_262145.f_7199 /* Tunable: LOSE_WANTED_LEVEL_5_CAP */;
			}
			break;
		
		case 6:
			return Global_262145.f_4125 /* Tunable: REQUEST_OFF_THE_RADAR_EXPENDITURE_MODIFIER */;
			break;
		
		case 22:
			return Global_262145.f_4138 /* Tunable: REQUEST_PEGASUS_EXPENDITURE_MODIFIER */;
			break;
		
		case 23:
			return Global_262145.f_4139 /* Tunable: REQUEST_LESTER_LOCATE_BOAT_EXPENDITURE_MODIFIER */;
			break;
		
		case 24:
			return Global_262145.f_4140 /* Tunable: REQUEST_LESTER_LOCATE_HELI_EXPENDITURE_MODIFIER */;
			break;
		
		case 25:
			return Global_262145.f_4141 /* Tunable: REQUEST_LESTER_LOCATE_CAR_EXPENDITURE_MODIFIER */;
			break;
		
		case 26:
			return Global_262145.f_4142 /* Tunable: REQUEST_LESTER_LOCATE_PLANE_EXPENDITURE_MODIFIER */;
			break;
		
		case 35:
			return Global_262145.f_7852 /* Tunable: REQUEST_COPS_TURN_BLIND_EYE_FEE */;
			break;
		
		case 15:
			return Global_262145.f_7189 /* Tunable: REQUEST_A_JOB_FEE */;
			break;
		
		case 17:
			return Global_262145.f_7189 /* Tunable: REQUEST_A_JOB_FEE */;
			break;
		
		case 18:
			return Global_262145.f_7189 /* Tunable: REQUEST_A_JOB_FEE */;
			break;
		
		case 19:
			return Global_262145.f_7189 /* Tunable: REQUEST_A_JOB_FEE */;
			break;
		
		case 21:
			return Global_262145.f_7189 /* Tunable: REQUEST_A_JOB_FEE */;
			break;
		
		case 36:
			return Global_262145.f_8319 /* Tunable: REQUEST_A_HEIST_FEE */;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_13532 /* Tunable: YACHT_CAPTAIN_REQUEST_HELI */;
			break;
		
		case 41:
			return Global_262145.f_13533 /* Tunable: YACHT_CAPTAIN_REQUEST_BOAT */;
			break;
		
		case 42:
			return Global_262145.f_13534 /* Tunable: YACHT_CAPTAIN_REQUEST_PV */;
			break;
		
		case 43:
			return Global_262145.f_16068 /* Tunable: EXEC1_IMPOUND */;
			break;
		
		case 44:
			return Global_262145.f_16070 /* Tunable: EXEC1_REQUEST_HELICOPTER */;
			break;
		
		case 57:
			return Global_262145.f_4140 /* Tunable: REQUEST_LESTER_LOCATE_HELI_EXPENDITURE_MODIFIER */;
			break;
		
		case 58:
			return Global_262145.f_25976 /* Tunable: 2115355697 */;
			break;
		
		case 62:
			return Global_262145.f_25977 /* Tunable: -1358864430 */;
			break;
		
		case 63:
			return Global_262145.f_29466 /* Tunable: -1559847104 */;
			break;
		
		case 64:
			return Global_262145.f_7189 /* Tunable: REQUEST_A_JOB_FEE */;
			break;
		
		case 72:
			return Global_262145.f_25977 /* Tunable: -1358864430 */;
			break;
		
		case 73:
			return Global_262145.f_31982 /* Tunable: -1284681617 */;
			break;
		
		case 74:
			return Global_262145.f_31984 /* Tunable: -1303558292 */;
			break;
		
		case 75:
			return Global_262145.f_31986 /* Tunable: 569088073 */;
			break;
	}
	return 0;
}

int func_348(int iParam0)//Position - 0xFF07
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24145 /* Tunable: H2_STRIKE_TEAM_1_PRICE */;
		
		case 2:
			return Global_262145.f_24146 /* Tunable: H2_STRIKE_TEAM_2_PRICE */;
		
		case 3:
			return Global_262145.f_24147 /* Tunable: H2_STRIKE_TEAM_3_PRICE */;
		
		default:
	}
	return 9999999;
}

int func_349()//Position - 0xFF4A
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_62.f_50 || Local_62.f_52)
	{
		if (!Local_62.f_51)
		{
			if (!BitTest(Local_62.f_3, 7))
			{
				func_350("HS_UNABLE" /* GXT: ~s~Unable to send a Hit Squad to attack ~a~.~s~ */, iLocal_287, 0, 0, 0, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_285)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_392(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_350(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xFFD4
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar18;
	bool bVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (func_14(iParam1))
		{
			if (!bParam2)
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			else
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
			{
			}
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
			if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
			{
				if (Global_4718592.f_112316[iVar1] != -1)
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_390(iVar1, iParam1, 0));
				}
				else
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_358(iParam1, -2, 1, 0, 0));
				}
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_358(iParam1, -2, 1, 0, 0));
			}
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_356(&Var2));
			if (!bParam4)
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
			else
			{
				Global_2764376 = { func_150(iParam1) };
				if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2764306, 35, &Global_2764376))
				{
					bVar18 = false;
					if (MISC::ARE_STRINGS_EQUAL(&(Global_2764306.f_22), "Leader") && Global_2764306.f_30 == 0)
					{
						bVar18 = true;
					}
					if (Global_2764306.f_21 > 0)
					{
						bVar19 = false;
					}
					else
					{
						bVar19 = true;
					}
					if (bParam5)
					{
						if (bParam6)
						{
							Var2 = { func_355(&Var2) };
						}
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764306, 35), &(Global_2764306.f_17), Global_2764306.f_30, bVar18, false, Global_2764306, &Var2, Global_1576220, Global_1576221, Global_1576222);
					}
					else
					{
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2764306, 35), &(Global_2764306.f_17), Global_2764306.f_30, bVar18, false, Global_2764306, Global_1576220, Global_1576221, Global_1576222);
					}
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
			}
			func_351(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	return iVar0;
}

void func_351(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x101A1
{
	int iVar0;
	
	if ((!func_354() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_209(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_352(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944768.f_5[iVar0 /*53*/] = iParam0;
		Global_1944768.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944768.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944768.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944768.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944768.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944768.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944768.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_352(int iParam0)//Position - 0x102A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944768 - 1))
	{
		if (iParam0 > Global_1944768.f_5[iVar0 /*53*/].f_1)
		{
			func_353(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944768++;
	if (Global_1944768 > 5)
	{
		Global_1944768 = 5;
		return Global_1944768;
	}
	return (Global_1944768 - 1);
}

void func_353(int iParam0)//Position - 0x1030B
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944768.f_5[iVar0 /*53*/] = { Global_1944768.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_354()//Position - 0x10344
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_355(char* sParam0)//Position - 0x10355
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_356(char* sParam0)//Position - 0x10380
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_357(&cVar0);
}

var func_357(char[4] cParam0)//Position - 0x103A4
{
	return cParam0;
}

int func_358(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x103AE
{
	int iVar0;
	int iVar1;
	
	if (!func_14(iParam0))
	{
		return 1;
	}
	if (func_155(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_112316[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_155(PLAYER::PLAYER_ID()) || (func_389() && func_388())) && !BitTest(Global_2794162.f_4697, 31)) && !bParam4)
	{
		iVar1 = func_387();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_6(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_112316[iParam1] != -1)
							{
								return func_390(iParam1, iParam0, 0);
							}
							else
							{
								return func_370(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_370(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_112316[iParam1] != -1)
				{
					return func_390(iParam1, iParam0, 0);
				}
				else
				{
					return func_359(0, -1, 0);
				}
			}
			else
			{
				return func_359(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_112316[iParam1] != -1)
		{
			return func_390(iParam1, iParam0, 0);
		}
		else
		{
			return func_370(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_370(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_359(bool bParam0, int iParam1, bool bParam2)//Position - 0x10599
{
	return func_360(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_360(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x105AF
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_369() || (func_368() && func_366())) && Global_1665516.f_1)
	{
		if (bParam1)
		{
			return func_365(iParam2, iVar0);
		}
		else
		{
			return func_365(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_152(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_364(1);
				}
				else
				{
					return func_364(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_361(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_361(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_364(1);
	}
	return func_364(0);
}

int func_361(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x106B1
{
	int iVar0;
	
	iVar0 = func_363(iParam0, iParam1, iParam3);
	if (func_362(Global_4718592.f_117591, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
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
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_362(int iParam0, bool bParam1)//Position - 0x107C9
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_171044 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9658[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_363(int iParam0, int iParam1, int iParam2)//Position - 0x1081A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_152(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_364(bool bParam0)//Position - 0x10862
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_365(int iParam0, int iParam1)//Position - 0x10879
{
	if (iParam0 == -1)
	{
		iParam0 = func_363(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_366()//Position - 0x108C7
{
	if (func_367())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_175236, 4);
}

bool func_367()//Position - 0x108E6
{
	return BitTest(Global_4718592.f_164769, 12);
}

bool func_368()//Position - 0x108FB
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_175236, 0);
	}
	return ((BitTest(Global_4718592.f_175236, 0) || Global_1927347) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_369()//Position - 0x10942
{
	if (func_367() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_370(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x1095F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853988[iVar2 /*867*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_375())
			{
				iVar3 = func_374(iParam0);
				if (!iVar3 == -1)
				{
					return func_372(iVar3);
				}
			}
			if ((func_193(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((func_152(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return func_364(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return func_371(1);
			}
			else
			{
				return func_360(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836600 || Global_1836590) || Global_1853988[iParam0 /*867*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836600 == 1 && Global_1836610 == 0))
			{
				return func_364(1);
			}
			else
			{
				return func_360(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836594 && Global_1836080.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_374(iParam0);
	if (!iVar4 == -1)
	{
		return func_372(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_371(bool bParam0)//Position - 0x10AF7
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_372(int iParam0)//Position - 0x10B0E
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_373(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_373(int iParam0)//Position - 0x10BD1
{
	return Global_2648711.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_374(int iParam0)//Position - 0x10BE8
{
	if (func_14(iParam0))
	{
		if (func_15(iParam0, 1))
		{
			return Global_2648711.f_818.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_375()//Position - 0x10C18
{
	if (((((((func_386() || func_385()) || func_186()) || func_384()) || func_383()) || func_381()) || func_379()) || func_376())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_376()//Position - 0x10C8A
{
	return func_377(Global_4718592.f_117591);
}

int func_377(int iParam0)//Position - 0x10CA0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_378(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_378(int iParam0)//Position - 0x10CCA
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33923 /* Tunable: 1597065378 */[iParam0];
	}
	return -1;
}

int func_379()//Position - 0x10CE9
{
	return func_380(Global_4718592.f_117591);
}

int func_380(int iParam0)//Position - 0x10CFF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31922[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_381()//Position - 0x10D2E
{
	return func_382(Global_4718592.f_117591);
}

int func_382(int iParam0)//Position - 0x10D44
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31258[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_383()//Position - 0x10D7E
{
	return Global_2683883.f_24;
}

var func_384()//Position - 0x10D8C
{
	return Global_2683883.f_21;
}

var func_385()//Position - 0x10D9A
{
	return Global_2683883.f_18;
}

var func_386()//Position - 0x10DA8
{
	return Global_2683883.f_17;
}

var func_387()//Position - 0x10DB6
{
	return Global_2621446.f_2;
}

var func_388()//Position - 0x10DC4
{
	return BitTest(Global_2621446, 4);
}

var func_389()//Position - 0x10DD2
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

int func_390(int iParam0, int iParam1, bool bParam2)//Position - 0x10DEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058071.f_14[iParam0];
	if (func_375())
	{
		iVar2 = func_374(iParam1);
		if (!iVar2 == -1)
		{
			return func_372(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_1816[iParam0 /*24279*/].f_8104[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
	{
		if (Global_4718592.f_112316[iParam0] != -1 && Global_4718592.f_112316[iParam0] <= 4)
		{
			if (Global_4718592.f_112316[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_112316[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_112316[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_112316[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_112316[iParam0];
			}
		}
		else
		{
			iVar0 = func_360(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = func_391(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !func_152(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_371(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_391(int iParam0)//Position - 0x10F6C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_171203;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_171204;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_171205;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_171206;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_392(char* sParam0, char* sParam1, int iParam2)//Position - 0x11041
{
	if (!MISC::ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		if (!BitTest(iLocal_284, 0))
		{
			func_497(&uLocal_304, 3, 0, sParam1, 0, 1);
			if (func_394(&uLocal_304, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				MISC::SET_BIT(&iLocal_284, 0);
			}
		}
		else if (!BitTest(iLocal_284, 1))
		{
			if (func_393(0))
			{
				MISC::SET_BIT(&iLocal_284, 1);
			}
		}
		else if (!func_393(0))
		{
			iLocal_284 = 0;
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0)//Position - 0x110B8
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

int func_394(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1110F
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_495())
	{
		return 0;
	}
	if (func_494())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_395(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_395(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x11154
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_493(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_492(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_487(uParam6))
	{
		return 0;
	}
	if (func_484(iVar0, iVar1, iVar2))
	{
		if (func_483())
		{
			return 0;
		}
		func_482();
		return func_402(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_401(iParam4))
	{
		return 0;
	}
	func_396(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_396(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0x11239
{
	Global_1649067.f_40.f_1 = iParam0;
	Global_1649067.f_40.f_2 = iParam1;
	Global_1649067.f_40.f_3 = iParam2;
	StringCopy(&(Global_1649067.f_40.f_4), sParam3, 16);
	Global_1649067.f_40.f_8 = iParam4;
	Global_1649067.f_40.f_9 = iParam5;
	Global_1649067.f_40.f_14 = uParam6;
	func_397(iParam4);
	func_482();
	Global_1649067.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_397(int iParam0)//Position - 0x112A6
{
	if (func_400(iParam0))
	{
		func_399();
		return;
	}
	func_398();
}

void func_398()//Position - 0x112C2
{
	Global_1649067.f_40.f_10 = 0;
}

void func_399()//Position - 0x112D3
{
	Global_1649067.f_40.f_10 = 1;
}

int func_400(int iParam0)//Position - 0x112E4
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_401(int iParam0)//Position - 0x1132C
{
	return iParam0 > Global_1649067.f_40.f_8;
}

int func_402(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x1133F
{
	struct<2> Var0;
	
	func_481();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_478(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return func_475(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_478(uParam0, sParam3, sParam4);
		}
		return func_457(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_456(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_444(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_443(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_403(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_403(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x11439
{
	bool bVar0;
	
	func_442();
	bVar0 = true;
	if (func_405(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_404(120000);
		return 1;
	}
	return 0;
}

void func_404(int iParam0)//Position - 0x11470
{
	Global_1649067.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1649067.f_40.f_12 = 1;
}

int func_405(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x11493
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_436(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649067.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_435(sParam5, bParam6, &iVar3);
	uVar5 = func_433(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_432(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_409(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_408();
	}
	func_442();
	func_407();
	func_406();
	return 1;
}

void func_406()//Position - 0x115DC
{
	Global_1649067.f_57 = 0;
	Global_1649067.f_57.f_1 = 0;
}

void func_407()//Position - 0x115F4
{
	Global_1649067.f_40 = 3;
}

void func_408()//Position - 0x11603
{
	MISC::SET_BIT(&Global_8370, 8);
}

int func_409(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x11614
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_410(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9077 = iParam6;
			MISC::SET_BIT(&Global_4542302, 0);
		}
		return 1;
	}
	return 0;
}

int func_410(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x11680
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_425();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20500 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20500 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20500 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4542287 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_424() == 0)
	{
		func_422();
		return 0;
	}
	func_421(Global_4542286);
	StringCopy(&(Global_4541037[Global_4542286 /*104*/]), sParam1, 64);
	Global_4541037[Global_4542286 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4541037[Global_4542286 /*104*/].f_24 = iParam2;
	}
	Global_4541037[Global_4542286 /*104*/].f_25 = iParam7;
	Global_4541037[Global_4542286 /*104*/].f_26 = uParam8;
	Global_4541037[Global_4542286 /*104*/].f_29 = uParam9;
	Global_4541037[Global_4542286 /*104*/].f_30 = uParam12;
	Global_4541037[Global_4542286 /*104*/].f_31 = uParam11;
	Global_4541037[Global_4542286 /*104*/].f_28 = 0;
	Global_4541037[Global_4542286 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_33), sParam4, 64);
	Global_4541037[Global_4542286 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_50), sParam5, 64);
	Global_4541037[Global_4542286 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4541037[Global_4542286 /*104*/].f_83), sParam15, 64);
	func_425();
	switch (iParam16)
	{
		case 3:
			Global_4541037[Global_4542286 /*104*/].f_99[Global_20500] = 1;
			break;
		
		case 0:
			Global_4541037[Global_4542286 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4541037[Global_4542286 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4541037[Global_4542286 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20500)
		{
			case 0:
				func_420(0);
				break;
			
			case 1:
				func_420(1);
				break;
			
			case 2:
				func_420(2);
				break;
			
			case 3:
				func_420(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4542287 = 1;
				break;
			
			case 0:
				Global_4542287 = 1;
				break;
			
			case 2:
				Global_4542287 = 1;
				break;
			
			case 1:
				Global_4542287 = 1;
				break;
			}
	}
	Global_22914[Global_4542286] = 0;
	if (bParam10)
	{
		func_425();
		if (Global_20443)
		{
			StringCopy(&Global_20489, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20500)
			{
				case 0:
					StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_419())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, true);
			}
		}
	}
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_418(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_415(1);
			func_418(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1978329 != -1 && iParam0 == Global_1978329)
	{
		bVar1 = true;
	}
	func_411(iParam0, sParam1, bVar1, func_414(PLAYER::PLAYER_ID()));
	return 1;
}

void func_411(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x11A6D
{
	struct<14> Var0;
	
	if (!func_412())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1978312.f_7;
	Var0.f_7 = Global_1978312.f_8;
	Var0.f_8 = Global_1978312.f_9;
	Var0.f_9 = Global_1978312.f_10;
	Var0.f_10 = Global_1978312.f_11;
	Var0.f_11 = Global_1978312.f_12;
	Var0.f_12 = Global_1978312.f_13;
	Var0.f_13 = Global_1978312.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1978329 = -1;
	}
}

int func_412()//Position - 0x11B08
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (func_413(PLAYER::PLAYER_ID()))
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

bool func_413(int iParam0)//Position - 0x11B6B
{
	return func_44(iParam0, 20);
}

var func_414(int iParam0)//Position - 0x11B7B
{
	return Global_1853988[iParam0 /*867*/].f_205.f_6;
}

void func_415(int iParam0)//Position - 0x11B90
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
	
	Global_22913 = 0;
	Global_8975 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8939[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_286(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8377[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8377[iVar1 /*15*/].f_4)
					{
						if (Global_8939[iVar0] == 0)
						{
							Global_8903[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8371, 3))
								{
									iVar2 = 42;
									Global_20708 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20708 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_417(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2694571)
							{
								if (iVar1 == 14)
								{
									func_416(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8939[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8377[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8377[iVar1 /*15*/].f_4)
					{
						if (Global_8939[iVar0] == 0)
						{
							Global_8903[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113810.f_14144[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113810.f_14144[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113810.f_14144[iVar3 /*104*/].f_99[Global_20500] == 1)
											{
												Global_22913++;
											}
										}
									}
									iVar3++;
								}
								func_416(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22913), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78689)
								{
									iVar4 = 0;
									iVar4 = Global_4541036;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4541037[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4541037[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4541037[iVar5 /*104*/].f_99[Global_20500] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_416(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20500)
									{
										case 0:
											iVar6 = Global_44580;
											break;
										
										case 1:
											iVar6 = Global_44581;
											break;
										
										case 2:
											iVar6 = Global_44582;
											break;
										
										default:
											break;
									}
									func_416(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_416(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_417(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8376);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8371, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_417(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8371, 3))
								{
									iVar8 = 42;
									Global_20708 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20708 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_417(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_417(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8377[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8371, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_417(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8377[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890239.f_1;
								func_416(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_416(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8939[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_416(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x1212A
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
		func_417(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_417(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_417(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_417(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_417(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_417(char* sParam0)//Position - 0x121DD
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_418(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x121EF
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

bool func_419()//Position - 0x12252
{
	return Global_1575063;
}

void func_420(int iParam0)//Position - 0x1225E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113810.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_421(int iParam0)//Position - 0x1227D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4541037[iParam0 /*104*/].f_18 = iVar0;
	Global_4541037[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4541037[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4541037[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4541037[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4541037[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_422()//Position - 0x122FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4542286 = 11;
	Global_4541037[Global_4542286 /*104*/].f_18 = -1;
	Global_4541037[Global_4542286 /*104*/].f_18.f_1 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_2 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_3 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_423(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18))
		{
			Global_4542286 = iVar2;
		}
		iVar2++;
	}
	Global_4541037[Global_4542286 /*104*/].f_24 = 1;
}

int func_423(struct<6> Param0, struct<6> Param6)//Position - 0x123A7
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

int func_424()//Position - 0x12492
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4541037[iVar2 /*104*/].f_24 == 0)
		{
			Global_4542286 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4542286 = 11;
	Global_4541037[Global_4542286 /*104*/].f_18 = -1;
	Global_4541037[Global_4542286 /*104*/].f_18.f_1 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_2 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_3 = 0;
	Global_4541037[Global_4542286 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4541037[iVar2 /*104*/].f_24 == 0 || Global_4541037[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_423(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18))
			{
				Global_4542286 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4542286 == 11)
	{
		return 0;
	}
	Global_4541037[Global_4542286 /*104*/].f_99[0] = 0;
	Global_4541037[Global_4542286 /*104*/].f_99[1] = 0;
	Global_4541037[Global_4542286 /*104*/].f_99[2] = 0;
	return 1;
}

void func_425()//Position - 0x125BD
{
	if (func_286(14))
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
		Global_20500 = func_426();
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

var func_426()//Position - 0x1265F
{
	func_427();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_427()//Position - 0x12678
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_430(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_429(PLAYER::PLAYER_PED_ID());
			if (func_428(iVar0) && (!func_286(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_428(Global_113810.f_2366.f_539.f_4321))
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

bool func_428(int iParam0)//Position - 0x12775
{
	return iParam0 < 3;
}

int func_429(int iParam0)//Position - 0x12781
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_430(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_430(int iParam0)//Position - 0x127BE
{
	if (func_428(iParam0))
	{
		return func_431(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_431(int iParam0)//Position - 0x127E3
{
	return Global_2058[iParam0 /*29*/];
}

int func_432(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x127F2
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_410(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9077 = iParam10;
			MISC::SET_BIT(&Global_4542302, 0);
		}
		return 1;
	}
	return 0;
}

int func_433(int iParam0, int iParam1)//Position - 0x12874
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_434(2, iParam1);
	return iParam0;
}

void func_434(int iParam0, var uParam1)//Position - 0x12893
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_435(char* sParam0, bool bParam1, int iParam2)//Position - 0x12944
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_434(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_436(int iParam0)//Position - 0x12981
{
	int iVar0;
	
	iVar0 = func_439(iParam0);
	if (iVar0 == -1)
	{
		func_437(iParam0, 1);
		return 0;
	}
	Global_1666485[iVar0 /*5*/].f_4 = 1;
	return Global_1666485[iVar0 /*5*/].f_2;
}

void func_437(int iParam0, bool bParam1)//Position - 0x129B7
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_439(iParam0) != -1)
	{
		return;
	}
	if (Global_1666648)
	{
		if (iParam0 == Global_1666648.f_1)
		{
			return;
		}
	}
	if (func_438(iParam0))
	{
		return;
	}
	if (Global_1666686 >= 32)
	{
		return;
	}
	Global_1666653[Global_1666686] = iParam0;
	Global_1666686++;
	if (bParam1)
	{
	}
}

int func_438(int iParam0)//Position - 0x12A23
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666686)
	{
		if (Global_1666653[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_439(int iParam0)//Position - 0x12A55
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1666646 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1666646)
	{
		if (Global_1666485[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1666485[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_440(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_440(int iParam0)//Position - 0x12AD4
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1666646)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1666485[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1666485[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1666485[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1666485[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1666646)
	{
		Global_1666485[iVar32 /*5*/] = { Global_1666485[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_441(&(Global_1666485[iVar32 /*5*/]));
	Global_1666646 = (Global_1666646 - 1);
}

void func_441(var uParam0)//Position - 0x12B8A
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_442()//Position - 0x12BB7
{
	Global_1649067.f_40.f_9 = 4;
}

int func_443(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x12BC8
{
	bool bVar0;
	
	func_442();
	bVar0 = false;
	return func_405(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_444(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x12BEF
{
	bool bVar0;
	
	bVar0 = false;
	return func_445(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_445(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x12C12
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_436(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1649067.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22906 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_435(sParam5, bParam6, &iVar3);
	uVar5 = func_433(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_455(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_447(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_408();
	}
	func_446();
	func_407();
	func_406();
	return 1;
}

void func_446()//Position - 0x12D60
{
	Global_1649067.f_40.f_9 = 3;
}

int func_447(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x12D71
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8370, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_449(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9077 = iParam6;
			Global_8980[3 /*6*/] = { func_448(iParam0) };
			Global_9057 = iParam0;
			MISC::SET_BIT(&Global_8370, 1);
			MISC::SET_BIT(&Global_8370, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_448(int iParam0)//Position - 0x12E00
{
	return Global_2058[iParam0 /*29*/].f_3;
}

int func_449(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x12E13
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_425();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20500 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20500 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20500 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_113810.f_14054[Global_20500 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_454() == 0)
	{
		func_452();
		return 0;
	}
	func_451(Global_22912);
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/]), sParam1, 64);
	Global_113810.f_14144[Global_22912 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113810.f_14144[Global_22912 /*104*/].f_24 = iParam2;
	}
	Global_113810.f_14144[Global_22912 /*104*/].f_25 = iParam7;
	Global_113810.f_14144[Global_22912 /*104*/].f_26 = uParam8;
	Global_113810.f_14144[Global_22912 /*104*/].f_29 = uParam9;
	Global_113810.f_14144[Global_22912 /*104*/].f_30 = uParam12;
	Global_113810.f_14144[Global_22912 /*104*/].f_31 = uParam11;
	Global_113810.f_14144[Global_22912 /*104*/].f_28 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_33), sParam4, 64);
	Global_113810.f_14144[Global_22912 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_50), sParam5, 64);
	Global_113810.f_14144[Global_22912 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113810.f_14144[Global_22912 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8370, 10))
	{
		Global_113810.f_14144[Global_22912 /*104*/].f_99[0] = 1;
		Global_113810.f_14144[Global_22912 /*104*/].f_99[1] = 1;
		Global_113810.f_14144[Global_22912 /*104*/].f_99[2] = 1;
		Global_9076 = 4;
		func_420(0);
		func_420(2);
		func_420(1);
	}
	else
	{
		func_425();
		switch (iParam16)
		{
			case 3:
				Global_113810.f_14144[Global_22912 /*104*/].f_99[Global_20500] = 1;
				break;
			
			case 0:
				Global_113810.f_14144[Global_22912 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113810.f_14144[Global_22912 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113810.f_14144[Global_22912 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20500)
			{
				case 0:
					func_420(0);
					Global_9076 = 0;
					break;
				
				case 1:
					func_420(1);
					Global_9076 = 1;
					break;
				
				case 2:
					func_420(2);
					Global_9076 = 2;
					break;
				
				case 3:
					func_420(3);
					Global_9076 = 3;
					break;
				
				default:
					Global_9076 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8370, 10))
		{
			Global_113810.f_14054[0 /*20*/].f_17 = 1;
			Global_113810.f_14054[1 /*20*/].f_17 = 1;
			Global_113810.f_14054[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113810.f_14054[Global_20500 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113810.f_14054[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113810.f_14054[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113810.f_14054[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22914[Global_22912] = 0;
	if (bParam10)
	{
		func_425();
		if (Global_20443)
		{
			StringCopy(&Global_20489, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20500)
			{
				case 0:
					StringCopy(&Global_20489, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20489, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20489, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20489, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_9175[Global_20500 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_419())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, true);
			}
		}
	}
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_418(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_415(1);
			func_418(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1978329 != -1 && iParam0 == Global_1978329)
	{
		bVar1 = true;
	}
	func_450(iParam0, sParam1, bVar1, func_414(PLAYER::PLAYER_ID()));
	return 1;
}

void func_450(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x132EE
{
	struct<14> Var0;
	
	if (!func_412())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1978312.f_7;
	Var0.f_7 = Global_1978312.f_8;
	Var0.f_8 = Global_1978312.f_9;
	Var0.f_9 = Global_1978312.f_10;
	Var0.f_10 = Global_1978312.f_11;
	Var0.f_11 = Global_1978312.f_12;
	Var0.f_12 = Global_1978312.f_13;
	Var0.f_13 = Global_1978312.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1978329 = -1;
	}
}

void func_451(int iParam0)//Position - 0x13389
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_113810.f_14144[iParam0 /*104*/].f_18 = iVar0;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113810.f_14144[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_452()//Position - 0x1341B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78689)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22912 = 34;
	Global_113810.f_14144[Global_22912 /*104*/].f_18 = -1;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_1 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_2 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_3 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_453(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18))
		{
			Global_22912 = iVar2;
		}
		iVar2++;
	}
	Global_113810.f_14144[Global_22912 /*104*/].f_24 = 1;
}

int func_453(struct<6> Param0, struct<6> Param6)//Position - 0x134E6
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

int func_454()//Position - 0x135D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78689)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113810.f_14144[iVar2 /*104*/].f_24 == 0)
		{
			Global_22912 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22912 = 34;
	Global_113810.f_14144[Global_22912 /*104*/].f_18 = -1;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_1 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_2 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_3 = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113810.f_14144[iVar2 /*104*/].f_24 == 0 || Global_113810.f_14144[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_453(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18))
			{
				Global_22912 = iVar2;
			}
		}
		if (Global_113810.f_14144[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22912 == 34)
	{
		return 0;
	}
	Global_113810.f_14144[Global_22912 /*104*/].f_99[0] = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_99[1] = 0;
	Global_113810.f_14144[Global_22912 /*104*/].f_99[2] = 0;
	return 1;
}

int func_455(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x13739
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8370, 10);
	iVar0 = 3;
	if (func_449(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9077 = iParam10;
			Global_8980[3 /*6*/] = { func_448(iParam0) };
			Global_9057 = iParam0;
			StringCopy(&Global_9058, sParam5, 64);
			MISC::SET_BIT(&Global_8370, 1);
			MISC::SET_BIT(&Global_8370, 7);
		}
		return 1;
	}
	return 0;
}

int func_456(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x137E5
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_446();
	bVar0 = true;
	if (func_445(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_404(120000);
		return 1;
	}
	return 0;
}

int func_457(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0x13837
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_474(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_463(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_462(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_461(1);
		}
		func_460();
		func_407();
		func_459();
		func_458();
		return 1;
	}
	return 0;
}

void func_458()//Position - 0x138CE
{
	Global_2804285 = 0;
}

void func_459()//Position - 0x138DB
{
	Global_1649067.f_57 = 1;
	Global_1649067.f_57.f_1 = 0;
}

void func_460()//Position - 0x138F3
{
	Global_1649067.f_40.f_9 = 1;
}

void func_461(int iParam0)//Position - 0x13904
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8372, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8372, 0);
	}
}

void func_462(int iParam0)//Position - 0x13925
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8370, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8370, 20);
	}
}

int func_463(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x13948
{
	func_473(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21893 = 0;
	Global_21852 = 1;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_21850 = 0;
	Global_21897 = 0;
	Global_21899 = 0;
	Global_2883585 = 0;
	return func_464(sParam3, iParam4, bParam7);
}

int func_464(char* sParam0, int iParam1, bool bParam2)//Position - 0x13996
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
					func_472();
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
		if (func_471(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_470();
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
				func_425();
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
				if (func_469())
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
			if (func_468())
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
			func_467();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_466();
		func_465();
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
		func_472();
	}
	return 0;
}

void func_465()//Position - 0x13C64
{
	if (!func_412())
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

void func_466()//Position - 0x13C9B
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

void func_467()//Position - 0x13CCC
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

int func_468()//Position - 0x13D61
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_469()//Position - 0x13D88
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

void func_470()//Position - 0x13E21
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

bool func_471(int iParam0, int iParam1)//Position - 0x13E78
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

void func_472()//Position - 0x13EB0
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

void func_473(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x13F07
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

int func_474(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x13F5D
{
	func_473(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21893 = 1;
	Global_21852 = 1;
	Global_21859 = 0;
	Global_21854 = 0;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_21850 = 0;
	Global_21897 = 0;
	Global_21899 = 0;
	Global_2883585 = 0;
	return func_464(sParam3, iParam4, bParam7);
}

int func_475(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x13FAB
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_477(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_476();
		func_460();
		func_407();
		func_459();
		func_458();
		return 1;
	}
	return 0;
}

void func_476()//Position - 0x13FFD
{
	Global_22863 = 0;
}

bool func_477(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x1400C
{
	func_473(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21893 = 0;
	Global_21852 = 1;
	Global_21859 = 0;
	Global_21854 = 1;
	Global_22836 = 0;
	Global_22838 = 0;
	Global_22842 = 0;
	Global_21850 = 0;
	Global_21897 = 1;
	Global_21899 = 0;
	StringCopy(&Global_21993, sParam5, 24);
	Global_2883585 = 0;
	return func_464(sParam3, iParam4, bParam8);
}

int func_478(var uParam0, char* sParam1, char* sParam2)//Position - 0x14061
{
	if (func_480(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_479();
		func_407();
		func_459();
		return 1;
	}
	return 0;
}

void func_479()//Position - 0x1408C
{
	Global_1649067.f_40.f_9 = 2;
}

bool func_480(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1409D
{
	func_473(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_464(sParam2, iParam3, 0);
}

void func_481()//Position - 0x140EB
{
	Global_1649067.f_55 = Global_1649067.f_40.f_1;
	Global_1649067.f_55.f_1 = Global_1649067.f_40.f_10;
}

void func_482()//Position - 0x14111
{
	Global_1649067.f_40 = 1;
}

bool func_483()//Position - 0x14120
{
	return Global_1649067.f_40 == 1;
}

int func_484(int iParam0, int iParam1, int iParam2)//Position - 0x14130
{
	if (!func_485(iParam0))
	{
		return 0;
	}
	if (Global_1649067.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1649067.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_485(int iParam0)//Position - 0x1416F
{
	if (!func_486())
	{
		return 0;
	}
	if (!Global_1649067.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_486()//Position - 0x14197
{
	if (Global_1649067.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_487(var uParam0)//Position - 0x141AE
{
	if (func_491())
	{
		return 0;
	}
	if (func_490())
	{
		return 0;
	}
	if (func_393(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935879 || func_489())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_488())
		{
			return 0;
		}
	}
	return 1;
}

bool func_488()//Position - 0x1420F
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1665432);
}

int func_489()//Position - 0x14223
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_490()//Position - 0x1423B
{
	return Global_1649067.f_40 == 3;
}

bool func_491()//Position - 0x1424B
{
	return func_468();
}

int func_492(int iParam0, int iParam1, int iParam2)//Position - 0x14257
{
	if (!func_490())
	{
		return 0;
	}
	return func_484(iParam0, iParam1, iParam2);
}

int func_493(char* sParam0, char* sParam1)//Position - 0x14275
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_494()//Position - 0x1428F
{
	return Global_2801145.f_1;
}

int func_495()//Position - 0x1429D
{
	if (Global_1649255.f_2)
	{
		return 1;
	}
	return func_496();
}

bool func_496()//Position - 0x142B6
{
	return func_491();
}

void func_497(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x142C2
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

int func_498(int iParam0)//Position - 0x1435D
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_499(var uParam0)//Position - 0x1437A
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

void func_500(var uParam0)//Position - 0x143A3
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_501(uParam0, 0, 0);
		}
	}
}

void func_501(var uParam0, bool bParam1, bool bParam2)//Position - 0x143C2
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

void func_502()//Position - 0x14407
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_62.f_10[iLocal_295 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_62.f_10[iLocal_295 /*7*/]), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_5(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_62.f_10[iLocal_295 /*7*/]), true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50625f))
			{
				if (!BitTest(iLocal_279, 4))
				{
					MISC::SET_BIT(&iLocal_279, 4);
				}
			}
			else if (!BitTest(iLocal_279, 5))
			{
				if (Local_62.f_42 != -1)
				{
					if (iLocal_295 == Local_62.f_42)
					{
						if (!BitTest(iLocal_279, 5))
						{
							MISC::SET_BIT(&iLocal_279, 5);
						}
					}
				}
			}
		}
	}
	func_503(iLocal_295);
	iLocal_295++;
	if (iLocal_295 >= func_498(iLocal_285))
	{
		if ((!BitTest(iLocal_279, 4) && BitTest(Local_62.f_1, 8)) || BitTest(iLocal_279, 5))
		{
			if (!BitTest(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
			{
				MISC::SET_BIT(&(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
			}
		}
		else if (BitTest(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
		{
			MISC::CLEAR_BIT(&(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
		}
		MISC::CLEAR_BIT(&iLocal_279, 4);
		MISC::CLEAR_BIT(&iLocal_279, 5);
		iLocal_295 = 0;
	}
}

void func_503(int iParam0)//Position - 0x1453B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar2 = 0;
	Var3 = { 0f, 0f, 0f };
	bVar6 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_62.f_10[iParam0 /*7*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]);
		if (iLocal_285 == 0)
		{
			if (PLAYER::PLAYER_ID() == iLocal_287)
			{
				if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_62.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar6 = true;
					}
				}
			}
		}
		if (PLAYER::PLAYER_ID() == iLocal_286)
		{
			if (BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!BitTest(iLocal_280[iParam0], 0))
				{
					MISC::SET_BIT(&Global_1835490, 0);
					MISC::SET_BIT(&(iLocal_280[iParam0]), 0);
				}
				if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!BitTest(iLocal_280[iParam0], 1))
					{
						bVar6 = true;
					}
				}
				else if (BitTest(iLocal_280[iParam0], 1))
				{
					MISC::CLEAR_BIT(&(iLocal_280[iParam0]), 1);
				}
			}
		}
		if (bVar6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_62.f_10[iParam0 /*7*/]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_62.f_10[iParam0 /*7*/]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_62.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_62.f_10[iParam0 /*7*/]))
		{
			if (PLAYER::PLAYER_ID() == iLocal_286)
			{
				if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 9) && !BitTest(iLocal_280[iParam0], 1))
				{
					if (NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(iVar0, PLAYER::PLAYER_ID()))
					{
						switch (Local_62.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_526(iVar0, 3);
								break;
						}
						MISC::SET_BIT(&(iLocal_280[iParam0]), 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !PED::IS_PED_INJURED(iVar0))
			{
				switch (Local_62.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						PED::SET_PED_RESET_FLAG(iVar0, 187, true);
						if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 3))
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 3f);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
								}
							}
						}
						if (PLAYER::PLAYER_ID() == iLocal_287 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_287), true), 25f))
						{
							MISC::SET_BIT(&(Global_2794162.f_4695), 0);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2794162.f_4695), 0);
						}
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_RESPONDING_TO_EVENT(iVar0, 29))
							{
								if (func_6(iLocal_287, 1, 1))
								{
									if (!BitTest(Local_62.f_2, 13))
									{
										if (func_525(iLocal_287) && !PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::GET_PLAYER_PED(iLocal_287)))
										{
											if (!func_524(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
											{
												if (func_523(iVar0))
												{
													iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_287), false);
													if (ENTITY::DOES_ENTITY_EXIST(iVar1))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
														{
														}
														if (!VEHICLE::IS_SEAT_WARP_ONLY(iVar1, func_522(PLAYER::GET_PLAYER_PED(iLocal_287), 0)))
														{
															TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, func_521(PLAYER::GET_PLAYER_PED(iLocal_287), iVar1), func_520(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_287)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
										{
											if (func_524(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
											{
												TASK::CLEAR_PED_TASKS(iVar0);
											}
											if (!func_524(iVar0, joaat("SCRIPT_TASK_GO_TO_ENTITY")))
											{
												if (func_523(iVar0))
												{
													TASK::TASK_GO_TO_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(iLocal_287), -1, 0f, func_520(iParam0), 2f, 0);
												}
											}
											else
											{
												PED::SET_PED_RESET_FLAG(iVar0, 151, true);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (PLAYER::PLAYER_ID() == iLocal_287 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_287), true), 25f))
						{
							MISC::SET_BIT(&(Global_2794162.f_4695), 0);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2794162.f_4695), 0);
						}
						if (PLAYER::PLAYER_ID() == iLocal_287)
						{
							if (!BitTest(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									if ((func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) && (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::PLAYER_PED_ID()))
									{
										iVar2 = func_518(PLAYER::PLAYER_ID());
										fVar7 = (SYSTEM::TO_FLOAT(Global_262145.f_7193 /* Tunable: MUGGER_AMOUNT_STEAL */) / 100f);
										iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) * fVar7));
										iVar8 = func_414(PLAYER::PLAYER_ID());
										if (iVar8 > 100)
										{
											iVar8 = 100;
										}
										if (iVar2 > (iVar8 * Global_262145.f_7194 /* Tunable: MUGGER_STEAL_CAP */))
										{
											iVar2 = (iVar8 * Global_262145.f_7194 /* Tunable: MUGGER_STEAL_CAP */);
										}
										if (iVar2 > 0)
										{
											MISC::SET_BIT(&iLocal_279, 16);
										}
										TASK::SET_HIGH_FALL_TASK(PLAYER::PLAYER_PED_ID(), 5000, 10000, 4);
										if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_287)))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iVar0, true) };
											Var3 = { func_517(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Var3, 0f, 0f, 0.5f, 0, false, true, true, false, true);
										}
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
										if (((PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) || PED::IS_PED_JACKING(iVar0)) && func_515(iVar0)) && func_522(iVar0, 0) == -1)
										{
											PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, true);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(iVar0);
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 10000f, -1, true, false);
										}
										Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
										}
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837223);
										MISC::SET_BIT(&(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 0);
										MISC::SET_BIT(&(Global_2794162.f_4695), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (PED::GET_PED_RESET_FLAG(iVar0, 187))
						{
							PED::SET_PED_RESET_FLAG(iVar0, 187, false);
						}
						if (Local_62.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 4))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								PED::SET_PED_CONFIG_FLAG(iVar0, 118, true);
							}
						}
						if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_287)))
						{
							if (!PED::IS_PED_FLEEING(iVar0))
							{
								if (func_523(iVar0))
								{
									if ((PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) || PED::IS_PED_JACKING(iVar0)) && !BitTest(Local_62.f_2, 10))
									{
										if (!func_524(iVar0, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) && !func_524(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")))
										{
											if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
											{
												iVar9 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
												iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
												if (BitTest(Local_62.f_2, 13))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar10))
												{
													TASK::TASK_HELI_MISSION(iVar0, iVar9, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar10))
												{
													TASK::TASK_PLANE_MISSION(iVar0, iVar9, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 1.12E-43f, 1.12E-43f, true);
												}
												else if (ENTITY::GET_ENTITY_MODEL(iVar9) == joaat("taxi") || func_514(iVar9, 1))
												{
													PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_287), 10000f, -1, true, false);
												}
												else
												{
													TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, PED::GET_VEHICLE_PED_IS_IN(iVar0, true), 60f, 786468);
												}
											}
										}
									}
									else if (!func_524(iVar0, joaat("SCRIPT_TASK_SMART_FLEE_PED")))
									{
										if (func_6(iLocal_287, 1, 1))
										{
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_287), 10000f, -1, true, false);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_512(Local_62.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (BitTest(Local_62.f_2, 13))
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_62.f_10[iParam0 /*7*/]), 1, false);
				}
				func_504(iVar0);
			}
		}
	}
}

void func_504(int iParam0)//Position - 0x14D88
{
	int iVar0;
	int iVar1;
	
	if (BitTest(iLocal_279, 16))
	{
		iVar0 = Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3;
		iVar1 = func_505(iVar0);
		if (iVar1 == 1)
		{
			MISC::CLEAR_BIT(&iLocal_279, 15);
			MISC::CLEAR_BIT(&iLocal_279, 16);
			if (!func_57())
			{
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iVar0, false, false, 0);
			}
			if (iVar0 > Global_262145.f_8701 /* Tunable: MUGGER_CASH_DROP_CAP */)
			{
				iVar0 = Global_262145.f_8701 /* Tunable: MUGGER_CASH_DROP_CAP */;
			}
			PED::SET_PED_MONEY(iParam0, iVar0);
			MISC::SET_BIT(&(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			MISC::CLEAR_BIT(&iLocal_279, 15);
			MISC::CLEAR_BIT(&iLocal_279, 16);
			MISC::SET_BIT(&(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_505(int iParam0)//Position - 0x14E32
{
	if (func_57())
	{
		if (func_508(iParam0))
		{
			if (func_507(iLocal_488) == 2)
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_506(iLocal_488));
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iParam0, false, false, 0);
				func_331(iLocal_488);
				return 1;
			}
			else
			{
				func_331(iLocal_488);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_506(int iParam0)//Position - 0x14E8B
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_507(int iParam0)//Position - 0x14EB2
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_508(int iParam0)//Position - 0x14EDB
{
	if (!BitTest(iLocal_279, 15))
	{
		func_329(&iLocal_488, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"), iParam0, 4, 3);
		func_511(&uLocal_489, 0, 0);
		MISC::SET_BIT(&iLocal_279, 15);
	}
	else if (func_510(iLocal_488) || func_509(&uLocal_489, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_509(var uParam0, int iParam1, bool bParam2)//Position - 0x14F42
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_501(uParam0, bParam2, 0);
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

int func_510(int iParam0)//Position - 0x14FA0
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_511(var uParam0, bool bParam1, bool bParam2)//Position - 0x14FCB
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

void func_512(int iParam0, bool bParam1)//Position - 0x15008
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
		{
			if (!func_513(iParam0))
			{
				if (BitTest(Local_62.f_2, 13))
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iParam0));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, false);
				}
				else
				{
					if (bParam1)
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iParam0));
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, true);
				}
			}
		}
		func_255(&iParam0);
	}
}

int func_513(int iParam0)//Position - 0x15095
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_514(int iParam0, bool bParam1)//Position - 0x150B4
{
	if (Global_78689)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", 2))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "TestDrive"))
				{
					return DECORATOR::DECOR_GET_BOOL(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

int func_515(int iParam0)//Position - 0x15108
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
	}
	if (PED::IS_PED_JACKING(iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_525(iLocal_287))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_287), true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_516(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iVar0))
			{
				return 0;
			}
		}
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_516(int iParam0)//Position - 0x151A6
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_517(struct<3> Param0)//Position - 0x151E9
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_518(int iParam0)//Position - 0x15228
{
	var uVar0;
	
	uVar0 = func_519(iParam0);
	return uVar0;
}

int func_519(int iParam0)//Position - 0x1523A
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_307(iParam0))
		{
			return Global_1853988[iParam0 /*867*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_520(int iParam0)//Position - 0x1527D
{
	if (!BitTest(Local_62.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_521(int iParam0, int iParam1)//Position - 0x1529A
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_522(int iParam0, bool bParam1)//Position - 0x1530C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_523(int iParam0)//Position - 0x15391
{
	if ((!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_BEING_STUNNED(iParam0, 0)) && !PED::IS_PED_RAGDOLL(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_524(int iParam0, int iParam1)//Position - 0x153C1
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_525(int iParam0)//Position - 0x153EB
{
	if (PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_526(int iParam0, int iParam1)//Position - 0x15412
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}

void func_527()//Position - 0x15448
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = BitTest(Local_62.f_2, 6);
	bVar1 = BitTest(Local_62.f_2, 10);
	func_532();
	if (iLocal_285 != 1)
	{
		if (BitTest(Local_62.f_3, 12))
		{
			func_529();
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_296))
	{
		func_528(&iLocal_296);
	}
	iVar3 = 0;
	while (iVar3 < func_498(iLocal_285))
	{
		iLocal_280[iVar3] = 0;
		iVar3++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_62.f_42 = -1;
		Local_62.f_5 = iLocal_292;
		Local_62.f_6 = iLocal_292;
		Local_62.f_7 = iLocal_292;
		Local_62.f_1 = 0;
		Local_62.f_4 = 0;
		Local_62.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_498(iLocal_285))
		{
			bVar2 = BitTest(Local_62.f_10[iVar3 /*7*/].f_2, 6);
			Local_62.f_10[iVar3 /*7*/].f_2 = 0;
			Local_62.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				MISC::SET_BIT(&(Local_62.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1 = 0;
	Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
	iLocal_279 = 0;
	if (bVar0)
	{
		MISC::SET_BIT(&(Local_62.f_2), 6);
	}
	if (bVar1)
	{
		MISC::SET_BIT(&(Local_62.f_2), 11);
		MISC::SET_BIT(&iLocal_279, 8);
	}
	MISC::SET_BIT(&iLocal_279, 4);
	MISC::SET_BIT(&iLocal_279, 11);
}

void func_528(int* iParam0)//Position - 0x1557C
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_529()//Position - 0x155EE
{
	switch (iLocal_285)
	{
		case 0:
			func_531(&(Global_1837231[3]));
			break;
		
		case 1:
			func_530();
			break;
	}
}

void func_530()//Position - 0x1561F
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837183[iVar0], joaat("PRIVATE_SECURITY"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PRIVATE_SECURITY"), Global_1837183[iVar0]);
			iVar0++;
		}
	}
}

void func_531(var uParam0)//Position - 0x15665
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837183[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1837183[iVar0]);
			iVar0++;
		}
	}
}

void func_532()//Position - 0x156A7
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_498(iLocal_285))
	{
		bVar1 = false;
		if (iLocal_285 == 0)
		{
			if (!BitTest(Local_62.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_512(Local_62.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_533()//Position - 0x156EF
{
	func_534();
	if (iLocal_285 != 1)
	{
		func_502();
	}
}

void func_534()//Position - 0x15706
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_498(iLocal_285))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_62.f_10[iVar0 /*7*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_62.f_10[iVar0 /*7*/]))
			{
				iVar1 = NETWORK::NET_TO_PED(Local_62.f_10[iVar0 /*7*/]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					PED::SET_PED_RESET_FLAG(iVar1, 151, true);
				}
			}
		}
		iVar0++;
	}
	if (Global_2794162.f_1803)
	{
	}
	if (iLocal_285 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_287)
		{
			if (BitTest(Local_62.f_1, 0))
			{
				if (!MISC::IS_INCIDENT_VALID(iLocal_469))
				{
					if (func_6(iLocal_287, 1, 1))
					{
						if (Local_62.f_50)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(15, PLAYER::GET_PLAYER_PED(iLocal_287), 4, 0f, &iLocal_469, joaat("PRIVATE_SECURITY"), 0);
						}
						else if (Local_62.f_52)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(16, PLAYER::GET_PLAYER_PED(iLocal_287), 4, 0f, &iLocal_469, joaat("PRIVATE_SECURITY"), Local_62.f_53);
						}
						else
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(14, PLAYER::GET_PLAYER_PED(iLocal_287), 4, 0f, &iLocal_469, 0, 0);
						}
					}
				}
				if (Global_2794162.f_1803)
				{
					if (!BitTest(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_285 == 0)
	{
		if (Local_62.f_42 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_62.f_10[Local_62.f_42 /*7*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_62.f_10[Local_62.f_42 /*7*/]), false) && !func_538(NETWORK::NET_TO_PED(Local_62.f_10[Local_62.f_42 /*7*/])))
				{
					if (Local_62.f_10[Local_62.f_42 /*7*/].f_5 == 3)
					{
						func_535(Local_62.f_10[Local_62.f_42 /*7*/], &iLocal_296, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0);
						if (HUD::DOES_BLIP_EXIST(iLocal_296))
						{
							if (!BitTest(iLocal_279, 6))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_296, "FM_MGR_BLP" /* GXT: Mugger */);
								MISC::SET_BIT(&iLocal_279, 6);
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_296))
				{
					func_528(&iLocal_296);
				}
			}
			if (PLAYER::PLAYER_ID() == iLocal_286)
			{
				if (!BitTest(iLocal_279, 14))
				{
					if (func_392("MPCT_mugsuc", "LAMAR", 19))
					{
						MISC::SET_BIT(&iLocal_279, 14);
					}
				}
			}
		}
	}
}

void func_535(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11)//Position - 0x15919
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_537(0))
		{
			Global_2672524 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_536(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2672524, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
		else
		{
			func_536(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2672524, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_528(iParam1);
	}
}

int func_536(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12)//Position - 0x1599D
{
	bool bVar0;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (!iParam9 == -1)
		{
			HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_537(bool bParam0)//Position - 0x15B91
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

int func_538(int iParam0)//Position - 0x15BA2
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar1 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				if (BitTest(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_539()//Position - 0x15BF3
{
	return Local_62.f_0;
}

int func_540(int iParam0)//Position - 0x15BFD
{
	return Local_118[iParam0 /*5*/];
}

void func_541()//Position - 0x15C0B
{
	if (PLAYER::PLAYER_ID() == iLocal_287)
	{
		if (Global_32435)
		{
			if (!BitTest(Local_118[iLocal_294 /*5*/].f_1, 4))
			{
				MISC::SET_BIT(&(Local_118[iLocal_294 /*5*/].f_1), 4);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_118[iLocal_294 /*5*/].f_1), 4);
		}
	}
}

void func_542()//Position - 0x15C51
{
	bool bVar0;
	
	bVar0 = false;
	if (PLAYER::PLAYER_ID() == iLocal_286)
	{
		if (BitTest(Global_1835490, 0))
		{
			MISC::CLEAR_BIT(&Global_1835490, 0);
			bVar0 = true;
		}
		if (!BitTest(Local_118[iLocal_286 /*5*/].f_1, 2))
		{
			if (BitTest(Local_62.f_1, 11))
			{
				MISC::SET_BIT(&(Local_118[iLocal_286 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!BitTest(Local_62.f_1, 11))
		{
			MISC::CLEAR_BIT(&(Local_118[iLocal_286 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = func_546();
			func_543(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		}
	}
	else if (Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 != Local_62.f_44)
	{
		Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = Local_62.f_44;
		func_543(Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_543(var uParam0)//Position - 0x15D15
{
	switch (iLocal_285)
	{
		case 0:
			func_545(&(Global_1837231[3]), uParam0);
			break;
		
		case 1:
			func_544(uParam0);
			break;
	}
}

void func_544(var uParam0)//Position - 0x15D4A
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam0, bVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837183[bVar0], joaat("PRIVATE_SECURITY"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PRIVATE_SECURITY"), Global_1837183[bVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837183[bVar0], joaat("PRIVATE_SECURITY"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PRIVATE_SECURITY"), Global_1837183[bVar0]);
		}
		bVar0++;
	}
}

void func_545(var uParam0, var uParam1)//Position - 0x15DB8
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam1, bVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837183[bVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_1837183[bVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837183[bVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1837183[bVar0]);
		}
		bVar0++;
	}
}

int func_546()//Position - 0x15E1E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_285 == 1 || iLocal_285 == 0)
		{
			if (iLocal_286 == PLAYER::INT_TO_PLAYERINDEX(iVar1))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		else if (PLAYER::PLAYER_ID() == PLAYER::INT_TO_PLAYERINDEX(iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		else if (func_6(PLAYER::INT_TO_PLAYERINDEX(iVar1), 0, 1))
		{
			if (func_58(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_547()//Position - 0x15EA7
{
	switch (iLocal_285)
	{
		case 0:
			if (!BitTest(iLocal_279, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_286 && PLAYER::PLAYER_ID() != iLocal_287)
				{
					if (func_6(iLocal_287, 1, 1))
					{
						func_350("GC_TCK_60" /* GXT: ~s~Mugger successfully acquired. They will approach ~a~~s~ soon. */, iLocal_287, 0, 0, 0, 1, 0);
						MISC::SET_BIT(&iLocal_279, 11);
					}
				}
			}
			if (!BitTest(iLocal_279, 12))
			{
				if (BitTest(Local_62.f_1, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_286 && PLAYER::PLAYER_ID() != iLocal_287)
					{
						if (func_6(iLocal_287, 1, 1))
						{
							func_350("GC_TCK_62" /* GXT: ~s~Your Mugger is approaching ~a~.~s~ */, iLocal_287, 0, 0, 0, 1, 0);
							MISC::SET_BIT(&iLocal_279, 12);
						}
					}
				}
			}
			if (BitTest(Local_62.f_2, 10))
			{
				if (!BitTest(iLocal_279, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_286 && PLAYER::PLAYER_ID() != iLocal_287)
					{
						if (func_6(iLocal_287, 1, 1))
						{
							func_350("GC_TCK_65" /* GXT: ~s~Your Mugger is unable to reach ~a~'s~s~ current position. They will attempt again soon. */, iLocal_287, 0, 0, 0, 1, 0);
							MISC::SET_BIT(&iLocal_279, 8);
						}
					}
				}
			}
			else if (!BitTest(iLocal_279, 13))
			{
				if (!BitTest(Local_62.f_2, 11))
				{
					if (BitTest(Local_62.f_1, 8))
					{
						if (BitTest(Local_62.f_2, 6))
						{
							if (PLAYER::PLAYER_ID() == iLocal_286 && PLAYER::PLAYER_ID() != iLocal_287)
							{
								if (func_6(iLocal_287, 1, 1))
								{
									func_350("GC_TCK_63" /* GXT: ~s~~a~~s~ has escaped from your Mugger. They will approach again soon. */, iLocal_287, 0, 0, 0, 1, 0);
									MISC::SET_BIT(&iLocal_279, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(iLocal_279, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_286)
				{
					if (func_6(iLocal_287, 1, 1) && PLAYER::PLAYER_ID() != iLocal_287)
					{
						if (Local_62.f_50)
						{
							func_350("HS_SUCC" /* GXT: ~s~A Hit Squad was successfully sent to attack ~a~.~s~ */, iLocal_287, 0, 0, 0, 1, 0);
						}
						else if (Local_62.f_52)
						{
							func_350("GO_ASS_SUCC" /* GXT: ~s~A Strike Team was successfully sent to attack ~a~.~s~ */, iLocal_287, 0, 0, 0, 1, 0);
						}
						else
						{
							func_350("GC_TCK_70" /* GXT: ~s~Mercenaries were successfully sent to attack ~a~.~s~ */, iLocal_287, 0, 0, 0, 1, 0);
						}
						MISC::SET_BIT(&iLocal_279, 11);
					}
				}
				else if (PLAYER::PLAYER_ID() == iLocal_287)
				{
					if (func_6(iLocal_286, 1, 1))
					{
						if (Local_62.f_50)
						{
							if (Local_62.f_51)
							{
								func_549("HS_A_SUCC" /* GXT: A Hit Squad has been sent to attack you for abandoning your Motorcycle Club. */, 0);
							}
							else
							{
								func_350("HS_SENT" /* GXT: ~s~~a~~s~ has sent a Hit Squad to attack you. */, iLocal_286, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_62.f_52)
						{
							func_350("GO_ASS_SENT" /* GXT: ~s~~a~~s~ has sent a Strike Team to attack you. */, iLocal_286, 0, 0, 0, 1, 0);
						}
						else
						{
							func_350("GC_TCK_71" /* GXT: ~s~~a~~s~ has sent Mercenaries to attack you. */, iLocal_286, 0, 0, 0, 1, 0);
						}
						MISC::SET_BIT(&iLocal_279, 11);
					}
				}
			}
			if (!BitTest(iLocal_279, 10))
			{
				if (BitTest(Local_62.f_1, 0))
				{
					if (BitTest(Local_62.f_3, 6))
					{
						if (PLAYER::PLAYER_ID() == iLocal_286 && PLAYER::PLAYER_ID() != iLocal_287)
						{
							if (func_6(iLocal_287, 0, 1))
							{
								func_548(-1, 1);
								if (Local_62.f_50)
								{
									if (!Local_62.f_51)
									{
										func_350("HS_KILLED" /* GXT: ~s~~a~~s~ has been killed by the Hit Squad. */, iLocal_287, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_62.f_52)
								{
									func_350("GO_ASS_KILL" /* GXT: ~s~~a~~s~ has been killed by the Strike Team. */, iLocal_287, 0, 0, 0, 1, 0);
								}
								else
								{
									func_350("GC_TCK_73" /* GXT: ~s~~a~~s~ has been killed by Mercenaries. */, iLocal_287, 0, 0, 0, 1, 0);
								}
								MISC::SET_BIT(&iLocal_279, 10);
							}
						}
					}
				}
			}
			if (!BitTest(iLocal_279, 9))
			{
				if (BitTest(Local_62.f_1, 0))
				{
					if (BitTest(Local_62.f_3, 7))
					{
						if (PLAYER::PLAYER_ID() == iLocal_286 && PLAYER::PLAYER_ID() != iLocal_287)
						{
							if (func_6(iLocal_287, 0, 1))
							{
								if (Local_62.f_50)
								{
									func_350("HS_ESCAPED" /* GXT: ~s~~a~~s~ has escaped the Hit Squad. */, iLocal_287, 0, 0, 0, 1, 0);
								}
								else if (Local_62.f_52)
								{
									func_350("GO_ASS_ESC" /* GXT: ~s~~a~~s~ has escaped the Strike Team. */, iLocal_287, 0, 0, 0, 1, 0);
								}
								else
								{
									func_350("GC_TCK_75" /* GXT: ~s~~a~~s~ has escaped the Mercenaries. */, iLocal_287, 0, 0, 0, 1, 0);
								}
								MISC::SET_BIT(&iLocal_279, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_548(int iParam0, int iParam1)//Position - 0x16246
{
	if (Global_1836590)
	{
		if (Global_1836594 && Global_1853988[PLAYER::PLAYER_ID() /*867*/] != 148)
		{
			if (Global_1836080.f_14 == PLAYER::INT_TO_PLAYERINDEX(iParam0))
			{
				Global_1889937 = (Global_1889937 + iParam1);
			}
		}
		else
		{
			Global_1889937 = (Global_1889937 + iParam1);
		}
	}
}

int func_549(char* sParam0, bool bParam1)//Position - 0x16297
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_351(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_550()//Position - 0x162CF
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != Local_62.f_45)
	{
		if (func_558(Local_62.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= Local_62.f_45)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_62.f_45);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != Local_62.f_46)
	{
		if (func_557(Local_62.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false) <= Local_62.f_46)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_62.f_46);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) != Local_62.f_47)
	{
		if (func_551(Local_62.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(false) <= Local_62.f_47)
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_62.f_47);
			}
		}
	}
}

bool func_551(int iParam0, bool bParam1, bool bParam2)//Position - 0x16361
{
	return func_552(2, iParam0, 1, bParam1, bParam2);
}

int func_552(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x16375
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1666708, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_556(iParam0) - func_555(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_555(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_556(iParam0) - func_554(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_555(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_556(iParam0) - func_555(iParam0, 1));
		}
		if (!bParam4 && Global_1853988[PLAYER::PLAYER_ID() /*867*/] != 3)
		{
			iVar1 = (iVar1 - func_553(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_553(int iParam0)//Position - 0x1643B
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

int func_554(int iParam0)//Position - 0x16475
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

int func_555(int iParam0, bool bParam1)//Position - 0x164BB
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

int func_556(int iParam0)//Position - 0x16558
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

bool func_557(int iParam0, bool bParam1, bool bParam2)//Position - 0x16598
{
	return func_552(1, iParam0, 1, bParam1, bParam2);
}

bool func_558(int iParam0, bool bParam1, bool bParam2)//Position - 0x165AC
{
	return func_552(0, iParam0, 1, bParam1, bParam2);
}

void func_559()//Position - 0x165C0
{
	if (Local_62.f_50)
	{
		if (PLAYER::PLAYER_ID() == iLocal_286)
		{
			func_561(3);
		}
		else if (PLAYER::PLAYER_ID() == iLocal_287)
		{
			func_561(4);
		}
	}
	else if (Local_62.f_52)
	{
	}
	func_560();
}

void func_560()//Position - 0x165FE
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_561(int iParam0)//Position - 0x1660A
{
	MISC::CLEAR_BIT(&(Global_1895156[PLAYER::PLAYER_ID() /*609*/].f_10.f_5), iParam0);
}

int func_562()//Position - 0x16627
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_568())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_567())
	{
		return 1;
	}
	if (func_566(159))
	{
		if (!func_565())
		{
			return 1;
		}
	}
	if (func_566(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_563() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_563()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_563()//Position - 0x166AB
{
	switch (func_126())
	{
		case 0:
			return func_564();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_564()//Position - 0x166DE
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_565()//Position - 0x16702
{
	return Global_2683883.f_698;
}

int func_566(int iParam0)//Position - 0x16711
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_567()//Position - 0x16728
{
	return Global_2694576;
}

bool func_568()//Position - 0x16734
{
	return Global_2683883.f_693;
}

void func_569()//Position - 0x16743
{
	SYSTEM::WAIT(0);
}

void func_570(struct<21> Param0)//Position - 0x16750
{
	func_576(32, Param0);
	func_575(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_62, 56, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_118, 161, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_574())
	{
		func_272();
	}
	iLocal_285 = Param0.f_16;
	iLocal_286 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_17);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_286))
	{
	}
	iLocal_287 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_18);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_287))
	{
		iLocal_288 = MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_287));
	}
	if (func_573(iLocal_286, 3) && iLocal_285 == 1)
	{
		Local_62.f_50 = 1;
		if (func_573(iLocal_287, 4))
		{
			Local_62.f_51 = 1;
		}
	}
	if (iLocal_285 == 1)
	{
		if (func_572(iLocal_286))
		{
			Local_62.f_52 = 1;
			Local_62.f_53 = func_571(iLocal_286);
		}
	}
	Local_289 = { Param0.f_10 };
	if (iLocal_285 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_286)
		{
			MISC::SET_BIT(&Global_1835490, 0);
		}
	}
	Global_1927404 = 0;
	Global_1927405 = 0;
	if (iLocal_285 == 1)
	{
		Global_2794162.f_1803 = 0;
	}
	Local_118[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
}

var func_571(int iParam0)//Position - 0x1685E
{
	return Global_1853988[iParam0 /*867*/].f_180.f_4;
}

bool func_572(int iParam0)//Position - 0x16873
{
	return Global_1853988[iParam0 /*867*/].f_180 != func_13();
}

bool func_573(int iParam0, int iParam1)//Position - 0x1688B
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_5, iParam1);
}

int func_574()//Position - 0x168A3
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
		if (func_568())
		{
			return 0;
		}
		if (func_566(157))
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

int func_575(int iParam0, int iParam1, bool bParam2)//Position - 0x168FC
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_560();
			}
			else
			{
				return 0;
			}
		}
		if (!func_537(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_560();
					}
					else
					{
						return 0;
					}
				}
				if (func_568())
				{
					if (!bParam2)
					{
						func_560();
					}
					else
					{
						return 0;
					}
				}
				if (func_566(157))
				{
					if (!bParam2)
					{
						func_560();
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
					func_560();
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
				func_560();
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
			func_560();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_576(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)//Position - 0x16A12
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_560();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

