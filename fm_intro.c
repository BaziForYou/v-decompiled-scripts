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
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<123> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_184 = 16;
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
	var uLocal_370 = 16;
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
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	struct<6> Local_535 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_541 = 0;
	var uLocal_542 = 16;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
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
	struct<5> Local_707[2];
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	bool bLocal_724 = 0;
	bool bLocal_725 = 0;
	bool bLocal_726 = 0;
	bool bLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
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
	iLocal_59 = 20;
	iLocal_60 = 33;
	bLocal_724 = true;
	bLocal_725 = true;
	bLocal_726 = true;
	bLocal_727 = true;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_811(ScriptParam_0);
	}
	while (true)
	{
		func_810();
		if (func_805())
		{
			func_426(1);
		}
		if (func_423(0))
		{
			Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
		}
		if (func_422(NETWORK::PARTICIPANT_ID_TO_INT()) > -1)
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (func_421(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (!BitTest(uLocal_718, 10))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						MISC::SET_BIT(&uLocal_718, 10);
					}
				}
				HUD::REQUEST_ADDITIONAL_TEXT("FMINT", 0);
				if (func_420() && HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMINT", 0))
				{
					if (func_419() > 0)
					{
						func_418(&uLocal_370, 1, 0, "Lamar", 0, 1);
						func_417(0);
						func_416(4, 1);
						func_416(1, 1);
						func_416(0, 1);
						func_416(2, 1);
						func_416(3, 0);
						func_414(iLocal_60, 1);
						Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
						if (bLocal_726)
						{
							Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -2;
						}
						else
						{
							Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
						}
					}
				}
				if (func_419() == 4)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (func_419() == 6 && Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
				}
				break;
			
			case 2:
				func_392();
				func_23();
				if (func_419() == 4)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (func_419() == 6 && Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				}
				break;
			
			case 4:
				Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				break;
			
			case 5:
				func_21(&(Local_535.f_5));
				if (func_20(&(Local_535.f_5)))
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_12(iLocal_59);
				Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
			
			case 6:
				func_426(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_419())
			{
				case 0:
					Local_535.f_0 = 2;
					break;
				
				case 2:
					func_11();
					func_10();
					func_2();
					if (func_1())
					{
						Local_535.f_0 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x2B3
{
	if (!bLocal_724)
	{
		if (BitTest(Local_535.f_1, 1))
		{
			return 1;
		}
	}
	else if (BitTest(Local_535.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x2E2
{
	func_3();
}

void func_3()//Position - 0x2EE
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!BitTest(Local_535.f_1, 3))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0))
			{
				MISC::SET_BIT(&(Local_535.f_1), 3);
			}
		}
		if (!BitTest(Local_535.f_1, 4))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				MISC::SET_BIT(&(Local_535.f_1), 4);
			}
		}
		if (!BitTest(Local_535.f_1, 5))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 3))
			{
				MISC::SET_BIT(&(Local_535.f_1), 5);
			}
		}
		if (!BitTest(Local_535.f_1, 6))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
			{
				MISC::SET_BIT(&(Local_535.f_1), 6);
			}
		}
		if (!BitTest(Local_535.f_1, 7))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				MISC::SET_BIT(&(Local_535.f_1), 7);
			}
		}
		if (!BitTest(Local_535.f_1, 8))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
			{
				MISC::SET_BIT(&(Local_535.f_1), 8);
			}
		}
		switch (Local_535.f_2)
		{
			case 0:
				if (BitTest(Local_535.f_1, 3))
				{
					if (func_4(&(Local_535.f_3), &(Local_535.f_4), -1031.7882f, -2731.816f, 19.0546f, 240.4822f, &uLocal_542))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_535.f_3), true, false, false);
						Local_535.f_2 = 2;
					}
				}
				break;
			
			case 2:
				if (BitTest(Local_535.f_1, 4))
				{
					Local_535.f_2 = 1;
				}
				break;
			
			case 1:
				if (BitTest(Local_535.f_1, 5))
				{
					Local_535.f_2 = 3;
				}
				break;
			
			case 3:
				if (BitTest(Local_535.f_1, 6))
				{
					Local_535.f_2 = 4;
				}
				break;
			
			case 4:
				if (BitTest(Local_535.f_1, 7))
				{
					Local_535.f_2 = 5;
				}
				break;
			
			case 5:
				if (BitTest(Local_535.f_1, 8))
				{
					Local_535.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam5, var uParam6)//Position - 0x4B6
{
	if (func_9(Global_2794162.f_854) && func_9(Global_2794162.f_855))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (func_6(uParam0, Global_2794162.f_854, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(NETWORK::NET_TO_VEH(*uParam0), true);
			}
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
		{
			if (func_5(uParam1, *uParam0, 25, Global_2794162.f_855, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(*uParam1), true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2794162.f_854);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2794162.f_855);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(*uParam0), false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam1), true);
				func_418(uParam6, 8, NETWORK::NET_TO_PED(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x5A3
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
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

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x62B
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2794162.f_6737 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_7(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_7(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x734
{
	int iVar0;
	
	if (func_8(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2635560.f_3026[1 /*6*/].f_5 == iParam5 && Global_2635560.f_3026[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2635560.f_3026[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2635560.f_3026[iVar0 /*6*/] = { Global_2635560.f_3026[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2635560.f_3026[1 /*6*/] = { Param0 };
		Global_2635560.f_3026[1 /*6*/].f_3 = fParam3;
		Global_2635560.f_3026[1 /*6*/].f_4 = iParam4;
		Global_2635560.f_3026[1 /*6*/].f_5 = iParam5;
	}
}

int func_8(int iParam0, struct<3> Param1, int iParam4)//Position - 0x807
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2648711.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_9(int iParam0)//Position - 0x8A5
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_10()//Position - 0x8C3
{
}

void func_11()//Position - 0x8CB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (bLocal_724)
			{
				if (!BitTest(Local_535.f_1, 2))
				{
					if (BitTest(Local_707[iVar0 /*5*/].f_3, 2))
					{
						MISC::SET_BIT(&(Local_535.f_1), 2);
					}
				}
			}
			else if (!BitTest(Local_535.f_1, 1))
			{
				if (BitTest(Local_707[iVar0 /*5*/].f_3, 1))
				{
					MISC::SET_BIT(&(Local_535.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)//Position - 0x944
{
	if (!func_15(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (!func_13(PLAYER::PLAYER_ID()) == iParam0)
	{
		return;
	}
}

int func_13(int iParam0)//Position - 0x96E
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2657704[iParam0 /*463*/].f_1;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)//Position - 0x990
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

bool func_15(int iParam0, bool bParam1)//Position - 0x9F0
{
	if (func_19() != 0)
	{
		return func_13(iParam0) != 0;
	}
	return func_16(iParam0, bParam1, 0);
}

int func_16(int iParam0, bool bParam1, bool bParam2)//Position - 0xA17
{
	if (bParam1)
	{
		if (func_17(iParam0))
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

bool func_17(int iParam0)//Position - 0xA49
{
	return func_18(iParam0);
}

var func_18(int iParam0)//Position - 0xA57
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_11.f_1, 0);
}

int func_19()//Position - 0xA6E
{
	return Global_32283;
}

int func_20(var uParam0)//Position - 0xA79
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

void func_21(var uParam0)//Position - 0xAA2
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_22(uParam0, 0, 0);
		}
	}
}

void func_22(var uParam0, bool bParam1, bool bParam2)//Position - 0xAC1
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

void func_23()//Position - 0xB06
{
	switch (func_422(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case -2:
			func_206();
			break;
		
		case -1:
			func_205();
			break;
		
		case 0:
			func_32();
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			func_24();
			break;
	}
}

void func_24()//Position - 0xB61
{
	switch (iLocal_723)
	{
		case 0:
			if (!func_25(iLocal_60))
			{
				MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 2);
				Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_25(int iParam0)//Position - 0xBA1
{
	return func_26(iParam0, 5, 1);
}

int func_26(int iParam0, int iParam1, bool bParam2)//Position - 0xBB1
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
		if (func_19() == 0)
		{
			return BitTest(func_27(func_31(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1)//Position - 0xC11
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_28(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_28(int iParam0, var uParam1)//Position - 0xC40
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_29(uParam1));
}

int func_29(var uParam0)//Position - 0xC55
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_30();
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

int func_30()//Position - 0xC89
{
	return Global_1574918;
}

int func_31(int iParam0)//Position - 0xC95
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

void func_32()//Position - 0x103D
{
	int iVar0;
	
	if (func_204())
	{
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			func_203(0);
		}
	}
	if (!func_202(&uLocal_360))
	{
		func_22(&uLocal_360, 0, 0);
	}
	if (!BitTest(uLocal_718, 21))
	{
		MISC::SET_BIT(&uLocal_718, 21);
	}
	if (!BitTest(uLocal_718, 3))
	{
		if (!func_202(&uLocal_358))
		{
			func_22(&uLocal_358, 0, 0);
		}
		else if (BitTest(uLocal_718, 21))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (func_201(&uLocal_358, 3000, 0))
					{
						MISC::SET_BIT(&uLocal_718, 3);
					}
				}
			}
		}
		if (func_201(&uLocal_358, 40000, 0))
		{
			MISC::SET_BIT(&uLocal_718, 3);
		}
	}
	else if (!BitTest(uLocal_718, 16))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				MISC::SET_BIT(&uLocal_718, 16);
				func_200(&uLocal_358);
			}
		}
	}
	if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
	{
		if (!func_202(&uLocal_364))
		{
			func_22(&uLocal_364, 0, 0);
		}
		else if (!BitTest(uLocal_719, 1))
		{
			if (func_201(&uLocal_364, 10000, 0))
			{
				MISC::SET_BIT(&uLocal_719, 1);
				func_200(&uLocal_364);
			}
		}
		else if (BitTest(uLocal_718, 19))
		{
			if (!BitTest(uLocal_718, 18))
			{
				if (!func_198() || func_201(&uLocal_358, 5000, 0))
				{
					func_197(0);
					MISC::SET_BIT(&uLocal_718, 18);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
					}
				}
			}
		}
	}
	if (BitTest(uLocal_718, 18))
	{
		if (!BitTest(uLocal_718, 2))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				iVar0 = 0;
				MISC::SET_BIT(&iVar0, 3);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 5);
				if (func_101(&uLocal_370, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					func_100(1);
					MISC::SET_BIT(&uLocal_718, 2);
					if (!BitTest(uLocal_718, 20))
					{
						func_85(19, 3, 1);
						MISC::SET_BIT(&uLocal_718, 20);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
					}
				}
			}
		}
		else if (!func_84(0))
		{
			if (!func_83())
			{
				if (!func_81())
				{
					if (!BitTest(uLocal_718, 12))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
						}
						MISC::SET_BIT(&uLocal_718, 12);
						func_22(&uLocal_362, 0, 0);
						func_22(&uLocal_366, 0, 0);
					}
				}
			}
		}
		if (BitTest(uLocal_718, 12))
		{
			if (!BitTest(uLocal_718, 17))
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					func_77();
					MISC::SET_BIT(&uLocal_718, 17);
					func_200(&uLocal_358);
				}
			}
			else if (!func_198())
			{
				if (!BitTest(uLocal_718, 23))
				{
					if (func_201(&uLocal_366, 4500, 0))
					{
						MISC::SET_BIT(&uLocal_718, 23);
						MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 3);
					}
				}
				if (func_201(&uLocal_362, 15000, 0))
				{
					if (!BitTest(uLocal_718, 22))
					{
						MISC::SET_BIT(&uLocal_718, 22);
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (BitTest(uLocal_718, 14))
					{
						MISC::CLEAR_BIT(&uLocal_718, 14);
					}
					if (!func_25(iLocal_60))
					{
						if (BitTest(uLocal_718, 13))
						{
							MISC::CLEAR_BIT(&uLocal_718, 13);
						}
						if (BitTest(uLocal_718, 25) || (!BitTest(uLocal_718, 25) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (!BitTest(uLocal_718, 0))
							{
								if (BitTest(uLocal_718, 15))
								{
									MISC::CLEAR_BIT(&uLocal_718, 15);
								}
								if (HUD::DOES_BLIP_EXIST(Global_100885.f_267[iLocal_60]))
								{
									func_71("GET_AMMU", 0);
									MISC::SET_BIT(&uLocal_718, 0);
									MISC::SET_BIT(&uLocal_718, 25);
									if (HUD::DOES_BLIP_EXIST(Global_100885.f_267[iLocal_60]))
									{
										if (!BitTest(Global_2794162.f_853, 2))
										{
											HUD::SET_BLIP_ROUTE(Global_100885.f_267[iLocal_60], true);
										}
										func_414(iLocal_60, 1);
									}
								}
							}
							else if (BitTest(Global_2794162.f_853, 2))
							{
								if (HUD::DOES_BLIP_EXIST(Global_100885.f_267[iLocal_60]))
								{
									if (!BitTest(uLocal_718, 15))
									{
										HUD::SET_BLIP_ROUTE(Global_100885.f_267[iLocal_60], false);
										MISC::SET_BIT(&uLocal_718, 15);
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(Global_100885.f_267[iLocal_60]))
							{
								if (BitTest(uLocal_718, 15))
								{
									HUD::SET_BLIP_ROUTE(Global_100885.f_267[iLocal_60], true);
									MISC::CLEAR_BIT(&uLocal_718, 15);
								}
							}
						}
					}
					else
					{
						if (BitTest(uLocal_718, 0))
						{
							MISC::CLEAR_BIT(&uLocal_718, 0);
						}
						if (!BitTest(uLocal_718, 13))
						{
							func_71("GET_GUN", 0);
							func_70(1);
							MISC::SET_BIT(&uLocal_718, 13);
						}
					}
				}
				else if (!BitTest(uLocal_718, 14))
				{
					HUD::CLEAR_HELP(true);
					if (BitTest(uLocal_718, 0))
					{
						MISC::CLEAR_BIT(&uLocal_718, 0);
					}
					if (BitTest(uLocal_718, 13))
					{
						MISC::CLEAR_BIT(&uLocal_718, 13);
					}
					if (HUD::DOES_BLIP_EXIST(Global_100885.f_267[iLocal_60]))
					{
						HUD::SET_BLIP_ROUTE(Global_100885.f_267[iLocal_60], false);
						HUD::SET_BLIP_FLASHES(Global_100885.f_267[iLocal_60], false);
						func_414(iLocal_60, 0);
					}
					func_71("LOSE_COP", 0);
					MISC::SET_BIT(&uLocal_718, 14);
				}
			}
		}
	}
	else if (func_201(&uLocal_360, 300000, 0))
	{
		MISC::SET_BIT(&uLocal_718, 18);
	}
	if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 0))
	{
		if (((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MICROSMG"), false))
		{
			if (func_68())
			{
				func_63(1);
				MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 0);
				if (func_25(iLocal_60))
				{
				}
			}
		}
		else
		{
			func_45(400);
		}
	}
	else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
	{
		if (!func_43())
		{
			MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 1);
			func_36();
			func_35("FM_IHELP_AMMU", -1);
			if (!BitTest(uLocal_718, 31))
			{
				func_33(119, 1, -1, 1);
				func_33(115, 1, -1, 1);
				MISC::SET_BIT(&uLocal_718, 31);
			}
			func_200(&uLocal_358);
			if (bLocal_724)
			{
				if (bLocal_725)
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
				}
				else
				{
					Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
		}
	}
}

void func_33(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x16A7
{
	int iVar0;
	
	iVar0 = func_34(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
	}
}

int func_34(int iParam0, var uParam1)//Position - 0x16CA
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_29(uParam1));
}

void func_35(char* sParam0, int iParam1)//Position - 0x16DF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_36()//Position - 0x16F6
{
	if (!func_42())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574757.f_9)
	{
		return;
	}
	func_37();
}

void func_37()//Position - 0x1723
{
	func_39();
	func_38(0);
}

void func_38(bool bParam0)//Position - 0x1734
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_39()//Position - 0x17C6
{
	if (!func_41())
	{
	}
	if (func_42())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574757.f_12));
		func_40();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_40()//Position - 0x17EF
{
	switch (Global_1574757)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		
		default:
	}
}

bool func_41()//Position - 0x1A61
{
	if (!func_42())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	func_40();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_42()//Position - 0x1A87
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_43()//Position - 0x1A9D
{
	return ((((((((((func_44(28) || func_44(29)) || func_44(30)) || func_44(31)) || func_44(32)) || func_44(33)) || func_44(34)) || func_44(35)) || func_44(36)) || func_44(37)) || func_44(38));
}

int func_44(int iParam0)//Position - 0x1B23
{
	return func_26(iParam0, 6, 1);
}

void func_45(int iParam0)//Position - 0x1B33
{
	int iVar0;
	var uVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = func_60(PLAYER::PLAYER_ID());
		if (iVar0 < iParam0)
		{
			if (func_59())
			{
				func_46(joaat("SERVICE_EARN_HOLDUPS"), (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_HOLDUPS((iParam0 - iVar0));
			}
		}
	}
}

void func_46(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1B7E
{
	int iVar0;
	
	if (!func_59())
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
				func_47(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_47(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
				func_47(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_SPEND"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
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
			func_47(uParam2, joaat("NET_SHOP_TTYPE_SERVICE"), joaat("NET_SHOP_ACTION_EARN"), joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_47(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2443
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_30()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_54(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_53(1, iParam4);
			Global_4536677 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_48(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x25F0
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_49(iParam0);
	}
}

void func_49(int iParam0)//Position - 0x2628
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_59())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_52(iParam0))
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
		func_50(&(Global_4535172[iParam0 /*85*/]));
	}
}

void func_50(var uParam0)//Position - 0x267C
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
	func_51(&(uParam0->f_14));
	func_51(&(uParam0->f_14.f_13));
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

void func_51(var uParam0)//Position - 0x2788
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

int func_52(int iParam0)//Position - 0x27D0
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_53(int iParam0, int iParam1)//Position - 0x27FB
{
	Global_2697092 = iParam1;
	Global_2697091 = iParam0;
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x280F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4535172[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_59())
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
				func_55(Global_4535172[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_55(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)//Position - 0x294C
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
	iVar36 = func_57(Var0.f_1);
	if ((Global_262145.f_24258 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24259 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24260 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_56();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_56()//Position - 0x29DE
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_57(int iParam0)//Position - 0x29ED
{
	var uVar0;
	
	if (func_58(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_58(var uParam0)//Position - 0x2A08
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

int func_59()//Position - 0x2A2A
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

var func_60(int iParam0)//Position - 0x2A41
{
	var uVar0;
	
	uVar0 = func_61(iParam0);
	return uVar0;
}

int func_61(int iParam0)//Position - 0x2A53
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_62(iParam0))
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

int func_62(int iParam0)//Position - 0x2A96
{
	if (!func_58(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2672524.f_1, iParam0);
}

void func_63(bool bParam0)//Position - 0x2AB5
{
	func_64(28, bParam0);
	func_64(29, bParam0);
	func_64(30, bParam0);
	func_64(31, bParam0);
	func_64(32, bParam0);
	func_64(33, bParam0);
	func_64(34, bParam0);
	func_64(35, bParam0);
	func_64(36, bParam0);
	func_64(37, bParam0);
	func_64(38, bParam0);
}

void func_64(int iParam0, bool bParam1)//Position - 0x2B15
{
	if (bParam1)
	{
		if (!func_26(iParam0, 14, 1))
		{
			func_67(iParam0, 14, 1);
		}
	}
	else if (func_26(iParam0, 14, 1))
	{
		func_65(iParam0, 14, 1);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)//Position - 0x2B50
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
		if (func_19() == 0)
		{
			iVar0 = func_27(func_31(iParam0), -1);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_66(func_31(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

void func_66(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2BC0
{
	int iVar0;
	
	iVar0 = func_28(iParam0, iParam2);
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_67(int iParam0, int iParam1, bool bParam2)//Position - 0x2BE3
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
		if (func_19() == 0)
		{
			iVar0 = func_27(func_31(iParam0), -1);
			MISC::SET_BIT(&iVar0, iParam1);
			func_66(func_31(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113810.f_668[iParam0]), iParam1);
	}
}

bool func_68()//Position - 0x2C53
{
	return ((((((((((func_69(28) || func_69(29)) || func_69(30)) || func_69(31)) || func_69(32)) || func_69(33)) || func_69(34)) || func_69(35)) || func_69(36)) || func_69(37)) || func_69(38));
}

int func_69(int iParam0)//Position - 0x2CD9
{
	return func_26(iParam0, 3, 0);
}

void func_70(bool bParam0)//Position - 0x2CE9
{
	if (bParam0)
	{
		if (!BitTest(Global_1927213, 19))
		{
			MISC::SET_BIT(&Global_1927213, 19);
		}
	}
	else if (BitTest(Global_1927213, 19))
	{
		MISC::CLEAR_BIT(&Global_1927213, 19);
	}
}

void func_71(char* sParam0, bool bParam1)//Position - 0x2D22
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_75(sParam0))
	{
		return;
	}
	func_37();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	func_74();
	func_73(bParam1);
	func_72();
}

void func_72()//Position - 0x2D8D
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_73(bool bParam0)//Position - 0x2DA0
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_74()//Position - 0x2DC6
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_75(char* sParam0)//Position - 0x2DEB
{
	if (!func_42())
	{
		return 0;
	}
	if (Global_1574757 == 11)
	{
		return func_76(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

bool func_76(char* sParam0)//Position - 0x2E2F
{
	if (!func_42())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

void func_77()//Position - 0x2E61
{
	struct<13> Var0;
	bool bVar13;
	bool bVar14;
	
	Var0 = { func_80(PLAYER::PLAYER_ID()) };
	bVar13 = NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT();
	bVar14 = func_79(&Var0);
	if (!bVar13 && !bVar14)
	{
		func_78("HLP_TAXI3", 9000);
	}
	else if (bVar13 && !bVar14)
	{
		func_78("HLP_SOC2", 9000);
	}
	else if (bVar13 && bVar14)
	{
		func_78("HLP_SOC1", 9000);
	}
}

void func_78(char* sParam0, int iParam1)//Position - 0x2ECF
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_79(var* uParam0)//Position - 0x2EE6
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_80(int iParam0)//Position - 0x2F0C
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

bool func_81()//Position - 0x2F23
{
	return func_82();
}

bool func_82()//Position - 0x2F2F
{
	return Global_1649067.f_40 == 3;
}

int func_83()//Position - 0x2F3F
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0)//Position - 0x2F61
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

void func_85(int iParam0, int iParam1, bool bParam2)//Position - 0x2FB8
{
	int iVar0;
	
	Global_9056 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 172)
	{
		func_92();
		if (iParam1 == 4)
		{
			func_91(iParam0, 0, 1);
			func_91(iParam0, 1, 1);
			func_91(iParam0, 2, 1);
			func_90(iParam0, 0, 1);
			func_90(iParam0, 1, 1);
			func_90(iParam0, 2, 1);
		}
		else
		{
			if (func_89(iParam0, iParam1) == 1 && func_88(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_91(iParam0, iVar0, 1);
			func_90(iParam0, iVar0, 1);
			if (iParam0 == 172 && !BitTest(Global_2794162.f_6892, 4))
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !BitTest(Global_2794162.f_6892, 3))
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !BitTest(Global_2794162.f_6892, 3))
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78689)
			{
				if (iParam1 != 4)
				{
					if (Global_20500 != iParam1)
					{
						Global_9029[iParam1 /*4*/] = { func_87(iParam0) };
						Global_9046[iParam1] = 1;
						Global_9051[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20500)
					{
					}
					else
					{
						Global_8980[1 /*6*/] = { func_87(iParam0) };
						Global_8980[1 /*6*/].f_5 = iParam1;
						func_86();
					}
				}
				else
				{
					Global_8980[1 /*6*/] = { func_87(iParam0) };
					Global_8980[1 /*6*/].f_5 = iParam1;
					func_86();
				}
			}
			else
			{
				Global_8980[1 /*6*/] = { func_87(iParam0) };
				Global_8980[1 /*6*/].f_5 = iParam1;
				func_86();
			}
		}
	}
}

void func_86()//Position - 0x3136
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2058[Global_9056 /*29*/].f_7)), 64);
	if (Global_9075 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_8980[1 /*6*/])), 64);
		sVar32 = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /* GXT: New Contact */);
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /* GXT: New Contact: ~n~~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8980[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8370, 0);
}

struct<4> func_87(int iParam0)//Position - 0x31AF
{
	return Global_2058[iParam0 /*29*/].f_3;
}

int func_88(int iParam0, int iParam1)//Position - 0x31C2
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2058[iParam0 /*29*/].f_24[iParam1];
}

int func_89(int iParam0, int iParam1)//Position - 0x31EC
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_2058[iParam0 /*29*/].f_12[iParam1];
}

void func_90(int iParam0, int iParam1, int iParam2)//Position - 0x3216
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

void func_91(int iParam0, int iParam1, int iParam2)//Position - 0x325B
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

void func_92()//Position - 0x32A0
{
	if (func_99(14))
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
		Global_20500 = func_93();
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

var func_93()//Position - 0x3342
{
	func_94();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_94()//Position - 0x335B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_97(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_96(PLAYER::PLAYER_PED_ID());
			if (func_95(iVar0) && (!func_99(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_95(Global_113810.f_2366.f_539.f_4321))
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

bool func_95(int iParam0)//Position - 0x3458
{
	return iParam0 < 3;
}

int func_96(int iParam0)//Position - 0x3464
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_97(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_97(int iParam0)//Position - 0x34A1
{
	if (func_95(iParam0))
	{
		return func_98(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_98(int iParam0)//Position - 0x34C6
{
	return Global_2058[iParam0 /*29*/];
}

bool func_99(int iParam0)//Position - 0x34D5
{
	return Global_43377 == iParam0;
}

void func_100(bool bParam0)//Position - 0x34E3
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_8371, 17);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8371, 17);
	}
}

int func_101(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3505
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_195())
	{
		return 0;
	}
	if (func_194())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_102(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_102(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x354A
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
	iVar1 = func_193(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_192(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_188(uParam6))
	{
		return 0;
	}
	if (func_185(iVar0, iVar1, iVar2))
	{
		if (func_184())
		{
			return 0;
		}
		func_183();
		return func_109(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_108(iParam4))
	{
		return 0;
	}
	func_103(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_103(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0x362F
{
	Global_1649067.f_40.f_1 = iParam0;
	Global_1649067.f_40.f_2 = iParam1;
	Global_1649067.f_40.f_3 = iParam2;
	StringCopy(&(Global_1649067.f_40.f_4), sParam3, 16);
	Global_1649067.f_40.f_8 = iParam4;
	Global_1649067.f_40.f_9 = iParam5;
	Global_1649067.f_40.f_14 = uParam6;
	func_104(iParam4);
	func_183();
	Global_1649067.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_104(int iParam0)//Position - 0x369C
{
	if (func_107(iParam0))
	{
		func_106();
		return;
	}
	func_105();
}

void func_105()//Position - 0x36B8
{
	Global_1649067.f_40.f_10 = 0;
}

void func_106()//Position - 0x36C9
{
	Global_1649067.f_40.f_10 = 1;
}

int func_107(int iParam0)//Position - 0x36DA
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

bool func_108(int iParam0)//Position - 0x3722
{
	return iParam0 > Global_1649067.f_40.f_8;
}

int func_109(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x3735
{
	struct<2> Var0;
	
	func_182();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_179(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return func_176(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_179(uParam0, sParam3, sParam4);
		}
		return func_158(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_157(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_146(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_145(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_110(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_110(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x382E
{
	bool bVar0;
	
	func_144();
	bVar0 = true;
	if (func_112(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_111(120000);
		return 1;
	}
	return 0;
}

void func_111(int iParam0)//Position - 0x3865
{
	Global_1649067.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1649067.f_40.f_12 = 1;
}

int func_112(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x3888
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
	
	iVar0 = func_143();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_137(iVar0);
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
	sVar4 = func_136(sParam5, bParam6, &iVar3);
	uVar5 = func_134(iParam7, &iVar3);
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
		bVar12 = func_133(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_116(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_115();
	}
	func_144();
	func_114();
	func_113();
	return 1;
}

void func_113()//Position - 0x39D0
{
	Global_1649067.f_57 = 0;
	Global_1649067.f_57.f_1 = 0;
}

void func_114()//Position - 0x39E8
{
	Global_1649067.f_40 = 3;
}

void func_115()//Position - 0x39F7
{
	MISC::SET_BIT(&Global_8370, 8);
}

int func_116(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x3A08
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
	if (func_117(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_117(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x3A74
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_92();
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
	if (func_132() == 0)
	{
		func_130();
		return 0;
	}
	func_129(Global_4542286);
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
	func_92();
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
				func_128(0);
				break;
			
			case 1:
				func_128(1);
				break;
			
			case 2:
				func_128(2);
				break;
			
			case 3:
				func_128(3);
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
		func_92();
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
			if (!func_127())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, true);
			}
		}
	}
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_126(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_123(1);
			func_126(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1978329 != -1 && iParam0 == Global_1978329)
	{
		bVar1 = true;
	}
	func_118(iParam0, sParam1, bVar1, func_122(PLAYER::PLAYER_ID()));
	return 1;
}

void func_118(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x3E5C
{
	struct<14> Var0;
	
	if (!func_119())
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

int func_119()//Position - 0x3EF7
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_143())
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID()))
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

bool func_120(int iParam0)//Position - 0x3F5A
{
	return func_121(iParam0, 20);
}

var func_121(int iParam0, int iParam1)//Position - 0x3F6A
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

var func_122(int iParam0)//Position - 0x3F82
{
	return Global_1853988[iParam0 /*867*/].f_205.f_6;
}

void func_123(int iParam0)//Position - 0x3F97
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
		if (func_99(14))
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
								func_125(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2694571)
							{
								if (iVar1 == 14)
								{
									func_124(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_124(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22913), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_124(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_124(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_124(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22908), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20481, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8377[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_125(&(Global_8377[iVar1 /*15*/]));
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
								func_125(&(Global_8377[iVar1 /*15*/]));
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
								func_125(&(Global_8377[iVar1 /*15*/]));
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
								func_125(&(Global_8377[iVar1 /*15*/]));
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
								func_125(&(Global_8377[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8377[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1890239.f_1;
								func_124(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_124(Global_20481, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8377[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8377[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_124(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x4533
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
		func_125(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_125(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_125(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_125(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_125(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_125(char* sParam0)//Position - 0x45E6
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_126(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x45F8
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

bool func_127()//Position - 0x465B
{
	return Global_1575063;
}

void func_128(int iParam0)//Position - 0x4667
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113810.f_14054[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_129(int iParam0)//Position - 0x4686
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

void func_130()//Position - 0x4706
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
		if (!func_131(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18))
		{
			Global_4542286 = iVar2;
		}
		iVar2++;
	}
	Global_4541037[Global_4542286 /*104*/].f_24 = 1;
}

int func_131(struct<6> Param0, struct<6> Param6)//Position - 0x47B0
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

int func_132()//Position - 0x489B
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
			if (!func_131(Global_4541037[iVar2 /*104*/].f_18, Global_4541037[Global_4542286 /*104*/].f_18))
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

int func_133(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x49C6
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
	if (func_117(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_134(int iParam0, int iParam1)//Position - 0x4A48
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_135(2, iParam1);
	return iParam0;
}

void func_135(int iParam0, var uParam1)//Position - 0x4A67
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

char* func_136(char* sParam0, bool bParam1, int iParam2)//Position - 0x4B18
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_16;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_16))
	{
		return sLocal_16;
	}
	func_135(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_137(int iParam0)//Position - 0x4B55
{
	int iVar0;
	
	iVar0 = func_140(iParam0);
	if (iVar0 == -1)
	{
		func_138(iParam0, 1);
		return 0;
	}
	Global_1666485[iVar0 /*5*/].f_4 = 1;
	return Global_1666485[iVar0 /*5*/].f_2;
}

void func_138(int iParam0, bool bParam1)//Position - 0x4B8B
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_140(iParam0) != -1)
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
	if (func_139(iParam0))
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

int func_139(int iParam0)//Position - 0x4BF7
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

int func_140(int iParam0)//Position - 0x4C29
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
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
			func_141(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_141(int iParam0)//Position - 0x4CA8
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
	func_142(&(Global_1666485[iVar32 /*5*/]));
	Global_1666646 = (Global_1666646 - 1);
}

void func_142(var uParam0)//Position - 0x4D5E
{
	*uParam0 = 0;
	uParam0->f_1 = func_143();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_143()//Position - 0x4D8B
{
	return -1;
}

void func_144()//Position - 0x4D94
{
	Global_1649067.f_40.f_9 = 4;
}

int func_145(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x4DA5
{
	bool bVar0;
	
	func_144();
	bVar0 = false;
	return func_112(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_146(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x4DCC
{
	bool bVar0;
	
	bVar0 = false;
	return func_147(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_147(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x4DEF
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
	
	iVar0 = func_143();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_137(iVar0);
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
	sVar4 = func_136(sParam5, bParam6, &iVar3);
	uVar5 = func_134(iParam7, &iVar3);
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
		bVar12 = func_156(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_149(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_115();
	}
	func_148();
	func_114();
	func_113();
	return 1;
}

void func_148()//Position - 0x4F3C
{
	Global_1649067.f_40.f_9 = 3;
}

int func_149(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x4F4D
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
	if (func_150(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_9077 = iParam6;
			Global_8980[3 /*6*/] = { func_87(iParam0) };
			Global_9057 = iParam0;
			MISC::SET_BIT(&Global_8370, 1);
			MISC::SET_BIT(&Global_8370, 7);
		}
		return 1;
	}
	return 0;
}

int func_150(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x4FDC
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_92();
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
	if (func_155() == 0)
	{
		func_153();
		return 0;
	}
	func_152(Global_22912);
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
		func_128(0);
		func_128(2);
		func_128(1);
	}
	else
	{
		func_92();
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
					func_128(0);
					Global_9076 = 0;
					break;
				
				case 1:
					func_128(1);
					Global_9076 = 1;
					break;
				
				case 2:
					func_128(2);
					Global_9076 = 2;
					break;
				
				case 3:
					func_128(3);
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
		func_92();
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
			if (!func_127())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20489, true);
			}
		}
	}
	if (!Global_20705)
	{
		if (Global_20500.f_1 == 6)
		{
			func_126(Global_20481, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_123(1);
			func_126(Global_20481, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20480), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1978329 != -1 && iParam0 == Global_1978329)
	{
		bVar1 = true;
	}
	func_151(iParam0, sParam1, bVar1, func_122(PLAYER::PLAYER_ID()));
	return 1;
}

void func_151(int iParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x54B2
{
	struct<14> Var0;
	
	if (!func_119())
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

void func_152(int iParam0)//Position - 0x554D
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

void func_153()//Position - 0x55DF
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
		if (!func_154(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18))
		{
			Global_22912 = iVar2;
		}
		iVar2++;
	}
	Global_113810.f_14144[Global_22912 /*104*/].f_24 = 1;
}

int func_154(struct<6> Param0, struct<6> Param6)//Position - 0x56AA
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

int func_155()//Position - 0x5795
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
			if (!func_154(Global_113810.f_14144[iVar2 /*104*/].f_18, Global_113810.f_14144[Global_22912 /*104*/].f_18))
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

int func_156(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x58FD
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
	if (func_150(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_9077 = iParam10;
			Global_8980[3 /*6*/] = { func_87(iParam0) };
			Global_9057 = iParam0;
			StringCopy(&Global_9058, sParam5, 64);
			MISC::SET_BIT(&Global_8370, 1);
			MISC::SET_BIT(&Global_8370, 7);
		}
		return 1;
	}
	return 0;
}

int func_157(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x59A9
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_148();
	bVar0 = true;
	if (func_147(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_111(120000);
		return 1;
	}
	return 0;
}

int func_158(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0x59FB
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
		bVar0 = func_175(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_164(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_163(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_162(1);
		}
		func_161();
		func_114();
		func_160();
		func_159();
		return 1;
	}
	return 0;
}

void func_159()//Position - 0x5A92
{
	Global_2804285 = 0;
}

void func_160()//Position - 0x5A9F
{
	Global_1649067.f_57 = 1;
	Global_1649067.f_57.f_1 = 0;
}

void func_161()//Position - 0x5AB7
{
	Global_1649067.f_40.f_9 = 1;
}

void func_162(int iParam0)//Position - 0x5AC8
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

void func_163(int iParam0)//Position - 0x5AE9
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

int func_164(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5B0C
{
	func_174(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_165(sParam3, iParam4, bParam7);
}

int func_165(char* sParam0, int iParam1, bool bParam2)//Position - 0x5B5A
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
					func_173();
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
		if (func_172(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_171();
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
				func_92();
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
				if (func_170())
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
			if (func_169())
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
			func_168();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_167();
		func_166();
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
		func_173();
	}
	return 0;
}

void func_166()//Position - 0x5E28
{
	if (!func_119())
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

void func_167()//Position - 0x5E5F
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

void func_168()//Position - 0x5E90
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

int func_169()//Position - 0x5F25
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_170()//Position - 0x5F4C
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

void func_171()//Position - 0x5FE5
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

bool func_172(int iParam0, int iParam1)//Position - 0x603C
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

void func_173()//Position - 0x6074
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

void func_174(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x60CB
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

int func_175(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x6121
{
	func_174(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_165(sParam3, iParam4, bParam7);
}

int func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x616F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_178(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_177();
		func_161();
		func_114();
		func_160();
		func_159();
		return 1;
	}
	return 0;
}

void func_177()//Position - 0x61C1
{
	Global_22863 = 0;
}

bool func_178(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x61CD
{
	func_174(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_165(sParam3, iParam4, bParam8);
}

int func_179(var uParam0, char* sParam1, char* sParam2)//Position - 0x6222
{
	if (func_181(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_180();
		func_114();
		func_160();
		return 1;
	}
	return 0;
}

void func_180()//Position - 0x624D
{
	Global_1649067.f_40.f_9 = 2;
}

bool func_181(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x625E
{
	func_174(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_165(sParam2, iParam3, 0);
}

void func_182()//Position - 0x62AC
{
	Global_1649067.f_55 = Global_1649067.f_40.f_1;
	Global_1649067.f_55.f_1 = Global_1649067.f_40.f_10;
}

void func_183()//Position - 0x62D2
{
	Global_1649067.f_40 = 1;
}

bool func_184()//Position - 0x62E1
{
	return Global_1649067.f_40 == 1;
}

int func_185(int iParam0, int iParam1, int iParam2)//Position - 0x62F1
{
	if (!func_186(iParam0))
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

int func_186(int iParam0)//Position - 0x6330
{
	if (!func_187())
	{
		return 0;
	}
	if (!Global_1649067.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_187()//Position - 0x6358
{
	if (Global_1649067.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_188(var uParam0)//Position - 0x636F
{
	if (func_191())
	{
		return 0;
	}
	if (func_82())
	{
		return 0;
	}
	if (func_84(0))
	{
		return 0;
	}
	if (Global_1574632.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935879 || func_190())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_189())
		{
			return 0;
		}
	}
	return 1;
}

bool func_189()//Position - 0x63D0
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1665432);
}

int func_190()//Position - 0x63E4
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_191()//Position - 0x63FC
{
	return func_169();
}

int func_192(int iParam0, int iParam1, int iParam2)//Position - 0x6408
{
	if (!func_82())
	{
		return 0;
	}
	return func_185(iParam0, iParam1, iParam2);
}

int func_193(char* sParam0, char* sParam1)//Position - 0x6426
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_194()//Position - 0x6440
{
	return Global_2801145.f_1;
}

int func_195()//Position - 0x644E
{
	if (Global_1649255.f_2)
	{
		return 1;
	}
	return func_196();
}

bool func_196()//Position - 0x6467
{
	return func_191();
}

void func_197(int iParam0)//Position - 0x6473
{
	Global_2804776.f_1072 = iParam0;
}

int func_198()//Position - 0x6484
{
	if (func_199("HLP_TAXI3"))
	{
		return 1;
	}
	if (func_199("HLP_SOC1"))
	{
		return 1;
	}
	if (func_199("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

bool func_199(char* sParam0)//Position - 0x64B7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_200(var uParam0)//Position - 0x64CA
{
	uParam0->f_1 = 0;
}

int func_201(var uParam0, int iParam1, bool bParam2)//Position - 0x64D7
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_22(uParam0, bParam2, 0);
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

bool func_202(var uParam0)//Position - 0x6535
{
	return uParam0->f_1;
}

void func_203(bool bParam0)//Position - 0x6541
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 8))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 8);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 8))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 8);
	}
}

bool func_204()//Position - 0x659E
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 8);
}

void func_205()//Position - 0x65B6
{
	CAM::DO_SCREEN_FADE_IN(800);
	if (!bLocal_726 || bLocal_727)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
	}
	if (!bLocal_727)
	{
		Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 0;
	}
	else
	{
		Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
	}
}

void func_206()//Position - 0x6603
{
	if (func_212(&Local_61, &(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4)))
	{
		Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
	}
	func_207(&Local_61);
}

void func_207(int* iParam0)//Position - 0x6631
{
	bool bVar0;
	
	bVar0 = HUD::IS_PAUSE_MENU_ACTIVE();
	switch (iLocal_722)
	{
		case 0:
			if (BitTest(*iParam0, 18))
			{
				if (!func_202(&uLocal_728))
				{
					func_22(&uLocal_728, 0, 0);
				}
				if (!bVar0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_78("HLP_XP1", 9000);
						func_200(&uLocal_728);
						func_22(&uLocal_728, 0, 0);
						iLocal_722++;
					}
				}
				else if (func_201(&uLocal_728, 5000, 0))
				{
					iLocal_722++;
					func_200(&uLocal_728);
					func_22(&uLocal_728, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_78("HLP_XP2", 9000);
					func_200(&uLocal_728);
					func_22(&uLocal_728, 0, 0);
					iLocal_722++;
				}
			}
			else if (func_201(&uLocal_728, 5000, 0))
			{
				iLocal_722++;
				func_200(&uLocal_728);
				func_22(&uLocal_728, 0, 0);
			}
			break;
		
		case 2:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_78("HLP_RNK1", 9000);
					func_211(1);
					Global_2794162.f_1955 = 1;
					func_210(1, 0, -1);
					func_200(&uLocal_728);
					func_22(&uLocal_728, 0, 0);
					iLocal_722++;
				}
			}
			else if (func_201(&uLocal_728, 5000, 0))
			{
				iLocal_722++;
				func_200(&uLocal_728);
				func_22(&uLocal_728, 0, 0);
			}
			break;
		
		case 3:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					func_197(0);
					if (MISC::IS_XBOX360_VERSION() || func_209())
					{
						func_78("HLP_CASHXBX", 9000);
					}
					else if (MISC::IS_PS3_VERSION() || func_208())
					{
						func_78("HLP_CASHPSN", 9000);
					}
					else
					{
						func_78("HLP_CASHGEN", 9000);
					}
					func_200(&uLocal_728);
					func_22(&uLocal_728, 0, 0);
					iLocal_722 = 99;
				}
			}
			else if (func_201(&uLocal_728, 5000, 0))
			{
				iLocal_722 = 99;
				func_200(&uLocal_728);
				func_22(&uLocal_728, 0, 0);
			}
			break;
		
		case 99:
			if (!BitTest(uLocal_719, 2))
			{
				MISC::SET_BIT(&uLocal_719, 2);
			}
			break;
	}
}

bool func_208()//Position - 0x685B
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_209()//Position - 0x6871
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

void func_210(int iParam0, bool bParam1, int iParam2)//Position - 0x6887
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1654054.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1654054.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1654054.f_1046), iParam0);
			}
			break;
	}
}

void func_211(int iParam0)//Position - 0x68D6
{
	Global_2794162.f_4635 = iParam0;
}

int func_212(int* iParam0, int* iParam1)//Position - 0x68E7
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	bool bVar8;
	
	if (!BitTest(*iParam0, 13))
	{
		if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
		{
			Var5 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			if ((Var5.f_0 != 0f || Var5.f_1 != 0f) || Var5.f_2 != 0f)
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var5, 0f, 0f, 0f);
				if (!BitTest(*iParam0, 14))
				{
					MISC::SET_BIT(iParam0, 14);
				}
			}
		}
	}
	else if (BitTest(*iParam0, 14))
	{
		STREAMING::CLEAR_FOCUS();
		MISC::CLEAR_BIT(iParam0, 14);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 337, true);
	}
	func_391(iParam0);
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	func_385(iParam0);
	func_384(PLAYER::PLAYER_ID());
	if (!BitTest(*iParam0, 31))
	{
		if (iParam0->f_6 > 0)
		{
			iParam0->f_32 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(234.0331f, -1005.2032f, -98.4626f, "hei_dlc_garage_high_new");
			if (iParam0->f_32 != 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam0->f_32);
				MISC::SET_BIT(iParam0, 31);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0->f_6)
		{
			case 0:
				iParam0->f_292 = 1;
				iParam0->f_293 = 0;
				iParam0->f_295 = 0;
				iParam0->f_294 = 0;
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_intro")) > 0)
				{
					iParam0->f_295 = 1;
					iParam0->f_294 = 1;
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_383()) > 0)
				{
					iParam0->f_295 = 1;
				}
				if (!Global_2794162.f_1954)
				{
					Global_2794162.f_1954 = 1;
					NETWORK::NETWORK_SET_VOICE_ACTIVE(false);
				}
				if (!func_204())
				{
					func_203(1);
				}
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				if (!func_202(&(iParam0->f_15)))
				{
					func_22(&(iParam0->f_15), 0, 0);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_1936380);
				Global_1936381 = 0;
				Global_1936383 = 0;
				Global_1936382 = 0;
				Global_1936384 = 0;
				iParam0->f_19 = { 0f, 0f, 0f };
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					*iParam0 = 0;
					iParam0->f_4 = 0;
					iParam0->f_5 = 0;
					func_372(0, 0, 0, 1, 1, 1, 0);
					NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
					func_417(1);
					INTERIOR::DISABLE_METRO_SYSTEM(true);
					MISC::SET_OVERRIDE_WEATHER("EXTRASUNNY");
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 0, 0);
					NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
					func_371(0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
					func_363(1, 0);
					func_334(1, 1);
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_intro")) < 1 || !func_333())
					{
						if (iParam0->f_292)
						{
							if (func_332() == 0)
							{
								STREAMING::PREFETCH_SRL("GTAO_INTRO_MALE");
								STREAMING::SET_SRL_LONG_JUMP_MODE(true);
							}
						}
					}
					func_325(14, 0);
					iParam0->f_6 = 1;
					*iParam0 = 0;
					MISC::CLEAR_BIT(iParam0, 0);
					MISC::CLEAR_BIT(iParam0, 1);
					MISC::CLEAR_BIT(iParam0, 2);
					MISC::CLEAR_BIT(iParam0, 9);
					MISC::SET_BIT(iParam0, 7);
					iParam0->f_122 = PED::ADD_SCENARIO_BLOCKING_AREA(-1012.7869f, -2747.5974f, 15f, -1052.0299f, -2716.1438f, 25f, false, true, true, true);
				}
				break;
			
			case 1:
				STREAMING::REQUEST_MODEL(joaat("frogger"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("frogger")))
				{
					if (!iParam0->f_292 || STREAMING::IS_SRL_LOADED())
					{
						if (func_322())
						{
							STREAMING::SET_ALL_MAPDATA_CULLED(0);
							func_317(1, 1, 0, 1);
							GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
							HUD::CLEAR_HELP(true);
							if (!func_196())
							{
								func_316();
							}
							func_211(0);
							func_315();
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_1574725, true, false, false, true);
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
							ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
							{
								HUD::SET_BLIP_SCALE(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
							iParam0->f_6 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!BitTest(*iParam0, 4))
					{
						if (func_314() == 65 || func_314() == 66)
						{
							STREAMING::CLEAR_FOCUS();
							STREAMING::NEW_LOAD_SCENE_START(754.2219f, 1226.8309f, 356.5081f, func_313(-14.367f, 0f, 157.3524f), 100f, 0);
							func_200(&(iParam0->f_17));
							func_22(&(iParam0->f_17), 0, 0);
							MISC::SET_BIT(iParam0, 4);
						}
					}
					else if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_START") && (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || func_201(&(iParam0->f_17), 5000, 0)))
					{
						if (!BitTest(*iParam0, 24))
						{
							if (BitTest(*iParam0, 7))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_START");
								MISC::SET_BIT(iParam0, 24);
								MISC::SET_BIT(iParam0, 21);
							}
						}
						else if (AUDIO::GET_MUSIC_PLAYTIME() > 0)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							GRAPHICS::RESET_ADAPTATION(6);
							if (!CAM::DOES_CAM_EXIST(iParam0->f_7))
							{
								iParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
								CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
							}
							CAM::SET_CAM_PARAMS(iParam0->f_7, 754.2219f, 1226.8309f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iParam0->f_7, 740.7797f, 1193.9226f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							CAM::SHAKE_CAM(iParam0->f_7, "HAND_SHAKE", 0.15f);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, true, 0);
							func_312(iParam0);
							MISC::SET_BIT(iParam0, 11);
							if (iParam0->f_292)
							{
								STREAMING::SET_SRL_READAHEAD_TIMES(9, 9, 9, 9);
								STREAMING::BEGIN_SRL();
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							iParam0->f_6 = 6;
						}
					}
				}
				break;
			
			case 6:
				func_311(iParam0, 6);
				func_310(iParam0);
				if (func_309(iParam0, 6, 0))
				{
					HUD::CLEAR_HELP(true);
					iParam0->f_6 = 7;
				}
				break;
			
			case 7:
				if (!BitTest(*iParam0, 2))
				{
					HUD::CLEAR_HELP(true);
					func_78("FMIC_INTRO2" /* GXT: In GTA Online, you can carry out Jobs with, or compete against, players around the world. */, -1);
					MISC::SET_BIT(iParam0, 2);
				}
				CAM::SET_CAM_PARAMS(iParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				STREAMING::SET_SRL_READAHEAD_TIMES(9, 13, 9, 13);
				iParam0->f_6 = 8;
				break;
			
			case 8:
				func_311(iParam0, 8);
				if (func_310(iParam0))
				{
					func_308(iParam0);
					if (func_309(iParam0, 8, 0))
					{
						iParam0->f_6 = 9;
					}
				}
				break;
			
			case 9:
				if (!BitTest(*iParam0, 10))
				{
					func_307();
					MISC::SET_BIT(iParam0, 10);
				}
				CAM::SET_CAM_PARAMS(iParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_48, false))
				{
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iParam0->f_48);
					ENTITY::SET_ENTITY_VISIBLE(iParam0->f_48, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0->f_48);
				}
				iParam0->f_6 = 10;
				break;
			
			case 10:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_48, false))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0->f_48);
				}
				func_311(iParam0, 10);
				if (func_306())
				{
					if (func_305(iParam0))
					{
						if (func_308(iParam0))
						{
							if (func_309(iParam0, 10, 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2870.8044f, 81.4979f, 13.1957f, true, false, false, true);
									ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
								}
								fVar0 = 5000f;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[0], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[0], 100, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[0], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[1], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[1], 101, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[1], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[2], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[2], 102, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[2], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[3], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[3], 103, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[3], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[4], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[4], 104, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[4], fVar0);
								}
								MISC::SET_BIT(iParam0, 15);
								CAM::DO_SCREEN_FADE_IN(800);
								iParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			
			case 14:
				if (BitTest(*iParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					func_304(iParam0);
					func_303(iParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					CAM::STOP_CAM_SHAKING(iParam0->f_7, true);
					CAM::DETACH_CAM(iParam0->f_7);
					CAM::DESTROY_CAM(iParam0->f_7, false);
					AUDIO::START_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					func_301(iParam0, 14);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 5))
				{
					func_78("FMIC_RACE1" /* GXT: Take part in Jobs, including Races, with your friends, Crew members or others and check your position on the global leaderboards in-game or on the Rockstar Social Club. */, -1);
					MISC::SET_BIT(iParam0, 5);
				}
				func_311(iParam0, 14);
				if (func_309(iParam0, 14, 0))
				{
					func_300(iParam0, 23539f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 15;
				}
				break;
			
			case 15:
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_301(iParam0, 15);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_289(iParam0);
				}
				else if (func_288(iParam0) && func_282(iParam0))
				{
					func_280(iParam0);
				}
				func_311(iParam0, 15);
				if (func_309(iParam0, 15, 0))
				{
					func_300(iParam0, 28833.33f, 75f);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 16;
				}
				break;
			
			case 16:
				if (BitTest(*iParam0, 15))
				{
					func_279(iParam0, "race_camera_3a", "mp_intro_seq@", iParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_301(iParam0, 16);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_289(iParam0);
				}
				else if (func_288(iParam0) && func_282(iParam0))
				{
					func_280(iParam0);
				}
				func_311(iParam0, 16);
				if (func_309(iParam0, 16, 0))
				{
					func_300(iParam0, 29700f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 17;
				}
				break;
			
			case 17:
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iParam0->f_9, 0.7f);
					func_301(iParam0, 17);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 6))
				{
					MISC::SET_BIT(iParam0, 6);
					func_78("FMIC_RACE2" /* GXT: You can challenge others with Jobs you have created yourself or bet on players to win and earn cash. */, -1);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_289(iParam0);
				}
				else if (func_288(iParam0) && func_282(iParam0))
				{
					func_280(iParam0);
				}
				func_311(iParam0, 17);
				if (func_309(iParam0, 17, 0))
				{
					func_300(iParam0, 36450f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 18;
				}
				break;
			
			case 18:
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_301(iParam0, 18);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_289(iParam0);
				}
				else if (func_288(iParam0) && func_282(iParam0))
				{
					func_280(iParam0);
				}
				func_311(iParam0, 18);
				if (func_278() && func_309(iParam0, 18, 0))
				{
					func_300(iParam0, 43650f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 19;
				}
				break;
			
			case 19:
				if (BitTest(*iParam0, 15))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[2]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[3]))
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[3]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[4]))
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[4]));
					}
					func_303(iParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_301(iParam0, 19);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					func_289(iParam0);
				}
				else
				{
					if (!BitTest(iParam0->f_3, 6))
					{
						if (iParam0->f_32 != 0)
						{
							if (INTERIOR::IS_INTERIOR_READY(iParam0->f_32))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_91, false))
								{
									INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_91, iParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
								}
								AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", false);
								iVar4 = 0;
								while (iVar4 < 8)
								{
									if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_49[iVar4], false))
									{
										INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_49[iVar4], iParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
									}
									iVar4++;
								}
								MISC::SET_BIT(&(iParam0->f_3), 6);
							}
						}
					}
					if (func_288(iParam0) && func_282(iParam0))
					{
						func_280(iParam0);
					}
				}
				func_277(iParam0);
				func_276(iParam0);
				func_311(iParam0, 19);
				if (func_309(iParam0, 19, 0) && BitTest(iParam0->f_3, 0))
				{
					if (BitTest(*iParam0, 12))
					{
						MISC::CLEAR_BIT(iParam0, 12);
					}
					iParam0->f_6 = 22;
				}
				else if (func_309(iParam0, 19, -4968))
				{
					if (!BitTest(*iParam0, 12))
					{
						HUD::CLEAR_HELP(true);
						MISC::SET_BIT(iParam0, 12);
					}
				}
				else if (func_309(iParam0, 19, -5618))
				{
					if (!BitTest(*iParam0, 30))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("MP_intro_logo", 0, false);
						MISC::SET_BIT(iParam0, 30);
					}
				}
				break;
			
			case 22:
				func_277(iParam0);
				func_276(iParam0);
				if (BitTest(iParam0->f_3, 0))
				{
					if (!CAM::DOES_CAM_EXIST(iParam0->f_7))
					{
						iParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 228.1892f, -1006.7584f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 228.2493f, -1006.1546f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					CAM::SHAKE_CAM(iParam0->f_7, "HAND_SHAKE", 0.1f);
					INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(iParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", false);
					GRAPHICS::RESET_ADAPTATION(0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(iParam0->f_91))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_91, false, false);
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_RACE_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					}
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 13, 9, 13);
					func_275(iParam0);
					func_274();
					func_78("FMIC_GAR" /* GXT: You can store your own collection of cars and motorcycles in Garages that you can purchase around the Map. */, -1);
					iParam0->f_6 = 23;
				}
				break;
			
			case 23:
				func_277(iParam0);
				func_276(iParam0);
				func_311(iParam0, 23);
				if (func_288(iParam0) && func_282(iParam0))
				{
					func_280(iParam0);
				}
				if (func_309(iParam0, 23, 0))
				{
					CAM::SET_CAM_PARAMS(iParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(iParam0->f_91))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_91, false, false);
					}
					func_272(iParam0, 0);
					func_272(iParam0, 1);
					func_272(iParam0, 5);
					func_272(iParam0, 6);
					iParam0->f_6 = 24;
				}
				break;
			
			case 24:
				func_277(iParam0);
				func_276(iParam0);
				func_311(iParam0, 24);
				if (func_288(iParam0) && func_282(iParam0))
				{
					func_280(iParam0);
				}
				if (func_309(iParam0, 24, 0))
				{
					iParam0->f_6 = 27;
				}
				break;
			
			case 27:
				func_277(iParam0);
				func_276(iParam0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1148.2856f, -1639.737f, 5.106698f, true, false, false, true);
				MISC::SET_BIT(iParam0, 13);
				CAM::SET_CAM_PARAMS(iParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(18, 0, 0);
				func_272(iParam0, 2);
				func_272(iParam0, 7);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_271());
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
				{
					PED::DELETE_PED(&(iParam0->f_91));
				}
				MISC::SET_BIT(iParam0, 29);
				iParam0->f_6 = 28;
				break;
			
			case 28:
				func_277(iParam0);
				func_276(iParam0);
				if (!BitTest(*iParam0, 8))
				{
					MISC::SET_BIT(iParam0, 8);
				}
				if (func_288(iParam0) && func_282(iParam0))
				{
					func_280(iParam0);
				}
				func_311(iParam0, 28);
				if ((AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_START") && BitTest(iParam0->f_3, 3)) && func_309(iParam0, 28, 0))
				{
					iParam0->f_6 = 29;
				}
				break;
			
			case 29:
				if (iParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_268(iParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("MP_M_Freemode_01"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Male_Character", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("MP_F_Freemode_01"), 0);
						}
					}
				}
				else if (func_268(iParam0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("MP_M_Freemode_01"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("MP_F_Freemode_01"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_33, false))
				{
					ENTITY::SET_ENTITY_VISIBLE(iParam0->f_33, true, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				func_266(iParam0);
				MISC::LOAD_CLOUD_HAT("CONTRAILS", 0f);
				STREAMING::SET_SRL_READAHEAD_TIMES(9, 9, 9, 9);
				func_78("FMIC_TENN" /* GXT: ~s~Challenge others to Tennis, Golf and many other Activities. */, -1);
				CUTSCENE::START_CUTSCENE(4);
				func_258(1, 1, 1, 0, 0, 0, 0);
				iParam0->f_6 = 30;
				break;
			
			case 30:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_32 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iParam0->f_32);
					}
					func_257(iParam0);
					if (iParam0->f_293)
					{
						iParam0->f_26 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_26 = 52618;
						iParam0->f_27 = 52618;
					}
					iParam0->f_6 = 31;
				}
				break;
			
			case 31:
				if (iParam0->f_295)
				{
					if (func_268(iParam0))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Male_Character", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_35, false, false);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_34, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iParam0->f_34, -1028.4062f, -2732.7822f, 19.5931f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iParam0->f_34, -106.11f);
						func_256(iParam0, 3099.997f);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0->f_34, true);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
					func_301(iParam0, 33);
					func_303(iParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (BitTest(*iParam0, 29))
				{
					if (CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME() || CUTSCENE::GET_CUTSCENE_TIME() > 3254)
					{
						MISC::CLEAR_BIT(iParam0, 29);
					}
				}
				if ((func_255(iParam0) && func_254(iParam0)) && !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_293)
					{
						iParam0->f_28 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_29 = 134784;
						if (func_268(iParam0))
						{
							iParam0->f_28 = 134784;
						}
						else
						{
							iParam0->f_28 = 134784;
						}
					}
					CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
					CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
					if (BitTest(*iParam0, 7))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_START");
						MISC::SET_BIT(iParam0, 21);
					}
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
					if (!BitTest(*iParam1, 1))
					{
						MISC::SET_BIT(iParam1, 1);
					}
					func_253(iParam0);
					func_252(iParam0);
					func_258(0, 1, 1, 0, 0, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					MISC::CLEAR_BIT(iParam0, 13);
					iParam0->f_6 = 33;
				}
				else
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - (iParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					if (!BitTest(*iParam0, 22))
					{
						if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() == 1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 59, 0);
							MISC::SET_BIT(iParam0, 22);
						}
					}
					if (func_250(iParam0))
					{
						if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() == 2)
						{
							if (!BitTest(*iParam0, 18))
							{
								MISC::SET_BIT(iParam0, 18);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23146)
							{
								if (!BitTest(*iParam0, 27))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									MISC::SET_BIT(iParam0, 27);
								}
								if (!BitTest(*iParam0, 28))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									MISC::SET_BIT(iParam0, 28);
								}
							}
							CAM::SET_CUTSCENE_CAM_FAR_CLIP_THIS_UPDATE(4950f);
							if (BitTest(*iParam0, 22))
							{
								NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
								MISC::CLEAR_BIT(iParam0, 22);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23254)
							{
								func_249(iParam0);
							}
						}
					}
					if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() > 2)
					{
						func_252(iParam0);
						if (!BitTest(*iParam0, 22))
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
							MISC::SET_BIT(iParam0, 22);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0->f_34);
							VEHICLE::SET_VEHICLE_LIGHTS(iParam0->f_34, 2);
						}
					}
					iParam0->f_31 = CUTSCENE::GET_CUTSCENE_TIME();
				}
				break;
			
			case 33:
				if (func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (func_309(iParam0, 33, -5450))
						{
							if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 2))
					{
						if (func_309(iParam0, 33, -5450))
						{
							if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 2);
							}
						}
					}
				}
				if (!func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (func_309(iParam0, 33, -5450))
						{
							if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					AUDIO::START_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 33);
				func_247(iParam0);
				if (func_309(iParam0, 33, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 34;
				}
				break;
			
			case 34:
				if (!func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 2))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 2);
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (func_268(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.129f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.129f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.145f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.145f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_301(iParam0, 34);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 34);
				func_247(iParam0);
				if (func_309(iParam0, 34, 0))
				{
					func_256(iParam0, 18966.65f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 35;
				}
				break;
			
			case 35:
				if (func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (func_309(iParam0, 34, 1100))
						{
							if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 3);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 4))
					{
						if (func_309(iParam0, 34, 1100))
						{
							if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 4);
							}
						}
					}
				}
				if (!func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (func_309(iParam0, 34, 1000))
						{
							if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 3);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_301(iParam0, 35);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 35);
				func_247(iParam0);
				if (func_309(iParam0, 35, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 36;
				}
				break;
			
			case 36:
				if (func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 5))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 5);
						}
					}
				}
				if (!func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 4))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 4);
						}
					}
					if (!BitTest(iParam0->f_1, 5))
					{
						if (func_309(iParam0, 36, -3750))
						{
							if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 5);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (func_268(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.363f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.363f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.298f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.298f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_301(iParam0, 36);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 36);
				func_247(iParam0);
				if (func_309(iParam0, 36, 0))
				{
					func_256(iParam0, 42700.96f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 37;
				}
				break;
			
			case 37:
				if (func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 6);
						}
					}
				}
				if (!func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (func_309(iParam0, 36, 1000))
						{
							if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 6);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_301(iParam0, 37);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 37);
				func_247(iParam0);
				if (func_309(iParam0, 37, 0))
				{
					func_256(iParam0, 51033.28f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 38;
				}
				break;
			
			case 38:
				if (func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 7);
						}
					}
					if (!BitTest(iParam0->f_1, 8))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 9);
						}
					}
				}
				if (!func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (func_309(iParam0, 37, 2500))
						{
							if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 7);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_301(iParam0, 38);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 38);
				func_247(iParam0);
				if (func_309(iParam0, 38, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 39;
				}
				break;
			
			case 39:
				if (!func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 8))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 9);
						}
					}
					if (!BitTest(iParam0->f_1, 31))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 31);
						}
					}
				}
				if (func_268(iParam0))
				{
					if (!BitTest(iParam0->f_1, 31))
					{
						if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 31);
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (func_268(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.811f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.811f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.791f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.791f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_301(iParam0, 39);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 39);
				func_247(iParam0);
				if (func_309(iParam0, 39, 0))
				{
					func_256(iParam0, 85050f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 40;
				}
				break;
			
			case 40:
				if (!BitTest(iParam0->f_1, 31))
				{
					if (func_248(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						MISC::SET_BIT(&(iParam0->f_1), 31);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_301(iParam0, 40);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 40);
				if (func_247(iParam0) && func_309(iParam0, 40, 0))
				{
					func_256(iParam0, 116366.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 41;
				}
				break;
			
			case 41:
				if (BitTest(*iParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
					func_303(iParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_301(iParam0, 41);
					MISC::UNLOAD_CLOUD_HAT("CONTRAILS", 0f);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 41);
				if (func_309(iParam0, 41, 0))
				{
					GRAPHICS::RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(true);
					func_256(iParam0, 127166.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 42;
				}
				break;
			
			case 42:
				if (BitTest(*iParam0, 15))
				{
					func_246(iParam0);
					func_303(iParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_301(iParam0, 42);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 42);
				if (func_309(iParam0, 42, 0))
				{
					GRAPHICS::RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(false);
					func_256(iParam0, 170800f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 43;
				}
				break;
			
			case 43:
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_301(iParam0, 43);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 43);
				if (func_309(iParam0, 43, 0))
				{
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					func_256(iParam0, 191799.8f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 44;
				}
				break;
			
			case 44:
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_301(iParam0, 44);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 44);
				if (func_309(iParam0, 44, 0))
				{
					func_256(iParam0, 196633.1f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 45;
				}
				break;
			
			case 45:
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_301(iParam0, 45);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 45);
				if (func_309(iParam0, 45, 0))
				{
					func_256(iParam0, 201466.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 46;
				}
				break;
			
			case 46:
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_301(iParam0, 46);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 46);
				if (func_309(iParam0, 46, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 47;
				}
				break;
			
			case 47:
				func_245(iParam0);
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (func_268(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.74f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.815f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_301(iParam0, 47);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 47);
				if (func_309(iParam0, 47, 0))
				{
					func_256(iParam0, 213066.4f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 48;
				}
				break;
			
			case 48:
				func_245(iParam0);
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_301(iParam0, 48);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 48);
				if (func_309(iParam0, 48, 0))
				{
					MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 3);
					func_244(iParam0, 10177.75f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 49;
				}
				break;
			
			case 49:
				func_245(iParam0);
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_301(iParam0, 49);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				func_311(iParam0, 49);
				if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_END") && func_309(iParam0, 49, 0))
				{
					func_242(iParam0, 4500f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 50;
				}
				break;
			
			case 50:
				func_245(iParam0);
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					func_303(iParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (iParam0->f_292)
					{
						STREAMING::END_SRL();
						MISC::CLEAR_BIT(iParam0, 11);
					}
					func_301(iParam0, 50);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 20))
				{
					if (func_268(iParam0))
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT1", 8);
					}
					if (iParam0->f_295)
					{
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							if (func_268(iParam0))
							{
								CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Female_Character", 0, 1);
							}
							else
							{
								CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
							}
						}
					}
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						MISC::SET_BIT(iParam0, 20);
					}
				}
				func_311(iParam0, 50);
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0->f_34))
					{
						if (ENTITY::GET_ENTITY_SPEED(iParam0->f_34) < 1f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0->f_34);
						}
					}
				}
				if (func_309(iParam0, 50, 0) && BitTest(*iParam0, 20))
				{
					if (BitTest(*iParam0, 21))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
						MISC::CLEAR_BIT(iParam0, 21);
					}
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0->f_34);
					iParam0->f_6 = 51;
				}
				break;
			
			case 51:
				if (iParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_268(iParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				MISC::SET_BIT(iParam0, 13);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				CUTSCENE::START_CUTSCENE(4);
				func_258(1, 1, 1, 0, 0, 0, 0);
				iParam0->f_6 = 52;
				break;
			
			case 52:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (iParam0->f_293)
					{
						iParam0->f_30 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_30 = func_241(iParam0);
					}
					iParam0->f_14 = 0;
					iParam0->f_6 = 53;
				}
				break;
			
			case 53:
				if (iParam0->f_295)
				{
					if (func_268(iParam0))
					{
						if (!BitTest(*iParam0, 23))
						{
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1));
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
									MISC::SET_BIT(iParam0, 23);
								}
							}
						}
					}
					else if (!BitTest(*iParam0, 23))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_1", 0))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1));
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
								MISC::SET_BIT(iParam0, 23);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0->f_34, 5f);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					func_240(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_239(PLAYER::PLAYER_ID()))
				{
					func_238(1);
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - (iParam0->f_30 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					switch (iParam0->f_14)
					{
						case 0:
							func_237(iParam0, 0);
							break;
						
						case 10:
							func_237(iParam0, 1);
							break;
						
						case 20:
							func_237(iParam0, 2);
							break;
						
						case 30:
							func_237(iParam0, 3);
							break;
						
						case 40:
							func_237(iParam0, 4);
							break;
						
						case 50:
							func_237(iParam0, 5);
							break;
						
						case 60:
							func_237(iParam0, 6);
							break;
						
						case 70:
							func_237(iParam0, 7);
							break;
						
						case 80:
							func_237(iParam0, 8);
							break;
						
						case 90:
							func_237(iParam0, 9);
							break;
						
						case 100:
							if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_36))
							{
								PED::DELETE_PED(&(iParam0->f_36));
							}
							break;
					}
					iParam0->f_14++;
				}
				else
				{
					CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
					CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
					func_258(0, 1, 1, 0, 0, 0, 0);
					MISC::CLEAR_BIT(iParam0, 13);
					iParam0->f_6 = 57;
				}
				break;
			
			case 55:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!BitTest(*iParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						MISC::SET_BIT(iParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						if (iParam0->f_292)
						{
							STREAMING::END_SRL();
							MISC::CLEAR_BIT(iParam0, 11);
						}
						func_200(&(iParam0->f_17));
						func_22(&(iParam0->f_17), 0, 0);
						MISC::SET_BIT(iParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (func_201(&(iParam0->f_17), 10000, 0))
				{
					if (func_236(iParam0))
					{
						func_304(iParam0);
						func_252(iParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
							}
						}
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
								{
									TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						func_240(1);
						if (!func_239(PLAYER::PLAYER_ID()))
						{
							func_238(1);
						}
						func_258(0, 1, 1, 0, 0, 0, 0);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						if (BitTest(*iParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							MISC::CLEAR_BIT(iParam0, 21);
						}
						MISC::SET_BIT(iParam0, 1);
						MISC::SET_BIT(iParam0, 15);
						iParam0->f_6 = 57;
					}
				}
				break;
			
			case 56:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!BitTest(*iParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						MISC::SET_BIT(iParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						if (iParam0->f_292)
						{
							STREAMING::END_SRL();
							MISC::CLEAR_BIT(iParam0, 11);
						}
						func_200(&(iParam0->f_17));
						func_22(&(iParam0->f_17), 0, 0);
						MISC::SET_BIT(iParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (func_201(&(iParam0->f_17), 10000, 0))
				{
					if (func_288(iParam0))
					{
						func_304(iParam0);
						func_252(iParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
								{
									TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!func_239(PLAYER::PLAYER_ID()))
						{
						}
						func_258(0, 1, 1, 0, 0, 0, 0);
						if (BitTest(*iParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							MISC::CLEAR_BIT(iParam0, 21);
						}
						CAM::DO_SCREEN_FADE_IN(250);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 3);
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - func_233(iParam0, 48, 0));
						iParam0->f_293 = 1;
						func_244(iParam0, 10177.75f);
						MISC::SET_BIT(iParam0, 15);
						iParam0->f_6 = 49;
					}
				}
				break;
			
			case 57:
				func_311(iParam0, 57);
				bVar8 = !iParam0->f_288;
				func_221(iParam0, bVar8, 0);
				if (iParam0->f_292)
				{
					STREAMING::END_SRL();
					MISC::CLEAR_BIT(iParam0, 11);
				}
				if (!PED::IS_PED_INJURED(iParam0->f_35))
				{
					TASK::TASK_STAND_STILL(iParam0->f_35, -1);
					PED::SET_PED_KEEP_TASK(iParam0->f_35, true);
				}
				NETWORK::NETWORK_SET_VOICE_ACTIVE(true);
				if (!iParam0->f_288)
				{
					func_33(115, 1, -1, 1);
					return 1;
				}
				break;
			
			case 58:
				break;
			
			case 54:
				break;
			
			case 59:
				return 1;
				break;
		}
		func_220(iParam0);
		if (!iParam0->f_291)
		{
			if (iParam0->f_293)
			{
				iParam0->f_289 = SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iParam0->f_13));
			}
			else
			{
				iParam0->f_289 = SYSTEM::TO_FLOAT(func_241(iParam0));
			}
			iParam0->f_290 = func_219(iParam0);
		}
		iParam0->f_291 = 0;
		if (iParam0->f_292 && BitTest(*iParam0, 11))
		{
			if (iParam0->f_293)
			{
				STREAMING::SET_SRL_TIME(iParam0->f_289);
			}
			else
			{
				STREAMING::SET_SRL_TIME(iParam0->f_290);
			}
		}
		func_216(iParam0);
		if (BitTest(*iParam0, 12))
		{
			if (func_278())
			{
				func_215();
			}
		}
		if (iParam0->f_6 > 0 && iParam0->f_6 <= 57)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 60);
				}
			}
			func_213(iParam0);
			HUD::DISABLE_FRONTEND_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		}
		if (Global_2794162.f_1955)
		{
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
		}
	}
	return 0;
}

