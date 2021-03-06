class Medical {
    displayName = "$STR_ACE_MEDICAL_ACTIONS_Medical";
    runOnHover = 1;
    hotkey = "M";
    exceptions[] = {"isNotInside"};
    statement = QUOTE([ARR_3(_target, true, 0)] call DFUNC(displayPatientInformation));
    condition = "true";
    icon = PATHTOF(UI\icons\medical_cross.paa);

   class ACE_Head {
        displayName = "$STR_ACE_Interaction_Head";
        icon = PATHTOF(UI\icons\medical_cross.paa);
        exceptions[] = {"isNotInside"};
        statement = QUOTE([ARR_3(_target, true, 0)] call DFUNC(displayPatientInformation));
        modifierFunction = QUOTE([ARR_4(_target,_player,0,_this select 3)] call FUNC(modifyMedicalAction));
        condition = "true";
        runOnHover = 1;

        class Bandage {
            displayName = "$STR_ACE_Medical_Bandage";
            distance = 2.0;
            condition = QUOTE([ARR_4(_player, _target, 'head', 'Bandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'head', 'Bandage')] call DFUNC(treatment));
            showDisabled = 1;
            priority = 2;
            hotkey = "B";
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        // Advanced medical
        class FieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_FieldDressing";
            distance = 5.0;
            condition = QUOTE([ARR_4(_player, _target, 'head', 'FieldDressing')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'head', 'FieldDressing')] call DFUNC(treatment));
            showDisabled = 0;
            priority = 2;
            hotkey = "";
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class PackingBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_PackingBandage";
            condition = QUOTE([ARR_4(_player, _target, 'head', 'PackingBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'head', 'PackingBandage')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\packingBandage.paa);
        };
        class ElasticBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_ElasticBandage";
            condition = QUOTE([ARR_4(_player, _target, 'head', 'ElasticBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'head', 'ElasticBandage')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class QuikClot: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_QuikClot";
            condition = QUOTE([ARR_4(_player, _target, 'head', 'QuikClot')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'head', 'QuikClot')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class CheckPulse: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_CheckPulse";
            condition = QUOTE([ARR_4(_player, _target, 'head', 'CheckPulse')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'head', 'CheckPulse')] call DFUNC(treatment));
            icon = "";
        };
        class CheckBloodPressure: CheckPulse {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_CheckBloodPressure";
            condition = QUOTE([ARR_4(_player, _target, 'head', 'CheckBloodPressure')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'head', 'CheckBloodPressure')] call DFUNC(treatment));
        };
    };
    class ACE_Torso {
        displayName = "$STR_ACE_Interaction_Torso";
        distance = 5.0;
        condition = "true";
        runOnHover = 1;
        exceptions[] = {"isNotInside"};
        statement = QUOTE([ARR_3(_target, true, 1)] call DFUNC(displayPatientInformation));
        modifierFunction = QUOTE([ARR_4(_target,_player,1,_this select 3)] call FUNC(modifyMedicalAction));
        showDisabled = 1;
        priority = 2;
        hotkey = "";
        icon = PATHTOF(UI\icons\medical_cross.paa);

        class Bandage {
            displayName = "$STR_ACE_Medical_Bandage";
            distance = 2.0;
            condition = QUOTE([ARR_4(_player, _target, 'body', 'Bandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'body', 'Bandage')] call DFUNC(treatment));
            showDisabled = 1;
            priority = 2;
            hotkey = "B";
            icon = PATHTOF(UI\icons\bandage.paa);
        };

        class TriageCard {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_TriageCard";
            distance = 2.0;
            condition = "true";
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_2(_target, true)] call DFUNC(displayTriageCard));
            showDisabled = 1;
            priority = 2;
            hotkey = "";
            icon = PATHTOF(UI\icons\triageCard.paa);
        };

        // Advanced medical
        class FieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_FieldDressing";
            distance = 5.0;
            condition = QUOTE([ARR_4(_player, _target, 'body', 'FieldDressing')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'body', 'FieldDressing')] call DFUNC(treatment));
            showDisabled = 0;
            priority = 2;
            hotkey = "";
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class PackingBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_PackingBandage";
            condition = QUOTE([ARR_4(_player, _target, 'body', 'PackingBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'body', 'PackingBandage')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\packingBandage.paa);
        };
        class ElasticBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_ElasticBandage";
            condition = QUOTE([ARR_4(_player, _target, 'body', 'ElasticBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'body', 'ElasticBandage')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class QuikClot: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_QuikClot";
            condition = QUOTE([ARR_4(_player, _target, 'body', 'QuikClot')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'body', 'QuikClot')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\bandage.paa);
        };
    };
    class ACE_ArmLeft {
        displayName = "$STR_ACE_Interaction_ArmLeft";
        runOnHover = 1;
        exceptions[] = {"isNotInside"};
        statement = QUOTE([ARR_3(_target, true, 2)] call DFUNC(displayPatientInformation));
        modifierFunction = QUOTE([ARR_4(_target,_player,2,_this select 3)] call FUNC(modifyMedicalAction));
        condition = "true";
        icon = PATHTOF(UI\icons\medical_cross.paa);

        class Bandage {
            displayName = "$STR_ACE_Medical_Bandage";
            distance = 2.0;
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'Bandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'Bandage')] call DFUNC(treatment));
            showDisabled = 1;
            priority = 2;
            hotkey = "B";
            icon = PATHTOF(UI\icons\bandage.paa);
        };

        // Advanced medical
        class FieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_FieldDressing";
            distance = 5.0;
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'FieldDressing')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'FieldDressing')] call DFUNC(treatment));
            showDisabled = 0;
            priority = 2;
            hotkey = "";
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class PackingBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_PackingBandage";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'PackingBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'PackingBandage')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\packingBandage.paa);
        };
        class ElasticBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_ElasticBandage";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'ElasticBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'ElasticBandage')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class QuikClot: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_QuikClot";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'QuikClot')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'QuikClot')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class Tourniquet: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_Tourniquet";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'Tourniquet')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'Tourniquet')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\tourniquet.paa);
        };
        class Morphine: fieldDressing {
            displayName = "$STR_ACE_Medical_Inject_Morphine";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'Morphine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'Morphine')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\autoInjector.paa);
        };
        class Atropine: Morphine {
            displayName = "$STR_ACE_Medical_Inject_Atropine";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'Atropine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'Atropine')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\autoInjector.paa);
        };
        class Epinephrine: Morphine {
            displayName = "$STR_ACE_Medical_Inject_Epinephrine";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'Epinephrine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'Epinephrine')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\autoInjector.paa);
        };
        class CheckPulse: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_CheckPulse";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'CheckPulse')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'CheckPulse')] call DFUNC(treatment));
            icon = "";
        };
        class CheckBloodPressure: CheckPulse {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_CheckBloodPressure";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'CheckBloodPressure')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'CheckBloodPressure')] call DFUNC(treatment));
        };
        class RemoveTourniquet: Tourniquet {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_RemoveTourniquet";
            condition = QUOTE([ARR_4(_player, _target, 'hand_l', 'RemoveTourniquet')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_l', 'RemoveTourniquet')] call DFUNC(treatment));
        };
    };
    class ACE_ArmRight {
        displayName = "$STR_ACE_Interaction_ArmRight";
        runOnHover = 1;
        exceptions[] = {"isNotInside"};
        statement = QUOTE([ARR_3(_target, true, 3)] call DFUNC(displayPatientInformation));
        modifierFunction = QUOTE([ARR_4(_target,_player,3,_this select 3)] call FUNC(modifyMedicalAction));
        condition = "true";
        icon = PATHTOF(UI\icons\medical_cross.paa);

        class Bandage {
            displayName = "$STR_ACE_Medical_Bandage";
            distance = 2.0;
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'Bandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'Bandage')] call DFUNC(treatment));
            showDisabled = 1;
            priority = 2;
            hotkey = "B";
            icon = PATHTOF(UI\icons\bandage.paa);
        };

        // Advanced medical
        class FieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_FieldDressing";
            distance = 5.0;
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'FieldDressing')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'FieldDressing')] call DFUNC(treatment));
            showDisabled = 0;
            priority = 2;
            hotkey = "";
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class PackingBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_PackingBandage";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'PackingBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'PackingBandage')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\packingBandage.paa);
        };
        class ElasticBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_ElasticBandage";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'ElasticBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'ElasticBandage')] call DFUNC(treatment));
        };
        class QuikClot: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_QuikClot";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'QuikClot')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'QuikClot')] call DFUNC(treatment));
        };
        class Tourniquet: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_Tourniquet";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'Tourniquet')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'Tourniquet')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\tourniquet.paa);
        };
        class Morphine: fieldDressing {
            displayName = "$STR_ACE_Medical_Inject_Morphine";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'Morphine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'Morphine')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\autoInjector.paa);
        };
        class Atropine: Morphine {
            displayName = "$STR_ACE_Medical_Inject_Atropine";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'Atropine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'Atropine')] call DFUNC(treatment));
        };
        class Epinephrine: Morphine {
            displayName = "$STR_ACE_Medical_Inject_Epinephrine";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'Epinephrine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'Epinephrine')] call DFUNC(treatment));
        };
        class CheckPulse: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_CheckPulse";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'CheckPulse')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'CheckPulse')] call DFUNC(treatment));
            icon = "";
        };
        class CheckBloodPressure: CheckPulse {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_CheckBloodPressure";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'CheckBloodPressure')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'CheckBloodPressure')] call DFUNC(treatment));
        };
        class RemoveTourniquet: Tourniquet {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_RemoveTourniquet";
            condition = QUOTE([ARR_4(_player, _target, 'hand_r', 'RemoveTourniquet')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'hand_r', 'RemoveTourniquet')] call DFUNC(treatment));
        };
    };
    class ACE_LegLeft {
        displayName = "$STR_ACE_Interaction_LegLeft";
        runOnHover = 1;
        exceptions[] = {"isNotInside"};
        statement = QUOTE([ARR_3(_target, true, 4)] call DFUNC(displayPatientInformation));
        modifierFunction = QUOTE([ARR_4(_target,_player,4,_this select 3)] call FUNC(modifyMedicalAction));
        condition = "true";
        icon = PATHTOF(UI\icons\medical_cross.paa);

        class Bandage {
            displayName = "$STR_ACE_Medical_Bandage";
            distance = 2.0;
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'Bandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'Bandage')] call DFUNC(treatment));
            showDisabled = 1;
            priority = 2;
            hotkey = "B";
            icon = PATHTOF(UI\icons\bandage.paa);
        };


        // Advanced medical
        class FieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_FieldDressing";
            distance = 5.0;
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'FieldDressing')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'FieldDressing')] call DFUNC(treatment));
            showDisabled = 0;
            priority = 2;
            hotkey = "";
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class PackingBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_PackingBandage";
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'PackingBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'PackingBandage')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\packingBandage.paa);
        };
        class ElasticBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_ElasticBandage";
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'ElasticBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'ElasticBandage')] call DFUNC(treatment));
        };
        class QuikClot: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_QuikClot";
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'QuikClot')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'QuikClot')] call DFUNC(treatment));
        };
        class Tourniquet: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_Tourniquet";
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'Tourniquet')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'Tourniquet')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\tourniquet.paa);
        };
        class Morphine: fieldDressing {
            displayName = "$STR_ACE_Medical_Inject_Morphine";
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'Morphine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'Morphine')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\autoInjector.paa);
        };
        class Atropine: Morphine {
            displayName = "$STR_ACE_Medical_Inject_Atropine";
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'Atropine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'Atropine')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\autoInjector.paa);
        };
        class Epinephrine: Morphine {
            displayName = "$STR_ACE_Medical_Inject_Epinephrine";
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'Epinephrine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'Epinephrine')] call DFUNC(treatment));
        };
        class RemoveTourniquet: Tourniquet {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_RemoveTourniquet";
            condition = QUOTE([ARR_4(_player, _target, 'leg_l', 'RemoveTourniquet')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_l', 'RemoveTourniquet')] call DFUNC(treatment));
        };
    };
    class ACE_LegRight {
        displayName = "$STR_ACE_Interaction_LegRight";
        runOnHover = 1;
        exceptions[] = {"isNotInside"};
        statement = QUOTE([ARR_3(_target, true, 5)] call DFUNC(displayPatientInformation));
        modifierFunction = QUOTE([ARR_4(_target,_player,5,_this select 3)] call FUNC(modifyMedicalAction));
        condition = "true";
        icon = PATHTOF(UI\icons\medical_cross.paa);

        class Bandage {
            displayName = "$STR_ACE_Medical_Bandage";
            distance = 2.0;
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'Bandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'Bandage')] call DFUNC(treatment));
            showDisabled = 1;
            priority = 2;
            hotkey = "B";
            icon = PATHTOF(UI\icons\bandage.paa);
        };


        // Advanced medical
        class FieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_FieldDressing";
            distance = 5.0;
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'FieldDressing')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'FieldDressing')] call DFUNC(treatment));
            showDisabled = 0;
            priority = 2;
            hotkey = "";
            icon = PATHTOF(UI\icons\bandage.paa);
        };
        class PackingBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_PackingBandage";
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'PackingBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'PackingBandage')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\packingBandage.paa);
        };
        class ElasticBandage: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_ElasticBandage";
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'ElasticBandage')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'ElasticBandage')] call DFUNC(treatment));
        };
        class QuikClot: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_QuikClot";
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'QuikClot')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'QuikClot')] call DFUNC(treatment));
        };
        class Tourniquet: fieldDressing {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_Tourniquet";
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'Tourniquet')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'Tourniquet')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\tourniquet.paa);
        };
        class Morphine: fieldDressing {
            displayName = "$STR_ACE_Medical_Inject_Morphine";
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'Morphine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'Morphine')] call DFUNC(treatment));
            icon = PATHTOF(UI\icons\autoInjector.paa);
        };
        class Atropine: Morphine {
            displayName = "$STR_ACE_Medical_Inject_Atropine";
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'Atropine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'Atropine')] call DFUNC(treatment));
        };
        class Epinephrine: Morphine {
            displayName = "$STR_ACE_Medical_Inject_Epinephrine";
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'Epinephrine')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'Epinephrine')] call DFUNC(treatment));
        };
        class RemoveTourniquet: Tourniquet {
            displayName = "$STR_ACE_MEDICAL_ACTIONS_RemoveTourniquet";
            condition = QUOTE([ARR_4(_player, _target, 'leg_r', 'RemoveTourniquet')] call DFUNC(canTreatCached));
            exceptions[] = {"isNotInside"};
            statement = QUOTE([ARR_4(_player, _target, 'leg_r', 'RemoveTourniquet')] call DFUNC(treatment));
        };
    };
};
