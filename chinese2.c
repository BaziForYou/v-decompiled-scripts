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
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	char* sLocal_49 = NULL;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
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
	var uLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_87 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_252[8] = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	bool bLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	float fLocal_270 = 0f;
	float fLocal_271 = 0f;
	struct<3> Local_272 = { 0, 0, 0 } ;
	struct<3> Local_275 = { 0, 0, 0 } ;
	int iLocal_278 = 0;
	struct<5> Local_279[31];
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	struct<5> Local_442[61];
	float fLocal_748 = 0f;
	int iLocal_749 = 0;
	struct<3> Local_750 = { 0, 0, 0 } ;
	struct<33> Local_753[26];
	int iLocal_1612 = 0;
	int iLocal_1613 = 0;
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	int iLocal_1616 = 0;
	struct<24> Local_1617[26];
	struct<3> Local_2242 = { 0, 0, 0 } ;
	struct<3> Local_2245 = { 0, 0, 0 } ;
	struct<3> Local_2248 = { 0, 0, 0 } ;
	struct<3> Local_2251 = { 0, 0, 0 } ;
	struct<3> Local_2254 = { 0, 0, 0 } ;
	struct<3> Local_2257 = { 0, 0, 0 } ;
	struct<3> Local_2260 = { 0, 0, 0 } ;
	struct<3> Local_2263 = { 0, 0, 0 } ;
	struct<3> Local_2266 = { 0, 0, 0 } ;
	struct<3> Local_2269 = { 0, 0, 0 } ;
	struct<3> Local_2272[21];
	char[] cLocal_2336[8] = 0;
	bool bLocal_2337 = 0;
	int iLocal_2338 = 0;
	bool bLocal_2339 = 0;
	int iLocal_2340 = 0;
	struct<6> Local_2341[6];
	struct<18> Local_2378[4];
	float fLocal_2451 = 0f;
	int iLocal_2452 = 0;
	int iLocal_2453[4] = { 0, 0, 0, 0 };
	int iLocal_2458[4] = { 0, 0, 0, 0 };
	struct<3> Local_2463[13];
	int iLocal_2503 = 0;
	int iLocal_2504 = 0;
	int iLocal_2505 = 0;
	int iLocal_2506 = 0;
	int iLocal_2507 = 0;
	int iLocal_2508 = 0;
	int iLocal_2509 = 0;
	int iLocal_2510 = 0;
	char* sLocal_2511 = NULL;
	bool bLocal_2512 = 0;
	struct<6> Local_2513[20];
	int iLocal_2634 = 0;
	int iLocal_2635 = 0;
	int iLocal_2636 = 0;
	float fLocal_2637 = 0f;
	int iLocal_2638 = 0;
	int iLocal_2639 = 0;
	int iLocal_2640 = 0;
	int iLocal_2641 = 0;
	int iLocal_2642 = 0;
	int iLocal_2643 = 0;
	int iLocal_2644 = 0;
	bool bLocal_2645 = 0;
	int iLocal_2646 = 0;
	int iLocal_2647 = 0;
	int iLocal_2648 = 0;
	int iLocal_2649[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2655[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2666 = 0;
	struct<3> Local_2667 = { 0, 0, 0 } ;
	int iLocal_2670 = 0;
	int iLocal_2671 = 0;
	float fLocal_2672 = 0f;
	int iLocal_2673 = 0;
	int iLocal_2674 = 0;
	int iLocal_2675 = 0;
	int iLocal_2676 = 0;
	int iLocal_2677 = 0;
	int iLocal_2678 = 0;
	int iLocal_2679 = 0;
	int iLocal_2680 = 0;
	struct<7> Local_2681 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_2688 = 1092616192;
	var uLocal_2689 = 1101004800;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 3;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 16;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	int iLocal_2871 = 0;
	int iLocal_2872 = 0;
	int iLocal_2873 = 0;
	int iLocal_2874 = 0;
	int iLocal_2875 = 0;
	int iLocal_2876 = 0;
	int iLocal_2877 = 0;
	int iLocal_2878 = 0;
	int iLocal_2879 = 0;
	int iLocal_2880 = 0;
	int iLocal_2881 = 0;
	int iLocal_2882 = 0;
	int iLocal_2883 = 0;
	int iLocal_2884 = 0;
	int iLocal_2885 = 0;
	int iLocal_2886 = 0;
	struct<3> Local_2887[9];
	struct<10> Local_2915[20];
	bool bLocal_3116 = 0;
	int iLocal_3117 = 0;
	struct<8> Local_3118[27];
	struct<4> Local_3335[5];
	struct<7> Local_3356[17];
	struct<3> Local_3476[4];
	int iLocal_3489 = 0;
	char cLocal_3490[24] = "";
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	struct<3> Local_3496 = { 0, 0, 0 } ;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	int iLocal_3502 = 0;
	int iLocal_3503 = 0;
	int iLocal_3504 = 0;
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	char* sLocal_3507 = NULL;
	char* sLocal_3508 = NULL;
	int iLocal_3509[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3520 = 16;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	int iLocal_3685 = 0;
	int iLocal_3686 = 0;
	int iLocal_3687 = 0;
	int iLocal_3688 = 0;
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
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_48 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_59 = -1;
	iLocal_60 = -1;
	bLocal_75 = true;
	iLocal_264 = -1;
	iLocal_267 = -1;
	fLocal_270 = 0.5f;
	fLocal_271 = 0f;
	iLocal_436 = 1;
	fLocal_748 = 160f;
	cLocal_2336 = "CHI2AUD";
	iLocal_2674 = -1;
	iLocal_2882 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_464();
		func_463(2);
	}
	fLocal_748 = 160f;
	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_135();
			func_133();
			if (iLocal_2509 >= 7)
			{
				func_125();
			}
			func_123();
			func_84();
			func_3();
			func_2();
			func_1();
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("m_Chinese2", 0);
		}
		iLocal_3685 = 0;
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x11D
{
	if (iLocal_3503)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_3502))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3502);
			iLocal_3503 = 0;
		}
	}
}

int func_2()//Position - 0x140
{
	if (iLocal_3504)
	{
		if (iLocal_3505)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_3507))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_3507))
				{
					iLocal_3504 = 0;
					iLocal_3505 = 0;
					return 1;
				}
			}
		}
		else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_3507))
		{
			iLocal_3504 = 0;
			return 1;
		}
	}
	else if (iLocal_3506)
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_3508))
		{
			iLocal_3506 = 0;
		}
	}
	return 0;
}

void func_3()//Position - 0x1A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_2513.f_0)
	{
		if (Local_2513[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_2513[iVar0 /*6*/])
			{
				case 0:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case 0:
							if (CUTSCENE::IS_CUTSCENE_PLAYING())
							{
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							func_75(1992.8041f, 3053.3103f, 45.777145f, 1989.6813f, 3055.2954f, 49.090008f, 3.25f, 1995.2018f, 3062.1565f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_75(1994.4274f, 3045.136f, 45.340134f, 1981.9028f, 3053.235f, 49.791527f, 9.5f, 1995.2018f, 3062.1565f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							func_75(1985.4037f, 3075.0571f, 44.84953f, 2017.1017f, 3057.4348f, 53.71896f, 33f, 1995.2018f, 3062.1565f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_2504 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (func_74(iLocal_2504) && func_73(iLocal_2504, 1995.2018f, 3062.1565f, 46.0491f, 1) < 5f)
							{
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(iLocal_2504), 3);
							}
							Local_2513[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 2:
					if (iLocal_2509 >= 3)
					{
						Local_2513[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case -1:
							func_72();
							func_70();
							break;
						
						case 0:
							if (func_73(PLAYER::PLAYER_PED_ID(), 2442.55f, 4967.51f, 54.35f, 1) < 1300f || func_69(39))
							{
								if (func_73(PLAYER::PLAYER_PED_ID(), 2442.55f, 4967.51f, 54.35f, 1) > 500f)
								{
									Local_2513[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 1:
							if (func_66("PHN2", 1, PLAYER::PLAYER_PED_ID(), "Trevor", 8, 0, "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0))
							{
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_65())
							{
								if (func_35("CHI2_ONEILPH", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_2513[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				
				case 3:
					if (iLocal_2509 >= 3)
					{
						Local_2513[iVar0 /*6*/].f_2 = -1;
						Local_2513[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_2513[iVar0 /*6*/].f_2++;
							}
							iLocal_2886 = 0;
							Local_2513[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 3000;
							break;
						
						case 1:
							if (!func_65())
							{
								if (!func_34())
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (MISC::GET_GAME_TIMER() > Local_2513[iVar0 /*6*/].f_5)
										{
											if (iLocal_2886 < 13)
											{
												if (func_35("DRI1", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_2886++;
													Local_2513[iVar0 /*6*/].f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 10000));
												}
											}
											else
											{
												Local_2513[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (!ENTITY::IS_ENTITY_IN_AIR(iVar1))
						{
							if (func_33(6f, 2))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								Local_2513[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_2513[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 5:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case -20:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2460.0728f, 4964.176f, 46.2405f, true) < 250f)
							{
								STREAMING::REQUEST_MODEL(joaat("A_M_M_Hillbilly_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_pallet_pile_01"));
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -19:
							if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Hillbilly_01")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pallet_pile_01")))
							{
								STREAMING::REQUEST_MODEL(joaat("A_M_M_Hillbilly_02"));
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -18:
							if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Hillbilly_02")))
							{
								STREAMING::REQUEST_MODEL(joaat("burrito"));
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -17:
							if (STREAMING::HAS_MODEL_LOADED(joaat("burrito")))
							{
								STREAMING::REQUEST_MODEL(joaat("A_M_Y_MethHead_01"));
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -16:
							if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_MethHead_01")))
							{
								STREAMING::REQUEST_MODEL(joaat("prop_ld_can_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_fertilizer"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
								STREAMING::REQUEST_MODEL(joaat("dubsta"));
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank5");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank1");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_barrelRoll");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_e");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_f");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@generic");
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case -15:
							if (STREAMING::HAS_MODEL_LOADED(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								PATHFIND::SET_ROADS_IN_AREA(Vector(44.8113f, 4961.045f, 2469.9854f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.9854f) + Vector(100f, 100f, 100f), false, true);
								Local_2513[iVar0 /*6*/].f_2 = 1;
							}
							break;
						
						case 0:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2460.0728f, 4964.176f, 46.2405f, true) < 250f)
							{
								STREAMING::REQUEST_MODEL(joaat("A_M_M_Hillbilly_01"));
								STREAMING::REQUEST_MODEL(joaat("A_M_M_Hillbilly_02"));
								STREAMING::REQUEST_MODEL(joaat("A_M_Y_MethHead_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_ld_can_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_fertilizer"));
								STREAMING::REQUEST_MODEL(joaat("burrito"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								if (iLocal_2509 <= 3)
								{
									STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
									STREAMING::REQUEST_MODEL(joaat("dubsta"));
								}
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank5");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank1");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_barrelRoll");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_e");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_f");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								PATHFIND::SET_ROADS_IN_AREA(Vector(44.8113f, 4961.045f, 2469.9854f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.9854f) + Vector(100f, 100f, 100f), false, true);
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Hillbilly_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Hillbilly_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_MethHead_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("burrito"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_fertilizer"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_can_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_bank5")) && STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_bank1")) && STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_barrelRoll")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@b")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@left")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@right")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@backward")) && ((iLocal_2509 <= 3 && STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing"))) || iLocal_2509 > 3)) && ((iLocal_2509 <= 3 && STREAMING::HAS_MODEL_LOADED(joaat("dubsta"))) || iLocal_2509 > 3))
							{
								Local_2513[iVar0 /*6*/].f_2 = 4;
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2460.0728f, 4964.176f, 46.2405f, true) > 300f)
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_02"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_MethHead_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_can_01"));
								STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
								STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
								STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
								STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
								STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
								STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dubsta"));
								PATHFIND::SET_ROADS_IN_AREA(Vector(44.8113f, 4961.045f, 2469.9854f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.9854f) + Vector(100f, 100f, 100f), true, true);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_2676 != 0)
								{
									INTERIOR::UNPIN_INTERIOR(iLocal_2676);
									iLocal_2676 = 0;
								}
								Local_2513[iVar0 /*6*/].f_2 = -20;
							}
							break;
						
						case 4:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2460.0728f, 4964.176f, 46.2405f, true) > 300f)
							{
								Local_2513[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_2509 >= 3 && !func_30(22))
							{
								func_27();
								Local_2513[iVar0 /*6*/].f_1 = 0;
							}
							break;
						
						case 5:
							break;
					}
					break;
				
				case 22:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_2676 != 0)
							{
								INTERIOR::UNPIN_INTERIOR(iLocal_2676);
							}
							iLocal_2676 = 0;
							break;
						
						case 0:
							iLocal_2676 = INTERIOR::GET_INTERIOR_AT_COORDS(2440.4924f, 4969.948f, 52.5247f);
							Local_2513[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!INTERIOR::IS_VALID_INTERIOR(iLocal_2676))
							{
								iLocal_2676 = INTERIOR::GET_INTERIOR_AT_COORDS(2440.4924f, 4969.948f, 52.5247f);
							}
							else
							{
								INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2676);
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							Local_2513[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 6:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case 0:
							func_19(50, 0, 0, 1, 0);
							func_19(51, 0, 0, 1, 0);
							func_19(52, 0, 0, 1, 0);
							func_19(53, 0, 0, 1, 0);
							func_19(54, 1, 0, 1, 0);
							Local_2513[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							break;
					}
					break;
				
				case 7:
					if (Local_2513[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_753[iVar2 /*33*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar2 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!PED::IS_PED_INJURED(Local_753[iVar2 /*33*/]))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar2 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 7)
											{
												STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
												Local_2513[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!PED::IS_PED_INJURED(Local_753[iVar2 /*33*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar2 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 7)
										{
											STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
											Local_2513[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				
				case 8:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case -1:
							PED::REMOVE_SCENARIO_BLOCKING_AREAS();
							break;
						
						case 0:
							PED::ADD_SCENARIO_BLOCKING_AREA(Vector(58.617897f, 4972.8975f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.617897f, 4972.8975f, 2445.654f) + Vector(100f, 100f, 100f), false, true, true, true);
							Local_2513[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2473.061f, 4981.4824f, 24.64584f, true) < 250f)
								{
									Local_2513[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2473.061f, 4981.4824f, 24.64584f, true) > 250f)
							{
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				
				case 9:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case -1:
							MISC::ENABLE_DISPATCH_SERVICE(3, true);
							MISC::ENABLE_DISPATCH_SERVICE(5, true);
							MISC::ENABLE_DISPATCH_SERVICE(1, true);
							MISC::ENABLE_DISPATCH_SERVICE(7, true);
							break;
						
						case 0:
							if (func_73(PLAYER::PLAYER_PED_ID(), 2578.5234f, 4982.2837f, 51.4416f, 1) < 500f)
							{
								MISC::ENABLE_DISPATCH_SERVICE(3, false);
								MISC::ENABLE_DISPATCH_SERVICE(5, false);
								MISC::ENABLE_DISPATCH_SERVICE(1, false);
								MISC::ENABLE_DISPATCH_SERVICE(7, false);
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (func_73(PLAYER::PLAYER_PED_ID(), 2578.5234f, 4982.2837f, 51.4416f, 1) > 500f)
							{
								MISC::ENABLE_DISPATCH_SERVICE(3, true);
								MISC::ENABLE_DISPATCH_SERVICE(5, true);
								MISC::ENABLE_DISPATCH_SERVICE(1, true);
								MISC::ENABLE_DISPATCH_SERVICE(7, true);
								Local_2513[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				
				case 25:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case 0:
							func_17(PLAYER::PLAYER_PED_ID(), 149);
							Local_2513[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								func_17(iVar3, 152);
								func_16(iVar3, -1);
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								func_17(0, 152);
								func_16(0, -1);
								Local_2513[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				
				case 14:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_2513[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 7000;
							Local_2513[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_2513[iVar0 /*6*/].f_5)
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2466.385f, 4953.0957f, 44.1228f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 221f);
								TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), 2475.0747f, 4945.9653f, 44.0228f, 1f, 20000, 40000f, 0.5f);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
								Local_2513[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				
				case 13:
					if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						Local_2513[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 12:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case 0:
							iLocal_2670 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_2670))
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670, 2);
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 1:
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670) == 3)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670, 4);
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							if (iLocal_2671 == 1)
							{
								if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670) == 5)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670, 6);
									AUDIO::START_AUDIO_SCENE("CHI_2_RAYFIRE");
									ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), true);
									ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), true);
									ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
									Local_2513[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_2513[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 16:
					if (Local_2513[iVar0 /*6*/].f_2 != -1)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false) || !OBJECT::DOES_PICKUP_EXIST(iLocal_2673))
						{
							iLocal_2677 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PETROLCAN")), false, false, true);
							if (iLocal_2677 != 0)
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_2675))
								{
									HUD::REMOVE_BLIP(&iLocal_2675);
								}
								iLocal_2675 = func_13(iLocal_2677);
								func_12(1);
								func_11(0, 157);
							}
						}
						else
						{
							Local_2513[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (HUD::DOES_BLIP_EXIST(iLocal_2675))
							{
								HUD::REMOVE_BLIP(&iLocal_2675);
							}
							func_10(157, 0);
							if (iLocal_2647 == 0)
							{
								iLocal_2647 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
							}
							else
							{
								func_9(158, (iLocal_2647 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"))), 1);
							}
						}
						if (func_8())
						{
							func_11(0, 157);
							Local_2513[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				
				case 18:
					break;
				
				case 17:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2447.6714f, 4951.4385f, 43.255756f, 2454.6638f, 4957.856f, 47.891174f, 6.8125f, false, true, 0) && MISC::GET_GAME_TIMER() > Local_2513[iVar0 /*6*/].f_5)
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_2675))
						{
							HUD::REMOVE_BLIP(&iLocal_2675);
						}
						Local_2513[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_2513[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!func_65())
								{
									func_7("FRMSHP", 7500, 1);
									Local_2513[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 2000;
									iLocal_2675 = func_5(2450f, 4954f, 45f, 0);
									Local_2513[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				
				case 20:
					if (!BitTest(Local_2513[iVar0 /*6*/].f_5, 0))
					{
						iLocal_2883 = func_18(4);
						if (iLocal_2883 != -1)
						{
							MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 0);
						}
					}
					else if (!BitTest(Local_2513[iVar0 /*6*/].f_5, 1))
					{
						if (!PED::IS_PED_INJURED(Local_753[iLocal_2883 /*33*/]) && ENTITY::DOES_ENTITY_EXIST(Local_753[iLocal_2883 /*33*/].f_20))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iLocal_2883 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && ENTITY::IS_ENTITY_ATTACHED(Local_753[iLocal_2883 /*33*/].f_20))
							{
								MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 1);
							}
						}
					}
					else if (!BitTest(Local_2513[iVar0 /*6*/].f_5, 2))
					{
						if (PED::IS_PED_INJURED(Local_753[iLocal_2883 /*33*/]))
						{
							MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 2);
						}
						if (!PED::IS_PED_INJURED(Local_753[iLocal_2883 /*33*/]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iLocal_2883 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 2);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iLocal_2883 /*33*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 2 || TASK::GET_SCRIPT_TASK_STATUS(Local_753[iLocal_2883 /*33*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
							{
								MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 2);
							}
							if (PED::IS_PED_IN_COMBAT(Local_753[iLocal_2883 /*33*/], PLAYER::PLAYER_PED_ID()) || Local_1617[iLocal_2883 /*24*/].f_3 > 3)
							{
								MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_753[iLocal_2883 /*33*/].f_20) && ENTITY::IS_ENTITY_ATTACHED(Local_753[iLocal_2883 /*33*/].f_20))
					{
						ENTITY::DETACH_ENTITY(Local_753[iLocal_2883 /*33*/].f_20, false, false);
					}
					if (!BitTest(Local_2513[iVar0 /*6*/].f_5, 4))
					{
						iLocal_2884 = func_18(5);
						if (iLocal_2884 != -1)
						{
							MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!BitTest(Local_2513[iVar0 /*6*/].f_5, 5))
					{
						if (!PED::IS_PED_INJURED(Local_753[iLocal_2884 /*33*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_753[iLocal_2884 /*33*/].f_20))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iLocal_2884 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(Local_753[iLocal_2884 /*33*/].f_20))
									{
										MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!BitTest(Local_2513[iVar0 /*6*/].f_5, 6))
					{
						if (PED::IS_PED_INJURED(Local_753[iLocal_2884 /*33*/]))
						{
							MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 6);
						}
						if (!PED::IS_PED_INJURED(Local_753[iLocal_2884 /*33*/]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iLocal_2884 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 6);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iLocal_2884 /*33*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 2 || TASK::GET_SCRIPT_TASK_STATUS(Local_753[iLocal_2884 /*33*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
							{
								MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 6);
							}
							if (PED::IS_PED_IN_COMBAT(Local_753[iLocal_2884 /*33*/], PLAYER::PLAYER_PED_ID()) || Local_1617[iLocal_2884 /*24*/].f_3 > 3)
							{
								MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_753[iLocal_2884 /*33*/].f_20) && ENTITY::IS_ENTITY_ATTACHED(Local_753[iLocal_2884 /*33*/].f_20))
					{
						ENTITY::DETACH_ENTITY(Local_753[iLocal_2884 /*33*/].f_20, false, false);
					}
					break;
				
				case 21:
					break;
				
				case 23:
					iVar4 = 0;
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_2655[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.4958f, 4970.916f, 44.5112f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[0], -3.44f, 0f, 38.88f, 2, true);
							iLocal_2655[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[1], -3.44f, 0f, 38.88f, 2, true);
							iLocal_2655[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.8955f, 4970.4175f, 44.5475f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[2], -3.44f, 0f, 38.88f, 2, true);
							iLocal_2655[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.7954f, 4970.2456f, 44.5525f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[3], -3.44f, 0f, 38.88f, 2, true);
							iLocal_2655[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[4], -3.44f, 0f, 38.88f, 2, true);
							iLocal_2655[5] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.3716f, 4970.744f, 44.51f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[5], -3.44f, 0f, 38.88f, 2, true);
							iLocal_2655[6] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.3716f, 4971.092f, 44.4987f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[6], -3.44f, 0f, 38.88f, 2, true);
							iLocal_2655[7] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2493.7695f, 4971f, 44.6287f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[7], 3.955f, 0f, 139.68f, 2, true);
							iLocal_2655[8] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2493.9797f, 4971.2793f, 44.6038f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[8], 3.955f, 0f, 139.68f, 2, true);
							iLocal_2655[9] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.1042f, 4971.4375f, 44.5826f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_2655[9], 3.955f, 0f, 139.68f, 2, true);
							iVar4 = 0;
							while (iVar4 < iLocal_2655)
							{
								ENTITY::SET_ENTITY_DYNAMIC(iLocal_2655[iVar4], true);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_2655[iVar4], true);
								iVar4++;
							}
							Local_2513[iVar0 /*6*/].f_2++;
							break;
						
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2678) && !ENTITY::DOES_ENTITY_EXIST(iLocal_2679))
							{
								if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), false) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), false))
								{
									iLocal_2678 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), true, false, true);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2678, true);
									ENTITY::CREATE_MODEL_HIDE(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), false);
									iLocal_2679 = OBJECT::CREATE_OBJECT(joaat("prop_pallet_pile_01"), 2493.4275f, 4971.7285f, 43.543625f, true, true, false);
									ENTITY::SET_ENTITY_ROTATION(iLocal_2679, -1.436373f, 0.176147f, -36.6601f, 2, true);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2679, true);
									func_32(24, 0);
									Local_2513[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								OBJECT::DELETE_OBJECT(&iLocal_2679);
								iLocal_2679 = OBJECT::CREATE_OBJECT(joaat("prop_pallet_pile_01"), 2493.4275f, 4971.7285f, 43.543625f, true, true, false);
								ENTITY::SET_ENTITY_ROTATION(iLocal_2679, -1.436373f, 0.176147f, -36.6601f, 2, true);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_2679, true);
								func_32(24, 0);
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_2655)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2655[iVar4]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2655[iVar4], false);
								}
								iVar4++;
							}
							Local_2513[iVar0 /*6*/].f_1 = 0;
							Local_2513[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				
				case 24:
					if (!BitTest(Local_2513[iVar0 /*6*/].f_5, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2678))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2678, PLAYER::PLAYER_PED_ID(), true) || func_4(PLAYER::PLAYER_PED_ID(), iLocal_2678, 1) < 30f)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2678, false);
									MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 0);
								}
							}
						}
					}
					if (!BitTest(Local_2513[iVar0 /*6*/].f_5, 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2679))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2679, PLAYER::PLAYER_PED_ID(), true) || func_4(PLAYER::PLAYER_PED_ID(), iLocal_2679, 1) < 30f)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2679, false);
									MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 1);
								}
							}
						}
					}
					if ((BitTest(Local_2513[iVar0 /*6*/].f_5, 0) && BitTest(Local_2513[iVar0 /*6*/].f_5, 1)) || iLocal_2509 == 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2678))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2678, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2679))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2679, false);
						}
						Local_2513[iVar0 /*6*/].f_1 = 0;
					}
					break;
				
				case 26:
					switch (Local_2513[iVar0 /*6*/].f_2)
					{
						case -1:
							if (ENTITY::DOES_ENTITY_EXIST(Local_753[12 /*33*/]))
							{
								PED::DELETE_PED(&(Local_753[12 /*33*/]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_753[13 /*33*/]))
							{
								PED::DELETE_PED(&(Local_753[13 /*33*/]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_753[14 /*33*/]))
							{
								PED::DELETE_PED(&(Local_753[14 /*33*/]));
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man1A"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man2"));
							Local_2513[iVar0 /*6*/].f_1 = 0;
							break;
						
						case 0:
							STREAMING::REQUEST_ANIM_DICT("MISSChinese2_crystalMazeMCS1_IG");
							Local_2513[iVar0 /*6*/].f_2++;
							break;
						
						case 1:
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (CUTSCENE::HAS_CUTSCENE_FINISHED() || !CUTSCENE::IS_CUTSCENE_PLAYING())
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_753[13 /*33*/]) && !PED::IS_PED_INJURED(Local_753[13 /*33*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_753[13 /*33*/], 1986.0602f, 3051.7085f, 46.2151f, true, false, false, true);
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_753[14 /*33*/]) && !PED::IS_PED_INJURED(Local_753[14 /*33*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_753[14 /*33*/], 1986.1051f, 3051.6592f, 46.2151f, true, false, false, true);
									}
									Local_2513[iVar0 /*6*/].f_2++;
								}
							}
							break;
						
						case 2:
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1984.89f, 3052.46f, 46.98f, 0.3f, true) && TASK::DOES_SCENARIO_EXIST_IN_AREA(1985.3221f, 3053.0872f, 46.98f, 0.3f, true))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_753[13 /*33*/]))
								{
									Local_753[13 /*33*/] = PED::CREATE_PED(26, joaat("IG_Old_Man1A"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_753[14 /*33*/]))
								{
									Local_753[14 /*33*/] = PED::CREATE_PED(26, joaat("IG_Old_Man2"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_753[12 /*33*/]))
								{
									Local_753[12 /*33*/] = PED::CREATE_PED(26, joaat("IG_Janet"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
								}
								MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 1);
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[14 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[14 /*33*/], true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[14 /*33*/], false);
								MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 0);
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[13 /*33*/], 1985.3221f, 3053.0872f, 46.98f, 0.3f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[13 /*33*/], true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[13 /*33*/], false);
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2513[iVar0 /*6*/].f_5))
								{
									Local_2513[iVar0 /*6*/].f_5 = PED::CREATE_SYNCHRONIZED_SCENE(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2513[iVar0 /*6*/].f_5, true);
								}
								TASK::TASK_SYNCHRONIZED_SCENE(Local_753[12 /*33*/], Local_2513[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[12 /*33*/], true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[12 /*33*/], false);
								Local_2513[iVar0 /*6*/].f_5 = 0;
								Local_2513[iVar0 /*6*/].f_2++;
							}
							break;
						
						case 3:
							if (CUTSCENE::HAS_CUTSCENE_FINISHED() || !CUTSCENE::IS_CUTSCENE_PLAYING())
							{
							}
							if (!PED::IS_PED_INJURED(Local_753[13 /*33*/]) && !PED::IS_PED_INJURED(Local_753[14 /*33*/]))
							{
								PED::SET_PED_CONFIG_FLAG(Local_753[13 /*33*/], 152, true);
								PED::SET_PED_CONFIG_FLAG(Local_753[14 /*33*/], 152, true);
								if (BitTest(Local_2513[iVar0 /*6*/].f_5, 0) && BitTest(Local_2513[iVar0 /*6*/].f_5, 1))
								{
									Local_2513[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[13 /*33*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 1)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1984.89f, 3052.46f, 46.98f, 0.3f, true))
										{
											MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 0);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[13 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[13 /*33*/], false);
										}
									}
									else
									{
										MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 0);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[14 /*33*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 1)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1985.3221f, 3053.0872f, 46.98f, 0.3f, true))
										{
											MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 1);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[14 /*33*/], 1985.3221f, 3053.0872f, 46.98f, 0.3f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[14 /*33*/], false);
										}
									}
									else
									{
										MISC::SET_BIT(&(Local_2513[iVar0 /*6*/].f_5), 1);
									}
								}
							}
							break;
						
						case 4:
							if (func_73(PLAYER::PLAYER_PED_ID(), 1991.4193f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2513[iVar0 /*6*/].f_2 = -1;
							}
							break;
						
						case 6:
							if (!PED::IS_PED_INJURED(Local_753[12 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_753[12 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_753[12 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[12 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_753[13 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_753[13 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_753[13 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[13 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_753[14 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_753[14 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_753[14 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[14 /*33*/]));
							}
							Local_2513[iVar0 /*6*/].f_2 = 7;
							break;
						
						case 7:
							if (func_73(PLAYER::PLAYER_PED_ID(), 1991.4193f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_2513[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				
				case 27:
					ENTITY::CREATE_FORCED_OBJECT(2444.1763f, 4974.0767f, 56.406605f, 30f, joaat("v_ilev_fh_door03"), true);
					ENTITY::CREATE_FORCED_OBJECT(2444.1763f, 4974.0767f, 56.406605f, 30f, joaat("v_ilev_fh_frntdoor"), true);
					Local_2513[iVar0 /*6*/].f_1 = 0;
					break;
				
				case 29:
					break;
			}
			if (Local_2513[iVar0 /*6*/].f_2 == -1)
			{
				Local_2513[iVar0 /*6*/].f_1 = 0;
				Local_2513[iVar0 /*6*/].f_2 = 0;
				Local_2513[iVar0 /*6*/].f_3 = 0;
				Local_2513[iVar0 /*6*/].f_4 = 0;
				Local_2513[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}

float func_4(int iParam0, int iParam1, bool bParam2)//Position - 0x2420
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

int func_5(struct<3> Param0, bool bParam3)//Position - 0x247E
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)//Position - 0x24AA
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_7(char* sParam0, int iParam1, int iParam2)//Position - 0x24C1
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
}

int func_8()//Position - 0x24DA
{
	if (iLocal_267 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0, int iParam1, bool bParam2)//Position - 0x24EE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75580)
	{
		if (Global_75581[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_75581[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_75581[iVar0 /*9*/].f_1 = (Global_75581[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_75581[iVar0 /*9*/] != -1)
	{
		if (Global_63710[Global_75581[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_75581[iVar0 /*9*/].f_1 > 1)
			{
				Global_75581[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_75581[iVar0 /*9*/].f_1 < 0)
			{
				Global_75581[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_10(int iParam0, bool bParam1)//Position - 0x2598
{
	int iVar0;
	
	Global_63495 = iParam0;
	if (!Global_63493)
	{
		Global_63493 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75580)
		{
			if (Global_75581[iVar0 /*9*/] == iParam0)
			{
				Global_75581[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_11(bool bParam0, int iParam1)//Position - 0x25E2
{
	int iVar0;
	
	if (Global_63493)
	{
	}
	Global_63493 = 0;
	if (bParam0)
	{
		Global_63494 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_75580)
		{
			if (Global_63710[Global_75581[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_75581[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_75580)
		{
			if (Global_75581[iVar0 /*9*/] > 0)
			{
				if (Global_75581[iVar0 /*9*/] == iParam1)
				{
					Global_75581[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0)//Position - 0x267C
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		if (iLocal_260 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_442.f_0)
			{
				if (HUD::DOES_BLIP_EXIST(Local_442[iVar0 /*5*/].f_3))
				{
					if (HUD::GET_BLIP_ALPHA(Local_442[iVar0 /*5*/].f_3) < 255)
					{
						HUD::REMOVE_BLIP(&(Local_442[iVar0 /*5*/].f_3));
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_442[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_260 = 1;
		}
	}
	else if (iLocal_260)
	{
		iVar0 = 0;
		while (iVar0 < Local_442.f_0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_442[iVar0 /*5*/].f_3))
			{
				HUD::SET_BLIP_ALPHA(Local_442[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_442[iVar0 /*5*/].f_3 = func_5(Local_442[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_442[iVar0 /*5*/].f_3, true);
				HUD::SET_BLIP_SCALE(Local_442[iVar0 /*5*/].f_3, 0.4f);
				HUD::SET_BLIP_ALPHA(Local_442[iVar0 /*5*/].f_3, 0);
				HUD::SET_BLIP_COLOUR(Local_442[iVar0 /*5*/].f_3, 5);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_442[iVar0 /*5*/].f_3, false);
			}
			iVar0++;
		}
		iLocal_260 = 0;
	}
}

int func_13(int iParam0)//Position - 0x278D
{
	return func_14(iParam0, 1, 0);
}

int func_14(int iParam0, bool bParam1, bool bParam2)//Position - 0x279D
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_15(char* sParam0, int iParam1, char* sParam2)//Position - 0x2841
{
	iLocal_3504 = 1;
	iLocal_3505 = iParam1;
	sLocal_3507 = sParam0;
	sLocal_3508 = sParam2;
}

void func_16(int iParam0, int iParam1)//Position - 0x285C
{
	Global_63496 = iParam0;
	Global_63497 = iParam1;
}

void func_17(int iParam0, int iParam1)//Position - 0x286E
{
	int iVar0;
	
	Global_63498 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_75580)
	{
		if (iParam1 == -1 || Global_75581[iVar0 /*9*/] == iParam1)
		{
			if (Global_75581[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_75581[iVar0 /*9*/].f_6 = iParam0;
				Global_75581[iVar0 /*9*/].f_7 = 1;
				Global_75581[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

int func_18(int iParam0)//Position - 0x28D9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_753.f_0)
	{
		if (Local_753[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_19(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2909
{
	if (iParam0 != 198)
	{
		if (Global_78689)
		{
			Global_42911.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_113810.f_7264.f_227[iParam0] = iParam1;
		}
		Global_39917[iParam0] = iParam2;
		Global_40116[iParam0] = 1;
		func_22(iParam0, bParam3, iParam4, 0);
		func_20(iParam0, iParam1);
	}
}

void func_20(int iParam0, int iParam1)//Position - 0x2961
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", false, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", true, false);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_21(0, 0);
			}
			else
			{
				func_21(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
			}
			break;
	}
}

void func_21(int iParam0, bool bParam1)//Position - 0x2A4A
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_112447, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_112447, iParam0);
	}
	Global_112446 = 1;
}

bool func_22(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2A73
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	int iVar98;
	bool bVar99;
	int iVar100;
	
	Global_1926478 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_26(&Var3, iParam0);
	if (func_23())
	{
		iVar1 = Global_113810.f_7264.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_42911.f_227[iParam0];
	}
	iVar2 = Global_40315[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
		Global_1926478 = 1;
	}
	else
	{
		bVar99 = true;
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_39917[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3, true) < 200f)
				{
					bVar99 = false;
					Global_1926478 = 1;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar99 = false;
						Global_1926478 = 1;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar99 = false;
			Global_1926478 = 1;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], true);
						}
						Global_41511[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
								Global_1926478 = 1;
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
								Global_1926478 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
								Global_1926478 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_34));
								Global_1926478 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_41312[iParam0] = 1;
					Global_41511[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_50)) != MISC::GET_HASH_KEY(""))
						{
							if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_50)))
							{
								INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar100);
						}
					}
					Global_41511[iParam0] = 1;
					Global_41312[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 250f)
					{
						iVar98 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar98))
						{
							if (iVar1 == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 3);
								Global_41511[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) != 6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) != 7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) != 8)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 10);
									Global_41511[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], false);
						MISC::CLEAR_BIT(&(Global_39663[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], true);
						MISC::SET_BIT(&(Global_39663[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_40116[iParam0] = 0;
				Global_40315[iParam0] = iVar1;
				if (!func_23())
				{
					if (!Global_40912[iParam0])
					{
						Global_40912[iParam0] = 1;
						Global_41111++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_23()//Position - 0x33D8
{
	if ((func_25() == -1 || func_25() == 999) && !func_24() == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()//Position - 0x3408
{
	return Global_32284;
}

int func_25()//Position - 0x3413
{
	return Global_32283;
}

int func_26(var uParam0, int iParam1)//Position - 0x341E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.91345f, 603.2904f, 105.66109f };
			uParam0->f_61 = { -1038.9135f, 639.2904f, 135.66109f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.89182f, -2365.7693f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.8584f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_lod");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.3074f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.7556f, 4929.9883f, 39.52461f };
			uParam0->f_82 = { 2505.7556f, 5023.9883f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.5955f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.4154f, -1626.3705f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.6194f, 4443.4565f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.4285f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.1783f, -1143.6046f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.2096f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.6292f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.9692f, 4277.5825f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.8813f, 3836.1074f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.9276f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.93504f - 11f), (40.307034f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.93504f + 11f), (40.307034f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.6099f, 2835.3274f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.6821f, 3286.2512f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.3743f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.8053f, 3818.5547f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.3356f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.1294f, -1523.0276f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.0391f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.0288f, 3682.9983f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.3857f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.6136f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.2944f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.57953f, -3092.9624f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.9624f, 139.57953f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.9624f, 139.57953f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.9624f, 139.57953f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.9624f, 139.57953f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.77838f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.77838f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.77838f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.77055f, -2982.6594f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.6594f, 144.77055f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.6594f, 144.77055f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_79 = { -1154.9647f, -1520.9827f, 9.132731f };
			uParam0->f_82 = { -1158.9647f, -1524.9827f, 11.632731f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.2039f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.0645f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.9836f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.2018f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.2333f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.1377f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.7847f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.5055f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.3812f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.0793f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.4241f, 2808.2126f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.1273f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.3467f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_27()//Position - 0x6C5E
{
	int iVar0;
	
	func_32(27, 0);
	MISC::CLEAR_AREA(2479.8748f, 4980.8677f, 44.820522f, 60f, true, false, false, false);
	iLocal_2505 = VEHICLE::CREATE_VEHICLE(joaat("burrito"), 2479.5789f, 4980.503f, 44.8051f, 341.8158f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2505, 1);
	VEHICLE::SET_VEHICLE_LIVERY(iLocal_2505, 2);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2505, 5f);
	if (iLocal_2509 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_2509 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_2509 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_2509 == 7)
	{
		STREAMING::REQUEST_ANIM_DICT("DEAD");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("DEAD"))
		{
			func_28(323, 1);
		}
		Local_753[15 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), 2436.9011f, 4959.0996f, 45.8106f, 209.7559f, true, true);
		TASK::TASK_PLAY_ANIM(Local_753[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[15 /*33*/], true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_753[15 /*33*/], true);
		Local_753[16 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, true, true);
		TASK::TASK_PLAY_ANIM(Local_753[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[16 /*33*/], true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_753[16 /*33*/], true);
		Local_753[17 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), 2443.4197f, 4974.5234f, 45.8106f, 121.834f, true, true);
		TASK::TASK_PLAY_ANIM(Local_753[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[17 /*33*/], true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_753[17 /*33*/], true);
		Local_753[18 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), 2448.8877f, 4971.5605f, 45.8106f, 194.7676f, true, true);
		TASK::TASK_PLAY_ANIM(Local_753[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[18 /*33*/], true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_753[18 /*33*/], true);
		while (((!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[15 /*33*/], "DEAD", "DEAD_C", 3) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[16 /*33*/], "DEAD", "DEAD_D", 3)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[17 /*33*/], "DEAD", "DEAD_E", 3)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!PED::IS_PED_INJURED(Local_753[15 /*33*/]) && !PED::IS_PED_INJURED(Local_753[16 /*33*/])) && !PED::IS_PED_INJURED(Local_753[17 /*33*/])) && !PED::IS_PED_INJURED(Local_753[18 /*33*/]))
			{
			}
		}
		ENTITY::SET_ENTITY_HEALTH(Local_753[15 /*33*/], 0, 0);
		ENTITY::SET_ENTITY_HEALTH(Local_753[16 /*33*/], 0, 0);
		ENTITY::SET_ENTITY_HEALTH(Local_753[17 /*33*/], 0, 0);
		ENTITY::SET_ENTITY_HEALTH(Local_753[18 /*33*/], 0, 0);
		STREAMING::REMOVE_ANIM_DICT("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 8);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 4);
	iLocal_2648 = OBJECT::CREATE_PICKUP(joaat("PICKUP_HEALTH_STANDARD"), 2446.8962f, 4990.972f, 45.5477f, iVar0, -1, true, 0);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2508))
	{
		iLocal_2508 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2464.9563f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, false, 7);
	}
	iLocal_2649[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 2444.4973f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2649[0], "V_8_Bed1Rm");
	iLocal_2649[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2649[1], "V_8_KitchnRm");
	iLocal_2649[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2649[3], "V_8_StudyRm");
	iLocal_2649[4] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2649[4], "V_8_Hall2Rm");
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 3);
	iLocal_2649[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 2438.7878f, 4970.7896f, 50.565f, 0f, 0f, 0f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2649[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)//Position - 0x71E3
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	SYSTEM::WAIT(0);
}

void func_29(int iParam0, int iParam1, int iParam2)//Position - 0x71F8
{
	int iVar0;
	
	iVar0 = iParam2;
	Local_753[iVar0 /*33*/].f_1 = iParam0;
	Local_753[iVar0 /*33*/].f_3 = iParam1;
	Local_753[iVar0 /*33*/].f_2 = iParam2;
	Local_753[iVar0 /*33*/].f_5 = 0;
}

int func_30(int iParam0)//Position - 0x722F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2513.f_0)
	{
		if (Local_2513[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2513[iVar0 /*6*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)//Position - 0x7269
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2513.f_0)
	{
		if (Local_2513[iVar0 /*6*/] == iParam0)
		{
			Local_2513[iVar0 /*6*/].f_2 = -1;
			if (!bParam1)
			{
				Local_2513[iVar0 /*6*/].f_1 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0x72B0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2513.f_0)
	{
		if (Local_2513[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2513[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_2513.f_0)
	{
		if (Local_2513[iVar0 /*6*/].f_1 == 0)
		{
			Local_2513[iVar0 /*6*/].f_1 = 1;
			Local_2513[iVar0 /*6*/] = iParam0;
			Local_2513[iVar0 /*6*/].f_2 = 0;
			Local_2513[iVar0 /*6*/].f_3 = iParam1;
			Local_2513[iVar0 /*6*/].f_4 = 0;
			Local_2513[iVar0 /*6*/].f_5 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_33(float fParam0, int iParam1)//Position - 0x734B
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (!VEHICLE::IS_VEHICLE_STOPPED(iVar0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, fParam0, iParam1, false);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_34()//Position - 0x73CF
{
	return Global_100885.f_393 > 0;
}

int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x73E0
{
	if (!iLocal_3685)
	{
		iLocal_3685 = 1;
		Local_3476[0 /*3*/] = iParam1;
		Local_3476[0 /*3*/].f_1 = iParam2;
		Local_3476[0 /*3*/].f_2 = sParam3;
		Local_3476[1 /*3*/] = iParam4;
		Local_3476[1 /*3*/].f_1 = iParam5;
		Local_3476[1 /*3*/].f_2 = sParam6;
		Local_3476[2 /*3*/] = iParam7;
		Local_3476[2 /*3*/].f_1 = iParam8;
		Local_3476[2 /*3*/].f_2 = sParam9;
		Local_3476[3 /*3*/] = iParam10;
		Local_3476[3 /*3*/].f_1 = iParam11;
		Local_3476[3 /*3*/].f_2 = sParam12;
		func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_61(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_61(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_61(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_61(iParam10, iParam11, sParam12);
		}
		if (!func_59())
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (func_36(&uLocal_3520, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_3489 = 1;
					return 1;
				}
			}
			else if (func_36(&uLocal_3520, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_3489 = 0;
				return 1;
			}
		}
	}
	return 0;
}

bool func_36(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x74FD
{
	func_58(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_37(sParam2, iParam3, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)//Position - 0x754B
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
					func_57();
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
		if (func_56(8, -1))
		{
			return 0;
		}
		Global_21921 = { Global_21915 };
		func_55();
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
				func_47();
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
				if (func_46())
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
			if (func_45())
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
			func_44();
			Global_21855 = bParam2;
		}
		Global_21847 = iParam1;
		StringCopy(&Global_21464, sParam0, 24);
		Global_20711 = 0;
		func_43();
		func_38();
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
		func_57();
	}
	return 0;
}

void func_38()//Position - 0x7819
{
	if (!func_39())
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

int func_39()//Position - 0x7850
{
	if (!Global_262145.f_29085 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78689)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_42())
	{
		return 0;
	}
	if (func_40(PLAYER::PLAYER_ID()))
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

bool func_40(int iParam0)//Position - 0x78B3
{
	return func_41(iParam0, 20);
}

var func_41(int iParam0, int iParam1)//Position - 0x78C3
{
	return BitTest(Global_1895156[iParam0 /*609*/].f_10.f_4, iParam1);
}

int func_42()//Position - 0x78DB
{
	return -1;
}

void func_43()//Position - 0x78E4
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

void func_44()//Position - 0x7916
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

int func_45()//Position - 0x79AB
{
	if (Global_20500.f_1 == 1 || Global_20500.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()//Position - 0x79D2
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

void func_47()//Position - 0x7A6B
{
	if (func_54(14))
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
		Global_20500 = func_48();
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

int func_48()//Position - 0x7B0D
{
	func_49();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_49()//Position - 0x7B26
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_52(Global_113810.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_51(PLAYER::PLAYER_PED_ID());
			if (func_50(iVar0) && (!func_54(14) || Global_112760))
			{
				if (Global_113810.f_2366.f_539.f_4321 != iVar0 && func_50(Global_113810.f_2366.f_539.f_4321))
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

bool func_50(int iParam0)//Position - 0x7C23
{
	return iParam0 < 3;
}

int func_51(int iParam0)//Position - 0x7C2F
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_52(int iParam0)//Position - 0x7C6C
{
	if (func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)//Position - 0x7C91
{
	return Global_2058[iParam0 /*29*/];
}

bool func_54(int iParam0)//Position - 0x7CA0
{
	return Global_43377 == iParam0;
}

void func_55()//Position - 0x7CAE
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

bool func_56(int iParam0, int iParam1)//Position - 0x7D06
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

void func_57()//Position - 0x7D3E
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

void func_58(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7D95
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

int func_59()//Position - 0x7DEB
{
	struct<3> Var0;
	
	if (Global_20500.f_1 > 3)
	{
		return 1;
	}
	if (func_60())
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

int func_60()//Position - 0x7E59
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_61(int iParam0, int iParam1, char* sParam2)//Position - 0x7E73
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_3509)
	{
		if (iLocal_3509[iVar0] == iParam1)
		{
			func_63(&uLocal_3520, iVar0);
			iLocal_3509[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_3509[iParam0] != 0)
	{
		func_63(&uLocal_3520, iParam0);
	}
	func_62(&uLocal_3520, iParam0, iParam1, sParam2, 0, 1);
	iLocal_3509[iParam0] = iParam1;
}

void func_62(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x7ED8
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

void func_63(var uParam0, int iParam1)//Position - 0x7F73
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_64(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7F90
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_49) || !MISC::ARE_STRINGS_EQUAL(sLocal_49, sParam0))
	{
		sLocal_49 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_87[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_63(&Local_87, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_65()//Position - 0x8000
{
	if (Global_21845 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_66(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)//Position - 0x8022
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_68(iParam1) != iParam2 || iParam2 == 0)
		{
			func_61(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_68(iParam4) != iParam5 || iParam5 == 0)
			{
				func_61(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_68(iParam7) != iParam8 || iParam8 == 0)
			{
				func_61(iParam7, iParam8, sParam9);
			}
		}
		if (func_67(&uLocal_3520, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

bool func_67(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x80C2
{
	func_58(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_37(sParam3, iParam4, bParam7);
}

int func_68(int iParam0)//Position - 0x8110
{
	return iLocal_3509[iParam0];
}

int func_69(int iParam0)//Position - 0x811F
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

void func_70()//Position - 0x8183
{
	Global_20711 = 0;
	func_71();
}

void func_71()//Position - 0x8193
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20499 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22856 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
		Global_20500.f_1 = Global_20502;
		return;
	}
}

void func_72()//Position - 0x81CA
{
	Global_20711 = 0;
	func_57();
}

float func_73(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x81DA
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

int func_74(int iParam0)//Position - 0x8214
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_75(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x8234
{
	func_76(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_76(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x825E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam18)
			{
				func_83(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_80(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_78(iVar0, func_48(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_77(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::GET_VEHICLE_SIZE(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, false, false, false, false, false, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, true), true, false, false, true);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_77(struct<3> Param0)//Position - 0x8654
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_78(int iParam0, int iParam1, bool bParam2)//Position - 0x867E
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_79(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_113810.f_7232[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x86EC
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_80(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x87C5
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_82(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_81(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_81(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_81(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_81(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_81(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_81(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_81(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_81(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_81(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_81(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_81(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_81(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_81(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_81(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_81(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_81(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)//Position - 0x8ABB
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_82(struct<3> Param0)//Position - 0x8B6F
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

void func_83(int iParam0)//Position - 0x8BAE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

void func_84()//Position - 0x8C13
{
	if (iLocal_2509 >= 3)
	{
		if (iLocal_2509 > 3)
		{
			func_109(&Local_1617, &Local_2272, Local_2251, Local_2254, Local_2257, Local_2260, Local_2248, Local_2269, Local_2242, Local_2245, Local_2263, Local_2266);
		}
		func_85();
	}
}

void func_85()//Position - 0x8C69
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_1617.f_0)
	{
		if ((!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_753[iVar0 /*33*/], true)) || Local_1617[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_1617[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_753[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_753[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2451.8179f, 4985.704f, 50.5678f, 227.842f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 5, 0, 0);
									}
									break;
								
								case 1:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2455.085f, 4974.466f, 50.5677f, 246.051f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 14, 0, 0);
									}
									break;
								
								case 6:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2461.609f, 4993.675f, 44.9821f, -90f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 0, 0);
										Local_753[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 7:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2462.8872f, 4993.614f, 44.9474f, 89.8899f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 1, 0);
										Local_753[iVar0 /*33*/].f_4 = 7;
									}
									break;
								
								case 3:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2460.6506f, 4970.8135f, 45.5765f, 240.2054f, joaat("WEAPON_ASSAULTRIFLE"), 0, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 1, 0, 0);
										func_105(iVar0, 16, 0, 0);
									}
									break;
								
								case 0:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2443.1384f, 4966.709f, 50.5677f, 246.051f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 15, 0, 0);
									}
									break;
								
								case 4:
									if (iLocal_2509 == 3)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2457.098f, 4954.2827f, 44.1304f, 316.5498f, joaat("WEAPON_PISTOL"), 0, 0))
										{
											Local_753[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2460.098f, 4957.2827f, 44.1304f, true, true, false);
											Local_753[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2478.32f, 4982.3247f, 44.8913f, 49.5021f, joaat("WEAPON_PISTOL"), 0, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
										Local_753[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2478.4443f, 4976.9214f, 44.5614f, true, true, false);
										Local_753[iVar0 /*33*/].f_5 = 1;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								
								case 5:
									if (iLocal_2509 == 3)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2454.7527f, 4951.7188f, 44.1445f, 316.5541f, joaat("WEAPON_PISTOL"), 0, 0))
										{
											Local_753[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2455.7527f, 4952.7188f, 44.1445f, true, true, false);
											Local_753[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2475.8733f, 4984.4263f, 45.0916f, 45.8993f, joaat("WEAPON_PISTOL"), 0, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
										Local_753[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2476.5815f, 4978.4917f, 44.5734f, true, true, false);
										Local_753[iVar0 /*33*/].f_5++;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								
								case 8:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("WEAPON_PISTOL"), 1, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
										Local_753[iVar0 /*33*/].f_14 = PED::CREATE_SYNCHRONIZED_SCENE(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 2);
										func_104(Local_753[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f, 1101004800, 1125515264);
										AUDIO::SET_AMBIENT_VOICE_NAME(Local_753[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										TASK::TASK_SYNCHRONIZED_SCENE(Local_753[iVar0 /*33*/], Local_753[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_753[iVar0 /*33*/].f_14, true);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[iVar0 /*33*/], false, false);
										func_105(iVar0, 4, 0, Local_753[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								
								case 9:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("WEAPON_PISTOL"), 1, 0))
									{
										Local_753[iVar0 /*33*/].f_14 = PED::CREATE_SYNCHRONIZED_SCENE(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 2);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_753[iVar0 /*33*/].f_14, true);
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_753[iVar0 /*33*/], Local_753[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1000f, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[iVar0 /*33*/], false, false);
										func_105(iVar0, 4, 0, Local_753[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/]))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_753[iVar0 /*33*/], true, 1);
								PED::SET_PED_TO_LOAD_COVER(Local_753[iVar0 /*33*/], true);
							}
							break;
						
						case 2:
							switch (Local_753[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_2509 < 5)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2458.5696f, 4987.584f, 45.8107f, 233.842f, joaat("WEAPON_PISTOL"), 0, 0))
										{
											func_105(iVar0, 14, 0, 0);
											func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2454.6272f, 4995.726f, 45.2011f, 233.842f, joaat("WEAPON_PISTOL"), 0, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 11:
									if (iLocal_2509 < 5)
									{
										if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2442.9937f, 4985.1636f, 45.8103f, 303.409f, joaat("WEAPON_MICROSMG"), 0, 0))
										{
											func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 1, 1, 0);
											func_105(iVar0, 14, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2450.3706f, 4995.103f, 44.9282f, 303.409f, joaat("WEAPON_MICROSMG"), 0, 0))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 12:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2433.124f, 4967.804f, 46.293f, 63.7673f, joaat("WEAPON_PUMPSHOTGUN"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 13:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2432.091f, 4968.833f, 46.298f, 63.7673f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 14:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2431.4849f, 4964.7793f, 45.8106f, -137.5f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 15:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2440.3855f, 4965.4287f, 45.8106f, 63.7673f, joaat("WEAPON_PUMPSHOTGUN"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 16:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2439.741f, 4964.8896f, 45.8106f, 130.3988f, joaat("WEAPON_MICROSMG"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 17:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2438.7068f, 4964.0938f, 45.8106f, 127.6523f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										PED::SET_PED_ACCURACY(Local_753[iVar0 /*33*/], 5);
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								
								case 18:
									if (iLocal_2509 < 5)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2440.9287f, 4976.9214f, 45.8106f, -130f, joaat("WEAPON_PISTOL"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											Local_753[iVar0 /*33*/].f_4 = 7;
											func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2452.0525f, 4956.689f, 43.8957f, 230.7673f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										func_105(iVar0, 23, 0, 0);
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								
								case 19:
									if (iLocal_2509 < 5)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2442.926f, 4975.1484f, 45.8106f, 46.7673f, joaat("WEAPON_PISTOL"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
											Local_753[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2449.3384f, 4954.127f, 43.9299f, 46.7673f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								
								case 20:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2449.1138f, 4981.984f, 45.8102f, 130.7673f, joaat("WEAPON_MICROSMG"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_753[iVar0 /*33*/].f_4 = 32;
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								
								case 21:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2447.5527f, 4980.515f, 45.8096f, 311.7673f, joaat("WEAPON_MICROSMG"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_753[iVar0 /*33*/].f_4 = 7;
										func_106(&Local_1617, iVar0, Local_753[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_753[iVar0 /*33*/], true, 1);
							}
							break;
						
						case 5:
							switch (Local_753[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2439.2576f, 4976.2007f, 45.8106f, 116.815f, joaat("WEAPON_UNARMED"), 0, 1))
									{
										func_105(iVar0, 28, 0, 0);
									}
									break;
								
								case 23:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2433.292f, 4968.534f, 42.348f, 105.5f, joaat("WEAPON_UNARMED"), 0, 1))
									{
										func_105(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
					{
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_753[iVar0 /*33*/], true);
						Local_1617[iVar0 /*24*/].f_3 = 3;
						iVar0 = (iVar0 - 1);
					}
					break;
				
				case 3:
					if (Local_1617[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_753[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/].f_20))
										{
											if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_753[iVar0 /*33*/].f_20) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_753[iVar0 /*33*/].f_20))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_753[iVar0 /*33*/].f_20, Local_753[iVar0 /*33*/], PED::GET_PED_BONE_INDEX(Local_753[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
												Local_753[iVar0 /*33*/].f_5++;
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/].f_20))
											{
												if (Local_753[iVar0 /*33*/].f_2 == 4)
												{
													TASK::TASK_PLAY_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												else
												{
													TASK::TASK_PLAY_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_753[iVar0 /*33*/], true, 1);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[iVar0 /*33*/], false, false);
												Local_753[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 1:
										break;
								}
								break;
							
							case 2:
								if (Local_753[iVar0 /*33*/].f_5 < 7)
								{
									func_103(Local_753[iVar0 /*33*/], &(Local_753[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									ENTITY::SET_ENTITY_ANIM_SPEED(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									ENTITY::SET_ENTITY_ANIM_SPEED(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/].f_20))
								{
									if (Local_753[iVar0 /*33*/].f_5 > 2 && Local_753[iVar0 /*33*/].f_5 <= 6)
									{
										if (ENTITY::IS_ENTITY_ATTACHED(Local_753[iVar0 /*33*/].f_20))
										{
											Local_753[iVar0 /*33*/].f_12 = (func_102(ENTITY::GET_ENTITY_COORDS(Local_753[iVar0 /*33*/], true), Local_753[iVar0 /*33*/].f_6, 1) - ENTITY::GET_ENTITY_HEADING(Local_753[iVar0 /*33*/]));
											Local_753[iVar0 /*33*/].f_12 = func_101((Local_753[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!PED::IS_PED_RAGDOLL(Local_753[iVar0 /*33*/]))
											{
												ENTITY::SET_ENTITY_HEADING(Local_753[iVar0 /*33*/], (ENTITY::GET_ENTITY_HEADING(Local_753[iVar0 /*33*/]) + (SYSTEM::TIMESTEP() * Local_753[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/].f_20))
										{
											if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_753[iVar0 /*33*/].f_20) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_753[iVar0 /*33*/].f_20))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_753[iVar0 /*33*/].f_20, Local_753[iVar0 /*33*/], PED::GET_PED_BONE_INDEX(Local_753[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
												func_32(20, 0);
												Local_753[iVar0 /*33*/].f_5++;
											}
										}
									
									case 1:
										if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/].f_20))
										{
											if (func_73(Local_753[iVar0 /*33*/], 2495.7786f, 5004.715f, 43.873367f, 1) < 99f)
											{
												if (Local_753[iVar0 /*33*/].f_2 == 4)
												{
													TASK::TASK_PLAY_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												else
												{
													TASK::TASK_PLAY_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[iVar0 /*33*/], false, false);
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_753[iVar0 /*33*/], true, 1);
												Local_753[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_753[iVar0 /*33*/].f_6 = { 2466.9026f, 4996.254f, 45.5443f };
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_753[iVar0 /*33*/], Local_753[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											Local_753[iVar0 /*33*/].f_6 = { 2461.3323f, 4998.94f, 45.359f };
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_753[iVar0 /*33*/], Local_753[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											Local_753[iVar0 /*33*/].f_6 = { 2455.9841f, 4997.4043f, 45.2645f };
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 5:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_753[iVar0 /*33*/], Local_753[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											if (Local_753[iVar0 /*33*/].f_2 == 5)
											{
												Local_753[iVar0 /*33*/].f_6 = { 2452.0906f, 4993.674f, 45.1404f };
												Local_753[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_753[iVar0 /*33*/].f_6 = { 2454.0906f, 4995.674f, 45.1404f };
												Local_753[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 6:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_753[iVar0 /*33*/], Local_753[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												TASK::STOP_ANIM_TASK(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												TASK::STOP_ANIM_TASK(Local_753[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_753[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/].f_20))
											{
												ENTITY::DETACH_ENTITY(Local_753[iVar0 /*33*/].f_20, false, true);
											}
											if (func_74(iLocal_2505))
											{
												if (Local_753[iVar0 /*33*/].f_2 == 4)
												{
													PED::SET_PED_MOVEMENT_CLIPSET(Local_753[iVar0 /*33*/], "move_m@gangster@var_e", 0.25f);
													TASK::TASK_ENTER_VEHICLE(Local_753[iVar0 /*33*/], iLocal_2505, -1, -1, 1f, 1, 0);
													func_105(func_18(6), 14, 0, 0);
													func_105(func_18(7), 33, 0, 0);
												}
												else
												{
													PED::SET_PED_MOVEMENT_CLIPSET(Local_753[iVar0 /*33*/], "move_m@gangster@var_f", 0.25f);
													TASK::TASK_ENTER_VEHICLE(Local_753[iVar0 /*33*/], iLocal_2505, -1, 0, 1f, 1, 0);
												}
											}
											Local_753[iVar0 /*33*/].f_5++;
											Local_753[iVar0 /*33*/].f_14 = 0;
											Local_753[iVar0 /*33*/].f_15 = 0;
										}
										break;
									
									case 7:
										func_100(iVar0);
										if (PED::IS_PED_IN_ANY_VEHICLE(Local_753[iVar0 /*33*/], false))
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_753[iVar0 /*33*/], false, 1);
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										if (func_74(iLocal_2505))
										{
											if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2505, -1, false))
											{
												if (Local_753[iVar0 /*33*/].f_2 == 4)
												{
													if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2505, 0, false))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!PED::IS_PED_INJURED(Local_753[iVar1 /*33*/]))
															{
																if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_753[iVar1 /*33*/]))
																{
																	func_99();
																	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_2505, 2367.6677f, 5098.6445f, 46.8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_2505, 19f, 786599);
																	func_98(&(Local_753[iVar0 /*33*/]), 0);
																	func_97(25, 1);
																	Local_753[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2505, 0, false))
											{
												if (Local_753[iVar0 /*33*/].f_2 == 5)
												{
													Local_753[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									
									case 9:
										break;
								}
								break;
							
							case 5:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2459.6462f, 4977.7354f, 50.5678f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2456.221f, 4974.685f, 50.5678f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_PED_SLIDE_TO_COORD(0, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 0.75f);
										TASK::TASK_ACHIEVE_HEADING(0, 92.5678f, 0);
										func_98(&(Local_753[iVar0 /*33*/]), 0);
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
										{
											func_105(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_105(iVar2, 7, 0, 9000);
											}
										}
										break;
									
									case 2:
										func_99();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2450.4912f, 4986.8296f, 50.5677f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_ACHIEVE_HEADING(0, 309.5567f, 0);
										TASK::TASK_PAUSE(0, 2000);
										func_98(&(Local_753[iVar0 /*33*/]), 0);
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 3:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
										{
											Local_753[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 6:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) == 7 && Local_753[iVar0 /*33*/].f_5 > 1)
								{
									Local_753[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										WEAPON::SET_CURRENT_PED_WEAPON(Local_753[iVar0 /*33*/], joaat("WEAPON_UNARMED"), true);
										TASK::TASK_ACHIEVE_HEADING(Local_753[iVar0 /*33*/], 219f, 1500);
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_ACHIEVE_HEADING")) == 7)
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_753[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 32:
								if (!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
								{
									if (Local_753[iVar0 /*33*/].f_1 == 1 || func_4(PLAYER::PLAYER_PED_ID(), Local_753[iVar0 /*33*/], 1) < 20f)
									{
										func_103(Local_753[iVar0 /*33*/], &(Local_753[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
									}
									if (Local_753[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_753[iVar0 /*33*/].f_5)
									{
										case 0:
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_753[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_753[iVar0 /*33*/].f_14, false);
											Local_753[iVar0 /*33*/].f_5++;
											break;
										
										case 1:
											if (func_4(PLAYER::PLAYER_PED_ID(), Local_753[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar3 == 0)
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_753[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
												else if (iVar3 == 1)
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_753[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
												else
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_753[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
												Local_753[iVar0 /*33*/].f_5++;
												Local_753[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
											}
											break;
										
										case 2:
											if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14)
											{
												Local_753[iVar0 /*33*/].f_5 = 1;
											}
											break;
										
										case 10:
											if (func_35("CHI2_hear", 8, Local_753[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_753[iVar0 /*33*/].f_5++;
												Local_753[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 1000;
											}
											break;
										
										case 11:
											if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14)
											{
												TASK::TASK_TURN_PED_TO_FACE_COORD(Local_753[iVar0 /*33*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5000);
												Local_753[iVar0 /*33*/].f_5++;
												Local_753[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 5000;
											}
											break;
										
										case 12:
											if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_753[iVar0 /*33*/]) && func_73(Local_753[iVar0 /*33*/], 2448.0027f, 4982.305f, 45.8519f, 1) < 10f)
											{
												if (MISC::GET_GAME_TIMER() > (Local_753[iVar0 /*33*/].f_14 - 3000))
												{
													TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_753[iVar0 /*33*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1f, 20000, 0.25f, 0, 40000f);
													Local_753[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_753[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_753[iVar0 /*33*/].f_5++;
												}
											}
											break;
										
										case 13:
											func_99();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2449.1138f, 4981.984f, 45.8102f, 1f, 20000, 0.25f, 0, 40000f);
											TASK::TASK_ACHIEVE_HEADING(0, 127.6328f, 3000);
											func_98(&(Local_753[iVar0 /*33*/]), 0);
											Local_753[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 3000;
											Local_753[iVar0 /*33*/].f_5++;
											break;
										
										case 14:
											if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14 || TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
											{
												Local_753[iVar0 /*33*/].f_5 = 0;
											}
											break;
										
										case 15:
											if (func_35("CHI2_hear", 8, Local_753[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_753[iVar0 /*33*/].f_5++;
											}
											break;
										
										case 16:
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
											{
												Local_753[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 3000;
												Local_753[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							
							case 33:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_753[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 3000;
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14)
										{
											if (func_74(iLocal_2505))
											{
												TASK::TASK_ENTER_VEHICLE(Local_753[iVar0 /*33*/], iLocal_2505, 20000, 1, 1f, 1, 0);
												Local_753[iVar0 /*33*/].f_5++;
												Local_753[iVar0 /*33*/].f_14 = 0;
												Local_753[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									
									case 2:
										func_100(iVar0);
										break;
								}
								break;
							
							case 7:
								if (Local_753[iVar0 /*33*/].f_1 == 1 || func_4(PLAYER::PLAYER_PED_ID(), Local_753[iVar0 /*33*/], 1) < 20f)
								{
									func_103(Local_753[iVar0 /*33*/], &(Local_753[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
								}
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("WEAPON_UNARMED");
										if (WEAPON::GET_CURRENT_PED_WEAPON(Local_753[iVar0 /*33*/], &iVar4, true))
										{
											TASK::TASK_SWAP_WEAPON(Local_753[iVar0 /*33*/], false);
										}
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (!WEAPON::GET_CURRENT_PED_WEAPON(Local_753[iVar0 /*33*/], &iVar4, true))
										{
											func_99();
											if (iVar0 == 1)
											{
												if (!PED::IS_PED_INJURED(Local_753[2 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_753[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!PED::IS_PED_INJURED(Local_753[1 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_753[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!PED::IS_PED_INJURED(Local_753[7 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_753[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!PED::IS_PED_INJURED(Local_753[6 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_753[6 /*33*/], 2000);
												}
											}
											if (Local_753[iVar0 /*33*/].f_14 != 0)
											{
												TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_753[iVar0 /*33*/].f_14, false);
											}
											else
											{
												TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
											}
											func_98(&(Local_753[iVar0 /*33*/]), 0);
											Local_753[iVar0 /*33*/].f_5++;
											Local_753[iVar0 /*33*/].f_15 = MISC::GET_GAME_TIMER() + 15000;
										}
										break;
									
									case 2:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_15)
										{
											TASK::CLEAR_PED_TASKS(Local_753[iVar0 /*33*/]);
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
										{
											if (Local_753[iVar0 /*33*/].f_4 == 5)
											{
												TASK::TASK_SWAP_WEAPON(Local_753[iVar0 /*33*/], true);
												Local_753[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_753[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 4:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_SWAP_WEAPON")) == 7)
										{
											if (Local_753[iVar0 /*33*/].f_4 == 5)
											{
												func_105(iVar0, Local_753[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_105(iVar0, Local_753[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							
							case 13:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_753[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, false);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[iVar0 /*33*/], false, false);
										Local_753[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 14:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_753[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, false);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[iVar0 /*33*/], false, false);
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) == 7)
										{
											Local_753[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 15:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_753[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, false);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[iVar0 /*33*/], false, false);
										Local_753[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 16:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_753[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, false);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_753[iVar0 /*33*/], false, false);
										Local_753[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 17:
								if (Local_753[iVar0 /*33*/].f_5 < 10)
								{
									if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_753[iVar0 /*33*/]))
									{
										Local_753[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										STREAMING::REQUEST_ANIM_DICT("misscarsteal2peeing");
										Local_753[iVar0 /*33*/].f_5++;
										Local_753[iVar0 /*33*/].f_14 = 0;
										break;
									
									case 1:
										if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2peeing"))
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_753[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, true);
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 2:
										if (func_4(PLAYER::PLAYER_PED_ID(), Local_753[iVar0 /*33*/], 1) < 21.6f)
										{
											TASK::TASK_PLAY_ANIM(Local_753[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0f, false, false, false);
											Local_753[iVar0 /*33*/].f_5++;
											Local_753[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 23000;
										}
										break;
									
									case 3:
										if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14)
										{
											Local_753[iVar0 /*33*/].f_14 = -1;
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_753[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, true);
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 18:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2434.891f, 4973.864f, 50.5679f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_BINOCULARS", 0, false);
										func_98(&(Local_753[iVar0 /*33*/]), 0);
										Local_753[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 25:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_753[iVar0 /*33*/].f_2)
										{
											case 12:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2433.04f, 4967.87f, 46.28f, 0.8f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0);
													Local_753[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 13:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2432.56f, 4968.38f, 46.27f, 0.8f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0);
													Local_753[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 14:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2433.12f, 4965.59f, 46.27f, 0.8f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0);
													Local_753[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 15:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2439.61f, 4960.99f, 46.27f, 0.4f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0);
													Local_753[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 16:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2440.16f, 4962.99f, 46.27f, 0.4f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0);
													Local_753[iVar0 /*33*/].f_5++;
												}
												break;
											
											case 17:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2438.23f, 4962.25f, 46.27f, 0.4f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_753[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0);
													Local_753[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) == 7)
										{
											Local_753[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							
							case 28:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_753[iVar0 /*33*/]) || (func_96(ENTITY::GET_ENTITY_COORDS(Local_753[iVar0 /*33*/], true), 1f, 1120403456) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2448.5833f, 4969.292f, 45.185604f, 2439.5383f, 4978.061f, 46.827618f, 5.75f, false, true, 0)))
										{
											TASK::TASK_HANDS_UP(Local_753[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_753[iVar0 /*33*/].f_5 = 2;
										}
										break;
									
									case 2:
										if (func_35("WRK1", 1, Local_753[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_753[iVar0 /*33*/]) || (func_96(ENTITY::GET_ENTITY_COORDS(Local_753[iVar0 /*33*/], true), 1f, 1120403456) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2448.5833f, 4969.292f, 45.185604f, 2439.5383f, 4978.061f, 46.827618f, 5.75f, false, true, 0)))
										{
											if (func_35("TRV1", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_753[iVar0 /*33*/].f_5++;
												Local_753[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 2000;
											}
										}
										else
										{
											Local_753[iVar0 /*33*/].f_5++;
											Local_753[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 2000;
										}
										break;
									
									case 4:
										if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14)
										{
											TASK::TASK_SMART_FLEE_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 200f, 200000, false, false);
											PED::SET_PED_KEEP_TASK(Local_753[iVar0 /*33*/], true);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[iVar0 /*33*/]));
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 30:
								if (!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
								{
									if (Local_753[iVar0 /*33*/].f_5 < 8)
									{
										if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_753[iVar0 /*33*/], 0, 2))
										{
											if (!WEAPON::HAS_PED_GOT_WEAPON(Local_753[iVar0 /*33*/], 0, 2))
											{
												WEAPON::GIVE_WEAPON_TO_PED(Local_753[iVar0 /*33*/], joaat("WEAPON_PISTOL"), -1, false, true);
												TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
												func_94();
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[iVar0 /*33*/], false);
												TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[iVar0 /*33*/], iLocal_1614);
												Local_753[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
										WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SAWNOFFSHOTGUN"), 31, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[iVar0 /*33*/], true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[iVar0 /*33*/], iLocal_1614);
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 1:
										if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze") && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SAWNOFFSHOTGUN")))
										{
											if (!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
											{
												iLocal_2873 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2873, true);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_753[iVar0 /*33*/], iLocal_2873, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1000f, 0);
												if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2876))
												{
													iLocal_2876 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_SAWNOFFSHOTGUN"), 40, 2433.59f, 4969.7f, 42.1854f, true, 1f, 0, 0, 1);
													ENTITY::SET_ENTITY_ROTATION(iLocal_2876, 90f, 0f, 0f, 2, true);
												}
												TASK::TASK_LOOK_AT_ENTITY(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
												Local_753[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 2:
										if ((iLocal_2509 == 4 || iLocal_2509 == 5) || iLocal_2509 == 6)
										{
											if (func_93(11))
											{
												Local_753[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_2509 > 6)
										{
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										iLocal_2872 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_753[iVar0 /*33*/], iLocal_2872, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1000f, 0);
										TASK::TASK_LOOK_AT_ENTITY(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 4:
										if (func_35("CHI2_DALE", 4, Local_753[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_753[iVar0 /*33*/].f_5++;
										}
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2872) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2872) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2872))
										{
											Local_753[iVar0 /*33*/].f_5 = 5;
										}
										break;
									
									case 5:
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2872) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2872) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2872))
										{
											iLocal_2871 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2871, true);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_753[iVar0 /*33*/], iLocal_2871, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1000f, 0);
											Local_753[iVar0 /*33*/].f_5++;
											Local_753[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
										}
										break;
									
									case 6:
										if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2874) || iLocal_2874 == 0)
										{
											if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14)
											{
												iLocal_2874 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_753[iVar0 /*33*/], iLocal_2874, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1000f, 0);
												}
												else
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_753[iVar0 /*33*/], iLocal_2874, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1000f, 0);
												}
											}
										}
										if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2871) || iLocal_2871 == 0)
										{
											if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2874) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2874) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2874))
											{
												iLocal_2871 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2871, true);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_753[iVar0 /*33*/], iLocal_2871, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1000f, 0);
												Local_753[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
											}
										}
										if (!func_65() || (func_73(PLAYER::PLAYER_PED_ID(), 2430.09f, 4965.93f, 41.55f, 1) > 3.438f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2427.0789f, 4964.9707f, 41.811687f, 2432.5889f, 4959.331f, 48.754795f, 3.3125f, false, true, 0)))
										{
											func_91();
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_753[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 8:
										iLocal_2875 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_753[iVar0 /*33*/], iLocal_2875, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1000f, 0);
										WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_2876, Local_753[iVar0 /*33*/]);
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 9:
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2875) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2875) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2875))
										{
											PED::SET_PED_TARGET_LOSS_RESPONSE(Local_753[iVar0 /*33*/], 1);
											TASK::CLEAR_PED_TASKS(Local_753[iVar0 /*33*/]);
											TASK::TASK_AIM_GUN_AT_ENTITY(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), -1, true);
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 10:
										if (!func_65())
										{
											if (func_35("CHI2_DALEA", 4, Local_753[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[iVar0 /*33*/], false);
												TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
												Local_753[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
												Local_753[iVar0 /*33*/].f_15 = 0;
												Local_753[iVar0 /*33*/].f_5++;
											}
										}
										break;
									
									case 11:
										if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14)
										{
											if (Local_753[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_753[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_753[iVar0 /*33*/].f_5++;
													Local_753[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
													Local_753[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_753[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							
							case 31:
								if (!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
								{
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_753[iVar0 /*33*/], true), 2f, true))
									{
										Local_753[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										if (func_90("FRMFLC", 0, 0))
										{
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 1:
										if (func_35("WRK2", 1, Local_753[iVar0 /*33*/], "oneilcook", 2, PLAYER::PLAYER_PED_ID(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_753[iVar0 /*33*/].f_5++;
											Local_753[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 1300;
										}
										break;
									
									case 2:
										if (MISC::GET_GAME_TIMER() > Local_753[iVar0 /*33*/].f_14)
										{
											TASK::TASK_HANDS_UP(Local_753[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 3:
										if (!func_65())
										{
											Local_753[iVar0 /*33*/].f_5++;
										}
										break;
									
									case 4:
										if (!func_65())
										{
											func_105(iVar0, 27, 0, 0);
										}
										break;
									
									case 5:
										TASK::TASK_SMART_FLEE_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 50f, 1000, false, false);
										Local_753[iVar0 /*33*/].f_5++;
										break;
									
									case 6:
										if (func_88("WRK2"))
										{
											if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1 || AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 5)
											{
												func_87(0);
											}
											else
											{
												func_87(1);
											}
										}
										func_105(iVar0, 27, 0, 0);
										break;
								}
								break;
							
							case 27:
								switch (Local_753[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
										TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, 999999, false, false);
										TASK::TASK_COWER(0, -1);
										func_98(&(Local_753[iVar0 /*33*/]), 0);
										PED::SET_PED_KEEP_TASK(Local_753[iVar0 /*33*/], true);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[iVar0 /*33*/]));
										if (HUD::DOES_BLIP_EXIST(Local_753[iVar0 /*33*/].f_19))
										{
											HUD::REMOVE_BLIP(&(Local_753[iVar0 /*33*/].f_19));
										}
										Local_753[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							
							case 4:
								if (iLocal_2879 == 1)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_753[iVar0 /*33*/].f_14))
									{
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_753[iVar0 /*33*/].f_14, 0.69f);
									}
									if (iVar0 == 9)
									{
										iLocal_2879 = 0;
									}
								}
								if (iLocal_2880 == 1)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_753[iVar0 /*33*/].f_14))
									{
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_753[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_2880 = 0;
									}
									Local_753[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_753[iVar0 /*33*/].f_2 == 8)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_753[iVar0 /*33*/].f_14))
									{
										if (Local_753[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_2509 == 3)
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
												{
													if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_753[iVar0 /*33*/].f_14) > 0.024f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_753[iVar0 /*33*/].f_14) < 0.033f)
													{
														iVar5 = 0;
														if (!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
														{
															iVar6 = joaat("WEAPON_UNARMED");
															if (WEAPON::GET_CURRENT_PED_WEAPON(Local_753[iVar0 /*33*/], &iVar6, true))
															{
																PED::SET_PED_ACCURACY(Local_753[iVar0 /*33*/], 100);
																if (iVar6 == joaat("WEAPON_PISTOL"))
																{
																	if (func_86(&iVar5))
																	{
																		WEAPON::SET_AMMO_IN_CLIP(Local_753[iVar0 /*33*/], joaat("WEAPON_PISTOL"), 12);
																		PED::SET_PED_SHOOTS_AT_COORD(Local_753[iVar0 /*33*/], ENTITY::GET_ENTITY_COORDS(iLocal_2655[iVar5], true), false);
																		func_103(Local_753[iVar0 /*33*/], &(Local_753[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
																		Local_753[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		WEAPON::SET_AMMO_IN_CLIP(Local_753[iVar0 /*33*/], joaat("WEAPON_PISTOL"), 12);
																		PED::SET_PED_SHOOTS_AT_COORD(Local_753[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, false);
																		func_103(Local_753[iVar0 /*33*/], &(Local_753[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0, 0);
																		Local_753[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_753[iVar0 /*33*/].f_5 == 1)
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_753[iVar0 /*33*/].f_14) > 0.04f)
											{
												Local_753[iVar0 /*33*/].f_5 = 2;
												if (iLocal_2877 == 0)
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_753[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
											}
										}
										else if (Local_753[iVar0 /*33*/].f_5 == 2)
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_753[iVar0 /*33*/].f_14) > 0.6f)
											{
												Local_753[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_753[iVar0 /*33*/].f_5 == 3)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[iVar0 /*33*/], joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7)
									{
										func_105(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				
				case 5:
				case 6:
					if (Local_1617[iVar0 /*24*/].f_20)
					{
						switch (Local_753[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_1617[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], 2431.704f, 4961.6196f, 45.331356f, 2455.3765f, 4985.9336f, 48.68555f, 13.5625f, false, false);
										TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_753[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_753[iVar0 /*33*/], 50, true);
										Local_1617[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 17:
								switch (Local_1617[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], 2431.704f, 4961.6196f, 45.331356f, 2455.3765f, 4985.9336f, 48.68555f, 13.5625f, false, false);
										TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_753[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_753[iVar0 /*33*/], 50, true);
										Local_1617[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 15:
								switch (Local_1617[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], 2437.982f, 4959.021f, 45.310574f, 2432.93f, 4961.9414f, 48.692562f, 3.1875f, false, false);
										TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_753[iVar0 /*33*/], 1);
										Local_1617[iVar0 /*24*/].f_4++;
										break;
									
									case 2:
										if (func_93(18))
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], false);
											Local_1617[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_1617[iVar0 /*24*/].f_4)
								{
									case 1:
										TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_753[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_753[iVar0 /*33*/], 50, true);
										if (iLocal_1612 == 0)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], false);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], 2451.6775f, 4954.2515f, 44.988f, 3f, false, false);
											iLocal_1612++;
											Local_1617[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_1617[iVar0 /*24*/].f_4 = (MISC::GET_GAME_TIMER() + iLocal_1612 * 4000);
											iLocal_1612++;
										}
										Local_753[iVar0 /*33*/].f_1 = 1;
										break;
									
									case 2:
										if (func_73(Local_753[iVar0 /*33*/], 2451.6775f, 4954.2515f, 44.988f, 1) < 3f)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], false);
											Local_1617[iVar0 /*24*/].f_4++;
										}
										break;
									
									case 3:
										break;
									
									default:
										if (MISC::GET_GAME_TIMER() > Local_1617[iVar0 /*24*/].f_4)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], false);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], 2451.6775f, 4954.2515f, 44.988f, 3f, false, false);
											Local_1617[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							
							case 1:
								switch (Local_1617[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], 2453.084f, 4969.897f, 50.442852f, 2460.9956f, 4977.822f, 53.380352f, 2.9375f, false, false);
										TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_753[iVar0 /*33*/], 1);
										Local_1617[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 0:
								switch (Local_1617[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], 2442.9634f, 4964.2173f, 50.442852f, 2449.2507f, 4970.534f, 53.380352f, 2f, false, false);
										TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_753[iVar0 /*33*/], 1);
										Local_1617[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							
							case 2:
								switch (Local_1617[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_753[iVar0 /*33*/], 2461.3623f, 4976.084f, 50.442852f, 2448.7432f, 4988.7744f, 53.601433f, 2f, false, false);
										TASK::TASK_COMBAT_PED(Local_753[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_753[iVar0 /*33*/], 1);
										Local_1617[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_86(int iParam0)//Position - 0xC475
{
	int iVar0;
	bool bVar1;
	
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2655[*iParam0]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2655[*iParam0], 2495.017f, 4970.1704f, 44.218082f, 2493.5007f, 4971.556f, 45.40248f, 1.375f, false, true, 0))
		{
			return 1;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_2655)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return 0;
		}
	}
	return 0;
}

void func_87(bool bParam0)//Position - 0xC50E
{
	iLocal_3489 = 0;
	if (bParam0)
	{
		func_91();
	}
	else
	{
		func_94();
	}
}

int func_88(char* sParam0)//Position - 0xC52A
{
	struct<6> Var0;
	
	Var0 = { func_89() };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_89()//Position - 0xC54A
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21845 == 4)
	{
		return Global_21464;
	}
	return Var0;
}

bool func_90(char* sParam0, int iParam1, char* sParam2)//Position - 0xC56E
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_91()//Position - 0xC58C
{
	Global_20711 = 0;
	func_92();
}

void func_92()//Position - 0xC59C
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

int func_93(int iParam0)//Position - 0xC5C0
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3118[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_3118.f_0)
	{
		if (Local_3118[iVar0 /*8*/] == iParam0)
		{
			if (Local_3118[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_3118[iVar0 /*8*/] != 0)
		{
		}
	}
	return 0;
}

void func_94()//Position - 0xC610
{
	Global_20711 = 0;
	func_95();
}

void func_95()//Position - 0xC620
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22856 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21845 = 6;
	}
}

int func_96(struct<3> Param0, float fParam3, float fParam4)//Position - 0xC641
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

int func_97(int iParam0, int iParam1)//Position - 0xC689
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3118.f_0)
	{
		if (iParam0 == Local_3118[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_3118[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_3118[iVar0 /*8*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_98(int iParam0, bool bParam1)//Position - 0xC6D3
{
	if (bParam1)
	{
		TASK::SET_SEQUENCE_TO_REPEAT(iLocal_255, true);
	}
	TASK::CLOSE_SEQUENCE_TASK(iLocal_255);
	if (!PED::IS_PED_DEAD_OR_DYING(*iParam0, true))
	{
		TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_255);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_255);
}

void func_99()//Position - 0xC708
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_255);
}

void func_100(int iParam0)//Position - 0xC716
{
	Local_753[iParam0 /*33*/].f_15 = (Local_753[iParam0 /*33*/].f_15 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
	switch (Local_753[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_753[iParam0 /*33*/].f_15 > 2000 && !BitTest(Local_753[iParam0 /*33*/].f_14, 0))
			{
				TASK::TASK_LOOK_AT_COORD(Local_753[iParam0 /*33*/], 2505.6335f, 4996.9937f, 46.6624f, 4000, 0, 2);
				MISC::SET_BIT(&(Local_753[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_753[iParam0 /*33*/].f_15 > 8000 && !BitTest(Local_753[iParam0 /*33*/].f_14, 1))
			{
				TASK::TASK_LOOK_AT_COORD(Local_753[iParam0 /*33*/], 2472.2966f, 4962.6865f, 47.2297f, 6000, 0, 2);
				MISC::SET_BIT(&(Local_753[iParam0 /*33*/].f_14), 1);
			}
			break;
		
		case 5:
			if (Local_753[iParam0 /*33*/].f_15 > 3000 && !BitTest(Local_753[iParam0 /*33*/].f_14, 0))
			{
				if (!PED::IS_PED_INJURED(Local_753[6 /*33*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_753[iParam0 /*33*/], Local_753[6 /*33*/], 4000, 0, 2);
					MISC::SET_BIT(&(Local_753[iParam0 /*33*/].f_14), 0);
				}
			}
			else if (Local_753[iParam0 /*33*/].f_15 > 11000 && !BitTest(Local_753[iParam0 /*33*/].f_14, 1))
			{
				TASK::TASK_LOOK_AT_COORD(Local_753[iParam0 /*33*/], 2494.6335f, 5001.9937f, 46.6624f, 7000, 0, 2);
				MISC::SET_BIT(&(Local_753[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_753[iParam0 /*33*/].f_15 > 20000 && !BitTest(Local_753[iParam0 /*33*/].f_14, 2))
			{
				TASK::TASK_LOOK_AT_COORD(Local_753[iParam0 /*33*/], 2477.6335f, 4966.9937f, 46.6624f, 7000, 0, 2);
				MISC::SET_BIT(&(Local_753[iParam0 /*33*/].f_14), 2);
			}
			break;
		
		case 4:
			if (Local_753[iParam0 /*33*/].f_15 > 3000 && !BitTest(Local_753[iParam0 /*33*/].f_14, 0))
			{
				TASK::TASK_LOOK_AT_COORD(Local_753[iParam0 /*33*/], 2505.6335f, 4996.9937f, 46.6624f, 5000, 0, 2);
				MISC::SET_BIT(&(Local_753[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_753[iParam0 /*33*/].f_15 > 10000 && !BitTest(Local_753[iParam0 /*33*/].f_14, 1))
			{
				TASK::TASK_LOOK_AT_COORD(Local_753[iParam0 /*33*/], 2461.4495f, 4977.4805f, 51.7483f, 6000, 0, 2);
				MISC::SET_BIT(&(Local_753[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_753[iParam0 /*33*/].f_15 > 18000 && !BitTest(Local_753[iParam0 /*33*/].f_14, 2))
			{
				TASK::TASK_LOOK_AT_COORD(Local_753[iParam0 /*33*/], 2505.6335f, 4996.9937f, 46.6624f, 6000, 0, 2);
				MISC::SET_BIT(&(Local_753[iParam0 /*33*/].f_14), 2);
			}
			break;
	}
}

float func_101(float fParam0, float fParam1, float fParam2)//Position - 0xC9EC
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_102(struct<2> Param0, float fParam2, struct<2> Param3, float fParam5, int iParam6)//Position - 0xCA13
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

int func_103(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)//Position - 0xCA78
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
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && iParam11)
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
		if (!iParam9 == -1 || iParam12)
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

void func_104(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0xCC6C
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, fParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, fParam5);
		PED::SET_PED_ID_RANGE(iParam0, fParam6);
		PED::SET_COMBAT_FLOAT(iParam0, 10, fParam7);
	}
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCCBA
{
	if (!PED::IS_PED_INJURED(Local_753[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_753[iParam0 /*33*/].f_4 = Local_753[iParam0 /*33*/].f_3;
			Local_753[iParam0 /*33*/].f_3 = iParam1;
			Local_753[iParam0 /*33*/].f_5 = iParam2;
			Local_753[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_753[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_753[iParam0 /*33*/].f_12 = 0f;
			Local_753[iParam0 /*33*/].f_13 = 0f;
			Local_753[iParam0 /*33*/].f_14 = iParam3;
			Local_753[iParam0 /*33*/].f_15 = 0;
			Local_1617[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_106(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCD4E
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_20 = iParam4;
	(iParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_50)
	{
		iLocal_50 = iParam1 + 1;
	}
}

int func_107(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, bool bParam7, int iParam8)//Position - 0xCD89
{
	int iVar0;
	
	iParam1 = iParam1;
	iParam8 = iParam8;
	if (Local_753[iParam0 /*33*/].f_1 != 1 && Local_753[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_749)
	{
		case 0:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 1:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 2:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 3:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 4:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		
		case 5:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 6:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 7:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 8:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		
		case 9:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		
		case 10:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		
		case 11:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		
		case 12:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		
		case 13:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 14:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 15:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		
		case 16:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		
		case 17:
			Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam5, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_753[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_749 > 17)
	{
		Local_753[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam5, true, true);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_753[iParam0 /*33*/], 0);
	}
	iLocal_749++;
	if (Local_753[iParam0 /*33*/].f_1 == 5)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[iParam0 /*33*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[iParam0 /*33*/], iLocal_1615);
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_753[iParam0 /*33*/], iParam6, 3000, bParam7, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[iParam0 /*33*/], iLocal_1614);
		PED::SET_PED_AS_ENEMY(Local_753[iParam0 /*33*/], true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_753[iParam0 /*33*/], 9, true);
		PED::SET_PED_HEARING_RANGE(Local_753[iParam0 /*33*/], 120f);
		PED::SET_PED_SEEING_RANGE(Local_753[iParam0 /*33*/], 22f);
		PED::SET_PED_ID_RANGE(Local_753[iParam0 /*33*/], 22f);
		PED::SET_PED_CONFIG_FLAG(Local_753[iParam0 /*33*/], 118, false);
		PED::SET_COMBAT_FLOAT(Local_753[iParam0 /*33*/], 14, 3f);
		if (Local_753[iParam0 /*33*/].f_1 == 2)
		{
			PED::SET_PED_ACCURACY(Local_753[iParam0 /*33*/], 12);
		}
		else
		{
			PED::SET_PED_ACCURACY(Local_753[iParam0 /*33*/], 45);
		}
		PED::SET_PED_DIES_WHEN_INJURED(Local_753[iParam0 /*33*/], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_753[iParam0 /*33*/], true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_753[iParam0 /*33*/], 15, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_753[iParam0 /*33*/], 17, false);
		func_108(Local_753[iParam0 /*33*/], 1);
	}
	PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_753[iParam0 /*33*/]);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_753[iParam0 /*33*/], true);
	PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Local_753[iParam0 /*33*/], 0f, 0f, 0f);
	PED::SET_PED_SHOULD_IGNORE_SCENARIO_NAV_CHECKS(Local_753[iParam0 /*33*/], true);
	PED::SET_PED_SHOULD_PROBE_FOR_SCENARIO_EXITS_IN_ONE_FRAME(Local_753[iParam0 /*33*/], true);
	ENTITY::SET_ENTITY_HEALTH(Local_753[iParam0 /*33*/], 150, 0);
	return 1;
}

void func_108(int iParam0, bool bParam1)//Position - 0xD5BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_63515[iVar0 /*2*/] != 0)
			{
				if (Global_63515[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_63514)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_63515[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_63515[iVar1 /*2*/] = iParam0;
	Global_63515[iVar1 /*2*/].f_1 = 7;
	Global_63514++;
}

void func_109(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, struct<3> Param11, struct<3> Param14, struct<3> Param17, struct<3> Param20, struct<3> Param23, struct<3> Param26, struct<3> Param29)//Position - 0xD656
{
	if (iLocal_50 > 0)
	{
		func_121(uParam0, Param20, Param23, Param14, Param17);
		func_113(uParam0, uParam1, Param2, Param5, Param8);
		func_110(uParam0, Param11, Param14, Param17, Param20, Param23, Param26, Param29);
	}
}

void func_110(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, struct<3> Param13, struct<3> Param16, struct<3> Param19)//Position - 0xD6B0
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		if (bLocal_75)
		{
			if (((iLocal_58 > iLocal_66 || iLocal_67 != iLocal_59) || (iLocal_58 < iLocal_66 && iLocal_58 == 8)) || (iLocal_58 == 10 && bLocal_51 == 0))
			{
				iLocal_65 = 1;
				iLocal_66 = iLocal_58;
				iLocal_67 = iLocal_59;
			}
			switch (iLocal_65)
			{
				case 1:
					if (iLocal_59 > -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_59 /*24*/], true))
						{
							switch (iLocal_58)
							{
								case 8:
									if (!bLocal_51)
									{
										if (!bLocal_54)
										{
											if (!iLocal_74)
											{
												if (!func_88(Param13.f_1))
												{
													func_94();
													if (func_111(Param13.f_1, Param13.f_2, (*uParam0)[iLocal_59 /*24*/], Param13.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_65 = 2;
													}
												}
											}
											else
											{
												iLocal_65 = 2;
											}
										}
										else if (!func_88(Param10.f_1))
										{
											func_94();
											if (func_111(Param10.f_1, Param10.f_2, (*uParam0)[iLocal_59 /*24*/], Param10.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_65 = 2;
											}
										}
									}
									else
									{
										iLocal_65 = 2;
									}
									break;
								
								case 7:
									iLocal_74 = 0;
									func_94();
									if (func_111(Param1.f_1, Param1.f_2, (*uParam0)[iLocal_59 /*24*/], Param1.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_65 = 2;
									}
									break;
								
								case 5:
									iLocal_74 = 0;
									func_94();
									if (func_111(Param16.f_1, Param16.f_2, (*uParam0)[iLocal_59 /*24*/], Param16.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_65 = 2;
									}
									break;
								
								case 3:
									if (!bLocal_51 && !iLocal_74)
									{
										func_94();
										if (func_111(Param19.f_1, Param19.f_2, (*uParam0)[iLocal_59 /*24*/], Param19.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_65 = 2;
										}
									}
									else
									{
										iLocal_65 = 2;
									}
									break;
								
								case 6:
									if (!bLocal_54)
									{
										if (((!func_88(Param4.f_1) && !func_88(Param7.f_1)) && !func_88(Param10.f_1)) && !func_88(Param13.f_1))
										{
											iLocal_74 = 0;
											func_94();
											if (func_111(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_59 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_65 = 2;
											}
										}
									}
									else
									{
										iLocal_65 = 2;
									}
									break;
								
								case 10:
								case 9:
									if (!bLocal_54)
									{
										if (((!func_88(Param4.f_1) && !func_88(Param7.f_1)) && !func_88(Param10.f_1)) && !func_88(Param13.f_1))
										{
											iLocal_74 = 0;
											func_94();
											if (func_111(Param7.f_1, Param7.f_2, (*uParam0)[iLocal_59 /*24*/], Param7.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_65 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_51)
										{
											if (func_111(Param10.f_1, Param10.f_2, (*uParam0)[iLocal_59 /*24*/], Param10.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_74 = 0;
												iLocal_65 = 2;
											}
										}
										iLocal_65 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_65 = 2;
						}
					}
					else
					{
						iLocal_65 = 2;
					}
					break;
				
				case 2:
					if (!func_65())
					{
						iLocal_65 = 0;
					}
					break;
				}
			}
	}
}

int func_111(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0xD9BD
{
	func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_112(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_112(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_112(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_112(iParam10, iParam11, sParam12);
	}
	if (!func_59())
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (func_36(&Local_87, cLocal_252, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_254 = 0;
				return 1;
			}
			else if (iLocal_253 != MISC::GET_GAME_TIMER())
			{
				iLocal_254++;
				iLocal_253 = MISC::GET_GAME_TIMER();
				if (iLocal_254 >= 10)
				{
					iLocal_254 = 0;
					return 1;
				}
			}
		}
		else
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

void func_112(int iParam0, int iParam1, char* sParam2)//Position - 0xDA6B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_76)
	{
		if (iLocal_76[iVar0] == iParam1)
		{
			func_63(&Local_87, iVar0);
			iLocal_76[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_76[iParam0] != 0)
	{
		func_63(&Local_87, iParam0);
	}
	func_62(&Local_87, iParam0, iParam1, sParam2, 0, 1);
	iLocal_76[iParam0] = iParam1;
}

void func_113(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8)//Position - 0xDAC8
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	bool bVar14;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true) && !PED::IS_PED_BEING_STEALTH_KILLED((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
							if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
									{
										PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									}
									if (!PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], false))
										{
											iVar2 = PED::GET_VEHICLE_PED_IS_USING((*uParam0)[iVar0 /*24*/]);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar2))
												{
													Var3 = { ENTITY::GET_ENTITY_VELOCITY(iVar2) };
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar2);
													ENTITY::SET_ENTITY_VELOCITY(iVar2, Var3);
													TASK::TASK_LEAVE_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], false))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = func_119((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														
														case 1:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 2:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 3:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														
														case 4:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_61;
														iLocal_61++;
														if (iLocal_61 == 2)
														{
															iLocal_61 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], false), true);
															func_99();
															if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], true))
															{
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 3000;
															break;
														
														case 1:
															func_99();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															iVar6 = func_118();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + iVar6);
															break;
														
														default:
															if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	ENTITY::SET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_62;
														iLocal_62++;
														if (iLocal_62 == 2)
														{
															iLocal_62 = 0;
														}
													}
													if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], true))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], true);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0f, false, false, false);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 1:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], true);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0f, false, false, false);
																WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], false), true);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															
															case 3:
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (func_116(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0f, false, false, false);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (func_116(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0f, false, false, false);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															
															case 4:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0f, false, false, false);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 5:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0f, false, false, false);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															
															case 6:
																if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												
												case 1:
													iLocal_60 = iVar0;
													if (func_115(iVar0, uParam0, "", Param2, Param5, Param8, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_63 == 0)
															{
																if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], true))
																{
																	Var7 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true) };
																	Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
																	fVar13 = MISC::ATAN(((Var10.f_2 - Var7.f_2) / func_4((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0)));
																	if (fVar13 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar13 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_63++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														
														case 1:
															func_99();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0f, false, false, false);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 2:
															func_99();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0f, false, false, false);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 3:
															func_99();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0f, false, false, false);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														
														case 4:
															if (bLocal_54)
															{
																if (MISC::ABSF(func_119((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID())) < 20f)
																{
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > func_114(((func_4((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > func_114(((func_4((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > func_114(((func_4((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar14 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar14 = false;
											}
										}
										if (!bVar14)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 2000;
											TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], true, 1);
											PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								
								case 2:
									if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					
					case 5:
					case 6:
						if (PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_ANY_SCENARIO((*uParam0)[iVar0 /*24*/]))
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], false), true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], false);
									PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 50, true);
									PED::SET_PED_FLEE_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 512, true);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_64 = iLocal_64;
										uLocal_68 = uLocal_68;
										TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], true, 1);
										PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

float func_114(float fParam0, float fParam1, float fParam2)//Position - 0xEBAA
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

int func_115(int iParam0, var uParam1, char* sParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, bool bParam12)//Position - 0xEBCE
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if (func_65())
				{
					if (!func_88(Param3.f_1))
					{
						func_91();
					}
				}
				if (func_111(Param3.f_1, Param3.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], true) };
					(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], true) };
				(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 5000;
			}
			break;
		
		case 2:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if ((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam1)[iParam0 /*24*/]) || iLocal_73 == 1) && func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (MISC::GET_GAME_TIMER() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1f, 20000, 0.1f, 0, 40000f);
						(uParam1[iParam0 /*24*/])->f_15 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_111(Param9.f_1, Param9.f_2, (*uParam1)[iParam0 /*24*/], Param9.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam12)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_ACHIEVE_HEADING((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		
		case 3:
			func_99();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_98(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1) && TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], joaat("SCRIPT_TASK_ACHIEVE_HEADING")) == 7))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sParam2, ""))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE((*uParam1)[iParam0 /*24*/], sParam2, 0, true);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_60 = -1;
			}
			break;
		
		case 5:
			if (func_111(Param3.f_1, Param6.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		
		case 6:
			if (func_73((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
			{
				if (!PED::IS_PED_INJURED((*uParam1)[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[iParam0 /*24*/]);
					func_99();
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_98(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

int func_116(int iParam0, var uParam1, bool bParam2)//Position - 0xF032
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar1 = 1000f;
	iVar3 = -1;
	if (!PED::IS_PED_DEAD_OR_DYING((*uParam1)[iParam0 /*24*/], true))
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (PED::IS_PED_DEAD_OR_DYING((*uParam1)[iVar0 /*24*/], true) && ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0 /*24*/]))
			{
				fVar2 = func_4((*uParam1)[iVar0 /*24*/], (*uParam1)[iParam0 /*24*/], 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar3 == -1)
		{
			return 0;
		}
		else
		{
			(uParam1[iParam0 /*24*/])->f_18 = func_119((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/]);
			if (MISC::ABSF((uParam1[iParam0 /*24*/])->f_18) > 20f)
			{
				if (bParam2)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, (*uParam1)[iVar3 /*24*/], 0);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 0);
				}
				(uParam1[iParam0 /*24*/])->f_18 = func_117((*uParam1)[iParam0 /*24*/], (*uParam1)[iVar3 /*24*/], 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_117(int iParam0, int iParam1, int iParam2)//Position - 0xF124
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	return func_102(Var0, Var3, iParam2);
}

int func_118()//Position - 0xF150
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = -1;
	TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "reaction_forward_big_intro_a", 4f, -2f, 1400, 0, 0f, false, false, false);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(1100, 1800);
		iVar4 = (iVar4 + iVar3);
		if (iVar2 == iVar1)
		{
			iVar2++;
			if (iVar2 > 2)
			{
				iVar2 = 0;
			}
		}
		iVar1 = iVar2;
		switch (iVar2)
		{
			case 0:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@left", "reaction_left_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
			
			case 1:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@right", "reaction_right_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
			
			case 2:
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				switch (iVar2)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_a", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_b", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_intro@backward", "reaction_backward_big_intro_c", 4f, -2f, iVar3, 0, 0f, false, false, false);
						break;
				}
				break;
		}
		iVar0++;
	}
	return iVar4;
}

float func_119(int iParam0, int iParam1)//Position - 0xF33F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return func_120(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false));
	}
	return 0f;
}

float func_120(int iParam0, struct<3> Param1)//Position - 0xF36C
{
	float fVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			fVar0 = func_102(ENTITY::GET_ENTITY_COORDS(iParam0, false), Param1, 1);
			return (fVar0 - ENTITY::GET_ENTITY_HEADING(iParam0));
		}
	}
	return 0f;
}

void func_121(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, struct<2> Param7, var uParam9, struct<2> Param10, var uParam12)//Position - 0xF3AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	int iVar17;
	
	if (!bLocal_51 == 1)
	{
		bLocal_256 = false;
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_257 == 0)
			{
				iLocal_257 = iVar1;
			}
			if (iVar1 < iLocal_257)
			{
				iLocal_257 = iVar1;
				bLocal_256 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_56 /*24*/], true))
			{
				if ((uParam0[iLocal_56 /*24*/])->f_3 > 3 && (uParam0[iLocal_56 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
						{
							if (iVar0 != iLocal_56)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_56 /*24*/], 1) < 8f)
									{
										if ((INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_56 /*24*/]) != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) != 0) || (INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_56 /*24*/]) == 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) == 0))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true) };
											Var6 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iLocal_56 /*24*/], false) };
											if (MISC::ABSF((Var3.f_2 - Var6.f_2)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_56;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar9 = 10f;
					fVar10 = 11f;
					(uParam0[iLocal_56 /*24*/])->f_22 = -1;
					(uParam0[iLocal_56 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_56)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*24*/]))
							{
								fVar11 = func_4((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_56 /*24*/], 1);
								if (fVar11 < 10f)
								{
									fVar12 = func_119((*uParam0)[iLocal_56 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar12 > -90f && fVar12 < 90f)
									{
										if (fVar11 < fVar9)
										{
											(uParam0[iLocal_56 /*24*/])->f_23 = (uParam0[iLocal_56 /*24*/])->f_22;
											(uParam0[iLocal_56 /*24*/])->f_22 = iVar0;
											fVar10 = fVar9;
											fVar9 = fVar11;
										}
										else if (fVar11 < fVar10)
										{
											fVar10 = fVar11;
											(uParam0[iLocal_56 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_56++;
			if (iLocal_56 >= *uParam0)
			{
				iLocal_56 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false))
		{
			if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar13))
			{
				iVar14 = 1;
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_69, fLocal_72))
	{
		bLocal_52 = true;
	}
	if (!iLocal_53)
	{
		if (func_88(Param1.f_1) || func_88(Param4.f_1))
		{
			iLocal_57 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_53 = 1;
		}
		if (func_88(Param7.f_1) || func_88(Param10.f_1))
		{
			iLocal_57 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_53 = 1;
		}
	}
	else if (((!func_88(Param1.f_1) && !func_88(Param4.f_1)) && !func_88(Param7.f_1)) && !func_88(Param10.f_1))
	{
		iLocal_53 = 0;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_57)
	{
		if (func_88(Param1.f_1) || func_88(Param4.f_1))
		{
			bLocal_51 = true;
		}
		if (func_88(Param7.f_1) || func_88(Param10.f_1))
		{
			bLocal_54 = true;
		}
	}
	iLocal_58 = 0;
	iVar15 = -1;
	fVar16 = 13f;
	iLocal_55 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar17 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_60 == -1)
	{
		iLocal_73 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_60 == -1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar17, false))
						{
							if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar17))
							{
								iLocal_73 = 1;
								fVar16 = 20f;
							}
							if (VEHICLE::IS_VEHICLE_SIREN_ON(iVar17))
							{
								iLocal_73 = 1;
								fVar16 = 50f;
							}
						}
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam0)[iVar0 /*24*/]) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar17, false) && VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar17)))
						{
							if (func_4(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < fVar16)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]))
									{
										fVar16 = func_4(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1);
										iVar15 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar16 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_52)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_51)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_256)
					{
					}
					if (!bLocal_256 && !PED::IS_PED_RAGDOLL((*uParam0)[iVar0 /*24*/]))
					{
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true), 4f, true, true))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true), 6f, true, true))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 126))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true), 1f, true))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], true))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], true))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 1) || PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)) || (PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0) && PED::CAN_PED_IN_COMBAT_SEE_TARGET((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID()))) || (func_122((*uParam0)[iVar0 /*24*/]) && PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar14 && func_4(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_54)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_58)
				{
					iLocal_58 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_59 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_55 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_60 == -1)
	{
		if (iVar15 != -1)
		{
			if (1 > (uParam0[iVar15 /*24*/])->f_1)
			{
				(uParam0[iVar15 /*24*/])->f_1 = 1;
				iLocal_60 = iVar15;
			}
		}
	}
	else if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_60 /*24*/], true))
	{
		iLocal_60 = -1;
	}
}

int func_122(int iParam0)//Position - 0xFBEE
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "alert_gunshot", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "buddy_shot_b", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "alert_body", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_forward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_backward_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_left_small_intro_a", 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misschinese2_bank1", "react_right_small_intro_a", 3))
	{
		return 1;
	}
	return 0;
}

void func_123()//Position - 0xFC9F
{
	if (iLocal_3489)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_3496))
		{
			if (func_65())
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						cLocal_3490 = { func_124() };
						Local_3496 = { func_89() };
						StringCopy(&Local_3496, "", 24);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_3490) && !MISC::ARE_STRINGS_EQUAL(&cLocal_3490, "NULL"))
						{
							Local_3496 = { func_89() };
							func_91();
						}
						else
						{
							iLocal_3489 = 0;
							StringCopy(&Local_3496, "", 24);
							StringCopy(&cLocal_3490, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_3489 = 0;
				StringCopy(&Local_3496, "", 24);
				StringCopy(&cLocal_3490, "", 24);
			}
		}
		else
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!func_88(&Local_3496))
				{
					iLocal_3489 = 0;
					StringCopy(&Local_3496, "", 24);
					StringCopy(&cLocal_3490, "", 24);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_3496))
			{
				Local_3476[0 /*3*/] = { Local_3476[0 /*3*/] };
			}
		}
	}
}

struct<6> func_124()//Position - 0xFD87
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21845 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_22855);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar7 /*6*/])))
			{
				return Global_20713[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20713[iVar8 /*6*/])))
					{
						return Global_20713[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_20713[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_125()//Position - 0xFE33
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_132();
		func_131();
		func_129();
		func_126();
	}
}

void func_126()//Position - 0xFE57
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	Var1 = { 0f, 0f, 0f };
	if (iLocal_435 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_442[0 /*5*/]))
		{
			fVar4 = 0f;
			fVar7 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_442.f_0)
			{
				if (iVar0 > 0)
				{
					fVar4 = (fVar4 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_442[(iVar0 - 1) /*5*/], Local_442[iVar0 /*5*/], true));
				}
				if (Local_442[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_442[iVar0 /*5*/]))
					{
						fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_442[iVar0 /*5*/], Var1, true);
						if (fVar6 < fVar7)
						{
							fVar7 = fVar6;
							fVar8 = fVar4;
							iVar5 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar7 < fLocal_270)
			{
				iVar5 = iVar5;
				iLocal_435 = 1;
				iLocal_437 = MISC::GET_GAME_TIMER();
				fVar8 = fVar8;
				Local_275 = { Local_442[iVar5 /*5*/] };
				iLocal_278 = iVar5;
				iLocal_438 = iVar5 * 2;
				iLocal_440 = iLocal_438;
				iLocal_441 = iLocal_438;
				if (iLocal_441 < 0)
				{
					iLocal_441 = 0;
				}
				if (iLocal_440 >= Local_442.f_0 * 2)
				{
					iLocal_440 = (Local_442.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_435 == 1)
	{
		GRAPHICS::SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME();
		fVar9 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_437)) / fLocal_748);
		iVar10 = (SYSTEM::FLOOR((fVar9 / (1f / 2f))) - 1);
		iVar11 = (iLocal_438 + iVar10);
		iVar12 = (iLocal_438 - iVar10);
		if (iVar11 >= 122)
		{
			iVar11 = 121;
		}
		if (iVar12 < 0)
		{
			iVar12 = 0;
		}
		if (iVar11 > iLocal_440)
		{
			iVar0 = iLocal_440 + 1;
			while (iVar0 <= iVar11)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_442.f_0)
				{
					if (Local_442[iVar13 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar11 = (iVar0 - 1);
						iVar0 = iVar11 + 1;
					}
				}
				iVar0++;
			}
			iLocal_440 = iVar11;
		}
		if (iVar12 < iLocal_441)
		{
			iVar0 = (iLocal_441 - 1);
			while (iVar0 >= iVar12)
			{
				iVar13 = (iVar0 / 2);
				if (iVar13 < Local_442.f_0)
				{
					if (Local_442[iVar13 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar12 = iVar0 + 1;
						iVar0 = (iVar12 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_441 = iVar12;
		}
		iVar0 = 0;
		while (iVar0 < Local_279.f_0)
		{
			if ((MISC::GET_GAME_TIMER() - Local_279[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_279[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_279[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_279[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_127(int iParam0, bool bParam1)//Position - 0x100BD
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 61)
			{
				func_128(Local_442[(iParam0 / 2) /*5*/] + Local_442[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_271, fLocal_271, fLocal_271), bParam1);
			}
		}
		else if ((iParam0 / 2) < 61)
		{
			func_128(Local_442[(iParam0 / 2) /*5*/] + Vector(fLocal_271, fLocal_271, fLocal_271), bParam1);
		}
	}
}

void func_128(struct<3> Param0, bool bParam3)//Position - 0x1012B
{
	if (iLocal_436 == 0)
	{
		bParam3 = false;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_279[iLocal_439 /*5*/]);
	if (Local_279[iLocal_439 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_279[iLocal_439 /*5*/].f_1, 0.4f, 1f);
	}
	Local_279[iLocal_439 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_279[iLocal_439 /*5*/].f_1 = { Param0 };
	Local_279[iLocal_439 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, iLocal_268, bParam3);
	iLocal_439++;
	if (iLocal_439 >= 31)
	{
		iLocal_439 = 0;
	}
}

void func_129()//Position - 0x101B4
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	
	if (bLocal_263)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (iVar1 == joaat("WEAPON_PETROLCAN"))
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_269 == 0)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 8f, 4);
					iLocal_269 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_269)
				{
					if (!bLocal_259)
					{
						fVar4 = 9999.9f;
						Local_272 = { func_130() };
						iVar0 = 0;
						while (iVar0 < Local_442.f_0)
						{
							if (HUD::DOES_BLIP_EXIST(Local_442[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_272, HUD::GET_BLIP_COORDS(Local_442[iVar0 /*5*/].f_3), true);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_442[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_442[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_442[iVar0 /*5*/] = { Local_272 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_265 != -1)
							{
								if (MISC::ABSI((iLocal_266 - iVar5)) > 1)
								{
									iLocal_266 = -1;
								}
								if (iLocal_266 == -1)
								{
									iLocal_266 = iLocal_265;
								}
								if (MISC::ABSI((iLocal_266 - iVar5)) < 3 && MISC::ABSI((iLocal_266 - iVar5)) > 0)
								{
									if (iLocal_266 < iVar5)
									{
										iVar6 = iLocal_266;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_442[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_442[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_442[iVar6 /*5*/].f_3, 0);
													Local_442[iVar6 /*5*/].f_4 = 1;
													iLocal_267 = (iLocal_267 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_266)
										{
											if (HUD::DOES_BLIP_EXIST(Local_442[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_442[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_442[iVar6 /*5*/].f_3, 0);
													Local_442[iVar6 /*5*/].f_4 = 1;
													iLocal_267 = (iLocal_267 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_266 = iLocal_265;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_442[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_442[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_442[iVar5 /*5*/].f_3, 0);
											Local_442[iVar5 /*5*/].f_4 = 1;
											iLocal_267 = (iLocal_267 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (HUD::DOES_BLIP_EXIST(Local_442[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_442[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_442[iVar5 /*5*/].f_3, 0);
											Local_442[iVar5 /*5*/].f_4 = 1;
											iLocal_267 = (iLocal_267 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (func_77(Local_442[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_442[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_442[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_442[iVar5 /*5*/].f_3, 0);
												Local_442[iVar5 /*5*/].f_4 = 1;
												iLocal_267 = (iLocal_267 - 1);
											}
										}
									}
								}
							}
							iLocal_265 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_265 = -1;
				iLocal_266 = -1;
				iLocal_269 = 0;
			}
		}
	}
}

Vector3 func_130()//Position - 0x104C7
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	var uVar8;
	
	iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, "Gun_Nuzzle");
		iVar1 = 1;
		Var2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iVar0, iVar1) };
		Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(iVar0), 0.35f, 0f, -0.15f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &uVar8, false, false);
		Var5 = { Var2.f_0, Var2.f_1, uVar8 };
	}
	return Var5;
}

void func_131()//Position - 0x10538
{
	int iVar0;
	
	if (iLocal_261)
	{
		if (iLocal_435)
		{
			iVar0 = 0;
			while (iVar0 < Local_279.f_0)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_279[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_261 = 0;
		iLocal_435 = 1;
		iLocal_437 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_442.f_0)
		{
			Local_442[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_264 != -1)
		{
			iLocal_441 = iLocal_264;
			iLocal_440 = iLocal_264;
			iLocal_438 = iLocal_264;
		}
		else
		{
			iLocal_441 = -1;
			iLocal_440 = -1;
			iLocal_438 = iLocal_264;
		}
		iLocal_439 = 1;
	}
}

void func_132()//Position - 0x105C6
{
	if (!iLocal_262)
	{
		iLocal_262 = 1;
	}
}

void func_133()//Position - 0x105D9
{
	int iVar0;
	
	if (iLocal_2509 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_753.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/]))
			{
				if (!Local_753[iVar0 /*33*/].f_23)
				{
					if (PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
					{
						Local_753[iVar0 /*33*/].f_23 = 1;
						func_9(151, 1, 0);
					}
				}
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_753[iVar0 /*33*/]) == iLocal_1614)
				{
					func_103(Local_753[iVar0 /*33*/], &(Local_753[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0, 0);
				}
			}
			else if (Local_753[iVar0 /*33*/] != 0)
			{
				func_134(&(Local_753[iVar0 /*33*/].f_25));
				Local_753[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}

void func_134(int* iParam0)//Position - 0x1068F
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

void func_135()//Position - 0x10701
{
	int iVar0;
	
	iVar0 = iLocal_2509;
	func_383();
	switch (iLocal_2509)
	{
		case 0:
			func_273();
			break;
		
		case 1:
			func_270();
			break;
		
		case 2:
			func_225();
			break;
		
		case 3:
			func_208();
			break;
		
		case 4:
			func_207();
			break;
		
		case 5:
			func_207();
			break;
		
		case 6:
			func_207();
			break;
		
		case 7:
			func_203();
			break;
		
		case 8:
			func_181();
			break;
		
		case 9:
			func_149();
			break;
	}
	if (iLocal_2509 != iVar0)
	{
		iLocal_2510 = 0;
	}
	if (bLocal_2512)
	{
		func_136(0);
	}
}

void func_136(char* sParam0)//Position - 0x107B3
{
	while (!AUDIO::TRIGGER_MUSIC_EVENT("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sLocal_2511 = sParam0;
	}
	if (MISC::IS_STRING_NULL(sLocal_2511))
	{
		sLocal_2511 = "CHFAIL";
	}
	func_138(sLocal_2511);
	while (!func_137())
	{
		func_28(2, 0);
	}
	func_463(1);
}

int func_137()//Position - 0x1080E
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_100833 == 7 || Global_100833 == 8)
	{
		return 1;
	}
	return 0;
}

void func_138(char* sParam0)//Position - 0x1083B
{
	func_148(sParam0);
	func_139(0);
}

void func_139(int iParam0)//Position - 0x1084E
{
	int iVar0;
	
	if (Global_113810.f_9088 || func_147(0))
	{
		iVar0 = func_146();
		if (!func_140(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
		Global_100869 = iParam0;
	}
}

int func_140(int iParam0)//Position - 0x10893
{
	int iVar0;
	int iVar1;
	
	func_145();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91565[iParam0 /*5*/];
	iVar1 = Global_78960.f_109[iVar0 /*4*/];
	func_144(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_141(&(Global_113810.f_2366.f_539), iVar1);
	if (Global_94988 == Global_100870)
	{
		Global_113810.f_9088.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91601[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113810.f_9088.f_330[iVar1 /*6*/].f_2++;
	Global_94988 = Global_100870;
	if (iParam0 == -1)
	{
		if (Global_113810.f_9088)
		{
		}
		return 0;
	}
	if (BitTest(Global_91565[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91565[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_141(var uParam0, int iParam1)//Position - 0x109A3
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113810.f_18536[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113810.f_9088.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_143(Global_113810.f_18536[iVar0], &Var2, &fVar5))
			{
				Global_113810.f_18536[iVar0] = 318;
				func_142(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_98203[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_9 = 0f;
				Global_98203[iVar0 /*29*/].f_12 = 0f;
				Global_98203[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_10 = 0f;
				Global_98203[iVar0 /*29*/].f_13 = 0f;
				Global_98203[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_11 = 0f;
				Global_98203[iVar0 /*29*/].f_14 = 0f;
				Global_98203[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_26 = 0f;
				Global_98203[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_27 = 0f;
				Global_98203[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98203[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_142(var uParam0)//Position - 0x10B69
{
	*uParam0 = -15;
}

int func_143(int iParam0, var uParam1, float fParam2)//Position - 0x10B77
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_143(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_143(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_144(int iParam0, bool bParam1)//Position - 0x114E6
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_94798[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_94798[iParam0 /*2*/] = 0;
	}
}

void func_145()//Position - 0x11524
{
	Global_100868 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922))
		{
			switch (func_48())
			{
				case 0:
					StringCopy(&Global_78922, "CMN_MARRE" /* GXT: ~s~Michael was arrested. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_78922, "CMN_FARRE" /* GXT: ~s~Franklin was arrested. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_78922, "CMN_TARRE" /* GXT: ~s~Trevor was arrested. */, 16);
					break;
			}
			StringCopy(&Global_78926, "", 16);
		}
		Global_100868 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78922))
		{
			switch (func_48())
			{
				case 0:
					StringCopy(&Global_78922, "CMN_MDIED" /* GXT: ~s~Michael died. */, 16);
					break;
				
				case 1:
					StringCopy(&Global_78922, "CMN_FDIED" /* GXT: ~s~Franklin died. */, 16);
					break;
				
				case 2:
					StringCopy(&Global_78922, "CMN_TDIED" /* GXT: ~s~Trevor died. */, 16);
					break;
			}
			StringCopy(&Global_78926, "", 16);
		}
		Global_100868 = 0;
		MISC::SET_BIT(&(Global_100833.f_20), 25);
	}
}

int func_146()//Position - 0x11613
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (BitTest(Global_91565[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_147(bool bParam0)//Position - 0x11645
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78938, 0);
}

void func_148(char* sParam0)//Position - 0x1166D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_78922, sParam0, 16);
			StringCopy(&Global_78926, "", 16);
			if (RECORDING::IS_REPLAY_RECORDING())
			{
				RECORDING::STOP_REPLAY_RECORDING();
			}
		}
	}
}

void func_149()//Position - 0x116AD
{
	func_176(46, 52);
	func_166(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_166(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 12, 0, 0, 1, 0, 1, 0);
	func_154();
	if (func_153(1, 49))
	{
		func_150();
	}
}

void func_150()//Position - 0x1173B
{
	HUD::CLEAR_PRINTS();
	func_151(0, 0);
	func_463(0);
}

void func_151(bool bParam0, int iParam1)//Position - 0x11752
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_63487)
	{
		Global_63487 = iParam1;
	}
	if (bParam0)
	{
		if ((func_147(0) && Global_78936.f_1 == 1) && func_152(Global_78936))
		{
		}
		else
		{
			Global_63485 = 1;
		}
	}
	if (Global_113810.f_9088 || func_147(0))
	{
		iVar0 = func_146();
		iVar1 = Global_91565[iVar0 /*5*/];
		uVar2 = Global_78960.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113810.f_9088)
			{
			}
			return;
		}
		if (BitTest(Global_91565[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91565[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_78938, 1);
		Global_78954 = uVar2;
		Global_78955 = MISC::GET_GAME_TIMER();
	}
}

int func_152(int iParam0)//Position - 0x11822
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_153(int iParam0, int iParam1)//Position - 0x11860
{
	if (Local_2915[iParam0 /*10*/] == iParam1)
	{
		if (Local_2915[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_154()//Position - 0x11886
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2432.4756f, 4953.2417f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, false, true, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2436.7617f, 4956.0107f, 44.490093f, 2443.3796f, 4962.6245f, 48.2233f, 1.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2447.6694f, 4966.5537f, 44.95141f, 2452.4966f, 4969.8247f, 48.89074f, 2.3125f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2454.863f, 4968.6855f, 44.95141f, 2460.505f, 4974.4087f, 48.82641f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2459.0583f, 4977.546f, 44.95141f, 2460.4106f, 4979.3022f, 48.82641f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2457.602f, 4984.746f, 44.736694f, 2461.9766f, 4989.49f, 48.478436f, 1.6875f, false, true, 0))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		else if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2454.1792f, 4995.2812f, 44.541508f, 2453.096f, 4993.9053f, 48.320435f, 1.6875f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2449.4011f, 4990.354f, 44.92924f, 2447.717f, 4988.8647f, 48.821293f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2443.9062f, 4990.104f, 44.444595f, 2439.0066f, 4985.2715f, 48.30458f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2439.6016f, 4982.387f, 44.951412f, 2440.7969f, 4981.365f, 48.826416f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2440.2588f, 4980.6714f, 44.951416f, 2434.7688f, 4975.055f, 48.826416f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2432.1646f, 4972.586f, 44.29909f, 2430.1138f, 4970.5454f, 48.210857f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2428.4602f, 4968.5693f, 44.815968f, 2426.6323f, 4966.6025f, 48.29342f, 1.6875f, false, true, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
			{
				FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2455.4868f, 4997.5664f, 43.110104f, 2423.6533f, 4962.8374f, 57.348885f, 14.4375f, false, true, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2442.913f, 4965.2734f, 50.15687f, 2444.4895f, 4967.4097f, 53.817825f, 1.6875f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2445.2385f, 4969.0703f, 49.942844f, 2450.3652f, 4972.1885f, 54.032505f, 2.375f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2452.3315f, 4971.8174f, 49.942825f, 2457.9773f, 4977.5825f, 53.880974f, 2.375f, false, true, 0))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		else if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2457.6206f, 4978.4624f, 49.942825f, 2453.932f, 4982.161f, 53.817825f, 2.375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2452.0542f, 4984.1562f, 49.942825f, 2448.1199f, 4987.8086f, 53.81316f, 2.375f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2442.014f, 4980.5386f, 49.942825f, 2435.7957f, 4971.945f, 53.903877f, 2.375f, false, true, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
			{
				FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x11D10
{
	int iVar0;
	int iVar1;
	
	if (Local_3335[iParam0 /*4*/] != iParam1)
	{
		Local_3335[iParam0 /*4*/].f_1 = 0;
		Local_3335[iParam0 /*4*/] = iParam1;
	}
	if (!Local_3335[iParam0 /*4*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_3335[iParam0 /*4*/])
			{
				case 0:
					break;
				
				case 1:
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						PLAYER::SET_SPECIAL_ABILITY_MULTIPLIER(2f);
						Local_3335[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 4:
					if (PLAYER::IS_SPECIAL_ABILITY_METER_FULL(PLAYER::PLAYER_ID(), 0))
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							func_157("USESPEC_KM", -1);
						}
						else
						{
							func_157("USESPEC", -1);
						}
					}
					Local_3335[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 3:
					switch (Local_3335[iParam0 /*4*/].f_2)
					{
						case 0:
							func_157("FRMFLE", -1);
							Local_3335[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				
				case 5:
					if (!func_65() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_7("FRMLK", 7500, 1);
						Local_3335[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 2:
					func_7("FRMSNP", 7500, 1);
					Local_3335[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					switch (Local_3335[iParam0 /*4*/].f_2)
					{
						case 0:
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								Local_3335[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
								Local_3335[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_3335[iParam0 /*4*/].f_3)
							{
								if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
								{
									func_157("FRMSTLTH_KM", -1);
								}
								else
								{
									func_157("FRMSTLTH", -1);
								}
								Local_3335[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 6:
					switch (Local_3335[iParam0 /*4*/].f_2)
					{
						case 0:
							if (MISC::GET_PROFILE_SETTING(211) != 0)
							{
								Local_3335[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 4000;
								Local_3335[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_3335[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("WEAPON_UNARMED");
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
								if ((iVar0 != joaat("WEAPON_SNIPERRIFLE") && iVar0 != joaat("WEAPON_HEAVYSNIPER")) && iVar0 != joaat("WEAPON_UNARMED"))
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										if (!func_65())
										{
											if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												func_157("FRMSHOT", -1);
												Local_3335[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				
				case 7:
					func_7("FRMFLC", 7500, 1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_2675, "FRMBLIPB");
					Local_3335[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 8:
					switch (Local_3335[iParam0 /*4*/].f_2)
					{
						case 0:
							func_157("FRMPET2", -1);
							Local_3335[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_65())
							{
								func_156("FRMTRL", 7500, 1);
								Local_3335[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							iVar1 = joaat("WEAPON_UNARMED");
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
							{
								if (iVar1 == joaat("WEAPON_PETROLCAN"))
								{
									if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
									{
										HUD::CLEAR_HELP(true);
									}
								}
							}
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								func_157("FRMTRL2", -1);
								Local_3335[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (func_8())
							{
								if (!func_65())
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
									{
										if (!HUD::DOES_BLIP_EXIST(iLocal_2675))
										{
											HUD::CLEAR_PRINTS();
											func_7("FRMSHP", 7500, 1);
											iLocal_2675 = func_5(2454.8953f, 4950.8945f, 44.1488f, 0);
										}
									}
									else if (func_73(PLAYER::PLAYER_PED_ID(), 2454.8953f, 4950.8945f, 44.1488f, 1) < 5f)
									{
										HUD::CLEAR_PRINTS();
										if (HUD::DOES_BLIP_EXIST(iLocal_2675))
										{
											HUD::REMOVE_BLIP(&iLocal_2675);
										}
										func_7("FRMIGN", 7500, 1);
										AUDIO::START_AUDIO_SCENE("CHI_2_SHOOT_GAS");
										Local_3335[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						
						case 4:
							if (func_93(37))
							{
								if (func_90("FRMIGN", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
							}
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
							{
								Local_3335[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				
				case 9:
					func_157("FRMMISS", -1);
					Local_3335[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 10:
					if (func_93(34))
					{
						func_7("FRMFRH", 7500, 1);
					}
					else
					{
						func_7("FRMFRG", 7500, 1);
					}
					Local_3335[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					func_7("FRMLEAVE", 1, 1);
					if (func_93(48))
					{
						HUD::CLEAR_PRINTS();
						Local_3335[iParam0 /*4*/].f_1 = 1;
					}
					break;
				
				case 13:
					func_7("LOSE_WANTED" /* GXT: Lose the Cops. */, 7500, 1);
					break;
				}
			}
	}
}

void func_156(char* sParam0, int iParam1, int iParam2)//Position - 0x12228
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

void func_157(char* sParam0, int iParam1)//Position - 0x12241
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x12258
{
	bLocal_3116 = false;
	iLocal_3117 = 0;
	if (func_159(&bLocal_3116, &iLocal_3117, iParam0, iParam1))
	{
		if (func_159(&bLocal_3116, &iLocal_3117, iParam2, iParam3))
		{
			if (func_159(&bLocal_3116, &iLocal_3117, iParam4, iParam5))
			{
				if (func_159(&bLocal_3116, &iLocal_3117, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_3116)
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x122B7
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_162(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_162(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_93(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_161(iParam3))
			{
				if (func_162(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_93(iParam3))
				{
					func_160(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_160(int iParam0)//Position - 0x12410
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3118[0 /*8*/]);
	if (Local_3118[iVar0 /*8*/] == iParam0)
	{
		Local_3118[iVar0 /*8*/].f_3 = 1;
	}
}

int func_161(int iParam0)//Position - 0x1243C
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3118[0 /*8*/]);
	if (Local_3118[iVar0 /*8*/] == iParam0)
	{
		if (Local_3118[iVar0 /*8*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x1246F
{
	int iVar0;
	
	iVar0 = (iParam0 - Local_3118[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_3118.f_0)
	{
		if (Local_3118[iVar0 /*8*/] == iParam0)
		{
			if (!Local_3118[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_3118[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x124C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	
	if (Local_3356[iParam0 /*7*/] != iParam1)
	{
		Local_3356[iParam0 /*7*/].f_1 = 0;
		Local_3356[iParam0 /*7*/] = iParam1;
	}
	if (!Local_3356[iParam0 /*7*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_3356[iParam0 /*7*/].f_2)
			{
				Local_3356[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_3356[iParam0 /*7*/])
			{
				case 0:
					break;
				
				case 1:
					if (func_35("TRV_WTF", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3356[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 2:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3356[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
							Local_3356[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_3356[iParam0 /*7*/].f_4)
							{
								if (func_65())
								{
									Local_3356[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_165(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3356[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 14000));
										}
									}
									else
									{
										Local_3356[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 4:
					Local_3356[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3356[iParam0 /*7*/].f_4 != -1)
					{
						if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3356[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 3:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3356[iParam0 /*7*/].f_4 = func_18(15);
							Local_3356[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_3356[iParam0 /*7*/].f_4 != -1 && Local_3356[iParam0 /*7*/].f_5 != -1)
							{
								Local_3356[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3356[iParam0 /*7*/].f_4 = Local_3356[iParam0 /*7*/].f_5;
								if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_3356[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_3356[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3356[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 3:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3356[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 4:
							if (func_165(&iVar1, 2, 1))
							{
								if (iVar1 != Local_3356[iParam0 /*7*/].f_4)
								{
									Local_3356[iParam0 /*7*/].f_4 = iVar1;
									Local_3356[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_3356[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 5:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3356[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 5:
					Local_3356[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3356[iParam0 /*7*/].f_4 != -1)
					{
						if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3356[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 6:
					Local_3356[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_3356[iParam0 /*7*/].f_4 != -1)
					{
						if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_3356[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 7:
					if (func_35("CHI2_drive", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3356[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 9:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3356[iParam0 /*7*/].f_3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
							}
							break;
						
						case 1:
							if (func_35("SEETREVOR", 3, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
							break;
						
						case 2:
							if (func_35("GOON2TREV", 4, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_3356[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_3356[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3356[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_3356[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3356[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
										Local_3356[iParam0 /*7*/].f_6++;
										Local_3356[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_3356[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_3356[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
										Local_3356[iParam0 /*7*/].f_6++;
										Local_3356[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_3356[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_3356[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_3356[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_3356[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3356[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3356[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
											Local_3356[iParam0 /*7*/].f_6++;
											Local_3356[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3356[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
											Local_3356[iParam0 /*7*/].f_6++;
											Local_3356[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3356[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
											Local_3356[iParam0 /*7*/].f_6++;
											Local_3356[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_3356[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 12:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_3356[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_3356[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_3356[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_3356[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3356[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
											Local_3356[iParam0 /*7*/].f_6++;
											Local_3356[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3356[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
											Local_3356[iParam0 /*7*/].f_6++;
											Local_3356[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_3356[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
											Local_3356[iParam0 /*7*/].f_6++;
											Local_3356[iParam0 /*7*/].f_3 = 0;
										}
										break;
									
									case 12:
										Local_3356[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_753.f_0)
							{
								if (Local_753[iVar2 /*33*/].f_1 == 2)
								{
									if (!PED::IS_PED_INJURED(Local_753[iVar2 /*33*/]))
									{
										if (PED::IS_PED_IN_COMBAT(Local_753[iVar2 /*33*/], 0))
										{
											if (PED::CAN_PED_IN_COMBAT_SEE_TARGET(Local_753[iVar2 /*33*/], PLAYER::PLAYER_PED_ID()))
											{
												Local_3356[iParam0 /*7*/].f_4 = iVar2;
												Local_3356[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						
						case 1:
							if (func_35("G2TREVIN", 4, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3356[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3356[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 16:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_165(&(Local_3356[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_3356[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3356[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 2:
							if (func_35("CHI2_app", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 17:
					if (func_35("CHI2_app", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3356[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 19:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_88("ONEILGUARD4") || func_88("SEETREVOR"))
							{
								Local_3356[iParam0 /*7*/].f_3++;
							}
							break;
						
						case 1:
							if (func_35("CHI2_HARD", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_3356[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_3356[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_3356[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_753.f_0)
								{
									if (Local_753[iVar3 /*33*/].f_1 == 2)
									{
										if (!PED::IS_PED_INJURED(Local_753[iVar3 /*33*/]))
										{
											fVar5 = func_4(PLAYER::PLAYER_PED_ID(), Local_753[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_3356[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_3356[iParam0 /*7*/].f_4 == -1)
								{
									Local_3356[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_3356[iParam0 /*7*/].f_3++;
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3356[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 6000;
								Local_3356[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_753.f_0)
							{
								if (Local_753[iVar6 /*33*/].f_2 == 8)
								{
									Local_3356[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_753[iVar6 /*33*/].f_2 == 9)
								{
									Local_3356[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_3356[iParam0 /*7*/].f_3++;
							break;
						
						case 1:
							if (!func_65())
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.15f)
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/].f_14) < 0.65f)
										{
											if (func_4(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/], PLAYER::PLAYER_PED_ID(), 1) < 30f)
											{
												Local_3356[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_3356[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 3:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/]))
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_753[Local_3356[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
								Local_3356[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_3356[iParam0 /*7*/].f_3 = 1;
							}
							break;
						
						case 4:
							if (!PED::IS_PED_INJURED(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_753[Local_3356[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.75f)
									{
										Local_3356[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				
				case 21:
					if (func_35("CHI2_find", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
						Local_3356[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 26:
					if (func_164())
					{
						if (func_35("CHI2_pourmis", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_3356[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				
				case 27:
					if (func_35("CHI2_boom", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3356[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 22:
					switch (Local_3356[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_3356[iParam0 /*7*/].f_4 = 2500;
							Local_3356[iParam0 /*7*/].f_5 = 0;
							Local_3356[iParam0 /*7*/].f_3 = 1;
							break;
						
						case 1:
							Local_3356[iParam0 /*7*/].f_4 = (Local_3356[iParam0 /*7*/].f_4 - SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
							if (Local_3356[iParam0 /*7*/].f_4 <= 0)
							{
								Local_3356[iParam0 /*7*/].f_3 = 2;
							}
							break;
						
						case 2:
							if (Local_3356[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_3356[iParam0 /*7*/].f_3 = 1;
									Local_3356[iParam0 /*7*/].f_4 = (12000 + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
									Local_3356[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				
				case 23:
					if (func_35("CHI2_light", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3356[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 24:
					if (func_35("CHI2_boom", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3356[iParam0 /*7*/].f_1 = 1;
					}
					break;
				
				case 25:
					if (func_35("CHI2_burn", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_3356[iParam0 /*7*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_164()//Position - 0x138FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < Local_442.f_0)
	{
		if (Local_442[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return 1;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0, int iParam1, int iParam2)//Position - 0x1394C
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_753.f_0)
	{
		if (Local_753[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !PED::IS_PED_INJURED(Local_753[iVar0 /*33*/])))
			{
				fVar1 = func_4(PLAYER::PLAYER_PED_ID(), Local_753[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x139D2
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
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
	
	if (Local_2915[iParam0 /*10*/] != iParam1 || Local_2915[iParam0 /*10*/].f_1 == 0)
	{
		Local_2915[iParam0 /*10*/] = iParam1;
		Local_2915[iParam0 /*10*/].f_1 = 1;
		Local_2915[iParam0 /*10*/].f_3 = 0;
		Local_2915[iParam0 /*10*/].f_6 = 0;
		Local_2915[iParam0 /*10*/].f_4 = 0;
		Local_2915[iParam0 /*10*/].f_7 = 0;
		Local_2915[iParam0 /*10*/].f_8 = 0;
		Local_2915[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_2915[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_158(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_2915[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_2915[iParam0 /*10*/].f_3 == 0 || Local_2915[iParam0 /*10*/].f_6 == -1)
	{
		if (bVar0 == 1)
		{
			if (!Local_2915[iParam0 /*10*/].f_2)
			{
				Local_2915[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_2915[iParam0 /*10*/])
			{
				case 1:
					break;
				
				case 2:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							AUDIO::START_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_2915[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 3:
					if (func_73(PLAYER::PLAYER_PED_ID(), 1991.05f, 3054.2625f, 46.2147f, 1) > 250f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_753[11 /*33*/]))
						{
							PED::DELETE_PED(&(Local_753[11 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_753[10 /*33*/]))
						{
							PED::DELETE_PED(&(Local_753[10 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_753[12 /*33*/]))
						{
							PED::DELETE_PED(&(Local_753[12 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_753[13 /*33*/]))
						{
							PED::DELETE_PED(&(Local_753[13 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_753[14 /*33*/]))
						{
							PED::DELETE_PED(&(Local_753[14 /*33*/]));
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man1A"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man2"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaoCheng"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaosTranslator"));
						STREAMING::REMOVE_ANIM_DICT("misschinese2_crystalmaze");
						STREAMING::REMOVE_ANIM_DICT("MISSChinese2_crystalMazeMCS1_IG");
						STREAMING::REMOVE_ANIM_DICT("missrampageintrooutro");
						if (iLocal_2882 != -1)
						{
							if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2882))
							{
								PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2882);
							}
						}
						PED::CLEAR_PED_NON_CREATION_AREA();
						func_31(26, 1);
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 5:
					if (AUDIO::LOAD_STREAM("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 4:
					if (func_73(PLAYER::PLAYER_PED_ID(), 2457.4897f, 4977.0947f, 50.567833f, 1) < 400f)
					{
						func_32(27, 0);
						STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
						STREAMING::SET_PED_POPULATION_BUDGET(1);
						STREAMING::PREFETCH_SRL("chinese2_farmhouse_cutscene");
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 7:
					if ((!PED::IS_PED_INJURED(Local_753[12 /*33*/]) && !PED::IS_PED_INJURED(Local_753[13 /*33*/])) && !PED::IS_PED_INJURED(Local_753[14 /*33*/]))
					{
						if (func_175(6, 6) < 2)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1981.2567f, 3050.7212f, 41.089954f, 1984.257f, 3055.5427f, 49.473137f, 3.0625f, false, true, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[12 /*33*/], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) == 7)
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_753[13 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_LOOK_AT_ENTITY(Local_753[14 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_LOOK_AT_ENTITY(Local_753[12 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								}
							}
						}
					}
					break;
				
				case 8:
					fVar1 = func_73(PLAYER::PLAYER_PED_ID(), 2450.2136f, 4979.208f, 60.8422f, 1);
					if (fVar1 < 900f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
							{
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar4)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = ENTITY::GET_ENTITY_SPEED(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iVar4, 1, 0f, -fVar2, 0f, false, true, false, false);
									}
								}
							}
						}
					}
					break;
				
				case 9:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_2915[iParam0 /*10*/].f_6 = 1;
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 321, true);
						if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("walkinterruptible")))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
							if (func_174())
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								Local_2915[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_2915[iParam0 /*10*/].f_6 == 1)
					{
						STREAMING::REMOVE_ANIM_DICT("missrampageintrooutro");
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 6:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!PED::IS_PED_INJURED(Local_753[12 /*33*/]) && !PED::IS_PED_INJURED(Local_753[13 /*33*/])) && !PED::IS_PED_INJURED(Local_753[14 /*33*/]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[12 /*33*/], iLocal_2634);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[13 /*33*/], iLocal_2634);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[14 /*33*/], iLocal_2634);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_753[12 /*33*/], 17, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_753[13 /*33*/], 17, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_753[14 /*33*/], 17, true);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_753[12 /*33*/]);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_753[13 /*33*/]);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_753[14 /*33*/]);
								Local_2915[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if ((PED::IS_PED_INJURED(Local_753[12 /*33*/]) || PED::IS_PED_INJURED(Local_753[13 /*33*/])) || PED::IS_PED_INJURED(Local_753[14 /*33*/]))
							{
								Local_2915[iParam0 /*10*/].f_6++;
							}
							if (!PED::IS_PED_INJURED(Local_753[12 /*33*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_753[12 /*33*/]))
								{
									Local_2915[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!PED::IS_PED_INJURED(Local_753[13 /*33*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_753[13 /*33*/]))
								{
									Local_2915[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!PED::IS_PED_INJURED(Local_753[14 /*33*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_753[14 /*33*/]))
								{
									Local_2915[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(Local_753[12 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_753[12 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_753[12 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[12 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_753[13 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_753[13 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_753[13 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[13 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_753[14 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_753[14 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_753[14 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[14 /*33*/]));
								Local_2915[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 10:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::PREFETCH_SRL("chinese2_explosion_cutscene");
							AUDIO::STOP_STREAM();
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (iLocal_2646 == 1)
							{
								if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_2915[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2646 == 2)
							{
								if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_2915[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_2646 == 3)
							{
								if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_2915[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (STREAMING::IS_SRL_LOADED())
							{
								Local_2915[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				
				case 11:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_2915[iParam0 /*10*/].f_7)
							{
								if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
								{
									FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 4f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 4f)), 16, 1.5f, true, false, 1f, false);
									Local_2915[iParam0 /*10*/].f_9 = (Local_2915[iParam0 /*10*/].f_9 - 1f);
									Local_2915[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(250, 520));
								}
								else
								{
									Local_2915[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						
						case 2:
							break;
						
						default:
							bVar5 = false;
							while (bVar5 < Local_2887.f_0)
							{
								if (!BitTest(Local_2915[iParam0 /*10*/].f_7, bVar5))
								{
									if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_2887[bVar5 /*3*/], 5f))
									{
										MISC::SET_BIT(&(Local_2915[iParam0 /*10*/].f_7), bVar5);
										if (Local_2915[iParam0 /*10*/].f_6 == 0)
										{
											Local_2915[iParam0 /*10*/].f_6 = MISC::GET_GAME_TIMER() + 1500;
										}
									}
								}
								bVar5++;
							}
							if (MISC::GET_GAME_TIMER() > Local_2915[iParam0 /*10*/].f_8)
							{
								Local_2915[iParam0 /*10*/].f_8 = 0;
								bVar5 = false;
								while (bVar5 < Local_2887.f_0)
								{
									if (!BitTest(Local_2915[iParam0 /*10*/].f_7, bVar5 + 9) && BitTest(Local_2915[iParam0 /*10*/].f_7, bVar5))
									{
										FIRE::ADD_EXPLOSION(Local_2887[bVar5 /*3*/], 16, 1.5f, true, false, 1f, false);
										MISC::SET_BIT(&(Local_2915[iParam0 /*10*/].f_7), bVar5 + 9);
										bVar5 = 8;
										Local_2915[iParam0 /*10*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(150, 320));
									}
									bVar5++;
								}
							}
							if (Local_2915[iParam0 /*10*/].f_6 != 0)
							{
								if (MISC::GET_GAME_TIMER() > Local_2915[iParam0 /*10*/].f_6)
								{
									Local_2915[iParam0 /*10*/].f_6 = 1;
									Local_2915[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 300;
									Local_2915[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_105(iVar6, 20, 0, 0);
					func_105(iVar7, 20, 0, 0);
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 42:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
								{
									iLocal_2504 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2504, false))
									{
										if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_2504))
										{
											Local_2915[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						
						case 2:
							if (AUDIO::PREPARE_MUSIC_EVENT("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2915[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						
						case 3:
							if (AUDIO::TRIGGER_MUSIC_EVENT("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_2915[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 4:
							if (func_74(iLocal_2504))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2504, false))
								{
									if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_2504))
									{
										Local_2915[iParam0 /*10*/].f_7 = (Local_2915[iParam0 /*10*/].f_7 + MISC::GET_GAME_TIMER() + 7000);
										Local_2915[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						
						case 5:
							if (func_74(iLocal_2504))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2504, false))
								{
									if (MISC::GET_GAME_TIMER() > Local_2915[iParam0 /*10*/].f_7)
									{
										if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 6 && AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
										{
											if (AUDIO::GET_MUSIC_VOL_SLIDER() != 0)
											{
												if (func_35("CHI2_rad", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_2915[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_2915[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_2915[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 5000;
										}
									}
								}
							}
							break;
						
						case 6:
							if (func_88("CHI2_rad"))
							{
								Local_2915[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 7:
							if (!func_88("CHI2_rad"))
							{
								if (func_74(iLocal_2504))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2504, false))
									{
										if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/))
										{
											if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 6)
											{
												if (iLocal_2674 == -1)
												{
													iLocal_2674 = AUDIO::GET_SOUND_ID();
													AUDIO::PLAY_SOUND_FRONTEND(iLocal_2674, "Change_Station_Loud", "Radio_Soundset", true);
													Local_2915[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_2915[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						
						case 8:
							if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("CHN2_TREV_RADIO_2_FRTA"))
								{
									AUDIO::START_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
									Local_2915[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 9:
							if (func_74(iLocal_2504))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2504, false))
								{
									if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 6)
									{
										if (AUDIO::GET_MUSIC_VOL_SLIDER() != 0)
										{
											if (func_35("CHI2_radb", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_2915[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_2915[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				
				case 48:
					func_31(9, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 49:
					if (!func_96(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_93(49))
					{
						if (iLocal_2676 != 0)
						{
							INTERIOR::UNPIN_INTERIOR(iLocal_2676);
						}
						iLocal_2676 = 0;
						func_19(50, 2, 0, 1, 0);
						func_19(51, 2, 0, 1, 0);
						func_19(52, 2, 0, 1, 0);
						func_19(53, 2, 0, 1, 0);
						func_19(54, 1, 0, 1, 0);
						func_19(55, 1, 0, 1, 0);
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 50:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
							{
								Local_2915[iParam0 /*10*/].f_7 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
								Local_2915[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
							{
								iVar8 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
								if (iVar8 > Local_2915[iParam0 /*10*/].f_7)
								{
									Local_2915[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_2915[iParam0 /*10*/].f_7)
								{
									func_9(158, (Local_2915[iParam0 /*10*/].f_7 - iVar8), 0);
									Local_2915[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar9, true))
							{
								if (iVar9 == joaat("WEAPON_PETROLCAN"))
								{
									if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
									{
										if (Local_2915[iParam0 /*10*/].f_8 == 0)
										{
											func_10(157, 0);
											Local_2915[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_2915[iParam0 /*10*/].f_8 == 1)
									{
										func_11(0, 157);
										Local_2915[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_2915[iParam0 /*10*/].f_8 == 1)
								{
									func_11(0, 157);
									Local_2915[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_2915[iParam0 /*10*/].f_8 == 1)
							{
								func_11(0, 157);
								Local_2915[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				
				case 51:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2915[iParam0 /*10*/].f_7 = -1;
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar10, true))
							{
								if (iVar10 == joaat("WEAPON_PETROLCAN"))
								{
									if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
									{
										if (Local_2915[iParam0 /*10*/].f_7 == -1)
										{
											Local_2915[iParam0 /*10*/].f_7 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
										}
										if (iLocal_267 == 0)
										{
											Local_2915[iParam0 /*10*/].f_9 = (Local_2915[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() * 2f));
										}
										else if (iLocal_267 < 30 && Local_2915[iParam0 /*10*/].f_9 < 70f)
										{
											Local_2915[iParam0 /*10*/].f_9 = (Local_2915[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() * 1.5f));
										}
										else
										{
											Local_2915[iParam0 /*10*/].f_9 = (Local_2915[iParam0 /*10*/].f_9 + SYSTEM::TIMESTEP());
										}
										iVar11 = SYSTEM::FLOOR((IntToFloat(Local_2915[iParam0 /*10*/].f_7) * (1f - (Local_2915[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0)
										{
											WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar10, iVar11, false);
										}
										else
										{
											WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar10, 0, false);
										}
									}
								}
							}
							break;
					}
					break;
				
				case 52:
					func_15("CHN2_STOP_TRACK", 0, func_173());
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 53:
					AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_CHN2_METH_LAB_FARM_FIRE", true, true);
					func_172(1);
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 54:
					func_172(0);
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 55:
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
					STREAMING::SET_PED_POPULATION_BUDGET(3);
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 56:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(Local_753[4 /*33*/].f_20))
							{
								ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_753[4 /*33*/].f_20));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_753[5 /*33*/].f_20))
							{
								ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_753[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_2655)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2655[iVar12]))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_2655[iVar12]));
								}
								iVar12++;
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_can_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (PED::IS_PED_INJURED(Local_753[23 /*33*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2876))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_2876);
									WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_SAWNOFFSHOTGUN"));
									Local_2915[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				
				case 47:
					if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_753[11 /*33*/]))
						{
							if (MISC::GET_GAME_TIMER() > Local_2915[iParam0 /*10*/].f_7)
							{
								if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
								{
									AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_753[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", false);
									Local_2915[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								}
							}
						}
					}
					break;
				
				case 41:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::REQUEST_MODEL(joaat("IG_TaoCheng"));
							STREAMING::REQUEST_MODEL(joaat("IG_TaosTranslator"));
							STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
							if (iLocal_2882 == -1 || (iLocal_2882 != -1 && !PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2882)))
							{
								iLocal_2882 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1991.0813f, 3054.5166f, 46.714745f, 4f, 4f, 4f, 0f, false, 3);
							}
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if ((STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze") && STREAMING::HAS_MODEL_LOADED(joaat("IG_TaoCheng"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_TaosTranslator")))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_753[11 /*33*/]))
								{
									Local_753[11 /*33*/] = PED::CREATE_PED(26, joaat("IG_TaoCheng"), 1991.988f, 3054.51f, 46.215f, 0f, true, true);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[11 /*33*/], iLocal_1616);
									PED::SET_PED_CAN_BE_TARGETTED(Local_753[11 /*33*/], false);
								}
								else if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[11 /*33*/], iLocal_1616);
									PED::SET_PED_CAN_BE_TARGETTED(Local_753[11 /*33*/], false);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_753[10 /*33*/]))
								{
									Local_753[10 /*33*/] = PED::CREATE_PED(26, joaat("IG_TaosTranslator"), 1991.988f, 3054.51f, 46.215f, 0f, true, true);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[10 /*33*/], iLocal_1616);
									PED::SET_PED_CAN_BE_TARGETTED(Local_753[10 /*33*/], false);
									PED::SET_PED_PROP_INDEX(Local_753[10 /*33*/], 1, 0, 1, false, 1);
								}
								else if (!PED::IS_PED_INJURED(Local_753[10 /*33*/]))
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[10 /*33*/], iLocal_1616);
									PED::SET_PED_CAN_BE_TARGETTED(Local_753[10 /*33*/], false);
								}
								if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2915[iParam0 /*10*/].f_7))
									{
										Local_2915[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2915[iParam0 /*10*/].f_7, true);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_753[11 /*33*/], Local_2915[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
								}
								if (!PED::IS_PED_INJURED(Local_753[10 /*33*/]))
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2915[iParam0 /*10*/].f_7))
									{
										Local_2915[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2915[iParam0 /*10*/].f_7, true);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_753[10 /*33*/], Local_2915[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
								}
								Local_2915[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(Local_753[10 /*33*/]) && !PED::IS_PED_INJURED(Local_753[11 /*33*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_753[10 /*33*/], 0, 0, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[11 /*33*/], true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_753[10 /*33*/], true);
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2915[iParam0 /*10*/].f_7))
								{
									Local_2915[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_753[11 /*33*/], Local_2915[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_753[10 /*33*/], Local_2915[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2915[iParam0 /*10*/].f_7, true);
								}
								PED::SET_PED_CONFIG_FLAG(Local_753[11 /*33*/], 118, false);
								PED::SET_PED_CONFIG_FLAG(Local_753[11 /*33*/], 208, true);
								PED::SET_PED_CONFIG_FLAG(Local_753[10 /*33*/], 118, false);
								PED::SET_PED_CONFIG_FLAG(Local_753[10 /*33*/], 208, true);
								Local_2915[iParam0 /*10*/].f_6 = 900;
							}
							break;
						
						case 900:
							if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
							{
								if (!PED::IS_PED_RAGDOLL(Local_753[11 /*33*/]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2915[iParam0 /*10*/].f_7))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2915[iParam0 /*10*/].f_7) == 1f)
										{
											Local_2915[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2915[iParam0 /*10*/].f_7, true);
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
											{
												TASK::TASK_SYNCHRONIZED_SCENE(Local_753[11 /*33*/], Local_2915[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
												if (!PED::IS_PED_INJURED(Local_753[10 /*33*/]))
												{
													if (!PED::IS_PED_RAGDOLL(Local_753[10 /*33*/]))
													{
														if (!BitTest(Local_2915[iParam0 /*10*/].f_8, 0))
														{
															TASK::TASK_SYNCHRONIZED_SCENE(Local_753[10 /*33*/], Local_2915[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
														}
													}
												}
											}
											else
											{
												TASK::TASK_SYNCHRONIZED_SCENE(Local_753[11 /*33*/], Local_2915[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
												if (!PED::IS_PED_INJURED(Local_753[10 /*33*/]))
												{
													if (!PED::IS_PED_RAGDOLL(Local_753[10 /*33*/]))
													{
														if (!BitTest(Local_2915[iParam0 /*10*/].f_8, 0))
														{
															TASK::TASK_SYNCHRONIZED_SCENE(Local_753[10 /*33*/], Local_2915[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_2915[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_753[11 /*33*/], Local_2915[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_2915[iParam0 /*10*/].f_7, true);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_753[10 /*33*/]))
							{
								if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_753[10 /*33*/], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(Local_753[10 /*33*/])) || PED::IS_PED_INJURED(Local_753[11 /*33*/])) || (!PED::IS_PED_INJURED(Local_753[10 /*33*/]) && TASK::GET_SCRIPT_TASK_STATUS(Local_753[10 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 2))
								{
									if (!BitTest(Local_2915[iParam0 /*10*/].f_8, 0))
									{
										TASK::CLEAR_PED_TASKS(Local_753[10 /*33*/]);
										func_99();
										TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 30f, 20000, false, false);
										TASK::TASK_COWER(0, -1);
										func_98(&(Local_753[10 /*33*/]), 0);
										MISC::SET_BIT(&(Local_2915[iParam0 /*10*/].f_8), 0);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
							{
								if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_753[11 /*33*/], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(Local_753[11 /*33*/])) || BitTest(Local_2915[iParam0 /*10*/].f_8, 1)) || (!PED::IS_PED_INJURED(Local_753[11 /*33*/]) && TASK::GET_SCRIPT_TASK_STATUS(Local_753[11 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 2))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_753[11 /*33*/], 0, 0);
									if (!PED::IS_PED_RAGDOLL(Local_753[11 /*33*/]))
									{
									}
								}
							}
							if (func_73(PLAYER::PLAYER_PED_ID(), 1991.988f, 3054.51f, 46.215f, 1) > 200f)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_753[11 /*33*/]) && ENTITY::DOES_ENTITY_EXIST(Local_753[10 /*33*/]))
								{
									PED::DELETE_PED(&(Local_753[11 /*33*/]));
									PED::DELETE_PED(&(Local_753[10 /*33*/]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaoCheng"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaosTranslator"));
								STREAMING::REMOVE_ANIM_DICT("misschinese2_crystalmaze");
								if (iLocal_2882 != -1)
								{
									if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2882))
									{
										PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2882);
									}
								}
								Local_2915[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (func_73(PLAYER::PLAYER_PED_ID(), 1995.1694f, 3062.1624f, 46.049f, 1) < 7f)
					{
						if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[11 /*33*/], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_753[11 /*33*/], PLAYER::PLAYER_PED_ID(), 4000, 2096, 2);
							}
						}
						if (!PED::IS_PED_INJURED(Local_753[10 /*33*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_753[10 /*33*/], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_753[10 /*33*/], PLAYER::PLAYER_PED_ID(), 4000, 2096, 2);
							}
						}
					}
					break;
				
				case 13:
					iVar13 = 0;
					iLocal_2885 = 0;
					iVar13 = 0;
					while (iVar13 < Local_753.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar13 /*33*/]))
						{
							if (PED::IS_PED_INJURED(Local_753[iVar13 /*33*/]))
							{
								if (Local_753[iVar13 /*33*/].f_21 == 0)
								{
									if (((PED::GET_PED_CAUSE_OF_DEATH(Local_753[iVar13 /*33*/]) == joaat("WEAPON_ASSAULTSNIPER") || PED::GET_PED_CAUSE_OF_DEATH(Local_753[iVar13 /*33*/]) == joaat("WEAPON_HEAVYSNIPER")) || PED::GET_PED_CAUSE_OF_DEATH(Local_753[iVar13 /*33*/]) == joaat("WEAPON_REMOTESNIPER")) || PED::GET_PED_CAUSE_OF_DEATH(Local_753[iVar13 /*33*/]) == joaat("WEAPON_SNIPERRIFLE"))
									{
										iLocal_2885++;
									}
									Local_753[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_2885 > 0)
					{
					}
					if (iLocal_2885 > 1)
					{
						func_171(150);
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 15f, 4);
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 15:
					if (func_93(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 16:
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_2673))
					{
						OBJECT::REMOVE_PICKUP(iLocal_2673);
					}
					iVar14 = 0;
					MISC::SET_BIT(&iVar14, 3);
					MISC::SET_BIT(&iVar14, 8);
					MISC::SET_BIT(&iVar14, 1);
					if (!OBJECT::DOES_PICKUP_EXIST(iLocal_2673))
					{
						iLocal_2673 = OBJECT::CREATE_PICKUP(joaat("PICKUP_WEAPON_PETROLCAN"), 2436.7747f, 4967.487f, 41.4f, iVar14, -1, true, 0);
						INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_2673, "V_8_BasementRm");
						iLocal_2675 = func_170(iLocal_2673);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_2675, "FRMBLIP");
					}
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 17:
					if (!func_30(5))
					{
						func_172(1);
						AUDIO::START_AUDIO_SCENE("CHI_2_SHOOTOUT_STEALTH");
						MISC::SET_INSTANCE_PRIORITY_HINT(1);
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 19:
					STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
					STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
					STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
					STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
					STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 20:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2915[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 4000;
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_2915[iParam0 /*10*/].f_7)
							{
								Local_2915[iParam0 /*10*/].f_7 = 0;
								while (Local_2915[iParam0 /*10*/].f_7 < Local_753.f_0)
								{
									if (!PED::IS_PED_INJURED(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_1617[Local_2915[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_1617[Local_2915[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_1617[Local_2915[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_105(Local_2915[iParam0 /*10*/].f_7, 27, 0, 0);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/], iLocal_1615);
											func_134(&(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_2915[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				
				case 21:
					Local_2915[iParam0 /*10*/].f_7 = 0;
					while (Local_2915[iParam0 /*10*/].f_7 < Local_753.f_0)
					{
						if (!PED::IS_PED_INJURED(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/], 2457.8848f, 4981.1694f, 50.00518f, 2441.5798f, 4965.0884f, 56.240055f, 34.3125f, false, true, 0))
							{
								PED::DELETE_PED(&(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_2915[iParam0 /*10*/].f_7++;
					}
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_753.f_0)
					{
						if (!PED::IS_PED_INJURED(Local_753[iVar15 /*33*/]))
						{
							if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_753[iVar15 /*33*/]) != MISC::GET_HASH_KEY("V_8_BasementRm"))
							{
								func_105(iVar15, 27, 0, 0);
								Local_753[iVar15 /*33*/].f_1 = 5;
								Local_1617[iVar15 /*24*/].f_3 = 7;
								Local_753[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 24:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2915[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_2915[iParam0 /*10*/].f_7 != -1)
							{
								Local_2915[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_105(Local_2915[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_2915[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_2915[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 25:
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || func_93(9))
					{
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 26:
					AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_STEALTH");
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 27:
					AUDIO::START_AUDIO_SCENE("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 28:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 44:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_93(12))
						{
							AUDIO::START_AUDIO_SCENE("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_162(12))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				
				case 45:
					if ((func_93(9) || (!PED::IS_PED_INJURED(Local_753[8 /*33*/]) && PED::IS_PED_IN_COMBAT(Local_753[8 /*33*/], 0))) || (!PED::IS_PED_INJURED(Local_753[9 /*33*/]) && PED::IS_PED_IN_COMBAT(Local_753[9 /*33*/], 0)))
					{
						if (!PED::IS_PED_INJURED(Local_753[8 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_753[8 /*33*/], 45);
						}
						if (!PED::IS_PED_INJURED(Local_753[9 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_753[9 /*33*/], 45);
						}
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
				
				case 29:
					if (func_93(9))
					{
						Local_2915[iParam0 /*10*/].f_7 = 0;
						while (Local_2915[iParam0 /*10*/].f_7 < Local_753.f_0)
						{
							if (!PED::IS_PED_INJURED(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/]))
							{
								PED::SET_PED_SEEING_RANGE(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_2915[iParam0 /*10*/].f_7++;
						}
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_2915[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_93(12))
								{
									Local_2915[iParam0 /*10*/].f_7 = 0;
									while (Local_2915[iParam0 /*10*/].f_7 < Local_753.f_0)
									{
										if (!PED::IS_PED_INJURED(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												PED::SET_PED_SEEING_RANGE(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_2915[iParam0 /*10*/].f_7++;
									}
									Local_2915[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_162(12))
								{
									Local_2915[iParam0 /*10*/].f_7 = 0;
									while (Local_2915[iParam0 /*10*/].f_7 < Local_753.f_0)
									{
										if (!PED::IS_PED_INJURED(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												PED::SET_PED_SEEING_RANGE(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_2915[iParam0 /*10*/].f_7++;
									}
									Local_2915[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				
				case 46:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
							{
								if (!PED::IS_PED_INJURED(Local_753[23 /*33*/]))
								{
									Local_2915[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2915[iParam0 /*10*/].f_7, true);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/], Local_2915[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1000f, 0);
									Local_2915[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 30:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::REQUEST_MODEL(joaat("blazer"));
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
							{
								iLocal_2506 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 2478.5867f, 4941.803f, 43.6736f, 227.2903f, true, true, false);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2506, 5f);
								Local_2915[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 31:
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
					func_169(0);
					func_167();
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 32:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_93(29))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_2675))
								{
									HUD::REMOVE_BLIP(&iLocal_2675);
								}
								func_12(0);
								if (func_90("FRMFLC", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								func_10(157, 0);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
								if (iLocal_2647 == 0)
								{
									iLocal_2647 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
								}
								Local_2915[iParam0 /*10*/].f_6++;
							}
							break;
						
						case 1:
							if (!func_93(29))
							{
								func_9(158, (iLocal_2647 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"))), 1);
								iLocal_2677 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PETROLCAN")), false, false, true);
								if (iLocal_2677 != 0)
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_2675))
									{
										HUD::REMOVE_BLIP(&iLocal_2675);
									}
									iLocal_2675 = func_13(iLocal_2677);
									func_12(1);
									func_11(0, 157);
								}
								Local_2915[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						func_11(0, 157);
						Local_2915[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				
				case 33:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							TASK::REQUEST_WAYPOINT_RECORDING("arm2_30");
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("arm2_30"))
							{
								if (func_93(29))
								{
									TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("arm2_30", true, 1f, 0.5f);
									TASK::ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES("arm2_30", 2);
									Local_2915[iParam0 /*10*/].f_6++;
								}
							}
							break;
						
						case 2:
							if (!func_93(29))
							{
								TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("arm2_30", false, 1f, 0.5f);
								Local_2915[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				
				case 34:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
						{
							if (func_73(PLAYER::PLAYER_PED_ID(), 2451.08f, 4961.4634f, 44.4392f, 1) < 20f)
							{
								HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(0, 0f, 0f, 0, 0);
							}
						}
					}
					break;
				
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_2666, "FarmhouseFire_Ignite", Local_2667, "CHINESE2_SOUNDS", false, 0, false);
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 37:
					AUDIO::START_AUDIO_SCENE("CHI_2_POUR_GAS");
					Local_2915[iParam0 /*10*/].f_3 = 1;
					break;
				
				case 38:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE", false, -1);
							AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE_BG", false, -1);
							break;
					}
					break;
				
				case 39:
					switch (Local_2915[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_2915[iParam0 /*10*/].f_7 = func_18(4);
							Local_2915[iParam0 /*10*/].f_6++;
							break;
						
						case 1:
							if (func_73(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/], 2454.8953f, 4950.8945f, 44.1488f, 1) > 100f && func_4(Local_753[Local_2915[iParam0 /*10*/].f_7 /*33*/], PLAYER::PLAYER_PED_ID(), 1) > 100f)
							{
								iVar16 = func_18(4);
								func_134(&(Local_753[iVar16 /*33*/].f_25));
								if (!PED::IS_PED_INJURED(Local_753[iVar16 /*33*/]))
								{
									PED::SET_PED_KEEP_TASK(Local_753[iVar16 /*33*/], true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[iVar16 /*33*/]));
								}
								Local_753[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								func_134(&(Local_753[iVar16 /*33*/].f_25));
								if (!PED::IS_PED_INJURED(Local_753[iVar16 /*33*/]))
								{
									PED::SET_PED_KEEP_TASK(Local_753[iVar16 /*33*/], true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[iVar16 /*33*/]));
								}
								Local_753[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!PED::IS_PED_INJURED(Local_753[iVar16 /*33*/]))
								{
									PED::SET_PED_KEEP_TASK(Local_753[iVar16 /*33*/], true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[iVar16 /*33*/]));
								}
								func_134(&(Local_753[iVar16 /*33*/].f_25));
								Local_753[iVar16 /*33*/] = 0;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2505, false))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2505);
								}
								Local_2915[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				
				case 40:
					if (func_107(24, joaat("A_M_M_Hillbilly_01"), 2433.1226f, 4960.47f, 45.8218f, 301f, joaat("WEAPON_SMG"), 1, 1))
					{
						PED::SET_PED_ACCURACY(Local_753[24 /*33*/], 100);
						if (!PED::IS_PED_INJURED(Local_753[15 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_753[15 /*33*/], 100);
						}
						if (!PED::IS_PED_INJURED(Local_753[16 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_753[16 /*33*/], 100);
						}
						if (!PED::IS_PED_INJURED(Local_753[17 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_753[17 /*33*/], 100);
						}
						TASK::TASK_COMBAT_PED(Local_753[24 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_753[24 /*33*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_753[24 /*33*/], 200, 0);
						Local_2915[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_2915[iParam0 /*10*/].f_6 == -1)
			{
				Local_2915[iParam0 /*10*/].f_3 = 1;
				Local_2915[iParam0 /*10*/].f_6 = 0;
				Local_2915[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_167()//Position - 0x16494
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	while (iVar0 < Local_442.f_0)
	{
		if (!func_168(Local_442[iVar0 /*5*/], 0f, 0f, 0f, 0))
		{
			FIRE::STOP_FIRE_IN_RANGE(Local_442[iVar0 /*5*/], 4f);
			MISC::CLEAR_AREA(Local_442[iVar0 /*5*/], 2f, true, false, false, false);
			iVar1 = 0;
			while (iVar1 < Local_753.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar1 /*33*/]))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(Local_753[iVar1 /*33*/], false) };
					if (SYSTEM::VDIST2(Var2, Local_442[iVar0 /*5*/]) < 2f && Var2.f_2 > 43.9f)
					{
						PED::DELETE_PED(&(Local_753[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_168(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x16547
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_169(bool bParam0)//Position - 0x1658E
{
	int iVar0;
	
	bLocal_263 = true;
	iLocal_267 = 0;
	iLocal_265 = -1;
	iLocal_441 = 0;
	iLocal_441 = 0;
	iLocal_435 = 0;
	if (bParam0 == 0)
	{
		iLocal_260 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_442.f_0)
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_442[iVar0 /*5*/], 1f);
		if (!HUD::DOES_BLIP_EXIST(Local_442[iVar0 /*5*/].f_3))
		{
			if (!func_168(Local_442[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_267++;
				Local_442[iVar0 /*5*/].f_3 = func_5(Local_442[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_442[iVar0 /*5*/].f_3, true);
				HUD::SET_BLIP_SCALE(Local_442[iVar0 /*5*/].f_3, 0.4f);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_442[iVar0 /*5*/].f_3, false);
				if (!bParam0)
				{
					HUD::SET_BLIP_ALPHA(Local_442[iVar0 /*5*/].f_3, 0);
				}
				HUD::SET_BLIP_COLOUR(Local_442[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_442[iVar0 /*5*/] = { HUD::GET_BLIP_COORDS(Local_442[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				HUD::SET_BLIP_ALPHA(Local_442[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				HUD::SET_BLIP_ALPHA(Local_442[iVar0 /*5*/].f_3, 255);
			}
			iLocal_267++;
		}
		Local_442[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_279.f_0)
	{
		Local_279[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_279[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_170(int iParam0)//Position - 0x166EC
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

void func_171(int iParam0)//Position - 0x16724
{
	bool bVar0;
	int iVar1;
	
	Global_63486 = 0;
	if (!Global_63710[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_75580)
	{
		if (Global_75581[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_75581[iVar1 /*9*/].f_1 = 1;
			Global_75581[iVar1 /*9*/].f_2 = 0f;
			if (Global_75581[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_172(bool bParam0)//Position - 0x16795
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

var func_173()//Position - 0x167C1
{
	var uVar0;
	
	return uVar0;
}

int func_174()//Position - 0x167CB
{
	if (((((PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/) != 127 || PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/) != 127) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 24 /*INPUT_ATTACK*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 25 /*INPUT_AIM*/)) || PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 2 /*INPUT_LOOK_UD*/) != 127) || PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/) != 127)
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0, int iParam1)//Position - 0x1682D
{
	if (Local_2915[iParam0 /*10*/] == iParam1)
	{
		return Local_2915[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_176(int iParam0, int iParam1)//Position - 0x1684E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = (iParam1 - iParam0);
	if (Local_3118[0 /*8*/] != iParam0 && Local_3118[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_3118.f_0)
		{
			if (iVar1 <= iVar0)
			{
				Local_3118[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_3118[iVar1 /*8*/].f_1 = 1;
				Local_3118[iVar1 /*8*/].f_2 = 0;
				Local_3118[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_3118[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_3118.f_0)
	{
		switch (Local_3118[iVar3 /*8*/])
		{
			case 2:
				if (!Local_3118[iVar3 /*8*/].f_2)
				{
					if (Local_3118[iVar3 /*8*/].f_4 == 0)
					{
						if (func_90("FRMCHSE_1", 0, 0))
						{
							Local_3118[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!func_90("FRMCHSE_1", 0, 0))
					{
						Local_3118[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 3:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 6:
				if (!Local_3118[iVar3 /*8*/].f_2)
				{
					if (func_162(7))
					{
						if (MISC::HAS_BULLET_IMPACTED_IN_AREA(2493.155f, 4970.315f, 43.88038f, 3.25f, true, true) || MISC::IS_BULLET_IN_AREA(2493.155f, 4970.315f, 43.88038f, 3.25f, true))
						{
							Local_3118[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_3118[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			
			case 7:
				if (!Local_3118[iVar3 /*8*/].f_2)
				{
					switch (Local_3118[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_3118[iVar3 /*8*/].f_5 = func_18(8);
							Local_3118[iVar3 /*8*/].f_6 = func_18(9);
							Local_3118[iVar3 /*8*/].f_4++;
							break;
						
						case 1:
							if (Local_3118[iVar3 /*8*/].f_5 != -1 && Local_3118[iVar3 /*8*/].f_6 != -1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_753[Local_3118[iVar3 /*8*/].f_5 /*33*/]) && ENTITY::DOES_ENTITY_EXIST(Local_753[Local_3118[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (PED::IS_PED_INJURED(Local_753[Local_3118[iVar3 /*8*/].f_5 /*33*/]) || PED::IS_PED_INJURED(Local_753[Local_3118[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_3118[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			
			case 9:
				if (bLocal_51)
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
					Local_3118[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 11:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("V_8_BasementRm"))
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 12:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2421.3308f, 4954.833f, 25.328293f, 2466.7961f, 4996.8223f, 66.070175f, 37.1875f, false, true, 0))
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 13:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				if (func_93(12))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2457.8848f, 4981.1694f, 50.00518f, 2441.5798f, 4965.0884f, 56.240055f, 34.3125f, false, true, 0))
					{
						Local_3118[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 14:
				if (!Local_3118[iVar3 /*8*/].f_2)
				{
					if (func_73(PLAYER::PLAYER_PED_ID(), 2451.5173f, 4973.122f, 44.2646f, 1) < 50f)
					{
						Local_3118[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 15:
				switch (Local_3118[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_3118[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_3118[iVar3 /*8*/].f_5 != -1)
						{
							Local_3118[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(Local_753[Local_3118[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (PED::IS_PED_INJURED(Local_753[Local_3118[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (func_73(Local_753[Local_3118[iVar3 /*8*/].f_5 /*33*/], 2427.8506f, 4964.9717f, 43.1704f, 1) < 3f)
								{
									Local_3118[iVar3 /*8*/].f_2 = 1;
									Local_3118[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_3118[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			
			case 16:
				if (!Local_3118[iVar3 /*8*/].f_2)
				{
					switch (Local_3118[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_3118[iVar3 /*8*/].f_4++;
							}
							break;
						
						case 1:
							bVar5 = false;
							bVar6 = false;
							iVar4 = 0;
							while (iVar4 < Local_753.f_0)
							{
								if (!PED::IS_PED_INJURED(Local_753[iVar4 /*33*/]))
								{
									bVar5 = true;
									if (Local_753[iVar4 /*33*/].f_1 == 1)
									{
										bVar6 = true;
										iVar4 = Local_753.f_0;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_3118[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_3118[iVar3 /*8*/].f_2 = 0;
							}
							if (bVar6)
							{
								func_97(10, 0);
							}
							else
							{
								func_97(10, 1);
							}
							break;
						}
				}
				break;
			
			case 23:
				if (!Local_3118[iVar3 /*8*/].f_2)
				{
					if (func_93(9))
					{
						Local_3118[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = 0;
						while (iVar7 < Local_753.f_0)
						{
							if (Local_753[iVar7 /*33*/].f_1 == 1)
							{
								if (!PED::IS_PED_INJURED(Local_753[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_3118[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_753.f_0;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			
			case 24:
				switch (Local_3118[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_73(PLAYER::PLAYER_PED_ID(), 2446.6738f, 4977.7876f, 57.4583f, 1) < 250f)
						{
							Local_3118[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar9)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar9)))
							{
								if (func_73(PLAYER::PLAYER_PED_ID(), 2446.6738f, 4977.7876f, 57.4583f, 0) > 700f)
								{
									Local_3118[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
						else
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (func_73(PLAYER::PLAYER_PED_ID(), 2446.6738f, 4977.7876f, 57.4583f, 1) > 250f)
							{
								Local_3118[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			
			case 26:
				if (func_73(PLAYER::PLAYER_PED_ID(), 2441.065f, 4968.8193f, 45.830746f, 1) < 2.75f)
				{
					if (!PED::IS_PED_INJURED(Local_753[15 /*33*/]))
					{
						if (func_73(Local_753[15 /*33*/], 2439.386f, 4962.0493f, 45.904697f, 1) < 3f)
						{
							Local_3118[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(Local_753[16 /*33*/]))
					{
						if (func_73(Local_753[16 /*33*/], 2439.386f, 4962.0493f, 45.904697f, 1) < 3f)
						{
							Local_3118[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(Local_753[17 /*33*/]))
					{
						if (func_73(Local_753[17 /*33*/], 2439.386f, 4962.0493f, 45.904697f, 1) < 3f)
						{
							Local_3118[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_3118[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 27:
				switch (Local_3118[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!PED::IS_PED_INJURED(Local_753[4 /*33*/]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_753[4 /*33*/]))
						{
							Local_3118[iVar3 /*8*/].f_4++;
						}
						if (!PED::IS_PED_INJURED(Local_753[5 /*33*/]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_753[5 /*33*/]))
						{
							Local_3118[iVar3 /*8*/].f_4++;
						}
						if (!PED::IS_PED_INJURED(Local_753[7 /*33*/]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_753[7 /*33*/]))
						{
							Local_3118[iVar3 /*8*/].f_4++;
						}
						Local_3118[iVar3 /*8*/].f_5 = MISC::GET_GAME_TIMER() + 8000;
						break;
					
					case 1:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2505, false))
						{
							if (func_96(ENTITY::GET_ENTITY_COORDS(iLocal_2505, true), 5f, 150f))
							{
								Local_3118[iVar3 /*8*/].f_6 = (Local_3118[iVar3 /*8*/].f_6 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
							}
						}
						if (Local_3118[iVar3 /*8*/].f_6 > 1500)
						{
							Local_3118[iVar3 /*8*/].f_2 = 1;
						}
						if (MISC::GET_GAME_TIMER() > Local_3118[iVar3 /*8*/].f_5)
						{
							Local_3118[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 30:
				switch (Local_3118[iVar3 /*8*/].f_4)
				{
					case 0:
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_2673))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_2673))
							{
								Local_3118[iVar3 /*8*/].f_4++;
							}
						}
						break;
					
					case 1:
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_2673))
						{
							if (!OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_2673))
							{
								if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 2435.2524f, 4966.748f, 41.3476f, 4f))
								{
									Local_3118[iVar3 /*8*/].f_2 = 1;
								}
								Local_3118[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			
			case 8:
				if (iLocal_55 && !bLocal_51)
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 17:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2442.8186f, 4970.283f, 45.248096f, 2439.6252f, 4966.862f, 48.14596f, 3.4375f, false, true, 0))
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 18:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2434.6714f, 4959.1045f, 44.851093f, 2440.4998f, 4965.189f, 48.123096f, 3.625f, false, true, 0))
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 19:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2432.4673f, 4959.4727f, 44.941334f, 2430.7969f, 4961.173f, 48.309013f, 1.5625f, false, true, 0))
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 21:
				if (bLocal_54)
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
					Local_3118[iVar3 /*8*/].f_1 = 0;
				}
				break;
			
			case 32:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2447.6714f, 4951.4385f, 43.255756f, 2454.6638f, 4957.856f, 47.891174f, 6.8125f, false, true, 0))
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 33:
				switch (Local_3118[iVar3 /*8*/].f_4)
				{
					case 0:
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
						{
							Local_3118[iVar3 /*8*/].f_4++;
						}
						break;
					
					case 1:
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
						{
							Local_3118[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			
			case 29:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				switch (Local_3118[iVar3 /*8*/].f_5)
				{
					case 0:
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
						{
							Local_3118[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_3118[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
				{
					if (Local_3118[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 34:
				if (!Local_3118[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						func_11(0, 157);
						Local_3118[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 35:
				if (Local_442[0 /*5*/].f_4 == 1)
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 36:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("WEAPON_UNARMED");
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar11, true))
				{
					if (iVar11 == joaat("WEAPON_PETROLCAN"))
					{
						if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
						{
							Local_3118[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			
			case 44:
				if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 2435.776f, 4963.067f, 39.34265f, 2428.1184f, 4971.287f, 43.673267f, 11.875f))
				{
					if (!FIRE::IS_EXPLOSION_IN_ANGLED_AREA(24, 2435.776f, 4963.067f, 39.34265f, 2428.1184f, 4971.287f, 43.673267f, 11.875f) && !FIRE::IS_EXPLOSION_IN_ANGLED_AREA(22, 2435.776f, 4963.067f, 39.34265f, 2428.1184f, 4971.287f, 43.673267f, 11.875f))
					{
						Local_3118[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 41:
				switch (Local_3118[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_180())
						{
							iVar12 = func_179();
							if (iVar12 <= 17)
							{
								func_97(37, 1);
							}
							else
							{
								Local_3118[iVar3 /*8*/].f_2 = 1;
							}
							Local_3118[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 38:
				if (!Local_3118[iVar3 /*8*/].f_2)
				{
					if (func_178(17))
					{
						Local_3118[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 40:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 42:
				if (func_73(PLAYER::PLAYER_PED_ID(), 2439.52f, 4969.67f, 52.65f, 1) > 42.5f)
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 43:
				if (func_73(PLAYER::PLAYER_PED_ID(), 2439.52f, 4969.67f, 52.65f, 1) > 60f)
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 39:
				if (func_177())
				{
					if (!func_180())
					{
						Local_3118[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 47:
				switch (Local_3118[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_3118[iVar3 /*8*/].f_5 = MISC::GET_GAME_TIMER() + 30000;
						Local_3118[iVar3 /*8*/].f_4++;
						break;
					
					case 1:
						if (MISC::GET_GAME_TIMER() > Local_3118[iVar3 /*8*/].f_5)
						{
							Local_3118[iVar3 /*8*/].f_2 = 1;
							Local_3118[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			
			case 48:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				if (!Local_3118[iVar3 /*8*/].f_2)
				{
					if (func_73(PLAYER::PLAYER_PED_ID(), 2448.25f, 4974.92f, 55.11f, 1) > 300f)
					{
						Local_3118[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 51:
				if (func_153(1, 49))
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
			
			case 49:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				if (!Local_3118[iVar3 /*8*/].f_2)
				{
					if (func_73(PLAYER::PLAYER_PED_ID(), 2448.25f, 4974.92f, 55.11f, 1) > 500f)
					{
						Local_3118[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			
			case 50:
				Local_3118[iVar3 /*8*/].f_2 = 0;
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					Local_3118[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

int func_177()//Position - 0x177E7
{
	if (iLocal_435 == 1)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)//Position - 0x177FB
{
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_442[iParam0 /*5*/], 0.6f) > 0)
	{
		return 1;
	}
	return 0;
}

int func_179()//Position - 0x1781E
{
	return iLocal_278;
}

int func_180()//Position - 0x17829
{
	int iVar0;
	
	iVar0 = (Local_442.f_0 - 1);
	while (iVar0 >= 0)
	{
		if (Local_442[iVar0 /*5*/].f_4)
		{
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_442[iVar0 /*5*/], 0.6f) > 0)
			{
				Local_275 = { Local_442[iVar0 /*5*/] };
				iLocal_278 = iVar0;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_181()//Position - 0x17888
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GRAPHICS::SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME();
	if ((func_202() && iLocal_2510 > 0) && MISC::GET_GAME_TIMER() > iLocal_2639)
	{
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			func_28(28, 1);
		}
		iLocal_3688 = 0;
		while (!func_201())
		{
			func_28(32322, 1);
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2474.9697f, 4946.0474f, 44.0297f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 230.6937f);
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		func_192(0, 1, 1, 0, 0, 0, 0);
		CAM::DESTROY_ALL_CAMS(false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		HUD::CLEAR_PRINTS();
		AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOW_MO_METH_HOUSE_RAYFIRE");
		iLocal_2670 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_2638 = 0;
		iLocal_2643 = iLocal_2643;
		iLocal_2643 = 99;
		iLocal_2510 = 99;
		iLocal_2452 = 3;
		fLocal_2451 = 10000f;
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), true);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), true);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
		AUDIO::STOP_STREAM();
		RECORDING::REPLAY_STOP_EVENT();
		bLocal_2645 = true;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_2510)
	{
		case 0:
			func_201();
			bLocal_2645 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_442[iVar0 /*5*/] = { Local_442[iVar0 /*5*/] + Vector(0.6f, 0f, 0f) };
				iVar0++;
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_POUR_GAS"))
			{
				AUDIO::STOP_AUDIO_SCENE("CHI_2_POUR_GAS");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOT_GAS"))
			{
				AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOT_GAS");
			}
			AUDIO::START_AUDIO_SCENE("CHI_2_GAS_TRAIL_FIRE");
			iLocal_2639 = MISC::GET_GAME_TIMER() + 1000;
			MISC::CLEAR_AREA(2570.53f, 4982.057f, 50.6819f, 100f, true, false, false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			func_87(0);
			iLocal_3489 = 0;
			func_87(1);
			HUD::CLEAR_PRINTS();
			func_191(2467.775f, 4954.4146f, 42.878033f, 2477.0889f, 4945.079f, 46.16654f, 4.0625f, 2486.8542f, 4939.086f, 43.2578f, 230f, 1, 1, 1, 0, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2455.9414f, 4952.8013f, 44.112f, true, false, false, true);
			}
			MISC::SET_TIME_SCALE(1f);
			STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
			STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
			STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
			STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
			STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
			STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_MethHead_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			iVar1 = 0;
			while (iVar1 < Local_753.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar1 /*33*/]))
				{
					PED::DELETE_PED(&(Local_753[iVar1 /*33*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar1 /*33*/].f_20))
				{
					OBJECT::DELETE_OBJECT(&(Local_753[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_2510++;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			iLocal_2510++;
			break;
	}
	if (iLocal_2340)
	{
		iLocal_2340 = 0;
		iVar2 = 0;
		while (iVar2 < Local_2378.f_0)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_2341.f_0)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_2378.f_0)
	{
		if (iLocal_2453[iVar2])
		{
			iLocal_2453[iVar2] = 0;
			Local_2378[iVar2 /*18*/] = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			Local_2378[iVar2 /*18*/].f_3 = { CAM::GET_CAM_ROT(CAM::GET_RENDERING_CAM(), 2) };
			Local_2378[iVar2 /*18*/].f_14 = CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM());
		}
		if (iLocal_2458[iVar2])
		{
			iLocal_2458[iVar2] = 0;
			Local_2378[iVar2 /*18*/].f_6 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			Local_2378[iVar2 /*18*/].f_9 = { CAM::GET_CAM_ROT(CAM::GET_RENDERING_CAM(), 2) };
			Local_2378[iVar2 /*18*/].f_15 = CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM());
		}
		iVar2++;
	}
	if (iLocal_2338)
	{
		iLocal_2338 = 0;
		bLocal_2339 = false;
		iLocal_2671 = 0;
		MISC::CLEAR_AREA(2431.097f, 4967.043f, 41.3476f, 20f, true, false, false, false);
		func_190();
	}
	if (!bLocal_2339)
	{
		if (STREAMING::IS_SRL_LOADED())
		{
			STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
			STREAMING::BEGIN_SRL();
			iLocal_2452 = -1;
			CAM::DESTROY_ALL_CAMS(false);
			func_192(1, 1, 1, 0, 0, 0, 0);
			STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
			bLocal_2339 = true;
			Local_2341[0 /*6*/] = 0;
			Local_2341[1 /*6*/] = 0;
			Local_2341[2 /*6*/] = 0;
			Local_2341[3 /*6*/] = 0;
			Local_2341[0 /*6*/].f_4 = 0;
			Local_2341[0 /*6*/].f_5 = 0;
			Local_2341[1 /*6*/].f_4 = 0;
			Local_2341[1 /*6*/].f_5 = 0;
			Local_2341[2 /*6*/].f_4 = 0;
			Local_2341[2 /*6*/].f_5 = 0;
			Local_2341[3 /*6*/].f_4 = 0;
			Local_2341[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			AUDIO::PLAY_STREAM_FRONTEND();
			RECORDING::REPLAY_START_EVENT(4);
			switch (iLocal_2646)
			{
				case 3:
					SYSTEM::SETTIMERA(0);
					break;
				
				case 2:
					Local_2341[0 /*6*/] = 1;
					Local_2341[1 /*6*/] = 1;
					SYSTEM::SETTIMERA(10900);
					iLocal_2452 = 2;
					fLocal_2451 = 10000f;
					break;
				
				case 1:
					Local_2341[0 /*6*/] = 1;
					SYSTEM::SETTIMERA(6400);
					iLocal_2452 = 1;
					fLocal_2451 = 10000f;
					break;
			}
			iLocal_2503 = 0;
		}
	}
	if (bLocal_2339)
	{
		STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	}
	if (bLocal_2339)
	{
		fLocal_2451 = (fLocal_2451 + SYSTEM::TIMESTEP());
		if (iLocal_2452 == -1 || ((iLocal_2452 != -1 && iLocal_2452 < 4) && fLocal_2451 > (Local_2378[iLocal_2452 /*18*/].f_13 / 1000f)))
		{
			iLocal_2452++;
			if (iLocal_2452 == 3)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
				{
					iLocal_2635 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
					iLocal_2636 = PED::CREATE_SYNCHRONIZED_SCENE(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 2);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_2635, iLocal_2636, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2636, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1000f, 0);
					}
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					func_190();
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
					fLocal_2451 = 0f;
				}
			}
			else if (iLocal_2452 < 4)
			{
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_2635 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_2378[iLocal_2452 /*18*/], Local_2378[iLocal_2452 /*18*/].f_3, Local_2378[iLocal_2452 /*18*/].f_14, true, 2);
				CAM::SET_CAM_PARAMS(iLocal_2635, Local_2378[iLocal_2452 /*18*/].f_6, Local_2378[iLocal_2452 /*18*/].f_9, Local_2378[iLocal_2452 /*18*/].f_15, SYSTEM::FLOOR(Local_2378[iLocal_2452 /*18*/].f_12), Local_2378[iLocal_2452 /*18*/].f_16, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (iLocal_2452 < 2)
				{
					func_189(Local_2378[iLocal_2452 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_189(Local_2378[iLocal_2452 /*18*/].f_17, 1, 0);
				}
				fLocal_2451 = 0f;
			}
			else if (!bLocal_2337)
			{
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (func_188() && !bLocal_2645)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				func_187(0, 0, 1, 0);
				AUDIO::STOP_AUDIO_SCENE("CHI_2_GAS_TRAIL_FIRE");
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670, 9);
				MISC::SET_TIME_SCALE(1f);
				STREAMING::END_SRL();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					while (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670) != 10)
					{
						func_28(29, 1);
					}
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				RECORDING::REPLAY_STOP_EVENT();
				func_182(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_2341.f_0)
		{
			if (!Local_2341[iVar3 /*6*/])
			{
				if (iLocal_2452 == Local_2341[iVar3 /*6*/].f_1 && fLocal_2451 > (Local_2341[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_2341[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_2503 = 0;
									if (MISC::GET_GAME_TIMER() > Local_2341[iVar3 /*6*/].f_5)
									{
										func_128(Local_2463[iLocal_2503 /*3*/], 0);
										Local_2341[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2341[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_2341[iVar3 /*6*/].f_5)
									{
										func_128(Local_2463[iLocal_2503 /*3*/] + Local_2463[iLocal_2503 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_2503++;
										if (iLocal_2503 >= 12)
										{
											Local_2341[iVar3 /*6*/].f_4 = 10;
											Local_2341[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_2341[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
											Local_2341[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								
								case 2:
									if (MISC::GET_GAME_TIMER() > Local_2341[iVar3 /*6*/].f_5)
									{
										func_128(Local_2463[iLocal_2503 /*3*/], 0);
										Local_2341[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										if (iLocal_2503 == 2)
										{
											Local_2341[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_2341[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								
								case 3:
									if (MISC::GET_GAME_TIMER() > Local_2341[iVar3 /*6*/].f_5)
									{
										func_128(Local_2463[iLocal_2503 /*3*/] + Local_2463[iLocal_2503 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(Local_2463[iLocal_2503 /*3*/] + Local_2463[iLocal_2503 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2341[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2341[iVar3 /*6*/].f_4 = 4;
										iLocal_2503 = 3;
									}
									break;
								
								case 4:
									if (MISC::GET_GAME_TIMER() > Local_2341[iVar3 /*6*/].f_5)
									{
										func_128(Local_2463[iLocal_2503 /*3*/], 0);
										func_128(Local_2463[iLocal_2503 + 1 /*3*/], 0);
										Local_2341[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2341[iVar3 /*6*/].f_4 = 5;
									}
									break;
								
								case 5:
									if (MISC::GET_GAME_TIMER() > Local_2341[iVar3 /*6*/].f_5)
									{
										func_128(Local_2463[iLocal_2503 /*3*/] + Local_2463[iLocal_2503 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(Local_2463[iLocal_2503 + 1 /*3*/] + Local_2463[iLocal_2503 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_2341[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2341[iVar3 /*6*/].f_4 = 6;
										iLocal_2503 = 5;
									}
									break;
								
								case 6:
									if (MISC::GET_GAME_TIMER() > Local_2341[iVar3 /*6*/].f_5)
									{
										func_128(Local_2463[iLocal_2503 /*3*/], 0);
										func_128(Local_2463[iLocal_2503 + 1 /*3*/], 0);
										Local_2341[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_2341[iVar3 /*6*/].f_4 = 2;
										iLocal_2503 = 7;
									}
									break;
							}
							break;
						
						case 1:
							FIRE::ADD_EXPLOSION(2432.534f, 4968.383f, 42.2389f, 4, 0.5f, true, false, 1f, false);
							Local_2341[iVar3 /*6*/] = 1;
							break;
						
						case 2:
							iLocal_2671 = 1;
							Local_2341[iVar3 /*6*/] = 1;
							break;
						
						case 3:
							if (CAM::DOES_CAM_EXIST(iLocal_2635))
							{
								CAM::SHAKE_CAM(iLocal_2635, "LARGE_EXPLOSION_SHAKE", fLocal_2637);
								CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_2635, 0.1f);
								Local_2341[iVar3 /*6*/] = 1;
							}
							break;
						
						case 4:
							switch (Local_2341[iVar3 /*6*/].f_4)
							{
								case 0:
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2473.208f, 4947.6245f, 44.0664f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 223.493f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
									if (func_188())
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), true, 0, false);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false, 0);
									}
									else
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 0, false);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false, 0);
									}
									Local_2341[iVar3 /*6*/].f_4++;
									break;
								
								case 1:
									break;
							}
							break;
						
						case 5:
							switch (Local_2341[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_2672 = 1f;
									Local_2341[iVar3 /*6*/].f_4++;
									Local_2341[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 1300;
									AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								
								case 1:
									fLocal_2672 = (fLocal_2672 - (SYSTEM::TIMESTEP() * 1f));
									if (fLocal_2672 < 0.2f)
									{
										fLocal_2672 = 0.2f;
									}
									MISC::SET_TIME_SCALE(fLocal_2672);
									if (MISC::GET_GAME_TIMER() > Local_2341[iVar3 /*6*/].f_5)
									{
										Local_2341[iVar3 /*6*/].f_4++;
									}
									break;
								
								case 2:
									fLocal_2672 = (fLocal_2672 + (SYSTEM::TIMESTEP() * 1f));
									if (fLocal_2672 > 1f)
									{
										fLocal_2672 = 1f;
										Local_2341[iVar3 /*6*/].f_4++;
										Local_2341[iVar3 /*6*/] = 1;
									}
									AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOW_MO_METH_HOUSE_RAYFIRE");
									MISC::SET_TIME_SCALE(fLocal_2672);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_182(int iParam0)//Position - 0x18623
{
	func_186();
	func_185();
	func_184();
	func_183();
	if (iParam0 == 11)
	{
		iLocal_2509++;
	}
	else
	{
		iLocal_2509 = iParam0;
	}
}

void func_183()//Position - 0x18652
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3356.f_0)
	{
		Local_3356[iVar0 /*7*/] = 0;
		Local_3356[iVar0 /*7*/].f_1 = 0;
		Local_3356[iVar0 /*7*/].f_3 = 0;
		Local_3356[iVar0 /*7*/].f_2 = 0;
		Local_3356[iVar0 /*7*/].f_4 = 0;
		Local_3356[iVar0 /*7*/].f_5 = 0;
		Local_3356[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_184()//Position - 0x186B2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2915.f_0)
	{
		if (Local_2915[iVar0 /*10*/].f_4)
		{
			Local_2915[iVar0 /*10*/].f_1 = 1;
			Local_2915[iVar0 /*10*/].f_6 = -1;
			func_166(iVar0, Local_2915[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_2915[iVar0 /*10*/] = 0;
		Local_2915[iVar0 /*10*/].f_1 = 0;
		Local_2915[iVar0 /*10*/].f_2 = 0;
		Local_2915[iVar0 /*10*/].f_3 = 0;
		Local_2915[iVar0 /*10*/].f_6 = 0;
		Local_2915[iVar0 /*10*/].f_4 = 0;
		Local_2915[iVar0 /*10*/].f_5 = 0;
		Local_2915[iVar0 /*10*/].f_7 = 0;
		Local_2915[iVar0 /*10*/].f_8 = 0;
		Local_2915[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_185()//Position - 0x18766
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3118.f_0)
	{
		Local_3118[iVar0 /*8*/] = 0;
		Local_3118[iVar0 /*8*/].f_1 = 0;
		Local_3118[iVar0 /*8*/].f_2 = 0;
		Local_3118[iVar0 /*8*/].f_3 = 0;
		Local_3118[iVar0 /*8*/].f_4 = 0;
		Local_3118[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_186()//Position - 0x187BC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_3335.f_0)
	{
		Local_3335[iVar0 /*4*/] = 0;
		Local_3335[iVar0 /*4*/].f_1 = 0;
		Local_3335[iVar0 /*4*/].f_2 = 0;
		Local_3335[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

int func_187(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x187FE
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && iParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_188()//Position - 0x18831
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_189(int iParam0, bool bParam1, int iParam2)//Position - 0x1884A
{
	int iVar0;
	
	iLocal_436 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_435 = 1;
		iLocal_437 = MISC::GET_GAME_TIMER();
		iLocal_438 = iParam0 * 2;
		iLocal_440 = iLocal_438;
		if (bParam1)
		{
			iLocal_441 = 0;
		}
		else
		{
			iLocal_441 = iLocal_438;
		}
		iVar0 = 0;
		while (iVar0 < Local_442.f_0)
		{
			Local_442[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_279.f_0)
		{
			FIRE::REMOVE_SCRIPT_FIRE(Local_279[iVar0 /*5*/]);
			if (Local_279[iVar0 /*5*/].f_4 != 0)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_279[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			Local_279[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_190()//Position - 0x188F0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_279.f_0)
	{
		FIRE::REMOVE_SCRIPT_FIRE(Local_279[iVar0 /*5*/]);
		Local_279[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_169(0);
	iVar0 = 0;
	while (iVar0 < Local_442.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_442[iVar0 /*5*/].f_3))
		{
			HUD::REMOVE_BLIP(&(Local_442[iVar0 /*5*/].f_3));
		}
		Local_442[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_267 = -1;
}

void func_191(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x18965
{
	func_76(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_192(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1898E
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_200(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20500.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_45())
			{
				Global_20500.f_1 = 3;
			}
			Global_21845 = 5;
		}
		func_187(1, bParam3, iParam2, 0);
		Global_63491 = 1;
		Global_75819 = 1;
		Global_78687 = 1;
	}
	else
	{
		func_200(0);
		HUD::THEFEED_RESUME();
		Global_63491 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_187(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_198(PLAYER::PLAYER_ID())) && !func_194(PLAYER::PLAYER_ID(), 0)) && !func_193()) && !bParam4) && !bParam5) && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_198(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78687 = 0;
	}
}

bool func_193()//Position - 0x18ADB
{
	return BitTest(Global_1853988[PLAYER::PLAYER_ID() /*867*/].f_36.f_18, 14);
}

bool func_194(int iParam0, int iParam1)//Position - 0x18AF5
{
	bool bVar0;
	
	if (!func_197(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_195(-1, 0) == 8;
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

int func_195(int iParam0, bool bParam1)//Position - 0x18B4E
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_196();
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

int func_196()//Position - 0x18B8F
{
	return Global_1574918;
}

int func_197(var uParam0)//Position - 0x18B9B
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

int func_198(int iParam0)//Position - 0x18BBD
{
	if (func_194(iParam0, 0))
	{
		return 1;
	}
	if (func_199())
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

bool func_199()//Position - 0x18BFC
{
	return BitTest(Global_2621446, 3);
}

void func_200(int iParam0)//Position - 0x18C0A
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

int func_201()//Position - 0x18C2D
{
	switch (iLocal_3688)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent001"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent002"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent003"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent004"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent005"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent006"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent007"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent008"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent009"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent010"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent011"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent012"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent013"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent014"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_3688++;
			break;
		
		case 1:
			if (((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent")) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent001"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent002"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent003"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent004"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent005"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent006"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent007"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent008"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent009"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent010"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent011"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent012"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent013"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent014"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_202()//Position - 0x18DCA
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
	{
		return 1;
	}
	return 0;
}

void func_203()//Position - 0x18DFC
{
	GRAPHICS::SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME();
	func_176(28, 45);
	func_155(0, 7, 0, 0, 1, 0, 1, 0);
	func_155(1, 8, 2, 29, 1, 0, 1, 0);
	func_155(2, 9, 2, 35, 5, 34, 1, 0);
	func_155(3, 10, 2, 42, 1, 0, 1, 0);
	func_163(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_163(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_163(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_205(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_166(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_166(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_166(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_204(0, 2, 33, 5, 34);
	func_204(4, 2, 43, 1, 0);
	func_204(2, 2, 39, 1, 0);
	if (iLocal_2646 == 0)
	{
		if (func_93(37) && !func_93(44))
		{
			iLocal_2646 = 3;
		}
		if (func_93(41) && !func_93(44))
		{
			iLocal_2644 = 1;
			iLocal_2646 = 1;
		}
		if (func_175(10, 11) == 2)
		{
			iLocal_2646 = 2;
			iLocal_2644 = 1;
		}
	}
	func_166(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_93(37) && func_93(38)) || iLocal_2644) && func_175(13, 10) == 10) && !func_88("CHI2_light"))
	{
		func_204(1, 2, 40, 1, 0);
		if (HUD::DOES_BLIP_EXIST(iLocal_2675))
		{
			HUD::REMOVE_BLIP(&iLocal_2675);
		}
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		func_12(1);
		func_182(11);
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x19056
{
	if (func_158(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_136("CHFAIL1");
				break;
			
			case 1:
				func_136("FRMSOON");
				break;
			
			case 2:
				func_136("FRMTRAI");
				break;
			
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Local_753[11 /*33*/]))
				{
					if (PED::IS_PED_INJURED(Local_753[11 /*33*/]))
					{
						func_136("FRMCHI");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_753[10 /*33*/]))
				{
					if (PED::IS_PED_INJURED(Local_753[10 /*33*/]))
					{
						func_136("FRMCHI2");
					}
				}
				break;
			
			case 4:
				func_136("CHFAIL2");
				break;
			
			case 5:
				func_136("FRMGASF");
				break;
			}
	}
}

void func_205(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x1911E
{
	if (!Local_3356[iParam0 /*7*/].f_1)
	{
		if (func_206(iParam2, iParam3))
		{
			func_163(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_206(int iParam0, int iParam1)//Position - 0x19154
{
	if (Local_3356[iParam0 /*7*/] == iParam1)
	{
		if (Local_3356[iParam0 /*7*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_3356[iParam0 /*7*/] != 0)
	{
	}
	return 0;
}

void func_207()//Position - 0x19187
{
	func_176(5, 31);
	func_155(0, 2, 0, 0, 1, 0, 1, 0);
	func_155(1, 3, 2, 8, 1, 0, 1, 0);
	func_155(2, 5, 2, 9, 1, 0, 1, 0);
	func_155(3, 11, 0, 0, 1, 0, 1, 0);
	func_155(4, 4, 2, 12, 1, 0, 1, 0);
	func_166(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_166(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_166(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_166(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_166(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_166(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_166(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_166(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_166(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_166(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_166(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_163(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_163(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_163(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_163(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_163(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_163(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_163(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_163(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_163(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_163(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_204(4, 2, 24, 1, 0);
	func_204(5, 2, 30, 1, 0);
	if (func_93(11) && func_93(29))
	{
		func_182(7);
	}
}

void func_208()//Position - 0x1945C
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	VEHICLE::SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(2004.4471f, 3076.8066f, 46.6069f, 10f);
	CUTSCENE::SET_CAR_GENERATORS_CAN_UPDATE_DURING_CUTSCENE(true);
	if (((func_202() && iLocal_2510 > 0) && iLocal_2510 < 7) && MISC::GET_GAME_TIMER() > iLocal_2639)
	{
		iLocal_2510 = 10;
		iLocal_2638 = 0;
		bLocal_2645 = true;
	}
	if (iLocal_2510 < 10)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
	}
	if (iLocal_2878)
	{
		STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_2510)
	{
		case 0:
			if (STREAMING::IS_SRL_LOADED())
			{
				CUTSCENE::REQUEST_CUTSCENE("CHI_2_MCS_5", 8);
				iLocal_2877 = 1;
				bLocal_2645 = false;
				STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
				STREAMING::BEGIN_SRL();
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
				iLocal_2881 = 0;
				iLocal_2878 = 1;
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				fVar3 = func_102(2458.2227f, 4986.0415f, 49.052414f, Var0, 1);
				if (fVar3 > 180f)
				{
					fVar3 = (fVar3 - 360f);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
				if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false) && VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar4))) && ENTITY::IS_ENTITY_IN_AIR(iVar4)) || ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false) && VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4))) && ENTITY::IS_ENTITY_IN_AIR(iVar4)))
				{
					if (fVar3 < func_224(-2.5f) && fVar3 > func_224(0.5f))
					{
						iLocal_2510 = 6;
						SYSTEM::SETTIMERA(30000);
						STREAMING::SET_SRL_TIME(30000f);
						iLocal_2638 = 36000;
					}
					else
					{
						iLocal_2510 = 7;
						SYSTEM::SETTIMERA(36000);
						STREAMING::SET_SRL_TIME(36000f);
						iLocal_2638 = 42000;
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
						{
							if (!(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar4)) && ENTITY::IS_ENTITY_IN_AIR(iVar4)) && !(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)) && ENTITY::IS_ENTITY_IN_AIR(iVar4)))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar4, 5f);
							}
						}
					}
					if (fVar3 < func_224(-1.33f) && fVar3 > func_224(-1.92f))
					{
						iLocal_2510 = 1;
						SYSTEM::SETTIMERA(0);
						STREAMING::SET_SRL_TIME(0f);
						iLocal_2638 = 6000;
					}
					else if (fVar3 < func_224(0.96f) && fVar3 > func_224(-1.33f))
					{
						iLocal_2510 = 2;
						SYSTEM::SETTIMERA(6000);
						STREAMING::SET_SRL_TIME(6000f);
						iLocal_2638 = 12000;
					}
					else if (fVar3 < func_224(2.29f) && fVar3 > func_224(0.96f))
					{
						iLocal_2510 = 3;
						SYSTEM::SETTIMERA(12000);
						STREAMING::SET_SRL_TIME(12000f);
						iLocal_2638 = 18000;
					}
					else if (fVar3 < func_224(-2.81f) || fVar3 > func_224(2.29f))
					{
						iLocal_2510 = 4;
						SYSTEM::SETTIMERA(18000);
						STREAMING::SET_SRL_TIME(18000f);
						iLocal_2638 = 24000;
					}
					else
					{
						SYSTEM::SETTIMERA(24000);
						STREAMING::SET_SRL_TIME(24000f);
						iLocal_2638 = 30000;
						iLocal_2510 = 5;
					}
				}
				iLocal_2879 = 1;
				CAM::DESTROY_ALL_CAMS(false);
				func_219(&Local_2681, 1, 0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_258 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_750 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_258) };
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_258, true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_258, false, false);
				}
				AUDIO::PLAY_STREAM_FRONTEND();
				if (iLocal_2510 == 1)
				{
					iLocal_2881 = 1;
					func_75(2559.0122f, 4958.518f, 36.029594f, 2585.4468f, 4993.435f, 64.62565f, 48f, 2594.6506f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar4, false, true, false);
						}
					}
					MISC::CLEAR_AREA(2445.1387f, 4978.642f, 52.1489f, 150f, true, true, false, false);
					MISC::CLEAR_AREA(2578.5234f, 4982.2837f, 51.4416f, 13f, true, false, false, false);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2578.4187f, 4981.9014f, 50.587f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 49.2184f);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar5);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 2570.543f, 4982.002f, 50.6795f, 1f, 20000, 40000f, 0.5f);
					TASK::TASK_ACHIEVE_HEADING(0, 88.7065f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar5);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar5);
					TASK::CLEAR_SEQUENCE_TASK(&iVar5);
					iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 5000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 6000, 3, 2);
					CAM::SET_CAM_FOV(iLocal_2635, 34.9f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
				}
				else
				{
					switch (iLocal_2510)
					{
						case 2:
							iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 6000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_2635, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
							break;
						
						case 3:
							iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 6000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_2635, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
							break;
						
						case 4:
							iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 6000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_2635, 29.8f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
							break;
						
						case 5:
							iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 6000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_2635, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
							break;
						
						case 6:
							iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 15000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_2635, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
							break;
						
						case 7:
							iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 15000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_2635, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
							break;
						}
				}
				if (iLocal_2510 < 6)
				{
					CAM::SHAKE_CAM(iLocal_2635, "Hand_shake", 0.2f);
				}
				else
				{
					CAM::SHAKE_CAM(iLocal_2635, "Hand_shake", 0.7f);
				}
				CAM::SET_CAM_ACTIVE(iLocal_2635, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				RECORDING::REPLAY_START_EVENT(4);
				AUDIO::START_AUDIO_SCENE("CHI_2_FARMHOUSE_OVERVIEW");
				func_212(1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 32);
				func_192(1, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				iLocal_2639 = MISC::GET_GAME_TIMER() + 1000;
				iVar6 = 0;
				while (iVar6 < Local_753.f_0)
				{
					if (!PED::IS_PED_INJURED(Local_753[iVar6 /*33*/]))
					{
						AUDIO::STOP_PED_SPEAKING(Local_753[iVar6 /*33*/], true);
					}
					iVar6++;
				}
				iLocal_2640 = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), 2460.4495f, 4976.938f, 45.5765f, 243.4917f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_2640, joaat("WEAPON_MICROSMG"), -1, true, true);
				if (!PED::IS_PED_INJURED(iLocal_2640))
				{
					func_99();
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2463.0156f, 4974.97f, 45.5765f, 1f, -1, 0.5f, 1, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2452.8335f, 4964.785f, 45.5765f, 1f, -1, 0.5f, 1, 40000f);
					TASK::TASK_PAUSE(0, 500);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2460.4495f, 4976.938f, 45.5765f, 1f, -1, 0.5f, 0, 40000f);
					func_98(&iLocal_2640, 1);
				}
				iLocal_2507 = VEHICLE::CREATE_VEHICLE(joaat("dubsta"), 2479.9612f, 4990f, 45.8f, -5.37f, true, true, false);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_2510 = 3;
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() > iLocal_2638)
			{
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2445.9443f, 4962.9863f, 51.4782f, 7.9159f, 0f, 34.5909f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2445.6843f, 4963.3677f, 51.6659f, 3.6033f, 0f, 34.5909f, 3500, 3, 2);
				CAM::SET_CAM_FOV(iLocal_2635, 34f);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
				CAM::SHAKE_CAM(iLocal_2635, "Hand_shake", 0.5f);
				iLocal_2638 += 3500;
				iLocal_2510++;
			}
			break;
		
		case 4:
			if (SYSTEM::TIMERA() > iLocal_2638)
			{
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2465.0703f, 4946.6885f, 45.3372f, 7.1461f, 0f, 30.9281f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2466.0112f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 3000, 3, 2);
				CAM::SET_CAM_FOV(iLocal_2635, 34f);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
				CAM::SHAKE_CAM(iLocal_2635, "Hand_shake", 0.5f);
				iLocal_2638 += 3000;
				iLocal_2510++;
			}
			break;
		
		case 5:
			iLocal_2880 = 1;
			if (SYSTEM::TIMERA() > iLocal_2638)
			{
				iLocal_2880 = 1;
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_2635 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2509.6912f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_2635, 2509.4146f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 2500, 3, 2);
				CAM::SET_CAM_FOV(iLocal_2635, 37.34f);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_2635, 0);
				CAM::SHAKE_CAM(iLocal_2635, "Hand_shake", 0.5f);
				iLocal_2638 += 2500;
				iLocal_2510++;
			}
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > iLocal_2638)
			{
				if (func_211())
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(6.818f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2507, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2507, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					iLocal_2877 = 0;
					iLocal_2510 = 11;
				}
			}
			break;
		
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_258) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_258, false))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_258);
			}
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			if ((CAM::IS_SCREEN_FADED_OUT() && !CUTSCENE::IS_CUTSCENE_PLAYING()) || (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(true)))
			{
				iLocal_2510++;
			}
			break;
		
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_258) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_258, false))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_258);
			}
			if ((CAM::IS_SCREEN_FADED_OUT() && !CUTSCENE::IS_CUTSCENE_PLAYING()) || (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(true)))
			{
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (func_188() && !bLocal_2645)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
				RECORDING::REPLAY_STOP_EVENT();
				if (func_73(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, 1) < 15f && func_73(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, 1) > 1f)
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98.21f);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_102(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2458.2227f, 4986.0415f, 49.052414f, 1));
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6.3f, 1f);
				CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(6.818f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				AUDIO::STOP_STREAM();
				AUDIO::STOP_AUDIO_SCENE("CHI_2_FARMHOUSE_OVERVIEW");
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_212(0);
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false))
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE")) < 15)
					{
						WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), 50);
					}
				}
				func_192(0, 1, 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2640))
				{
					PED::DELETE_PED(&iLocal_2640);
				}
				iLocal_2883 = func_18(4);
				if (iLocal_2883 != -1)
				{
					if (!PED::IS_PED_INJURED(Local_753[iLocal_2883 /*33*/]))
					{
						PED::DELETE_PED(&(Local_753[iLocal_2883 /*33*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_753[iLocal_2883 /*33*/].f_20))
					{
						OBJECT::DELETE_OBJECT(&(Local_753[iLocal_2883 /*33*/].f_20));
					}
					Local_1617[iLocal_2883 /*24*/].f_3 = 1;
					Local_753[iLocal_2883 /*33*/].f_5 = 0;
					Local_753[iLocal_2883 /*33*/].f_14 = 0;
					Local_753[iLocal_2883 /*33*/].f_3 = 2;
				}
				iLocal_2884 = func_18(5);
				if (iLocal_2884 != -1)
				{
					if (!PED::IS_PED_INJURED(Local_753[iLocal_2884 /*33*/]))
					{
						PED::DELETE_PED(&(Local_753[iLocal_2884 /*33*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_753[iLocal_2884 /*33*/].f_20))
					{
						OBJECT::DELETE_OBJECT(&(Local_753[iLocal_2884 /*33*/].f_20));
					}
					Local_1617[iLocal_2884 /*24*/].f_3 = 1;
					Local_753[iLocal_2884 /*33*/].f_5 = 0;
					Local_753[iLocal_2884 /*33*/].f_14 = 0;
					Local_753[iLocal_2884 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!PED::IS_PED_INJURED(iLocal_2641))
				{
					PED::DELETE_PED(&iLocal_2641);
				}
				if (!PED::IS_PED_INJURED(iLocal_2642))
				{
					PED::DELETE_PED(&iLocal_2642);
				}
				if (func_74(iLocal_2507))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_2507);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2680))
				{
					OBJECT::DELETE_OBJECT(&iLocal_2680);
				}
				func_209();
				iLocal_749 = 0;
				func_27();
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dubsta"));
				iVar7 = 0;
				while (iVar7 < Local_753.f_0)
				{
					if (!PED::IS_PED_INJURED(Local_753[iVar7 /*33*/]))
					{
						AUDIO::STOP_PED_SPEAKING(Local_753[iVar7 /*33*/], false);
					}
					iVar7++;
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6.3f, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_258))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_258, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_258, false);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_258)))
						{
							ENTITY::SET_ENTITY_VELOCITY(iLocal_258, Local_750);
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_258, -1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_258, true, true, false);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_258)))
						{
							ENTITY::SET_ENTITY_ROTATION(iLocal_258, 0f, 0f, ENTITY::GET_ENTITY_HEADING(iLocal_258), 2, true);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_258);
							ENTITY::SET_ENTITY_VELOCITY(iLocal_258, 1f, 1f, 1f);
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_258, -1);
						}
						if (iLocal_2881 == 0)
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_258, -1);
						}
						ENTITY::SET_ENTITY_VISIBLE(iLocal_258, true, false);
					}
				}
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
				STREAMING::END_SRL();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				func_182(11);
			}
			break;
	}
}

void func_209()//Position - 0x1A4EB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2505))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_2505);
	}
	iVar0 = 0;
	while (iVar0 < Local_753.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/]))
		{
			PED::DELETE_PED(&(Local_753[iVar0 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/].f_20))
		{
			OBJECT::DELETE_OBJECT(&(Local_753[iVar0 /*33*/].f_20));
		}
		Local_753[iVar0 /*33*/].f_3 = 0;
		Local_753[iVar0 /*33*/].f_4 = 0;
		Local_753[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_753[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_753[iVar0 /*33*/].f_2 = 25;
		Local_753[iVar0 /*33*/].f_5 = 0;
		Local_753[iVar0 /*33*/].f_12 = 0f;
		Local_753[iVar0 /*33*/].f_13 = 0f;
		Local_753[iVar0 /*33*/].f_14 = 0;
		Local_753[iVar0 /*33*/].f_15 = 0;
		Local_753[iVar0 /*33*/].f_17 = 0;
		Local_753[iVar0 /*33*/].f_16 = 0;
		Local_753[iVar0 /*33*/].f_21 = 0;
		Local_753[iVar0 /*33*/].f_22 = 0;
		Local_1617[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2648))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2648);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2649)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_2649[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_2649[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2655)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2655[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_2655[iVar0]));
		}
		iVar0++;
	}
	func_210(&Local_1617, &uLocal_2706, cLocal_2336, 12f, 2482.1965f, 4975.3667f, 44.7288f, 121f, 1);
}

void func_210(var uParam0, var uParam1, char* sParam2, float fParam3, struct<3> Param4, float fParam7, int iParam8)//Position - 0x1A67F
{
	int iVar0;
	
	iLocal_55 = iLocal_55;
	uLocal_68 = fParam3;
	Local_69 = { Param4 };
	fLocal_72 = fParam7;
	Local_87 = { *uParam1 };
	cLocal_252 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam8;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_51 = false;
	bLocal_52 = false;
	iLocal_53 = 0;
	bLocal_54 = false;
	iLocal_55 = 0;
	bLocal_75 = true;
	iLocal_74 = 0;
	iLocal_56 = 0;
	iLocal_58 = 0;
	iLocal_59 = -1;
	iLocal_60 = -1;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	EVENT::BLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31 /*EVENT_INJURED_CRY_FOR_HELP*/);
	iLocal_50 = 0;
}

bool func_211()//Position - 0x1A776
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_78688)
	{
		if (!bVar0)
		{
			Global_78688 = 1;
		}
	}
	return bVar0;
}

void func_212(bool bParam0)//Position - 0x1A799
{
	if (bParam0)
	{
		func_218();
		if (Global_20500.f_1 == 10 || Global_20500.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8371, 16);
		}
		Global_20500.f_1 = 1;
		if (func_217(0))
		{
			func_213(0);
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

void func_213(int iParam0)//Position - 0x1A7FC
{
	if (func_216())
	{
		return;
	}
	if (Global_20704)
	{
		if (func_215())
		{
			func_214(1, 1);
		}
		else
		{
			func_214(0, 0);
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
	if (!func_45())
	{
		Global_20500.f_1 = 3;
	}
}

void func_214(bool bParam0, bool bParam1)//Position - 0x1A886
{
	if (bParam0)
	{
		if (func_217(0))
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

bool func_215()//Position - 0x1A8FA
{
	return BitTest(Global_1963795, 5);
}

bool func_216()//Position - 0x1A908
{
	return BitTest(Global_1963795, 19);
}

int func_217(int iParam0)//Position - 0x1A917
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

void func_218()//Position - 0x1A96E
{
	if (Global_20500.f_1 == 9 || Global_20500.f_1 == 10)
	{
		Global_21898 = 0;
		Global_21894 = 1;
	}
}

void func_219(int* iParam0, bool bParam1, bool bParam2)//Position - 0x1A997
{
	int iVar0;
	
	if (BitTest(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_223(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
		}
		func_222(iVar0, iParam0);
		func_221(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), iVar0);
			MISC::CLEAR_BIT(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_17[iVar0], true);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_17[iVar0], true);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_220()) && iParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
				}
			}
			if (!BitTest(iParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_220()//Position - 0x1AB42
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_221(int iParam0, var uParam1)//Position - 0x1AB52
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 17);
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 18);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 19);
			break;
	}
}

void func_222(int iParam0, var uParam1)//Position - 0x1AB9A
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_223(var uParam0)//Position - 0x1ABE2
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_5));
	}
}

float func_224(float fParam0)//Position - 0x1ABFD
{
	return (fParam0 * 57.29578f);
}

void func_225()//Position - 0x1AC0D
{
	int iVar0;
	
	func_176(1, 4);
	func_166(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_166(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 1, 2, 2, 1, 0, 1, 0);
	func_204(3, 0, 0, 1, 0);
	if ((func_73(PLAYER::PLAYER_PED_ID(), 2458.2227f, 4986.0415f, 49.052414f, 0) < 107.9f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2374.4414f, 4930.564f, 34.737843f, 2478.099f, 5077.4883f, 60.632458f, 185f, false, false, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2396.7258f, 4887.434f, 33.85329f, 2510.5396f, 5003.356f, 58.011837f, 158.25f, false, false, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Local_2681.f_5))
		{
			HUD::SET_BLIP_ROUTE(Local_2681.f_6, false);
		}
		func_182(11);
	}
	else
	{
		switch (iLocal_2510)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_269(5, -20);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				iLocal_2510++;
				break;
			
			case 1:
				if (func_229(&Local_2681, 2608.1511f, 4949.754f, 39.4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 6f, 3);
					iLocal_2510++;
					func_219(&Local_2681, 1, 0);
					func_31(3, 1);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_ROCK_RADIO"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			
			case 2:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					if (func_227(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_226(5) > 2)
						{
							iLocal_2510++;
						}
					}
				}
				else
				{
					iLocal_2510++;
				}
				break;
			
			case 3:
				if (func_229(&Local_2681, 2573.6301f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_ROCK_RADIO"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
					func_182(11);
				}
				if (HUD::DOES_BLIP_EXIST(Local_2681.f_5))
				{
					HUD::SET_BLIP_ROUTE(Local_2681.f_6, false);
				}
				break;
			}
	}
}

int func_226(int iParam0)//Position - 0x1AF06
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_2513.f_0)
	{
		if (Local_2513[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_2513[iVar0 /*6*/] == iParam0)
			{
				return Local_2513[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_227(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1AF48
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
	func_228(iParam0);
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

void func_228(int iParam0)//Position - 0x1B0E0
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

bool func_229(int* iParam0, struct<3> Param1, struct<3> Param4, bool bParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11)//Position - 0x1B10C
{
	return func_230(iParam0, Param1, Param4, func_268(), func_268(), bParam7, 1, 0, 0, 0, 0, sParam8, func_173(), func_173(), func_173(), func_173(), func_173(), 0, bParam9, func_173(), 0, 0, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

int func_230(int* iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, bool bParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x1B15D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam15;
	iParam0->f_17[1] = iParam16;
	iParam0->f_17[2] = iParam17;
	iParam0->f_16 = iParam15;
	func_267(iParam0);
	func_266(iParam0);
	func_265();
	if (func_249(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, iParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_248(sParam20);
		func_248(sParam21);
		func_248(sParam22);
		func_248(sParam23);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, false))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					if (BitTest(iParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 23);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_246(iParam0, iParam29))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_248(sParam24);
				func_248(sParam27);
				func_248("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						func_248(sParam19);
					}
					if (HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(iParam0);
					}
					if ((!func_243(iParam0, 1) && !func_242(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_241(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_239(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_248("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_243(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_239(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*iParam0))
						{
							HUD::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = func_5(Var3, 0);
						if (!iParam31 == -1)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_238(iParam0->f_5, iParam0);
						}
					}
					else if (!func_237(Var3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, Var3);
						if (bParam35)
						{
							func_238(iParam0->f_5, iParam0);
						}
					}
					if (!func_243(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							func_241(iParam0, sParam19, 0);
							MISC::SET_BIT(&(iParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (BitTest(iParam0->f_13, 13))
						{
							bParam13 = false;
						}
					}
					bVar1 = false;
					bVar6 = false;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						bVar6 = true;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, bParam13, bVar6, iVar7);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param7, Param10, fParam36, false, bVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, bParam13, bVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iParam18, false))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], func_220()) || !func_235(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_232(iParam0))
							{
								func_248(sParam19);
								func_248(sParam24);
								func_248(sParam20);
								func_248(sParam21);
								func_248(sParam22);
								func_248(sParam23);
								func_248("LOSE_WANTED" /* GXT: Lose the Cops. */);
								func_248("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
								func_248(sParam27);
								func_219(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!BitTest(iParam0->f_13, 9) && !BitTest(iParam0->f_13, 22)))
				{
					func_248(sParam24);
					func_248(sParam27);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						func_248(sParam19);
					}
					if ((!func_243(iParam0, 1) && !func_242(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_241(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_239(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_248("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_243(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_239(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, false))
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam0))
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_5));
								func_248(sParam19);
							}
							*iParam0 = func_231(iParam18, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								func_238(*iParam0, iParam0);
							}
						}
						if (!func_243(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								func_241(iParam0, sParam24, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										func_241(iParam0, sParam27, 0);
										MISC::SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									func_241(iParam0, sParam24, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
									{
										func_239(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_5));
					func_248(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_243(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!BitTest(iParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
									if (!PED::IS_PED_INJURED(iParam0->f_17[iVar9]))
									{
										func_239(iParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_241(iParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0);
									MISC::SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								func_241(iParam0, sParam24, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									func_241(iParam0, sParam27, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_243(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							func_241(iParam0, sParam24, 0);
							MISC::SET_BIT(&(iParam0->f_13), 3);
							MISC::CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									func_241(iParam0, sParam27, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								func_241(iParam0, sParam24, 0);
								MISC::SET_BIT(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(iParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), 0);
		}
		func_248(sParam19);
		func_248(sParam24);
		func_248(sParam27);
		func_248(sParam24);
		func_248("LOSE_WANTED" /* GXT: Lose the Cops. */);
		if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
	MISC::CLEAR_BIT(&(iParam0->f_13), 11);
	MISC::CLEAR_BIT(&(iParam0->f_13), 12);
	return 0;
}

int func_231(int iParam0, bool bParam1, bool bParam2)//Position - 0x1BA71
{
	return func_14(iParam0, !bParam1, bParam2);
}

int func_232(int* iParam0)//Position - 0x1BA84
{
	if (BitTest(iParam0->f_13, 12))
	{
		if (func_234(PLAYER::PLAYER_PED_ID()))
		{
			if (func_233(1, 0, 1) || BitTest(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_233(1, 0, 1) || BitTest(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_233(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1BAD9
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

int func_234(int iParam0)//Position - 0x1BBBE
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0, int iParam1)//Position - 0x1BBF5
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1)
		{
			if (func_236(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_220(), 50f);
				return 1;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_220()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_220(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1)//Position - 0x1BC60
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_237(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x1BCA8
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

void func_238(int iParam0, int* iParam1)//Position - 0x1BD23
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (HUD::DOES_BLIP_EXIST(iParam1->f_6))
		{
			HUD::SET_BLIP_ROUTE(iParam1->f_6, false);
		}
		HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iParam1->f_6 = iParam0;
		HUD::SET_BLIP_ROUTE(iParam0, true);
	}
}

void func_239(int iParam0, char* sParam1, int iParam2)//Position - 0x1BD5E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_240(iParam2), 1);
}

int func_240(int iParam0)//Position - 0x1BD75
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

void func_241(int* iParam0, char* sParam1, bool bParam2)//Position - 0x1BF6A
{
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_156(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = MISC::GET_GAME_TIMER();
}

int func_242(int* iParam0)//Position - 0x1BFA2
{
	if (!PED::IS_PED_INJURED(iParam0->f_16))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_243(int* iParam0, int iParam1)//Position - 0x1BFC6
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
		if (func_245(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_65() && !func_244())
		{
			return 1;
		}
	}
	return 0;
}

int func_244()//Position - 0x1C021
{
	if (Global_22856 == 1)
	{
		return 1;
	}
	return 0;
}

int func_245(var uParam0)//Position - 0x1C038
{
	int iVar0;
	int iVar1;
	
	iVar1 = MISC::GET_GAME_TIMER();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_246(var uParam0, int iParam1)//Position - 0x1C05B
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_247(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_247(int iParam0, var uParam1, int iParam2)//Position - 0x1C08C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
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
	return 0;
}

void func_248(char* sParam0)//Position - 0x1C120
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x1C138
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 0, iVar25);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar24, false))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, true)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (func_247(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7 && !func_264(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], true);
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
					{
						if (func_262(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_220());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_261(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_243(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar26);
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar27]))
						{
							func_239(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_241(uParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0);
						MISC::SET_BIT(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			MISC::CLEAR_BIT(&(uParam0->f_13), 13);
			func_248("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_243(uParam0, 2))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (func_260(iVar13, uParam0))
						{
							func_241(uParam0, "CMN_VEHSUIT" /* GXT: ~s~Vehicle is not suitable. */, 0);
							MISC::SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_13), 31);
					func_248("CMN_VEHSUIT" /* GXT: ~s~Vehicle is not suitable. */);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
				{
					MISC::SET_BIT(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], true);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], false);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
							{
								if (!func_261(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!func_259(uParam0->f_17[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar13, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar13))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar13) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar13))
								{
									Var28 = { ENTITY::GET_ENTITY_COORDS(iVar13, true) };
									if (Var28.f_2 < -1f)
									{
										TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], false);
							if (!ENTITY::IS_ENTITY_DEAD(iVar13, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
								{
									if (iVar13 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar13))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar31 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar31, false))
									{
										if (iVar13 != iVar31)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
					{
						iVar32 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar32))
						{
							if (func_247(iVar32, uParam0, 0))
							{
								if (func_258(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									func_221(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_258(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar32) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
								}
								func_257(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()) && !func_256(uParam0->f_17[iVar0], iParam10)) && !func_255(uParam0->f_17[iVar0], iParam10))
					{
						if (func_262(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]))
								{
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
									if (iVar14 == 7)
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_220());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = func_231(uParam0->f_17[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_238(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((func_235(uParam0->f_17[iVar0], 1) || func_256(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								func_248(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_238(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, false, true, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, false))
									{
										if (!func_235(uParam0->f_17[iVar0], 1))
										{
											if (func_234(uParam0->f_17[iVar0]))
											{
												iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
												if (iVar14 == 7)
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
									if (iVar14 == 7 && !func_264(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_254(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], true);
											if (BitTest(uParam0->f_13, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
											}
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], false);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false))
									{
										uParam0->f_1[iVar0] = func_231(uParam0->f_17[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
							{
								if (func_262(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
									{
										iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
										if (iVar14 == 7)
										{
											TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], false);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_220());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_220());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								MISC::SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_220()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_248(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_243(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
						{
							if (func_259(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_259(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_241(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_253(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar19[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar19[iVar0], ""))
											{
												func_251(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_250(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_253(iVar0, uParam0))
										{
											func_241(uParam0, uVar15[iVar0], 0);
											func_250(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_248(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_248("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
			return 1;
		}
	}
	return 0;
}

void func_250(int iParam0, var uParam1)//Position - 0x1D180
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_251(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x1D1C8
{
	if (!bParam3)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_252(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = MISC::GET_GAME_TIMER();
}

void func_252(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x1D202
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

int func_253(int iParam0, var uParam1)//Position - 0x1D221
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_254(int iParam0, float fParam1)//Position - 0x1D261
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_255(int iParam0, int iParam1)//Position - 0x1D298
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(iParam0, func_220()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_256(int iParam0, int iParam1)//Position - 0x1D2FF
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_257(int iParam0, var uParam1)//Position - 0x1D334
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 17);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 18);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 19);
			break;
	}
}

int func_258(int iParam0, var uParam1)//Position - 0x1D37C
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_259(int iParam0)//Position - 0x1D3BC
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (iVar0 == iVar1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, false, true, 0))
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

int func_260(int iParam0, var uParam1)//Position - 0x1D449
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, false);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, false);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, false);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_261(var uParam0)//Position - 0x1D5A9
{
	int iVar0;
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_247(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_262(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x1D5D8
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						if (func_261(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_247(iVar0, uParam0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (func_263(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
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
	return 0;
}

int func_263(int iParam0)//Position - 0x1D6B6
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_264(int iParam0, int iParam1)//Position - 0x1D6EE
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_265()//Position - 0x1D71E
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_266(var uParam0)//Position - 0x1D78B
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], false);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_13), 25);
	}
}

void func_267(var uParam0)//Position - 0x1D82B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
}

Vector3 func_268()//Position - 0x1D8C1
{
	struct<3> Var0;
	
	return Var0;
}

int func_269(int iParam0, int iParam1)//Position - 0x1D8CD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_2513[iVar0 /*6*/] == iParam0)
		{
			if (Local_2513[iVar0 /*6*/].f_1 == 1)
			{
				Local_2513[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_270()//Position - 0x1D911
{
	int iVar0;
	int iVar1;
	
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_2510)
	{
		case 0:
			iLocal_2504 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (func_211())
			{
				STREAMING::REQUEST_ANIM_DICT("MISSChinese2_crystalMazeMCS1_IG");
				STREAMING::REQUEST_MODEL(joaat("IG_Old_Man2"));
				STREAMING::REQUEST_MODEL(joaat("IG_Old_Man1A"));
				STREAMING::REQUEST_MODEL(joaat("IG_Janet"));
				STREAMING::REQUEST_MODEL(joaat("IG_TaoCheng"));
				STREAMING::REQUEST_MODEL(joaat("IG_TaosTranslator"));
				STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
				STREAMING::REQUEST_ANIM_DICT("missrampageintrooutro");
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				func_192(1, 1, 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Global_97310.f_9[0]))
				{
					Local_753[14 /*33*/] = Global_97310.f_9[2];
					Local_753[13 /*33*/] = Global_97310.f_9[1];
					Local_753[11 /*33*/] = Global_97310.f_9[4];
					Local_753[10 /*33*/] = Global_97310.f_9[3];
					Local_753[12 /*33*/] = Global_97310.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_753[14 /*33*/], true, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_753[13 /*33*/], true, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_753[11 /*33*/], true, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_753[10 /*33*/], true, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_753[12 /*33*/], true, true);
					if (!PED::IS_PED_INJURED(Local_753[13 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[13 /*33*/], "Old_Man1A", 0, joaat("IG_Old_Man1A"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_753[14 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[14 /*33*/], "Old_Man2", 0, joaat("IG_Old_Man2"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[11 /*33*/], "tao", 0, joaat("IG_TaoCheng"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_753[10 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[10 /*33*/], "Taos_Translator", 0, joaat("IG_TaosTranslator"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_753[12 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[12 /*33*/], "Janet", 0, joaat("IG_Janet"), 0);
					}
				}
				else
				{
					Local_753[13 /*33*/] = PED::CREATE_PED(26, joaat("IG_Old_Man1A"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[13 /*33*/], "Old_Man1A", 0, joaat("IG_Old_Man1A"), 0);
					Local_753[14 /*33*/] = PED::CREATE_PED(26, joaat("IG_Old_Man2"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[14 /*33*/], "Old_Man2", 0, joaat("IG_Old_Man2"), 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_753[11 /*33*/]))
					{
						if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[11 /*33*/], "tao", 0, joaat("IG_TaoCheng"), 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[11 /*33*/], "tao", 2, joaat("IG_TaoCheng"), 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[10 /*33*/], "Taos_Translator", 2, joaat("IG_TaosTranslator"), 0);
					Local_753[12 /*33*/] = PED::CREATE_PED(26, joaat("IG_Janet"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_753[12 /*33*/], "Janet", 0, joaat("IG_Janet"), 0);
				}
				func_272();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				MISC::CLEAR_AREA_OF_PEDS(1991.2196f, 3054.8843f, 50.277412f, 87f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(1991.2196f, 3054.8843f, 50.277412f, 87f, 0);
				PED::ADD_SCENARIO_BLOCKING_AREA(Vector(50.277412f, 3054.8843f, 1991.2196f) - Vector(40f, 40f, 40f), Vector(50.277412f, 3054.8843f, 1991.2196f) + Vector(40f, 40f, 40f), false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(Vector(50.277412f, 3054.8843f, 1991.2196f) - Vector(40f, 40f, 40f), Vector(50.277412f, 3054.8843f, 1991.2196f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_3687 = 0;
				iLocal_2510++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				iLocal_2510++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_3687 == 0)
				{
					func_271(13);
					iLocal_3687++;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_753[13 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Old_Man1A", 0))
				{
					Local_753[13 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Old_Man1A", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_753[14 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Old_Man2", 0))
				{
					Local_753[14 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Old_Man2", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_753[11 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("tao", 0))
				{
					Local_753[11 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("tao", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_753[10 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Taos_Translator", 0))
				{
					Local_753[10 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Taos_Translator", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_753[12 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Janet", 0))
				{
					Local_753[12 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Janet", 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("tao", 0))
			{
				if (!PED::IS_PED_INJURED(Local_753[11 /*33*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[11 /*33*/], iLocal_1616);
					PED::SET_PED_CAN_BE_TARGETTED(Local_753[11 /*33*/], false);
					iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_753[11 /*33*/], iVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1000f, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Taos_Translator", 0))
			{
				if (!PED::IS_PED_INJURED(Local_753[10 /*33*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_753[10 /*33*/], iLocal_1616);
					PED::SET_PED_CAN_BE_TARGETTED(Local_753[10 /*33*/], false);
					iVar1 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_753[10 /*33*/], iVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1000f, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				iLocal_2504 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (func_74(iLocal_2504) && func_73(iLocal_2504, 1995.2018f, 3062.1565f, 46.0491f, 1) < 5f)
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2504, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					VEHICLE::REMOVE_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(iLocal_2504));
				}
				else if (STREAMING::HAS_ANIM_DICT_LOADED("missrampageintrooutro"))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.1351f, 3057.4666f, 46.06f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 325.4678f);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0.1f, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.9188f, 3057.9062f, 46.0567f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 337.2537f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				GRAPHICS::RESET_ADAPTATION(6);
				func_192(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					STREAMING::LOAD_SCENE(1992.1351f, 3057.4666f, 46.06f);
				}
				RECORDING::REPLAY_STOP_EVENT();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 7f, 3);
				func_182(11);
			}
			break;
	}
}

void func_271(int iParam0)//Position - 0x1E08C
{
	if (Global_97735 != -1)
	{
		if (iParam0 == Global_97735)
		{
			Global_97739 = 1;
			return;
		}
	}
}

void func_272()//Position - 0x1E0B0
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 157, true);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98182[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_98182[iVar0], false))
			{
				ENTITY::SET_ENTITY_PROOFS(Global_98182[iVar0], false, false, false, false, false, false, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_98182[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_43377 != 0 && Global_43377 != 3) && Global_43377 != 2)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

void func_273()//Position - 0x1E163
{
	int iVar0;
	
	switch (iLocal_2510)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("FRMCHSE", 0);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				func_28(27, 1);
			}
			func_62(&uLocal_2706, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			func_62(&uLocal_2706, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_382();
			FIRE::STOP_FIRE_IN_RANGE(2442.6897f, 4970.3477f, 46.33f, 30f);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 120f);
			Local_2887[0 /*3*/] = { 2428.47f, 4968.91f, 42.11f };
			Local_2887[1 /*3*/] = { 2431.14f, 4972.06f, 42.19f };
			Local_2887[2 /*3*/] = { 2433.05f, 4969.22f, 42.26f };
			Local_2887[3 /*3*/] = { 2437.71f, 4968.13f, 42.45f };
			Local_2887[4 /*3*/] = { 2436.12f, 4964.76f, 42.19f };
			Local_2887[5 /*3*/] = { 2432.13f, 4961.97f, 41.35f };
			Local_2887[6 /*3*/] = { 2430.07f, 4963.78f, 41.35f };
			Local_2887[7 /*3*/] = { 2434f, 4963.04f, 41.53f };
			Local_2887[8 /*3*/] = { 2435.6372f, 4969.699f, 42.19639f };
			Local_442[0 /*5*/] = { 2450.3765f, 4955.8296f, 43.9394f };
			Local_442[1 /*5*/] = { 2449.815f, 4956.678f, 43.9894f };
			Local_442[2 /*5*/] = { 2449.606f, 4957.6753f, 44.0646f };
			Local_442[3 /*5*/] = { 2449.739f, 4958.7314f, 44.1544f };
			Local_442[4 /*5*/] = { 2450.1409f, 4959.745f, 44.2487f };
			Local_442[5 /*5*/] = { 2450.685f, 4960.5815f, 44.3219f };
			Local_442[6 /*5*/] = { 2451.4924f, 4961.333f, 44.4439f };
			Local_442[7 /*5*/] = { 2452.1736f, 4962.0986f, 44.5787f };
			Local_442[8 /*5*/] = { 2452.7166f, 4962.906f, 44.9141f };
			Local_442[9 /*5*/] = { 2453.3499f, 4963.5786f, 45.3558f };
			Local_442[10 /*5*/] = { 2453.754f, 4964.5654f, 45.5766f };
			Local_442[11 /*5*/] = { 2453.2256f, 4965.539f, 45.5766f };
			Local_442[12 /*5*/] = { 2452.4724f, 4966.293f, 45.5766f };
			Local_442[13 /*5*/] = { 2451.8691f, 4967.104f, 45.5766f };
			Local_442[14 /*5*/] = { 2451.529f, 4968.0825f, 45.5766f };
			Local_442[15 /*5*/] = { 2452.3271f, 4968.7124f, 45.5766f };
			Local_442[16 /*5*/] = { 2452.7961f, 4969.6426f, 45.8107f };
			Local_442[17 /*5*/] = { 2453.2607f, 4970.541f, 45.8106f };
			Local_442[18 /*5*/] = { 2453.5803f, 4971.5483f, 45.8104f };
			Local_442[19 /*5*/] = { 2452.8076f, 4972.2666f, 45.8306f };
			Local_442[20 /*5*/] = { 2452.0493f, 4972.928f, 45.8306f };
			Local_442[21 /*5*/] = { 2451.2407f, 4973.599f, 45.8306f };
			Local_442[22 /*5*/] = { 2450.248f, 4973.8887f, 45.8306f };
			Local_442[23 /*5*/] = { 2449.2073f, 4973.7837f, 45.8105f };
			Local_442[24 /*5*/] = { 2448.1724f, 4973.814f, 45.8106f };
			Local_442[25 /*5*/] = { 2447.1526f, 4973.7715f, 45.8106f };
			Local_442[26 /*5*/] = { 2446.138f, 4973.724f, 45.8106f };
			Local_442[27 /*5*/] = { 2445.1282f, 4973.6895f, 45.8106f };
			Local_442[28 /*5*/] = { 2444.2559f, 4973.0557f, 45.8106f };
			Local_442[29 /*5*/] = { 2443.6694f, 4972.194f, 45.8106f };
			Local_442[30 /*5*/] = { 2443.1191f, 4971.275f, 45.8106f };
			Local_442[31 /*5*/] = { 2442.6606f, 4970.3594f, 45.8106f };
			Local_442[32 /*5*/] = { 2442.2668f, 4969.4253f, 45.8106f };
			Local_442[33 /*5*/] = { 2441.7085f, 4968.5024f, 45.8306f };
			Local_442[34 /*5*/] = { 2441.2637f, 4967.5337f, 45.8106f };
			Local_442[35 /*5*/] = { 2440.8728f, 4966.5376f, 45.8106f };
			Local_442[36 /*5*/] = { 2440.3818f, 4965.6343f, 45.8106f };
			Local_442[37 /*5*/] = { 2439.7104f, 4964.8823f, 45.8106f };
			Local_442[38 /*5*/] = { 2438.9329f, 4964.1455f, 45.8106f };
			Local_442[39 /*5*/] = { 2438.1663f, 4963.5024f, 45.8106f };
			Local_442[40 /*5*/] = { 2437.5554f, 4962.7095f, 45.8106f };
			Local_442[41 /*5*/] = { 2436.9011f, 4961.95f, 45.8106f };
			Local_442[42 /*5*/] = { 2436.0752f, 4961.2573f, 45.8106f };
			Local_442[43 /*5*/] = { 2435.0796f, 4961.004f, 45.8118f };
			Local_442[44 /*5*/] = { 2434.0664f, 4960.7134f, 45.8181f };
			Local_442[45 /*5*/] = { 2433.045f, 4960.5938f, 45.8192f };
			Local_442[46 /*5*/] = { 2432.0647f, 4960.2495f, 45.813f };
			Local_442[47 /*5*/] = { 2431.233f, 4960.809f, 45.8089f };
			Local_442[48 /*5*/] = { 2430.5747f, 4961.5737f, 45.5917f };
			Local_442[49 /*5*/] = { 2429.8887f, 4962.028f, 44.9345f };
			Local_442[50 /*5*/] = { 2429.26f, 4962.5947f, 44.2774f };
			Local_442[51 /*5*/] = { 2428.6914f, 4963.2793f, 43.6202f };
			Local_442[52 /*5*/] = { 2428.073f, 4963.9106f, 42.9631f };
			Local_442[53 /*5*/] = { 2428.2388f, 4964.922f, 42.9631f };
			Local_442[54 /*5*/] = { 2428.9614f, 4965.4546f, 42.3059f };
			Local_442[55 /*5*/] = { 2429.45f, 4966.2236f, 41.8679f };
			Local_442[56 /*5*/] = { 2430.0728f, 4966.82f, 41.3476f };
			Local_442[57 /*5*/] = { 2431.097f, 4967.043f, 41.3476f };
			Local_442[58 /*5*/] = { 2431.8904f, 4966.403f, 41.3476f };
			Local_442[59 /*5*/] = { 2432.7676f, 4965.902f, 41.3476f };
			Local_442[60 /*5*/] = { 2433.7761f, 4965.6133f, 41.3476f };
			Local_2341[0 /*6*/].f_3 = "Table Flames";
			Local_2341[0 /*6*/] = 0;
			Local_2341[1 /*6*/].f_3 = "Table Explosion";
			Local_2341[1 /*6*/] = 0;
			Local_2341[2 /*6*/].f_3 = "House Explosion";
			Local_2341[2 /*6*/] = 0;
			Local_2341[3 /*6*/].f_3 = "Cam Shake";
			Local_2341[3 /*6*/] = 0;
			Local_2341[4 /*6*/].f_3 = "Position player";
			Local_2341[4 /*6*/] = 0;
			Local_2341[5 /*6*/].f_3 = "Slow mo";
			Local_2341[5 /*6*/] = 0;
			Local_2341[0 /*6*/].f_1 = 2;
			Local_2341[0 /*6*/].f_2 = 1000f;
			Local_2341[1 /*6*/].f_1 = 2;
			Local_2341[1 /*6*/].f_2 = 4200f;
			Local_2341[2 /*6*/].f_1 = 3;
			Local_2341[2 /*6*/].f_2 = 0f;
			Local_2341[3 /*6*/].f_1 = 3;
			Local_2341[3 /*6*/].f_2 = 0f;
			Local_2341[4 /*6*/].f_1 = 3;
			Local_2341[4 /*6*/].f_2 = 3200f;
			Local_2341[5 /*6*/].f_1 = 3;
			Local_2341[5 /*6*/].f_2 = 700f;
			Local_2378[0 /*18*/] = { 2454.83f, 4974.96f, 46.4489f };
			Local_2378[0 /*18*/].f_3 = { 2.9627f, 0.077f, 115.874f };
			Local_2378[0 /*18*/].f_14 = 39.703f;
			Local_2378[0 /*18*/].f_6 = { 2454.41f, 4974.93f, 46.4691f };
			Local_2378[0 /*18*/].f_9 = { 2.6238f, 0.077f, 114.001f };
			Local_2378[0 /*18*/].f_15 = 39.703f;
			Local_2378[0 /*18*/].f_12 = 2500f;
			Local_2378[0 /*18*/].f_13 = 2500f;
			Local_2378[0 /*18*/].f_16 = 0;
			Local_2378[0 /*18*/].f_17 = 18;
			Local_2378[1 /*18*/] = { 2435.41f, 4960.94f, 45.9568f };
			Local_2378[1 /*18*/].f_3 = { 6.677f, 0f, -49.4853f };
			Local_2378[1 /*18*/].f_14 = 58.9114f;
			Local_2378[1 /*18*/].f_6 = { 2435.11f, 4960.62f, 45.9441f };
			Local_2378[1 /*18*/].f_9 = { 6.3596f, 0f, -44.8248f };
			Local_2378[1 /*18*/].f_15 = 58.9114f;
			Local_2378[1 /*18*/].f_12 = 3200f;
			Local_2378[1 /*18*/].f_13 = 1900f;
			Local_2378[1 /*18*/].f_16 = 0;
			Local_2378[1 /*18*/].f_17 = 34;
			Local_2378[2 /*18*/] = { 2434.77f, 4969.56f, 42.3654f };
			Local_2378[2 /*18*/].f_3 = { 5.2773f, -0.1511f, 132.167f };
			Local_2378[2 /*18*/].f_14 = 35.1297f;
			Local_2378[2 /*18*/].f_6 = { 2434.66f, 4969.68f, 42.3657f };
			Local_2378[2 /*18*/].f_9 = { 5.2773f, -0.1511f, 132.167f };
			Local_2378[2 /*18*/].f_15 = 35.1297f;
			Local_2378[2 /*18*/].f_12 = 3500f;
			Local_2378[2 /*18*/].f_13 = 4500f;
			Local_2378[2 /*18*/].f_16 = 3;
			Local_2378[2 /*18*/].f_17 = 49;
			Local_2378[3 /*18*/] = { 2472.1f, 4943.1f, 45.3f };
			Local_2378[3 /*18*/].f_3 = { 6f, 0f, 25.3f };
			Local_2378[3 /*18*/].f_14 = 33.1297f;
			Local_2378[3 /*18*/].f_6 = { 2472.1f, 4943.1f, 45.3f };
			Local_2378[3 /*18*/].f_9 = { 5.5f, 0f, 35.6f };
			Local_2378[3 /*18*/].f_15 = 33.1297f;
			Local_2378[3 /*18*/].f_12 = 3500f;
			Local_2378[3 /*18*/].f_13 = 3500f;
			Local_2378[3 /*18*/].f_16 = 0;
			Local_2378[3 /*18*/].f_17 = -1;
			fLocal_2637 = 0.06f;
			func_172(1);
			Local_2463[0 /*3*/] = { 2432.74f, 4963.43f, 41.35f };
			Local_2463[1 /*3*/] = { 2432.02f, 4962.61f, 41.35f };
			Local_2463[2 /*3*/] = { 2431.06f, 4961.83f, 41.35f };
			Local_2463[3 /*3*/] = { 2430.84f, 4961.08f, 42.09f };
			Local_2463[4 /*3*/] = { 2430.53f, 4962.47f, 42f };
			Local_2463[5 /*3*/] = { 2430.81f, 4961.1f, 42.8f };
			Local_2463[6 /*3*/] = { 2429.74f, 4961.98f, 42.32f };
			Local_2463[7 /*3*/] = { 2433.5f, 4966.76f, 41.35f };
			Local_2463[8 /*3*/] = { 2433.24f, 4967.42f, 41.35f };
			Local_2463[9 /*3*/] = { 2433.15f, 4967.43f, 42.19f };
			Local_2463[10 /*3*/] = { 2432.53f, 4967.89f, 42.4f };
			Local_2463[11 /*3*/] = { 2432.48f, 4969.07f, 42.19f };
			Local_2463[12 /*3*/] = { 2433.36f, 4969.44f, 42.31f };
			Local_2272[0 /*3*/] = { 2552.6924f, 4978.5664f, 45.32309f };
			Local_2272[1 /*3*/] = { 2562.5337f, 5013.502f, 47.463024f };
			Local_2272[2 /*3*/] = { 2553.8848f, 4945.6606f, 47.493053f };
			Local_2272[3 /*3*/] = { 2515.5452f, 4936.428f, 42.883816f };
			Local_2272[4 /*3*/] = { 2497.3184f, 4967.818f, 43.595566f };
			Local_2272[5 /*3*/] = { 2481.3762f, 4951.766f, 43.99859f };
			Local_2272[6 /*3*/] = { 2522.0444f, 4956.3716f, 43.71605f };
			Local_2272[7 /*3*/] = { 2529.048f, 4985.6274f, 43.868477f };
			Local_2272[8 /*3*/] = { 2502.5034f, 4987.245f, 46.62669f };
			Local_2272[9 /*3*/] = { 2464.891f, 4939.9487f, 44.256462f };
			Local_2272[10 /*3*/] = { 2447.1602f, 4940.2725f, 44.15766f };
			Local_2272[11 /*3*/] = { 2376.5369f, 4946.3994f, 41.772324f };
			Local_2272[12 /*3*/] = { 2395.232f, 4995.63f, 44.689095f };
			Local_2272[13 /*3*/] = { 2419.819f, 4991.9355f, 45.369762f };
			Local_2272[14 /*3*/] = { 2436.3193f, 5011.725f, 45.846943f };
			Local_2272[15 /*3*/] = { 2407.7646f, 5023.0786f, 47.770912f };
			Local_2272[16 /*3*/] = { 2479.0159f, 5028.829f, 42.98806f };
			Local_2272[17 /*3*/] = { 2434.704f, 5042.713f, 45.34462f };
			Local_2272[18 /*3*/] = { 2513.93f, 5039.3325f, 51.021214f };
			Local_2272[19 /*3*/] = { 2477.8823f, 4986.437f, 44.995113f };
			Local_2272[20 /*3*/] = { 2450.058f, 5011.858f, 44.890316f };
			func_210(&Local_1617, &uLocal_2706, cLocal_2336, 12f, 2482.1965f, 4975.3667f, 44.7288f, 121f, 1);
			func_381(&Local_2242, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_381(&Local_2245, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_381(&Local_2257, "CHI2_nope", 8, "ONEILGUARD1");
			func_381(&Local_2248, "SEETREVOR", 3, "chin2goon1");
			func_381(&Local_2251, "CHI2_hear", 8, "ONEILGUARD1");
			func_381(&Local_2254, "CHI2_hear", 8, "ONEILGUARD1");
			func_381(&Local_2260, "ONEILGUARD3", 5, "ONEILGUARD1");
			func_381(&Local_2263, "ONEILGUARD2", 5, "ONEILGUARD1");
			func_381(&Local_2266, "ONEILGUARD4", 5, "ONEILGUARD1");
			func_381(&Local_2269, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_2504 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), true);
			PED::ADD_RELATIONSHIP_GROUP("TAOGROUP", &iLocal_1616);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1616, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_1616);
			func_17(0, -1);
			TASK::SET_SCENARIO_GROUP_ENABLED("Chinese2_Lunch", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("CHINESE2_HILLBILLIES", false);
			if (func_380())
			{
				iVar0 = func_379();
				if (Global_94990 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_274(2, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						break;
					
					case 1:
						if (Global_94990 == 1)
						{
							func_274(3, 1, 0);
						}
						else
						{
							func_274(4, 1, 0);
							CAM::DO_SCREEN_FADE_IN(1000);
						}
						break;
					
					case 2:
						func_274(6, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						break;
					
					case 3:
						func_274(7, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						break;
					
					case 4:
						if (Global_94990 == 1)
						{
							func_274(8, 1, 0);
						}
						else
						{
							func_274(9, 1, 0);
							CAM::DO_SCREEN_FADE_IN(1000);
						}
						break;
					
					case 5:
						func_274(10, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						func_150();
						break;
				}
			}
			else if (func_147(0))
			{
				func_274(1, 0, 1);
			}
			else
			{
				func_182(11);
			}
			break;
	}
}

void func_274(int iParam0, bool bParam1, bool bParam2)//Position - 0x1F13F
{
	int iVar0;
	
	func_374(3);
	func_32(6, 0);
	iLocal_2510 = 0;
	iLocal_2509 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("IG_Old_Man2"));
			STREAMING::REQUEST_MODEL(joaat("IG_Old_Man1A"));
			STREAMING::REQUEST_MODEL(joaat("IG_Janet"));
			STREAMING::REQUEST_MODEL(joaat("IG_TaoCheng"));
			STREAMING::REQUEST_MODEL(joaat("IG_TaosTranslator"));
			CUTSCENE::REQUEST_CUTSCENE("chinese_2_int", 8);
			while (((((!STREAMING::HAS_MODEL_LOADED(joaat("IG_Old_Man2")) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Old_Man1A"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Janet"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_TaoCheng"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_TaosTranslator"))) || !CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_28(323, 1);
			}
			while (!func_371(&(Local_753[11 /*33*/]), 21, 1985.6656f, 3052.6606f, 46.2151f, 0, 1))
			{
				SYSTEM::WAIT(0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.8784f, 3057.8464f, 46.0568f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 311f);
			PED::SET_PED_COMPONENT_VARIATION(Local_753[11 /*33*/], 9, 1, 0, 0);
			break;
		
		case 2:
			if (bParam1)
			{
				func_370(1992.8784f, 3057.8464f, 46.0568f, 311f, 1, 0);
			}
			else
			{
				if (func_74(iLocal_2504))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2504, 1994.3872f, 3061.9397f, 46.0491f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_2504, 50.7724f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				STREAMING::LOAD_SCENE(1992.8784f, 3057.8464f, 46.0568f);
			}
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(50.277412f, 3054.8843f, 1991.2196f) - Vector(40f, 40f, 40f), Vector(50.277412f, 3054.8843f, 1991.2196f) + Vector(40f, 40f, 40f), false, true, true, true);
			PED::SET_PED_NON_CREATION_AREA(Vector(50.277412f, 3054.8843f, 1991.2196f) - Vector(40f, 40f, 40f), Vector(50.277412f, 3054.8843f, 1991.2196f) + Vector(0f, 40f, 40f));
			MISC::CLEAR_AREA(1984.9971f, 3052.9048f, 46.8556f, 10f, true, false, false, false);
			func_286(1, 0, bParam2);
			STREAMING::REQUEST_MODEL(joaat("IG_TaoCheng"));
			STREAMING::REQUEST_MODEL(joaat("IG_TaosTranslator"));
			STREAMING::REQUEST_MODEL(joaat("IG_Old_Man1A"));
			STREAMING::REQUEST_MODEL(joaat("IG_Old_Man2"));
			STREAMING::REQUEST_MODEL(joaat("IG_Janet"));
			STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
			while (((((!STREAMING::HAS_MODEL_LOADED(joaat("IG_TaoCheng")) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_TaosTranslator"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Old_Man1A"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Old_Man2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Janet"))) || !STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (func_74(iLocal_2504))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2504, -1);
					ENTITY::SET_ENTITY_COORDS(iLocal_2504, 1994.3872f, 3061.9397f, 46.0491f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_2504, 50.7724f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.8784f, 3057.8464f, 46.0568f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 311f);
				}
			}
			func_28(85, 1);
			func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_175(2, 41) != 900)
			{
				func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (bParam1)
			{
				if (func_74(iLocal_2504))
				{
					func_283(iLocal_2504, -1, 1);
				}
				else
				{
					func_283(0, -1, 1);
				}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_370(2574.0486f, 4981.8237f, 50.44f, 50f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, false, true, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98.21f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				STREAMING::LOAD_SCENE(2458.5076f, 4984.504f, 52.3461f);
				func_28(323, 1);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_286(0, 0, 0);
			STREAMING::PREFETCH_SRL("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!func_233(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!STREAMING::IS_SRL_LOADED())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				func_283(0, -1, 1);
			}
			func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_153(10, 5))
			{
				func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_370(func_282(), func_281(), 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, false, true, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98.21f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				STREAMING::LOAD_SCENE(2570.543f, 4982.002f, 50.6795f);
				func_28(323, 1);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			func_286(0, 1, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = func_280(2);
			if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, true);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2504) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2504, false)) && func_279())
				{
					func_283(iLocal_2504, -1, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2504, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2504, true, true, false);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_2504)))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2504, 15f);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_2504)))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_2504);
							ENTITY::SET_ENTITY_VELOCITY(iLocal_2504, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					func_283(0, -1, 1);
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_282(), 2570.5376f, 4982.0312f, 50.6239f, true) < 10f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.5376f, 4982.0312f, 50.6239f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98f);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_277(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			break;
		
		case 5:
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2572.0095f, 4981.678f, 50.6698f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 90.3911f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_32(5, 0);
			func_172(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_286(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_276(0, 1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			break;
		
		case 6:
			if (bParam1)
			{
				func_370(2450.8713f, 4960.9985f, 44.3759f, 351f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2450.8713f, 4960.9985f, 44.3759f, false, true, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 351.3911f);
				STREAMING::LOAD_SCENE(2432.9817f, 4964.823f, 41.3476f);
				func_28(325, 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			}
			func_286(0, 0, 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			SYSTEM::WAIT(1);
			func_32(5, 0);
			func_172(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_276(0, 1, 1);
			if (bParam1)
			{
				func_283(0, -1, 1);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_277(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_370(2435.3193f, 4966.153f, 41.3476f, 104.2964f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2435.3193f, 4966.153f, 41.3476f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 104.2964f);
				STREAMING::LOAD_SCENE(2432.9817f, 4964.823f, 41.3476f);
				SYSTEM::WAIT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			func_172(1);
			func_286(0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			iLocal_2676 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.9817f, 4964.823f, 41.3476f);
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_2676))
			{
				iLocal_2676 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.9817f, 4964.823f, 41.3476f);
				func_28(14, 1);
			}
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_2676))
			{
				func_28(15, 1);
			}
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_2676, true);
			INTERIOR::UNPIN_INTERIOR(iLocal_2676);
			iLocal_2676 = 0;
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PETROLCAN"), 31, 0);
			STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
			while (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PETROLCAN")) || !STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			STREAMING::REQUEST_MODEL(joaat("blazer"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_275(0, 7, 1);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), 4500, true, true);
			func_169(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				func_283(0, -1, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_370(2453.124f, 4952.071f, 45.125f, 285f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2453.124f, 4952.071f, 45.125f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 285.8625f);
				STREAMING::LOAD_SCENE(2453.124f, 4952.071f, 45.125f);
				SYSTEM::WAIT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			}
			func_286(0, 0, 0);
			if (!STREAMING::IS_SRL_LOADED())
			{
				STREAMING::PREFETCH_SRL("chinese2_explosion_cutscene");
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			STREAMING::REQUEST_MODEL(joaat("blazer"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_2506 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 2478.5867f, 4941.803f, 43.6736f, 227.2903f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2506, 5f);
			iLocal_2676 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.9817f, 4964.823f, 41.3476f);
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_2676))
			{
				iLocal_2676 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.9817f, 4964.823f, 41.3476f);
				func_28(21, 1);
			}
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_2676))
			{
				func_28(22, 1);
			}
			iLocal_2646 = 3;
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_2676, true);
			INTERIOR::UNPIN_INTERIOR(iLocal_2676);
			iLocal_2676 = 0;
			while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")) || !STREAMING::IS_SRL_LOADED())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				func_283(0, -1, 1);
			}
			while (!AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_370(2472.3f, 4948.1807f, 44.0937f, 220f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2472.3f, 4948.1807f, 44.0937f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 220.8569f);
				STREAMING::LOAD_SCENE(2453.124f, 4952.071f, 45.125f);
				SYSTEM::WAIT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			}
			func_31(6, 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			STREAMING::REQUEST_MODEL(joaat("blazer"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("blazer")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE", false, -1)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE_BG", false, -1))
			{
				func_28(25, 1);
			}
			iLocal_2506 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 2478.5867f, 4941.803f, 43.6736f, 227.2903f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2506, 5f);
			func_286(0, 0, 0);
			STREAMING::LOAD_SCENE(2453.124f, 4952.071f, 45.125f);
			func_19(50, 0, 0, 1, 0);
			func_19(51, 0, 0, 1, 0);
			func_19(52, 0, 0, 1, 0);
			func_19(53, 0, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			iLocal_2670 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_2670))
			{
				func_28(161, 1);
			}
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670, 9);
			ENTITY::REMOVE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), false);
			ENTITY::REMOVE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), false);
			ENTITY::REMOVE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
			if (bParam1)
			{
				func_283(0, -1, 1);
			}
			break;
		
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				func_370(2625.776f, 4802.2173f, 32.5747f, 206f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2625.776f, 4802.2173f, 32.5747f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 206.4254f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				STREAMING::LOAD_SCENE(2625.776f, 4802.2173f, 32.5747f);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670, 9);
			func_19(50, 2, 0, 1, 0);
			func_19(51, 2, 0, 1, 0);
			func_19(52, 2, 0, 1, 0);
			func_19(53, 2, 0, 1, 0);
			func_19(54, 1, 0, 1, 0);
			func_19(55, 1, 0, 1, 0);
			if (bParam1)
			{
				func_283(0, -1, 1);
			}
			break;
	}
}

void func_275(int iParam0, int iParam1, int iParam2)//Position - 0x20052
{
	Local_3335[iParam0 /*4*/].f_1 = iParam2;
	Local_3335[iParam0 /*4*/] = iParam1;
}

void func_276(int iParam0, int iParam1, int iParam2)//Position - 0x2006E
{
	Local_3356[iParam0 /*7*/].f_1 = iParam2;
	Local_3356[iParam0 /*7*/] = iParam1;
}

Vector3 func_277(int iParam0, struct<3> Param1)//Position - 0x2008A
{
	var uVar0;
	
	Param1.f_2 = (Param1.f_2 + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0, false, false))
	{
		Param1.f_2 = uVar0;
	}
	if (func_278(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
	}
	return Param1;
}

bool func_278(int iParam0)//Position - 0x200D0
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

bool func_279()//Position - 0x200EE
{
	return Global_107357.f_2890.f_8;
}

var func_280(int iParam0)//Position - 0x200FF
{
	if (Global_100870 > 0)
	{
		return Global_107357.f_21[iParam0];
	}
	return Global_104373.f_21[iParam0];
}

float func_281()//Position - 0x20129
{
	return Global_107357.f_2884.f_3;
}

Vector3 func_282()//Position - 0x2013A
{
	return Global_107357.f_2884;
}

void func_283(int iParam0, int iParam1, int iParam2)//Position - 0x2014B
{
	if (func_380() && func_285())
	{
		while (Global_100828 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_284(0);
	}
}

void func_284(int iParam0)//Position - 0x2020F
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_100833.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_100833.f_20), 13);
	}
}

var func_285()//Position - 0x20238
{
	return BitTest(Global_100833.f_20, 13);
}

void func_286(bool bParam0, bool bParam1, bool bParam2)//Position - 0x20249
{
	if (bParam0)
	{
		if (func_369())
		{
			if (func_366(func_368(), 10f, 20f, 9f, 1))
			{
				func_365();
				while (!func_364())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_2504 = func_363(1994.3872f, 3061.9397f, 46.0491f, 50f);
				}
				else
				{
					iLocal_2504 = func_363(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (func_362())
	{
		func_360();
		while (!func_359())
		{
			func_28(544, 1);
		}
		iLocal_2504 = func_287(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_279())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2504, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2504, -1);
			}
		}
	}
}

int func_287(struct<3> Param0, float fParam3)//Position - 0x2030D
{
	return func_288(&(Global_107357.f_2890), Param0, fParam3, 0);
}

int func_288(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x20327
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_358(uParam0))
	{
		if (func_168(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_357(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			func_356(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam4, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				func_329(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_328(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_328(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					func_327(iVar0, uParam0->f_11);
				}
				else if ((!func_325(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = func_324(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_317(iVar8);
					}
				}
				if (((Global_100833 != 13 && Global_100833 != 10) && Global_100833 != 11) && Global_100833 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_100833.f_3)) == Global_78467)
					{
						if (uParam0->f_12.f_66 == Global_113810.f_32752.f_69[21 /*78*/].f_66)
						{
							func_314(24, 0);
							func_317(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_289(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_289(int iParam0, int iParam1)//Position - 0x205D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_295(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113810.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113810.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113810.f_32752.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113810.f_32752.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113810.f_32752.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113810.f_32752.f_5590 = iParam1;
	Global_78384 = iParam0;
	Global_113810.f_32752.f_5588 = 1;
	func_290(iParam0, &(Global_113810.f_32752.f_5510));
}

void func_290(int iParam0, var uParam1)//Position - 0x207DB
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_294(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_293(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_292(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_291(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_291(int iParam0)//Position - 0x20A86
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_292(int iParam0, var uParam1, var uParam2)//Position - 0x20B36
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_293(int iParam0)//Position - 0x20D29
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_294(var uParam0)//Position - 0x20D49
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_295(int iParam0)//Position - 0x20DFA
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_78(iParam0, 0, 0)) || func_78(iParam0, 1, 0)) || func_78(iParam0, 2, 0)) || func_313(iParam0) != 145) || func_312(iParam0)) || func_311(iParam0)) || func_310(iParam0)) || func_309(iParam0)) || !func_296(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_311(iParam0))
		{
		}
		if (func_311(iParam0))
		{
		}
		if (func_78(iParam0, 0, 0))
		{
		}
		if (func_78(iParam0, 1, 0))
		{
		}
		if (func_78(iParam0, 2, 0))
		{
		}
		if (func_313(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_296(int iParam0)//Position - 0x20ED7
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_297(iParam0, 0, -1))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_297(int iParam0, bool bParam1, int iParam2)//Position - 0x21089
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_308())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_307() && !func_306()) && !func_305()) && !func_304()) && !func_308())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_303() || MISC::IS_PC_VERSION()) || func_302())
		{
		}
		else if (!func_305())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_300(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_298(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_298(int iParam0)//Position - 0x2120B
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_299())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_299()//Position - 0x212D7
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_300(int iParam0, int iParam1)//Position - 0x212EE
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2764417 && iParam1 >= 0) && iParam1 <= 415)
	{
		if (BitTest(Global_1586488[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2764416)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7142 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !Global_262145.f_13570 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE */) && iVar1 < Global_262145.f_13571 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14912 /* Tunable: ENABLE_LOWRIDER2_FACTION */ && iVar1 < Global_262145.f_14924 /* Tunable: ENABLE_LOWRIDER2_FACTION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14908 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */ && iVar1 < Global_262145.f_14920 /* Tunable: ENABLE_LOWRIDER2_VIRGO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14909 /* Tunable: ENABLE_LOWRIDER2_SABREGT */ && iVar1 < Global_262145.f_14921 /* Tunable: ENABLE_LOWRIDER2_SABREGT_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14910 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */ && iVar1 < Global_262145.f_14922 /* Tunable: ENABLE_LOWRIDER2_TORNADO5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14911 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */ && iVar1 < Global_262145.f_14923 /* Tunable: ENABLE_LOWRIDER2_MINIVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14913 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */ && iVar1 < Global_262145.f_14925 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14914 /* Tunable: ENABLEEXEC1_GROTTI_PROTO */ && iVar1 < Global_262145.f_14917 /* Tunable: ENABLEEXEC1_GROTTI_PROTO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14915 /* Tunable: ENABLEEXEC1_DEWBAUCHEE */ && iVar1 < Global_262145.f_14918 /* Tunable: ENABLEEXEC1_DEWBAUCHEE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14916 /* Tunable: ENABLEEXEC1_PFISTER */ && iVar1 < Global_262145.f_14919 /* Tunable: ENABLEEXEC1_PFISTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17493 /* Tunable: ENABLESTUNT_BF400 */ && iVar1 < Global_262145.f_17458 /* Tunable: ENABLESTUNT_BF400_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17488 /* Tunable: ENABLESTUNT_BRIOSO_RA */ && iVar1 < Global_262145.f_17453 /* Tunable: ENABLESTUNT_BRIOSO_RA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17492 /* Tunable: ENABLESTUNT_CLIFFHANGER */ && iVar1 < Global_262145.f_17457 /* Tunable: ENABLESTUNT_CLIFFHANGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17491 /* Tunable: ENABLESTUNT_CONTENDER */ && iVar1 < Global_262145.f_17456 /* Tunable: ENABLESTUNT_CONTENDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17485 /* Tunable: ENABLESTUNT_LE7B */ && iVar1 < Global_262145.f_17450 /* Tunable: ENABLESTUNT_LE7B_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17486 /* Tunable: ENABLESTUNT_OMNIS */ && iVar1 < Global_262145.f_17451 /* Tunable: ENABLESTUNT_OMNIS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17489 /* Tunable: ENABLESTUNT_TROPHY_TRUCK */ && iVar1 < Global_262145.f_17454 /* Tunable: ENABLESTUNT_TROPHY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17490 /* Tunable: ENABLESTUNT_TROPHY_CAR */ && iVar1 < Global_262145.f_17455 /* Tunable: ENABLESTUNT_TROPHY_CAR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17487 /* Tunable: ENABLESTUNT_TROPOS_RALLYE */ && iVar1 < Global_262145.f_17452 /* Tunable: ENABLESTUNT_TROPOS_RALLYE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17495 /* Tunable: ENABLESTUNT_GARGOYLE */ && iVar1 < Global_262145.f_17460 /* Tunable: ENABLESTUNT_GARGOYLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17496 /* Tunable: ENABLESTUNT_RALLY_TRUCK */ && iVar1 < Global_262145.f_17461 /* Tunable: ENABLESTUNT_RALLY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17484 /* Tunable: ENABLESTUNT_DRIFT_TAMPA */ && iVar1 < Global_262145.f_17449 /* Tunable: ENABLESTUNT_DRIFT_TAMPA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17483 /* Tunable: ENABLESTUNT_TYRUS */ && iVar1 < Global_262145.f_17448 /* Tunable: ENABLESTUNT_TYRUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17482 /* Tunable: ENABLESTUNT_ET1 */ && iVar1 < Global_262145.f_17447 /* Tunable: ENABLESTUNT_ET1_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17494 /* Tunable: ENABLESTUNT_LYNX */ && iVar1 < Global_262145.f_17459 /* Tunable: ENABLESTUNT_LYNX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17497 /* Tunable: ENABLESTUNT_STALLION */ && iVar1 < Global_262145.f_17462 /* Tunable: ENABLESTUNT_STALLION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17498 /* Tunable: ENABLESTUNT_GAUNTLET */ && iVar1 < Global_262145.f_17463 /* Tunable: ENABLESTUNT_GAUNTLET_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17499 /* Tunable: ENABLESTUNT_DOMINATOR */ && iVar1 < Global_262145.f_17464 /* Tunable: ENABLESTUNT_DOMINATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17500 /* Tunable: ENABLESTUNT_BUFFALO */ && iVar1 < Global_262145.f_17465 /* Tunable: ENABLESTUNT_BUFFALO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17654 /* Tunable: ENABLE_BIKER_DEFILER */ && iVar1 < Global_262145.f_17676 /* Tunable: ENABLE_BIKER_DEFILER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17655 /* Tunable: ENABLE_BIKER_NIGHTBLADE */ && iVar1 < Global_262145.f_17677 /* Tunable: ENABLE_BIKER_NIGHTBLADE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17656 /* Tunable: ENABLE_BIKER_ZOMBIEA */ && iVar1 < Global_262145.f_17678 /* Tunable: ENABLE_BIKER_ZOMBIEA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17657 /* Tunable: ENABLE_BIKER_ESSKEY */ && iVar1 < Global_262145.f_17679 /* Tunable: ENABLE_BIKER_ESSKEY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17658 /* Tunable: ENABLE_BIKER_AVARUS */ && iVar1 < Global_262145.f_17680 /* Tunable: ENABLE_BIKER_AVARUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17659 /* Tunable: ENABLE_BIKER_ZOMBIEB */ && iVar1 < Global_262145.f_17681 /* Tunable: ENABLE_BIKER_ZOMBIEB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17661 /* Tunable: ENABLE_BIKER_HAKUCHOU2 */ && iVar1 < Global_262145.f_17682 /* Tunable: ENABLE_BIKER_HAKUCHOU2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17662 /* Tunable: ENABLE_BIKER_VORTEX */ && iVar1 < Global_262145.f_17683 /* Tunable: ENABLE_BIKER_VORTEX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17663 /* Tunable: ENABLE_BIKER_SHOTARO */ && iVar1 < Global_262145.f_17684 /* Tunable: ENABLE_BIKER_SHOTARO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17664 /* Tunable: ENABLE_BIKER_CHIMERA */ && iVar1 < Global_262145.f_17685 /* Tunable: ENABLE_BIKER_CHIMERA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17665 /* Tunable: ENABLE_BIKER_RAPTOR */ && iVar1 < Global_262145.f_17686 /* Tunable: ENABLE_BIKER_RAPTOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17666 /* Tunable: ENABLE_BIKER_WESTERNDAEMON */ && iVar1 < Global_262145.f_17687 /* Tunable: ENABLE_BIKER_WESTERNDAEMON_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17667 /* Tunable: ENABLE_BIKER_BLAZER4 */ && iVar1 < Global_262145.f_17688 /* Tunable: ENABLE_BIKER_BLAZER4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17673 /* Tunable: ENABLE_BIKER_TORNADO6 */ && iVar1 < Global_262145.f_17695 /* Tunable: ENABLE_BIKER_TORNADO6_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17670 /* Tunable: ENABLE_BIKER_YOUGA2 */ && iVar1 < Global_262145.f_17691 /* Tunable: ENABLE_BIKER_YOUGA2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17671 /* Tunable: ENABLE_BIKER_WOLFSBANE */ && iVar1 < Global_262145.f_17692 /* Tunable: ENABLE_BIKER_WOLFSBANE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17672 /* Tunable: ENABLE_BIKER_FAGGIO3 */ && iVar1 < Global_262145.f_17693 /* Tunable: ENABLE_BIKER_FAGGIO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17660 /* Tunable: ENABLE_BIKER_FAGGIO */ && iVar1 < Global_262145.f_17694 /* Tunable: ENABLE_BIKER_FAGGIO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17674 /* Tunable: ENABLE_BIKER_BAGGER */ && iVar1 < Global_262145.f_17696 /* Tunable: ENABLE_BIKER_BAGGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17668 /* Tunable: ENABLE_BIKER_SANCTUS */ && iVar1 < Global_262145.f_17689 /* Tunable: ENABLE_BIKER_SANCTUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17669 /* Tunable: ENABLE_BIKER_MANCHEZ */ && iVar1 < Global_262145.f_17690 /* Tunable: ENABLE_BIKER_MANCHEZ_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17675 /* Tunable: ENABLE_BIKER_RATBIKE */ && iVar1 < Global_262145.f_17697 /* Tunable: ENABLE_BIKER_RATBIKE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19311 /* Tunable: ENABLE_IE_VOLTIC2 */ && iVar1 < Global_262145.f_19408 /* Tunable: ENABLE_IE_VOLTIC2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19312 /* Tunable: ENABLE_IE_RUINER2 */ && iVar1 < Global_262145.f_19409 /* Tunable: ENABLE_IE_RUINER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19313 /* Tunable: ENABLE_IE_DUNE4 */ && iVar1 < Global_262145.f_19410 /* Tunable: ENABLE_IE_DUNE4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19314 /* Tunable: ENABLE_IE_DUNE5 */ && iVar1 < Global_262145.f_19411 /* Tunable: ENABLE_IE_DUNE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19315 /* Tunable: ENABLE_IE_PHANTOM2 */ && iVar1 < Global_262145.f_19412 /* Tunable: ENABLE_IE_PHANTOM2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19316 /* Tunable: ENABLE_IE_TECHNICAL2 */ && iVar1 < Global_262145.f_19413 /* Tunable: ENABLE_IE_TECHNICAL2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19317 /* Tunable: ENABLE_IE_BOXVILLE5 */ && iVar1 < Global_262145.f_19414 /* Tunable: ENABLE_IE_BOXVILLE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19318 /* Tunable: ENABLE_IE_WASTELANDER */ && iVar1 < Global_262145.f_19415 /* Tunable: ENABLE_IE_WASTELANDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19319 /* Tunable: ENABLE_IE_BLAZER5 */ && iVar1 < Global_262145.f_19416 /* Tunable: ENABLE_IE_BLAZER5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19320 /* Tunable: ENABLE_IE_COMET2 */ && iVar1 < Global_262145.f_19417 /* Tunable: ENABLE_IE_COMET2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19321 /* Tunable: ENABLE_IE_COMET3 */ && iVar1 < Global_262145.f_19418 /* Tunable: ENABLE_IE_COMET3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19322 /* Tunable: ENABLE_IE_DIABLOUS */ && iVar1 < Global_262145.f_19419 /* Tunable: ENABLE_IE_DIABLOUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19323 /* Tunable: ENABLE_IE_DIABLOUS2 */ && iVar1 < Global_262145.f_19420 /* Tunable: ENABLE_IE_DIABLOUS2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19324 /* Tunable: ENABLE_IE_ELEGY */ && iVar1 < Global_262145.f_19421 /* Tunable: ENABLE_IE_ELEGY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19325 /* Tunable: ENABLE_IE_ELEGY2 */ && iVar1 < Global_262145.f_19422 /* Tunable: ENABLE_IE_ELEGY2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19326 /* Tunable: ENABLE_IE_FCR */ && iVar1 < Global_262145.f_19423 /* Tunable: ENABLE_IE_FCR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19327 /* Tunable: ENABLE_IE_FCR2 */ && iVar1 < Global_262145.f_19424 /* Tunable: ENABLE_IE_FCR2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19328 /* Tunable: ENABLE_IE_ITALIGTB */ && iVar1 < Global_262145.f_19425 /* Tunable: ENABLE_IE_ITALIGTB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19329 /* Tunable: ENABLE_IE_ITALIGTB2 */ && iVar1 < Global_262145.f_19426 /* Tunable: ENABLE_IE_ITALIGTB2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19330 /* Tunable: ENABLE_IE_NERO */ && iVar1 < Global_262145.f_19427 /* Tunable: ENABLE_IE_NERO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19331 /* Tunable: ENABLE_IE_NERO2 */ && iVar1 < Global_262145.f_19428 /* Tunable: ENABLE_IE_NERO2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19332 /* Tunable: ENABLE_IE_PENETRATOR */ && iVar1 < Global_262145.f_19429 /* Tunable: ENABLE_IE_PENETRATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19333 /* Tunable: ENABLE_IE_SPECTER */ && iVar1 < Global_262145.f_19430 /* Tunable: ENABLE_IE_SPECTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19334 /* Tunable: ENABLE_IE_SPECTER2 */ && iVar1 < Global_262145.f_19431 /* Tunable: ENABLE_IE_SPECTER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19335 /* Tunable: ENABLE_IE_TEMPESTA */ && iVar1 < Global_262145.f_19432 /* Tunable: ENABLE_IE_TEMPESTA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20392 /* Tunable: ENABLEGP1 */ && iVar1 < Global_262145.f_20388 /* Tunable: LAUNCHPOSIXGP1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20393 /* Tunable: ENABLEINFERNUS2 */ && iVar1 < Global_262145.f_20389 /* Tunable: LAUNCHPOSIXINFERNUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20394 /* Tunable: ENABLERUSTON */ && iVar1 < Global_262145.f_20390 /* Tunable: LAUNCHPOSIXRUSTON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20395 /* Tunable: ENABLETURISMO2 */ && iVar1 < Global_262145.f_20391 /* Tunable: LAUNCHPOSIXTURISMO2 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21274 /* Tunable: ENABLE_XA21 */ && iVar1 < Global_262145.f_21282 /* Tunable: LAUNCHPOSIX_XA21 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21275 /* Tunable: ENABLE_CHEETAH2 */ && iVar1 < Global_262145.f_21283 /* Tunable: LAUNCHPOSIX_CHEETAH2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21276 /* Tunable: ENABLE_TORERO */ && iVar1 < Global_262145.f_21284 /* Tunable: LAUNCHPOSIX_TORERO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21277 /* Tunable: ENABLE_VAGNER */ && iVar1 < Global_262145.f_21285 /* Tunable: LAUNCHPOSIX_VAGNER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21278 /* Tunable: ENABLE_ARDENT */ && iVar1 < Global_262145.f_21286 /* Tunable: LAUNCHPOSIX_ARDENT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21279 /* Tunable: ENABLE_NIGHTSHARK */ && iVar1 < Global_262145.f_21287 /* Tunable: LAUNCHPOSIX_NIGHTSHARK */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_22073 /* Tunable: ENABLE_ULTRALIGHT */ && iVar1 < Global_262145.f_22093 /* Tunable: LAUNCHPOSIX_ULTRALIGHT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_22085 /* Tunable: ENABLE_MOGUL */ && iVar1 < Global_262145.f_22105 /* Tunable: LAUNCHPOSIX_MOGUL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_22076 /* Tunable: ENABLE_ROGUE */ && iVar1 < Global_262145.f_22096 /* Tunable: LAUNCHPOSIX_ROGUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_22086 /* Tunable: ENABLE_STARLING */ && iVar1 < Global_262145.f_22106 /* Tunable: LAUNCHPOSIX_STARLING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_22074 /* Tunable: ENABLE_SEABREEZE */ && iVar1 < Global_262145.f_22094 /* Tunable: LAUNCHPOSIX_SEABREEZE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_22090 /* Tunable: ENABLE_TULA */ && iVar1 < Global_262145.f_22110 /* Tunable: LAUNCHPOSIX_TULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_22088 /* Tunable: ENABLE_PYRO */ && iVar1 < Global_262145.f_22108 /* Tunable: LAUNCHPOSIX_PYRO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_22089 /* Tunable: ENABLE_MOLOTOK */ && iVar1 < Global_262145.f_22109 /* Tunable: LAUNCHPOSIX_MOLOTOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_22084 /* Tunable: ENABLE_NOKOTA */ && iVar1 < Global_262145.f_22104 /* Tunable: LAUNCHPOSIX_NOKOTA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_22091 /* Tunable: ENABLE_BOMBUSHKA */ && iVar1 < Global_262145.f_22111 /* Tunable: LAUNCHPOSIX_BOMBUSHKA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_22087 /* Tunable: ENABLE_HUNTER */ && iVar1 < Global_262145.f_22107 /* Tunable: LAUNCHPOSIX_HUNTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_22083 /* Tunable: ENABLE_HAVOK */ && iVar1 < Global_262145.f_22103 /* Tunable: LAUNCHPOSIX_HAVOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_22075 /* Tunable: ENABLE_HOWARD */ && iVar1 < Global_262145.f_22095 /* Tunable: LAUNCHPOSIX_HOWARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_22077 /* Tunable: ENABLE_ALPHAZ1 */ && iVar1 < Global_262145.f_22097 /* Tunable: LAUNCHPOSIX_ALPHAZ1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_22078 /* Tunable: ENABLE_CYCLONE */ && iVar1 < Global_262145.f_22098 /* Tunable: LAUNCHPOSIX_CYCLONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_22079 /* Tunable: ENABLE_VISIONE */ && iVar1 < Global_262145.f_22099 /* Tunable: LAUNCHPOSIX_VISIONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_22080 /* Tunable: ENABLE_VIGILANTE */ && iVar1 < Global_262145.f_22100 /* Tunable: LAUNCHPOSIX_VIGILANTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_22081 /* Tunable: ENABLE_RETINUE */ && iVar1 < Global_262145.f_22101 /* Tunable: LAUNCHPOSIX_RETINUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_22082 /* Tunable: ENABLE_RAPIDGT3 */ && iVar1 < Global_262145.f_22102 /* Tunable: LAUNCHPOSIX_RAPIDGT3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_23041 /* Tunable: ENABLE_DELUXO */ && iVar1 < Global_262145.f_23069 /* Tunable: LAUNCHPOSIX_DELUXO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_23042 /* Tunable: ENABLE_STROMBERG */ && iVar1 < Global_262145.f_23070 /* Tunable: LAUNCHPOSIX_STROMBERG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_23043 /* Tunable: ENABLE_RIOT2 */ && iVar1 < Global_262145.f_23071 /* Tunable: LAUNCHPOSIX_RIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_23044 /* Tunable: ENABLE_CHERNOBOG */ && iVar1 < Global_262145.f_23072 /* Tunable: LAUNCHPOSIX_CHERNOBOG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_23045 /* Tunable: ENABLE_KHANJALI */ && iVar1 < Global_262145.f_23073 /* Tunable: LAUNCHPOSIX_KHANJALI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_23046 /* Tunable: ENABLE_AKULA */ && iVar1 < Global_262145.f_23074 /* Tunable: LAUNCHPOSIX_AKULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_23047 /* Tunable: ENABLE_THRUSTER */ && iVar1 < Global_262145.f_23075 /* Tunable: LAUNCHPOSIX_THRUSTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_23048 /* Tunable: ENABLE_BARRAGE */ && iVar1 < Global_262145.f_23076 /* Tunable: LAUNCHPOSIX_BARRAGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_23049 /* Tunable: ENABLE_VOLATOL */ && iVar1 < Global_262145.f_23077 /* Tunable: LAUNCHPOSIX_VOLATOL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_23050 /* Tunable: ENABLE_COMET4 */ && iVar1 < Global_262145.f_23078 /* Tunable: LAUNCHPOSIX_COMET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_23051 /* Tunable: ENABLE_NEON */ && iVar1 < Global_262145.f_23079 /* Tunable: LAUNCHPOSIX_NEON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_23052 /* Tunable: ENABLE_STREITER */ && iVar1 < Global_262145.f_23080 /* Tunable: LAUNCHPOSIX_STREITER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_23053 /* Tunable: ENABLE_SENTINEL3 */ && iVar1 < Global_262145.f_23081 /* Tunable: LAUNCHPOSIX_SENTINEL3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_23054 /* Tunable: ENABLE_YOSEMITE */ && iVar1 < Global_262145.f_23082 /* Tunable: LAUNCHPOSIX_YOSEMITE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_23055 /* Tunable: ENABLE_SC1 */ && iVar1 < Global_262145.f_23083 /* Tunable: LAUNCHPOSIX_SC1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_23056 /* Tunable: ENABLE_AUTARCH */ && iVar1 < Global_262145.f_23084 /* Tunable: LAUNCHPOSIX_AUTARCH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_23057 /* Tunable: ENABLE_GT500 */ && iVar1 < Global_262145.f_23085 /* Tunable: LAUNCHPOSIX_GT500 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_23058 /* Tunable: ENABLE_HUSTLER */ && iVar1 < Global_262145.f_23086 /* Tunable: LAUNCHPOSIX_HUSTLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_23059 /* Tunable: ENABLE_REVOLTER */ && iVar1 < Global_262145.f_23087 /* Tunable: LAUNCHPOSIX_REVOLTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_23060 /* Tunable: ENABLE_PARIAH */ && iVar1 < Global_262145.f_23088 /* Tunable: LAUNCHPOSIX_PARIAH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_23061 /* Tunable: ENABLE_RAIDEN */ && iVar1 < Global_262145.f_23089 /* Tunable: LAUNCHPOSIX_RAIDEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_23062 /* Tunable: ENABLE_SAVESTRA */ && iVar1 < Global_262145.f_23090 /* Tunable: LAUNCHPOSIX_SAVESTRA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_23063 /* Tunable: ENABLE_RIATA */ && iVar1 < Global_262145.f_23091 /* Tunable: LAUNCHPOSIX_RIATA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_23064 /* Tunable: ENABLE_HERMES */ && iVar1 < Global_262145.f_23092 /* Tunable: LAUNCHPOSIX_HERMES */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_23065 /* Tunable: ENABLE_COMET5 */ && iVar1 < Global_262145.f_23093 /* Tunable: LAUNCHPOSIX_COMET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_23066 /* Tunable: ENABLE_Z190 */ && iVar1 < Global_262145.f_23094 /* Tunable: LAUNCHPOSIX_Z190 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_23067 /* Tunable: ENABLE_VISERIS */ && iVar1 < Global_262145.f_23095 /* Tunable: LAUNCHPOSIX_VISERIS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_23068 /* Tunable: ENABLE_KAMACHO */ && iVar1 < Global_262145.f_23096 /* Tunable: LAUNCHPOSIX_KAMACHO */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24263 /* Tunable: ENABLE_GB200 */ && iVar1 < Global_262145.f_24279 /* Tunable: LAUNCHPOSIX_GB200 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24264 /* Tunable: ENABLE_FAGALOA */ && iVar1 < Global_262145.f_24280 /* Tunable: LAUNCHPOSIX_FAGALOA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24268 /* Tunable: ENABLE_ELLIE */ && iVar1 < Global_262145.f_24284 /* Tunable: LAUNCHPOSIX_ELLIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24271 /* Tunable: ENABLE_ISSI3 */ && iVar1 < Global_262145.f_24287 /* Tunable: LAUNCHPOSIX_ISSI3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24276 /* Tunable: ENABLE_MICHELLI */ && iVar1 < Global_262145.f_24292 /* Tunable: LAUNCHPOSIX_MICHELLI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24270 /* Tunable: ENABLE_FLASHGT */ && iVar1 < Global_262145.f_24286 /* Tunable: LAUNCHPOSIX_FLASHGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24262 /* Tunable: ENABLE_HOTRING */ && iVar1 < Global_262145.f_24278 /* Tunable: LAUNCHPOSIX_HOTRING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24269 /* Tunable: ENABLE_TEZERACT */ && iVar1 < Global_262145.f_24285 /* Tunable: LAUNCHPOSIX_TEZERACT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24275 /* Tunable: ENABLE_TYRANT */ && iVar1 < Global_262145.f_24291 /* Tunable: LAUNCHPOSIX_TYRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24274 /* Tunable: ENABLE_DOMINATOR3 */ && iVar1 < Global_262145.f_24290 /* Tunable: LAUNCHPOSIX_DOMINATOR3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24265 /* Tunable: ENABLE_TAIPAN */ && iVar1 < Global_262145.f_24281 /* Tunable: LAUNCHPOSIX_TAIPAN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24267 /* Tunable: ENABLE_ENTITY2 */ && iVar1 < Global_262145.f_24283 /* Tunable: LAUNCHPOSIX_ENTITY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24277 /* Tunable: ENABLE_JESTER3 */ && iVar1 < Global_262145.f_24293 /* Tunable: LAUNCHPOSIX_JESTER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24273 /* Tunable: ENABLE_CHEBUREK */ && iVar1 < Global_262145.f_24289 /* Tunable: LAUNCHPOSIX_CHEBUREK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24266 /* Tunable: ENABLE_CARACARA */ && iVar1 < Global_262145.f_24282 /* Tunable: LAUNCHPOSIX_CARACARA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24272 /* Tunable: ENABLE_SEASPARROW */ && iVar1 < Global_262145.f_24288 /* Tunable: LAUNCHPOSIX_SEASPARROW */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24353 /* Tunable: ENABLE_TERBYTE */ && iVar1 < Global_262145.f_24340 /* Tunable: LAUNCHPOSIX_TERBYTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24354 /* Tunable: ENABLE_PBUS2 */ && iVar1 < Global_262145.f_24341 /* Tunable: LAUNCHPOSIX_PBUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24359 /* Tunable: ENABLE_MULE4 */ && iVar1 < Global_262145.f_24346 /* Tunable: LAUNCHPOSIX_MULE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24358 /* Tunable: ENABLE_POUNDER2 */ && iVar1 < Global_262145.f_24345 /* Tunable: LAUNCHPOSIX_POUNDER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24356 /* Tunable: ENABLE_SWINGER */ && iVar1 < Global_262145.f_24343 /* Tunable: LAUNCHPOSIX_SWINGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24362 /* Tunable: ENABLE_MENACER */ && iVar1 < Global_262145.f_24349 /* Tunable: LAUNCHPOSIX_MENACER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24364 /* Tunable: ENABLE_SCRAMJET */ && iVar1 < Global_262145.f_24351 /* Tunable: LAUNCHPOSIX_SCRAMJET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24365 /* Tunable: ENABLE_STRIKEFORCE */ && iVar1 < Global_262145.f_24352 /* Tunable: LAUNCHPOSIX_STRIKEFORCE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24363 /* Tunable: ENABLE_OPPRESSOR2 */ && iVar1 < Global_262145.f_24350 /* Tunable: LAUNCHPOSIX_OPPRESSOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24355 /* Tunable: ENABLE_PATRIOT2 */ && iVar1 < Global_262145.f_24342 /* Tunable: LAUNCHPOSIX_PATRIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24357 /* Tunable: ENABLE_STAFFORD */ && iVar1 < Global_262145.f_24344 /* Tunable: LAUNCHPOSIX_STAFFORD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24361 /* Tunable: ENABLE_FREECRAWLER */ && iVar1 < Global_262145.f_24348 /* Tunable: LAUNCHPOSIX_FREECRAWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24360 /* Tunable: ENABLE_BLIMP3 */ && iVar1 < Global_262145.f_24347 /* Tunable: LAUNCHPOSIX_BLIMP3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26956 /* Tunable: ENABLE_VEHICLE_DEVESTE */ && iVar1 < Global_262145.f_26958 /* Tunable: LAUNCHPOSIX_DEVESTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25969 /* Tunable: ENABLE_VEHICLE_TOROS */ && iVar1 < Global_262145.f_25962 /* Tunable: LAUNCHPOSIX_TOROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25970 /* Tunable: ENABLE_VEHICLE_CLIQUE */ && iVar1 < Global_262145.f_25963 /* Tunable: LAUNCHPOSIX_CLIQUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25971 /* Tunable: ENABLE_VEHICLE_ITALIGTO */ && iVar1 < Global_262145.f_25964 /* Tunable: LAUNCHPOSIX_ITALIGTO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25972 /* Tunable: ENABLE_VEHICLE_DEVIANT */ && iVar1 < Global_262145.f_25965 /* Tunable: LAUNCHPOSIX_DEVIANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26957 /* Tunable: ENABLE_VEHICLE_VAMOS */ && iVar1 < Global_262145.f_26959 /* Tunable: LAUNCHPOSIX_VAMOS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25973 /* Tunable: ENABLE_VEHICLE_TULIP */ && iVar1 < Global_262145.f_25966 /* Tunable: LAUNCHPOSIX_TULIP */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25974 /* Tunable: ENABLE_VEHICLE_SCHLAGEN */ && iVar1 < Global_262145.f_25967 /* Tunable: LAUNCHPOSIX_SCHLAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25975 /* Tunable: ENABLE_VEHICLE_BANDITO */ && iVar1 < Global_262145.f_25968 /* Tunable: LAUNCHPOSIX_BANDITO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25980 /* Tunable: ENABLE_VEHICLE_THRAX */ && iVar1 < Global_262145.f_26001 /* Tunable: LAUNCHPOSIX_THRAX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25981 /* Tunable: ENABLE_VEHICLE_DRAFTER */ && iVar1 < Global_262145.f_26002 /* Tunable: LAUNCHPOSIX_DRAFTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25982 /* Tunable: ENABLE_VEHICLE_LOCUST */ && iVar1 < Global_262145.f_26003 /* Tunable: LAUNCHPOSIX_LOCUST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25983 /* Tunable: ENABLE_VEHICLE_NOVAK */ && iVar1 < Global_262145.f_26004 /* Tunable: LAUNCHPOSIX_NOVAK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25984 /* Tunable: ENABLE_VEHICLE_ZORRUSSO */ && iVar1 < Global_262145.f_26005 /* Tunable: LAUNCHPOSIX_ZORRUSSO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25985 /* Tunable: ENABLE_VEHICLE_GAUNTLET3 */ && iVar1 < Global_262145.f_26006 /* Tunable: LAUNCHPOSIX_GAUNTLET3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25986 /* Tunable: ENABLE_VEHICLE_ISSI7 */ && iVar1 < Global_262145.f_26007 /* Tunable: LAUNCHPOSIX_ISSI7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25987 /* Tunable: ENABLE_VEHICLE_ZION3 */ && iVar1 < Global_262145.f_26008 /* Tunable: LAUNCHPOSIX_ZION3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25988 /* Tunable: ENABLE_VEHICLE_NEBULA */ && iVar1 < Global_262145.f_26009 /* Tunable: LAUNCHPOSIX_NEBULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25989 /* Tunable: ENABLE_VEHICLE_HELLION */ && iVar1 < Global_262145.f_26010 /* Tunable: LAUNCHPOSIX_HELLION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25990 /* Tunable: ENABLE_VEHICLE_DYNASTY */ && iVar1 < Global_262145.f_26011 /* Tunable: LAUNCHPOSIX_DYNASTY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25991 /* Tunable: ENABLE_VEHICLE_RROCKET */ && iVar1 < Global_262145.f_26012 /* Tunable: LAUNCHPOSIX_RROCKET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25992 /* Tunable: ENABLE_VEHICLE_PEYOTE2 */ && iVar1 < Global_262145.f_26013 /* Tunable: LAUNCHPOSIX_PEYOTE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25993 /* Tunable: ENABLE_VEHICLE_GAUNTLET4 */ && iVar1 < Global_262145.f_26014 /* Tunable: LAUNCHPOSIX_GAUNTLET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25994 /* Tunable: ENABLE_VEHICLE_CARACARA2 */ && iVar1 < Global_262145.f_26015 /* Tunable: LAUNCHPOSIX_CARACARA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25995 /* Tunable: ENABLE_VEHICLE_JUGULAR */ && iVar1 < Global_262145.f_26016 /* Tunable: LAUNCHPOSIX_JUGULAR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25996 /* Tunable: ENABLE_VEHICLE_S80 */ && iVar1 < Global_262145.f_26017 /* Tunable: LAUNCHPOSIX_S80 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25997 /* Tunable: ENABLE_VEHICLE_KRIEGER */ && iVar1 < Global_262145.f_26018 /* Tunable: LAUNCHPOSIX_KRIEGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25998 /* Tunable: ENABLE_VEHICLE_EMERUS */ && iVar1 < Global_262145.f_26019 /* Tunable: LAUNCHPOSIX_EMERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25999 /* Tunable: ENABLE_VEHICLE_NEO */ && iVar1 < Global_262145.f_26020 /* Tunable: LAUNCHPOSIX_NEO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26000 /* Tunable: ENABLE_VEHICLE_PARAGON */ && iVar1 < Global_262145.f_26021 /* Tunable: LAUNCHPOSIX_PARAGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28820 /* Tunable: ENABLE_VEHICLE_ASBO */ && iVar1 < Global_262145.f_28841 /* Tunable: LAUNCHPOSIX_ASBO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28821 /* Tunable: ENABLE_VEHICLE_KANJO */ && iVar1 < Global_262145.f_28842 /* Tunable: LAUNCHPOSIX_KANJO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28822 /* Tunable: ENABLE_VEHICLE_EVERON */ && iVar1 < Global_262145.f_28843 /* Tunable: LAUNCHPOSIX_EVERON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28823 /* Tunable: ENABLE_VEHICLE_RETINUE2 */ && iVar1 < Global_262145.f_28844 /* Tunable: LAUNCHPOSIX_RETINUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28824 /* Tunable: ENABLE_VEHICLE_YOSEMITE2 */ && iVar1 < Global_262145.f_28845 /* Tunable: LAUNCHPOSIX_YOSEMITE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28825 /* Tunable: ENABLE_VEHICLE_SUGOI */ && iVar1 < Global_262145.f_28846 /* Tunable: LAUNCHPOSIX_SUGOI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28826 /* Tunable: ENABLE_VEHICLE_SULTAN2 */ && iVar1 < Global_262145.f_28847 /* Tunable: LAUNCHPOSIX_SULTAN2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28827 /* Tunable: ENABLE_VEHICLE_OUTLAW */ && iVar1 < Global_262145.f_28848 /* Tunable: LAUNCHPOSIX_OUTLAW */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28828 /* Tunable: ENABLE_VEHICLE_VAGRANT */ && iVar1 < Global_262145.f_28849 /* Tunable: LAUNCHPOSIX_VAGRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28829 /* Tunable: ENABLE_VEHICLE_KOMODA */ && iVar1 < Global_262145.f_28850 /* Tunable: LAUNCHPOSIX_KOMODA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28830 /* Tunable: ENABLE_VEHICLE_STRYDER */ && iVar1 < Global_262145.f_28851 /* Tunable: LAUNCHPOSIX_STRYDER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28831 /* Tunable: ENABLE_VEHICLE_FURIA */ && iVar1 < Global_262145.f_28852 /* Tunable: LAUNCHPOSIX_FURIA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28832 /* Tunable: ENABLE_VEHICLE_ZHABA */ && iVar1 < Global_262145.f_28853 /* Tunable: LAUNCHPOSIX_ZHABA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28833 /* Tunable: ENABLE_VEHICLE_JB7002 */ && iVar1 < Global_262145.f_28854 /* Tunable: LAUNCHPOSIX_JB7002 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28834 /* Tunable: ENABLE_VEHICLE_FIRETRUCK */ && iVar1 < Global_262145.f_28855 /* Tunable: LAUNCHPOSIX_FIRETRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28835 /* Tunable: ENABLE_VEHICLE_BURRITO2 */ && iVar1 < Global_262145.f_28856 /* Tunable: LAUNCHPOSIX_BURRITO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28836 /* Tunable: ENABLE_VEHICLE_BOXVILLE */ && iVar1 < Global_262145.f_28857 /* Tunable: LAUNCHPOSIX_BOXVILLE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28837 /* Tunable: ENABLE_VEHICLE_STOCKADE */ && iVar1 < Global_262145.f_28858 /* Tunable: LAUNCHPOSIX_STOCKADE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28838 /* Tunable: ENABLE_VEHICLE_MINITANK */ && iVar1 < Global_262145.f_28859 /* Tunable: LAUNCHPOSIX_MINITANK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28839 /* Tunable: ENABLE_VEHICLE_LGUARD */ && iVar1 < Global_262145.f_28860 /* Tunable: LAUNCHPOSIX_LGUARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28840 /* Tunable: ENABLE_VEHICLE_BLAZER2 */ && iVar1 < Global_262145.f_28861 /* Tunable: LAUNCHPOSIX_BLAZER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28863 /* Tunable: ENABLE_VEHICLE_FORMULA */ && iVar1 < Global_262145.f_28864 /* Tunable: LAUNCHPOSIX_FORMULA */) && !Global_262145.f_28818 /* Tunable: ENABLE_VEHICLE_FORMULA_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28866 /* Tunable: ENABLE_VEHICLE_FORMULA2 */ && iVar1 < Global_262145.f_28867 /* Tunable: LAUNCHPOSIX_FORMULA2 */) && !Global_262145.f_28819 /* Tunable: ENABLE_VEHICLE_FORMULA2_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28871 /* Tunable: ENABLE_VEHICLE_IMORGEN */ && iVar1 < Global_262145.f_28874 /* Tunable: LAUNCHPOSIX_IMORGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28872 /* Tunable: ENABLE_VEHICLE_REBLA */ && iVar1 < Global_262145.f_28875 /* Tunable: LAUNCHPOSIX_REBLA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28873 /* Tunable: ENABLE_VEHICLE_VSTR */ && iVar1 < Global_262145.f_28876 /* Tunable: LAUNCHPOSIX_VSTR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29889 /* Tunable: ENABLE_VEH_GAUNTLET5 */ && iVar1 < Global_262145.f_29554 /* Tunable: LAUNCHPOSIX_GAUNTLET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29540 /* Tunable: ENABLE_VEH_CLUB */ && iVar1 < Global_262145.f_29561 /* Tunable: LAUNCHPOSIX_CLUB */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29541 /* Tunable: ENABLE_VEH_DUKES3 */ && iVar1 < Global_262145.f_29547 /* Tunable: LAUNCHPOSIX_DUKES3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29887 /* Tunable: ENABLE_VEH_YOSEMITE3 */ && iVar1 < Global_262145.f_29555 /* Tunable: LAUNCHPOSIX_YOSEMITE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29888 /* Tunable: ENABLE_VEH_PEYOTE3 */ && iVar1 < Global_262145.f_29556 /* Tunable: LAUNCHPOSIX_PEYOTE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29534 /* Tunable: ENABLE_VEH_GLENDALE2 */ && iVar1 < Global_262145.f_29553 /* Tunable: LAUNCHPOSIX_GLENDALE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29535 /* Tunable: ENABLE_VEH_PENUMBRA2 */ && iVar1 < Global_262145.f_29562 /* Tunable: LAUNCHPOSIX_PENUMBRA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29536 /* Tunable: ENABLE_VEH_LANDSTALKER2 */ && iVar1 < Global_262145.f_29552 /* Tunable: LAUNCHPOSIX_LANDSTALKER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29537 /* Tunable: ENABLE_VEH_SEMINOLE2 */ && iVar1 < Global_262145.f_29550 /* Tunable: LAUNCHPOSIX_SEMINOLE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29883 /* Tunable: ENABLE_VEH_TIGON */ && iVar1 < Global_262145.f_29557 /* Tunable: LAUNCHPOSIX_TIGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29884 /* Tunable: ENABLE_VEH_OPENWHEEL1 */ && iVar1 < Global_262145.f_29558 /* Tunable: LAUNCHPOSIX_OPENWHEEL1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29885 /* Tunable: ENABLE_VEH_OPENWHEEL2 */ && iVar1 < Global_262145.f_29559 /* Tunable: LAUNCHPOSIX_OPENWHEEL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29886 /* Tunable: ENABLE_VEH_COQUETTE4 */ && iVar1 < Global_262145.f_29560 /* Tunable: LAUNCHPOSIX_COQUETTE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29538 /* Tunable: ENABLE_VEH_MANANA2 */ && iVar1 < Global_262145.f_29549 /* Tunable: LAUNCHPOSIX_MANANA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29539 /* Tunable: ENABLE_VEH_YOUGA3 */ && iVar1 < Global_262145.f_29551 /* Tunable: LAUNCHPOSIX_YOUGA3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30348 /* Tunable: ENABLE_VEHICLE_TOREADOR */ && iVar1 < Global_262145.f_30331 /* Tunable: LAUNCHPOSIX_TOREADOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30349 /* Tunable: ENABLE_VEHICLE_ANNIHILATOR2 */ && iVar1 < Global_262145.f_30332 /* Tunable: LAUNCHPOSIX_ANNIHILATOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30350 /* Tunable: ENABLE_VEHICLE_ALKONOST */ && iVar1 < Global_262145.f_30333 /* Tunable: LAUNCHPOSIX_ALKONOST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30351 /* Tunable: ENABLE_VEHICLE_PATROLBOAT */ && iVar1 < Global_262145.f_30334 /* Tunable: LAUNCHPOSIX_PATROLBOAT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30352 /* Tunable: ENABLE_VEHICLE_LONGFIN */ && iVar1 < Global_262145.f_30335 /* Tunable: LAUNCHPOSIX_LONGFIN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30353 /* Tunable: ENABLE_VEHICLE_WINKY */ && iVar1 < Global_262145.f_30336 /* Tunable: LAUNCHPOSIX_WINKY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30354 /* Tunable: ENABLE_VEHICLE_VETO */ && iVar1 < Global_262145.f_30337 /* Tunable: LAUNCHPOSIX_VETO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30355 /* Tunable: ENABLE_VEHICLE_VETO2 */ && iVar1 < Global_262145.f_30338 /* Tunable: LAUNCHPOSIX_VETO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30356 /* Tunable: ENABLE_VEHICLE_ITALIRSX */ && iVar1 < Global_262145.f_30339 /* Tunable: LAUNCHPOSIX_ITALIRSX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30365 /* Tunable: -552682736 */)
		{
		}
		else if (!Global_262145.f_30357 /* Tunable: ENABLE_VEHICLE_WEEVIL */ && iVar1 < Global_262145.f_30340 /* Tunable: LAUNCHPOSIX_WEEVIL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30358 /* Tunable: ENABLE_VEHICLE_MANCHEZ2 */ && iVar1 < Global_262145.f_30341 /* Tunable: LAUNCHPOSIX_MANCHEZ2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30359 /* Tunable: ENABLE_VEHICLE_SLAMTRUCK */ && iVar1 < Global_262145.f_30342 /* Tunable: LAUNCHPOSIX_SLAMTRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30360 /* Tunable: ENABLE_VEHICLE_VETIR */ && iVar1 < Global_262145.f_30343 /* Tunable: LAUNCHPOSIX_VETIR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30361 /* Tunable: ENABLE_VEHICLE_SQUADDIE */ && iVar1 < Global_262145.f_30344 /* Tunable: LAUNCHPOSIX_SQUADDIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30366 /* Tunable: 976860524 */)
		{
		}
		else if (!Global_262145.f_30362 /* Tunable: ENABLE_VEHICLE_BRIOSO2 */ && iVar1 < Global_262145.f_30345 /* Tunable: LAUNCHPOSIX_BRIOSO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30363 /* Tunable: ENABLE_VEHICLE_DINGY5 */ && iVar1 < Global_262145.f_30346 /* Tunable: LAUNCHPOSIX_DINGY5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30364 /* Tunable: ENABLE_VEHICLE_VERUS */ && iVar1 < Global_262145.f_30347 /* Tunable: LAUNCHPOSIX_VERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31216 /* Tunable: ENABLE_VEHICLE_TAILGATER2 */ && iVar1 < Global_262145.f_31199 /* Tunable: LAUNCHPOSIX_TAILGATER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31217 /* Tunable: ENABLE_VEHICLE_EUROS */ && iVar1 < Global_262145.f_31200 /* Tunable: LAUNCHPOSIX_EUROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31218 /* Tunable: ENABLE_VEHICLE_SULTAN3 */ && iVar1 < Global_262145.f_31201 /* Tunable: LAUNCHPOSIX_SULTAN3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31219 /* Tunable: ENABLE_VEHICLE_RT3000 */ && iVar1 < Global_262145.f_31202 /* Tunable: LAUNCHPOSIX_RT3000 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31220 /* Tunable: ENABLE_VEHICLE_VECTRE */ && iVar1 < Global_262145.f_31203 /* Tunable: LAUNCHPOSIX_VECTRE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31221 /* Tunable: ENABLE_VEHICLE_ZR350 */ && iVar1 < Global_262145.f_31204 /* Tunable: LAUNCHPOSIX_ZR350 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31222 /* Tunable: ENABLE_VEHICLE_WARRENER2 */ && iVar1 < Global_262145.f_31205 /* Tunable: LAUNCHPOSIX_WARRENER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31223 /* Tunable: ENABLE_VEHICLE_CALICO */ && iVar1 < Global_262145.f_31206 /* Tunable: LAUNCHPOSIX_CALICO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31224 /* Tunable: ENABLE_VEHICLE_REMUS */ && iVar1 < Global_262145.f_31207 /* Tunable: LAUNCHPOSIX_REMUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31225 /* Tunable: ENABLE_VEHICLE_CYPHER */ && iVar1 < Global_262145.f_31208 /* Tunable: LAUNCHPOSIX_CYPHER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31226 /* Tunable: ENABLE_VEHICLE_DOMINATOR7 */ && iVar1 < Global_262145.f_31209 /* Tunable: LAUNCHPOSIX_DOMINATOR7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31227 /* Tunable: ENABLE_VEHICLE_JESTER4 */ && iVar1 < Global_262145.f_31210 /* Tunable: LAUNCHPOSIX_JESTER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31228 /* Tunable: ENABLE_VEHICLE_FUTO2 */ && iVar1 < Global_262145.f_31211 /* Tunable: LAUNCHPOSIX_FUTO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31229 /* Tunable: ENABLE_VEHICLE_DOMINATOR8 */ && iVar1 < Global_262145.f_31212 /* Tunable: LAUNCHPOSIX_DOMINATOR8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31230 /* Tunable: ENABLE_VEHICLE_PREVION */ && iVar1 < Global_262145.f_31213 /* Tunable: LAUNCHPOSIX_PREVION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31231 /* Tunable: ENABLE_VEHICLE_GROWLER */ && iVar1 < Global_262145.f_31214 /* Tunable: LAUNCHPOSIX_GROWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31232 /* Tunable: ENABLE_VEHICLE_COMET6 */ && iVar1 < Global_262145.f_31215 /* Tunable: LAUNCHPOSIX_COMET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32099 /* Tunable: ENABLE_VEHICLE_CHAMPION */ && iVar1 < Global_262145.f_32084 /* Tunable: LAUNCHPOSIX_CHAMPION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32100 /* Tunable: ENABLE_VEHICLE_BUFFALO4 */ && iVar1 < Global_262145.f_32085 /* Tunable: LAUNCHPOSIX_BUFFALO4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32101 /* Tunable: ENABLE_VEHICLE_DEITY */ && iVar1 < Global_262145.f_32086 /* Tunable: LAUNCHPOSIX_DEITY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32102 /* Tunable: ENABLE_VEHICLE_JUBILEE */ && iVar1 < Global_262145.f_32087 /* Tunable: LAUNCHPOSIX_JUBILEE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32103 /* Tunable: ENABLE_VEHICLE_IGNUS */ && iVar1 < Global_262145.f_32088 /* Tunable: LAUNCHPOSIX_IGNUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32104 /* Tunable: ENABLE_VEHICLE_CINQUEMILA */ && iVar1 < Global_262145.f_32089 /* Tunable: LAUNCHPOSIX_CINQUEMILA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32105 /* Tunable: ENABLE_VEHICLE_ASTRON */ && iVar1 < Global_262145.f_32090 /* Tunable: LAUNCHPOSIX_ASTRON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32106 /* Tunable: ENABLE_VEHICLE_COMET7 */ && iVar1 < Global_262145.f_32091 /* Tunable: LAUNCHPOSIX_COMET7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32107 /* Tunable: ENABLE_VEHICLE_ZENO */ && iVar1 < Global_262145.f_32092 /* Tunable: LAUNCHPOSIX_ZENO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32108 /* Tunable: ENABLE_VEHICLE_REEVER */ && iVar1 < Global_262145.f_32093 /* Tunable: LAUNCHPOSIX_REEVER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32109 /* Tunable: ENABLE_VEHICLE_IWAGEN */ && iVar1 < Global_262145.f_32094 /* Tunable: LAUNCHPOSIX_IWAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32110 /* Tunable: ENABLE_VEHICLE_GRANGER2 */ && iVar1 < Global_262145.f_32095 /* Tunable: LAUNCHPOSIX_GRANGER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32111 /* Tunable: ENABLE_VEHICLE_PATRIOT3 */ && iVar1 < Global_262145.f_32096 /* Tunable: LAUNCHPOSIX_PATRIOT3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32112 /* Tunable: ENABLE_VEHICLE_SHINOBI */ && iVar1 < Global_262145.f_32097 /* Tunable: LAUNCHPOSIX_FAST_MOTORBIKE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32177 /* Tunable: 991164709 */)
		{
		}
		else if (!Global_262145.f_32113 /* Tunable: ENABLE_VEHICLE_BALLER7 */ && iVar1 < Global_262145.f_32098 /* Tunable: LAUNCHPOSIX_BALLER7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33350 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */ && iVar1 < Global_262145.f_33331 /* Tunable: LAUNCHPOSIX_BRIOSO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33344 /* Tunable: ENABLE_VEHICLE_CORSITA */ && iVar1 < Global_262145.f_33325 /* Tunable: LAUNCHPOSIX_CORSITA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33348 /* Tunable: ENABLE_VEHICLE_DRAUGUR */ && iVar1 < Global_262145.f_33329 /* Tunable: LAUNCHPOSIX_DRAUGUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33342 /* Tunable: ENABLE_VEHICLE_GREENWOOD */ && iVar1 < Global_262145.f_33323 /* Tunable: LAUNCHPOSIX_GREENWOOD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33353 /* Tunable: ENABLE_VEHICLE_KANJOSJ */ && iVar1 < Global_262145.f_33334 /* Tunable: LAUNCHPOSIX_KANJOSJ */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33345 /* Tunable: ENABLE_VEHICLE_LM87 */ && iVar1 < Global_262145.f_33326 /* Tunable: LAUNCHPOSIX_LM87 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33354 /* Tunable: ENABLE_VEHICLE_POSTLUDE */ && iVar1 < Global_262145.f_33335 /* Tunable: LAUNCHPOSIX_POSTLUDE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33356 /* Tunable: ENABLE_VEHICLE_RHINEHART */ && iVar1 < Global_262145.f_33337 /* Tunable: LAUNCHPOSIX_RHINEHART */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33347 /* Tunable: ENABLE_VEHICLE_SM722 */ && iVar1 < Global_262145.f_33328 /* Tunable: LAUNCHPOSIX_SM722 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33355 /* Tunable: ENABLE_VEHICLE_TENF */ && iVar1 < Global_262145.f_33336 /* Tunable: LAUNCHPOSIX_TENF */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33358 /* Tunable: ENABLE_VEHICLE_TENF2 */ && iVar1 < Global_262145.f_33339 /* Tunable: LAUNCHPOSIX_TENF2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33343 /* Tunable: ENABLE_VEHICLE_TORERO2 */ && iVar1 < Global_262145.f_33324 /* Tunable: LAUNCHPOSIX_TORERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33351 /* Tunable: ENABLE_VEHICLE_VIGERO2 */ && iVar1 < Global_262145.f_33332 /* Tunable: LAUNCHPOSIX_VIGERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33357 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */ && iVar1 < Global_262145.f_33338 /* Tunable: LAUNCHPOSIX_WEEVIL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33349 /* Tunable: ENABLE_VEHICLE_RUINER4 */ && iVar1 < Global_262145.f_33330 /* Tunable: LAUNCHPOSIX_RUINER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33359 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */ && iVar1 < Global_262145.f_33340 /* Tunable: LAUNCHPOSIX_MODEL_SENTINEL4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33346 /* Tunable: ENABLE_VEHICLE_CONADA */ && iVar1 < Global_262145.f_33327 /* Tunable: LAUNCHPOSIX_CONADA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33341 /* Tunable: ENABLE_VEHICLE_OMNISEGT */ && iVar1 < Global_262145.f_33322 /* Tunable: LAUNCHPOSIX_OMNISEGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_34217 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34201 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_34217 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34201 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_34226 /* Tunable: ENABLE_VEHICLE_EUDORA */ && iVar1 < Global_262145.f_34209 /* Tunable: LAUNCHPOSIX_EUDORA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_34220 /* Tunable: ENABLE_VEHICLE_POWERSURGE */ && iVar1 < Global_262145.f_34204 /* Tunable: LAUNCHPOSIX_POWERSURGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_34214 /* Tunable: ENABLE_VEHICLE_JOURNEY2 */ && iVar1 < Global_262145.f_34198 /* Tunable: LAUNCHPOSIX_JOURNEY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_34215 /* Tunable: ENABLE_VEHICLE_SURFER3 */ && iVar1 < Global_262145.f_34199 /* Tunable: LAUNCHPOSIX_SURFER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_34212 /* Tunable: ENABLE_VEHICLE_ENTITY3 */ && iVar1 < Global_262145.f_34196 /* Tunable: LAUNCHPOSIX_ENTITY3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_34223 /* Tunable: ENABLE_VEHICLE_PANTHERE */ && iVar1 < Global_262145.f_34207 /* Tunable: LAUNCHPOSIX_PANTHERE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_34227 /* Tunable: ENABLE_VEHICLE_BOOR */ && iVar1 < Global_262145.f_34211 /* Tunable: LAUNCHPOSIX_BOOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_34224 /* Tunable: ENABLE_VEHICLE_EVERON2 */ && iVar1 < Global_262145.f_34208 /* Tunable: LAUNCHPOSIX_EVERON2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_34213 /* Tunable: ENABLE_VEHICLE_TULIP2 */ && iVar1 < Global_262145.f_34197 /* Tunable: LAUNCHPOSIX_TULIP2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_34216 /* Tunable: ENABLE_VEHICLE_R300 */ && iVar1 < Global_262145.f_34200 /* Tunable: LAUNCHPOSIX_R300 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_34225 /* Tunable: ENABLE_VEHICLE_VIRTUE */ && iVar1 < Global_262145.f_34210 /* Tunable: LAUNCHPOSIX_VIRTUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_34221 /* Tunable: ENABLE_VEHICLE_ISSI8 */ && iVar1 < Global_262145.f_34205 /* Tunable: LAUNCHPOSIX_ISSI8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_34222 /* Tunable: ENABLE_VEHICLE_BROADWAY */ && iVar1 < Global_262145.f_34206 /* Tunable: LAUNCHPOSIX_BROADWAY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_34219 /* Tunable: ENABLE_VEHICLE_TAHOMA */ && iVar1 < Global_262145.f_34203 /* Tunable: LAUNCHPOSIX_TAHOMA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_34218 /* Tunable: ENABLE_VEHICLE_TAXI */ && iVar1 < Global_262145.f_34202 /* Tunable: LAUNCHPOSIX_TAXI */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("exemplar"))
	{
		if (!Global_262145.f_35167 /* Tunable: ENABLE_VEHICLE_EXEMPLAR */ && !Global_262145.f_35168 /* Tunable: ENABLE_VEHICLE_EXEMPLAR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cogcabrio"))
	{
		if (!Global_262145.f_35169 /* Tunable: ENABLE_VEHICLE_COGCABRIO */ && !Global_262145.f_35170 /* Tunable: ENABLE_VEHICLE_COGCABRIO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrust"))
	{
		if (!Global_262145.f_35171 /* Tunable: ENABLE_VEHICLE_THRUST */ && !Global_262145.f_35172 /* Tunable: ENABLE_VEHICLE_THRUST_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vindicator"))
	{
		if (!Global_262145.f_35173 /* Tunable: ENABLE_VEHICLE_VINDICATOR */ && !Global_262145.f_35174 /* Tunable: ENABLE_VEHICLE_VINDICATOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette3"))
	{
		if (!Global_262145.f_35175 /* Tunable: ENABLE_VEHICLE_COQUETTE3 */ && !Global_262145.f_35176 /* Tunable: ENABLE_VEHICLE_COQUETTE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brawler"))
	{
		if (!Global_262145.f_35177 /* Tunable: ENABLE_VEHICLE_BRAWLER */ && !Global_262145.f_35178 /* Tunable: ENABLE_VEHICLE_BRAWLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		if (!Global_262145.f_35179 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI */ && !Global_262145.f_35180 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti2"))
	{
		if (!Global_262145.f_35181 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2 */ && !Global_262145.f_35182 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog55"))
	{
		if (!Global_262145.f_35183 /* Tunable: ENABLE_VEHICLE_COG55 */ && !Global_262145.f_35184 /* Tunable: ENABLE_VEHICLE_COG55_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog552"))
	{
		if (!Global_262145.f_35185 /* Tunable: ENABLE_VEHICLE_COG552 */ && !Global_262145.f_35186 /* Tunable: ENABLE_VEHICLE_COG552_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("superd"))
	{
		if (!Global_262145.f_35187 /* Tunable: ENABLE_VEHICLE_SUPERD */ && !Global_262145.f_35188 /* Tunable: ENABLE_VEHICLE_SUPERD_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter4"))
	{
		if (!Global_262145.f_35189 /* Tunable: ENABLE_VEHICLE_SCHAFTER4 */ && !Global_262145.f_35190 /* Tunable: ENABLE_VEHICLE_SCHAFTER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter6"))
	{
		if (!Global_262145.f_35191 /* Tunable: ENABLE_VEHICLE_SCHAFTER6 */ && !Global_262145.f_35192 /* Tunable: ENABLE_VEHICLE_SCHAFTER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alpha"))
	{
		if (!Global_262145.f_35193 /* Tunable: ENABLE_VEHICLE_ALPHA */ && !Global_262145.f_35194 /* Tunable: ENABLE_VEHICLE_ALPHA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer2"))
	{
		if (!Global_262145.f_35195 /* Tunable: ENABLE_VEHICLE_FELTZER2 */ && !Global_262145.f_35196 /* Tunable: ENABLE_VEHICLE_FELTZER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro"))
	{
		if (!Global_262145.f_35197 /* Tunable: ENABLE_VEHICLE_MASSACRO */ && !Global_262145.f_35198 /* Tunable: ENABLE_VEHICLE_MASSACRO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt"))
	{
		if (!Global_262145.f_35199 /* Tunable: ENABLE_VEHICLE_RAPIDGT */ && !Global_262145.f_35200 /* Tunable: ENABLE_VEHICLE_RAPIDGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt2"))
	{
		if (!Global_262145.f_35201 /* Tunable: ENABLE_VEHICLE_RAPIDGT2 */ && !Global_262145.f_35202 /* Tunable: ENABLE_VEHICLE_RAPIDGT2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_35203 /* Tunable: ENABLE_VEHICLE_SEVEN70 */ && !Global_262145.f_35204 /* Tunable: ENABLE_VEHICLE_SEVEN70_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester"))
	{
		if (!Global_262145.f_35205 /* Tunable: ENABLE_VEHICLE_JESTER */ && !Global_262145.f_35206 /* Tunable: ENABLE_VEHICLE_JESTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		if (!Global_262145.f_35207 /* Tunable: ENABLE_VEHICLE_BESTIAGTS */ && !Global_262145.f_35208 /* Tunable: ENABLE_VEHICLE_BESTIAGTS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("carbonizzare"))
	{
		if (!Global_262145.f_35209 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE */ && !Global_262145.f_35210 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette"))
	{
		if (!Global_262145.f_35211 /* Tunable: ENABLE_VEHICLE_COQUETTE */ && !Global_262145.f_35212 /* Tunable: ENABLE_VEHICLE_COQUETTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furoregt"))
	{
		if (!Global_262145.f_35213 /* Tunable: ENABLE_VEHICLE_FUROREGT */ && !Global_262145.f_35214 /* Tunable: ENABLE_VEHICLE_FUROREGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef"))
	{
		if (!Global_262145.f_35215 /* Tunable: ENABLE_VEHICLE_NINEF */ && !Global_262145.f_35216 /* Tunable: ENABLE_VEHICLE_NINEF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef2"))
	{
		if (!Global_262145.f_35217 /* Tunable: ENABLE_VEHICLE_NINEF2 */ && !Global_262145.f_35218 /* Tunable: ENABLE_VEHICLE_NINEF2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		if (!Global_262145.f_35219 /* Tunable: ENABLE_VEHICLE_VERLIERER2 */ && !Global_262145.f_35220 /* Tunable: ENABLE_VEHICLE_VERLIERER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype"))
	{
		if (!Global_262145.f_35221 /* Tunable: ENABLE_VEHICLE_BTYPE */ && !Global_262145.f_35222 /* Tunable: ENABLE_VEHICLE_BTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		if (!Global_262145.f_35223 /* Tunable: ENABLE_VEHICLE_FELTZER3 */ && !Global_262145.f_35224 /* Tunable: ENABLE_VEHICLE_FELTZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingergt"))
	{
		if (!Global_262145.f_35225 /* Tunable: ENABLE_VEHICLE_STINGERGT */ && !Global_262145.f_35226 /* Tunable: ENABLE_VEHICLE_STINGERGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stinger"))
	{
		if (!Global_262145.f_35227 /* Tunable: ENABLE_VEHICLE_STINGER */ && !Global_262145.f_35228 /* Tunable: ENABLE_VEHICLE_STINGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette2"))
	{
		if (!Global_262145.f_35229 /* Tunable: ENABLE_VEHICLE_COQUETTE2 */ && !Global_262145.f_35230 /* Tunable: ENABLE_VEHICLE_COQUETTE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb700"))
	{
		if (!Global_262145.f_35231 /* Tunable: ENABLE_VEHICLE_JB700 */ && !Global_262145.f_35232 /* Tunable: ENABLE_VEHICLE_JB700_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mamba"))
	{
		if (!Global_262145.f_35233 /* Tunable: ENABLE_VEHICLE_MAMBA */ && !Global_262145.f_35234 /* Tunable: ENABLE_VEHICLE_MAMBA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monroe"))
	{
		if (!Global_262145.f_35235 /* Tunable: ENABLE_VEHICLE_MONROE */ && !Global_262145.f_35236 /* Tunable: ENABLE_VEHICLE_MONROE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype3"))
	{
		if (!Global_262145.f_35237 /* Tunable: ENABLE_VEHICLE_BTYPE3 */ && !Global_262145.f_35238 /* Tunable: ENABLE_VEHICLE_BTYPE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ztype"))
	{
		if (!Global_262145.f_35239 /* Tunable: ENABLE_VEHICLE_ZTYPE */ && !Global_262145.f_35240 /* Tunable: ENABLE_VEHICLE_ZTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("voltic"))
	{
		if (!Global_262145.f_35241 /* Tunable: ENABLE_VEHICLE_VOLTIC */ && !Global_262145.f_35242 /* Tunable: ENABLE_VEHICLE_VOLTIC_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_35243 /* Tunable: ENABLE_VEHICLE_SHEAVA */ && !Global_262145.f_35244 /* Tunable: ENABLE_VEHICLE_SHEAVA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah"))
	{
		if (!Global_262145.f_35245 /* Tunable: ENABLE_VEHICLE_CHEETAH */ && !Global_262145.f_35246 /* Tunable: ENABLE_VEHICLE_CHEETAH_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entityxf"))
	{
		if (!Global_262145.f_35247 /* Tunable: ENABLE_VEHICLE_ENTITYXF */ && !Global_262145.f_35248 /* Tunable: ENABLE_VEHICLE_ENTITYXF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus"))
	{
		if (!Global_262145.f_35249 /* Tunable: ENABLE_VEHICLE_INFERNUS */ && !Global_262145.f_35250 /* Tunable: ENABLE_VEHICLE_INFERNUS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vacca"))
	{
		if (!Global_262145.f_35251 /* Tunable: ENABLE_VEHICLE_VACCA */ && !Global_262145.f_35252 /* Tunable: ENABLE_VEHICLE_VACCA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bullet"))
	{
		if (!Global_262145.f_35253 /* Tunable: ENABLE_VEHICLE_BULLET */ && !Global_262145.f_35254 /* Tunable: ENABLE_VEHICLE_BULLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fmj"))
	{
		if (!Global_262145.f_35255 /* Tunable: ENABLE_VEHICLE_FMJ */ && !Global_262145.f_35256 /* Tunable: ENABLE_VEHICLE_FMJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller2"))
	{
		if (!Global_262145.f_35257 /* Tunable: ENABLE_VEHICLE_BALLER2 */ && !Global_262145.f_35258 /* Tunable: ENABLE_VEHICLE_BALLER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller3"))
	{
		if (!Global_262145.f_35259 /* Tunable: ENABLE_VEHICLE_BALLER3 */ && !Global_262145.f_35260 /* Tunable: ENABLE_VEHICLE_BALLER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller5"))
	{
		if (!Global_262145.f_35261 /* Tunable: ENABLE_VEHICLE_BALLER5 */ && !Global_262145.f_35262 /* Tunable: ENABLE_VEHICLE_BALLER5_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller4"))
	{
		if (!Global_262145.f_35263 /* Tunable: ENABLE_VEHICLE_BALLER4 */ && !Global_262145.f_35264 /* Tunable: ENABLE_VEHICLE_BALLER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller6"))
	{
		if (!Global_262145.f_35265 /* Tunable: ENABLE_VEHICLE_BALLER6 */ && !Global_262145.f_35266 /* Tunable: ENABLE_VEHICLE_BALLER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls"))
	{
		if (!Global_262145.f_35267 /* Tunable: ENABLE_VEHICLE_XLS */ && !Global_262145.f_35268 /* Tunable: ENABLE_VEHICLE_XLS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls2"))
	{
		if (!Global_262145.f_35269 /* Tunable: ENABLE_VEHICLE_XLS2 */ && !Global_262145.f_35270 /* Tunable: ENABLE_VEHICLE_XLS2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("prairie"))
	{
		if (!Global_262145.f_35271 /* Tunable: ENABLE_VEHICLE_PRAIRIE */ && !Global_262145.f_35272 /* Tunable: ENABLE_VEHICLE_PRAIRIE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi2"))
	{
		if (!Global_262145.f_35273 /* Tunable: ENABLE_VEHICLE_ISSI2 */ && !Global_262145.f_35274 /* Tunable: ENABLE_VEHICLE_ISSI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dilettante"))
	{
		if (!Global_262145.f_35275 /* Tunable: ENABLE_VEHICLE_DILETTANTE */ && !Global_262145.f_35276 /* Tunable: ENABLE_VEHICLE_DILETTANTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon"))
	{
		if (!Global_262145.f_35277 /* Tunable: ENABLE_VEHICLE_FELON */ && !Global_262145.f_35278 /* Tunable: ENABLE_VEHICLE_FELON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon2"))
	{
		if (!Global_262145.f_35279 /* Tunable: ENABLE_VEHICLE_FELON2 */ && !Global_262145.f_35280 /* Tunable: ENABLE_VEHICLE_FELON2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("f620"))
	{
		if (!Global_262145.f_35281 /* Tunable: ENABLE_VEHICLE_F620 */ && !Global_262145.f_35282 /* Tunable: ENABLE_VEHICLE_F620_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jackal"))
	{
		if (!Global_262145.f_35283 /* Tunable: ENABLE_VEHICLE_JACKAL */ && !Global_262145.f_35284 /* Tunable: ENABLE_VEHICLE_JACKAL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle2"))
	{
		if (!Global_262145.f_35285 /* Tunable: ENABLE_VEHICLE_ORACLE2 */ && !Global_262145.f_35286 /* Tunable: ENABLE_VEHICLE_ORACLE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle"))
	{
		if (!Global_262145.f_35287 /* Tunable: ENABLE_VEHICLE_ORACLE */ && !Global_262145.f_35288 /* Tunable: ENABLE_VEHICLE_ORACLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel2"))
	{
		if (!Global_262145.f_35289 /* Tunable: ENABLE_VEHICLE_SENTINEL2 */ && !Global_262145.f_35290 /* Tunable: ENABLE_VEHICLE_SENTINEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion"))
	{
		if (!Global_262145.f_35291 /* Tunable: ENABLE_VEHICLE_ZION */ && !Global_262145.f_35292 /* Tunable: ENABLE_VEHICLE_ZION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion2"))
	{
		if (!Global_262145.f_35293 /* Tunable: ENABLE_VEHICLE_ZION2 */ && !Global_262145.f_35294 /* Tunable: ENABLE_VEHICLE_ZION2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akuma"))
	{
		if (!Global_262145.f_35295 /* Tunable: ENABLE_VEHICLE_AKUMA */ && !Global_262145.f_35296 /* Tunable: ENABLE_VEHICLE_AKUMA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("double"))
	{
		if (!Global_262145.f_35297 /* Tunable: ENABLE_VEHICLE_DOUBLE */ && !Global_262145.f_35298 /* Tunable: ENABLE_VEHICLE_DOUBLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("enduro"))
	{
		if (!Global_262145.f_35299 /* Tunable: ENABLE_VEHICLE_ENDURO */ && !Global_262145.f_35300 /* Tunable: ENABLE_VEHICLE_ENDURO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hexer"))
	{
		if (!Global_262145.f_35301 /* Tunable: ENABLE_VEHICLE_HEXER */ && !Global_262145.f_35302 /* Tunable: ENABLE_VEHICLE_HEXER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("innovation"))
	{
		if (!Global_262145.f_35303 /* Tunable: ENABLE_VEHICLE_INNOVATION */ && !Global_262145.f_35304 /* Tunable: ENABLE_VEHICLE_INNOVATION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez"))
	{
		if (!Global_262145.f_35305 /* Tunable: ENABLE_VEHICLE_SANCHEZ */ && !Global_262145.f_35306 /* Tunable: ENABLE_VEHICLE_SANCHEZ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez2"))
	{
		if (!Global_262145.f_35307 /* Tunable: ENABLE_VEHICLE_SANCHEZ2 */ && !Global_262145.f_35308 /* Tunable: ENABLE_VEHICLE_SANCHEZ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bati2"))
	{
		if (!Global_262145.f_35309 /* Tunable: ENABLE_VEHICLE_BATI2 */ && !Global_262145.f_35310 /* Tunable: ENABLE_VEHICLE_BATI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio2"))
	{
		if (!Global_262145.f_35311 /* Tunable: ENABLE_VEHICLE_FAGGIO2 */ && !Global_262145.f_35312 /* Tunable: ENABLE_VEHICLE_FAGGIO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruffian"))
	{
		if (!Global_262145.f_35313 /* Tunable: ENABLE_VEHICLE_RUFFIAN */ && !Global_262145.f_35314 /* Tunable: ENABLE_VEHICLE_RUFFIAN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nemesis"))
	{
		if (!Global_262145.f_35315 /* Tunable: ENABLE_VEHICLE_NEMESIS */ && !Global_262145.f_35316 /* Tunable: ENABLE_VEHICLE_NEMESIS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		if (!Global_262145.f_35317 /* Tunable: ENABLE_VEHICLE_HAKUCHOU */ && !Global_262145.f_35318 /* Tunable: ENABLE_VEHICLE_HAKUCHOU_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pcj"))
	{
		if (!Global_262145.f_35319 /* Tunable: ENABLE_VEHICLE_PCJ */ && !Global_262145.f_35320 /* Tunable: ENABLE_VEHICLE_PCJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vader"))
	{
		if (!Global_262145.f_35321 /* Tunable: ENABLE_VEHICLE_VADER */ && !Global_262145.f_35322 /* Tunable: ENABLE_VEHICLE_VADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sovereign"))
	{
		if (!Global_262145.f_35323 /* Tunable: ENABLE_VEHICLE_SOVEREIGN */ && !Global_262145.f_35324 /* Tunable: ENABLE_VEHICLE_SOVEREIGN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet"))
	{
		if (!Global_262145.f_35325 /* Tunable: ENABLE_VEHICLE_GAUNTLET */ && !Global_262145.f_35326 /* Tunable: ENABLE_VEHICLE_GAUNTLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratloader"))
	{
		if (!Global_262145.f_35327 /* Tunable: ENABLE_VEHICLE_RATLOADER */ && !Global_262145.f_35328 /* Tunable: ENABLE_VEHICLE_RATLOADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("picador"))
	{
		if (!Global_262145.f_35329 /* Tunable: ENABLE_VEHICLE_PICADOR */ && !Global_262145.f_35330 /* Tunable: ENABLE_VEHICLE_PICADOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero"))
	{
		if (!Global_262145.f_35331 /* Tunable: ENABLE_VEHICLE_VIGERO */ && !Global_262145.f_35332 /* Tunable: ENABLE_VEHICLE_VIGERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner"))
	{
		if (!Global_262145.f_35333 /* Tunable: ENABLE_VEHICLE_RUINER */ && !Global_262145.f_35334 /* Tunable: ENABLE_VEHICLE_RUINER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa"))
	{
		if (!Global_262145.f_35335 /* Tunable: ENABLE_VEHICLE_TAMPA */ && !Global_262145.f_35336 /* Tunable: ENABLE_VEHICLE_TAMPA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blade"))
	{
		if (!Global_262145.f_35337 /* Tunable: ENABLE_VEHICLE_BLADE */ && !Global_262145.f_35338 /* Tunable: ENABLE_VEHICLE_BLADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bifta"))
	{
		if (!Global_262145.f_35339 /* Tunable: ENABLE_VEHICLE_BIFTA */ && !Global_262145.f_35340 /* Tunable: ENABLE_VEHICLE_BIFTA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune"))
	{
		if (!Global_262145.f_35341 /* Tunable: ENABLE_VEHICLE_DUNE */ && !Global_262145.f_35342 /* Tunable: ENABLE_VEHICLE_DUNE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bfinjection"))
	{
		if (!Global_262145.f_35343 /* Tunable: ENABLE_VEHICLE_BFINJECTION */ && !Global_262145.f_35344 /* Tunable: ENABLE_VEHICLE_BFINJECTION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bodhi2"))
	{
		if (!Global_262145.f_35345 /* Tunable: ENABLE_VEHICLE_BODHI2 */ && !Global_262145.f_35346 /* Tunable: ENABLE_VEHICLE_BODHI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kalahari"))
	{
		if (!Global_262145.f_35347 /* Tunable: ENABLE_VEHICLE_KALAHARI */ && !Global_262145.f_35348 /* Tunable: ENABLE_VEHICLE_KALAHARI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rancherxl"))
	{
		if (!Global_262145.f_35349 /* Tunable: ENABLE_VEHICLE_RANCHERXL */ && !Global_262145.f_35350 /* Tunable: ENABLE_VEHICLE_RANCHERXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel2"))
	{
		if (!Global_262145.f_35351 /* Tunable: ENABLE_VEHICLE_REBEL2 */ && !Global_262145.f_35352 /* Tunable: ENABLE_VEHICLE_REBEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel"))
	{
		if (!Global_262145.f_35353 /* Tunable: ENABLE_VEHICLE_REBEL */ && !Global_262145.f_35354 /* Tunable: ENABLE_VEHICLE_REBEL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer"))
	{
		if (!Global_262145.f_35355 /* Tunable: ENABLE_VEHICLE_BLAZER */ && !Global_262145.f_35356 /* Tunable: ENABLE_VEHICLE_BLAZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer3"))
	{
		if (!Global_262145.f_35357 /* Tunable: ENABLE_VEHICLE_BLAZER3 */ && !Global_262145.f_35358 /* Tunable: ENABLE_VEHICLE_BLAZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sandking2"))
	{
		if (!Global_262145.f_35359 /* Tunable: ENABLE_VEHICLE_SANDKING2 */ && !Global_262145.f_35360 /* Tunable: ENABLE_VEHICLE_SANDKING2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("washington"))
	{
		if (!Global_262145.f_35361 /* Tunable: ENABLE_VEHICLE_WASHINGTON */ && !Global_262145.f_35362 /* Tunable: ENABLE_VEHICLE_WASHINGTON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter2"))
	{
		if (!Global_262145.f_35363 /* Tunable: ENABLE_VEHICLE_SCHAFTER2 */ && !Global_262145.f_35364 /* Tunable: ENABLE_VEHICLE_SCHAFTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("romero"))
	{
		if (!Global_262145.f_35365 /* Tunable: ENABLE_VEHICLE_ROMERO */ && !Global_262145.f_35366 /* Tunable: ENABLE_VEHICLE_ROMERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fugitive"))
	{
		if (!Global_262145.f_35367 /* Tunable: ENABLE_VEHICLE_FUGITIVE */ && !Global_262145.f_35368 /* Tunable: ENABLE_VEHICLE_FUGITIVE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surge"))
	{
		if (!Global_262145.f_35369 /* Tunable: ENABLE_VEHICLE_SURGE */ && !Global_262145.f_35370 /* Tunable: ENABLE_VEHICLE_SURGE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asea"))
	{
		if (!Global_262145.f_35371 /* Tunable: ENABLE_VEHICLE_ASEA */ && !Global_262145.f_35372 /* Tunable: ENABLE_VEHICLE_ASEA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("premier"))
	{
		if (!Global_262145.f_35373 /* Tunable: ENABLE_VEHICLE_PREMIER */ && !Global_262145.f_35374 /* Tunable: ENABLE_VEHICLE_PREMIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("regina"))
	{
		if (!Global_262145.f_35375 /* Tunable: ENABLE_VEHICLE_REGINA */ && !Global_262145.f_35376 /* Tunable: ENABLE_VEHICLE_REGINA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asterope"))
	{
		if (!Global_262145.f_35377 /* Tunable: ENABLE_VEHICLE_ASTEROPE */ && !Global_262145.f_35378 /* Tunable: ENABLE_VEHICLE_ASTEROPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("intruder"))
	{
		if (!Global_262145.f_35379 /* Tunable: ENABLE_VEHICLE_INTRUDER */ && !Global_262145.f_35380 /* Tunable: ENABLE_VEHICLE_INTRUDER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater"))
	{
		if (!Global_262145.f_35381 /* Tunable: ENABLE_VEHICLE_TAILGATER */ && !Global_262145.f_35382 /* Tunable: ENABLE_VEHICLE_TAILGATER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stanier"))
	{
		if (!Global_262145.f_35383 /* Tunable: ENABLE_VEHICLE_STANIER */ && !Global_262145.f_35384 /* Tunable: ENABLE_VEHICLE_STANIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ingot"))
	{
		if (!Global_262145.f_35385 /* Tunable: ENABLE_VEHICLE_INGOT */ && !Global_262145.f_35386 /* Tunable: ENABLE_VEHICLE_INGOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener"))
	{
		if (!Global_262145.f_35387 /* Tunable: ENABLE_VEHICLE_WARRENER */ && !Global_262145.f_35388 /* Tunable: ENABLE_VEHICLE_WARRENER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stratum"))
	{
		if (!Global_262145.f_35389 /* Tunable: ENABLE_VEHICLE_STRATUM */ && !Global_262145.f_35390 /* Tunable: ENABLE_VEHICLE_STRATUM_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schwarzer"))
	{
		if (!Global_262145.f_35391 /* Tunable: ENABLE_VEHICLE_SCHWARZER */ && !Global_262145.f_35392 /* Tunable: ENABLE_VEHICLE_SCHWARZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surano"))
	{
		if (!Global_262145.f_35393 /* Tunable: ENABLE_VEHICLE_SURANO */ && !Global_262145.f_35394 /* Tunable: ENABLE_VEHICLE_SURANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo"))
	{
		if (!Global_262145.f_35395 /* Tunable: ENABLE_VEHICLE_BUFFALO */ && !Global_262145.f_35396 /* Tunable: ENABLE_VEHICLE_BUFFALO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo2"))
	{
		if (!Global_262145.f_35397 /* Tunable: ENABLE_VEHICLE_BUFFALO2 */ && !Global_262145.f_35398 /* Tunable: ENABLE_VEHICLE_BUFFALO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro2"))
	{
		if (!Global_262145.f_35399 /* Tunable: ENABLE_VEHICLE_MASSACRO2 */ && !Global_262145.f_35400 /* Tunable: ENABLE_VEHICLE_MASSACRO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester2"))
	{
		if (!Global_262145.f_35401 /* Tunable: ENABLE_VEHICLE_JESTER2 */ && !Global_262145.f_35402 /* Tunable: ENABLE_VEHICLE_JESTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo"))
	{
		if (!Global_262145.f_35403 /* Tunable: ENABLE_VEHICLE_FUTO */ && !Global_262145.f_35404 /* Tunable: ENABLE_VEHICLE_FUTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra"))
	{
		if (!Global_262145.f_35405 /* Tunable: ENABLE_VEHICLE_PENUMBRA */ && !Global_262145.f_35406 /* Tunable: ENABLE_VEHICLE_PENUMBRA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fusilade"))
	{
		if (!Global_262145.f_35407 /* Tunable: ENABLE_VEHICLE_FUSILADE */ && !Global_262145.f_35408 /* Tunable: ENABLE_VEHICLE_FUSILADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype2"))
	{
		if (!Global_262145.f_35409 /* Tunable: ENABLE_VEHICLE_BTYPE2 */ && !Global_262145.f_35410 /* Tunable: ENABLE_VEHICLE_BTYPE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pigalle"))
	{
		if (!Global_262145.f_35411 /* Tunable: ENABLE_VEHICLE_PIGALLE */ && !Global_262145.f_35412 /* Tunable: ENABLE_VEHICLE_PIGALLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade"))
	{
		if (!Global_262145.f_35413 /* Tunable: ENABLE_VEHICLE_CAVALCADE */ && !Global_262145.f_35414 /* Tunable: ENABLE_VEHICLE_CAVALCADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade2"))
	{
		if (!Global_262145.f_35415 /* Tunable: ENABLE_VEHICLE_CAVALCADE2 */ && !Global_262145.f_35416 /* Tunable: ENABLE_VEHICLE_CAVALCADE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bjxl"))
	{
		if (!Global_262145.f_35417 /* Tunable: ENABLE_VEHICLE_BJXL */ && !Global_262145.f_35418 /* Tunable: ENABLE_VEHICLE_BJXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("serrano"))
	{
		if (!Global_262145.f_35419 /* Tunable: ENABLE_VEHICLE_SERRANO */ && !Global_262145.f_35420 /* Tunable: ENABLE_VEHICLE_SERRANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gresley"))
	{
		if (!Global_262145.f_35421 /* Tunable: ENABLE_VEHICLE_GRESLEY */ && !Global_262145.f_35422 /* Tunable: ENABLE_VEHICLE_GRESLEY_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole"))
	{
		if (!Global_262145.f_35423 /* Tunable: ENABLE_VEHICLE_SEMINOLE */ && !Global_262145.f_35424 /* Tunable: ENABLE_VEHICLE_SEMINOLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger"))
	{
		if (!Global_262145.f_35425 /* Tunable: ENABLE_VEHICLE_GRANGER */ && !Global_262145.f_35426 /* Tunable: ENABLE_VEHICLE_GRANGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker"))
	{
		if (!Global_262145.f_35427 /* Tunable: ENABLE_VEHICLE_LANDSTALKER */ && !Global_262145.f_35428 /* Tunable: ENABLE_VEHICLE_LANDSTALKER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("habanero"))
	{
		if (!Global_262145.f_35429 /* Tunable: ENABLE_VEHICLE_HABANERO */ && !Global_262145.f_35430 /* Tunable: ENABLE_VEHICLE_HABANERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fq2"))
	{
		if (!Global_262145.f_35431 /* Tunable: ENABLE_VEHICLE_FQ2 */ && !Global_262145.f_35432 /* Tunable: ENABLE_VEHICLE_FQ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller"))
	{
		if (!Global_262145.f_35433 /* Tunable: ENABLE_VEHICLE_BALLER */ && !Global_262145.f_35434 /* Tunable: ENABLE_VEHICLE_BALLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot"))
	{
		if (!Global_262145.f_35435 /* Tunable: ENABLE_VEHICLE_PATRIOT */ && !Global_262145.f_35436 /* Tunable: ENABLE_VEHICLE_PATRIOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rocoto"))
	{
		if (!Global_262145.f_35437 /* Tunable: ENABLE_VEHICLE_ROCOTO */ && !Global_262145.f_35438 /* Tunable: ENABLE_VEHICLE_ROCOTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("radi"))
	{
		if (!Global_262145.f_35439 /* Tunable: ENABLE_VEHICLE_RADI */ && !Global_262145.f_35440 /* Tunable: ENABLE_VEHICLE_RADI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mesa3"))
	{
		if (!Global_262145.f_35441 /* Tunable: ENABLE_VEHICLE_MESA3 */ && !Global_262145.f_35442 /* Tunable: ENABLE_VEHICLE_MESA3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monster"))
	{
		if (!Global_262145.f_35443 /* Tunable: ENABLE_VEHICLE_MONSTER */ && !Global_262145.f_35444 /* Tunable: ENABLE_VEHICLE_MONSTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet6"))
	{
		if (!Global_262145.f_35473 /* Tunable: ENABLE_VEHICLE_GAUNTLET6 */ && iVar1 < Global_262145.f_35460 /* Tunable: LAUNCHPOSIX_GAUNTLET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada2"))
	{
		if (!Global_262145.f_35472 /* Tunable: ENABLE_VEHICLE_CONADA2 */ && iVar1 < Global_262145.f_35459 /* Tunable: LAUNCHPOSIX_CONADA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brigham"))
	{
		if (!Global_262145.f_35474 /* Tunable: ENABLE_VEHICLE_BRIGHAM */ && iVar1 < Global_262145.f_35461 /* Tunable: LAUNCHPOSIX_BRIGHAM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique2"))
	{
		if (!Global_262145.f_35465 /* Tunable: ENABLE_VEHICLE_CLIQUE2 */ && iVar1 < Global_262145.f_35452 /* Tunable: LAUNCHPOSIX_CLIQUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("l35"))
	{
		if (!Global_262145.f_35462 /* Tunable: ENABLE_VEHICLE_L35 */ && iVar1 < Global_262145.f_35449 /* Tunable: LAUNCHPOSIX_L35 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == func_301(1))
	{
		iVar0 = 1;
	}
	else if (iParam0 == joaat("ratel"))
	{
		if (!Global_262145.f_35463 /* Tunable: ENABLE_VEHICLE_RATEL */ && iVar1 < Global_262145.f_35450 /* Tunable: LAUNCHPOSIX_RATEL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingertt"))
	{
		if (!Global_262145.f_35466 /* Tunable: ENABLE_VEHICLE_STINGERTT */ && iVar1 < Global_262145.f_35453 /* Tunable: LAUNCHPOSIX_STINGERTT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo5"))
	{
		if (!Global_262145.f_35469 /* Tunable: ENABLE_VEHICLE_BUFFALO5 */ && iVar1 < Global_262145.f_35456 /* Tunable: LAUNCHPOSIX_BUFFALO5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streamer216"))
	{
		if (!Global_262145.f_35467 /* Tunable: ENABLE_VEHICLE_STREAMER216 */ && iVar1 < Global_262145.f_35454 /* Tunable: LAUNCHPOSIX_STREAMER216 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monstrociti"))
	{
		if (!Global_262145.f_35464 /* Tunable: ENABLE_VEHICLE_MONSTROCITI */ && iVar1 < Global_262145.f_35451 /* Tunable: LAUNCHPOSIX_MONSTROCITI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coureur"))
	{
		if (!Global_262145.f_35471 /* Tunable: ENABLE_VEHICLE_COUREUR */ && iVar1 < Global_262145.f_35458 /* Tunable: LAUNCHPOSIX_COUREUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiju"))
	{
		if (!Global_262145.f_35468 /* Tunable: ENABLE_VEHICLE_RAIJU */ && iVar1 < Global_262145.f_35455 /* Tunable: LAUNCHPOSIX_RAIJU */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor"))
	{
		if (!Global_262145.f_35470 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35457 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor2"))
	{
		if (!Global_262145.f_35470 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35457 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_301(bool bParam0)//Position - 0x264C6
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

bool func_302()//Position - 0x264E0
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_303()//Position - 0x264F6
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_304()//Position - 0x2650C
{
	return 0;
}

int func_305()//Position - 0x26515
{
	return 1;
}

int func_306()//Position - 0x2651E
{
	return 1;
}

int func_307()//Position - 0x26527
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_308()//Position - 0x26540
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

int func_309(int iParam0)//Position - 0x265F8
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_297(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_310(int iParam0)//Position - 0x2663F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98174[iVar0]))
		{
			if (Global_98174[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_311(int iParam0)//Position - 0x2667A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98144[iVar0], false))
			{
				if (Global_98144[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_312(int iParam0)//Position - 0x266F6
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[24]))
	{
		if (iParam0 == Global_77479.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_77479.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_313(int iParam0)//Position - 0x267DE
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]))
		{
			if (Global_98144[iVar0] == iParam0)
			{
				return Global_98154[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_314(int iParam0, bool bParam1)//Position - 0x26841
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_316(iParam0, 0))
		{
			func_315(iParam0, 1, 0);
			func_315(iParam0, 2, 0);
			func_315(iParam0, 3, 0);
			func_315(iParam0, 4, 0);
			func_315(iParam0, 0, 1);
			Global_77479[iParam0] = 1;
		}
	}
	else
	{
		func_315(iParam0, 0, 0);
	}
}

void func_315(int iParam0, int iParam1, bool bParam2)//Position - 0x2689E
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_113810.f_32752[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113810.f_32752[iParam0]), iParam1);
	}
}

int func_316(int iParam0, int iParam1)//Position - 0x268D9
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_113810.f_32752[iParam0], iParam1);
}

void func_317(int iParam0)//Position - 0x268F9
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_321(&(Global_77479.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77479.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77479.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_77479.f_139[iParam0]));
			}
		}
		Global_77479[iParam0] = 1;
		if (BitTest(Global_77479.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_316(iParam0, 0)) && Global_78388.f_66 == 0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] != 0) && Global_113810.f_32752.f_1958[Global_77479.f_555[0 /*21*/].f_14] > 3) && (!func_319(0, Global_77479.f_555[0 /*21*/].f_12) || !func_319(1, Global_77479.f_555[0 /*21*/].f_12)))
			{
				func_318(&(Global_113810.f_32752.f_69[Global_77479.f_555[0 /*21*/].f_14 /*78*/]), &Global_78388);
				Global_78466 = Global_113810.f_32752.f_5591;
			}
			func_314(iParam0, 0);
		}
	}
}

void func_318(var uParam0, var uParam1)//Position - 0x26A68
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_319(int iParam0, int iParam1)//Position - 0x26B34
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_320(&(Global_113810.f_32752.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_297(Global_113810.f_32752.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0, -1);
}

int func_320(var uParam0)//Position - 0x26BA7
{
	return *uParam0;
}

int func_321(var uParam0, int iParam1)//Position - 0x26BB2
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_322(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_322(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_322(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_322(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_322(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_322(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_322(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_322(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_322(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_308())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_308())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (BitTest(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113810.f_32752.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_168(Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113810.f_32752.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_113810.f_32752.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_113810.f_32752.f_1934[uParam0->f_14];
		}
	}
	if (BitTest(uParam0->f_9, 19))
	{
		if (!func_168(Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113810.f_2366.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113810.f_2366.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (BitTest(uParam0->f_9, 20))
	{
		if (!func_168(Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_113810.f_2366.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113810.f_2366.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_322(int iParam0, int iParam1)//Position - 0x282A3
{
	struct<82> Var0;
	
	if (func_50(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_323(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_323(int iParam0, var uParam1, int iParam2)//Position - 0x282E5
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_113810.f_9088.f_99.f_58[128] && !Global_113810.f_9088.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_113810.f_9088.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_113810.f_9088.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_324(int iParam0)//Position - 0x28541
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_77479.f_484[iVar0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[iVar0], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_77479.f_484[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_325(int iParam0, struct<3> Param1, bool bParam4)//Position - 0x28604
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_326(iParam0, Global_77479.f_139[38], 0))
			{
				func_317(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_326(iParam0, Global_77479.f_139[43], 1))
			{
				func_317(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_326(iParam0, uVar1[iVar6], 1) && func_237(ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), 2136.133f, 4780.5635f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_168(Param1, 0f, 0f, 0f, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(uVar1[iVar6], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[14]))
				{
					func_317(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77479.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77479.f_484[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77479.f_484[20]))
				{
					func_317(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_326(int iParam0, int iParam1, bool bParam2)//Position - 0x2880C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_327(int iParam0, int iParam1)//Position - 0x2886D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]))
		{
			Global_98144[iVar0] = iParam0;
			Global_98154[iVar0] = iParam1;
			Global_98164[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_98164[iVar0]))
			{
				Global_98192[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_98192[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_328(int iParam0, int iParam1)//Position - 0x288EF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]))
		{
			if (iParam0 == 145 || Global_98154[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_98144[iVar0]) == func_322(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98144[iVar0], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98144[iVar0], false, true);
						VEHICLE::DELETE_VEHICLE(&(Global_98144[iVar0]));
						Global_98154[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_329(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x2898D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_348(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, func_291(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_291(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, func_291(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_291(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, func_291(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_291(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, func_291(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_291(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, func_291(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_291(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("surfer3"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, func_291(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_291(iVar5));
				}
				iVar5++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, func_291(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_291(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_291(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar6 = 1;
			while (iVar6 <= 2)
			{
				if (BitTest(uParam1->f_77, func_291(iVar6)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_291(iVar6));
				}
				iVar6++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_346(uParam1->f_5) || func_346(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || func_345(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_344())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_293(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_343(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_343(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_335(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar7 = 0;
			while (iVar7 <= 11)
			{
				if (BitTest(uParam1->f_77, func_291(iVar7 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar7 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar7 + 1, true);
				}
				iVar7++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if ((((func_330() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, func_301(1)))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_330()//Position - 0x29085
{
	if ((((Global_4718592.f_108230 == 6 || Global_4718592.f_108230 == 7) || Global_4718592.f_108230 == 18) || Global_4718592.f_108230 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (func_333(7))
	{
		if (func_332(Global_2672524.f_4.f_16) || func_331(Global_2672524.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_331(var uParam0)//Position - 0x29114
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1890739[iVar0 /*138*/].f_77.f_60 != 0;
	}
	return 0;
}

int func_332(int iParam0)//Position - 0x29138
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_41(iParam0, 9);
	}
	return 0;
}

bool func_333(int iParam0)//Position - 0x29156
{
	return func_334(&(Global_2672524.f_184), iParam0);
}

var func_334(var uParam0, var uParam1)//Position - 0x2916A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return BitTest((*uParam0)[iVar1], iVar2);
}

int func_335(int iParam0, var uParam1, var uParam2)//Position - 0x2918D
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, 255);
				}
				else
				{
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar1 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar1 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else if (func_341(*iParam0, iVar1, ((*uParam1)[iVar0] - 1)))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_340(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_338(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_338(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_337(iParam0);
	if (func_336(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_336(int iParam0)//Position - 0x29367
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE" /* GXT: Roll Cage and Chassis Upgrade */) || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG" /* GXT: Stunt Cage */))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_337(var uParam0)//Position - 0x29443
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_338(int iParam0, int iParam1)//Position - 0x2949A
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = func_339(iParam0, 38) + 1;
		iVar1 = func_339(iParam0, 24) + 1;
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_339(int iParam0, int iParam1)//Position - 0x29583
{
	int iVar0;
	
	if ((STREAMING::IS_MODEL_VALID(Global_152698) && VEHICLE::IS_VEHICLE_MODEL(iParam0, Global_152698)) && Global_152699 == iParam1)
	{
		return Global_152700;
	}
	iVar0 = (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) - 1);
	while (iVar0 >= 0 && func_341(iParam0, iParam1, iVar0))
	{
		iVar0 = (iVar0 - 1);
	}
	return iVar0;
}

int func_340(int iParam0, int iParam1)//Position - 0x295E5
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("tenf2"):
		case joaat("weevil2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14909 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14910 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14908 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14911 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14913 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14912 /* Tunable: ENABLE_LOWRIDER2_FACTION */)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_19321 /* Tunable: ENABLE_IE_COMET3 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_19323 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_19327 /* Tunable: ENABLE_IE_FCR2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_19324 /* Tunable: ENABLE_IE_ELEGY */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_19331 /* Tunable: ENABLE_IE_NERO2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_19329 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_19334 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_21280 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_21281 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

int func_341(int iParam0, int iParam1, int iParam2)//Position - 0x299C4
{
	if (!func_342() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

int func_342()//Position - 0x299E8
{
	return 0;
}

void func_343(int iParam0, int iParam1)//Position - 0x299F1
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_344()//Position - 0x29A69
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_345(int iParam0)//Position - 0x29A7A
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return BitTest(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_346(int iParam0)//Position - 0x29AC2
{
	if (!func_342() && func_347(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_347(int iParam0)//Position - 0x29AE2
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return 1;
			break;
	}
	return 0;
}

int func_348(int iParam0)//Position - 0x29B35
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_354(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (func_350(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_349(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_349(int iParam0)//Position - 0x29BBC
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_350(int iParam0)//Position - 0x29BEB
{
	if (func_353(iParam0) == 233)
	{
		return func_351(iParam0);
	}
	return -1;
}

int func_351(int iParam0)//Position - 0x29C08
{
	if (func_352(iParam0, 0))
	{
		return Global_1895156[iParam0 /*609*/].f_10.f_182;
	}
	return -1;
}

int func_352(int iParam0, int iParam1)//Position - 0x29C2B
{
	if (func_197(iParam0))
	{
		if (Global_1895156[iParam0 /*609*/].f_10.f_33 != -1 || (iParam1 && Global_1895156[iParam0 /*609*/].f_10.f_32 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_353(int iParam0)//Position - 0x29C6F
{
	if (func_197(iParam0))
	{
		if (func_352(iParam0, 0))
		{
			return Global_1895156[iParam0 /*609*/].f_10.f_33;
		}
	}
	return -1;
}

int func_354(int iParam0, int iParam1)//Position - 0x29C9B
{
	int iVar0;
	
	if (func_355(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_355(int iParam0, bool bParam1, bool bParam2)//Position - 0x29CE8
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

void func_356(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x29D48
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_321(&(Global_77479.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_77479.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_317(iVar0);
			}
		}
		iVar0++;
	}
}

int func_357(var uParam0)//Position - 0x29D98
{
	if (func_358(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_358(var uParam0)//Position - 0x29DCD
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_297(uParam0->f_12.f_66, 0, -1))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_237(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_359()//Position - 0x29E2D
{
	return func_357(&(Global_107357.f_2890));
}

void func_360()//Position - 0x29E40
{
	func_361(&(Global_107357.f_2890));
}

void func_361(var uParam0)//Position - 0x29E53
{
	if (func_358(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);
	}
}

bool func_362()//Position - 0x29E71
{
	return func_358(&(Global_107357.f_2890));
}

int func_363(struct<3> Param0, float fParam3)//Position - 0x29E84
{
	return func_288(&(Global_104373.f_2890), Param0, fParam3, 0);
}

bool func_364()//Position - 0x29E9E
{
	return func_357(&(Global_104373.f_2890));
}

void func_365()//Position - 0x29EB1
{
	func_361(&(Global_104373.f_2890));
}

int func_366(int iParam0, struct<3> Param1, int iParam4)//Position - 0x29EC4
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_367() };
	}
	MISC::GET_MODEL_DIMENSIONS(iParam0, &Var0, &Var3);
	if ((Var3.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var3.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var3.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_367()//Position - 0x29F2E
{
	return 2.55f, 5.665f, 2.55f;
}

int func_368()//Position - 0x29F45
{
	return Global_104373.f_2890.f_12.f_66;
}

bool func_369()//Position - 0x29F58
{
	return func_358(&(Global_104373.f_2890));
}

void func_370(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x29F6B
{
	if (func_380())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_100833.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_100829 = { Param0 };
		Global_100832 = fParam3;
		Global_100828 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_100833.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100833.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_100833.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_100833.f_20), 24);
		}
		func_284(1);
	}
}

int func_371(int* iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)//Position - 0x2A000
{
	int iVar0;
	
	if (!func_50(iParam1))
	{
		iVar0 = func_373(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("IG_LamarDavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_372(*iParam0, iParam1);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_372(var uParam0, int iParam1)//Position - 0x2A08E
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_96647[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_373(int iParam0)//Position - 0x2A0D4
{
	if (!func_50(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_374(int iParam0)//Position - 0x2A0FA
{
	int iVar0;
	int iVar1;
	
	func_184();
	func_185();
	func_186();
	func_183();
	STREAMING::END_SRL();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_3489 = 0;
	iLocal_2647 = 0;
	iLocal_2643 = 0;
	iLocal_2510 = 0;
	iLocal_1612 = 0;
	iLocal_2644 = 0;
	iLocal_2877 = 0;
	iLocal_2878 = 0;
	while (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(true);
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		func_28(0, 0);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2648))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2648);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2649)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_2649[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_2649[iVar0]);
		}
		iVar0++;
	}
	iLocal_3504 = 0;
	iLocal_3505 = 0;
	iLocal_3506 = 0;
	sLocal_3507 = "";
	sLocal_3508 = "";
	func_190();
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_63 = 0;
	PLAYER::SET_SPECIAL_ABILITY_MULTIPLIER(1f);
	func_378();
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	func_192(0, 1, 1, 0, 0, 0, 0);
	func_28(32, 0);
	MISC::SET_TIME_SCALE(1f);
	HUD::CLEAR_PRINTS();
	func_219(&Local_2681, 1, 0);
	func_72();
	func_70();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(44.8113f, 4961.045f, 2469.9854f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.9854f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), true);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), true);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
		Global_41112 = 1;
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_CHN2_METH_LAB_FARM_FIRE", false, true);
	if (iParam0 != 3)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Chinese2_Lunch", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("CHINESE2_HILLBILLIES", false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (iLocal_2882 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2882))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2882);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_376(PLAYER::PLAYER_PED_ID(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_753.f_0)
	{
		if (iVar0 == 14)
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/]))
		{
			if (!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_753[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!PED::IS_PED_INJURED(Local_753[iVar0 /*33*/]))
				{
					PED::SET_PED_KEEP_TASK(Local_753[iVar0 /*33*/], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_753[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				PED::DELETE_PED(&(Local_753[iVar0 /*33*/]));
			}
		}
		Local_753[iVar0 /*33*/].f_3 = 0;
		Local_753[iVar0 /*33*/].f_4 = 0;
		Local_753[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_753[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_753[iVar0 /*33*/].f_2 = 25;
		Local_753[iVar0 /*33*/].f_5 = 0;
		Local_753[iVar0 /*33*/].f_12 = 0f;
		Local_753[iVar0 /*33*/].f_13 = 0f;
		Local_753[iVar0 /*33*/].f_14 = 0;
		Local_753[iVar0 /*33*/].f_15 = 0;
		Local_753[iVar0 /*33*/].f_17 = 0;
		Local_753[iVar0 /*33*/].f_16 = 0;
		Local_753[iVar0 /*33*/].f_21 = 0;
		Local_753[iVar0 /*33*/].f_22 = 0;
		Local_1617[iVar0 /*24*/].f_3 = 1;
		if (ENTITY::DOES_ENTITY_EXIST(Local_753[iVar0 /*33*/].f_20))
		{
			OBJECT::DELETE_OBJECT(&(Local_753[iVar0 /*33*/].f_20));
		}
		PED::REMOVE_RELATIONSHIP_GROUP(Local_753[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		func_375();
	}
	else
	{
		func_210(&Local_1617, &uLocal_2706, cLocal_2336, 12f, 2482.1965f, 4975.3667f, 44.7288f, 121f, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2876))
	{
		OBJECT::DELETE_OBJECT(&iLocal_2876);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		MISC::CLEAR_AREA(2438.4326f, 4970.4155f, 53.1778f, 450f, true, false, false, false);
		FIRE::STOP_FIRE_IN_RANGE(2442.6897f, 4970.3477f, 46.33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_2513.f_0)
	{
		if ((Local_2513[iVar0 /*6*/].f_1 == 1 && Local_2513[iVar0 /*6*/].f_3 == 0) || Local_2513[iVar0 /*6*/].f_3 == 0)
		{
			Local_2513[iVar0 /*6*/].f_2 = -1;
			Local_2513[iVar0 /*6*/].f_4 = 0;
			Local_2513[iVar0 /*6*/].f_5 = 0;
			Local_2513[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (HUD::DOES_BLIP_EXIST(iLocal_2675))
	{
		HUD::REMOVE_BLIP(&iLocal_2675);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_2655)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2655[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_2655[iVar1]));
		}
		iVar1++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2504))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2504, false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_2504, true))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2504);
					}
					else
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2504);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2505))
	{
		if (iParam0 != 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2505);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2505);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2505);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2506))
	{
		if (func_74(iLocal_2506))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2506);
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2673))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2673);
	}
	if (iParam0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2678))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2678, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_2678);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2679))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_2679, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_2679);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2640))
	{
		PED::DELETE_PED(&iLocal_2640);
	}
	GRAPHICS::REMOVE_DECALS_IN_RANGE(2439.6868f, 4971.5405f, 45.9442f, 150f);
	if (iParam0 != 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_753[12 /*33*/]))
		{
			PED::DELETE_PED(&(Local_753[12 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_753[13 /*33*/]))
		{
			PED::DELETE_PED(&(Local_753[13 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_753[14 /*33*/]))
		{
			PED::DELETE_PED(&(Local_753[14 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_753[11 /*33*/]))
		{
			PED::DELETE_PED(&(Local_753[11 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_753[10 /*33*/]))
		{
			PED::DELETE_PED(&(Local_753[10 /*33*/]));
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man1A"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaoCheng"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaosTranslator"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
	STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
	STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
	STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
		}
	}
	iLocal_2639 = 0;
	iLocal_749 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_ROCK_RADIO"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_STEALTH"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_STEALTH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_POUR_GAS"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_POUR_GAS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOT_GAS"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOT_GAS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_GAS_TRAIL_FIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_GAS_TRAIL_FIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_RAYFIRE");
	}
	AUDIO::STOP_STREAM();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, func_173());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		func_172(0);
	}
	if (iParam0 != 0)
	{
		iLocal_2670 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_2671)
		{
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_2670))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2670, 2);
			}
			iLocal_2671 = 0;
		}
	}
}

void func_375()//Position - 0x2A93F
{
	EVENT::UNBLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31 /*EVENT_INJURED_CRY_FOR_HELP*/);
}

void func_376(int iParam0, int iParam1)//Position - 0x2A952
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false))
		{
			if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (!func_377(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_100870 > 0)
	{
		Global_107357.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_104373.f_21[iParam1] = iVar0;
	}
}

int func_377(int iParam0, int iParam1)//Position - 0x2A9B8
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_100870 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_107357.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_107357.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_107357.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_107357.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_104373.f_812[iParam0 /*477*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_104373.f_812[iParam0 /*477*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			if (Global_104373.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_104373.f_812[iParam0 /*477*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_378()//Position - 0x2AAEB
{
	int iVar0;
	
	Global_63514 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_63515[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

int func_379()//Position - 0x2AB15
{
	if (!Global_100833 == 10 && !Global_100833 == 9)
	{
		return 0;
	}
	return Global_100833.f_2;
}

int func_380()//Position - 0x2AB3F
{
	if (Global_100833 == 10 || Global_100833 == 9)
	{
		return 1;
	}
	return 0;
}

void func_381(var uParam0, char* sParam1, int iParam2, char* sParam3)//Position - 0x2AB63
{
	*uParam0 = sParam3;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam2;
}

void func_382()//Position - 0x2AB7C
{
	PED::ADD_RELATIONSHIP_GROUP("MYFRIEND", &iLocal_1613);
	PED::ADD_RELATIONSHIP_GROUP("FOE", &iLocal_1614);
	PED::ADD_RELATIONSHIP_GROUP("IGNORE", &iLocal_1615);
	PED::ADD_RELATIONSHIP_GROUP("BARpeds", &iLocal_2634);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_2634, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_1614);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1614, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1613, iLocal_1615);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1614, iLocal_1615);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1615, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_1615, iLocal_1614);
}

void func_383()//Position - 0x2AC12
{
	switch (iLocal_3686)
	{
		case 0:
			if (iLocal_2509 >= 4)
			{
				func_384(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_3686++;
			}
			break;
		
		case 1:
			if (iLocal_2509 >= 4 && iLocal_2509 < 7)
			{
				if (func_93(12) || iLocal_2509 == 6)
				{
					func_384(2, "Inside House", 0, 0, 0, 1);
					iLocal_3686++;
				}
			}
			else if (iLocal_2509 == 7)
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
				{
					func_384(2, "Inside House", 0, 0, 0, 1);
					iLocal_3686++;
				}
			}
			else if (iLocal_2509 > 7)
			{
				func_384(2, "Inside House", 0, 0, 0, 1);
				iLocal_3686++;
			}
			break;
		
		case 2:
			if (iLocal_2509 >= 7)
			{
				func_384(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_3686++;
			}
			break;
		
		case 3:
			if (iLocal_2509 == 9)
			{
				func_384(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_3686++;
			}
			break;
	}
}

void func_384(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2AD25
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100870)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100870)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_462(1);
		if (iParam0 <= Global_100870)
		{
		}
		iVar1 = func_460(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113810.f_9088.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_458(iVar1);
			cVar3 = { Global_91601[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113810.f_9088.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100870, iParam0);
		}
		else
		{
			iVar5 = func_453(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_113810.f_18577[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_452(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_100870, iParam0);
			}
			else
			{
				iVar10 = func_451(&(Global_100833.f_3));
				if (iVar10 > -1)
				{
					Global_113810.f_24989.f_4[iVar10] = 0;
				}
			}
		}
		Global_94991 = iParam2;
		Global_100870 = iParam0;
		func_385(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100870)
	{
	}
}

void func_385(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2AE9B
{
	func_386(&Global_107357, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_386(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2AEB7
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_48();
	uParam0->f_1 = func_440();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_412(&(uParam0->f_2884), 0);
		func_411(PLAYER::PLAYER_PED_ID());
		func_404(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113810.f_2366.f_539.f_294[iVar1];
		if (iVar1 == func_403())
		{
			func_395(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100558[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100558[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100558[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100558[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100558[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100558[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100558[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100558[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100558[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100558[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113810.f_2366.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113810.f_2366.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113810.f_20567.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60659[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113810.f_2366.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113810.f_2366.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113810.f_2366.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113810.f_2366.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113810.f_2366.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113810.f_2366[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113810.f_2366[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_388(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_387(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_387(var uParam0)//Position - 0x2BD40
{
	*uParam0 = Global_96662;
	uParam0->f_1 = Global_96663;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_388(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2BD62
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_51(iParam2);
	}
	if (func_394(iParam2, &iVar0, iParam3, iParam5))
	{
		func_389(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				func_389(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_389(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2BDEA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
	{
		func_391(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_390(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_390(int iParam0)//Position - 0x2BE2A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_100833.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_391(var uParam0, int iParam1, int iParam2)//Position - 0x2BE58
{
	func_290(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_393(iParam1, 145, 0);
	uParam0->f_11 = func_313(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_392(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_78384 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_392(int iParam0)//Position - 0x2BF34
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77479.f_484[iVar0]))
		{
			if (iParam0 == Global_77479.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_393(int iParam0, int iParam1, int iParam2)//Position - 0x2BF76
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98144[iVar0]))
		{
			if (Global_98144[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_98154[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_322(iParam1, iParam2))
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

int func_394(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2C004
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_78(*uParam1, func_48(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_395(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2C133
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_51(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_402(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_401(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_50(iVar0))
		{
			uParam1->f_59 = Global_113810.f_2366.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113810.f_2366.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113810.f_2366.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113810.f_2366.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113810.f_2366.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113810.f_2366.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_399(161, iParam3))
			{
				uParam1->f_59 = func_396(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_396(753, iParam3);
			}
			uParam1->f_60 = func_396(754, iParam3);
			uParam1->f_61 = func_396(755, iParam3);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_399(161, iParam3))
			{
				uParam1->f_59 = func_396(2053, iParam3);
			}
			else
			{
				uParam1->f_59 = func_396(753, iParam3);
			}
		}
	}
}

int func_396(int iParam0, int iParam1)//Position - 0x2C2CD
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 14385)
	{
		iVar0 = func_397(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_397(int iParam0, var uParam1)//Position - 0x2C2FC
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_398(uParam1));
}

int func_398(var uParam0)//Position - 0x2C311
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_196();
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

int func_399(int iParam0, int iParam1)//Position - 0x2C345
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_400(iParam0, iParam1);
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_400(int iParam0, var uParam1)//Position - 0x2C369
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(2, iParam0, func_398(uParam1));
}

void func_401(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2C37E
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_402(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x2C8C7
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_403()//Position - 0x2CB08
{
	func_49();
	return Global_113810.f_2366.f_539.f_4321;
}

void func_404(int iParam0, bool bParam1)//Position - 0x2CB21
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_405(iParam0, &(Global_113810.f_2366.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_113810.f_2366.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_113810.f_2366.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
		}
	}
}

void func_405(int iParam0, var uParam1)//Position - 0x2CC14
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_410(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_410(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("WEAPON_UNARMED"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("GADGET_PARACHUTE"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
					Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_408(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_408(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = FILES::GET_NUM_DLC_WEAPONS_SP();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((FILES::GET_DLC_WEAPON_DATA_SP(iVar9, &Var11) && !func_407(Var11.f_1)) && iVar72 < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.f_0);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.f_0);
						Var4.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(iVar9))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(iVar9, iVar1, &Var50))
						{
							if (!func_406(Var50.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.f_0, Var50.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.f_0, false))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_406(int iParam0)//Position - 0x2CE9C
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_VARMOD_XM3_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x2CF3D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return 0;
				break;
			
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return 0;
				break;
			
			case joaat("WEAPON_BULLPUPRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return 0;
				break;
			
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return 0;
				break;
			
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return 0;
				break;
			
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case joaat("WEAPON_PISTOLXM3"):
			case joaat("WEAPON_CANDYCANE"):
			case joaat("WEAPON_RAILGUNXM3"):
			case joaat("WEAPON_TECPISTOL"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_408(int iParam0, int iParam1)//Position - 0x2D11D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
		
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_XM3");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_FRN");
					break;
			}
			break;
		
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
				
				case 10:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_MICH");
					break;
			}
			break;
		
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_XM3");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_01");
					break;
				
				case 2:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_02");
					break;
				
				case 3:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_03");
					break;
				
				case 4:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_04");
					break;
				
				case 5:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_05");
					break;
				
				case 6:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_06");
					break;
				
				case 7:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_07");
					break;
				
				case 8:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_08");
					break;
				
				case 9:
					iVar0 = joaat("COMPONENT_BAT_VARMOD_XM3_09");
					break;
			}
			break;
		
		case joaat("WEAPON_RPG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_RPG_VARMOD_TVR");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_409(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43))
						{
							if (!func_406(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_409(int iParam0, var* uParam1)//Position - 0x2DDCE
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_410(int iParam0)//Position - 0x2DE09
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("SLOT_UNARMED");
			break;
		
		case 1:
			iVar0 = joaat("SLOT_KNIFE");
			break;
		
		case 2:
			iVar0 = joaat("SLOT_NIGHTSTICK");
			break;
		
		case 3:
			iVar0 = joaat("SLOT_HAMMER");
			break;
		
		case 4:
			iVar0 = joaat("SLOT_BAT");
			break;
		
		case 5:
			iVar0 = joaat("SLOT_CROWBAR");
			break;
		
		case 6:
			iVar0 = joaat("SLOT_GOLFCLUB");
			break;
		
		case 7:
			iVar0 = joaat("SLOT_STUNGUN");
			break;
		
		case 8:
			iVar0 = joaat("SLOT_PISTOL");
			break;
		
		case 9:
			iVar0 = joaat("SLOT_COMBATPISTOL");
			break;
		
		case 10:
			iVar0 = joaat("SLOT_APPISTOL");
			break;
		
		case 11:
			iVar0 = joaat("SLOT_MICROSMG");
			break;
		
		case 12:
			iVar0 = joaat("SLOT_SMG");
			break;
		
		case 13:
			iVar0 = joaat("SLOT_ASSAULTRIFLE");
			break;
		
		case 14:
			iVar0 = joaat("SLOT_CARBINERIFLE");
			break;
		
		case 15:
			iVar0 = joaat("SLOT_ADVANCEDRIFLE");
			break;
		
		case 16:
			iVar0 = joaat("SLOT_MG");
			break;
		
		case 17:
			iVar0 = joaat("SLOT_COMBATMG");
			break;
		
		case 18:
			iVar0 = joaat("SLOT_PUMPSHOTGUN");
			break;
		
		case 19:
			iVar0 = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
		
		case 20:
			iVar0 = joaat("SLOT_ASSAULTSHOTGUN");
			break;
		
		case 21:
			iVar0 = joaat("SLOT_SNIPERRIFLE");
			break;
		
		case 22:
			iVar0 = joaat("SLOT_HEAVYSNIPER");
			break;
		
		case 23:
			iVar0 = joaat("SLOT_GRENADELAUNCHER");
			break;
		
		case 24:
			iVar0 = joaat("SLOT_RPG");
			break;
		
		case 25:
			iVar0 = joaat("SLOT_MINIGUN");
			break;
		
		case 26:
			iVar0 = joaat("SLOT_GRENADE");
			break;
		
		case 27:
			iVar0 = joaat("SLOT_STICKYBOMB");
			break;
		
		case 28:
			iVar0 = joaat("SLOT_SMOKEGRENADE");
			break;
		
		case 29:
			iVar0 = joaat("SLOT_MOLOTOV");
			break;
		
		case 30:
			iVar0 = joaat("SLOT_FIREEXTINGUISHER");
			break;
		
		case 31:
			iVar0 = joaat("SLOT_PETROLCAN");
			break;
		
		case 33:
			iVar0 = joaat("SLOT_PARACHUTE");
			break;
		
		case 34:
			iVar0 = joaat("SLOT_DIGISCANNER");
			break;
		
		case 35:
			iVar0 = joaat("SLOT_OBJECT");
			break;
		
		case 36:
			iVar0 = joaat("SLOT_ASSAULTSMG");
			break;
		
		case 37:
			iVar0 = joaat("SLOT_BULLPUPSHOTGUN");
			break;
		
		case 38:
			iVar0 = joaat("SLOT_PISTOL50");
			break;
	}
	return iVar0;
}

void func_411(int iParam0)//Position - 0x2E07D
{
	int iVar0;
	
	iVar0 = func_51(iParam0);
	if (func_50(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113810.f_2366.f_539.f_294[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_412(var uParam0, int iParam1)//Position - 0x2E0B9
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78938, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78938, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78938, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78938, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_415(&iVar0))
		{
			if (func_414(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar5 = func_48();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_413(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_413(struct<3> Param0, char* sParam3, struct<3> Param4)//Position - 0x2E608
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_414(int iParam0, var uParam1, var uParam2)//Position - 0x2E64C
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_168(*uParam1, 0f, 0f, 0f, 0);
}

int func_415(var uParam0)//Position - 0x2EDCB
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_34())
		{
			*uParam0 = func_420(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (func_419(*uParam0) && !func_416(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_416(int iParam0)//Position - 0x2EE26
{
	return func_417(iParam0, 0, 1);
}

int func_417(int iParam0, int iParam1, bool bParam2)//Position - 0x2EE36
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
		if (func_25() == 0)
		{
			return BitTest(func_396(func_418(iParam0), -1), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113810.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_418(int iParam0)//Position - 0x2EE96
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

int func_419(int iParam0)//Position - 0x2F23E
{
	return func_417(iParam0, 5, 1);
}

int func_420(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2F24E
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (iParam3 == 6 || iParam3 == func_439(iVar0))
		{
			if (!bParam5 || func_438(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_421(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_421(int iParam0, bool bParam1)//Position - 0x2F2F0
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
			break;
		
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
			break;
		
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
			break;
		
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
			break;
		
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
			break;
		
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
			break;
		
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
			break;
		
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
			break;
		
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
			break;
		
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
			break;
		
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
			break;
		
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.1127f, 30.296f;
			}
			break;
		
		case 45:
			return func_435(Global_102986);
			break;
		
		case 46:
			if (Global_1853823 != func_42())
			{
				if (func_434(Global_1853823))
				{
					return func_427(2, 2);
				}
				else if (func_426(Global_1853823))
				{
					return func_427(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return func_424(-9.9f, -0.5f, 1f);
			break;
		
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1971274;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
			break;
		
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
			break;
		
		case 56:
			switch (Global_2657704[PLAYER::PLAYER_ID() /*463*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
					break;
				
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
					break;
				
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
					break;
				
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
		
		case 58:
			return func_422();
			break;
		
		case 59:
			return 560f, -405f, -69.6591f;
			break;
		
		case 60:
			return -1299.6909f, -3017.1646f, -48.2612f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_422()//Position - 0x2FA5B
{
	if (!func_77(Global_1956855))
	{
		return Global_1956855;
	}
	switch (func_423())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
		
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
		
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
		
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
		
		case 4:
			return 795.583f, 1210.78f, 338.962f;
		
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
		
		case 6:
			return -789.719f, 5400.921f, 33.915f;
		
		case 7:
			return -24.384f, 3048.167f, 40.703f;
		
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
		
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
		
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
		
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
		
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
		
		case 13:
			return -57.208f, -2658.793f, 5.737f;
		
		case 14:
			return 1905.017f, 565.222f, 175.558f;
		
		case 15:
			return 974.484f, -1718.798f, 30.296f;
		
		case 16:
			return 779.077f, -3266.297f, 5.719f;
		
		case 17:
			return -587.728f, -1637.208f, 19.611f;
		
		case 18:
			return 733.99f, -736.803f, 26.165f;
		
		case 19:
			return -1694.632f, -454.082f, 40.712f;
		
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
		
		case 21:
			return -496.618f, 40.231f, 52.316f;
		
		case 22:
			return 275.527f, 66.509f, 94.108f;
		
		case 23:
			return 260.928f, -763.35f, 30.559f;
		
		case 24:
			return -478.025f, -741.45f, 30.299f;
		
		case 25:
			return 894.94f, 3603.911f, 32.56f;
		
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
		
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
		
		case 28:
			return 1101.032f, -335.172f, 66.944f;
		
		case 29:
			return 149.683f, -1655.674f, 29.028f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_423()//Position - 0x2FD56
{
	return Global_2652364.f_2650;
}

Vector3 func_424(struct<3> Param0)//Position - 0x2FD65
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_425(), 0f, Param0);
}

Vector3 func_425()//Position - 0x2FD7A
{
	return -880f, -2770f, -50f;
}

int func_426(int iParam0)//Position - 0x2FD91
{
	if (iParam0 != func_42())
	{
		if ((BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 0) || BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 1)) || BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_427(int iParam0, int iParam1)//Position - 0x2FDE9
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1853823 != func_42())
	{
		if (iParam1 == 3)
		{
			if (func_428(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (BitTest(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 4))
			{
				if (func_428(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (BitTest(Global_1853988[Global_1853823 /*867*/].f_267.f_288, 5))
			{
				if (func_428(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_428(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x2FE93
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_433(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_433(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_431(iParam0) };
	}
	else
	{
		Var12 = { func_430(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_429(Var18, -Var0.f_3.f_2) };
	Var18 = { func_429(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_429(struct<3> Param0, float fParam3)//Position - 0x2FF28
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_430(int iParam0)//Position - 0x2FF6C
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_431(int iParam0)//Position - 0x300F2
{
	return func_432(iParam0);
}

struct<6> func_432(int iParam0)//Position - 0x30100
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
		
		case 9:
			Var0 = { 1105.6648f, -3012.3345f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.9282f, -3012.6934f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.9421f, -3011.315f, -37.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.9943f, -3012.8777f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.1519f, -3013.0325f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.9167f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.9218f, -3010.8872f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.6818f, -3009.227f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.4534f, -3008.5105f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.3401f, -3008.6982f, -39.999454f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.3442f, -3009.618f, -37.981716f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.4595f, -3009.7935f, -39.949997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.7828f, -3010.433f, -38.199997f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.0251f, -3007.3157f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.1602f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.1749f, -3005.818f, -37.919476f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.5996f, -3000.8472f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.6013f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.4756f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.5076f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.5928f, -3008.2698f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_433(int iParam0, var uParam1)//Position - 0x30BC7
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_434(int iParam0)//Position - 0x30C49
{
	if (iParam0 != func_42())
	{
		if ((BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 3) || BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 4)) || BitTest(Global_1853988[iParam0 /*867*/].f_267.f_288, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_435(int iParam0)//Position - 0x30CA1
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.0908f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.5624f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.1116f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
			break;
		
		case 13:
			return func_425();
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
			break;
		
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
			break;
		
		case 17:
			if (func_436() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		case 21:
			return 570f, -415f, -70f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_436()//Position - 0x30F0D
{
	return func_437(PLAYER::PLAYER_ID());
}

int func_437(int iParam0)//Position - 0x30F1D
{
	return MISC::GET_BITS_IN_RANGE(Global_2657704[iParam0 /*463*/].f_321.f_3, 28, 31);
}

int func_438(int iParam0)//Position - 0x30F3A
{
	return func_417(iParam0, 0, 0);
}

int func_439(int iParam0)//Position - 0x30F4A
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

var func_440()//Position - 0x31280
{
	var uVar0;
	
	func_450(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_449(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_448(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_443(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_442(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_441(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_441(var uParam0, int iParam1)//Position - 0x312C6
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

void func_442(var uParam0, int iParam1)//Position - 0x3134C
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_443(var uParam0, int iParam1)//Position - 0x3137F
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_447(*uParam0);
	iVar1 = func_445(*uParam0);
	if (iParam1 < 1 || iParam1 > func_444(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_444(int iParam0, int iParam1)//Position - 0x313D0
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

var func_445(int iParam0)//Position - 0x31472
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_446(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_446(bool bParam0, int iParam1, int iParam2)//Position - 0x31494
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_447(var uParam0)//Position - 0x314AB
{
	return uParam0 & 15;
}

void func_448(var uParam0, int iParam1)//Position - 0x314B8
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_449(var uParam0, int iParam1)//Position - 0x314F2
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_450(var uParam0, int iParam1)//Position - 0x3152D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_451(char* sParam0)//Position - 0x31569
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_452(int iParam0)//Position - 0x315BF
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

int func_453(char* sParam0, int iParam1)//Position - 0x31A0C
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = MISC::GET_HASH_KEY(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_454(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_454(int iParam0, var uParam1)//Position - 0x31A55
{
	switch (iParam0)
	{
		case 0:
			func_455(uParam1, "Abigail1", func_457(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 1:
			func_455(uParam1, "Abigail2", func_457(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 2:
			func_455(uParam1, "Barry1", func_457(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 3:
			func_455(uParam1, "Barry2", func_457(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_456(iParam0), 1, 1);
			break;
		
		case 4:
			func_455(uParam1, "Barry3", func_457(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 5:
			func_455(uParam1, "Barry3A", func_457(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 6:
			func_455(uParam1, "Barry3C", func_457(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 7:
			func_455(uParam1, "Barry4", func_457(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_456(iParam0), 0, 0);
			break;
		
		case 8:
			func_455(uParam1, "Dreyfuss1", func_457(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 9:
			func_455(uParam1, "Epsilon1", func_457(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 10:
			func_455(uParam1, "Epsilon2", func_457(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 11:
			func_455(uParam1, "Epsilon3", func_457(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 12:
			func_455(uParam1, "Epsilon4", func_457(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 13:
			func_455(uParam1, "Epsilon5", func_457(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 14:
			func_455(uParam1, "Epsilon6", func_457(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 15:
			func_455(uParam1, "Epsilon7", func_457(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 16:
			func_455(uParam1, "Epsilon8", func_457(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 17:
			func_455(uParam1, "Extreme1", func_457(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 18:
			func_455(uParam1, "Extreme2", func_457(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 19:
			func_455(uParam1, "Extreme3", func_457(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 20:
			func_455(uParam1, "Extreme4", func_457(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 21:
			func_455(uParam1, "Fanatic1", func_457(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_456(iParam0), 1, 0);
			break;
		
		case 22:
			func_455(uParam1, "Fanatic2", func_457(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_456(iParam0), 1, 0);
			break;
		
		case 23:
			func_455(uParam1, "Fanatic3", func_457(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_456(iParam0), 0, 1);
			break;
		
		case 24:
			func_455(uParam1, "Hao1", func_457(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_456(iParam0), 0, 1);
			break;
		
		case 25:
			func_455(uParam1, "Hunting1", func_457(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 26:
			func_455(uParam1, "Hunting2", func_457(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 27:
			func_455(uParam1, "Josh1", func_457(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 28:
			func_455(uParam1, "Josh2", func_457(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_456(iParam0), 1, 1);
			break;
		
		case 29:
			func_455(uParam1, "Josh3", func_457(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_456(iParam0), 1, 1);
			break;
		
		case 30:
			func_455(uParam1, "Josh4", func_457(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 31:
			func_455(uParam1, "Maude1", func_457(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 32:
			func_455(uParam1, "Minute1", func_457(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 33:
			func_455(uParam1, "Minute2", func_457(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 34:
			func_455(uParam1, "Minute3", func_457(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 35:
			func_455(uParam1, "MrsPhilips1", func_457(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 36:
			func_455(uParam1, "MrsPhilips2", func_457(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 37:
			func_455(uParam1, "Nigel1", func_457(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 38:
			func_455(uParam1, "Nigel1A", func_457(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_456(iParam0), 1, 1);
			break;
		
		case 39:
			func_455(uParam1, "Nigel1B", func_457(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_456(iParam0), 1, 1);
			break;
		
		case 40:
			func_455(uParam1, "Nigel1C", func_457(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_456(iParam0), 1, 1);
			break;
		
		case 41:
			func_455(uParam1, "Nigel1D", func_457(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_456(iParam0), 1, 1);
			break;
		
		case 42:
			func_455(uParam1, "Nigel2", func_457(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_456(iParam0), 1, 1);
			break;
		
		case 43:
			func_455(uParam1, "Nigel3", func_457(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_456(iParam0), 1, 1);
			break;
		
		case 44:
			func_455(uParam1, "Omega1", func_457(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 45:
			func_455(uParam1, "Omega2", func_457(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 46:
			func_455(uParam1, "Paparazzo1", func_457(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 47:
			func_455(uParam1, "Paparazzo2", func_457(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 48:
			func_455(uParam1, "Paparazzo3", func_457(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 49:
			func_455(uParam1, "Paparazzo3A", func_457(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 50:
			func_455(uParam1, "Paparazzo3B", func_457(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 51:
			func_455(uParam1, "Paparazzo4", func_457(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 52:
			func_455(uParam1, "Rampage1", func_457(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 54:
			func_455(uParam1, "Rampage3", func_457(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 55:
			func_455(uParam1, "Rampage4", func_457(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 56:
			func_455(uParam1, "Rampage5", func_457(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_456(iParam0), 0, 0);
			break;
		
		case 53:
			func_455(uParam1, "Rampage2", func_457(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_456(iParam0), 1, 0);
			break;
		
		case 57:
			func_455(uParam1, "TheLastOne", func_457(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 58:
			func_455(uParam1, "Tonya1", func_457(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 59:
			func_455(uParam1, "Tonya2", func_457(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 60:
			func_455(uParam1, "Tonya3", func_457(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 61:
			func_455(uParam1, "Tonya4", func_457(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		case 62:
			func_455(uParam1, "Tonya5", func_457(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_456(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_455(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x32C9C
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

int func_456(int iParam0)//Position - 0x32D2D
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

struct<2> func_457(int iParam0)//Position - 0x33073
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_452(iParam0) };
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

int func_458(int iParam0)//Position - 0x330AB
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_459(Global_113810.f_9088.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_459(Global_113810.f_9088.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_459(Global_113810.f_9088.f_99.f_205[11]);
			break;
		
		case 90:
			return func_459(Global_113810.f_9088.f_99.f_205[7]);
			break;
		
		case 93:
			return func_459(Global_113810.f_9088.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x33167
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_460(char* sParam0, bool bParam1)//Position - 0x331BB
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_461(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_461(int iParam0, bool bParam1)//Position - 0x331E5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_91601[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_462(bool bParam0)//Position - 0x3321B
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

void func_463(int iParam0)//Position - 0x3349D
{
	func_374(iParam0);
	GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	func_212(0);
	func_94();
	HUD::CLEAR_PRINTS();
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_2508))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2508);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			if (func_73(PLAYER::PLAYER_PED_ID(), 2444.0984f, 4977.795f, 48.9959f, 1) < 100f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2463.8108f, 4961.747f, 44.176f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		func_19(50, 0, 0, 1, 0);
		func_19(51, 0, 0, 1, 0);
		func_19(52, 0, 0, 1, 0);
		func_19(53, 0, 0, 1, 0);
		func_19(54, 0, 0, 1, 0);
		func_19(55, 0, 0, 1, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_464()//Position - 0x335B5
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113810.f_9088 || func_147(0))
	{
		if (!func_465())
		{
			iVar0 = func_146();
			if (iVar0 != -1)
			{
				if (!func_140(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91565[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_145();
		}
	}
}

int func_465()//Position - 0x33626
{
	if (((Global_100833 == 13 || Global_100833 == 10) || Global_100833 == 11) || Global_100833 == 12)
	{
		return 0;
	}
	return 1;
}

