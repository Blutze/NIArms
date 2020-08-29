﻿
class CfgSoundShaders
{

    //.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
    //300Blackout AR15 Generic Soundshaders: Based off Katiba
    class NIA_300BLK_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 }
        };
        range = 35;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35,0}
        };
    };
    class NIA_300BLK_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_close1", 1 },
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_close2", 1 },
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_close3", 1 },
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_close4", 1 }
        };
        volume = 0.78;
        range = 10;
        rangeCurve = "closeShotCurve";
    };
    class NIA_300BLK_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_mid", 1 }
        };
        volume = 1.3;
        range = 1800;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 1800,0}
        };
    };
    class NIA_300BLK_distShot_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_01", 1 },
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_02", 1 },
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_03", 1 }
        };
        volume = 1.0;
        range = 1800;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1800, 1 }
        };
    };

    class NIA_300BLK_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\300blk_indoor", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_300BLK_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\300blk_indoor_mid", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class NIA_300BLK_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_300BLK_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\300blk_trees_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800,1}
		}; 
        range = 1800;
        limitation = 1;
    };
    class NIA_300BLK_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_forest", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_300BLK_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\300blk_forest_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800,1}
		}; 
        range = 1800;
        limitation = 1;
    };
    class NIA_300BLK_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_meadow", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_300BLK_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\300blk_meadow_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800,1}
		}; 
        range = 1800;
        limitation = 1;
    };
    class NIA_300BLK_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_urban", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_300BLK_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\300blk_urban_mid", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1200, 0 }
		}; 
        range = 1200;
        limitation = 1;
    };

    class NIA_300BLK_Shot_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300aac_suppressed_close", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class NIA_300BLK_Shot_Silenced_mid_SoundShader{
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300aac_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 150, 0 }
        };
    };

    class NIA_300BLK_tailInterior_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300aac_suppressed_indoor", 1 }
        };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_300BLK_tailTrees_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300aac_suppressed_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_300BLK_tailForest_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300aac_suppressed_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_300BLK_tailMeadows_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300aac_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_300BLK_tailHouses_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300aac_suppressed_urban", 1 }
        };
        volume = "(1-interior/1.4)*houses";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };


    class NIA_badger_Shot_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_close", 1 }
        };
        volume = 1.0;
        range = 50;
            rangeCurve[] = { 
        { 0, 1 }, 
        { 50, 0 } 
            };
    };
    class NIA_badger_Shot_Silenced_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_mid", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 150, 0 }
        };
    };

    class NIA_badger_tailInterior_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_indoor", 1 }
        };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_badger_tailTrees_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_badger_tailForest_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_badger_tailMeadows_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_badger_tailHouses_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_urban", 1 }
        };
        volume = "(1-interior/1.4)*houses";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };


    class NIA_samr_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 }
        };
        range = 35;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 100,0}
        };
    };
    class NIA_samr_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_close1", 1 },
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_close2", 1 },
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_close3", 1 },
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_close4", 1 }
        };
        volume = 0.78;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class NIA_samr_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_mid", 1 }
        };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 2000,0}
        };
    };
    class NIA_samr_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
        };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 }
        };
    };

    class NIA_samr_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class NIA_samr_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_forest", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_samr_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_forest_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class NIA_samr_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_urban", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_samr_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_urban_mid", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class NIA_samr_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_indoor", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
            range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_samr_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_indoor_mid", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class NIA_samr_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_meadow", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_samr_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_meadow_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class NIA_samr_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_samr_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_trees_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };

    class NIA_samr_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\rifle_suppressed_close", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class NIA_samr_silencerShot_mid_SoundShader{
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\rifle_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };

    class NIA_samr_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\rifle_suppressed_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_samr_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\rifle_suppressed_urban", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_samr_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\rifle_suppressed_indoor", 1 }
        };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_samr_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\rifle_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_samr_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\rifle_suppressed_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    

    class PBEAR_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 }
        };
        range = 35;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35,0}
        };
    };
    class PBEAR_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\PBEAR\PBEAR_close", 1 }
        };
        volume = 0.78;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class PBEAR_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\PBEAR\PBEAR_mid", 1 }
        };
        volume = 1.3;
        range = 1800;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 1800,0}
        };
    };
    class PBEAR_distShot_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_01", 1 },
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_02", 1 },
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_03", 1 }
        };
        volume = 1.0;
        range = 1800;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1800, 1 }
        };
    };

    class PBEAR_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\PBEAR\PBEAR_indoor", 1 }
        };
        volume = "interior";
        range = 500;
        limitation = 1;
    };
    class PBEAR_tailTrees_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 1800;
        limitation = 1;
    };
    class PBEAR_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\300aac_forest", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 1800;
        limitation = 1;
    };
    class PBEAR_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\PBEAR\PBEAR_meadow", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 1800;
        limitation = 1;
    };
    class PBEAR_tailHouses_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_houses", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        range = 1200;
        limitation = 1;
    };


    class NIA_jack_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_first", 1 }
        };
        range = 35;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35,0}
        };
    };
    class NIA_jack_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_close2", 1 },
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_close1", 1 },
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_close3", 1 },
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_close4", 1 }
        };
        volume = 0.7;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class NIA_jack_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_mid", 1 }
        };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 2000,0}
        };
    };
    class NIA_jack_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
        };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 }
        };
    };

    class NIA_jack_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 0.8;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class NIA_jack_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_forest", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_jack_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_forest_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class NIA_jack_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\Jack_urban", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_jack_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\Jack_urban_mid", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class NIA_jack_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\Jack_indoor", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
            range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_jack_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\Jack_indoor_mid", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class NIA_jack_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_meadow", 1 },
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_meadow", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_jack_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_meadow_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class NIA_jack_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_jack_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_trees_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };

    class NIA_jack_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_close", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class NIA_jack_silencerShot_mid_SoundShader{
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\carbine_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };

    class NIA_jack_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_jack_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_urban", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_jack_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_indoor", 1 }
        };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_jack_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_jack_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };


    class NIA_carbine_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\generic\ar15_first", 1 }
        };
        range = 35;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35,0}
        };
    };
    class NIA_carbine_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_close1", 1 },
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_close2", 1 },
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_close3", 1 },
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_close4", 1 }
        };
        volume = 0.7;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class NIA_carbine_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_mid", 1 }
        };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 2000,0}
        };
    };
    class NIA_carbine_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
        };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 }
        };
    };

    class NIA_carbine_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class NIA_carbine_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_forest", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_carbine_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_forest_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class NIA_carbine_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_urban", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_carbine_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_urban_mid", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class NIA_carbine_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_indoor", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
            range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_carbine_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_indoor_mid", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class NIA_carbine_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_meadows", 1 },
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_meadows", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_carbine_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_meadows_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class NIA_carbine_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_carbine_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_trees_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };

    class NIA_carbine_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_close", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class NIA_carbine_silencerShot_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\carbine_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };

    class NIA_carbine_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_carbine_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_urban", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_carbine_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_indoor", 1 }
        };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_carbine_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_carbine_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };


    class NIA_SBR_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\generic\ar15_first", 1 }
        };
        range = 35;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35,0}
        };
    };
    class NIA_SBR_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_close1", 1 },
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_close2", 1 },
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_close3", 1 },
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_close4", 1 }
        };
        volume = 0.78;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class NIA_SBR_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_mid", 1 }
        };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000,0}
        };
    };
    class NIA_SBR_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
        };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 }
        };
    };

    class NIA_SBR_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 0.8;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class NIA_SBR_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_forest", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SBR_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_forest_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class NIA_SBR_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_urban", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SBR_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\sbr\sbr_urban_mid", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class NIA_SBR_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_indoor", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
            range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SBR_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_indoor_mid", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class NIA_SBR_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_meadow", 1 },
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_meadow", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SBR_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_meadow_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class NIA_SBR_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class NIA_SBR_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_trees_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };

    class NIA_SBR_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\SBR_suppressed_close", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class NIA_SBR_silencerShot_mid_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\SBR_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };

    class NIA_SBR_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\SBR_suppressed_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_SBR_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\SBR_suppressed_urban", 1 }
        };
        volume = "1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_SBR_silencerTailInterior_SoundShader{
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\SBR_suppressed_indoor", 1 }
        };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_SBR_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\SBR_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_SBR_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\SBR_suppressed_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
};