void func_213(int* iParam0)//Position - 0xA013
{
	int iVar0;
	
	if (!BitTest(*iParam0, 9))
	{
		if (iParam0->f_6 > 0)
		{
			if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
				{
					iVar0 = PLAYER::PLAYER_ID() + 32;
					NETWORK::NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(1, iVar0);
					func_214(1);
					MISC::SET_BIT(iParam0, 9);
				}
			}
			else
			{
				func_214(1);
				MISC::SET_BIT(iParam0, 9);
			}
		}
	}
}

void func_214(bool bParam0)//Position - 0xA069
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 18))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 18);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 18))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 18);
	}
}

void func_215()//Position - 0xA0C6
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_1577886, 255, 255, 255, 255, 0);
	if (Global_1577888 == 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1577886, "SET_BIG_LOGO_VISIBLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		Global_1577888 = 1;
	}
}

void func_216(int* iParam0)//Position - 0xA105
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iParam0->f_90]))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0->f_58[iParam0->f_90], false))
		{
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_58[iParam0->f_90], true) };
		if (Var0.f_2 < -50f)
		{
			func_217(iParam0, iParam0->f_90);
		}
	}
	iParam0->f_90++;
	if (iParam0->f_90 >= 15)
	{
		iParam0->f_90 = 0;
	}
}

