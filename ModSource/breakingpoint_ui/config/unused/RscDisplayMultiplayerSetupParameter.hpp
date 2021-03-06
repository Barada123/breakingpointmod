// Generated by unRap v1.06 by Kegetys

class RscDisplayMultiplayerSetupParameter : RscStandardDisplay {
	onLoad = "[""onLoad"",_this,""RscDisplayMultiplayerSetupParameter"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplayMultiplayerSetupParameter"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	idd = 147;
	
	class controlsBackground {
		class Vignette : RscVignette {
			idc = 114998;
		};
		
		class TileGroup : RscControlsGroupNoScrollbars {
			idc = 115099;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";
			disableCustomColors = 1;
			
			class Controls {
				class TileFrame : RscFrame {
					idc = 114999;
					x = 0;
					y = 0;
					w = "safezoneW";
					h = "safezoneH";
					colortext[] = {0, 0, 0, 1};
				};
				
				class Tile_0_0 : RscText {
					idc = 115000;
					x = "(0 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_1 : RscText {
					idc = 115001;
					x = "(0 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_2 : RscText {
					idc = 115002;
					x = "(0 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_3 : RscText {
					idc = 115003;
					x = "(0 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_4 : RscText {
					idc = 115004;
					x = "(0 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_0_5 : RscText {
					idc = 115005;
					x = "(0 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_0 : RscText {
					idc = 115010;
					x = "(1 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_1 : RscText {
					idc = 115011;
					x = "(1 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_2 : RscText {
					idc = 115012;
					x = "(1 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_3 : RscText {
					idc = 115013;
					x = "(1 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_4 : RscText {
					idc = 115014;
					x = "(1 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_1_5 : RscText {
					idc = 115015;
					x = "(1 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_0 : RscText {
					idc = 115020;
					x = "(2 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_1 : RscText {
					idc = 115021;
					x = "(2 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_2 : RscText {
					idc = 115022;
					x = "(2 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_3 : RscText {
					idc = 115023;
					x = "(2 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_4 : RscText {
					idc = 115024;
					x = "(2 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_2_5 : RscText {
					idc = 115025;
					x = "(2 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_0 : RscText {
					idc = 115030;
					x = "(3 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_1 : RscText {
					idc = 115031;
					x = "(3 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_2 : RscText {
					idc = 115032;
					x = "(3 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_3 : RscText {
					idc = 115033;
					x = "(3 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_4 : RscText {
					idc = 115034;
					x = "(3 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_3_5 : RscText {
					idc = 115035;
					x = "(3 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_0 : RscText {
					idc = 115040;
					x = "(4 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_1 : RscText {
					idc = 115041;
					x = "(4 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_2 : RscText {
					idc = 115042;
					x = "(4 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_3 : RscText {
					idc = 115043;
					x = "(4 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_4 : RscText {
					idc = 115044;
					x = "(4 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_4_5 : RscText {
					idc = 115045;
					x = "(4 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_0 : RscText {
					idc = 115050;
					x = "(5 * 1/6) * safezoneW";
					y = "(0 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_1 : RscText {
					idc = 115051;
					x = "(5 * 1/6) * safezoneW";
					y = "(1 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_2 : RscText {
					idc = 115052;
					x = "(5 * 1/6) * safezoneW";
					y = "(2 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_3 : RscText {
					idc = 115053;
					x = "(5 * 1/6) * safezoneW";
					y = "(3 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_4 : RscText {
					idc = 115054;
					x = "(5 * 1/6) * safezoneW";
					y = "(4 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
				
				class Tile_5_5 : RscText {
					idc = 115055;
					x = "(5 * 1/6) * safezoneW";
					y = "(5 * 1/6) * safezoneH";
					w = "1/6 * safezoneW";
					h = "1/6 * safezoneH";
					colorBackground[] = {0, 0, 0, 0.1};
				};
			};
		};
		
		class RscTitleBackground : RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			idc = 1080;
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class MainBackground : RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = 1081;
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			w = "SafezoneW - (2 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			h = "SafezoneH - (4.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
		};
	};
	
	class controls {
		class B_Cancel {};
		class B_OK {};
		class CA_LB_ParamsTitles {};
		
		class Title : RscTitle {
			idc = 105;
			w = "(27 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.75*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class PlayersName : RscTitle {
			idc = 109;
			style = 1;
			shadow = false;
			x = "safezoneX + (28 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.75*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			w = "(11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.25*(safezoneW - 				((safezoneW / safezoneH) min 1.2))";
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class LB_ParamsTitles : RscListBox {
			idc = 103;
			w = "SafezoneW - (2.4 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			h = "SafezoneH - (4.6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			colorBackground[] = {0, 0, 0, 0};
			x = "1.2 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY)";
		};
		
		class ButtonOK : RscButtonMenuOK {
			x = "safezoneX + SafezoneW - (7.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40))";
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class ButtonCancel : RscButtonMenuCancel {
			y = "SafezoneY + SafezoneH - (2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x = "1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(SafezoneX)";
			w = "6.25 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
