[
   Module -- KW["module"] _1 _2,
   Module.2:iter-star -- _1,
   Specification -- V  [H  [KW["specification"]] _1],
   Specification.1:iter-star -- _1,
   Script -- V  [H  [KW["stratego"] KW["script"]] _1],
   Script.1:iter-star -- _1,
   Command -- _1,
   Dump -- KW[":dump"] _1,
   Load -- KW[":load"] _1,
   Eval -- KW[">"] _1,
   Imports -- V  [H  [KW["imports"]] _1],
   Imports.1:iter-star -- _1,
   Rules -- V  [H  [KW["rules"]] _1],
   Rules.1:iter-star -- _1,
   Strategies -- V  [H  [KW["strategies"]] _1],
   Strategies.1:iter-star -- _1,
   Signature -- V  [H  [KW["signature"]] _1],
   Signature.1:iter-star -- _1,
   Overlays -- V  [H  [KW["overlays"]] _1],
   Overlays.1:iter-star -- _1,
   Sorts -- V  [H  [KW["sorts"]] _1],
   Sorts.1:iter-star -- _1,
   Constructors -- V  [H  [KW["constructors"]] _1],
   Constructors.1:iter-star -- _1,
   SortNoArgs -- _1,
   Sort -- _1 KW["("] _2 KW[")"],
   Sort.2:iter-star-sep -- _1 KW[","],
   Star -- KW["*"],
   StarStar -- KW["**"],
   OpDecl -- _1 KW[":"] _2,
   ConstType -- _1,
   FunType -- _1 KW["->"] _2,
   FunType.1:iter-sep -- _1 KW["*"],
   Var -- _1,
   Wld -- KW["_"],
   Int -- _1,
   Real -- _1,
   Str -- _1,
   BuildDefault -- KW["_"] _1,
   Con -- _1 _2,
   Op -- _1 KW["("] _2 KW[")"],
   Op.2:iter-star-sep -- _1 KW[","],
   As -- _1 KW["@"] _2,
   Tuple -- KW["("] _1 KW[")"],
   Tuple.1:iter-star-sep -- _1 KW[","],
   App -- KW["<"] _1 KW[">"] _2,
   List -- KW["["] _1 KW["]"],
   List.1:iter-star-sep -- _1 KW[","],
   ListTail -- KW["["] _1 KW["|"] _2 KW["]"],
   ListTail.1:iter-star-sep -- _1 KW[","],
   Explode -- _1 KW["#"] KW["("] _2 KW[")"],
   RootApp -- _1,
   Anno -- _1 KW["{"] _2 KW["}"],
   Con1 -- KW["["] _1 KW["]"],
   Con2 -- KW["["] _1 KW["]"] KW["("] _2 KW[")"],
   Con3 -- KW["["] _1 KW["where"] _2 KW["]"],
   Con4 -- KW["["] _1 KW["where"] _2 KW["]"] KW["("] _3 KW[")"],
   RDefNoArgs -- _1 KW[":"] _2,
   RDef -- _1 KW["("] _2 KW[")"] KW[":"] _3,
   RDef.2:iter-star-sep -- _1 KW[","],
   SRDefNoArgs -- _1 KW["::"] _2,
   SRDef -- _1 KW["("] _2 KW[")"] KW["::"] _3,
   SRDef.2:iter-star-sep -- _1 KW[","],
   RuleNoCond -- _1 KW["->"] _2,
   Rule -- _1 KW["->"] _2 KW["where"] _3,
   StratRuleNoCond -- _1 KW["-->"] _2,
   StratRule -- _1 KW["-->"] _2 KW["where"] _3,
   Fail -- KW["fail"],
   Id -- KW["id"],
   SVar -- _1,
   Let -- KW["let"] _1 KW["in"] _2,
   Let.1:iter-star -- _1,
   Let.1:iter-star.1:alt -- _1 _2,
   CallNoArgs -- _1,
   Call -- _1 KW["("] _2 KW[")"],
   Call.2:iter-star-sep -- _1 KW[","],
   Match -- KW["?"] _1,
   Build -- KW["!"] _1,
   ScopeDefault -- KW["{"] _1 KW["}"],
   Scope -- KW["{"] _1 KW[":"] _2 KW["}"],
   Scope.1:iter-star-sep -- _1 KW[","],
   BA -- _1 _2,
   AM -- _1 KW["=>"] _2,
   ParenStrat -- KW["("] _1 KW[")"],
   LRule -- KW["\\"] _1 KW["\\"],
   Seq -- _1 KW[";"] _2,
   Choice -- _1 KW["+"] _2,
   LChoice -- _1 KW["<+"] _2,
   RChoice -- _1 KW["+>"] _2,
   GChoice -- _1 KW["++"] _2,
   LGChoice -- _1 KW["<++"] _2,
   RGChoice -- _1 KW["++>"] _2,
   GuardedLChoice -- _1 KW["<"] _2 KW["+"] _3,
   Rec -- KW["rec"] _1 KW["("] _2 KW[")"],
   Not -- KW["not"] KW["("] _1 KW[")"],
   Where -- KW["where"] KW["("] _1 KW[")"],
   Test -- KW["test"] KW["("] _1 KW[")"],
   Bagof -- KW["bagof"] KW["("] _1 KW[")"],
   PrimNoArgs -- KW["prim"] KW["("] _1 KW[")"],
   Prim -- KW["prim"] KW["("] _1 KW[","] _2 KW[")"],
   Prim.2:iter-star-sep -- _1 KW[","],
   Path -- _1 _2,
   Some -- KW["some"] KW["("] _1 KW[")"],
   One -- KW["one"] KW["("] _1 KW[")"],
   All -- KW["all"] KW["("] _1 KW[")"],
   Thread -- KW["thread"] KW["("] _1 KW[")"],
   StrCong -- _1,
   IntCong -- _1,
   RealCong -- _1,
   TupleCong -- KW["("] KW[")"],
   TupleCong -- KW["("] _1 KW[","] _2 KW[")"],
   TupleCong.2:iter-sep -- _1 KW[","],
   ModCongNoArgs -- _1,
   ModCong -- _1 KW["("] _2 KW[")"],
   ModCong.2:iter-star-sep -- _1 KW[","],
   Mod -- _1 KW["^"] _2,
   ListCongNoTail -- KW["["] _1 KW["]"],
   ListCongNoTail.1:iter-star-sep -- _1 KW[","],
   ListCong -- KW["["] _1 KW["|"] _2 KW["]"],
   ListCong.1:iter-star-sep -- _1 KW[","],
   ExplodeCong -- _1 KW["#"] _2,
   DynamicRules -- KW["rules"] KW["("] _1 KW[")"],
   DynamicRules.1:iter-star -- _1,
   OverrideDynamicRules -- KW["override"] KW["rules"] KW["("] _1 KW[")"],
   OverrideDynamicRules.1:iter-star -- _1,
   DynRuleScope -- KW["{|"] _1 KW[":"] _2 KW["|}"],
   DynRuleScope.1:iter-star-sep -- _1 KW[","],
   SDefNoArgs -- _1 KW["="] _2,
   SDef -- _1 KW["("] _2 KW[")"] KW["="] _3,
   SDef.2:iter-star-sep -- _1 KW[","],
   DefaultVarDec -- _1,
   VarDec -- _1 KW[":"] _2,
   OverlayNoArgs -- _1 KW["="] _2,
   Overlay -- _1 KW["("] _2 KW[")"] KW["="] _3,
   Overlay.2:iter-star-sep -- _1 KW[","]
]