void func_217(var uParam0, bool bParam1)//Position - 0xA172
{
	struct<3> Var0;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58[bParam1]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_58[bParam1], false))
		{
		}
		func_218(bParam1, &Var0, &fVar3);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_58[bParam1], Var0, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_58[bParam1], fVar3);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[bParam1], true);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_58[bParam1]);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_58[bParam1], false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_58[bParam1], false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_74[bParam1]))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_74[bParam1], false))
		{
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_74[bParam1], false, false);
	}
}

void func_218(int iParam0, var uParam1, var uParam2)//Position - 0xA227
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -285.8592f, -914.3868f, 30.08f };
			*uParam2 = 77.3101f;
			break;
		
		case 1:
			*uParam1 = { -303.4057f, -910.434f, 30.0797f };
			*uParam2 = 77.3122f;
			break;
		
		case 2:
			*uParam1 = { -328.6838f, -905.0965f, 30.0783f };
			*uParam2 = 74.4975f;
			break;
		
		case 3:
			*uParam1 = { -353.6149f, -896.1278f, 30.0707f };
			*uParam2 = 358.6274f;
			break;
		
		case 4:
			*uParam1 = { -354.2628f, -915.5025f, 30.08f };
			*uParam2 = 358.0417f;
			break;
		
		case 5:
			*uParam1 = { -354.6489f, -935.3478f, 30.08f };
			*uParam2 = 0.5678f;
			break;
		
		case 6:
			*uParam1 = { -354.4816f, -953.4573f, 30.08f };
			*uParam2 = 0.4572f;
			break;
		
		case 7:
			*uParam1 = { -343.5193f, -967.0103f, 30.08f };
			*uParam2 = 247.6961f;
			break;
		
		case 8:
			*uParam1 = { -324.7872f, -974.6605f, 30.08f };
			*uParam2 = 247.7728f;
			break;
		
		case 9:
			*uParam1 = { -301.3824f, -977.9114f, 30.08f };
			*uParam2 = 249.2065f;
			break;
		
		case 10:
			*uParam1 = { -342.4198f, -1019.4559f, 29.3849f };
			*uParam2 = 250.0953f;
			break;
		
		case 11:
			*uParam1 = { -317.1607f, -1025.8585f, 29.3849f };
			*uParam2 = 250.7381f;
			break;
		
		case 12:
			*uParam1 = { -302.658f, -1022.4009f, 29.385f };
			*uParam2 = 244.0013f;
			break;
		
		case 13:
			*uParam1 = { -283.3195f, -1029.4685f, 29.385f };
			*uParam2 = 252.7933f;
			break;
		
		case 14:
			*uParam1 = { -276.4286f, -1013.5339f, 29.385f };
			*uParam2 = 339.4764f;
			break;
	}
}

float func_219(int* iParam0)//Position - 0xA45D
{
	float fVar0;
	float fVar1;
	
	if (iParam0->f_6 >= 31 && iParam0->f_6 < 33)
	{
		if (func_268(iParam0))
		{
			fVar0 = SYSTEM::TO_FLOAT((iParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
			if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() > 2)
			{
				fVar1 = ((fVar0 - 134735f) / SYSTEM::TO_FLOAT(52633));
				fVar0 = (83986f + (fVar1 * 50715f));
			}
		}
		else
		{
			fVar0 = SYSTEM::TO_FLOAT((iParam0->f_27 + CUTSCENE::GET_CUTSCENE_TIME()));
		}
		return fVar0;
	}
	return iParam0->f_289;
}

void func_220(int* iParam0)//Position - 0xA4DA
{
	if (BitTest(*iParam0, 29))
	{
		GRAPHICS::DRAW_SPOT_LIGHT(-1160.9424f, -1657.6859f, 5.129621f, 0.8912546f, -0.3982928f, -0.21685989f, 226, 130, 78, 3.999999f, 6.6f, 1f, 30f, 1f);
		GRAPHICS::DRAW_SPOT_LIGHT(-1157.3236f, -1659.8784f, 5.449264f, -0.84035075f, 0.39846787f, -0.36746988f, 226, 130, 78, 3.900002f, 8.8f, 1f, 30f, 1f);
	}
}

void func_221(int* iParam0, bool bParam1, bool bParam2)//Position - 0xA559
{
	if (!BitTest(*iParam0, 0))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(false);
		}
		INTERIOR::DISABLE_METRO_SYSTEM(false);
		if (iParam0->f_292)
		{
			STREAMING::SET_SRL_LONG_JUMP_MODE(false);
			STREAMING::END_SRL();
			MISC::CLEAR_BIT(iParam0, 11);
		}
		if (BitTest(*iParam0, 14))
		{
			STREAMING::CLEAR_FOCUS();
			MISC::CLEAR_BIT(iParam0, 14);
		}
		func_232();
		func_253(iParam0);
		func_304(iParam0);
		func_252(iParam0);
		func_274();
		func_257(iParam0);
		func_275(iParam0);
		func_231(iParam0);
		func_246(iParam0);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		if (bParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_34))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iParam0->f_34));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_35));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_36))
		{
			PED::DELETE_PED(&(iParam0->f_36));
		}
		if (!iParam0->f_288)
		{
			func_417(0);
		}
		func_229();
		func_222();
		func_258(0, 1, 1, 0, 0, 0, 0);
		CAM::SET_WIDESCREEN_BORDERS(false, -1);
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true);
			}
		}
		if (BitTest(*iParam0, 21))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
			MISC::CLEAR_BIT(iParam0, 21);
		}
		NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
		func_371(1);
		if (BitTest(*iParam0, 26))
		{
			func_363(1, 0);
			MISC::CLEAR_BIT(iParam0, 26);
		}
		Global_2672524.f_3542 = 0;
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			STREAMING::SET_RENDER_HD_ONLY(false);
		}
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
		if (bParam1)
		{
		}
		func_197(0);
		func_211(1);
		Global_2794162.f_1955 = 0;
		Global_2794162.f_1954 = 0;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_RACE_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_LAMAR_DRIVE_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
		}
		func_325(14, 1);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::UNLOAD_CLOUD_HAT("CONTRAILS", 0f);
		VEHICLE::REMOVE_VEHICLE_RECORDING(5, "FMINTRO");
		VEHICLE::REMOVE_VEHICLE_RECORDING(6, "FMINTRO");
		VEHICLE::REMOVE_VEHICLE_RECORDING(7, "FMINTRO");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_female");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_male");
		if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
		{
			HUD::SET_BLIP_SCALE(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0.7f);
		}
		HUD::SET_RADAR_ZOOM(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
			NETWORK::NETWORK_SET_VOICE_ACTIVE(true);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		MISC::SET_BIT(iParam0, 0);
	}
}

void func_222()//Position - 0xA7B5
{
	func_223(0);
}

void func_223(bool bParam0)//Position - 0xA7C2
{
	if (bParam0)
	{
		func_228();
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8371, 16);
		}
		Global_20500.f_1 = 1;
		if (func_84(0))
		{
			func_224(0);
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

void func_224(int iParam0)//Position - 0xA825
{
	if (func_227())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_226())
		{
			func_225(1, 1);
		}
		else
		{
			func_225(0, 0);
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
	if (!func_169())
	{
		Global_20500.f_1 = 3;
	}
}

void func_225(bool bParam0, bool bParam1)//Position - 0xA8AF
{
	if (bParam0)
	{
		if (func_84(0))
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

bool func_226()//Position - 0xA923
{
	return BitTest(Global_1963795, 5);
}

bool func_227()//Position - 0xA931
{
	return BitTest(Global_1963795, 19);
}

void func_228()//Position - 0xA940
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}
}

void func_229()//Position - 0xA969
{
	if (!Global_1574747)
	{
		return;
	}
	func_230();
}

void func_230()//Position - 0xA980
{
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
}

void func_231(int* iParam0)//Position - 0xA99F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_237(iParam0, iVar0);
		iVar0++;
	}
}

void func_232()//Position - 0xA9C2
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-533.6674f, -1961.7877f, 16.82666f, -429.5074f, -1860.3097f, 22.79688f, 20.5f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(224.4978f, -274.7691f, 48.879707f, 263.15814f, -170.51065f, 63.18772f, 21f, 1);
}

int func_233(int* iParam0, int iParam1, bool bParam2)//Position - 0xAA1A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam1 < 31)
	{
		iVar1 = 0;
		iVar2 = 6;
		iVar3 = 28;
	}
	else
	{
		if (bParam2)
		{
			iVar1 = iParam0->f_29;
		}
		else
		{
			iVar1 = iParam0->f_28;
		}
		iVar2 = 33;
		iVar3 = 57;
	}
	iVar0 = 0;
	while (iVar0 < (iVar3 - iVar2) + 1)
	{
		iVar4 = (iVar2 + iVar0);
		if (bParam2)
		{
			iVar1 = (iVar1 + func_235(iVar4));
		}
		else
		{
			iVar1 = (iVar1 + func_234(iVar4));
		}
		if (iParam1 == iVar4)
		{
			return iVar1;
		}
		iVar0++;
	}
	return iVar1;
}

int func_234(int iParam0)//Position - 0xAA9D
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_235(int iParam0)//Position - 0xAC7C
{
	switch (iParam0)
	{
		case 6:
			return 5239;
			break;
		
		case 8:
			return 5314;
			break;
		
		case 10:
			return 5274;
			break;
		
		case 14:
			return 7827;
			break;
		
		case 15:
			return 2661;
			break;
		
		case 16:
			return 2669;
			break;
		
		case 17:
			return 2491;
			break;
		
		case 18:
			return 3453;
			break;
		
		case 19:
			return 11245;
			break;
		
		case 23:
			return 2557;
			break;
		
		case 24:
			return 2059;
			break;
		
		case 28:
			return 1746;
			break;
		
		case 33:
			return 6200;
			break;
		
		case 34:
			return 2300;
			break;
		
		case 35:
			return 3933;
			break;
		
		case 36:
			return 8467;
			break;
		
		case 37:
			return 4000;
			break;
		
		case 38:
			return 7600;
			break;
		
		case 39:
			return 4700;
			break;
		
		case 40:
			return 5421;
			break;
		
		case 41:
			return 4487;
			break;
		
		case 42:
			return 4578;
			break;
		
		case 43:
			return 4664;
			break;
		
		case 44:
			return 2247;
			break;
		
		case 45:
			return 2336;
			break;
		
		case 46:
			return 3521;
			break;
		
		case 47:
			return 2510;
			break;
		
		case 48:
			return 3455;
			break;
		
		case 49:
			return 9318;
			break;
		
		case 50:
			return 2014;
			break;
		
		case 57:
			return 0;
			break;
	}
	return 0;
}

int func_236(int* iParam0)//Position - 0xAE5B
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("IG_LamarDavis");
	iVar1 = joaat("emperor");
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_34))
		{
			iParam0->f_34 = VEHICLE::CREATE_VEHICLE(iVar1, -198.221f, 301.8606f, 95.9455f, 148.1586f, false, false, false);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iParam0->f_34, true);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_34, false);
			ENTITY::SET_ENTITY_PROOFS(iParam0->f_34, true, true, true, true, true, true, true, false);
			VEHICLE::SET_VEHICLE_LIGHTS(iParam0->f_34, 2);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
			{
				iParam0->f_35 = PED::CREATE_PED(26, iVar0, -195.2f, 307.1825f, 95.9455f, 143.6341f, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_35, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_34, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_35, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_35, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(iParam0->f_35, true, true, true, true, true, true, true, false);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_34) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
	{
		return 0;
	}
	return 1;
}

void func_237(int* iParam0, int iParam1)//Position - 0xAF81
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iParam1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_58[iParam1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_74[iParam1]))
	{
		PED::DELETE_PED(&(iParam0->f_74[iParam1]));
	}
}

void func_238(bool bParam0)//Position - 0xAFBF
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143), 22);
	}
}

bool func_239(int iParam0)//Position - 0xAFF5
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_143, 22);
}

void func_240(bool bParam0)//Position - 0xB00B
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 4);
	}
}

int func_241(int* iParam0)//Position - 0xB03F
{
	if (iParam0->f_6 < 31)
	{
		return AUDIO::GET_MUSIC_PLAYTIME();
	}
	if (iParam0->f_6 < 33)
	{
		return (iParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME());
	}
	return (iParam0->f_28 + AUDIO::GET_MUSIC_PLAYTIME());
}

void func_242(int* iParam0, float fParam1)//Position - 0xB07B
{
	func_243(iParam0->f_34, 7, "FMINTRO", fParam1, 1);
}

void func_243(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)//Position - 0xB093
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (bParam4)
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0, iParam1, sParam2, true);
		}
		else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0, iParam1, sParam2, true);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iParam0, true);
		}
		else
		{
			iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, sParam2);
			if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0) != iVar0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0, iParam1, sParam2, true);
				VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iParam0, true);
			}
		}
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0, (fParam3 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0)));
	}
}

void func_244(int* iParam0, float fParam1)//Position - 0xB113
{
	func_243(iParam0->f_34, 6, "FMINTRO", fParam1, 1);
}

void func_245(int* iParam0)//Position - 0xB12B
{
	int iVar0;
	int iVar1;
	
	if (!iParam0->f_296)
	{
		iVar0 = MISC::GET_HASH_KEY("ss1_rd1_03");
		iVar1 = iVar0;
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
		{
			func_9(iVar1);
			iParam0->f_296 = 1;
		}
	}
}

void func_246(int* iParam0)//Position - 0xB160
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_37[iVar0]))
		{
			PED::DELETE_PED(&(iParam0->f_37[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGoon_02"));
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
}

int func_247(int* iParam0)//Position - 0xB1AF
{
	int iVar0;
	
	if (BitTest(iParam0->f_3, 5))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGoon_02"));
		STREAMING::REQUEST_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
		if ((STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGoon_02")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_leaning@male@wall@back@foot_up@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@base"))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_37[iVar0]))
				{
					iParam0->f_37[iVar0] = PED::CREATE_PED(4, joaat("G_M_Y_MexGoon_02"), -85.925f, -1233.407f, 27.759f, 0f, false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_37[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_37[iVar0], true);
					switch (iVar0)
					{
						case 0:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -85.925f, -1233.407f, 27.759f, 0f, 0f, 97.75f, 1000f, -1000f, -1, 1025, 0f, 2, 0);
							break;
						
						case 1:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -86.487f, -1232.985f, 28.759f, 0f, 0f, -110.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 2:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -82.139f, -1203.525f, 26.574f, 0f, 0f, 90.75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 3:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -83.539f, -1203.537f, 27.549f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 4:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -83.75f, -1197.136f, 26.471f, 0f, 0f, -174.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 5:
							ENTITY::SET_ENTITY_COORDS(iParam0->f_37[iVar0], -82.0542f, -1199.2643f, 26.592f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_37[iVar0], 76.8852f);
							WEAPON::GIVE_WEAPON_TO_PED(iParam0->f_37[iVar0], joaat("WEAPON_ASSAULTRIFLE"), 100, true, true);
							ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_37[iVar0], true);
							break;
						
						case 6:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_leaning@male@wall@back@foot_up@idle_a", "idle_a", -86f, -1222.397f, 27.417f, 0f, 0f, 98.75f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 7:
							ENTITY::SET_ENTITY_COORDS(iParam0->f_37[iVar0], -85.5161f, -1205.7815f, 26.5847f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_37[iVar0], 87.5786f);
							WEAPON::GIVE_WEAPON_TO_PED(iParam0->f_37[iVar0], joaat("WEAPON_ASSAULTRIFLE"), 100, true, true);
							ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_37[iVar0], true);
							break;
						
						case 8:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.1f, -1221.762f, 28.367f, 0f, 0f, -85.25f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						
						case 9:
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0->f_37[iVar0], "amb@world_human_hang_out_street@male_a@base", "base", -87.063f, -1222.918f, 28.417f, 0f, 0f, -45.5f, 1000f, -1000f, -1, 1, 0f, 2, 0);
							break;
						}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_37[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGoon_02"));
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_leaning@male@wall@back@foot_up@idle_a");
		STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
		MISC::SET_BIT(&(iParam0->f_3), 5);
		return 1;
	}
	return 0;
}

bool func_248(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB584
{
	func_174(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_165(sParam2, iParam4, 0);
}

void func_249(int* iParam0)//Position - 0xB5D8
{
	int iVar0;
	struct<3> Var1;
	
	if (!BitTest(*iParam0, 25))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -1403.4198f, -2437.4473f, 12.9496f };
					break;
				
				case 1:
					Var1 = { -1245.7578f, -2311.979f, 12.9445f };
					break;
			}
			if (!PED::IS_PED_INJURED(iParam0->f_98[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[iVar0], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_92[iVar0], false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0->f_92[iVar0], 10f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam0->f_98[iVar0], iParam0->f_92[iVar0], Var1, 5f, 0, ENTITY::GET_ENTITY_MODEL(iParam0->f_92[iVar0]), 262144, 1f, 100f);
			}
			iVar0++;
		}
		MISC::SET_BIT(iParam0, 25);
	}
}

int func_250(int* iParam0)//Position - 0xB6B3
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (BitTest(iParam0->f_3, 11))
	{
		return 1;
	}
	iVar5 = joaat("shamal");
	STREAMING::REQUEST_MODEL(iVar5);
	STREAMING::REQUEST_MODEL(func_251());
	if (STREAMING::HAS_MODEL_LOADED(iVar5))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { -1358.9728f, -2361.92f, 12.9502f };
						fVar4 = 149.9339f;
						break;
					
					case 1:
						Var1 = { -1302.004f, -2279.3777f, 12.9468f };
						fVar4 = 239.9712f;
						break;
				}
				iParam0->f_92[iVar0] = VEHICLE::CREATE_VEHICLE(iVar5, Var1, fVar4, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0->f_92[iVar0], 5f);
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_92[iVar0], true);
				VEHICLE::SET_VEHICLE_LIGHTS(iParam0->f_92[iVar0], 2);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (STREAMING::HAS_MODEL_LOADED(func_251()))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_98[iVar0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[iVar0], false))
					{
						iParam0->f_98[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iParam0->f_92[iVar0], 4, func_251(), -1, false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_98[iVar0], true);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_92[iVar0], true, true, false);
					}
				}
			}
			iVar0++;
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_251());
	MISC::SET_BIT(&(iParam0->f_3), 11);
	return 1;
}

int func_251()//Position - 0xB85F
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_252(int* iParam0)//Position - 0xB86F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_98[iVar0]))
		{
			PED::DELETE_PED(&(iParam0->f_98[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_251());
}

void func_253(int* iParam0)//Position - 0xB8D0
{
	int iVar0;
	
	if (BitTest(iParam0->f_3, 2))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_mp_jet_01_s"));
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_33))
		{
			OBJECT::DELETE_OBJECT(&(iParam0->f_33));
		}
		if (iParam0->f_294)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_120))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_120, false);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0->f_121))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iParam0->f_121, false);
			}
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				STREAMING::REMOVE_PTFX_ASSET();
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_104[iVar0]))
			{
				PED::DELETE_PED(&(iParam0->f_104[iVar0]));
			}
			iVar0++;
		}
		MISC::CLEAR_BIT(&(iParam0->f_3), 2);
	}
}

int func_254(int* iParam0)//Position - 0xB96E
{
	if (func_268(iParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_female");
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_female") && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_male");
		STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_1_lamar_drive_radio");
		if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_male") && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_1_lamar_drive_radio"))
		{
			return 1;
		}
	}
	return 0;
}

int func_255(int* iParam0)//Position - 0xB9DB
{
	int iVar0;
	
	iVar0 = joaat("CS_LamarDavis");
	if (!BitTest(iParam0->f_3, 10))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_36))
			{
				iParam0->f_36 = PED::CREATE_PED(26, iVar0, -976.6968f, -2679.8606f, 35.6049f, 138.062f, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_36, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_36, true);
				ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_36, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(iParam0->f_36, true, true, true, true, true, true, true, false);
				func_418(&(iParam0->f_123), 1, iParam0->f_36, "Lamar", 0, 1);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_36))
		{
			return 0;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		MISC::SET_BIT(&(iParam0->f_3), 10);
	}
	return 1;
}

void func_256(int* iParam0, float fParam1)//Position - 0xBAA1
{
	func_243(iParam0->f_34, 5, "FMINTRO", fParam1, 0);
}

void func_257(int* iParam0)//Position - 0xBAB9
{
	int iVar0;
	
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_271());
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_272(iParam0, iVar0);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
	{
		PED::DELETE_PED(&(iParam0->f_91));
	}
}

void func_258(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xBAF7
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_265(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_169())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_264(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_265(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_264(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_262(PLAYER::PLAYER_ID())) && !func_260(PLAYER::PLAYER_ID(), 0)) && !func_259()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_262(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_259()//Position - 0xBC44
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_260(int iParam0, int iParam1)//Position - 0xBC5E
{
	bool bVar0;
	
	if (!func_58(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_261(-1, 0) == 8;
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

int func_261(int iParam0, bool bParam1)//Position - 0xBCB7
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_30();
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

int func_262(int iParam0)//Position - 0xBCF8
{
	if (func_260(iParam0, 0))
	{
		return 1;
	}
	if (func_263())
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

bool func_263()//Position - 0xBD37
{
	return BitTest(Global_2621446, 3);
}

int func_264(bool bParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0xBD45
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

void func_265(int iParam0)//Position - 0xBD78
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

void func_266(int* iParam0)//Position - 0xBD9B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_104[iVar0], false))
		{
			PED::FINALIZE_HEAD_BLEND(iParam0->f_104[iVar0]);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_104[iVar0], func_267(iVar0), 0, 0, 64);
		}
		iVar0++;
	}
}

char* func_267(int iParam0)//Position - 0xBDE8
{
	switch (iParam0)
	{
		case 0:
			return "MP_Plane_Passenger_1";
			break;
		
		case 1:
			return "MP_Plane_Passenger_2";
			break;
		
		case 2:
			return "MP_Plane_Passenger_3";
			break;
		
		case 3:
			return "MP_Plane_Passenger_4";
			break;
		
		case 4:
			return "MP_Plane_Passenger_5";
			break;
		
		case 5:
			return "MP_Plane_Passenger_6";
			break;
		
		case 6:
			return "MP_Plane_Passenger_7";
			break;
	}
	return "";
}

int func_268(int* iParam0)//Position - 0xBE6A
{
	if (iParam0->f_295)
	{
		return func_269();
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_269()//Position - 0xBE89
{
	return func_270(PLAYER::PLAYER_ID());
}

int func_270(int iParam0)//Position - 0xBE99
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_271()//Position - 0xBEB8
{
	return joaat("S_M_Y_XMech_02");
}

void func_272(int* iParam0, int iParam1)//Position - 0xBEC5
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_273(iParam1));
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_49[iParam1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_49[iParam1], false))
		{
		}
		VEHICLE::RELEASE_PRELOAD_MODS(iParam0->f_49[iParam1]);
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_49[iParam1]));
	}
}

int func_273(int iParam0)//Position - 0xBF0E
{
	switch (iParam0)
	{
		case 0:
			return joaat("penumbra");
			break;
		
		case 1:
			return joaat("feltzer2");
			break;
		
		case 2:
			return joaat("coquette");
			break;
		
		case 3:
			return joaat("felon2");
			break;
		
		case 4:
			return joaat("sabregt");
			break;
		
		case 5:
			return joaat("dubsta");
			break;
		
		case 6:
			return joaat("tornado");
			break;
		
		case 7:
			return joaat("monroe");
			break;
	}
	return joaat("tailgater");
}

void func_274()//Position - 0xBFAA
{
	Global_1577888 = 0;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1577886))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1577886, "SET_BIG_LOGO_VISIBLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_1577886);
	}
}

void func_275(int* iParam0)//Position - 0xBFE5
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar1]))
		{
			uVar0 = iParam0->f_92[iVar1];
			ENTITY::DELETE_ENTITY(&uVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_98[iVar1]))
		{
			uVar0 = iParam0->f_98[iVar1];
			ENTITY::DELETE_ENTITY(&uVar0);
		}
		iVar1++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("monroe"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("feltzer2"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(100, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(101, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "FM_Intro_uber");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "FM_Intro_uber");
	STREAMING::REMOVE_ANIM_DICT("mp_intro_seq@");
}

void func_276(int* iParam0)//Position - 0xC09C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_49[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_49[2], false))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0->f_49[2]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_49[4]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_49[4], false))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0->f_49[4]);
		}
	}
}

void func_277(int* iParam0)//Position - 0xC0F4
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_49[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_49[2], false))
		{
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0->f_49[2], 4, 0, 1f);
		}
	}
}

int func_278()//Position - 0xC127
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1577886))
	{
		Global_1577886 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("GTAV_ONLINE");
		return 0;
	}
	return 1;
}

void func_279(int* iParam0, char* sParam1, char* sParam2, int iParam3, struct<3> Param4, struct<3> Param7)//Position - 0xC157
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam3, false))
		{
		}
		if (!CAM::DOES_CAM_EXIST(iParam0->f_8))
		{
			iParam0->f_8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
		}
		iParam0->f_9 = -1;
		iParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Param4, Param7, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_9, iParam3, 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
		CAM::SET_CAM_ACTIVE(iParam0->f_8, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, true, 0);
	}
}

void func_280(int* iParam0)//Position - 0xC1D2
{
	if (!BitTest(iParam0->f_3, 3))
	{
		MISC::PRELOAD_CLOUD_HAT("CONTRAILS");
		if (func_268(iParam0))
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MP_INTRO_CONCAT", 103, 8);
		}
		else
		{
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MP_INTRO_CONCAT", 31, 8);
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (iParam0->f_295)
			{
				if (func_268(iParam0))
				{
					CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Female_Character", 0, 1);
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Male_Character", 0, 1);
				}
			}
			func_281();
		}
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			MISC::SET_BIT(&(iParam0->f_3), 3);
		}
	}
}

void func_281()//Position - 0xC251
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS(func_267(iVar0), 0, 1);
		iVar0++;
	}
}

int func_282(int* iParam0)//Position - 0xC277
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { -1200f, -1490f, 142.385f };
	if (!BitTest(iParam0->f_3, 2))
	{
		STREAMING::REQUEST_MODEL(joaat("p_cs_mp_jet_01_s"));
		STREAMING::REQUEST_MODEL(joaat("MP_M_Freemode_01"));
		STREAMING::REQUEST_MODEL(joaat("MP_F_Freemode_01"));
		if (iParam0->f_294)
		{
			STREAMING::REQUEST_PTFX_ASSET();
		}
		if (((STREAMING::HAS_MODEL_LOADED(joaat("p_cs_mp_jet_01_s")) && STREAMING::HAS_MODEL_LOADED(joaat("MP_M_Freemode_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("MP_F_Freemode_01"))) && (!iParam0->f_294 || STREAMING::HAS_PTFX_ASSET_LOADED()))
		{
			iParam0->f_33 = OBJECT::CREATE_OBJECT(joaat("p_cs_mp_jet_01_s"), Var1, false, false, false);
			ENTITY::SET_ENTITY_LOD_DIST(iParam0->f_33, 3000);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iParam0->f_33, false);
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_33, false, false);
			if (iParam0->f_294)
			{
				iParam0->f_120 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mp_intro_plane_exhaust", iParam0->f_33, -5.403f, -8f, -2.2f, 0f, 0f, 0f, 1f, false, false, false);
				iParam0->f_121 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mp_intro_plane_exhaust", iParam0->f_33, 6.629f, -8f, -2.2f, 0f, 0f, 0f, 1f, false, false, false);
			}
			if (iParam0->f_295)
			{
				func_286(iParam0);
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_285(iParam0, iVar0))
				{
					iParam0->f_104[iVar0] = PED::CREATE_PED(26, joaat("MP_F_Freemode_01"), -1117.7778f, -1557.6249f, 3.3819f, 0f, false, false);
				}
				else
				{
					iParam0->f_104[iVar0] = PED::CREATE_PED(26, joaat("MP_M_Freemode_01"), -1117.7778f, -1557.6249f, 3.3819f, 0f, false, false);
				}
				if (func_284(iParam0, iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam0->f_112[iVar0])), false))
					{
					}
					PED::CLONE_PED_TO_TARGET(PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iParam0->f_112[iVar0])), iParam0->f_104[iVar0]);
					PED::FINALIZE_HEAD_BLEND(iParam0->f_104[iVar0]);
				}
				else
				{
					func_283(iParam0, iVar0);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_mp_jet_01_s"));
			MISC::SET_BIT(&(iParam0->f_3), 2);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_283(var uParam0, int iParam1)//Position - 0xC477
{
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 21, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 9, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 9, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 4, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 10, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 1:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 13, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 5, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 10, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 10, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 11, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 13, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 10, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 2:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 1, 4, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 1, 7, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 9, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 6, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 3:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 14, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 1, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 11, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 3, 12, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 4:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 18, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 15, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 15, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 2, 5, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 4, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 4, 0, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 5:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 27, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 7, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 11, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 4, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 13, 14, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 5, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 2, 7, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
		
		case 6:
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 0, 16, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 2, 15, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 3, 3, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 4, 5, 6, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 6, 2, 8, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 8, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_104[iParam1], 11, 3, 7, 0);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 0, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 1, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 2, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 3, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 4, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 5, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 6, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 7, 1);
			PED::CLEAR_PED_PROP(uParam0->f_104[iParam1], 8, 1);
			break;
	}
}

int func_284(var uParam0, int iParam1)//Position - 0xCDB1
{
	if ((uParam0->f_295 && uParam0->f_112[iParam1] != -1) && func_14(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_285(var uParam0, int iParam1)//Position - 0xCDEC
{
	if (func_284(uParam0, iParam1))
	{
		return func_270(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_112[iParam1]));
	}
	else if (((iParam1 == 3 || iParam1 == 4) || iParam1 == 5) || iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_286(var uParam0)//Position - 0xCE3F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		uParam0->f_112[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_14(iVar2, 0, 1))
		{
			if (PLAYER::PLAYER_ID() != iVar2)
			{
				if (iVar0 < 4)
				{
					uParam0->f_112[func_287(iVar0)] = iVar1;
					iVar0++;
				}
			}
		}
		iVar1++;
	}
}

int func_287(int iParam0)//Position - 0xCEAE
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 6;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 0;
}

int func_288(int* iParam0)//Position - 0xCF19
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("IG_LamarDavis");
	iVar1 = joaat("emperor");
	if (BitTest(iParam0->f_3, 9))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iVar1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "FMINTRO");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "FMINTRO");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "FMINTRO");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@");
	if (((((STREAMING::HAS_MODEL_LOADED(iVar0) && STREAMING::HAS_MODEL_LOADED(iVar1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "FMINTRO")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "FMINTRO")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "FMINTRO")) && STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_34))
		{
			MISC::CLEAR_AREA(-1034.0347f, -2730.4849f, 19.0565f, 3f, true, false, false, false);
			iParam0->f_34 = VEHICLE::CREATE_VEHICLE(iVar1, -1032.3224f, -2731.192f, 19.0658f, 239.2169f, false, false, false);
			ENTITY::SET_ENTITY_ALWAYS_PRERENDER(iParam0->f_34, true);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_34, false);
			ENTITY::SET_ENTITY_PROOFS(iParam0->f_34, true, true, true, true, true, true, true, false);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
			{
				iParam0->f_35 = PED::CREATE_PED(26, iVar0, -1031.6f, -2730.15f, 20.15f, 143.6341f, false, false);
				TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_35, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_34, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_35, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_35, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
				ENTITY::SET_ENTITY_PROOFS(iParam0->f_35, true, true, true, true, true, true, true, false);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_34) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_35))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
	MISC::SET_BIT(&(iParam0->f_3), 9);
	return 1;
}

void func_289(int* iParam0)//Position - 0xD0E5
{
	int iVar0;
	
	if (!BitTest(iParam0->f_3, 0))
	{
		func_299();
		func_297();
		if (func_291(iParam0))
		{
			if (func_290(iParam0))
			{
				if (!CAM::DOES_CAM_EXIST(iParam0->f_7))
				{
					iParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				}
				CAM::SET_CAM_PARAMS(iParam0->f_7, 228.1892f, -1006.7584f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
				iVar0 = 0;
				while (iVar0 < 8)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_273(iVar0));
					iVar0++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_271());
				MISC::SET_BIT(&(iParam0->f_3), 0);
			}
		}
	}
}

int func_290(var uParam0)//Position - 0xD187
{
	int iVar0;
	
	iVar0 = func_271();
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[2]))
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar0))
			{
				if (STREAMING::HAS_MODEL_LOADED(iVar0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("MP_INTRO_SEQ@"))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_49[2], false))
						{
							uParam0->f_10 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0->f_10, uParam0->f_49[2], 0);
							uParam0->f_91 = PED::CREATE_PED(4, iVar0, 226.6826f, -998.5228f, -99.9999f, 63.813f, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_91, true);
							TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_91, uParam0->f_10, "MP_INTRO_SEQ@", "MP_Mech_Fix", 1000f, -1000f, 64, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_10, true);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_91, true);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_91, false, false);
							WEAPON::REMOVE_WEAPON_FROM_PED(uParam0->f_91, joaat("GADGET_PARACHUTE"));
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 0, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 2, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 3, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 5, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 10, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(uParam0->f_91, 11, 0, 0, 0);
							PED::CLEAR_PED_PROP(uParam0->f_91, 0, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 1, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 2, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 3, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 4, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 5, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 6, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 7, 1);
							PED::CLEAR_PED_PROP(uParam0->f_91, 8, 1);
						}
					}
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
	{
		return 0;
	}
	return 1;
}

int func_291(var uParam0)//Position - 0xD375
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	bool bVar5;
	
	if (!BitTest(uParam0->f_2, 31))
	{
		func_299();
		bVar5 = false;
		while (bVar5 < 8)
		{
			func_296(bVar5, &Var1, &fVar4);
			if (!func_295(Var1, 0f, 0f, 0f, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[bVar5]))
				{
					iVar0 = func_273(bVar5);
					if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar0))
					{
						if (STREAMING::HAS_MODEL_LOADED(iVar0))
						{
							uParam0->f_49[bVar5] = VEHICLE::CREATE_VEHICLE(iVar0, Var1, fVar4, false, false, false);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_49[bVar5], true);
							VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_49[bVar5], 0f);
							VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(uParam0->f_49[bVar5], false);
							if (bVar5 == 2)
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam0->f_49[bVar5], 4, false, true);
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_49[bVar5], 4, 0, 1f);
							}
							func_294(uParam0, bVar5);
							func_293(uParam0, bVar5);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						}
					}
				}
			}
			bVar5++;
		}
		bVar5 = false;
		while (bVar5 < 8)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_49[bVar5]))
			{
				return 0;
			}
			if (!BitTest(uParam0->f_2, bVar5))
			{
				if (func_292(uParam0, bVar5))
				{
					MISC::SET_BIT(&(uParam0->f_2), bVar5);
				}
				else
				{
					return 0;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bVar5], false))
			{
				if (!VEHICLE::HAVE_VEHICLE_MODS_STREAMED_IN(uParam0->f_49[bVar5]))
				{
					return 0;
				}
			}
			bVar5++;
		}
		MISC::SET_BIT(&(uParam0->f_2), 31);
	}
	return 1;
}

int func_292(var uParam0, bool bParam1)//Position - 0xD4D8
{
	switch (bParam1)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 0, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 1, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 2, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 3, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 5, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 7, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 10, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 12, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 14, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 4, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 11, false);
					return 1;
				}
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 12, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 3, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 14, 5, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 3, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 3, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 11, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 1, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 2, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 7, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 11, 3, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 12, 2, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 13, 2, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 3, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 16, 4, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 5, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 1, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 2, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 3, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 6, 2, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 10, 3, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 15, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 5, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		case 6:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_49[bParam1], false))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(uParam0->f_49[bParam1]) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 1, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 4, 1, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 8, 0, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(uParam0->f_49[bParam1], 23, 0, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_49[bParam1], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam0->f_49[bParam1], false);
					return 1;
				}
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

void func_293(var uParam0, int iParam1)//Position - 0xD98D
{
	switch (iParam1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 5, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 0);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 11);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 7, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 2, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 3, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 6, 2);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 10, 3);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 5);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_49[iParam1], 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 1, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 4, 1);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 8, 0);
			VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_49[iParam1], 23, 0);
			break;
	}
}

void func_294(var uParam0, int iParam1)//Position - 0xDBD4
{
	switch (iParam1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 83, 134);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 134, 134);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 49, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 43, 5);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 3, 3);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 6, 156);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_49[iParam1], 35, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_49[iParam1], 0, 156);
			break;
	}
}

bool func_295(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0xDCF1
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_296(int iParam0, var uParam1, var uParam2)//Position - 0xDD38
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 224.478f, -986.548f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 1:
			*uParam1 = { 224.305f, -991.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 2:
			*uParam1 = { 224.535f, -997.348f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 3:
			*uParam1 = { 232.847f, -986.818f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 4:
			*uParam1 = { 232.847f, -980.848f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 5:
			*uParam1 = { 224.535f, -980.848f, -99.9999f };
			*uParam2 = 240.399f;
			break;
		
		case 6:
			*uParam1 = { 232.779f, -992.84f, -99.9999f };
			*uParam2 = 118.309f;
			break;
		
		case 7:
			*uParam1 = { 232.709f, -997.348f, -99.9999f };
			*uParam2 = 118.309f;
			break;
	}
}

void func_297()//Position - 0xDE67
{
	STREAMING::REQUEST_MODEL(func_271());
	STREAMING::REQUEST_ANIM_DICT(func_298());
}

char* func_298()//Position - 0xDE7F
{
	return "MP_INTRO_SEQ@";
}

void func_299()//Position - 0xDE8B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		STREAMING::REQUEST_MODEL(func_273(iVar0));
		iVar0++;
	}
}

void func_300(int* iParam0, float fParam1, float fParam2)//Position - 0xDEB0
{
	func_243(iParam0->f_92[0], 100, "FM_Intro_uber", fParam1, 0);
	func_243(iParam0->f_92[1], 101, "FM_Intro_uber", fParam1, 0);
	func_243(iParam0->f_92[2], 102, "FM_Intro_uber", (fParam1 + fParam2), 0);
	func_243(iParam0->f_92[3], 103, "FM_Intro_uber", fParam1, 0);
	func_243(iParam0->f_92[4], 104, "FM_Intro_uber", fParam1, 0);
}

void func_301(int* iParam0, int iParam1)//Position - 0xDF1F
{
	bool bVar0;
	int* iVar1;
	
	switch (iParam1)
	{
		case 14:
			func_302(iParam0, 0, -2997.1738f, 330.9234f, 14.2341f, -15.97f, &iVar1, 1);
			func_302(iParam0, 2, -2983.9001f, 423.7414f, 14.4122f, -5.25f, &iVar1, 1);
			break;
		
		case 15:
			func_302(iParam0, 1, -2622.2075f, -109.3386f, 19.2643f, 39.34f, &iVar1, 1);
			func_302(iParam0, 3, -2583.9497f, -143.6469f, 20.6224f, 48.89f, &iVar1, 1);
			func_302(iParam0, 7, -2552.1448f, -169.0495f, 19.8664f, 60.04f, &iVar1, 1);
			func_302(iParam0, 8, -2531.4744f, -174.4581f, 19.2269f, 58.09f, &iVar1, 1);
			break;
		
		case 16:
			break;
		
		case 17:
			func_302(iParam0, 0, -2420.6177f, -232.2668f, 15.3525f, 57.71f, &iVar1, 1);
			func_302(iParam0, 2, -2399.7092f, -249.2471f, 14.9551f, 58.19f, &iVar1, 1);
			func_302(iParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &iVar1, 1);
			func_302(iParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &iVar1, 1);
			func_302(iParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &iVar1, 1);
			func_302(iParam0, 9, -2408.7327f, -238.8328f, 15.2055f, 59.84f, &iVar1, 1);
			break;
		
		case 18:
			func_302(iParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &iVar1, 1);
			func_302(iParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &iVar1, 1);
			func_302(iParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &iVar1, 1);
			func_302(iParam0, 8, -2191.4287f, -335.8769f, 12.7225f, 84.71f, &iVar1, 1);
			break;
		
		case 19:
			func_302(iParam0, 0, -1833.8702f, -561.7711f, 11.0989f, 48.11f, &iVar1, 1);
			func_302(iParam0, 1, -1630.5872f, -685.6821f, 16.5351f, 58.23f, &iVar1, 1);
			func_302(iParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &iVar1, 1);
			func_302(iParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &iVar1, 1);
			func_302(iParam0, 4, -1706.5074f, -720.8959f, 9.6281f, -132.94f, &iVar1, 1);
			func_302(iParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &iVar1, 1);
			func_302(iParam0, 6, -1782.7637f, -610.5726f, 10.3008f, 52.34f, &iVar1, 1);
			func_302(iParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &iVar1, 1);
			func_302(iParam0, 8, -1751.8918f, -682.1017f, 9.6795f, -134.89f, &iVar1, 1);
			func_302(iParam0, 9, -1742.0983f, -642.5658f, 9.8169f, 48.19f, &iVar1, 1);
			break;
		
		case 33:
			func_302(iParam0, 0, -934.4687f, -2716.0378f, 12.7365f, 309.2312f, &iVar1, 0);
			func_302(iParam0, 5, -975.6617f, -2733.5168f, 12.8172f, 267.4944f, &iVar1, 0);
			break;
		
		case 34:
			break;
		
		case 35:
			break;
		
		case 36:
			func_302(iParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &iVar1, 0);
			break;
		
		case 37:
			break;
		
		case 38:
			func_302(iParam0, 0, -712.0925f, -1983.5159f, 25.688f, -167.99f, &iVar1, 0);
			func_302(iParam0, 1, -533.9934f, -2004.7274f, 26.9085f, 58.71f, &iVar1, 0);
			func_302(iParam0, 2, -653.3551f, -2047.7823f, 27.3566f, -112.14f, &iVar1, 0);
			func_302(iParam0, 3, -663.821f, -1934.8499f, 27.1417f, -121.65f, &iVar1, 0);
			func_302(iParam0, 4, -656.6017f, -2009.0784f, 30.0188f, -106.53f, &iVar1, 0);
			func_302(iParam0, 5, -502.696f, -2023.0684f, 26.2376f, 60.2827f, &iVar1, 0);
			func_302(iParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &iVar1, 0);
			func_302(iParam0, 7, -624.7944f, -1960.9753f, 26.29f, 237.3848f, &iVar1, 0);
			func_302(iParam0, 8, -463.0545f, -1998.2552f, 36.6533f, 27.85f, &iVar1, 0);
			func_302(iParam0, 9, -473.4099f, -1950.2133f, 24.7576f, 37.16f, &iVar1, 0);
			func_302(iParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &iVar1, 0);
			func_302(iParam0, 11, -546.7894f, -2012.7808f, 26.3137f, 235.9205f, &iVar1, 0);
			func_302(iParam0, 12, -584.929f, -1970.3323f, 26.2437f, 55.8826f, &iVar1, 0);
			func_302(iParam0, 13, -633.4936f, -1937.6824f, 26.2413f, 54.9911f, &iVar1, 0);
			func_302(iParam0, 14, -601.2188f, -1941.4187f, 17.4986f, 148.6622f, &iVar1, 0);
			break;
		
		case 39:
			func_302(iParam0, 4, -499.2335f, -1906.5316f, 16.3534f, 133.5751f, &iVar1, 0);
			func_302(iParam0, 9, -518.8654f, -1918.1439f, 16.3355f, 134.6305f, &iVar1, 0);
			break;
		
		case 40:
			func_302(iParam0, 3, -270.2197f, -1499.7521f, 29.4309f, -13.07f, &iVar1, 0);
			func_302(iParam0, 7, -313.1461f, -1559.5889f, 24.2966f, 145.66f, &iVar1, 0);
			func_302(iParam0, 8, -301.9485f, -1550.0525f, 25.5595f, 146.95f, &iVar1, 0);
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			func_302(iParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &iVar1, 0);
			func_302(iParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &iVar1, 0);
			func_302(iParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &iVar1, 0);
			break;
		
		case 44:
			func_302(iParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &iVar1, 0);
			func_302(iParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &iVar1, 0);
			func_302(iParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &iVar1, 0);
			break;
		
		case 45:
			func_302(iParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &iVar1, 0);
			func_302(iParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &iVar1, 0);
			func_302(iParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &iVar1, 0);
			func_302(iParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &iVar1, 0);
			func_302(iParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &iVar1, 0);
			func_302(iParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &iVar1, 0);
			func_302(iParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &iVar1, 0);
			func_302(iParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &iVar1, 0);
			break;
		
		case 46:
			break;
		
		case 47:
			func_302(iParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &iVar1, 0);
			func_302(iParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &iVar1, 0);
			func_302(iParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &iVar1, 0);
			break;
		
		case 48:
			break;
		
		case 49:
			func_302(iParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &iVar1, 0);
			func_302(iParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &iVar1, 0);
			func_302(iParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &iVar1, 0);
			func_302(iParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &iVar1, 0);
			func_302(iParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &iVar1, 0);
			func_302(iParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &iVar1, 0);
			func_302(iParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &iVar1, 0);
			func_302(iParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &iVar1, 0);
			break;
		
		case 50:
			break;
	}
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (!BitTest(iVar1, bVar0))
		{
			func_217(iParam0, bVar0);
		}
		bVar0++;
	}
}

void func_302(var uParam0, int iParam1, struct<3> Param2, float fParam5, int* iParam6, bool bParam7)//Position - 0xE8EB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_58[iParam1], false) && !PED::IS_PED_INJURED(uParam0->f_74[iParam1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_58[iParam1], false);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_58[iParam1], true, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_58[iParam1], Param2, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_58[iParam1], fParam5);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_58[iParam1], 5f);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_58[iParam1]);
		if (bParam7)
		{
			TASK::TASK_VEHICLE_MISSION(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 35f, 786603, 5f, 5f, true);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_58[iParam1], 30f);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION(uParam0->f_74[iParam1], uParam0->f_58[iParam1], 0, 1, 15f, 786603, 5f, 5f, true);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_58[iParam1], 10f);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_74[iParam1], true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_58[iParam1], true, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_74[iParam1], true, false);
		MISC::SET_BIT(iParam6, iParam1);
	}
}

void func_303(int* iParam0, char* sParam1, char* sParam2, struct<3> Param3, struct<3> Param6, float fParam9, float fParam10)//Position - 0xEA0F
{
	if (!CAM::DOES_CAM_EXIST(iParam0->f_8))
	{
		iParam0->f_8 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
	}
	iParam0->f_9 = -1;
	iParam0->f_9 = PED::CREATE_SYNCHRONIZED_SCENE(Param3, Param6, 2);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iParam0->f_8, iParam0->f_9, sParam1, sParam2);
	PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_9, fParam9);
	PED::SET_SYNCHRONIZED_SCENE_RATE(iParam0->f_9, fParam10);
	CAM::SET_CAM_ACTIVE(iParam0->f_8, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, true, 0);
}

void func_304(int* iParam0)//Position - 0xEA80
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(8, "FMIntro");
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_48))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_48));
	}
}

int func_305(int* iParam0)//Position - 0xEAAE
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (BitTest(iParam0->f_3, 7))
	{
		return 1;
	}
	else
	{
		func_307();
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[0]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				iParam0->f_92[0] = VEHICLE::CREATE_VEHICLE(joaat("cheetah"), -3007.912f, 370.6909f, 13.7517f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[0], false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[0], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[1]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				iParam0->f_92[1] = VEHICLE::CREATE_VEHICLE(joaat("entityxf"), -2999.383f, 404.3465f, 14.3213f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[1], false);
				ENTITY::SET_ENTITY_QUATERNION(iParam0->f_92[1], -0.0001f, -0.002f, 0.9978f, 0.0661f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0->f_92[1], 8);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[1], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[2]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("monroe")))
			{
				iParam0->f_92[2] = VEHICLE::CREATE_VEHICLE(joaat("monroe"), -2994.4165f, 435.5293f, 14.278f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[2], false);
				ENTITY::SET_ENTITY_QUATERNION(iParam0->f_92[2], 0.0072f, -0.0028f, 0.9981f, 0.0612f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0->f_92[2], 2);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[2], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[3]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				iParam0->f_92[3] = VEHICLE::CREATE_VEHICLE(joaat("cheetah"), -2992.2593f, 473.8287f, 14.5044f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[3], false);
				ENTITY::SET_ENTITY_QUATERNION(iParam0->f_92[3], 0.0071f, -0.0058f, 0.9993f, 0.0375f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0->f_92[3], 15);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[3], false);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[4]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("feltzer2")))
			{
				iParam0->f_92[4] = VEHICLE::CREATE_VEHICLE(joaat("feltzer2"), -2988.246f, 425.2664f, 14.387f, 184.1746f, false, false, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0->f_92[4], false);
				ENTITY::SET_ENTITY_QUATERNION(iParam0->f_92[4], 0.0026f, -0.0014f, 0.998f, 0.0637f);
				VEHICLE::SET_VEHICLE_COLOURS(iParam0->f_92[4], 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0->f_92[4], 0, 156);
				VEHICLE::SET_VEHICLE_MOD_KIT(iParam0->f_92[4], 0);
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[4], false))
		{
			if (!BitTest(iParam0->f_3, 1))
			{
				if (VEHICLE::GET_NUM_MOD_KITS(iParam0->f_92[4]) > 0)
				{
					VEHICLE::TOGGLE_VEHICLE_MOD(iParam0->f_92[4], 22, true);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0->f_92[4], false);
					MISC::SET_BIT(&(iParam0->f_3), 1);
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(func_251()))
		{
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_98[iVar1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[iVar1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[iVar1], false))
						{
							iParam0->f_98[iVar1] = PED::CREATE_PED_INSIDE_VEHICLE(iParam0->f_92[iVar1], 4, func_251(), -1, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_98[iVar1], true);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_92[iVar1], true, true, false);
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("monroe"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("feltzer2"));
			MISC::SET_BIT(&(iParam0->f_3), 7);
			return 1;
		}
	}
	return 0;
}

int func_306()//Position - 0xEE7F
{
	func_307();
	if (STREAMING::HAS_MODEL_LOADED(func_251()))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("monroe")))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("feltzer2")))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "FM_Intro_uber"))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "FM_Intro_uber"))
							{
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "FM_Intro_uber"))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "FM_Intro_uber"))
									{
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "FM_Intro_uber"))
										{
											if (STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@"))
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
	}
	return 0;
}

void func_307()//Position - 0xEF17
{
	STREAMING::REQUEST_MODEL(joaat("cheetah"));
	STREAMING::REQUEST_MODEL(joaat("monroe"));
	STREAMING::REQUEST_MODEL(joaat("entityxf"));
	STREAMING::REQUEST_MODEL(joaat("feltzer2"));
	STREAMING::REQUEST_MODEL(func_251());
	VEHICLE::REQUEST_VEHICLE_RECORDING(100, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(103, "FM_Intro_uber");
	VEHICLE::REQUEST_VEHICLE_RECORDING(104, "FM_Intro_uber");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@");
}

int func_308(int* iParam0)//Position - 0xEF85
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (BitTest(iParam0->f_3, 4))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("asterope"));
		STREAMING::REQUEST_MODEL(joaat("sentinel"));
		STREAMING::REQUEST_MODEL(func_251());
		if ((STREAMING::HAS_MODEL_LOADED(joaat("asterope")) && STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) && STREAMING::HAS_MODEL_LOADED(func_251()))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iVar0]))
				{
					if (iVar0 < 7)
					{
						iVar1 = joaat("asterope");
					}
					else
					{
						iVar1 = joaat("sentinel");
					}
					func_218(iVar0, &Var2, &fVar5);
					iParam0->f_58[iVar0] = VEHICLE::CREATE_VEHICLE(iVar1, Var2, fVar5, false, false, false);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0->f_58[iVar0], iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_58[iVar0], true);
					VEHICLE::SET_VEHICLE_LIGHTS(iParam0->f_58[iVar0], 2);
					ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_58[iVar0], true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_74[iVar0]))
					{
						iParam0->f_74[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iParam0->f_58[iVar0], 4, func_251(), -1, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(iParam0->f_74[iVar0], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_74[iVar0], true);
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_58[iVar0]) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_74[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("asterope"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
		MISC::SET_BIT(&(iParam0->f_3), 4);
		return 1;
	}
	return 0;
}

int func_309(int* iParam0, int iParam1, int iParam2)//Position - 0xF11D
{
	int iVar0;
	
	iVar0 = func_233(iParam0, iParam1, 0);
	if (iParam0->f_293)
	{
		if ((iParam0->f_13 + iVar0) + iParam2) <= MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	else if (iVar0 + iParam2) <= func_241(iParam0)
	{
		return 1;
	}
	return 0;
}

int func_310(int* iParam0)//Position - 0xF163
{
	int iVar0;
	
	if (BitTest(iParam0->f_3, 8))
	{
		return 1;
	}
	iVar0 = joaat("frogger");
	STREAMING::REQUEST_MODEL(iVar0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "FMIntro");
	if (STREAMING::HAS_MODEL_LOADED(iVar0) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "FMIntro"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_48))
		{
			iParam0->f_48 = VEHICLE::CREATE_VEHICLE(iVar0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(8, 0f, "FMIntro"), 0f, false, false, false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_48, 8, "FMIntro", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_48, 5000f);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iParam0->f_48);
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_48, false, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_48))
	{
		return 0;
	}
	MISC::SET_BIT(&(iParam0->f_3), 8);
	return 1;
}

void func_311(int* iParam0, int iParam1)//Position - 0xF21F
{
	if (func_309(iParam0, iParam1, 0))
	{
		if (iParam0->f_293)
		{
			iParam0->f_13 = (MISC::GET_GAME_TIMER() - func_233(iParam0, iParam1, 0));
		}
		else
		{
			iParam0->f_291 = 1;
		}
	}
}

void func_312(int* iParam0)//Position - 0xF256
{
	iParam0->f_13 = MISC::GET_GAME_TIMER();
}

Vector3 func_313(struct<3> Param0)//Position - 0xF266
{
	return (-SYSTEM::SIN(Param0.f_2) * SYSTEM::COS(Param0.f_0)), (SYSTEM::COS(Param0.f_2) * SYSTEM::COS(Param0.f_0)), SYSTEM::SIN(Param0.f_0);
}

int func_314()//Position - 0xF293
{
	return Global_1574996;
}

void func_315()//Position - 0xF29F
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-533.6674f, -1961.7877f, 16.82666f, -429.5074f, -1860.3097f, 22.79688f, 20.5f, false, false, false);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(224.4978f, -274.7691f, 48.879707f, 263.15814f, -170.51065f, 63.18772f, 21f, false, false, false);
}

void func_316()//Position - 0xF2FB
{
	func_224(0);
	func_223(1);
}

void func_317(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xF30D
{
	func_321();
	func_319(1);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	func_258(1, 1, 1, 0, 0, 0, bParam2);
	func_318();
	func_210(12, 1, -1);
	func_211(0);
	if (bParam3)
	{
		CAM::SET_WIDESCREEN_BORDERS(true, -1);
	}
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_319(1);
	func_265(1);
	Global_2672524.f_3542 = 1;
	if (bParam0)
	{
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, bParam1);
		}
	}
}

void func_318()//Position - 0xF382
{
	func_211(0);
	func_210(4, 1, -1);
	func_210(6, 1, -1);
	func_210(7, 1, -1);
	func_210(3, 1, -1);
	func_210(1, 1, -1);
	func_210(2, 1, -1);
	func_210(11, 1, -1);
	func_210(13, 1, -1);
	func_210(14, 1, -1);
	func_210(16, 1, -1);
}

void func_319(bool bParam0)//Position - 0xF3D9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112461)
	{
		HUD::CLEAR_FLOATING_HELP(iVar0, bParam0);
		func_320(iVar0);
		iVar0++;
	}
}

void func_320(int iParam0)//Position - 0xF407
{
	Global_112461[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112461[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112461[iParam0 /*28*/].f_4), "", 64);
	Global_112461[iParam0 /*28*/].f_23 = 0;
	Global_112461[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112461[iParam0 /*28*/].f_27 = 0;
	Global_112461[iParam0 /*28*/].f_20 = 0;
	Global_112461[iParam0 /*28*/].f_22 = 0;
}

void func_321()//Position - 0xF471
{
	Global_1574747 = 1;
	StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
}

int func_322()//Position - 0xF49A
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_324(0);
		GRAPHICS::DISABLE_SCREENBLUR_FADE();
		return 1;
	}
	if (func_323() == 3)
	{
		func_324(2);
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
	}
	if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() >= 250f)
	{
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
	}
	if (GRAPHICS::IS_SCREENBLUR_FADE_RUNNING() == 0)
	{
		GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(250f);
	}
	if (GRAPHICS::GET_SCREENBLUR_FADE_CURRENT_TIME() <= 0f)
	{
		func_324(0);
		return 1;
	}
	return 0;
}

int func_323()//Position - 0xF509
{
	return Global_1574632.f_19;
}

void func_324(int iParam0)//Position - 0xF517
{
	if (Global_1574632.f_19 != iParam0)
	{
		Global_1574632.f_19 = iParam0;
	}
}

void func_325(int iParam0, bool bParam1)//Position - 0xF532
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_329(iParam0, &iVar1);
	if (!MISC::ARE_STRINGS_EQUAL("NONE" /* GXT: None */, sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1)
			{
				func_328(iParam0, 1);
				return;
			}
			iVar2 = INTERIOR::GET_INTERIOR_FROM_PRIMARY_VIEW();
			if (iVar2 != 0 && iVar2 == iVar1)
			{
				func_328(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_DISABLED(iVar1))
			{
				return;
			}
			if (func_326(iParam0))
			{
				func_328(iParam0, 0);
			}
		}
		INTERIOR::DISABLE_INTERIOR(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_326(int iParam0)//Position - 0xF5DE
{
	struct<2> Var0;
	
	Var0 = { func_327(iParam0) };
	if (Var0.f_1 != -1 && BitTest(Global_38726[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_327(int iParam0)//Position - 0xF60F
{
	struct<2> Var0;
	
	Var0.f_0 = (iParam0 % 32);
	Var0.f_1 = (iParam0 / 32);
	if (Var0.f_1 >= 8)
	{
		Var0.f_0 = -1;
		Var0.f_1 = -1;
	}
	return Var0;
}

void func_328(int iParam0, bool bParam1)//Position - 0xF63C
{
	struct<2> Var0;
	
	Var0 = { func_327(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_38726[Var0.f_1]), Var0.f_0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_38726[Var0.f_1]), Var0.f_0);
	}
}

var func_329(int iParam0, int iParam1)//Position - 0xF67F
{
	struct<5> Var0;
	
	Var0 = { func_330(iParam0) };
	*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_330(int iParam0)//Position - 0xF6A4
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.7858f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.7559f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.3986f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.9338f, -1714.7256f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.3704f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.5645f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.2789f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.2538f, 3686.7385f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.8452f, 3707.9653f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.7852f, 4983.8247f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.1952f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.3816f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.8253f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.6632f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_331(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_331(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_331(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_331(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_331(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_331(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_331(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1312228[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_331(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_331(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_331(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_331(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_331(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_331(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_331(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_331(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_331(43, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.295849f, -684.0385f, 33.508316f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.97156f, -1018.95416f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.0013f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			Var5 = { func_331(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_331(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_331(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_331(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_331(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_331(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_331(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_331(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_331(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_331(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_331(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_331(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_331(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_331(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_331(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_331(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_331(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_331(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_331(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_331(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_331(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_331(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_331(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_331(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_331(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_331(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_331(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_331(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_331(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_331(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_331(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_331(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_331(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_331(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_331(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_331(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_331(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_331(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_331(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_331(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_331(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_331(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_331(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_331(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_331(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_331(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_331(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_331(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_331(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_331(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_331(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_331(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_331(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_331(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.1116f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.5997f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.8022f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.0647f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.4111f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.9966f, -3100.0117f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.9949f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.0083f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 279.9322f, -1337.4902f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { -1604.6643f, -3012.5828f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.5867f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.16413f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 213:
			Var0 = { 1103.5624f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 228:
			Var0 = { 850f, -3000f, -50f };
			Var0.f_3 = "reh_dlc_int_04_sum2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 229:
			Var0 = { 495f, -2560f, -50f };
			Var0.f_3 = "xm3_DLC_INT_04_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 230:
			Var0 = { 570f, -415.1f, -69.6f };
			Var0.f_3 = "xm3_DLC_INT_03_xm3";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 231:
			Var0 = { 984.4f, -95.4f, 76.8f };
			Var0.f_3 = "bkr_biker_dlc_int_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 232:
			Var0 = { -880f, -2770f, -49f };
			Var0.f_3 = "M23_1_dlc_int_01_M23_1";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 233:
			Var0 = { 800f, -3000f, -69f };
			Var0.f_3 = "reh_dlc_int_03_sum2";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

struct<6> func_331(int iParam0, bool bParam1)//Position - 0x12029
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.59628f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 179.99997f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -109.99999f };
			break;
		
		case 7:
			Var0 = { -1471.8821f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.8821f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.39966f };
			Var0.f_3 = { 0f, 0f, -153.30931f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.23286f };
			Var0.f_3 = { 0f, 0f, -152.55307f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.0981f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.1869f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.9543f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.7644f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.6702f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.5712f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.2538f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.0984f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.5178f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.5383f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.9939f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_332()//Position - 0x12BDF
{
	return Global_2695874;
}

bool func_333()//Position - 0x12BEB
{
	return Global_2694574;
}

void func_334(bool bParam0, bool bParam1)//Position - 0x12BF7
{
	if (bParam1)
	{
		MISC::CLEAR_BIT(&(Global_1946161.f_1), 13);
		func_359(bParam0, 0);
	}
	func_357(0);
	func_335(66);
}

void func_335(int iParam0)//Position - 0x12C22
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_314();
	if (Global_1575063)
	{
		sVar1 = func_356(iParam0);
		iVar2 = MISC::GET_HASH_KEY(sVar1);
		uVar3 = func_355(&Global_2697014, 1, 0);
		func_354(&Global_2697012, 1, 0);
		NETWORK::NETWORK_TRANSITION_ADD_STAGE(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_336();
	}
	Global_1574996 = iParam0;
}

void func_336()//Position - 0x12C7A
{
	if (Global_2694499)
	{
		if (func_338())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_337();
		}
	}
}

void func_337()//Position - 0x12C9C
{
	if (Global_2694496)
	{
		if (!Global_2694495)
		{
			Global_2694495 = 1;
			Global_2694504 = MISC::GET_GAME_TIMER();
			Global_2694503 = 1;
		}
	}
}

int func_338()//Position - 0x12CC5
{
	int iVar0;
	
	if (Global_2684820.f_6635 && Global_2694496)
	{
		if (func_343(0))
		{
			if (func_341() && !CAM::IS_SCREEN_FADED_OUT())
			{
				if ((((Global_2684820.f_6657 == 122 || Global_2684820.f_6657 == 123) || Global_2684820.f_6657 == 124) || Global_2684820.f_6657 == 125) || Global_2684820.f_6657 == 154)
				{
					return 1;
				}
				if (Global_2684820.f_6657 > -1)
				{
					iVar0 = func_340(Global_2684820.f_6657);
					if (iVar0 == 24)
					{
						return 1;
					}
				}
				if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_73.f_2, 26))
				{
					return 1;
				}
				if (BitTest(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_73.f_2, 27))
				{
					return 1;
				}
				if (func_339())
				{
					return 1;
				}
				if (Global_1963825)
				{
					return 1;
				}
				if (BitTest(Global_4718592.f_37, 23))
				{
					if (!func_260(PLAYER::PLAYER_ID(), 0) && !func_263())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_339()//Position - 0x12DE9
{
	return Global_2683883.f_24;
}

int func_340(int iParam0)//Position - 0x12DF7
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

int func_341()//Position - 0x132AB
{
	if (func_342() == 0)
	{
		return 1;
	}
	return 0;
}

int func_342()//Position - 0x132C0
{
	return Global_1574632.f_18;
}

int func_343(int iParam0)//Position - 0x132CE
{
	if (func_353(PLAYER::PLAYER_ID()) && BitTest(Global_1950844.f_4, 22))
	{
		return 0;
	}
	if (Global_1577891)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (func_352())
	{
		return 0;
	}
	if ((Global_2694497 && func_351()) || Global_2694497 == 0)
	{
		return 1;
	}
	if (Global_2684820.f_6657 == 123 && Global_2694500)
	{
		return 1;
	}
	if (Global_2694498)
	{
		if (Global_2684820.f_6657 == 122)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		if (!func_260(PLAYER::PLAYER_ID(), 0) && !func_263())
		{
			return 1;
		}
	}
	if (Global_2694501)
	{
		if (iParam0 == 0)
		{
			if ((Global_2684820.f_6657 == 123 || (Global_2684820.f_6657 == 124 && func_349() == 1)) || Global_2684820.f_6657 == 125)
			{
				return 1;
			}
		}
	}
	if ((Global_2684820.f_6635 || func_347(-1046478848)) && Global_2694502)
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	if (BitTest(Global_4718592.f_37, 23))
	{
		return 1;
	}
	if (func_344() || func_339())
	{
		return 1;
	}
	return 0;
}

var func_344()//Position - 0x1342B
{
	return func_345(PLAYER::PLAYER_ID());
}

var func_345(int iParam0)//Position - 0x1343B
{
	return func_346(&(Global_2657704[iParam0 /*463*/].f_442), 0);
}

var func_346(var uParam0, int iParam1)//Position - 0x13454
{
	return BitTest(*uParam0, iParam1);
}

int func_347(float fParam0)//Position - 0x13462
{
	struct<3> Var0;
	
	Var0 = { func_348(PLAYER::PLAYER_ID()) };
	if (Var0.f_2 < fParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
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

Vector3 func_348(int iParam0)//Position - 0x134B1
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_349()//Position - 0x134C4
{
	return func_350(PLAYER::PLAYER_ID());
}

int func_350(int iParam0)//Position - 0x134D4
{
	return MISC::GET_BITS_IN_RANGE(Global_2657704[iParam0 /*463*/].f_321.f_3, 28, 31);
}

bool func_351()//Position - 0x134F1
{
	return BitTest(Global_4718592.f_164769, 12);
}

bool func_352()//Position - 0x13506
{
	return BitTest(Global_2683883.f_2, 11);
}

int func_353(int iParam0)//Position - 0x13517
{
	if (iParam0 != func_143())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2657704[iParam0 /*463*/].f_321.f_7 != -1)
			{
				return func_340(Global_2657704[iParam0 /*463*/].f_321.f_7) == 13;
			}
		}
	}
	return 0;
}

void func_354(var uParam0, bool bParam1, bool bParam2)//Position - 0x1355E
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

int func_355(var uParam0, bool bParam1, bool bParam2)//Position - 0x1359B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

char* func_356(int iParam0)//Position - 0x135E2
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 69:
			return "TRANSITION_STATE_SPAWN_INTO_PERSONAL_VEHICLE";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 29:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 28:
			return "TRANSITION_STATE_POST_BINK_VIDEO_WARP";
		
		case 30:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 31:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 33:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 34:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 35:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 37:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 38:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 39:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 44:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 46:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 47:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 48:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 50:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 51:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 52:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 45:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 54:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 53:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 55:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 57:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 61:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 62:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 63:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 64:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 65:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 66:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 67:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		case 68:
			return "TRANSITION_STATE_DLC_INTRO_BINK";
		
		default:
	}
	return "";
}

void func_357(int iParam0)//Position - 0x13982
{
	var uVar0;
	
	uVar0 = func_358();
	Global_1574995 = iParam0;
}

var func_358()//Position - 0x13996
{
	return Global_1574995;
}

void func_359(bool bParam0, bool bParam1)//Position - 0x139A2
{
	int iVar0;
	
	func_361(&Global_23171, bParam1);
	GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			STREAMING::STOP_PLAYER_SWITCH();
			func_360(0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_1577845))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1577845, false))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1577845))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577845, false, false);
					}
					PED::DELETE_PED(&Global_1577845);
				}
			}
		}
	}
}

void func_360(int iParam0)//Position - 0x13A07
{
	if (iParam0 == 0)
	{
		Global_2696990 = 0;
	}
	Global_1574632.f_18 = iParam0;
}

void func_361(var uParam0, bool bParam1)//Position - 0x13A22
{
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_9))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_9))
		{
			func_362(0);
		}
		CAM::DESTROY_CAM(uParam0->f_9, false);
	}
	if (!Global_44534)
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
		CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
		CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	}
	Global_2635560.f_604 = 0f;
	if (!bParam1)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
	}
}

void func_362(int iParam0)//Position - 0x13A9A
{
	Global_23249 = iParam0;
}

void func_363(bool bParam0, int iParam1)//Position - 0x13AA7
{
	if (bParam0)
	{
		func_368(1, 0, 1);
	}
	else
	{
		func_364(iParam1);
	}
}

void func_364(int iParam0)//Position - 0x13AC4
{
	func_367();
	if (iParam0 == 0)
	{
		if (LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE())
		{
			return;
		}
	}
	if (func_366() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_365(1);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	}
}

void func_365(int iParam0)//Position - 0x13B05
{
	if (Global_1574632.f_20 != iParam0)
	{
		Global_1574632.f_20 = iParam0;
	}
}

int func_366()//Position - 0x13B20
{
	return Global_1574632.f_20;
}

void func_367()//Position - 0x13B2E
{
	Global_2696294 = 1;
}

void func_368(int iParam0, bool bParam1, bool bParam2)//Position - 0x13B3B
{
	if (func_369())
	{
		return;
	}
	if ((func_366() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
	{
		func_365(0);
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		if (!bParam1)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
		if (bParam2)
		{
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
		}
	}
}

int func_369()//Position - 0x13B86
{
	if (func_370())
	{
		return Global_2694503;
	}
	return 0;
}

int func_370()//Position - 0x13B9D
{
	if (Global_2694496)
	{
		return Global_2694495;
	}
	return 0;
}

void func_371(bool bParam0)//Position - 0x13BB4
{
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
		VEHICLE::SET_GARBAGE_TRUCKS(true);
		VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(true);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, true);
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
		VEHICLE::SET_GARBAGE_TRUCKS(false);
		VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(false);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
}

void func_372(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x13C28
{
	int iVar0;
	
	func_316();
	func_223(1);
	func_211(1);
	func_210(12, 1, -1);
	func_382();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
	if (bParam0)
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(PLAYER::PLAYER_ID(), bParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_373(PLAYER::PLAYER_ID(), 0, iVar0, 0);
	if (bParam5)
	{
		if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_373(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x13CB7
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
	if (func_381())
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
		if (!func_341())
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
				else if (bVar14 || ((!func_260(PLAYER::PLAYER_ID(), 0) && !func_263()) && !func_262(PLAYER::PLAYER_ID())))
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
					func_378(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_377(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_376();
					func_375();
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
				if (!func_377(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_374(Global_4718592.f_171044))
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

bool func_374(int iParam0)//Position - 0x14156
{
	return iParam0 == 17;
}

void func_375()//Position - 0x14163
{
	struct<3> Var0;
	
	Global_2672524.f_1024 = 0;
	Global_2672524.f_1025 = 0;
	Global_2672524.f_1026 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672524.f_1031 = -1;
	Global_2672524.f_1032 = 0;
	Global_2635560.f_2792 = { Var0 };
}

void func_376()//Position - 0x141B0
{
	Global_2635560.f_702 = 0;
	Global_2635560.f_2835 = 0;
	Global_2635560.f_515 = 0;
	Global_2635560.f_606 = 0;
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_217 = 0;
	Global_2635560.f_2790 = 0;
}

int func_377(int iParam0)//Position - 0x141EE
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

void func_378(bool bParam0, int iParam1, int iParam2)//Position - 0x1421F
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
				func_380();
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
		if (func_260(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_379(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_379(int iParam0, bool bParam1)//Position - 0x142EF
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_380()//Position - 0x1430B
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

int func_381()//Position - 0x14363
{
	if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2) && !Global_2684820.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_382()//Position - 0x14394
{
	Global_23251.f_5 = 1;
}

int func_383()//Position - 0x143A2
{
	switch (Global_2697098)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_384(int iParam0)//Position - 0x143C6
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 346, true);
}

void func_385(int* iParam0)//Position - 0x143DC
{
	if (!BitTest(iParam0->f_3, 12))
	{
		MISC::SET_BIT(&(iParam0->f_3), 12);
	}
	else
	{
		if (iParam0->f_6 > 30)
		{
			if (!Global_1936381)
			{
				Global_1936381 = 1;
				Global_1936382 = 1;
			}
		}
		if (iParam0->f_6 > 31)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1936380))
			{
				if (iParam0->f_5 < 23)
				{
					switch (iParam0->f_5)
					{
						case 0:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 33)
								{
									if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
									{
										func_390("artdir", 0f, 420f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_390("artdir", 0f, 450f, "left", 0.3f, 0.3f);
									}
									func_389("artdir", "Art Director", 175f, "HUD_COLOUR_FRIENDLY", 1);
									func_388("artdir", "AARON GARBUT", 210f, "|", 1);
									func_387("artdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 33, -3390))
							{
								func_386("artdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 1:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_309(iParam0, 33, -2940))
								{
									func_390("techdir", 0f, 30f, "left", 0.3f, 0.3f);
									func_389("techdir", "Technical Director", 100f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_388("techdir", "ADAM FOWLER", 185f, "|", 1);
									func_387("techdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 33, -450))
							{
								func_386("techdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 2:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 35)
								{
									func_390("assartdir", 0f, 100f, "left", 0.3f, 0f);
									func_389("assartdir", "Associate Art Directors", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_388("assartdir", "ADAM COCHRANE|MICHAEL KANE", 100f, "|", 1);
									func_387("assartdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 35)
							{
								func_386("assartdir", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 3:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 36)
								{
									if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
									{
										func_390("asstecdir", 0f, 370f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_390("asstecdir", 0f, 400f, "right", 0.3f, 0.3f);
									}
									func_389("asstecdir", "Associate Technical Directors", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_388("asstecdir", "KLAAS SCHILSTRA|PHIL HOOKER", 150f, "|", 1);
									func_387("asstecdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 36, -4740))
							{
								func_386("asstecdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 4:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_309(iParam0, 36, -3810))
								{
									func_390("leadprog", 30f, 20f, "right", 0.3f, 0.3f);
									func_389("leadprog", "Lead Programmers", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_388("leadprog", "DANIEL YELLAND|ROBERT TRICKEY", 145f, "|", 1);
									func_387("leadprog", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 36, -600))
							{
								func_386("leadprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 5:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 37)
								{
									if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
									{
										func_390("senprog", 0f, 200f, "left", 0.3f, 0.3f);
									}
									else
									{
										func_390("senprog", 0f, 225f, "left", 0.3f, 0.3f);
									}
									func_389("senprog", "Senior Programmers", 20f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_388("senprog", "JOHN HYND|JOHN GURNEY|DAN CONTI|ROSS CHILDS|STEPHEN LaVALLEY", 75f, "|", 1);
									func_387("senprog", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 37, -1350))
							{
								func_386("senprog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 6:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 38)
								{
									func_390("prog", 0f, 100f, "left", 0.3f, 0.3f);
									func_389("prog", "Programmers", 35f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_388("prog", "MIGUEL FREITAS|STUART ROSKELL|ALLAN WALTON|PAU AGUILAR FRUTO", 100f, "|", 1);
									func_387("prog", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 38, -4320))
							{
								func_386("prog", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 7:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_309(iParam0, 38, -3240))
								{
									if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
									{
										func_390("socclub", 40f, 305f, "right", 0.3f, 0.3f);
									}
									else
									{
										func_390("socclub", 40f, 325f, "right", 0.3f, 0.3f);
									}
									func_389("socclub", "Social Club", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_388("socclub", "IAN McFARLAND|KEVIN BACA", 40f, "|", 1);
									func_387("socclub", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 38, -870))
							{
								func_386("socclub", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 8:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 39)
								{
									func_390("audio", 0f, 10f, "right", 0.3f, 0.3f);
									func_389("audio", "Audio", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_388("audio", "MATTHEW SMITH|CRAIG CONNER|ALASTAIR MacGREGOR|JEFFREY WHITCHER", 35f, "|", 1);
									func_387("audio", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 39, -1620))
							{
								func_386("audio", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 9:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 40)
								{
									func_390("scrlead", 50f, 85f, "right", 0.3f, 0.3f);
									func_389("scrlead", "Script Leads", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_388("scrlead", "BOBBY WRIGHT|KEITH McLEMAN|BRENDA CAREY|ROWAN COCKCROFT|NEIL FERGUSON|RYAN BAKER", 60f, "|", 1);
									func_387("scrlead", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 40, -1470))
							{
								func_386("scrlead", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 10:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 41)
								{
									func_390("script1", 0f, 10f, "left", 0.3f, 0.3f);
									func_389("script1", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_388("script1", "CONOR McGUIRE|JAMES ADWICK|DAVID WATSON|NEIL BEGGS|WILLIAM KENNEDY", 80f, "|", 1);
									func_387("script1", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 41, -1200))
							{
								func_386("script1", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 11:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 42)
								{
									func_390("script2", 0f, 10f, "left", 0.3f, 0.3f);
									func_389("script2", "Scripters", 20f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_388("script2", "DAVID GENTLES|BEN HINCHLIFFE|KEVIN WONG|CHRISTOPHER SPEIRS|CHRIS McMAHON", 80f, "|", 1);
									func_387("script2", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 42, -1320))
							{
								func_386("script2", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 12:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 43)
								{
									func_390("visdes", 0f, 45f, "left", 0.2f, 0.2f);
									func_389("visdes", "Visual Design", 30f, "HUD_COLOUR_FRIENDLY", 1);
									func_388("visdes", "THOMAS DIAKOMICHALIS|KARMEN COKER|LUKE HOWARD| | |", 67f, "|", 1);
									func_389("visdes", "Character Creator", 100f, "HUD_COLOUR_FRIENDLY", 1);
									func_388("visdes", "STUART HANSELL|STEWART WRIGHT|FLAVIUS ALECU", 147f, "|", 1);
									func_387("visdes", 0.05f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 43, -1320))
							{
								func_386("visdes", 0.05f);
								iParam0->f_5++;
							}
							break;
						
						case 13:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 44)
								{
									func_390("uides", 40f, 20f, "right", 0f, 0.3f);
									func_389("uides", "UI Design & Development", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_388("uides", "STUART PETRI|STEVE WALSH|GARETH EVANS|JEFFREY KHAN|CHRIS EDWARDS", 110f, "|", 1);
									func_387("uides", 0f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 45, -1650))
							{
								func_386("uides", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 14:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 46)
								{
									func_390("concre", 0f, 20f, "left", 0f, 0.3f);
									func_389("concre", "Content Creation", 40f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_388("concre", "CALLUM MUNGALL|CHRIS McCALLUM|JESSE HOLCROFT|JOE STAFFORD", 80f, "|", 1);
									func_388("concre", "JOSHUA MATTYASOVSZKY|MARTIN LOGAN|STEFAN WEBSTER", 80f, "|", 1);
									func_387("concre", 0f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 46, -1950))
							{
								func_386("concre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 15:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 47)
								{
									func_390("devass", 0f, 400f, "right", 0f, 0f);
									func_389("devass", "Development Assistants", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_388("devass", "FIONN WRIGHT|KATIE PICA", 100f, "|", 1);
									func_387("devass", 0f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (iParam0->f_6 > 47)
							{
								func_386("devass", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 16:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 48)
								{
									func_390("qasup", 20f, 0f, "right", 0.3f, 0.3f);
									func_389("qasup", "QA Supervisor", 0f, "HUD_COLOUR_FRIENDLY", 1);
									func_388("qasup", "ADAM WHITING| ", 50f, "|", 1);
									func_389("qasup", "Lead Test Analyst", 50f, "HUD_COLOUR_FRIENDLY", 1);
									func_388("qasup", "CHRIS THOMSON", 160f, "|", 1);
									func_387("qasup", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 48, -1320))
							{
								func_386("qasup", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 17:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (iParam0->f_6 >= 49)
								{
									func_390("senta", 0f, 25f, "left", 0.3f, 0.3f);
									func_389("senta", "Senior Test Analysts", 30f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_388("senta", "MICHAEL BURTON|ROSS PARKER|SEAN CASEY", 120f, "|", 1);
									func_387("senta", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 49, -5070))
							{
								func_386("senta", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 18:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_309(iParam0, 49, -3750))
								{
									func_390("asspro", 20f, 350f, "right", 0.3f, 0.3f);
									func_389("asspro", "Assistant Producer", 0f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_388("asspro", "JOSH NEEDLEMAN", 75f, "|", 1);
									func_387("asspro", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_309(iParam0, 49, -720))
							{
								func_386("asspro", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 19:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_268(iParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 2468)
									{
										func_390("animdir", 0f, 95f, "left", 0.3f, 0.3f);
										func_389("animdir", "Animation Director", 110f, "HUD_COLOUR_NET_PLAYER3", 1);
										func_388("animdir", "ROB NELSON", 200f, "|", 1);
										func_387("animdir", 0.16f);
										MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (iParam0->f_6 >= 50)
								{
									func_390("animdir", 50f, 90f, "right", 0.3f, 0.3f);
									func_389("animdir", "Animation Director", 0f, "HUD_COLOUR_NET_PLAYER3", 1);
									func_388("animdir", "ROB NELSON", 90f, "|", 1);
									func_387("animdir", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_268(iParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6123)
								{
									func_386("animdir", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 1898)
							{
								func_386("animdir", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 20:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_268(iParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
									{
										func_390("producer", 65f, 55f, "right", 0f, 0f);
										func_389("producer", "Producer", 0f, "HUD_COLOUR_FRIENDLY", 1);
										func_388("producer", "ANDY DUTHIE", 20f, "|", 1);
										func_387("producer", 0f);
										MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 2452)
								{
									func_390("producer", 0f, 100f, "left", 0.3f, 0f);
									func_389("producer", "Producer", 80f, "HUD_COLOUR_FRIENDLY", 1);
									func_388("producer", "ANDY DUTHIE", 110f, "|", 1);
									func_387("producer", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_268(iParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
								{
									func_386("producer", 0f);
									iParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
							{
								func_386("producer", 0f);
								iParam0->f_5++;
							}
							break;
						
						case 21:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_268(iParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 13265)
									{
										func_390("vpcre", 65f, 55f, "right", 0.3f, 0.3f);
										func_389("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
										func_388("vpcre", "DAN HOUSER", 80f, "|", 1);
										func_387("vpcre", 0.16f);
										MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 6921)
								{
									func_390("vpcre", 65f, 80f, "right", 0.3f, 0.3f);
									func_389("vpcre", "VP of Creative", 0f, "HUD_COLOUR_NET_PLAYER1", 1);
									func_388("vpcre", "DAN HOUSER", 80f, "|", 1);
									func_387("vpcre", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_268(iParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 16955)
								{
									func_386("vpcre", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 10513)
							{
								func_386("vpcre", 0.16f);
								iParam0->f_5++;
							}
							break;
						
						case 22:
							if (!BitTest(iParam0->f_4, iParam0->f_5))
							{
								if (func_268(iParam0))
								{
									if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 18077)
									{
										Global_1936382 = 0;
										func_390("execpro", 0f, 375f, "left", 0.3f, 0.3f);
										func_389("execpro", "Executive Producer", 70f, "HUD_COLOUR_NET_PLAYER2", 1);
										func_388("execpro", "SAM HOUSER", 165f, "|", 1);
										func_387("execpro", 0.16f);
										MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
									}
								}
								else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 12358)
								{
									Global_1936382 = 0;
									func_390("execpro", 0f, 340f, "left", 0.3f, 0.3f);
									func_389("execpro", "Executive Producer", 100f, "HUD_COLOUR_NET_PLAYER2", 1);
									func_388("execpro", "SAM HOUSER", 190f, "|", 1);
									func_387("execpro", 0.16f);
									MISC::SET_BIT(&(iParam0->f_4), iParam0->f_5);
								}
							}
							else if (func_268(iParam0))
							{
								if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 21785)
								{
									func_386("execpro", 0.16f);
									iParam0->f_5++;
								}
							}
							else if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 15333)
							{
								func_386("execpro", 0.16f);
								iParam0->f_5++;
							}
							break;
						}
				}
				if (Global_1936382)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_1936380, 255, 255, 255, 255, 0);
				}
			}
		}
	}
}

void func_386(char* sParam0, float fParam1)//Position - 0x157EE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1936380, "HIDE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_387(char* sParam0, float fParam1)//Position - 0x1581F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1936380, "SHOW_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_388(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)//Position - 0x15850
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1936380, "ADD_NAMES_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_389(char* sParam0, char* sParam1, float fParam2, char* sParam3, bool bParam4)//Position - 0x158AB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1936380, "ADD_ROLE_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_390(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)//Position - 0x15906
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_1936380, "SETUP_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_391(int* iParam0)//Position - 0x1595B
{
	if (iParam0->f_6 >= 33 && iParam0->f_6 < 51)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_34))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
			{
				GRAPHICS::DRAW_LIGHT_WITH_RANGE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0->f_34, 0f, 0.25f, 0.6f), 255, 255, 255, 1.5f, 0.5f);
			}
		}
	}
}

void func_392()//Position - 0x159B5
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_535.f_3))
	{
		switch (Local_535.f_2)
		{
			case 2:
				if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_412(Local_535.f_3))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_535.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_535.f_3)))
								{
									MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
									func_411(1);
								}
								else
								{
									MISC::CLEAR_AREA_OF_VEHICLES(-1031.7882f, -2731.816f, 19.0546f, 50f, false, false, false, false, false, false, 0);
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_412(Local_535.f_3))
				{
					if (!func_410(Local_535.f_4))
					{
						if (BitTest(uLocal_718, 26))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_535.f_4), NETWORK::NET_TO_VEH(Local_535.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, false);
							}
						}
					}
				}
				break;
			
			case 3:
				if (!BitTest(uLocal_718, 27))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						if (!func_127())
						{
							if (!HUD::IS_PAUSE_MENU_ACTIVE())
							{
								CAM::DO_SCREEN_FADE_OUT(800);
							}
						}
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						MISC::SET_BIT(&uLocal_718, 27);
					}
				}
				else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
				{
					if (func_399(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(-649.4202f, -954.0247f, 20.5269f, 20f, false, false, false, false, false, false, 0);
						CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
						CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 4);
					}
				}
				break;
			
			case 4:
				if (!func_410(Local_535.f_4))
				{
					if (!BitTest(uLocal_718, 29))
					{
						if (func_412(Local_535.f_3))
						{
							TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_535.f_4), NETWORK::NET_TO_VEH(Local_535.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, true);
							CAM::DO_SCREEN_FADE_IN(800);
							MISC::SET_BIT(&uLocal_718, 29);
						}
					}
					else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("SCRIPT_TASK_VEHICLE_PARK")) == 7)
						{
							MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 5);
						}
					}
				}
				break;
			
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					else if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
					{
						MISC::SET_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 6);
						MISC::SET_BIT(&(Global_2794162.f_853), 4);
						MISC::CLEAR_BIT(&(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
						func_373(PLAYER::PLAYER_ID(), 1, 0, 0);
						func_398();
						func_411(0);
						func_35("HLP_TAXI", -1);
						if (func_59())
						{
							func_46(joaat("SERVICE_SPEND_TAXI"), 200, &uVar0, 0, 0, 0);
						}
						else
						{
							func_395(-200, 0);
							MONEY::NETWORK_SPENT_TAXI(200, false, false, 0, 0);
						}
					}
				}
				break;
			
			case 6:
				if (!func_410(Local_535.f_4))
				{
					if (func_412(Local_535.f_3))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_535.f_4), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
						{
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_535.f_4), true);
							TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_535.f_4), NETWORK::NET_TO_VEH(Local_535.f_3), 12f, 786599);
							func_394(&(Local_535.f_3));
							func_394(&(Local_535.f_4));
						}
					}
				}
				break;
		}
		if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
		{
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-1614.1733f, -3243.3167f, 28.4915f, -440.9012f);
			if (!BitTest(uLocal_718, 26))
			{
				MISC::SET_BIT(&uLocal_718, 26);
			}
		}
		if (!BitTest(uLocal_718, 28))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				if (!func_202(&uLocal_368))
				{
					func_222();
					func_22(&uLocal_368, 0, 0);
				}
				else if (func_201(&uLocal_368, 5000, 0))
				{
					if (func_181(&uLocal_542, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						MISC::SET_BIT(&uLocal_718, 28);
					}
				}
			}
		}
		if (!BitTest(uLocal_718, 30))
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				if (func_181(&uLocal_542, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					MISC::SET_BIT(&uLocal_718, 30);
				}
			}
		}
		if (!BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
		{
			func_393();
		}
		if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
		}
	}
}

void func_393()//Position - 0x15F2F
{
	Global_2805862.f_258 = 1;
}

void func_394(var uParam0)//Position - 0x15F3F
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_395(int iParam0, int iParam1)//Position - 0x15F63
{
	func_397(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_396(iParam0, 0);
	}
}

void func_396(int iParam0, bool bParam1)//Position - 0x15F81
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_397(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x15F92
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
		func_396(iVar1, 0);
	}
}

void func_398()//Position - 0x16015
{
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
}

int func_399(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)//Position - 0x160E4
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_23251.f_6 = 1;
	if (Global_2672524.f_1024 && Global_2672524.f_1032)
	{
		func_407(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2672524.f_1024)
		{
			func_407(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (!func_406(0))
	{
		if (func_405(PLAYER::PLAYER_ID(), 1, 0) && !(func_404() || func_403()))
		{
			if (((bParam9 && func_14(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_232 == 1)
			{
			}
			else if (func_314() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2672524.f_1024 && !bParam11)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0.2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0.2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2672524.f_1024 = 0;
				Global_2672524.f_1025 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2672524.f_1026 || !Param0.f_1 == Global_2672524.f_1026.f_1) || !Param0.f_2 == Global_2672524.f_1026.f_2) || !fParam3 == Global_2672524.f_1029)
	{
		if (Global_2672524.f_1024 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2672524.f_1030) < func_402(0))
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2672524.f_1025 = 1;
		}
		else
		{
			Global_2672524.f_1025 = 0;
		}
		Global_2672524.f_1026 = { Param0 };
		Global_2672524.f_1029 = fParam3;
		Global_2672524.f_1024 = 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2672524.f_1024 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!BitTest(Global_100885.f_1414[44], 16))
			{
				func_401(0);
			}
			if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &(Global_2635560.f_502)))
			{
				Global_2635560.f_502 = 0;
			}
		}
		if (bParam4)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar0))
				{
					Global_2672524.f_1031 = 0;
				}
			}
		}
		if (Global_2672524.f_1031 > -1)
		{
			Global_2672524.f_1030 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1024 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, Param0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_407(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, bParam10, false);
			}
			Global_2672524.f_1030 = NETWORK::GET_NETWORK_TIME();
			Global_2672524.f_1024 = 1;
		}
	}
	if (Global_2672524.f_1024)
	{
		Global_23251.f_6 = 1;
		Global_2672524.f_1030 = NETWORK::GET_NETWORK_TIME();
		if (Global_2672524.f_1031 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (func_400(&(Global_2672524.f_1031), Param0, fParam3, iVar0))
			{
				func_407(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2672524.f_1026) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_407(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2672524.f_1032 = 1;
						return 0;
					}
				}
				func_407(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_400(var uParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x165F8
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2672524.f_1033) && !ENTITY::IS_ENTITY_DEAD(Global_2672524.f_1033, false))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672524.f_1033);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2672524.f_1033 = iParam5;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2672524.f_1033);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2672524.f_1033))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2672524.f_1033, false))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2672524.f_1033, fParam4);
					ENTITY::SET_ENTITY_COORDS(Global_2672524.f_1033, Param1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_401(int iParam0)//Position - 0x1669B
{
	int iVar0;
	
	iVar0 = Global_2635560.f_2791;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2635560.f_2789 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2635560.f_2788)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2635560.f_2788 = iVar0;
		}
	}
}

int func_402(bool bParam0)//Position - 0x166F0
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

bool func_403()//Position - 0x16713
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1970693, 12)) && Global_1970692 == 8);
}

var func_404()//Position - 0x1673C
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1970693, 0));
}

int func_405(int iParam0, bool bParam1, int iParam2)//Position - 0x16758
{
	if (Global_2657704[iParam0 /*463*/].f_232 == 99)
	{
		if ((iParam2 && Global_2657704[iParam0 /*463*/].f_235 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2657704[iParam0 /*463*/].f_232 == 13)
		{
			return 0;
		}
	}
	return 1;
}

bool func_406(bool bParam0)//Position - 0x167AF
{
	if (bParam0)
	{
	}
	return Global_1575038;
}

void func_407(bool bParam0, bool bParam1)//Position - 0x167C0
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_375();
	if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_267.f_31, 14) && !func_409())
	{
		func_408();
	}
}

void func_408()//Position - 0x16830
{
	Global_2803912.f_92 = 1;
}

int func_409()//Position - 0x1683F
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_406(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_179188[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_410(int iParam0)//Position - 0x16876
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_411(bool bParam0)//Position - 0x16895
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 15))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 15);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 15))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 15);
	}
}

int func_412(int iParam0)//Position - 0x168F2
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_413(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_413(int iParam0)//Position - 0x16912
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
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

void func_414(int iParam0, bool bParam1)//Position - 0x1694B
{
	if (bParam1)
	{
		if (!func_26(iParam0, 8, 0))
		{
			func_67(iParam0, 8, 0);
			func_415(iParam0);
		}
	}
	else if (func_26(iParam0, 8, 0))
	{
		func_65(iParam0, 8, 0);
		func_415(iParam0);
	}
}

void func_415(int iParam0)//Position - 0x16992
{
	Global_100885.f_205[iParam0] = 1;
	Global_100885.f_204 = 1;
}

void func_416(int iParam0, bool bParam1)//Position - 0x169AC
{
	if (bParam1)
	{
		Global_100885.f_9[iParam0] = 1;
	}
	else
	{
		Global_100885.f_9[iParam0] = 0;
	}
}

void func_417(bool bParam0)//Position - 0x169D2
{
	int iVar0;
	
	if (bParam0)
	{
		Global_100885.f_8 = 1;
	}
	else
	{
		Global_100885.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		func_415(iVar0);
		iVar0++;
	}
}

void func_418(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x16A09
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

int func_419()//Position - 0x16AA4
{
	return Local_535.f_0;
}

int func_420()//Position - 0x16AAF
{
	return 1;
}

int func_421(int iParam0)//Position - 0x16AB8
{
	return Local_707[iParam0 /*5*/];
}

int func_422(int iParam0)//Position - 0x16AC7
{
	return Local_707[iParam0 /*5*/].f_2;
}

int func_423(bool bParam0)//Position - 0x16AD8
{
	if (func_425())
	{
		if (bParam0)
		{
			if (!Global_1836594 && !func_424(PLAYER::PLAYER_ID(), 2))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
				func_363(0, 0);
			}
		}
		return 1;
	}
	return 0;
}

bool func_424(int iParam0, int iParam1)//Position - 0x16B18
{
	return BitTest(Global_2657704[iParam0 /*463*/].f_218, iParam1);
}

bool func_425()//Position - 0x16B2E
{
	return Global_2672524.f_22;
}

void func_426(bool bParam0)//Position - 0x16B3C
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_724)
		{
			if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 2))
			{
				if (!BitTest(uLocal_718, 31))
				{
					func_33(119, 1, -1, 1);
					func_33(115, 1, -1, 1);
				}
				func_765(1);
				bVar0 = true;
			}
		}
		else if (BitTest(Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
		{
			if (!BitTest(uLocal_718, 31))
			{
				func_33(119, 1, -1, 1);
				func_33(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	func_221(&Local_61, 0, bParam0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2672524.f_3542)
		{
			func_758(0, 1, 0, 1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_411(0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_61.f_122, false);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1042.9182f, -2723.1401f, 17.341135f, -1087.7639f, -2667.6052f, 25.795933f, 25.5625f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1005.74243f, -2734.2646f, 14.919123f, -1082.9584f, -2675.189f, 26.016474f, 39.375f, 1);
	MISC::CLEAR_BIT(&(Global_2794162.f_853), 4);
	func_100(0);
	func_63(0);
	func_757();
	func_756(iLocal_60, 0);
	func_200(&(Global_2672524.f_3792));
	Global_2672524.f_3790 = 0;
	Global_2672524.f_3789 = 0;
	Global_2672524.f_3791 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
	}
	if (bVar0)
	{
		func_429(0, 0, 0, 0, 1);
	}
	else
	{
		HUD::CLEAR_HELP(true);
		func_429(0, 0, 3, 1, 1);
	}
	MISC::CLEAR_BIT(&(Global_2794162.f_853), 0);
	func_417(0);
	func_416(4, 0);
	func_416(1, 0);
	func_416(0, 0);
	func_416(2, 0);
	func_416(3, 0);
	func_414(iLocal_60, 0);
	func_398();
	func_36();
	if (HUD::DOES_BLIP_EXIST(Global_100885.f_267[iLocal_60]))
	{
		HUD::SET_BLIP_ROUTE(Global_100885.f_267[iLocal_60], false);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_721))
	{
		HUD::REMOVE_BLIP(&iLocal_721);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_428(0);
		func_203(0);
	}
	func_427(Local_535.f_5);
}

void func_427(struct<2> Param0)//Position - 0x16D5B
{
	if (Param0.f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Param0.f_0)) >= 1000)
		{
			NETWORK::NETWORK_SET_MISSION_FINISHED();
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_428(bool bParam0)//Position - 0x16D86
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 5);
	}
}

void func_429(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x16DBA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var14;
	int iVar20;
	char* sVar21;
	struct<2> Var22;
	bool bVar24;
	int iVar25;
	
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Global_1853988[iVar0 /*867*/];
	func_755();
	func_751();
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0 /*PLAYER_CONTROL*/);
	func_750();
	Global_1057165 = 0;
	Global_1835455 = 0;
	func_749();
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(false);
	func_748();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1836384 = 0;
	Global_2621440 = 0;
	Global_2621441 = 0;
	func_747(0);
	Global_1836373 = 0;
	Global_1836372 = 0;
	Global_1836397 = 0;
	Global_1836614 = 0;
	Global_1836620 = 0;
	Global_1836102 = 0;
	Global_1837320 = 1;
	Global_1836585 = 0;
	Global_1836385 = -1;
	func_746(0);
	MISC::CLEAR_BIT(&(Global_2621446.f_1), 5);
	if (!func_745() && !func_743())
	{
		func_742();
	}
	func_741();
	func_740();
	func_739();
	func_738();
	func_737();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_736();
		func_735();
	}
	if (func_734() || !func_733())
	{
		func_732();
		func_731(1, 1, 1);
		func_730();
		func_729();
		if (iVar0 != -1)
		{
			Global_1890739[iVar0 /*138*/].f_1 = 0;
			Global_1890739[iVar0 /*138*/].f_2 = 0;
			Global_1890739[iVar0 /*138*/] = 0;
		}
	}
	func_728();
	if ((((Global_4718592 != 6 && func_727(Global_4718592.f_117591) != 14) && func_727(Global_4718592.f_117591) != 15) && !func_351()) && !func_743())
	{
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
		}
	}
	Global_1835476 = 0;
	if (Global_1927408.f_9 == 4)
	{
		if (func_726(PLAYER::PLAYER_ID()) || func_725(PLAYER::PLAYER_ID()))
		{
			Global_1835476 = 1;
		}
	}
	func_723();
	if (func_722())
	{
		func_721();
	}
	func_720();
	Global_4718592.f_118154 = 0;
	Global_1927367.f_4 = 0;
	if (!BitTest(Global_4718592.f_29, 1) && !func_719())
	{
		if (BitTest(Global_4718592.f_14, 17))
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
		}
		else
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), true);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		}
	}
	StringCopy(&(Global_4718592.f_117583), "", 32);
	if (!func_743())
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		if ((bParam3 && !func_718()) && !func_717())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1889904[iVar3] = 0;
		Global_1889871[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		MISC::SET_BIT(&(Global_2684820.f_6022), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2684820.f_6022), 3);
	}
	if (iVar0 != -1 && Global_2683883.f_669.f_10 != 0)
	{
		Global_1890739[PLAYER::PLAYER_ID() /*138*/].f_2 = Global_2683883.f_669.f_10;
	}
	if (func_425() || (iVar0 != -1 && BitTest(Global_1853988[iVar0 /*867*/].f_863, 7)))
	{
		if (!bParam4)
		{
			Global_4718592 = 2;
			func_715();
			Global_4718592 = 0;
		}
		else
		{
			func_715();
		}
		func_714();
		func_713(1, 1);
		func_731(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1890739[iVar0 /*138*/].f_1 = 0;
			Global_1890739[iVar0 /*138*/].f_2 = 0;
			Global_1890739[iVar0 /*138*/] = 0;
		}
		func_712(1);
		if (func_711())
		{
			func_710();
		}
		if (!func_17(PLAYER::PLAYER_ID()))
		{
			func_708(4);
		}
		func_730();
		func_707(0);
		func_706();
		Global_1837312 = 0;
	}
	if (!func_705())
	{
		func_704();
		if (func_703())
		{
			if (func_702())
			{
				func_714();
			}
		}
		func_712(1);
		if (!func_701())
		{
			Global_2684820.f_6363 = 0;
			Global_2684820.f_6364 = 0;
			Global_2684820.f_6362 = 0;
			Global_2684820.f_6361 = 0;
			Global_2684820.f_6542 = 0;
		}
	}
	else
	{
		func_700(PLAYER::PLAYER_ID(), 0);
	}
	func_699((Global_1927408.f_9 != 4 && !func_705()));
	func_698((Global_1927408.f_9 != 4 && !func_705()));
	func_697((Global_1927408.f_9 != 4 && !func_705()));
	func_696((Global_1927408.f_9 != 4 && !func_705()));
	func_695((Global_1927408.f_9 != 4 && !func_705()));
	func_694((Global_1927408.f_9 != 4 && !func_705()));
	if (func_701())
	{
		Global_2684820.f_6453 = 1;
	}
	else
	{
		Global_2684820.f_6453 = 0;
	}
	if (!func_705())
	{
		if (func_701())
		{
			Global_2684820.f_6454 = 1;
		}
		else
		{
			Global_2684820.f_6454 = 0;
		}
	}
	if (func_692())
	{
		if (func_691())
		{
			Global_2684820.f_6455 = 1;
		}
		else
		{
			Global_2684820.f_6455 = 0;
		}
	}
	if (!func_745())
	{
		Global_1927434.f_1345 = 0;
	}
	if (!func_705() && !func_745())
	{
		func_713(1, Global_1927408.f_9 != 4);
		func_731(1, 1, 0);
		func_690(0);
		func_689();
		Global_1837314 = 0;
		if (iVar0 != -1)
		{
			Global_1890739[iVar0 /*138*/].f_1 = 0;
			Global_1890739[iVar0 /*138*/].f_2 = 0;
			Global_1890739[iVar0 /*138*/] = 0;
		}
	}
	func_686(1, -1);
	if (func_685())
	{
		func_684();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE();
	}
	if ((!func_718() && !func_705()) && !func_717())
	{
		func_679();
	}
	Global_4718592.f_118150 = 0;
	func_678();
	Global_1836366 = -1;
	Global_1889953 = -1;
	Global_1889944 = -1;
	Global_1889947 = -1;
	Global_1836371 = 0;
	Global_1889945 = 0;
	Global_1836596 = 0;
	Global_1836588 = 0;
	Global_1889954 = 0;
	func_677(0);
	func_676();
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_863), 7);
	Global_1889942 = 0f;
	Global_1889943 = 0f;
	Global_1836598 = 0;
	Global_1836599 = -1;
	func_675(0);
	Global_1836586 = 0;
	Global_1836103 = 0;
	func_674();
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	func_673(1);
	if (func_672())
	{
		func_671();
	}
	if (func_670())
	{
		if (func_668(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < 2)
			{
				func_667();
				func_666(1);
			}
			else
			{
				func_665();
			}
			if (Global_1927408.f_9 != -1)
			{
				func_664();
			}
		}
		else if (Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 0)
		{
			if (Global_1927408.f_9 != -1)
			{
				func_664();
			}
		}
	}
	bVar4 = func_18(iVar0);
	Global_1853988[iVar0 /*867*/].f_194 = 0;
	if (bVar4 && !func_745())
	{
		func_663();
	}
	if (!bVar4)
	{
		func_662(0);
	}
	if ((func_661() != 40 && func_661() != 39) && !func_660())
	{
		Global_1835430 = { 0f, 0f, 0f };
	}
	if (func_659() && func_259())
	{
	}
	else
	{
		func_658();
	}
	func_657();
	func_666(0);
	bVar6 = false;
	if (!bVar4)
	{
		if (Global_1927408.f_9 == 6)
		{
			bVar6 = true;
		}
		if (!func_656())
		{
			func_655(0, bVar6);
		}
	}
	NETWORK::NETWORK_SET_PROXIMITY_AFFECTS_TEAM(false);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (Global_1927408.f_9)
		{
			case 1:
				if (!func_654() && func_651(0) > 0)
				{
					Global_1945782[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					func_649();
					func_648();
				}
				break;
			
			case 6:
				Global_1837312 = 0;
				if (!bVar4)
				{
					func_649();
				}
				func_648();
				Global_1927408 = 0;
				Global_1927408.f_23 = { 0f, 0f, 0f };
				MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 1);
				StringCopy(&(Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_226), "", 24);
				Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_223 = { 0f, 0f, 0f };
				func_647(0);
				break;
			
			case 2:
				func_646(0);
				if (!func_645() || (func_645() && MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2683883.f_33))))
				{
					func_644(Global_1927408.f_17);
					func_643(Global_1927408.f_17);
				}
				iVar5 = Global_1853988[iVar0 /*867*/].f_10;
				if (iVar5 != func_143())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2684820.f_6023 = { func_80(iVar5) };
					}
					else
					{
						iVar7 = 1;
					}
				}
				else
				{
					iVar7 = 1;
				}
				if ((iVar7 && func_645()) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					Global_2684820.f_6023 = { func_642() };
				}
				if (((((Global_4718592.f_1751 > 1 && !func_634()) && !func_633(Global_4718592.f_117591)) && !func_632(Global_4718592.f_117591)) && Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_96.f_28 > -1) && Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_96.f_28 < 4)
				{
					func_631(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_96.f_28);
				}
				else
				{
					func_630();
				}
				break;
			
			case 3:
				func_646(0);
				iVar2 = 1;
				func_629();
				iVar5 = Global_1853988[iVar0 /*867*/].f_10;
				if (iVar5 != func_143())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2684820.f_6023 = { func_80(iVar5) };
					}
				}
				if (((Global_4718592.f_1751 > 1 && !func_634()) && !func_633(Global_4718592.f_117591)) && !func_632(Global_4718592.f_117591))
				{
					func_631(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_96.f_28);
				}
				else
				{
					func_630();
				}
				break;
			
			case 4:
				func_646(0);
				iVar2 = 1;
				if (func_628())
				{
					func_627();
				}
				else if (func_626())
				{
				}
				else
				{
					if (!(func_625() || func_701()) || !func_624())
					{
						Global_2684820.f_6363 = 0;
						Global_2684820.f_6364 = 0;
					}
					if (!func_624())
					{
						Global_2684820.f_6362 = 0;
						Global_2684820.f_6361 = 0;
					}
				}
				if (func_726(PLAYER::PLAYER_ID()) || func_725(PLAYER::PLAYER_ID()))
				{
					Global_786435.f_34++;
				}
				else if (func_623())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (func_621())
				{
					Global_1949013.f_17++;
				}
				else if (func_339())
				{
					Global_1949100.f_18++;
				}
				else if ((func_620(Global_4718592.f_117591) || func_619(Global_4718592.f_117591)) || (func_617() && func_616(249)))
				{
					Global_1949233.f_18++;
				}
				if (func_615(Global_4718592.f_117591))
				{
					if (Global_1948933.f_14 == 0)
					{
						Global_1948933.f_14 = 1;
					}
				}
				if (!BitTest(Global_4718592.f_12, 22))
				{
					if (func_614() == -1)
					{
						if (!BitTest(Global_4718592.f_12, 15))
						{
							func_613(Global_4718592.f_118045);
						}
						else
						{
							func_612(Global_4718592.f_167559, Global_4718592.f_167560);
						}
						if (Global_1927408.f_14 > -1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Global_1927408.f_14, Global_1927408.f_15, 0);
						}
						else if (func_611() > -1)
						{
							func_609(func_611(), 0);
						}
					}
					else
					{
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(func_614(), 0, 0);
					}
				}
				if (func_608())
				{
					Var8 = { func_607() };
					func_606(Var8);
					if (func_605() != -1)
					{
						Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_96.f_28 = func_605();
					}
					func_604();
					func_603();
				}
				else
				{
					func_629();
				}
				if (!func_260(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					func_378(0, 0, 1);
				}
				break;
			
			case 5:
				func_646(0);
				iVar2 = 1;
				func_629();
				break;
			
			case 8:
				if (!func_645())
				{
					func_644(Global_1927408.f_17);
				}
				break;
			
			case 9:
				func_646(0);
				iVar2 = 1;
				func_629();
				func_643(Global_4718592.f_117878);
				Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_226 = { Global_4718592.f_117878 };
				if (func_602())
				{
					func_601();
				}
				if (!func_260(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					func_378(0, 0, 1);
				}
				break;
			
			case 10:
				func_580(10, 0f, 0f, 0f, Var14);
				func_579();
				break;
		}
	}
	else
	{
		Global_1837312 = 0;
	}
	if (iVar2 || func_725(PLAYER::PLAYER_ID()))
	{
		if ((func_578(PLAYER::PLAYER_ID()) || func_726(PLAYER::PLAYER_ID())) || func_725(PLAYER::PLAYER_ID()))
		{
			if (Global_1936361 > 0)
			{
				Global_2684820.f_1.f_2828.f_13 = Global_1936361;
				Global_2684820.f_1.f_2828 = { Global_1936361.f_1 };
			}
		}
		else
		{
			func_577();
		}
	}
	Global_2684820.f_1.f_842 = 0;
	MISC::CLEAR_BIT(&Global_1836107, 0);
	func_576(0);
	Global_1836376 = 0;
	Global_1836581 = -1;
	Global_1889870 = 0;
	Global_1574602 = 0;
	Global_1927408.f_1 = 0;
	Global_1927408.f_2 = 0;
	if (func_575() == 0)
	{
		if (Global_1927408.f_9 == -1 && bVar4 == 0)
		{
			func_567(0);
		}
		else
		{
			Global_1927408.f_9 = -1;
		}
	}
	func_566();
	if (func_565())
	{
		func_564();
	}
	if (func_563())
	{
		func_562();
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(true);
	}
	if (func_575() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!func_561(Global_1853988[iVar0 /*867*/]) && !func_718()) && !bVar4) && !func_406(0)) && !func_705()) && !func_717())
			{
				func_560(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	func_559();
	Global_1927408.f_1 = 0;
	if (!func_670())
	{
		func_558();
	}
	if (Global_1853988[iVar0 /*867*/] != -1)
	{
		iParam2 = iParam2;
		if (func_557(Global_1853988[iVar0 /*867*/]))
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				iVar20 = func_529(0);
				func_528(1213, -1);
				func_525(joaat("MPPLY_MGAME_CHEAT_END"), iVar20);
				if (iVar20 > 0)
				{
					func_525(joaat("MPPLY_ACTIVITY_ENDED"), 1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(PLAYER::PLAYER_ID());
	}
	func_523();
	if (Global_1927408 == 0)
	{
		if (!bVar4)
		{
			Global_1853988[iVar0 /*867*/].f_10 = -1;
			MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_863), 1);
		}
	}
	if (bVar4)
	{
		func_560(0);
		MISC::SET_BIT(&(Global_1853988[iVar0 /*867*/].f_863), 1);
		Global_1853988[iVar0 /*867*/].f_10 = func_522(PLAYER::PLAYER_ID());
		NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		func_378(0, 0, 1);
		if (func_521())
		{
			func_519();
		}
	}
	if ((Global_1853988[iVar0 /*867*/] < 10 && Global_1853988[iVar0 /*867*/] != -1) && !func_406(0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1853988[iVar0 /*867*/].f_144)) && Global_1853988[iVar0 /*867*/] != 5) && Global_1853988[iVar0 /*867*/] != 148)
		{
			func_516(&(Global_1853988[iVar0 /*867*/].f_144));
		}
	}
	if (Global_1853988[iVar0 /*867*/] != 6)
	{
		Global_1927354 = 1;
	}
	Global_1853988[iVar0 /*867*/] = -1;
	Global_1853988[iVar0 /*867*/].f_36.f_2 = -1;
	Global_1853988[iVar0 /*867*/].f_36.f_16 = -1;
	Global_1853988[iVar0 /*867*/].f_36.f_1 = -1;
	Global_4718592 = 0;
	if (!bVar4)
	{
		func_515(0);
	}
	Global_1853988[iVar0 /*867*/].f_36.f_18 = 0;
	MISC::CLEAR_BIT(&(Global_1853988[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*867*/].f_797), 0);
	HUD::SET_MISSION_NAME_FOR_UGC_MISSION(false, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		HUD::THEFEED_FLUSH_QUEUE();
		Global_2695893 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1853988[iVar0 /*867*/].f_144), sVar21, 24);
		StringCopy(&(Global_1853988[iVar0 /*867*/].f_150), sVar21, 24);
		func_514();
	}
	StringCopy(&(Global_1881733[iVar0 /*16*/]), sVar21, 64);
	StringCopy(&(Global_1853988[iVar0 /*867*/].f_164), sVar21, 64);
	Global_1890739[iVar0 /*138*/].f_31 = { Var22 };
	Global_1890739[iVar0 /*138*/].f_33 = { Var22 };
	Global_1836591 = 0;
	Global_1836592 = 0;
	Global_1836115 = -1;
	bVar24 = false;
	func_513();
	func_512();
	func_511();
	if (func_510())
	{
		func_509();
	}
	if (func_508() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		func_507();
		func_373(PLAYER::PLAYER_ID(), 0, 57348, 0);
	}
	if (func_506())
	{
		func_505();
	}
	else if (func_504())
	{
		func_505();
	}
	else if (func_503())
	{
		func_505();
	}
	else if (func_502())
	{
		func_505();
	}
	else if (func_501())
	{
		func_505();
	}
	else if (func_575())
	{
		func_505();
	}
	else if (func_500() && func_499())
	{
		func_505();
	}
	else if (func_498())
	{
		func_505();
	}
	else
	{
		func_497();
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 1) && !func_745())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (func_521())
				{
					func_496();
				}
				else
				{
					if (!BitTest(Global_4718592.f_28, 10))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							Global_2684820.f_2846.f_198 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
						}
					}
					func_495();
					func_730();
					func_494(6);
					func_648();
					if (bVar4)
					{
						func_707(0);
					}
				}
				func_493();
				func_492();
				func_491();
				if (Global_2684820.f_2846.f_4 == 2)
				{
					Global_2684820.f_2846.f_4 = 1;
				}
				if (func_260(PLAYER::PLAYER_ID(), 0))
				{
					func_490();
				}
				func_489();
				Global_2684820.f_2846 = 0;
			}
			else
			{
				func_488();
				func_505();
			}
		}
		else
		{
			if (!func_701() && !func_745())
			{
			}
			func_488();
			func_505();
		}
	}
	if ((((((((((!func_506() && !func_487()) && !func_499()) && !func_500()) && !func_503()) && !func_504()) && !func_486()) && !func_501()) && !func_575()) && !func_502()) && !func_485())
	{
		if (!func_484())
		{
			func_483();
			func_481();
			func_480();
			func_478(1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				if (!func_477())
				{
					if (!bVar24)
					{
						if (func_17(PLAYER::PLAYER_ID()))
						{
							NETWORK::NETWORK_END_TUTORIAL_SESSION();
							BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
						}
					}
				}
			}
		}
	}
	if (!func_406(0))
	{
		StringCopy(&(Global_4718592.f_117598), "", 64);
	}
	if (func_476(116, &iVar25))
	{
		func_475(iVar25);
	}
	if (func_476(123, &iVar25))
	{
		func_475(iVar25);
	}
	if (!func_745())
	{
		func_467();
	}
	else if (func_466())
	{
		func_465();
	}
	func_464();
	if (!func_705() && !func_701())
	{
		func_463();
	}
	func_462();
	func_456();
	func_430(bParam3);
}

void func_430(bool bParam0)//Position - 0x180CC
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_670())
		{
		}
		else if ((((!func_705() && !func_701()) && !func_745()) && Global_1927408.f_9 != 9) && Global_1927408.f_9 != 4)
		{
			func_609(0, 1);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	if (!func_455(PLAYER::PLAYER_ID()) && !BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 17))
	{
		func_454();
	}
	if (func_453())
	{
		func_452(1);
		func_451(1);
		func_450(1);
		func_449(1);
	}
	if ((((bParam0 && !func_448()) && !func_705()) && !Global_262145.f_4752 /* Tunable: TURN_SNOW_ON_OFF */) && !func_447())
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	func_437(&uVar0, -1);
	if ((func_19() == 0 && !func_127()) && !func_705())
	{
		if (func_436())
		{
			func_435();
		}
		else
		{
			func_432(1147932892, 28, 0);
		}
	}
	func_431(0);
}

void func_431(int iParam0)//Position - 0x181EF
{
	if (!Global_1935851 == iParam0)
	{
		Global_1935851 = iParam0;
	}
}

void func_432(int iParam0, int iParam1, int iParam2)//Position - 0x18208
{
	int iVar0;
	
	if (func_434(iParam1, iParam2))
	{
		iVar0 = func_433();
		Global_2694470[iVar0] = iParam1;
		Global_2694481[iVar0] = iParam0;
	}
}

int func_433()//Position - 0x18235
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

int func_434(int iParam0, var uParam1)//Position - 0x1826A
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

void func_435()//Position - 0x182F0
{
	MISC::SET_BIT(&(Global_1048576.f_10), 22);
}

bool func_436()//Position - 0x18304
{
	return BitTest(Global_1048576.f_10, 21);
}

void func_437(var uParam0, int iParam1)//Position - 0x18315
{
	func_443(uParam0, iParam1);
	func_438(iParam1);
}

void func_438(int iParam0)//Position - 0x1832B
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	iVar0 = func_442(iParam0);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	if (func_439())
	{
		if (BitTest(iVar1, 1))
		{
			func_33(133, 1, -1, 1);
		}
	}
}

int func_439()//Position - 0x18366
{
	if (func_441() && func_440(0))
	{
		return 1;
	}
	return 0;
}

var func_440(int iParam0)//Position - 0x18384
{
	return Global_1574538[iParam0];
}

var func_441()//Position - 0x18394
{
	return func_440(func_30() + 1);
}

int func_442(int iParam0)//Position - 0x183A6
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

void func_443(var uParam0, int iParam1)//Position - 0x18409
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	iVar1 = func_446(iParam1);
	iVar2 = MISC::GET_PROFILE_SETTING(iVar1);
	if (BitTest(iVar2, 1))
	{
		func_528(1208, iParam1);
		func_525(joaat("MPPLY_DM_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 1);
		bVar0 = true;
	}
	if (BitTest(iVar2, 2))
	{
		func_444(1210, iParam1);
		func_525(joaat("MPPLY_RACE_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 2);
		bVar0 = true;
	}
	if (BitTest(iVar2, 3))
	{
		func_528(1119, iParam1);
		func_525(joaat("MPPLY_MC_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 3);
		bVar0 = true;
	}
	if (BitTest(iVar2, 4))
	{
		func_528(1212, iParam1);
		func_525(joaat("MPPLY_MGAME_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 4);
		bVar0 = true;
	}
	if (BitTest(iVar2, 5))
	{
		func_528(1925, iParam1);
		func_525(joaat("MPPLY_CAP_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 5);
		bVar0 = true;
	}
	if (BitTest(iVar2, 6))
	{
		func_528(1927, iParam1);
		func_525(joaat("MPPLY_SUR_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 6);
		bVar0 = true;
	}
	if (BitTest(iVar2, 7))
	{
		func_528(1929, iParam1);
		func_525(joaat("MPPLY_LTS_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 7);
		bVar0 = true;
	}
	if (BitTest(iVar2, 8))
	{
		func_528(1931, iParam1);
		func_525(joaat("MPPLY_PARA_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 8);
		bVar0 = true;
	}
	if (BitTest(iVar2, 9))
	{
		func_528(12174, iParam1);
		func_525(joaat("MPPLY_HEIST_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 9);
		bVar0 = true;
	}
	if (BitTest(iVar2, 26))
	{
		func_528(1933, iParam1);
		func_525(joaat("MPPLY_FMEVN_CHEAT_START"), 2);
		func_525(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar2, iParam1);
	}
}

void func_444(int iParam0, int iParam1)//Position - 0x18610
{
	func_445(iParam0, func_27(iParam0, iParam1) + 1, iParam1);
}

void func_445(int iParam0, int iParam1, int iParam2)//Position - 0x1862A
{
	func_66(iParam0, iParam1, iParam2, 1);
}

int func_446(int iParam0)//Position - 0x1863D
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_30();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_447()//Position - 0x186A0
{
	if (func_726(PLAYER::PLAYER_ID()) || func_725(PLAYER::PLAYER_ID()))
	{
		if (func_625() || func_701())
		{
			return 1;
		}
	}
	return 0;
}

bool func_448()//Position - 0x186D7
{
	return Global_1836594;
}

void func_449(int iParam0)//Position - 0x186E3
{
	Global_2684820.f_6541 = iParam0;
}

void func_450(int iParam0)//Position - 0x186F4
{
	Global_2684820.f_6540 = iParam0;
}

void func_451(int iParam0)//Position - 0x18705
{
	Global_2684820.f_6539 = iParam0;
}

void func_452(int iParam0)//Position - 0x18716
{
	Global_2684820.f_6360 = iParam0;
}

int func_453()//Position - 0x18727
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_117906[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_454()//Position - 0x1875E
{
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(true);
}

int func_455(int iParam0)//Position - 0x18775
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1895156[iVar0 /*609*/] != -1;
	}
	return 0;
}

void func_456()//Position - 0x18796
{
	if (Global_1970618)
	{
		if (func_351())
		{
			if (func_461(Global_4718592.f_171044))
			{
				switch (Global_4718592.f_164818)
				{
					case 1:
						ENTITY::REMOVE_MODEL_HIDE(2947.7297f, -3860.6223f, 142.61438f, 5f, joaat("xs_combined_dyst_06_build_03"), false);
						break;
				}
			}
			else if (func_460(Global_4718592.f_171044))
			{
				switch (Global_4718592.f_164818)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2943.7654f, -3859.6245f, 151.10071f, 5f, joaat("xs_propint3_set_waste_03_licencep"), false);
						break;
				}
			}
			else if (func_459(Global_4718592.f_171044))
			{
				switch (Global_4718592.f_164818)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2948.968f, -3854.075f, 150.7258f, 5f, joaat("xs_propint4_waste_08_plates"), false);
						break;
				}
			}
			else if (func_458(Global_4718592.f_171044))
			{
				switch (Global_4718592.f_164818)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2944.7256f, -3846.3835f, 140.00003f, 5f, joaat("xs_propint5_waste_09_ground_d"), false);
						ENTITY::REMOVE_MODEL_HIDE(2948.5894f, -3859.2585f, 145.65782f, 5f, joaat("xs_propint5_waste_09_ground_cut"), false);
						ENTITY::REMOVE_MODEL_HIDE(2950.4646f, -3861.078f, 149.8605f, 5f, joaat("xs_propint4_waste_09_lollywall"), false);
						break;
				}
			}
			else if (func_457(Global_4718592.f_171044))
			{
				switch (Global_4718592.f_164818)
				{
					case 3:
						ENTITY::REMOVE_MODEL_HIDE(2943.7654f, -3859.6245f, 151.10071f, 5f, joaat("xs_propint3_set_waste_03_licencep"), false);
						break;
					}
				}
		}
		Global_1970618 = 0;
	}
}

bool func_457(int iParam0)//Position - 0x18940
{
	return iParam0 == 76;
}

bool func_458(int iParam0)//Position - 0x1894D
{
	return iParam0 == 77;
}

bool func_459(int iParam0)//Position - 0x1895A
{
	return iParam0 == 83;
}

bool func_460(int iParam0)//Position - 0x18967
{
	return iParam0 == 74;
}

bool func_461(int iParam0)//Position - 0x18974
{
	return iParam0 == 78;
}

void func_462()//Position - 0x18981
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		Global_1969311[iVar0] = -1;
		Global_1969346[iVar0] = -1;
		Global_1969381[iVar0] = -1;
		iVar0++;
	}
}

void func_463()//Position - 0x189B7
{
	Global_2683883.f_43.f_41 = 0;
}

void func_464()//Position - 0x189C8
{
	Global_1927408.f_6 = 0;
}

void func_465()//Position - 0x189D7
{
	MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_96.f_32), 5);
}

bool func_466()//Position - 0x189F3
{
	return BitTest(Global_2683883.f_3, 7);
}

void func_467()//Position - 0x18A03
{
	struct<3> Var0;
	struct<2> Var3;
	int iVar5;
	
	if (!func_473(func_474(), Var0))
	{
		Var3.f_0 = -1225769426;
		Var3.f_1 = PLAYER::PLAYER_ID();
		iVar5 = func_472(1, 1);
		if (!iVar5 == 0)
		{
			func_469();
			func_468(0);
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var3, 2, iVar5);
		}
	}
}

void func_468(int iParam0)//Position - 0x18A50
{
	if (iParam0 == 1)
	{
		Global_2672524.f_3537 = NETWORK::GET_NETWORK_TIME();
	}
	Global_2672524.f_3421 = iParam0;
}

void func_469()//Position - 0x18A72
{
	func_471();
	func_470();
}

void func_470()//Position - 0x18A82
{
	struct<72> Var0;
	
	if (func_62(PLAYER::PLAYER_ID()))
	{
		Var0.f_6 = 32;
		Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_126 = { Var0 };
	}
}

void func_471()//Position - 0x18AB4
{
	struct<113> Var0;
	
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2672524.f_3421.f_79 };
	Var0.f_95 = { Global_2672524.f_3421.f_95 };
	Global_2672524.f_3421 = { Var0 };
}

var func_472(int iParam0, bool bParam1)//Position - 0x18B01
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_14(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_260(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_473(struct<3> Param0, struct<3> Param3)//Position - 0x18B66
{
	if ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_474()//Position - 0x18B97
{
	return Global_2656952[PLAYER::PLAYER_ID() /*10*/];
}

void func_475(int iParam0)//Position - 0x18BAB
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2756094[iParam0 /*5*/].f_1 == -1 || Global_2756094[iParam0 /*5*/].f_2 == -1) || Global_2756094[iParam0 /*5*/].f_3 == -1) || Global_2756094[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	HUD::REPLACE_HUD_COLOUR_WITH_RGBA(Global_2756094[iParam0 /*5*/], Global_2756094[iParam0 /*5*/].f_1, Global_2756094[iParam0 /*5*/].f_2, Global_2756094[iParam0 /*5*/].f_3, Global_2756094[iParam0 /*5*/].f_4);
	Global_2756094[iParam0 /*5*/] = -1;
	Global_2756094[iParam0 /*5*/].f_1 = -1;
	Global_2756094[iParam0 /*5*/].f_2 = -1;
	Global_2756094[iParam0 /*5*/].f_3 = -1;
	Global_2756094[iParam0 /*5*/].f_4 = -1;
}

int func_476(int iParam0, int iParam1)//Position - 0x18C78
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2756094[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_477()//Position - 0x18CA9
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 18);
}

void func_478(bool bParam0)//Position - 0x18CC1
{
	int iVar0;
	struct<57> Var1;
	int iVar58;
	
	Global_2684820.f_1.f_2798 = 0;
	Global_2684820.f_1.f_2799 = 0;
	Global_2684820.f_1.f_2824 = 0;
	Global_2684820.f_1.f_2805 = 0;
	Global_2684820.f_1.f_2806 = 0;
	Global_2684820.f_1.f_2809 = 0;
	Global_2684820.f_1.f_2810 = 0;
	Global_2684820.f_1.f_2808 = -1;
	Global_2684820.f_1.f_2811 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2684820.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
	Global_2684820.f_1.f_2825 = -1;
	if (bParam0)
	{
		Global_2684820.f_1.f_2822 = -1;
		Global_2684820.f_1.f_2823 = -1;
	}
	Global_2684820.f_1.f_2844 = 0;
	func_479();
	Var1.f_33 = 2;
	Var1.f_36 = 7;
	iVar58 = 0;
	while (iVar58 <= 31)
	{
		Global_2684820.f_1.f_845[iVar58 /*57*/] = { Var1 };
		iVar58++;
	}
	Global_2680268.f_33 = -1;
	Global_2680268.f_34 = -1;
}

void func_479()//Position - 0x18DBD
{
	Global_2680268.f_32 = 0;
}

void func_480()//Position - 0x18DCC
{
	Global_2683883.f_691 = 0;
}

void func_481()//Position - 0x18DDC
{
	Global_2683883.f_692 = 0;
	func_482();
}

void func_482()//Position - 0x18DF0
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 >= 0)
	{
		MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_96.f_32), 6);
	}
}

void func_483()//Position - 0x18E16
{
	Global_2683883 = 0;
	Global_2683883.f_2 = 0;
	Global_2683883.f_3 = 0;
}

bool func_484()//Position - 0x18E31
{
	return Global_2683883.f_691;
}

bool func_485()//Position - 0x18E40
{
	return Global_1936352;
}

bool func_486()//Position - 0x18E4C
{
	return BitTest(Global_2683883, 1);
}

bool func_487()//Position - 0x18E5A
{
	return BitTest(Global_2683883, 16);
}

void func_488()//Position - 0x18E69
{
	MISC::CLEAR_BIT(&Global_2683883, 21);
}

void func_489()//Position - 0x18E7B
{
	Global_2684820.f_2846.f_35 = 1;
}

void func_490()//Position - 0x18E8D
{
	Global_2684820.f_1.f_2827 = 1;
}

void func_491()//Position - 0x18E9F
{
	Global_2683883.f_827 = 1;
}

void func_492()//Position - 0x18EAF
{
	Global_2684820.f_1.f_2826 = 1;
}

void func_493()//Position - 0x18EC1
{
	MISC::SET_BIT(&Global_2683883, 21);
}

void func_494(int iParam0)//Position - 0x18ED3
{
	Global_2684820.f_1.f_837 = iParam0;
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_222 = iParam0;
}

void func_495()//Position - 0x18EF5
{
	struct<38> Var0;
	
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2680306 = { Var0 };
}

void func_496()//Position - 0x18F1D
{
	Global_2684820.f_2846.f_1 = 1;
}

void func_497()//Position - 0x18F2F
{
	Global_2684820.f_2846.f_1 = 0;
}

bool func_498()//Position - 0x18F41
{
	return Global_2683883.f_716;
}

bool func_499()//Position - 0x18F50
{
	return Global_2683883.f_706;
}

bool func_500()//Position - 0x18F5F
{
	return Global_2683883.f_693;
}

bool func_501()//Position - 0x18F6E
{
	return Global_2683883.f_702;
}

bool func_502()//Position - 0x18F7D
{
	return BitTest(Global_2683883.f_2, 15);
}

bool func_503()//Position - 0x18F8E
{
	return BitTest(Global_2683883, 20);
}

bool func_504()//Position - 0x18F9D
{
	return BitTest(Global_2683883, 2);
}

void func_505()//Position - 0x18FAB
{
	Global_2684820.f_2846.f_35 = 0;
}

bool func_506()//Position - 0x18FBD
{
	return BitTest(Global_1048576.f_10, 8);
}

void func_507()//Position - 0x18FCE
{
	Global_2683883.f_721 = 0;
}

var func_508()//Position - 0x18FDE
{
	return Global_2683883.f_721;
}

void func_509()//Position - 0x18FED
{
	Global_2683883.f_752 = 0;
}

bool func_510()//Position - 0x18FFD
{
	return Global_2683883.f_752;
}

void func_511()//Position - 0x1900C
{
	Global_2684820.f_1.f_838 = 0;
	Global_2684820.f_1.f_839 = 0;
	Global_2684820.f_1.f_841 = 0;
}

void func_512()//Position - 0x19032
{
	MISC::CLEAR_BIT(&Global_2683883, 4);
}

void func_513()//Position - 0x19043
{
	MISC::CLEAR_BIT(&Global_2683883, 28);
}

void func_514()//Position - 0x19055
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_11.f_1), 4);
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_11.f_1), 5);
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_11.f_1), 7);
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_11.f_1), 8);
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_11.f_1), 9);
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_11.f_1), 10);
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_11.f_1), 11);
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_11.f_1), 12);
	MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_11.f_1), 13);
}

void func_515(bool bParam0)//Position - 0x1910B
{
	NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(bParam0);
}

void func_516(char* sParam0)//Position - 0x19119
{
	var uVar0;
	
	if ((!func_518() && func_517(120, -1)) && !func_406(0))
	{
		NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(sParam0, &uVar0, 13);
		if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&uVar0))
			{
			}
		}
	}
}

int func_517(int iParam0, int iParam1)//Position - 0x1915E
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_34(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_518()//Position - 0x19182
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if ((Global_1853988[iVar0 /*867*/].f_36.f_2 == 63 || Global_1853988[iVar0 /*867*/].f_36.f_2 == 62) || Global_1853988[iVar0 /*867*/].f_36.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_519()//Position - 0x191D4
{
	MISC::SET_BIT(&(Global_1048576.f_10), 8);
	func_520();
}

void func_520()//Position - 0x191EC
{
	Global_2683883.f_881 = 1;
}

bool func_521()//Position - 0x191FC
{
	return Global_2684820.f_2846.f_2;
}

var func_522(int iParam0)//Position - 0x1920D
{
	return Global_1853988[iParam0 /*867*/].f_96.f_2;
}

void func_523()//Position - 0x19222
{
	if (func_524())
	{
		HUD::CLEAR_HELP(true);
	}
}

bool func_524()//Position - 0x19236
{
	return func_199("FM_RETRY_INV" /* GXT: Press ~INPUT_FRONTEND_X~ to replay the Job. Press ~INPUT_FRONTEND_CANCEL~ to start a random Job. More than half the players have to agree. */);
}

void func_525(int iParam0, int iParam1)//Position - 0x19246
{
	int iVar0;
	
	iVar0 = func_527(iParam0);
	iVar0 = (iVar0 + iParam1);
	func_526(iParam0, iVar0);
}

void func_526(var uParam0, int iParam1)//Position - 0x19265
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_527(var uParam0)//Position - 0x19281
{
	int iVar0;
	var uVar1;
	
	iVar0 = uParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_528(int iParam0, int iParam1)//Position - 0x1929F
{
	int iVar0;
	
	iVar0 = func_27(iParam0, func_29(iParam1));
	iVar0++;
	func_66(iParam0, iVar0, iParam1, 1);
}

int func_529(int iParam0)//Position - 0x192C6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 2;
	bVar1 = func_546();
	if (Global_2695770 == 0)
	{
		return 0;
	}
	if (func_545())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_544() || func_540()))
		{
			Global_2694580 = 1;
		}
	}
	Global_2695770 = 0;
	if (Global_1577905)
	{
		iVar0 = 1;
	}
	if (Global_2694580)
	{
		iVar0 = 1;
	}
	if (Global_2694579)
	{
		iVar0 = 1;
	}
	if (func_539(Global_112838.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2694519)
	{
		iVar0 = 1;
	}
	if (func_538(512))
	{
		iVar0 = 1;
	}
	if (func_537(128))
	{
		iVar0 = 1;
	}
	if (Global_1577929 == 1)
	{
		if (bVar1)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 2;
		}
	}
	if (func_406(0))
	{
		iVar0 = 0;
	}
	if (Global_2695075)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_535())
		{
			if (Global_4718592.f_118152 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_260(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_534())
	{
		iVar0 = 0;
	}
	if ((Global_2694580 || Global_2694579) || Global_1577905)
	{
		if (func_540())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837323)
	{
		iVar0 = 2;
	}
	Global_2695075 = 0;
	Global_2694579 = 0;
	Global_2694580 = 0;
	Global_1577905 = 0;
	Global_2694519 = 0;
	func_532(&(Global_112838.f_1), 32);
	func_531(512);
	func_530(128);
	Global_1837323 = 0;
	return iVar0;
}

void func_530(int iParam0)//Position - 0x1942D
{
	Global_112895 = (Global_112895 - (Global_112895 && iParam0));
}

void func_531(int iParam0)//Position - 0x19445
{
	Global_112896 = (Global_112896 - (Global_112896 && iParam0));
}

void func_532(var uParam0, int iParam1)//Position - 0x1945D
{
	func_533(uParam0, iParam1);
}

void func_533(var uParam0, var uParam1)//Position - 0x1946D
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_534()//Position - 0x19482
{
	if (((Global_1836618 || Global_1836587) || func_260(PLAYER::PLAYER_ID(), 0)) || func_259())
	{
		return 1;
	}
	return 0;
}

int func_535()//Position - 0x194B9
{
	switch (func_536())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_536()//Position - 0x194F3
{
	return Global_2684820.f_1.f_2822;
}

bool func_537(int iParam0)//Position - 0x19504
{
	return (Global_112895 && iParam0) != 0;
}

bool func_538(int iParam0)//Position - 0x19515
{
	return (Global_112896 && iParam0) != 0;
}

bool func_539(var uParam0, int iParam1)//Position - 0x19526
{
	return (uParam0 && iParam1) != 0;
}

int func_540()//Position - 0x19535
{
	if (func_543(Global_2696922))
	{
		return 0;
	}
	if (func_541(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_541(int iParam0, int iParam1)//Position - 0x1955E
{
	if (Global_1895156[iParam0 /*609*/] == iParam1)
	{
		return func_542(iParam0);
	}
	return 0;
}

int func_542(int iParam0)//Position - 0x1957E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1895156[iVar0 /*609*/].f_1, 0);
	}
	return 0;
}

int func_543(int iParam0)//Position - 0x195A1
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_12036 /* Tunable: DISABLE_BAD_SPORT_HOT_TARGET */)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_12038 /* Tunable: DISABLE_BAD_SPORT_CHECKPOINT */)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_12035 /* Tunable: DISABLE_BAD_SPORT_CHALLENGE */)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_12039 /* Tunable: DISABLE_BAD_SPORT_PENNED_IN */)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_12040 /* Tunable: DISABLE_BAD_SPORT_PASS_THE_PARCEL */)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_12041 /* Tunable: DISABLE_BAD_SPORT_HOT_PROPERTY */)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_12037 /* Tunable: DISABLE_BAD_SPORT_KILL_LIST */)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_12042 /* Tunable: DISABLE_BAD_SPORT_DEAD_DROP */)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_12043 /* Tunable: DISABLE_BAD_SPORT_KING_OF_THE_CASTLE */)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_12044 /* Tunable: DISABLE_BAD_SPORT_CRIMINAL_DAMAGES */)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_12045 /* Tunable: DISABLE_BAD_SPORT_HUNT_THE_BEAST */)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

int func_544()//Position - 0x196BD
{
	if (func_543(Global_2696922))
	{
		return 0;
	}
	if (func_542(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_545()//Position - 0x196E4
{
	return BitTest(Global_1574589, 0);
}

int func_546()//Position - 0x196F2
{
	if (Global_1577929 == 1 && (func_617() || func_547()))
	{
		return 1;
	}
	return 0;
}

int func_547()//Position - 0x1971B
{
	if (((((func_339() || func_556()) || func_555()) || func_553(Global_4718592.f_117591)) || func_551(Global_4718592.f_117591)) || func_548())
	{
		return 1;
	}
	return 0;
}

int func_548()//Position - 0x19775
{
	return func_549(Global_4718592.f_117591);
}

int func_549(int iParam0)//Position - 0x1978B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_550(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_550(int iParam0)//Position - 0x197B5
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33923 /* Tunable: 1597065378 */[iParam0];
	}
	return -1;
}

int func_551(int iParam0)//Position - 0x197D4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (iParam0 == func_552(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_552(int iParam0)//Position - 0x197FF
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33952 /* Tunable: XM22_STORY_MISSION_ROOT_CONTENT_ID_10 */[iParam0];
	}
	return -1;
}

int func_553(int iParam0)//Position - 0x1981E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_554(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_554(int iParam0)//Position - 0x19848
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33069 /* Tunable: ULP_MISSION_ROOT_CONTENT_ID_5 */[iParam0];
	}
	return -1;
}

int func_555()//Position - 0x19867
{
	return func_619(Global_4718592.f_117591);
}

int func_556()//Position - 0x1987D
{
	return func_620(Global_4718592.f_117591);
}

int func_557(int iParam0)//Position - 0x19893
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

void func_558()//Position - 0x198CB
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId");
	}
}

void func_559()//Position - 0x19948
{
	Global_2683883.f_697 = 0;
	NETWORK::NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE();
}

void func_560(bool bParam0)//Position - 0x1995C
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2))
		{
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 2);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863, 2))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 2);
	}
}

int func_561(int iParam0)//Position - 0x199B9
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_562()//Position - 0x199D7
{
	Global_2683883.f_841 = 0;
}

bool func_563()//Position - 0x199E7
{
	return Global_2683883.f_841;
}

void func_564()//Position - 0x199F6
{
	Global_2683883.f_845 = 0;
}

bool func_565()//Position - 0x19A06
{
	return Global_2683883.f_845;
}

void func_566()//Position - 0x19A15
{
	MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_96.f_32), 1);
}

int func_567(int iParam0)//Position - 0x19A31
{
	var* uVar0;
	
	if (func_259())
	{
		return 1;
	}
	if (func_572())
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_117878)))
	{
		return 1;
	}
	if (func_571())
	{
		return 1;
	}
	func_570();
	DATAFILE::DATAFILE_CREATE(0);
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	if (iParam0 == 0)
	{
		Global_1927367++;
		DATAFILE::DATADICT_SET_INT(uVar0, "quit", Global_1927367);
		DATAFILE::DATADICT_SET_INT(uVar0, "quitd", 1);
		DATAFILE::DATADICT_SET_INT(uVar0, "ply", Global_1927367.f_2);
		DATAFILE::DATADICT_SET_INT(uVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1927392.f_1++;
		DATAFILE::DATADICT_SET_INT(uVar0, "quit", Global_1927392.f_1);
		DATAFILE::DATADICT_SET_INT(uVar0, "quitd", 1);
		DATAFILE::DATADICT_SET_INT(uVar0, "ply", Global_1927392.f_4);
		DATAFILE::DATADICT_SET_INT(uVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	}
	if (iParam0 == 0)
	{
		if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_4718592.f_117878), 0f, func_569(iParam0), 0))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_1048576.f_44), 0f, func_569(iParam0), 0))
		{
		}
	}
	func_568();
	func_570();
	NETWORK::UGC_CLEAR_MODIFY_RESULT();
	return 1;
}

void func_568()//Position - 0x19B7A
{
	Global_1927367 = 0;
	Global_1927367.f_2 = 0;
	Global_1927367.f_8 = 0;
	Global_1927367.f_3 = 0;
	Global_1927367.f_6 = 0;
}

char* func_569(int iParam0)//Position - 0x19BA3
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

void func_570()//Position - 0x19BF7
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

int func_571()//Position - 0x19C0D
{
	if (NETWORK::UGC_IS_CREATING())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_GETTING())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_MODIFYING())
	{
		return 1;
	}
	return 0;
}

int func_572()//Position - 0x19C3D
{
	if (!func_573())
	{
		return 1;
	}
	return 0;
}

int func_573()//Position - 0x19C52
{
	if (func_574())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_574()//Position - 0x19C72
{
	return Global_2695084;
}

bool func_575()//Position - 0x19C7E
{
	return Global_2683883.f_734;
}

void func_576(bool bParam0)//Position - 0x19C8D
{
	if (bParam0)
	{
		Global_1574615 = 1;
	}
	else
	{
		Global_1574615 = 0;
	}
}

void func_577()//Position - 0x19CA7
{
	Global_2684820.f_1.f_2828.f_13 = 0;
	Global_2684820.f_1.f_2828 = 0;
	Global_2684820.f_1.f_2828.f_1 = 0;
	Global_2684820.f_1.f_2828.f_2 = 0;
	Global_2684820.f_1.f_2828.f_3 = 0;
	Global_2684820.f_1.f_2828.f_4 = 0;
	Global_2684820.f_1.f_2828.f_5 = 0;
	Global_2684820.f_1.f_2828.f_6 = 0;
	Global_2684820.f_1.f_2828.f_7 = 0;
	Global_2684820.f_1.f_2828.f_8 = 0;
	Global_2684820.f_1.f_2828.f_9 = 0;
	Global_2684820.f_1.f_2828.f_10 = 0;
	Global_2684820.f_1.f_2828.f_11 = 0;
	Global_2684820.f_1.f_2828.f_12 = 0;
}

bool func_578(int iParam0)//Position - 0x19D55
{
	return Global_2657704[iParam0 /*463*/].f_121 == 1;
}

void func_579()//Position - 0x19D6A
{
	Global_2683883.f_716 = 1;
}

void func_580(int iParam0, struct<3> Param1, struct<6> Param4)//Position - 0x19D7A
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	func_600();
	func_599();
	func_598();
	func_597();
	func_596();
	func_730();
	Global_1927408.f_9 = iParam0;
	switch (Global_1927408.f_9)
	{
		case 1:
			Global_1927408 = 0;
			Global_1927408.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 1);
			func_593();
			break;
		
		case 2:
			Global_1927408 = 1;
			Global_1927408.f_23 = { Param1 };
			Global_1927408.f_17 = { Param4 };
			MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 1);
			break;
		
		case 3:
			if (Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 0 || Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 1)
			{
				func_592(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_96.f_28);
			}
			func_591();
			Global_1927408 = 1;
			Global_1927408.f_23 = { Param1 };
			if (func_590())
			{
				Global_1927408.f_17 = { Param4 };
			}
			MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 1);
			break;
		
		case 4:
			func_589();
			func_591();
			Global_1927408 = 1;
			if (func_725(PLAYER::PLAYER_ID()) || func_726(PLAYER::PLAYER_ID()))
			{
				func_588(1);
			}
			if ((func_587() || func_628()) && func_608())
			{
				Global_1927408.f_17 = { func_607() };
				Param4 = { Global_1927408.f_17 };
				Global_1927408.f_23 = { func_586() };
			}
			else if (func_587() || func_628())
			{
				if (func_585())
				{
					Global_1927408.f_23 = { func_584() };
				}
				else
				{
					Global_1927408.f_23 = { Param1 };
				}
			}
			else
			{
				Global_1927408.f_23 = { Param1 };
			}
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 1);
			break;
		
		case 5:
			func_589();
			func_583();
			func_591();
			if (func_725(PLAYER::PLAYER_ID()) || func_726(PLAYER::PLAYER_ID()))
			{
				func_588(1);
			}
			Global_1927408 = 1;
			Global_1927408.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 1);
			break;
		
		case 8:
			Global_1927408 = 0;
			Global_1927408.f_23 = { Param1 };
			Global_1927408.f_17 = { Param4 };
			MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 1);
			break;
		
		case 9:
			func_591();
			Global_1927408 = 1;
			Global_1927408.f_23 = { Param1 };
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 1);
			break;
		
		case 10:
			Global_1927408 = 0;
			Global_1927408.f_23 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_863), 1);
			break;
	}
	func_582();
	func_581();
	func_494(Global_1927408.f_9);
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_223 = { Global_1927408.f_23 };
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_226 = { Param4 };
}

void func_581()//Position - 0x1A08D
{
	MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18), 23);
}

void func_582()//Position - 0x1A0AA
{
	MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18), 12);
}

void func_583()//Position - 0x1A0C7
{
	Global_1927408.f_4 = 1;
}

Vector3 func_584()//Position - 0x1A0D6
{
	return Global_2683883.f_43.f_575;
}

int func_585()//Position - 0x1A0E9
{
	if ((Global_2683883.f_43.f_575 != 0f || Global_2683883.f_43.f_575.f_1 != 0f) || Global_2683883.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_586()//Position - 0x1A12A
{
	return Global_2683883.f_43.f_578;
}

var func_587()//Position - 0x1A13D
{
	return Global_2683883.f_43.f_57;
}

void func_588(int iParam0)//Position - 0x1A14D
{
	Global_2684820.f_6359 = iParam0;
}

void func_589()//Position - 0x1A15E
{
	Global_1927408.f_3 = 1;
}

bool func_590()//Position - 0x1A16D
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 24);
}

void func_591()//Position - 0x1A187
{
	Global_1927408.f_7 = 1;
}

void func_592(var uParam0)//Position - 0x1A196
{
	Global_1927408.f_10 = uParam0;
}

int func_593()//Position - 0x1A1A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2684820.f_6641), 13))
	{
		return 0;
	}
	iVar2 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != iVar2)
		{
			Var3 = { func_80(iVar0) };
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var3, &(Global_2684820.f_6641)) && func_595(iVar0))
			{
				func_594();
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_594()//Position - 0x1A226
{
	MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18), 9);
}

var func_595(int iParam0)//Position - 0x1A243
{
	return BitTest(Global_1853988[iParam0 /*867*/].f_36.f_18, 9);
}

void func_596()//Position - 0x1A25B
{
	Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_5 = 0;
}

void func_597()//Position - 0x1A271
{
	Global_1927408.f_10 = -1;
}

void func_598()//Position - 0x1A280
{
	Global_1927408.f_4 = 0;
}

void func_599()//Position - 0x1A28F
{
	Global_1927408.f_3 = 0;
}

void func_600()//Position - 0x1A29E
{
	Global_2684820.f_2846.f_2 = 1;
}

void func_601()//Position - 0x1A2B0
{
	Global_2683883.f_669.f_14 = 0;
}

bool func_602()//Position - 0x1A2C2
{
	return Global_2683883.f_669.f_14;
}

void func_603()//Position - 0x1A2D3
{
	Global_2683883.f_43.f_55 = 0;
}

void func_604()//Position - 0x1A2E4
{
	Global_2683883.f_43.f_43 = -1;
}

int func_605()//Position - 0x1A2F5
{
	return Global_2683883.f_43.f_43;
}

void func_606(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1A305
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	if (!Global_2629350)
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2629350.f_1)))
	{
		return;
	}
	Global_2629416 = 1;
}

struct<6> func_607()//Position - 0x1A33C
{
	return Global_2683883.f_43.f_12;
}

bool func_608()//Position - 0x1A34E
{
	return Global_2683883.f_43.f_59;
}

void func_609(int iParam0, bool bParam1)//Position - 0x1A35E
{
	if (func_719())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (NETWORK::NETWORK_IS_CLOCK_TIME_OVERRIDDEN())
				{
					NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
				}
			}
			break;
		
		case 1:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(6, 0, 0);
			break;
		
		case 2:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(12, 0, 0);
			break;
		
		case 3:
			if (func_610(Global_4718592.f_171044))
			{
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(20, 50, 0);
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
			}
			break;
		
		case 4:
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
			break;
		
		default:
			break;
	}
}

bool func_610(int iParam0)//Position - 0x1A3F1
{
	return iParam0 == 10;
}

int func_611()//Position - 0x1A3FE
{
	return Global_1927408.f_12;
}

void func_612(var uParam0, var uParam1)//Position - 0x1A40C
{
	Global_1927408.f_14 = uParam0;
	Global_1927408.f_15 = uParam1;
}

void func_613(var uParam0)//Position - 0x1A424
{
	Global_1927408.f_12 = uParam0;
}

int func_614()//Position - 0x1A434
{
	return Global_1927408.f_13;
}

int func_615(int iParam0)//Position - 0x1A442
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5060[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_616(int iParam0)//Position - 0x1A471
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return BitTest(Global_2684820.f_1.f_2813[iVar0], iVar1);
}

int func_617()//Position - 0x1A4A2
{
	return func_618(Global_4718592.f_117591);
}

int func_618(int iParam0)//Position - 0x1A4B8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31929[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_619(int iParam0)//Position - 0x1A4E7
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

int func_620(int iParam0)//Position - 0x1A516
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

bool func_621()//Position - 0x1A550
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_624();
	}
	return func_622(Global_4718592.f_117591);
}

int func_622(int iParam0)//Position - 0x1A574
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6139[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_623()//Position - 0x1A5AE
{
	return Global_2683883.f_19;
}

bool func_624()//Position - 0x1A5BC
{
	return Global_2683883.f_21;
}

var func_625()//Position - 0x1A5CA
{
	return BitTest(Global_1574942, 4);
}

bool func_626()//Position - 0x1A5D8
{
	return Global_2683883.f_17;
}

void func_627()//Position - 0x1A5E6
{
	Global_2683883.f_43.f_56 = 1;
}

bool func_628()//Position - 0x1A5F7
{
	return Global_2683883.f_43.f_55;
}

void func_629()//Position - 0x1A607
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2621534.f_4.f_3)))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2628648.f_3)))
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2628648.f_3), &(Global_2621534.f_4.f_3)))
		{
			Global_1573982 = 0;
		}
		else
		{
			Global_1573982 = 1;
		}
	}
	Global_1573983 = 0;
	Global_1573983.f_1 = { Global_2621534.f_4.f_3 };
}

void func_630()//Position - 0x1A668
{
	Global_1927408.f_5 = 0;
	Global_1927408.f_11 = -1;
}

void func_631(var uParam0)//Position - 0x1A67E
{
	Global_1927408.f_5 = 1;
	Global_1927408.f_11 = uParam0;
}

int func_632(int iParam0)//Position - 0x1A695
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9814[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_633(int iParam0)//Position - 0x1A6E2
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9650[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_634()//Position - 0x1A72E
{
	if (BitTest(Global_4718592.f_18, 0))
	{
		return 1;
	}
	return ((((((func_641(Global_4718592.f_117591, 1) || func_640(Global_4718592.f_117591)) || func_639(Global_4718592.f_117591)) || func_638(Global_4718592.f_117591)) || func_637(Global_4718592.f_171044)) || func_636(Global_4718592.f_171044)) || func_635(Global_4718592.f_171044));
}

bool func_635(int iParam0)//Position - 0x1A7CC
{
	return iParam0 == 65;
}

bool func_636(int iParam0)//Position - 0x1A7D9
{
	return iParam0 == 48;
}

bool func_637(int iParam0)//Position - 0x1A7E6
{
	return iParam0 == 8;
}

int func_638(int iParam0)//Position - 0x1A7F3
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9893[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_639(int iParam0)//Position - 0x1A840
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9836[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_640(int iParam0)//Position - 0x1A88D
{
	int iVar0;
	
	if (Global_4718592.f_171044 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9717[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_641(int iParam0, bool bParam1)//Position - 0x1A8DA
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

struct<13> func_642()//Position - 0x1A92B
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

void func_643(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1A940
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	if (!Global_4593985)
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(&uParam0);
	Global_4593987 = iVar0;
	Global_4593988 = (MISC::GET_GAME_TIMER() + 60000);
}

void func_644(struct<6> Param0)//Position - 0x1A97A
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		return;
	}
	Global_1573983 = 1;
	Global_1573983.f_1 = { Param0 };
}

bool func_645()//Position - 0x1A99F
{
	return Global_2683883.f_14;
}

void func_646(float fParam0)//Position - 0x1A9AD
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(false);
	}
}

void func_647(int iParam0)//Position - 0x1A9C7
{
	if (Global_2764799 != iParam0)
	{
		Global_2764799 = iParam0;
	}
}

void func_648()//Position - 0x1A9DE
{
	Global_1057409 = -1;
}

void func_649()//Position - 0x1A9EB
{
	func_650(-1f);
}

void func_650(float fParam0)//Position - 0x1A9F8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(false);
	}
}

int func_651(int iParam0)//Position - 0x1AA1C
{
	int iVar0;
	
	if (Global_1945782[iParam0 /*8*/] == -1)
	{
		iVar0 = func_27(func_653(iParam0), -1);
		if (iVar0 == -1)
		{
			func_652(iParam0, 0);
			iVar0 = 0;
		}
		Global_1945782[iParam0 /*8*/] = iVar0;
	}
	return Global_1945782[iParam0 /*8*/];
}

void func_652(int iParam0, int iParam1)//Position - 0x1AA5F
{
	Global_1945782[iParam0 /*8*/] = iParam1;
	func_445(func_653(iParam0), iParam1, -1);
}

int func_653(int iParam0)//Position - 0x1AA7E
{
	switch (iParam0)
	{
		case 0:
			return 12515;
		
		default:
	}
	return 12515;
}

bool func_654()//Position - 0x1AA9C
{
	return Global_4718592.f_1 == 0;
}

void func_655(bool bParam0, bool bParam1)//Position - 0x1AAAC
{
	NETWORK::NETWORK_BLOCK_INVITES(bParam0);
	NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(bParam0);
	if (NETWORK::NETWORK_IS_HOST())
	{
		NETWORK::NETWORK_SESSION_BLOCK_JOIN_REQUESTS(bParam1);
	}
}

bool func_656()//Position - 0x1AACD
{
	return Global_2683883.f_743;
}

void func_657()//Position - 0x1AADC
{
	if (BitTest(Global_2621446, 24))
	{
		MISC::CLEAR_BIT(&Global_2621446, 24);
	}
}

void func_658()//Position - 0x1AAF8
{
	MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18), 14);
}

var func_659()//Position - 0x1AB15
{
	return Global_2764799;
}

bool func_660()//Position - 0x1AB21
{
	return Global_2683883.f_832;
}

int func_661()//Position - 0x1AB30
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_192;
}

void func_662(bool bParam0)//Position - 0x1AB45
{
	if (bParam0)
	{
		if (Global_1836377 == 0)
		{
			Global_1836377 = 1;
		}
	}
	else if (Global_1836377 == 1)
	{
		Global_1836377 = 0;
	}
}

void func_663()//Position - 0x1AB6F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2684820.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2684820.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

int func_664()//Position - 0x1ABAD
{
	var* uVar0;
	
	if (func_259())
	{
		return 1;
	}
	if (func_572())
	{
		return 1;
	}
	if (func_571())
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_117878)))
	{
		return 1;
	}
	func_570();
	DATAFILE::DATAFILE_CREATE(0);
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	Global_1927367.f_2++;
	if (Global_1927367.f_2 < 1)
	{
		Global_1927367.f_2 = 1;
	}
	DATAFILE::DATADICT_SET_INT(uVar0, "quit", Global_1927367);
	DATAFILE::DATADICT_SET_INT(uVar0, "ply", Global_1927367.f_2);
	DATAFILE::DATADICT_SET_INT(uVar0, "plyd", 1);
	DATAFILE::DATADICT_SET_INT(uVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_4718592.f_117878), -1f, func_569(0), 0))
	{
	}
	func_568();
	func_570();
	NETWORK::UGC_CLEAR_MODIFY_RESULT();
	return 1;
}

void func_665()//Position - 0x1AC77
{
	Global_2683883.f_844 = 1;
}

void func_666(bool bParam0)//Position - 0x1AC87
{
	if (bParam0)
	{
		HUD::THEFEED_AUTO_POST_GAMETIPS_ON();
	}
	else
	{
		HUD::THEFEED_AUTO_POST_GAMETIPS_OFF();
	}
}

void func_667()//Position - 0x1AC9F
{
	Global_2683883.f_843 = 1;
}

int func_668(int iParam0)//Position - 0x1ACAF
{
	switch (func_19())
	{
		case 0:
			if (!func_669(iParam0))
			{
				if (Global_1853988[iParam0 /*867*/] == 2 || Global_1853988[iParam0 /*867*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_669(int iParam0)//Position - 0x1ACF8
{
	return Global_1853988[iParam0 /*867*/].f_192 != 0;
}

bool func_670()//Position - 0x1AD0D
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 2);
}

void func_671()//Position - 0x1AD24
{
	Global_2683883.f_843 = 0;
}

bool func_672()//Position - 0x1AD34
{
	return Global_2683883.f_843;
}

void func_673(bool bParam0)//Position - 0x1AD43
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", bParam0);
}

void func_674()//Position - 0x1AD69
{
	Global_1927408.f_12 = -1;
	Global_1927408.f_14 = -1;
	Global_1927408.f_15 = -1;
}

void func_675(int iParam0)//Position - 0x1AD86
{
	Global_1057410 = iParam0;
}

void func_676()//Position - 0x1AD94
{
	Global_1889948 = 0;
	Global_1836584 = 4;
}

void func_677(bool bParam0)//Position - 0x1ADA6
{
	if (bParam0)
	{
		Global_1836598 = 1;
	}
	else
	{
		Global_1836598 = 0;
	}
}

void func_678()//Position - 0x1ADC0
{
	Global_1889949 = -1;
	Global_1889950 = -1;
	Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_461 = -1;
	Global_1889955 = 0;
}

void func_679()//Position - 0x1ADE6
{
	Global_2794162.f_287 = 0;
	func_683(3782, 0, -1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_681())
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			func_680();
		}
	}
}

void func_680()//Position - 0x1AE25
{
	Global_78661 = 0;
	Global_78662 = -1;
	Global_78663 = -1;
	Global_78664 = -1;
	Global_78665 = -1;
	Global_78669 = -1;
}

bool func_681()//Position - 0x1AE4B
{
	return func_682(PLAYER::PLAYER_PED_ID());
}

int func_682(int iParam0)//Position - 0x1AE5B
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5);
	iVar1 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("MP_M_Freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 5));
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("MP_F_Freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 5));
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_683(int iParam0, bool bParam1, int iParam2)//Position - 0x1AF2B
{
	if (iParam2 == -1)
	{
		iParam2 = func_30();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

void func_684()//Position - 0x1AF49
{
	Global_2683883.f_844 = 0;
}

bool func_685()//Position - 0x1AF59
{
	return Global_2683883.f_844;
}

void func_686(bool bParam0, int iParam1)//Position - 0x1AF68
{
	int iVar0;
	
	if (!func_688(&iVar0, 0, iParam1))
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
		func_687(&(Global_23390.f_6103[iVar0 /*10*/]));
		Global_23390.f_6164[iVar0] = 0;
	}
	else
	{
		Global_23390.f_6164[iVar0] = 0;
	}
}

void func_687(int* iParam0)//Position - 0x1B026
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

int func_688(var uParam0, bool bParam1, int iParam2)//Position - 0x1B052
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

void func_689()//Position - 0x1B0EF
{
}

void func_690(int iParam0)//Position - 0x1B0F7
{
	struct<42> Var0;
	int iVar42;
	var uVar43;
	
	Var0 = -1;
	Var0.f_22 = -1082130432;
	Var0.f_23 = 3;
	Var0.f_39 = -1;
	Var0.f_41 = -1;
	if (Global_2683883.f_669.f_9 == 0)
	{
		Global_1927434.f_1345 = 0;
	}
	iVar42 = 0;
	while (iVar42 <= 31)
	{
		uVar43 = Global_1927434[iVar42 /*42*/].f_3;
		Global_1927434[iVar42 /*42*/] = { Var0 };
		if (func_745())
		{
			Global_1927434[iVar42 /*42*/].f_3 = uVar43;
		}
		Global_1927434[iVar42 /*42*/].f_1 = func_143();
		Global_1927434[iVar42 /*42*/] = -1;
		Global_1927434[iVar42 /*42*/].f_2 = -1;
		iVar42++;
	}
	if ((!func_745() && !func_705()) && iParam0)
	{
		Global_1927434.f_1347 = 0;
		Global_1927434.f_1348 = 0;
	}
}

int func_691()//Position - 0x1B1C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1927434[iVar0 /*42*/].f_1 != func_143())
		{
			if (Global_1927434[iVar0 /*42*/].f_10 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_692()//Position - 0x1B203
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_623();
	}
	return func_693(Global_4718592.f_117591);
}

int func_693(int iParam0)//Position - 0x1B227
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

void func_694(bool bParam0)//Position - 0x1B261
{
	struct<25> Var0;
	
	if (!bParam0)
	{
	}
	Global_1949382 = { Var0 };
}

void func_695(bool bParam0)//Position - 0x1B27B
{
	struct<37> Var0;
	
	if (!bParam0)
	{
		Var0.f_18 = Global_1949301.f_18;
		Var0.f_29 = Global_1949301.f_29;
		Var0.f_30 = Global_1949301.f_30;
		Var0.f_35 = Global_1949301.f_35;
		Var0.f_27 = Global_1949301.f_27;
		Var0.f_0 = Global_1949301;
		Var0.f_1 = Global_1949301.f_1;
		Var0.f_2 = Global_1949301.f_2;
		Var0.f_3 = Global_1949301.f_3;
		Var0.f_4 = Global_1949301.f_4;
		Var0.f_5 = Global_1949301.f_5;
		Var0.f_6 = Global_1949301.f_6;
		Var0.f_32 = Global_1949301.f_32;
	}
	Global_1949301 = { Var0 };
}

void func_696(bool bParam0)//Position - 0x1B313
{
	struct<78> Var0;
	
	if (!bParam0)
	{
		Var0.f_37 = Global_1949100.f_37;
		Var0.f_33 = Global_1949100.f_33;
		Var0.f_30 = Global_1949100.f_30;
		Var0.f_39 = Global_1949100.f_39;
		Var0.f_20 = Global_1949100.f_20;
		Var0.f_15 = Global_1949100.f_15;
		Var0.f_35 = Global_1949100.f_35;
		Var0.f_36 = Global_1949100.f_36;
		Var0.f_31 = Global_1949100.f_31;
		Var0.f_34 = Global_1949100.f_34;
		Var0.f_27 = Global_1949100.f_27;
		Var0.f_28 = Global_1949100.f_28;
		Var0.f_32 = Global_1949100.f_32;
		Var0.f_29 = Global_1949100.f_29;
		Var0.f_77 = Global_1949100.f_77;
	}
	Global_1949100 = { Var0 };
}

void func_697(bool bParam0)//Position - 0x1B3C3
{
	struct<52> Var0;
	
	if (!bParam0)
	{
		Var0.f_2 = { Global_1949013.f_2 };
		Var0.f_14 = Global_1949013.f_14;
		Var0.f_19 = Global_1949013.f_19;
		Var0.f_23 = Global_1949013.f_23;
		Var0.f_25 = Global_1949013.f_25;
		Var0.f_30 = Global_1949013.f_30;
		Var0.f_26 = Global_1949013.f_26;
		Var0.f_27 = Global_1949013.f_27;
		Var0.f_28 = Global_1949013.f_28;
		Var0.f_29 = Global_1949013.f_29;
		Var0.f_31 = Global_1949013.f_31;
		Var0.f_32 = Global_1949013.f_32;
		Var0.f_33 = Global_1949013.f_33;
		Var0.f_40 = Global_1949013.f_40;
		Var0.f_42 = Global_1949013.f_42;
		Var0.f_50 = Global_1949013.f_50;
		Var0.f_46 = Global_1949013.f_46;
		Var0.f_51 = Global_1949013.f_51;
	}
	Global_1949013 = { Var0 };
}

void func_698(bool bParam0)//Position - 0x1B497
{
	Global_786481.f_3 = 0;
	Global_786481.f_4 = 0;
	Global_786481.f_6 = 0;
	Global_786481.f_7 = 0;
	Global_786481.f_8 = 0;
	Global_786481.f_9 = 0;
	Global_786481.f_10 = 0;
	Global_786481.f_11 = 0;
	Global_786481.f_12 = 0;
	Global_786481.f_13 = 0;
	Global_786481.f_14 = 0;
	Global_786481.f_15 = 0;
	Global_786481.f_16 = 0;
	Global_786481.f_17 = 0;
	Global_786481.f_18 = 0;
	Global_786481.f_20 = 0;
	if (((!func_701() && !func_628()) && Global_1927408.f_9 != 4) && !func_705())
	{
		Global_786481.f_43 = 0;
		Global_786481.f_44 = 0;
	}
	Global_786481.f_22 = 0;
	Global_786481.f_24 = 0;
	Global_786481.f_25 = 0;
	Global_786481.f_28 = 0;
	Global_786481.f_29 = 0;
	Global_786481.f_30 = 0;
	Global_786481.f_31 = 0;
	Global_786481.f_32 = 0;
	Global_786481.f_33 = 0;
	Global_786481.f_36 = 0;
	Global_786481.f_37 = 0;
	Global_786481.f_38 = 0;
	Global_786481.f_39 = 0;
	Global_786481.f_40 = 0;
	Global_786481.f_41 = 0;
	Global_786481.f_42 = 0;
	Global_786481.f_35 = 0;
	Global_786481.f_63 = 0;
	if (bParam0)
	{
		Global_786481 = 0;
		Global_786481.f_1 = 0;
		if ((!func_701() && !func_628()) && Global_1927408.f_9 != 4)
		{
			Global_786481.f_2 = 0;
			Global_786481.f_21 = 0;
		}
		Global_786481.f_5 = 0;
		Global_786481.f_19 = 0;
		Global_786481.f_23 = 0;
		Global_786481.f_26 = 0;
		Global_786481.f_46 = 0;
		Global_786481.f_47 = 0;
		Global_786481.f_48 = 0;
		Global_786481.f_50 = 0;
		Global_786481.f_51 = 0;
		Global_786481.f_52 = 0;
		Global_786481.f_53 = 0;
		Global_786481.f_54 = 0;
		Global_786481.f_55 = 0;
	}
}

void func_699(bool bParam0)//Position - 0x1B65D
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_700(int iParam0, int iParam1)//Position - 0x1B787
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::CLEAR_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

bool func_701()//Position - 0x1B7CC
{
	return Global_1927408.f_3;
}

bool func_702()//Position - 0x1B7DA
{
	return Global_2692776.f_7;
}

bool func_703()//Position - 0x1B7E8
{
	return BitTest(Global_2683883.f_43.f_4, 8);
}

void func_704()//Position - 0x1B7FB
{
	Global_2683883.f_43.f_57 = 0;
}

bool func_705()//Position - 0x1B80C
{
	return BitTest(Global_2683883.f_43.f_4, 0);
}

void func_706()//Position - 0x1B81E
{
	MISC::CLEAR_BIT(&(Global_1048576.f_10), 8);
}

void func_707(bool bParam0)//Position - 0x1B832
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_11.f_1), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_11.f_1), 0);
	}
}

void func_708(int iParam0)//Position - 0x1B86A
{
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !Global_1575038) && !Global_1575039)
	{
		if (((Global_2684820.f_3478 != 0 && Global_2684820.f_3478.f_1 != 0) && Global_2684820.f_3478.f_2 != 0) && Global_2684820.f_3478.f_3 != 0)
		{
			STATS::PLAYSTATS_LEAVE_JOB_CHAIN(Global_2684820.f_3478, Global_2684820.f_3478.f_1, Global_2684820.f_3478.f_2, Global_2684820.f_3478.f_3, iParam0);
		}
	}
	func_709();
}

void func_709()//Position - 0x1B8F5
{
	Global_2684820.f_3478 = 0;
	Global_2684820.f_3478.f_1 = 0;
	Global_2684820.f_3478.f_2 = 0;
	Global_2684820.f_3478.f_3 = 0;
}

void func_710()//Position - 0x1B923
{
	Global_2684820.f_1.f_2801 = 1;
}

bool func_711()//Position - 0x1B935
{
	return BitTest(Global_2684820.f_1.f_2809, 12);
}

void func_712(int iParam0)//Position - 0x1B949
{
	if (!func_705() || iParam0)
	{
		Global_1837311 = 0;
		Global_1837310 = 0;
	}
}

void func_713(bool bParam0, bool bParam1)//Position - 0x1B96B
{
	struct<6> Var0;
	int iVar6;
	
	Global_2683883.f_43 = -1;
	Global_2683883.f_43.f_139 = -1;
	Global_2683883.f_43.f_2 = -1;
	Global_2683883.f_43.f_5 = 0;
	Global_2683883.f_43.f_40 = 0;
	Global_2683883.f_43.f_3 = 0;
	Global_2683883.f_43.f_4 = 0;
	Global_2683883.f_43.f_42 = -1;
	Global_2683883.f_43.f_6 = { Var0 };
	Global_2683883.f_43.f_62 = 0;
	Global_2683883.f_43.f_137 = 0;
	Global_2683883.f_43.f_213 = 0;
	Global_2683883.f_43.f_428 = 0;
	Global_2683883.f_43.f_63 = 0;
	Global_2683883.f_43.f_138 = 0;
	Global_2683883.f_43.f_214 = 0;
	Global_2683883.f_43.f_429 = 0;
	Global_2683883.f_43.f_617 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2683883.f_43.f_560[iVar6] = 0;
		iVar6++;
	}
	Global_2683883.f_43.f_136 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2683883.f_43.f_140[iVar6] = 0;
		iVar6++;
	}
	Global_2683883.f_43.f_212 = 0;
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_2683883.f_43.f_215[iVar6] = 0;
		iVar6++;
	}
	Global_2683883.f_43.f_61 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		Global_2683883.f_43.f_64[iVar6] = 0;
		iVar6++;
	}
	Global_2683883.f_43.f_427 = 0;
	iVar6 = 0;
	while (iVar6 <= 13)
	{
		Global_2683883.f_43.f_430[iVar6] = 0;
		Global_2683883.f_43.f_445[iVar6] = 0;
		Global_2683883.f_43.f_475[iVar6 /*6*/] = { Var0 };
		Global_2683883.f_43.f_460[iVar6] = 0;
		iVar6++;
	}
	if (bParam0)
	{
		iVar6 = 0;
		while (iVar6 < 4)
		{
			Global_2683883.f_43.f_44[iVar6] = 0;
			iVar6++;
		}
		if (bParam1)
		{
			Global_2683883.f_43.f_581 = 0;
			Global_2683883.f_43.f_582 = 0;
			iVar6 = 0;
			while (iVar6 < 5)
			{
				Global_2683883.f_43.f_589[iVar6] = -1;
				Global_2683883.f_43.f_595[iVar6] = -1;
				iVar6++;
			}
			Global_2683883.f_43.f_55 = 0;
			Global_2683883.f_43.f_12 = { Var0 };
			Global_2683883.f_43.f_59 = 0;
			Global_2683883.f_43.f_575 = { 0f, 0f, 0f };
			Global_2683883.f_43.f_578 = { 0f, 0f, 0f };
			Global_2683883.f_43.f_58 = 0;
			Global_2683883.f_43.f_57 = 0;
			Global_2683883.f_43.f_1 = -1;
			Global_2683883.f_43.f_601 = -1;
		}
	}
}

void func_714()//Position - 0x1BBDD
{
	Global_2692776.f_8 = 0;
	Global_2692776.f_7 = 0;
}

void func_715()//Position - 0x1BBF3
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_NUM_CONNECTED_PLAYERS();
	iVar1 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_1057161, NETWORK::GET_NETWORK_TIME()));
	STATS::PLAYSTATS_QUIT_MODE(Global_4718592, &(Global_4718592.f_117878), iVar0, iVar1, Global_1057161.f_1);
	func_716();
}

void func_716()//Position - 0x1BC3D
{
	Global_1057161 = 0;
	Global_1057161.f_1 = 0;
}

bool func_717()//Position - 0x1BC51
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 148;
}

bool func_718()//Position - 0x1BC67
{
	return Global_1853988[PLAYER::PLAYER_ID() /*867*/] == 5;
}

int func_719()//Position - 0x1BC7C
{
	if (func_351() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

void func_720()//Position - 0x1BC99
{
	Global_1936432.f_1774 = 0;
}

void func_721()//Position - 0x1BCA9
{
	Global_2683883.f_837 = 0;
}

bool func_722()//Position - 0x1BCB9
{
	return Global_2683883.f_837;
}

void func_723()//Position - 0x1BCC8
{
	Global_20711 = 0;
	func_724();
}

void func_724()//Position - 0x1BCD8
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}
}

bool func_725(int iParam0)//Position - 0x1BCF9
{
	return Global_2657704[iParam0 /*463*/].f_121 == 7;
}

bool func_726(int iParam0)//Position - 0x1BD0E
{
	return Global_2657704[iParam0 /*463*/].f_121 == 2;
}

int func_727(int iParam0)//Position - 0x1BD23
{
	if (iParam0 == Global_262145.f_5043[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_5043[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_5043[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_5043[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_5043[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_5043[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_5043[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_5043[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_5043[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_5043[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_5043[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_5043[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_5043[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_5043[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_5043[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_5043[15])
	{
		return 15;
	}
	return -1;
}

void func_728()//Position - 0x1BE99
{
	Global_2683883.f_700 = 0;
}

void func_729()//Position - 0x1BEA9
{
	struct<14> Var0;
	int iVar14;
	
	Var0.f_4 = -1;
	iVar14 = PLAYER::PLAYER_ID();
	if (iVar14 != -1)
	{
		Global_1890739[iVar14 /*138*/] = { Var0 };
	}
}

void func_730()//Position - 0x1BED6
{
	Global_1927408.f_7 = 0;
}

void func_731(bool bParam0, bool bParam1, int iParam2)//Position - 0x1BEE5
{
	struct<6> Var0;
	
	Global_2683883.f_669.f_3 = { Var0 };
	Global_2683883.f_669 = 0;
	Global_2683883.f_669.f_1 = 0;
	Global_2683883.f_669.f_12 = 0;
	if (bParam0)
	{
		Global_2683883.f_669.f_2 = 0;
		Global_2683883.f_669.f_13 = 0;
		Global_2683883.f_669.f_14 = 0;
		Global_2625314 = 0;
		if (bParam1)
		{
			Global_2683883.f_669.f_9 = 0;
			Global_2683883.f_669.f_10 = 0;
			Global_2683883.f_669.f_11 = 0;
			Global_2683883.f_669.f_16 = -1;
		}
		if (iParam2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			Global_1927434.f_1347 = 0;
			Global_1927434.f_1348 = 0;
		}
		if (PLAYER::PLAYER_ID() != -1)
		{
			Global_1890739[PLAYER::PLAYER_ID() /*138*/].f_2 = 0;
			Global_1890739[PLAYER::PLAYER_ID() /*138*/] = 0;
		}
	}
}

void func_732()//Position - 0x1BFAC
{
	Global_2683883.f_669.f_12 = 0;
}

bool func_733()//Position - 0x1BFBE
{
	return Global_2683883.f_669.f_9 > 0;
}

var func_734()//Position - 0x1BFD1
{
	return Global_2683883.f_669.f_12;
}

void func_735()//Position - 0x1BFE2
{
	MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_96.f_32), 11);
}

void func_736()//Position - 0x1BFFF
{
	MISC::CLEAR_BIT(&(Global_1890739[PLAYER::PLAYER_ID() /*138*/].f_29), 3);
}

void func_737()//Position - 0x1C019
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1837325[iVar0] = 0;
		iVar0++;
	}
}

void func_738()//Position - 0x1C03D
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1890739[iVar0 /*138*/].f_5 = 0;
	}
}

void func_739()//Position - 0x1C05C
{
	Global_2695047 = 0;
	Global_2695048 = 0;
	Global_2695049 = 0;
	Global_2695050 = 0;
}

void func_740()//Position - 0x1C078
{
	Global_2683883.f_43.f_56 = 0;
}

void func_741()//Position - 0x1C089
{
	Global_2683883.f_43.f_58 = 0;
}

void func_742()//Position - 0x1C09A
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != Global_1665570)
	{
		if (CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() == 0 && Global_1665570 == 3)
		{
			Global_1665570 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
		}
		CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT(), Global_1665570);
	}
}

int func_743()//Position - 0x1C0DA
{
	if (func_744() != 2)
	{
		return 0;
	}
	if (!func_705() && !((Global_1944301 || Global_1574964) && func_587()))
	{
		return 0;
	}
	return 1;
}

int func_744()//Position - 0x1C118
{
	return Global_2683883.f_43.f_40;
}

bool func_745()//Position - 0x1C128
{
	return BitTest(Global_2683883.f_669.f_1, 0);
}

void func_746(int iParam0)//Position - 0x1C13B
{
	if (MISC::IS_PC_VERSION())
	{
		HUD::MP_TEXT_CHAT_IS_TEAM_JOB(iParam0);
	}
}

void func_747(bool bParam0)//Position - 0x1C150
{
	int iVar0;
	
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!BitTest(Global_1853988[iVar0 /*867*/].f_199, 0))
			{
				MISC::SET_BIT(&(Global_1853988[iVar0 /*867*/].f_199), 0);
			}
		}
		else if (BitTest(Global_1853988[iVar0 /*867*/].f_199, 0))
		{
			MISC::CLEAR_BIT(&(Global_1853988[iVar0 /*867*/].f_199), 0);
		}
	}
}

void func_748()//Position - 0x1C1AD
{
	MISC::CLEAR_BIT(&(Global_2683883.f_2), 31);
}

void func_749()//Position - 0x1C1C1
{
	Global_2672524.f_1685.f_816 = func_143();
}

void func_750()//Position - 0x1C1D7
{
	Global_2683883.f_885 = 0;
}

void func_751()//Position - 0x1C1E7
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_754(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_1944768.f_271[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	func_753();
	func_752();
	Global_1944768 = 0;
}

void func_752()//Position - 0x1C239
{
	Global_1944768.f_4 = 0;
}

void func_753()//Position - 0x1C248
{
	Global_1944768.f_3 = 0;
}

void func_754(int iParam0)//Position - 0x1C257
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1944768.f_5[iParam0 /*53*/] = { Var0 };
}

void func_755()//Position - 0x1C28A
{
	MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18), 20);
}

void func_756(int iParam0, bool bParam1)//Position - 0x1C2A7
{
	if (bParam1)
	{
		if (!func_26(iParam0, 18, 1))
		{
			func_67(iParam0, 18, 1);
		}
	}
	else if (func_26(iParam0, 18, 1))
	{
		func_65(iParam0, 18, 1);
	}
}

void func_757()//Position - 0x1C2E2
{
	MISC::CLEAR_BIT(&(Global_2794162.f_853), 3);
}

void func_758(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1C2F6
{
	func_229();
	if (bParam0)
	{
		func_319(1);
		HUD::CLEAR_HELP(true);
	}
	HUD::CLEAR_PRINTS();
	func_222();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	func_258(0, 1, 1, 0, 0, bParam2, 0);
	func_764();
	func_210(12, 0, -1);
	func_211(1);
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_763();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam3)
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
		}
	}
	func_265(0);
	if (((((func_127() == 0 && func_762() == 0) && iParam1) && !func_262(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && func_341())
	{
		func_373(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2672524.f_3542 = 0;
	func_759();
}

void func_759()//Position - 0x1C3C8
{
	bool bVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_202(&Global_2803710))
	{
		if (!func_201(&Global_2803710, 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID()))
		{
			if (!func_761())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_354(&Global_2803710, 1, 0);
				}
				else if (!func_260(PLAYER::PLAYER_ID(), 0))
				{
					if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PARACHUTE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PARACHUTE")) != 0) && (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1 || Global_2803780))
					{
						NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(true);
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), true);
					}
					ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
				}
			}
			else
			{
				func_354(&Global_2803710, 1, 0);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
			}
			func_200(&Global_2803710);
		}
	}
	if (Global_2803714 > 0)
	{
		bVar0 = false;
		while (bVar0 < 32)
		{
			if (BitTest(Global_2803714, bVar0))
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
				if (func_14(iVar1, 1, 1))
				{
					func_760(iVar1);
				}
			}
			bVar0++;
		}
	}
}

void func_760(int iParam0)//Position - 0x1C4EB
{
	if (BitTest(Global_2803714, iParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_201(&(Global_2803715[iParam0 /*2*/]), 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(iParam0))
		{
			if (!func_761())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_354(&(Global_2803715[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_260(iParam0, 0))
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(iParam0, true);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
					{
						ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0), 255, false);
					}
				}
			}
			else
			{
				func_354(&(Global_2803715[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0));
			}
			func_200(&(Global_2803715[iParam0 /*2*/]));
			MISC::CLEAR_BIT(&Global_2803714, iParam0);
		}
	}
}

int func_761()//Position - 0x1C5BA
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	return 0;
}

int func_762()//Position - 0x1C5D8
{
	return BitTest(Global_2683883, 7);
}

void func_763()//Position - 0x1C5E6
{
	Global_23251.f_5 = 0;
}

void func_764()//Position - 0x1C5F4
{
	func_211(1);
	func_210(4, 0, -1);
	func_210(6, 0, -1);
	func_210(7, 0, -1);
	func_210(3, 0, -1);
	func_210(1, 0, -1);
	func_210(2, 0, -1);
	func_210(11, 0, -1);
	func_210(13, 0, -1);
	func_210(14, 0, -1);
	func_210(16, 0, -1);
}

void func_765(bool bParam0)//Position - 0x1C64B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1574612)
	{
		if (!func_804())
		{
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				Global_1836851[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_802(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_799(iVar1, bParam0);
	if (!func_798(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 10)
		{
			Global_1836851[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		Global_1836851[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 321)
	{
		iVar3 = func_797(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_795(iVar4))
			{
				func_785(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!func_784(1))
	{
		func_777(func_778(59, 0, 0), 0);
		func_775(func_778(135, 0, 0), 1);
		func_774(func_778(22, 0, 0), func_778(73, 0, 0));
	}
	else
	{
		func_774(0, 0);
	}
	if (func_773())
	{
		if (func_517(77, -1))
		{
			func_772(1);
			func_771(1);
		}
	}
	if (func_770() || func_769())
	{
		func_33(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_766(28, 1, 0);
			func_766(29, 1, 0);
			func_766(30, 1, 0);
			func_766(31, 1, 0);
			func_766(32, 1, 0);
			func_766(33, 1, 0);
			func_766(34, 1, 0);
			func_766(35, 1, 0);
			func_766(36, 1, 0);
			func_766(37, 1, 0);
			func_766(38, 1, 0);
			func_766(58, 1, 0);
		}
	}
	if (func_778(21, 0, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_1057411 = 0;
}

void func_766(int iParam0, bool bParam1, int iParam2)//Position - 0x1C80C
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0, 0))
		{
			if (iParam2 && Global_100885.f_18[iParam0])
			{
				if (func_768(iParam0) == 3 && !func_25(iParam0))
				{
					func_767(iParam0);
					func_67(iParam0, 0, 0);
					func_65(iParam0, 1, 0);
					func_415(iParam0);
				}
				else
				{
					func_67(iParam0, 1, 0);
					func_415(iParam0);
				}
			}
			else
			{
				func_67(iParam0, 0, 0);
				func_65(iParam0, 1, 0);
				func_415(iParam0);
			}
		}
		else
		{
			func_65(iParam0, 1, 0);
			func_415(iParam0);
		}
	}
	else if (func_26(iParam0, 0, 0))
	{
		func_65(iParam0, 0, 0);
		func_65(iParam0, 1, 0);
		func_415(iParam0);
	}
}

void func_767(int iParam0)//Position - 0x1C8CB
{
	if (Global_100885.f_18[iParam0])
	{
		func_67(iParam0, 10, 1);
		func_67(iParam0, 19, 1);
	}
}

int func_768(int iParam0)//Position - 0x1C8F2
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

bool func_769()//Position - 0x1CC28
{
	return Global_1575051;
}

bool func_770()//Position - 0x1CC34
{
	return Global_1575053;
}

void func_771(bool bParam0)//Position - 0x1CC40
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_766(28, bParam0, 0);
	func_766(30, bParam0, 0);
	func_766(31, bParam0, 0);
	func_766(33, bParam0, 0);
	func_766(34, bParam0, 0);
	func_766(38, bParam0, 0);
	func_766(58, bParam0, 0);
}

void func_772(bool bParam0)//Position - 0x1CC92
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_766(29, bParam0, 0);
	func_766(32, bParam0, 0);
	func_766(36, bParam0, 0);
	func_766(35, bParam0, 0);
	func_766(37, bParam0, 0);
}

int func_773()//Position - 0x1CCD2
{
	if (!func_804())
	{
		return 0;
	}
	return 1;
}

void func_774(bool bParam0, bool bParam1)//Position - 0x1CCE7
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_766(0, bParam0, 1);
	func_766(1, bParam0, 1);
	func_766(2, bParam0, 1);
	func_766(3, bParam0, 1);
	func_766(4, bParam0, 1);
	func_766(5, bParam0, 1);
	func_766(6, bParam0, 1);
	func_766(7, bParam0, bVar0);
	func_766(8, bParam0, 1);
	func_766(9, bParam0, 1);
	func_766(10, bParam0, 1);
	func_766(11, bParam0, 1);
	func_766(12, bParam0, bVar0);
	func_766(13, bParam0, 1);
	func_766(21, bParam0, 1);
	func_766(14, bParam0, 1);
	func_766(15, bParam0, 1);
	func_766(16, bParam0, 1);
	func_766(17, bParam0, 1);
	func_766(18, bParam0, 1);
	func_766(19, bParam0, 1);
	func_766(20, bParam0, 1);
	func_766(22, bParam0, 1);
	func_766(23, bParam0, 1);
	func_766(24, bParam0, 1);
	func_766(25, bParam0, 1);
	func_766(26, bParam0, 1);
	func_766(27, bParam0, 1);
	func_416(1, !bParam1);
	if (!bVar0)
	{
		func_767(12);
	}
}

void func_775(bool bParam0, bool bParam1)//Position - 0x1CE0F
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_776(0);
	if (Global_262145.f_63 /* Tunable: DISABLE_SUPER_MOD_RANK_CHECK */ == 1 && func_778(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_766(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(44))
		{
			func_767(44);
		}
	}
	if (bParam0)
	{
		if (func_651(0) > 1)
		{
			MISC::SET_BIT(&(Global_2794162.f_1835), 10);
		}
	}
}

int func_776(bool bParam0)//Position - 0x1CE95
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (func_770())
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2794162.f_1826, 26))
		{
			uVar0 = func_27(1192, -1);
			if (!BitTest(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_517(122, -1);
}

void func_777(bool bParam0, bool bParam1)//Position - 0x1CEEF
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_776(0);
	func_766(39, bParam0, 0);
	func_766(40, bParam0, 0);
	func_766(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_766(43, bParam0, 0);
		func_766(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(39))
		{
			func_767(39);
		}
		if (!func_25(40))
		{
			func_767(40);
		}
		if (!func_25(41))
		{
			func_767(41);
		}
		if (!func_25(42))
		{
			func_767(42);
		}
		if (!func_25(43))
		{
			func_767(43);
		}
	}
}

int func_778(int iParam0, bool bParam1, bool bParam2)//Position - 0x1CFA0
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_8317 /* Tunable: SET_ALL_PHONE_SERVICES_AVAILABLE */ == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_780(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4747 /* Tunable: RANK_RESTRICTION_CRATE_DROP */ == 1)
		{
			return 1;
		}
	}
	if (func_770() || func_769())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_779())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836851[iVar1], iVar0);
}

int func_779()//Position - 0x1D10B
{
	var uVar0;
	
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2794162.f_1831, 23))
	{
		return 1;
	}
	if (func_770())
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	uVar0 = func_27(1304, -1);
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2794162.f_1831), 23);
		return 1;
	}
	return 0;
}

int func_780(int iParam0, int iParam1)//Position - 0x1D168
{
	if (!func_773())
	{
		return 0;
	}
	if (func_783())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_781(&(Global_1853988[iParam0 /*867*/].f_794), func_782(iParam1));
}

var func_781(var uParam0, var uParam1)//Position - 0x1D1A8
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_782(int iParam0)//Position - 0x1D1CB
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		case 177:
			return 39;
		
		case 182:
			return 40;
		
		case 188:
			return 41;
		
		case 190:
			return 42;
		
		default:
	}
	return 1;
}

bool func_783()//Position - 0x1D3A1
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 3);
}

int func_784(int iParam0)//Position - 0x1D3B8
{
	return 0;
}

void func_785(int iParam0, bool bParam1)//Position - 0x1D3C1
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_794(-1))
			{
				if (!func_804())
				{
					return;
				}
			}
			if (!func_794(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_793() && !func_792())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_791())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_794(-1))
				{
					if (!func_786())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		MISC::SET_BIT(&(Global_1836851[iVar1]), iVar0);
	}
}

int func_786()//Position - 0x1D45A
{
	var uVar0;
	
	if (func_790(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	uVar0 = func_27(1304, -1);
	if (BitTest(uVar0, 2))
	{
		func_787(1);
		return 1;
	}
	return 0;
}

void func_787(bool bParam0)//Position - 0x1D48C
{
	if (bParam0)
	{
		if (!BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 25))
		{
			func_788(PLAYER::PLAYER_ID(), 12);
			MISC::SET_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 25);
		}
	}
	else if (BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139, 25))
	{
		MISC::CLEAR_BIT(&(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_139), 25);
	}
}

void func_788(int iParam0, int iParam1)//Position - 0x1D4F3
{
	func_789(&(Global_1853988[iParam0 /*867*/].f_794), func_782(iParam1));
}

int func_789(var uParam0, var uParam1)//Position - 0x1D512
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_790(int iParam0)//Position - 0x1D54A
{
	if (func_770())
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	return BitTest(Global_1853988[iParam0 /*867*/].f_139, 25);
}

int func_791()//Position - 0x1D576
{
	var uVar0;
	
	if (BitTest(Global_2794162.f_1831, 6))
	{
		return 1;
	}
	uVar0 = func_27(1304, -1);
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2794162.f_1831, 6))
		{
			MISC::SET_BIT(&(Global_2794162.f_1831), 6);
		}
		return 1;
	}
	if (func_770())
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	return 0;
}

bool func_792()//Position - 0x1D5D3
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_143, 7);
}

int func_793()//Position - 0x1D5EA
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_770())
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	return func_517(121, -1);
}

bool func_794(int iParam0)//Position - 0x1D61A
{
	return func_517(123, iParam0);
}

int func_795(int iParam0)//Position - 0x1D62A
{
	var uVar0;
	bool bVar1;
	
	if (func_770())
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			uVar0 = func_27(func_796(iParam0), -1);
			if (BitTest(uVar0, bVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_796(int iParam0)//Position - 0x1D858
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		
		case 1:
			return 1202;
			break;
		
		case 2:
			return 1203;
			break;
		
		case 3:
			return 1204;
			break;
		
		case 4:
			return 1205;
			break;
		
		case 5:
			return 1207;
			break;
		
		case 6:
			return 3818;
			break;
		
		case 7:
			return 4021;
			break;
		
		case 8:
			return 5475;
			break;
		
		case 9:
			return 10353;
			break;
	}
	return 1201;
}

int func_797(int iParam0)//Position - 0x1D907
{
	if (func_770())
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
		case 78:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_794(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_798(int iParam0)//Position - 0x1DBCF
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_770())
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	return func_517(119, iParam0);
}

int func_799(int iParam0, bool bParam1)//Position - 0x1DC00
{
	if (bParam1)
	{
	}
	return func_800(iParam0, 0);
}

int func_800(int iParam0, int iParam1)//Position - 0x1DC14
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
		if (func_801(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_801(iVar3) < iParam0)
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

int func_801(int iParam0)//Position - 0x1DCCF
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

int func_802(int iParam0, bool bParam1)//Position - 0x1E20A
{
	if (bParam1)
	{
	}
	return func_803(iParam0);
}

int func_803(int iParam0)//Position - 0x1E21D
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_27(640, -1);
			}
			else if (func_62(iParam0))
			{
				return Global_1853988[iParam0 /*867*/].f_205.f_1;
			}
		}
	}
	else
	{
		return func_27(640, -1);
	}
	return 0;
}

int func_804()//Position - 0x1E274
{
	if (Global_1574612)
	{
		return 1;
	}
	if (func_770())
	{
		return 1;
	}
	if (func_769())
	{
		return 1;
	}
	return func_517(120, -1);
}

int func_805()//Position - 0x1E2A4
{
	if (Global_1575038 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_500())
	{
		return 1;
	}
	if (Global_2696994)
	{
		return 1;
	}
	if (func_809())
	{
		return 1;
	}
	if (func_808(159))
	{
		if (!func_807())
		{
			return 1;
		}
	}
	if (func_808(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_806() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_806()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_806()//Position - 0x1E328
{
	switch (func_19())
	{
		case 0:
			return func_383();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_807()//Position - 0x1E35B
{
	return Global_2683883.f_698;
}

int func_808(int iParam0)//Position - 0x1E36A
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_809()//Position - 0x1E381
{
	return Global_2694576;
}

void func_810()//Position - 0x1E38D
{
	SYSTEM::WAIT(0);
}

void func_811(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20)//Position - 0x1E39A
{
	int iVar0;
	
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, false, Param0.f_16);
	func_816(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_535, 7, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_707, 11, 0);
	Global_1853988[PLAYER::PLAYER_ID() /*867*/] = 16;
	if (bLocal_726)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				iVar0 = PLAYER::PLAYER_ID() + 32;
				NETWORK::NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(1, iVar0);
				func_214(1);
			}
		}
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	if (!func_815())
	{
		func_426(0);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_756(iLocal_60, 1);
	func_428(1);
	if (!bLocal_726)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_373(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	Global_2794162.f_1826 = 0;
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1005.74243f, -2734.2646f, 14.919123f, -1082.9584f, -2675.189f, 26.016474f, 39.375f, false, false, false);
	func_814();
	func_812();
	Local_707[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_812()//Position - 0x1E4A1
{
	NETWORK::NETWORK_BLOCK_INVITES(true);
	func_813(1, -1);
	NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(true);
	if (func_517(133, -1))
	{
		func_33(133, 0, -1, 1);
	}
	Global_2683883.f_743 = 1;
}

void func_813(bool bParam0, int iParam1)//Position - 0x1E4D4
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_30();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			break;
		
		default:
			iVar1 = func_442(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			func_33(120, 0, iParam1, 1);
			func_33(124, 0, iParam1, 1);
			func_33(115, 0, iParam1, 1);
			func_33(119, 0, iParam1, 1);
			break;
	}
}

void func_814()//Position - 0x1E565
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_720);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	TASK::TASK_TURN_PED_TO_FACE_COORD(0, 17.0693f, -1115.9354f, 28.7968f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_720);
}

int func_815()//Position - 0x1E597
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
		if (func_500())
		{
			return 0;
		}
		if (func_808(157))
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

int func_816(int iParam0, int iParam1, bool bParam2)//Position - 0x1E5F0
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_817();
			}
			else
			{
				return 0;
			}
		}
		if (!func_406(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_817();
					}
					else
					{
						return 0;
					}
				}
				if (func_500())
				{
					if (!bParam2)
					{
						func_817();
					}
					else
					{
						return 0;
					}
				}
				if (func_808(157))
				{
					if (!bParam2)
					{
						func_817();
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
					func_817();
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
				func_817();
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
			func_817();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_817()//Position - 0x1E706
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

