
using namespace clang::driver;
using namespace clang::driver::options;
using namespace llvm::opt;



# 1 "/home/juzix/Pictures/release-build/tools/clang/include/clang/Driver/Options.inc" 1
# 14 "/home/juzix/Pictures/release-build/tools/clang/include/clang/Driver/Options.inc"
static const char *const prefix_0[] = {nullptr};
static const char *const prefix_1[] = {"-" , nullptr};
static const char *const prefix_4[] = {"-" , "--" , nullptr};
static const char *const prefix_3[] = {"--" , nullptr};
static const char *const prefix_2[] = {"/" , "-" , nullptr};
# 22 "/home/juzix/Pictures/llvm-6.0.1.src/tools/clang/lib/Driver/DriverOptions.cpp" 2


static const OptTable::Info InfoTable[] = {





# 1 "/home/juzix/Pictures/release-build/tools/clang/include/clang/Driver/Options.inc" 1
# 26 "/home/juzix/Pictures/release-build/tools/clang/include/clang/Driver/Options.inc"
{nullptr, "<action group>", nullptr, nullptr, OPT_Action_Group, Option::GroupClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{nullptr, "<CompileOnly group>", nullptr, nullptr, OPT_CompileOnly_Group, Option::GroupClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{nullptr, "<g group>", nullptr, nullptr, OPT_DebugInfo_Group, Option::GroupClass, 0, 0, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<W/R group>", nullptr, nullptr, OPT_Diag_Group, Option::GroupClass, 0, 0, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<I group>", nullptr, nullptr, OPT_I_Group, Option::GroupClass, 0, 0, OPT_IncludePath_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<I/i group>", nullptr, nullptr, OPT_IncludePath_Group, Option::GroupClass, 0, 0, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<T/e/s/t/u group>", nullptr, nullptr, OPT_Link_Group, Option::GroupClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{nullptr, "<M group>", nullptr, nullptr, OPT_M_Group, Option::GroupClass, 0, 0, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<O group>", nullptr, nullptr, OPT_O_Group, Option::GroupClass, 0, 0, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<Preprocessor group>", nullptr, nullptr, OPT_Preprocessor_Group, Option::GroupClass, 0, 0, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<R group>", nullptr, nullptr, OPT_R_Group, Option::GroupClass, 0, 0, OPT_Diag_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<R (with value) group>", nullptr, nullptr, OPT_R_value_Group, Option::GroupClass, 0, 0, OPT_R_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<Static analyzer group>", nullptr, nullptr, OPT_StaticAnalyzer_Group, Option::GroupClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{nullptr, "<T group>", nullptr, nullptr, OPT_T_Group, Option::GroupClass, 0, 0, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<W group>", nullptr, nullptr, OPT_W_Group, Option::GroupClass, 0, 0, OPT_Diag_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<W (with value) group>", nullptr, nullptr, OPT_W_value_Group, Option::GroupClass, 0, 0, OPT_W_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "</M group>", nullptr, nullptr, OPT__SLASH_M_Group, Option::GroupClass, 0, 0, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "</volatile group>", nullptr, nullptr, OPT__SLASH_volatile_Group, Option::GroupClass, 0, 0, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<clang-cl options>", "CL.EXE COMPATIBILITY OPTIONS", nullptr, OPT_cl_Group, Option::GroupClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{nullptr, "<clang-cl compile-only options>", nullptr, nullptr, OPT_cl_compile_Group, Option::GroupClass, 0, 0, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<clang-cl ignored options>", nullptr, nullptr, OPT_cl_ignored_Group, Option::GroupClass, 0, 0, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<clang i group>", nullptr, nullptr, OPT_clang_i_Group, Option::GroupClass, 0, 0, OPT_i_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<clang ignored f group>", nullptr, nullptr, OPT_clang_ignored_f_Group, Option::GroupClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<clang_ignored_gcc_optimization_f_Group>", nullptr, nullptr, OPT_clang_ignored_gcc_optimization_f_Group, Option::GroupClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<clang legacy flags>", nullptr, nullptr, OPT_clang_ignored_legacy_options_Group, Option::GroupClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<clang ignored m group>", nullptr, nullptr, OPT_clang_ignored_m_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<d group>", nullptr, nullptr, OPT_d_Group, Option::GroupClass, 0, 0, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<f group>", nullptr, nullptr, OPT_f_Group, Option::GroupClass, 0, 0, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<f (clang-only) group>", nullptr, nullptr, OPT_f_clang_Group, Option::GroupClass, 0, 0, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<gN group>", nullptr, nullptr, OPT_gN_Group, Option::GroupClass, 0, 0, OPT_g_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<gTune group>", nullptr, nullptr, OPT_gTune_Group, Option::GroupClass, 0, 0, OPT_g_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<g group>", nullptr, nullptr, OPT_g_Group, Option::GroupClass, 0, 0, OPT_DebugInfo_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<g flags group>", nullptr, nullptr, OPT_g_flags_Group, Option::GroupClass, 0, 0, OPT_DebugInfo_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<gfortran group>", nullptr, nullptr, OPT_gfortran_Group, Option::GroupClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{nullptr, "<ggdbN group>", nullptr, nullptr, OPT_ggdbN_Group, Option::GroupClass, 0, 0, OPT_gN_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<i group>", nullptr, nullptr, OPT_i_Group, Option::GroupClass, 0, 0, OPT_IncludePath_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<clang internal options>", nullptr, nullptr, OPT_internal_Group, Option::GroupClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{nullptr, "<clang debug/development internal options>", "DEBUG/DEVELOPMENT OPTIONS", nullptr, OPT_internal_debug_Group, Option::GroupClass, 0, 0, OPT_internal_Group, OPT_INVALID, nullptr, nullptr},

{nullptr, "<clang driver internal options>", "DRIVER OPTIONS", nullptr, OPT_internal_driver_Group, Option::GroupClass, 0, 0, OPT_internal_Group, OPT_INVALID, nullptr, nullptr},

{nullptr, "<m group>", nullptr, nullptr, OPT_m_Group, Option::GroupClass, 0, 0, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<aarch64 features group>", nullptr, nullptr, OPT_m_aarch64_Features_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<amdgpu features group>", nullptr, nullptr, OPT_m_amdgpu_Features_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<arm features group>", nullptr, nullptr, OPT_m_arm_Features_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<hexagon features group>", nullptr, nullptr, OPT_m_hexagon_Features_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<hexagon features group>", nullptr, nullptr, OPT_m_hexagon_Features_HVX_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<m libc group>", nullptr, nullptr, OPT_m_libc_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<ppc features group>", nullptr, nullptr, OPT_m_ppc_Features_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<wasm features group>", nullptr, nullptr, OPT_m_wasm_Features_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<x86 features group>", nullptr, nullptr, OPT_m_x86_Features_Group, Option::GroupClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<opencl group>", nullptr, nullptr, OPT_opencl_Group, Option::GroupClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<pedantic group>", nullptr, nullptr, OPT_pedantic_Group, Option::GroupClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{nullptr, "<reserved libs group>", nullptr, nullptr, OPT_reserved_lib_Group, Option::GroupClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{nullptr, "<u group>", nullptr, nullptr, OPT_u_Group, Option::GroupClass, 0, 0, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},




{prefix_0, "<input>", nullptr, nullptr, OPT_INPUT, Option::InputClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_0, "<unknown>", nullptr, nullptr, OPT_UNKNOWN, Option::UnknownClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "###", "Print (but do not run) the commands to run for this compilation", nullptr, OPT__HASH_HASH_HASH, Option::FlagClass, 0, DriverOption | CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "?", "Display available options", nullptr, OPT__SLASH_QUESTION, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_help, nullptr, nullptr},

{prefix_1, "A-", nullptr, nullptr, OPT_A_DASH, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "add-plugin", "Use the named plugin action in addition to the default action", "<name>", OPT_add_plugin, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "AI", nullptr, nullptr, OPT__SLASH_AI, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "all-warnings", nullptr, nullptr, OPT__all_warnings, Option::FlagClass, 0, 0, OPT_INVALID, OPT_Wall, nullptr, nullptr},
{prefix_1, "all_load", nullptr, nullptr, OPT_all__load, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "allowable_client", nullptr, nullptr, OPT_allowable__client, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "analyze-auto", nullptr, nullptr, OPT__analyze_auto, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "analyze-function=", nullptr, nullptr, OPT_analyze_function_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_analyze_function, nullptr, nullptr},
{prefix_1, "analyze-function", "Run analysis on specific function (for C++ include parameters in name)", nullptr, OPT_analyze_function, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "analyze-", nullptr, nullptr, OPT__SLASH_analyze_, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "analyzer-checker-help", "Display the list of analyzer checkers that are available", nullptr, OPT_analyzer_checker_help, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-checker=", nullptr, nullptr, OPT_analyzer_checker_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_analyzer_checker, nullptr, nullptr},
{prefix_1, "analyzer-checker", "Choose analyzer checkers to enable", nullptr, OPT_analyzer_checker, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-config", "Choose analyzer options to enable", nullptr, OPT_analyzer_config, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-constraints=", nullptr, nullptr, OPT_analyzer_constraints_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_analyzer_constraints, nullptr, nullptr},
{prefix_1, "analyzer-constraints", "Source Code Analysis - Symbolic Constraint Engines", nullptr, OPT_analyzer_constraints, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-disable-all-checks", "Disable all static analyzer checks", nullptr, OPT_analyzer_disable_all_checks, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-disable-checker=", nullptr, nullptr, OPT_analyzer_disable_checker_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_analyzer_disable_checker, nullptr, nullptr},
{prefix_1, "analyzer-disable-checker", "Choose analyzer checkers to disable", nullptr, OPT_analyzer_disable_checker, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-disable-retry-exhausted", "Do not re-analyze paths leading to exhausted nodes with a different strategy (may decrease code coverage)", nullptr, OPT_analyzer_disable_retry_exhausted, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-display-progress", "Emit verbose output about the analyzer's progress", nullptr, OPT_analyzer_display_progress, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-eagerly-assume", "Eagerly assume the truth/falseness of some symbolic constraints", nullptr, OPT_analyzer_eagerly_assume, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-inline-max-stack-depth=", nullptr, nullptr, OPT_analyzer_inline_max_stack_depth_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_analyzer_inline_max_stack_depth, nullptr, nullptr},
{prefix_1, "analyzer-inline-max-stack-depth", "Bound on stack depth while inlining (4 by default)", nullptr, OPT_analyzer_inline_max_stack_depth, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-inlining-mode=", nullptr, nullptr, OPT_analyzer_inlining_mode_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_analyzer_inlining_mode, nullptr, nullptr},
{prefix_1, "analyzer-inlining-mode", "Specify the function selection heuristic used during inlining", nullptr, OPT_analyzer_inlining_mode, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-list-enabled-checkers", "Display the list of enabled analyzer checkers", nullptr, OPT_analyzer_list_enabled_checkers, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-max-loop", "The maximum number of times the analyzer will go through a loop", nullptr, OPT_analyzer_max_loop, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "analyzer-no-default-checks", nullptr, nullptr, OPT__analyzer_no_default_checks, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "analyzer-opt-analyze-headers", "Force the static analyzer to analyze functions defined in header files", nullptr, OPT_analyzer_opt_analyze_headers, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-opt-analyze-nested-blocks", "Analyze the definitions of blocks in addition to functions", nullptr, OPT_analyzer_opt_analyze_nested_blocks, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-output=", nullptr, nullptr, OPT_analyzer_output_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_analyzer_output, nullptr, nullptr},
{prefix_3, "analyzer-output", "Static analyzer report output format (html|plist|plist-multi-file|plist-html|text).", nullptr, OPT__analyzer_output, Option::JoinedOrSeparateClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-output", "Source Code Analysis - Output Options", nullptr, OPT_analyzer_output, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-purge=", nullptr, nullptr, OPT_analyzer_purge_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_analyzer_purge, nullptr, nullptr},
{prefix_1, "analyzer-purge", "Source Code Analysis - Dead Symbol Removal Frequency", nullptr, OPT_analyzer_purge, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-stats", "Print internal analyzer statistics.", nullptr, OPT_analyzer_stats, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-store=", nullptr, nullptr, OPT_analyzer_store_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_analyzer_store, nullptr, nullptr},
{prefix_1, "analyzer-store", "Source Code Analysis - Abstract Memory Store Models", nullptr, OPT_analyzer_store, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-viz-egraph-graphviz", "Display exploded graph using GraphViz", nullptr, OPT_analyzer_viz_egraph_graphviz, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyzer-viz-egraph-ubigraph", "Display exploded graph using Ubigraph", nullptr, OPT_analyzer_viz_egraph_ubigraph, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "analyze", "Run the static analyzer", nullptr, OPT__analyze, Option::FlagClass, 0, DriverOption | CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "analyze", "Run static analysis engine", nullptr, OPT_analyze, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_4, "ansi", nullptr, nullptr, OPT_ansi, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "arange_sections", "Emit DWARF .debug_arange sections", nullptr, OPT_arange_sections, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "arch:", "Set architecture for code generation", nullptr, OPT__SLASH_arch, Option::JoinedClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "arch_errors_fatal", nullptr, nullptr, OPT_arch__errors__fatal, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "arch_only", nullptr, nullptr, OPT_arch__only, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "arch", nullptr, nullptr, OPT_arch, Option::SeparateClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "arcmt-check", "Check for ARC migration issues that need manual handling", nullptr, OPT_arcmt_check, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "arcmt-migrate-emit-errors", "Emit ARC errors even if the migrator can fix them", nullptr, OPT_arcmt_migrate_emit_arc_errors, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "arcmt-migrate-report-output", "Output path for the plist report", nullptr, OPT_arcmt_migrate_report_output, Option::SeparateClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "arcmt-migrate", "Apply modifications and produces temporary files that conform to ARC", nullptr, OPT_arcmt_migrate, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "arcmt-modify", "Apply modifications to files to conform to ARC", nullptr, OPT_arcmt_modify, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "assemble", nullptr, nullptr, OPT__assemble, Option::FlagClass, 0, 0, OPT_INVALID, OPT_S, nullptr, nullptr},
{prefix_3, "assert=", nullptr, nullptr, OPT__assert_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_A, nullptr, nullptr},
{prefix_3, "assert", nullptr, nullptr, OPT__assert, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_A, nullptr, nullptr},
{prefix_1, "ast-dump-all", "Build ASTs and then debug dump them, forcing deserialization", nullptr, OPT_ast_dump_all, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ast-dump-filter", "Use with -ast-dump or -ast-print to dump/print only AST declaration nodes having a certain substring in a qualified name. Use -ast-list to list all filterable declaration node names.", "<dump_filter>", OPT_ast_dump_filter, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ast-dump-lookups", "Build ASTs and then debug dump their name lookup tables", nullptr, OPT_ast_dump_lookups, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ast-dump", "Build ASTs and then debug dump them", nullptr, OPT_ast_dump, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ast-list", "Build ASTs and print the list of declaration node qualified names", nullptr, OPT_ast_list, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ast-merge", "Merge the given AST file into the translation unit being compiled.", "<ast file>", OPT_ast_merge, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ast-print", "Build ASTs and then pretty-print them", nullptr, OPT_ast_print, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ast-view", "Build ASTs and view them with GraphViz", nullptr, OPT_ast_view, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "autocomplete=", nullptr, nullptr, OPT_autocomplete, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "aux-triple", "Auxiliary target triple.", nullptr, OPT_aux_triple, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "A", nullptr, nullptr, OPT_A, Option::JoinedOrSeparateClass, 0, RenderJoined, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "a", nullptr, nullptr, OPT_a, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "backend-option", "Additional arguments to forward to LLVM backend (during code gen)", nullptr, OPT_backend_option, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "bigobj", nullptr, nullptr, OPT__SLASH_bigobj, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "bind_at_load", nullptr, nullptr, OPT_bind__at__load, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "bootclasspath=", nullptr, nullptr, OPT__bootclasspath_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_fbootclasspath_EQ, nullptr, nullptr},
{prefix_3, "bootclasspath", nullptr, nullptr, OPT__bootclasspath, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_fbootclasspath_EQ, nullptr, nullptr},
{prefix_2, "Brepro-", "Emit an object file which cannot be reproduced over time", nullptr, OPT__SLASH_Brepro_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_mincremental_linker_compatible, nullptr, nullptr},

{prefix_2, "Brepro", "Emit an object file which can be reproduced over time", nullptr, OPT__SLASH_Brepro, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_mno_incremental_linker_compatible, nullptr, nullptr},

{prefix_1, "bundle_loader", nullptr, nullptr, OPT_bundle__loader, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "bundle", nullptr, nullptr, OPT_bundle, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "B", "Add <dir> to search path for binaries and object files used implicitly", "<dir>", OPT_B, Option::JoinedOrSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "b", nullptr, nullptr, OPT_b, Option::JoinedOrSeparateClass, 0, Unsupported, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "c-isystem", "Add directory to the C SYSTEM include search path", "<directory>", OPT_c_isystem, Option::JoinedOrSeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cc1as", nullptr, nullptr, OPT_cc1as, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "cc1", nullptr, nullptr, OPT_cc1, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ccc-arcmt-check", "Check for ARC migration issues that need manual handling", nullptr, OPT_ccc_arcmt_check, Option::FlagClass, 0, DriverOption | HelpHidden, OPT_internal_driver_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-arcmt-migrate", "Apply modifications and produces temporary files that conform to ARC", nullptr, OPT_ccc_arcmt_migrate, Option::SeparateClass, 0, DriverOption | HelpHidden, OPT_internal_driver_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-arcmt-modify", "Apply modifications to files to conform to ARC", nullptr, OPT_ccc_arcmt_modify, Option::FlagClass, 0, DriverOption | HelpHidden, OPT_internal_driver_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-gcc-name", "Name for native GCC compiler", "<gcc-path>", OPT_ccc_gcc_name, Option::SeparateClass, 0, DriverOption | HelpHidden, OPT_internal_driver_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-install-dir", "Simulate installation in the given directory", nullptr, OPT_ccc_install_dir, Option::SeparateClass, 0, DriverOption | HelpHidden | CoreOption, OPT_internal_debug_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-objcmt-migrate", "Apply modifications and produces temporary files to migrate to modern ObjC syntax", nullptr, OPT_ccc_objcmt_migrate, Option::SeparateClass, 0, DriverOption | HelpHidden, OPT_internal_driver_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-pch-is-pch", "Use lazy PCH for precompiled headers", nullptr, OPT_ccc_pch_is_pch, Option::FlagClass, 0, DriverOption | HelpHidden, OPT_internal_driver_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-pch-is-pth", "Use pretokenized headers for precompiled headers", nullptr, OPT_ccc_pch_is_pth, Option::FlagClass, 0, DriverOption | HelpHidden, OPT_internal_driver_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-print-bindings", "Show bindings of tools to actions", nullptr, OPT_ccc_print_bindings, Option::FlagClass, 0, DriverOption | HelpHidden | CoreOption, OPT_internal_debug_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-print-phases", "Dump list of actions to perform", nullptr, OPT_ccc_print_phases, Option::FlagClass, 0, DriverOption | HelpHidden | CoreOption, OPT_internal_debug_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ccc-", nullptr, nullptr, OPT_ccc_, Option::JoinedClass, 0, Unsupported | HelpHidden, OPT_internal_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "CC", "Include comments from within macros in preprocessed output", nullptr, OPT_CC, Option::FlagClass, 0, CC1Option, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cfg-add-implicit-dtors", "Add C++ implicit destructors to CFGs for all analyses", nullptr, OPT_analysis_CFGAddImplicitDtors, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "cgthreads", nullptr, nullptr, OPT__SLASH_cgthreads, Option::JoinedClass, 0, CLOption | DriverOption | HelpHidden, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "chain-include", "Include and chain a header file after turning it into PCH", "<file>", OPT_chain_include, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-denorms-are-zero", "OpenCL only. Allow denormals to be flushed to zero.", nullptr, OPT_cl_denorms_are_zero, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-ext=", "OpenCL only. Enable or disable OpenCL extensions. The argument is a comma-separated sequence of one or more extension names, each prefixed by '+' or '-'.", nullptr, OPT_cl_ext_EQ, Option::CommaJoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-fast-relaxed-math", "OpenCL only. Sets -cl-finite-math-only and -cl-unsafe-math-optimizations, and defines __FAST_RELAXED_MATH__.", nullptr, OPT_cl_fast_relaxed_math, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-finite-math-only", "OpenCL only. Allow floating-point optimizations that assume arguments and results are not NaNs or +-Inf.", nullptr, OPT_cl_finite_math_only, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-fp32-correctly-rounded-divide-sqrt", "OpenCL only. Specify that single precision floating-point divide and sqrt used in the program source are correctly rounded.", nullptr, OPT_cl_fp32_correctly_rounded_divide_sqrt, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-kernel-arg-info", "OpenCL only. Generate kernel argument metadata.", nullptr, OPT_cl_kernel_arg_info, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-mad-enable", "OpenCL only. Allow use of less precise MAD computations in the generated binary.", nullptr, OPT_cl_mad_enable, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-no-signed-zeros", "OpenCL only. Allow use of less precise no signed zeros computations in the generated binary.", nullptr, OPT_cl_no_signed_zeros, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-opt-disable", "OpenCL only. This option disables all optimizations. By default optimizations are enabled.", nullptr, OPT_cl_opt_disable, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-single-precision-constant", "OpenCL only. Treat double precision floating-point constant as single precision constant.", nullptr, OPT_cl_single_precision_constant, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-std=", "OpenCL language standard to compile for.", nullptr, OPT_cl_std_EQ, Option::JoinedClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, "cl,CL,cl1.1,CL1.1,cl1.2,CL1.2,cl2.0,CL2.0"},

{prefix_1, "cl-strict-aliasing", "OpenCL only. This option is added for compatibility with OpenCL 1.0.", nullptr, OPT_cl_strict_aliasing, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "cl-unsafe-math-optimizations", "OpenCL only. Allow unsafe floating-point optimizations.  Also implies -cl-no-signed-zeros and -cl-mad-enable.", nullptr, OPT_cl_unsafe_math_optimizations, Option::FlagClass, 0, CC1Option, OPT_opencl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "CLASSPATH=", nullptr, nullptr, OPT__CLASSPATH_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_fclasspath_EQ, nullptr, nullptr},
{prefix_3, "classpath=", nullptr, nullptr, OPT__classpath_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_fclasspath_EQ, nullptr, nullptr},
{prefix_3, "CLASSPATH", nullptr, nullptr, OPT__CLASSPATH, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_fclasspath_EQ, nullptr, nullptr},
{prefix_3, "classpath", nullptr, nullptr, OPT__classpath, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_fclasspath_EQ, nullptr, nullptr},
{prefix_1, "client_name", nullptr, nullptr, OPT_client__name, Option::JoinedOrSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "clr", nullptr, nullptr, OPT__SLASH_clr, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "code-completion-at=", nullptr, nullptr, OPT_code_completion_at_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_code_completion_at, nullptr, nullptr},
{prefix_1, "code-completion-at", "Dump code-completion information at a location", "<file>:<line>:<column>", OPT_code_completion_at, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "code-completion-brief-comments", "Include brief documentation comments in code-completion results.", nullptr, OPT_code_completion_brief_comments, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "code-completion-macros", "Include macros in code-completion results", nullptr, OPT_code_completion_macros, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "code-completion-patterns", "Include code patterns in code-completion results", nullptr, OPT_code_completion_patterns, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "combine", nullptr, nullptr, OPT_combine, Option::FlagClass, 0, DriverOption | Unsupported, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "comments-in-macros", nullptr, nullptr, OPT__comments_in_macros, Option::FlagClass, 0, 0, OPT_INVALID, OPT_CC, nullptr, nullptr},
{prefix_3, "comments", nullptr, nullptr, OPT__comments, Option::FlagClass, 0, 0, OPT_INVALID, OPT_C, nullptr, nullptr},
{prefix_1, "compatibility_version", nullptr, nullptr, OPT_compatibility__version, Option::JoinedOrSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "compile", nullptr, nullptr, OPT__compile, Option::FlagClass, 0, 0, OPT_INVALID, OPT_c, nullptr, nullptr},
{prefix_1, "compress-debug-sections=", "DWARF debug sections compression type", nullptr, OPT_compress_debug_sections_EQ, Option::JoinedClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "compress-debug-sections", "DWARF debug sections compression", nullptr, OPT_compress_debug_sections, Option::FlagClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "config-system-dir=", "System directory for configuration files", nullptr, OPT_config_system_dir_EQ, Option::JoinedClass, 0, DriverOption | HelpHidden, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "config-user-dir=", "User directory for configuration files", nullptr, OPT_config_user_dir_EQ, Option::JoinedClass, 0, DriverOption | HelpHidden, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "config", "Specifies configuration file", nullptr, OPT_config, Option::SeparateClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "constant-cfstrings", nullptr, nullptr, OPT__constant_cfstrings, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "coverage-cfg-checksum", "Emit CFG checksum for functions in .gcno files.", nullptr, OPT_coverage_cfg_checksum, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "coverage-data-file=", nullptr, nullptr, OPT_coverage_data_file_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_coverage_data_file, nullptr, nullptr},
{prefix_1, "coverage-data-file", "Emit coverage data to this filename.", nullptr, OPT_coverage_data_file, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "coverage-exit-block-before-body", "Emit the exit block before the body blocks in .gcno files.", nullptr, OPT_coverage_exit_block_before_body, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "coverage-no-function-names-in-data", "Emit function names in .gcda files.", nullptr, OPT_coverage_no_function_names_in_data, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "coverage-notes-file=", nullptr, nullptr, OPT_coverage_notes_file_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_coverage_notes_file, nullptr, nullptr},
{prefix_1, "coverage-notes-file", "Emit coverage notes to this filename.", nullptr, OPT_coverage_notes_file, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "coverage-version=", "Four-byte version string for gcov files.", nullptr, OPT_coverage_version_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "coverage", nullptr, nullptr, OPT_coverage, Option::FlagClass, 0, CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "cpp-precomp", nullptr, nullptr, OPT_cpp_precomp, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "cpp", nullptr, nullptr, OPT_cpp, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "cuda-compile-host-device", "Compile CUDA code for both host and device (default).  Has no effect on non-CUDA compilations.", nullptr, OPT_cuda_compile_host_device, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "cuda-device-only", "Compile CUDA code for device only", nullptr, OPT_cuda_device_only, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "cuda-gpu-arch=", "CUDA GPU architecture (e.g. sm_35).  May be specified more than once.", nullptr, OPT_cuda_gpu_arch_EQ, Option::JoinedClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "cuda-host-only", "Compile CUDA code for host only.  Has no effect on non-CUDA compilations.", nullptr, OPT_cuda_host_only, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "cuda-noopt-device-debug", "Enable device-side debug info generation. Disables ptxas optimizations.", nullptr, OPT_cuda_noopt_device_debug, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "cuda-path=", "CUDA installation path", nullptr, OPT_cuda_path_EQ, Option::JoinedClass, 0, 0, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "current_version", nullptr, nullptr, OPT_current__version, Option::JoinedOrSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "cxx-isystem", "Add directory to the C++ SYSTEM include search path", "<directory>", OPT_cxx_isystem, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "C", "Include comments in preprocessed output", nullptr, OPT_C, Option::FlagClass, 0, CC1Option, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "C", "Don't discard comments when preprocessing", nullptr, OPT__SLASH_C, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_C, nullptr, nullptr},

{prefix_1, "c", "Only run preprocess, compile, and assemble steps", nullptr, OPT_c, Option::FlagClass, 0, DriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "c", "Compile only", nullptr, OPT__SLASH_c, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_c, nullptr, nullptr},

{prefix_2, "d1reportAllClassLayout", "Dump record layout information", nullptr, OPT__SLASH_d1reportAllClassLayout, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fdump_record_layouts, nullptr, nullptr},

{prefix_2, "d2FastFail", nullptr, nullptr, OPT__SLASH_d2FastFail, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "d2Zi+", nullptr, nullptr, OPT__SLASH_d2Zi_PLUS, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "dA", nullptr, nullptr, OPT_dA, Option::FlagClass, 0, 0, OPT_d_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "dD", "Print macro definitions in -E mode in addition to normal output", nullptr, OPT_dD, Option::FlagClass, 0, CC1Option, OPT_d_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dead_strip", nullptr, nullptr, OPT_dead__strip, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "debug-forward-template-params", "Emit complete descriptions of template parameters in forward declarations", nullptr, OPT_debug_forward_template_params, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "debug-info-kind=", nullptr, nullptr, OPT_debug_info_kind_EQ, Option::JoinedClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "debug-info-macro", "Emit macro debug information", nullptr, OPT_debug_info_macro, Option::FlagClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "debug=", nullptr, nullptr, OPT__debug_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_g_Flag, nullptr, nullptr},
{prefix_1, "debugger-tuning=", nullptr, nullptr, OPT_debugger_tuning_EQ, Option::JoinedClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "debug", nullptr, nullptr, OPT__debug, Option::FlagClass, 0, 0, OPT_INVALID, OPT_g_Flag, nullptr, nullptr},
{prefix_3, "define-macro=", nullptr, nullptr, OPT__define_macro_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_D, nullptr, nullptr},
{prefix_3, "define-macro", nullptr, nullptr, OPT__define_macro, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_D, nullptr, nullptr},
{prefix_1, "defsym", "Define a value for a symbol", nullptr, OPT_defsym, Option::SeparateClass, 0, CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "dependencies", nullptr, nullptr, OPT__dependencies, Option::FlagClass, 0, 0, OPT_INVALID, OPT_M, nullptr, nullptr},
{prefix_1, "dependency-dot", "Filename to write DOT-formatted header dependencies to", nullptr, OPT_dependency_dot, Option::SeparateClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dependency-file", "Filename (or -) to write dependency output to", nullptr, OPT_dependency_file, Option::SeparateClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "dependent-lib=", "Add dependent library", nullptr, OPT_dependent_lib, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "detailed-preprocessing-record", "include a detailed record of preprocessing actions", nullptr, OPT_detailed_preprocessing_record, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "diagnostic-log-file", "Filename (or -) to log diagnostics to", nullptr, OPT_diagnostic_log_file, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "diagnostics:caret", "Enable caret and column diagnostics (on by default)", nullptr, OPT__SLASH_diagnostics_caret, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "diagnostics:classic", "Disable column and caret diagnostics", nullptr, OPT__SLASH_diagnostics_classic, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "diagnostics:column", "Disable caret diagnostics but keep column info", nullptr, OPT__SLASH_diagnostics_column, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "disable-free", "Disable freeing of memory on exit", nullptr, OPT_disable_free, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "disable-lifetime-markers", "Disable lifetime-markers emission even when optimizations are enabled", nullptr, OPT_disable_lifetimemarkers, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "disable-llvm-optzns", nullptr, nullptr, OPT_disable_llvm_optzns, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_disable_llvm_passes, nullptr, nullptr},
{prefix_1, "disable-llvm-passes", "Use together with -emit-llvm to get pristine LLVM IR from the frontend by not running any LLVM passes at all", nullptr, OPT_disable_llvm_passes, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "disable-llvm-verifier", "Don't run the LLVM IR verifier pass", nullptr, OPT_disable_llvm_verifier, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "disable-O0-optnone", "Disable adding the optnone attribute to functions at O0", nullptr, OPT_disable_O0_optnone, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "disable-objc-default-synthesize-properties", "disable the default synthesis of Objective-C properties", nullptr, OPT_disable_objc_default_synthesize_properties, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "disable-red-zone", "Do not emit code that uses the red zone.", nullptr, OPT_disable_red_zone, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "discard-value-names", "Discard value names in LLVM IR", nullptr, OPT_discard_value_names, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dI", "Print include directives in -E mode in addition to normal output", nullptr, OPT_dI, Option::FlagClass, 0, CC1Option, OPT_d_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dM", "Print macro definitions in -E mode instead of normal output", nullptr, OPT_dM, Option::FlagClass, 0, CC1Option, OPT_d_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "doc", nullptr, nullptr, OPT__SLASH_doc, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "driver-mode=", "Set the driver mode to either 'gcc', 'g++', 'cpp', or 'cl'", nullptr, OPT_driver_mode, Option::JoinedClass, 0, CoreOption | DriverOption | HelpHidden, OPT_internal_driver_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dump-coverage-mapping", "Dump the coverage mapping records, for testing", nullptr, OPT_dump_coverage_mapping, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dump-deserialized-decls", "Dump declarations that are deserialized from PCH, for testing", nullptr, OPT_dump_deserialized_pch_decls, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dump-raw-tokens", "Lex file in raw mode and dump raw tokens", nullptr, OPT_dump_raw_tokens, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dump-tokens", "Run preprocessor, dump internal rep of tokens", nullptr, OPT_dump_tokens, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dumpmachine", nullptr, nullptr, OPT_dumpmachine, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "dumpspecs", nullptr, nullptr, OPT_dumpspecs, Option::FlagClass, 0, Unsupported, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "dumpversion", nullptr, nullptr, OPT_dumpversion, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "dwarf-column-info", "Turn on column location information.", nullptr, OPT_dwarf_column_info, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dwarf-debug-flags", "The string to embed in the Dwarf debug flags record.", nullptr, OPT_dwarf_debug_flags, Option::SeparateClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dwarf-debug-producer", "The string to embed in the Dwarf debug AT_producer record.", nullptr, OPT_dwarf_debug_producer, Option::SeparateClass, 0, CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dwarf-explicit-import", "Generate explicit import from anonymous namespace to containing scope", nullptr, OPT_dwarf_explicit_import, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dwarf-ext-refs", "Generate debug info with external references to clang modules or precompiled headers", nullptr, OPT_dwarf_ext_refs, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "dwarf-version=", nullptr, nullptr, OPT_dwarf_version_EQ, Option::JoinedClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "dyld-prefix=", nullptr, nullptr, OPT__dyld_prefix_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "dyld-prefix", nullptr, nullptr, OPT__dyld_prefix, Option::SeparateClass, 0, 0, OPT_INVALID, OPT__dyld_prefix_EQ, nullptr, nullptr},
{prefix_1, "dylib_file", nullptr, nullptr, OPT_dylib__file, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "dylinker_install_name", nullptr, nullptr, OPT_dylinker__install__name, Option::JoinedOrSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "dylinker", nullptr, nullptr, OPT_dylinker, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "dynamiclib", nullptr, nullptr, OPT_dynamiclib, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "dynamic", nullptr, nullptr, OPT_dynamic, Option::FlagClass, 0, NoArgumentUnused, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "D", "Define <macro> to <value> (or 1 if <value> omitted)", "<macro>=<value>", OPT_D, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "D", "Define macro", "<macro[=value]>", OPT__SLASH_D, Option::JoinedOrSeparateClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_D, nullptr, nullptr},

{prefix_1, "d", nullptr, nullptr, OPT_d_Flag, Option::FlagClass, 0, 0, OPT_d_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "d", nullptr, nullptr, OPT_d_Joined, Option::JoinedClass, 0, 0, OPT_d_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "EB", nullptr, nullptr, OPT_EB, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mbig_endian, nullptr, nullptr},
{prefix_2, "EH", "Exception handling model", nullptr, OPT__SLASH_EH, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "EL", nullptr, nullptr, OPT_EL, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mlittle_endian, nullptr, nullptr},
{prefix_1, "emit-ast", "Emit Clang AST files for source inputs", nullptr, OPT_emit_ast, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-codegen-only", "Generate machine code, but discard output", nullptr, OPT_emit_codegen_only, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-html", "Output input source as HTML", nullptr, OPT_emit_html, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-llvm-bc", "Build ASTs then convert to LLVM, emit .bc file", nullptr, OPT_emit_llvm_bc, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-llvm-only", "Build ASTs and convert to LLVM, discarding output", nullptr, OPT_emit_llvm_only, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-llvm-uselists", "Preserve order of LLVM use-lists when serializing", nullptr, OPT_emit_llvm_uselists, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-llvm", "Use the LLVM representation for assembler and object files", nullptr, OPT_emit_llvm, Option::FlagClass, 0, CC1Option, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-module-interface", "Generate pre-compiled module file from a C++ module interface", nullptr, OPT_emit_module_interface, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-module", "Generate pre-compiled module file from a module map", nullptr, OPT_emit_module, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-obj", "Emit native object files", nullptr, OPT_emit_obj, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-pch", "Generate pre-compiled header file", nullptr, OPT_emit_pch, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "emit-pth", "Generate pre-tokenized header file", nullptr, OPT_emit_pth, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "enable-split-dwarf", "Use split dwarf/Fission", nullptr, OPT_enable_split_dwarf, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "encoding=", nullptr, nullptr, OPT__encoding_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_fencoding_EQ, nullptr, nullptr},
{prefix_3, "encoding", nullptr, nullptr, OPT__encoding, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_fencoding_EQ, nullptr, nullptr},
{prefix_3, "entry", nullptr, nullptr, OPT__entry, Option::FlagClass, 0, 0, OPT_INVALID, OPT_e, nullptr, nullptr},
{prefix_1, "Eonly", "Just run preprocessor, no output (for timings)", nullptr, OPT_Eonly, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "EP", "Disable linemarker output and preprocess to stdout", nullptr, OPT__SLASH_EP, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "error-on-deserialized-decl=", nullptr, nullptr, OPT_error_on_deserialized_pch_decl_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_error_on_deserialized_pch_decl, nullptr, nullptr},
{prefix_1, "error-on-deserialized-decl", "Emit error if a specific declaration is deserialized from PCH, for testing", nullptr, OPT_error_on_deserialized_pch_decl, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "errorReport", nullptr, nullptr, OPT__SLASH_errorReport, Option::JoinedClass, 0, CLOption | DriverOption | HelpHidden, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "execution-charset:", "Runtime encoding, supports only UTF-8", nullptr, OPT__SLASH_execution_charset, Option::JoinedClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_fexec_charset_EQ, nullptr, nullptr},

{prefix_1, "exported_symbols_list", nullptr, nullptr, OPT_exported__symbols__list, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "extdirs=", nullptr, nullptr, OPT__extdirs_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_fextdirs_EQ, nullptr, nullptr},
{prefix_3, "extdirs", nullptr, nullptr, OPT__extdirs, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_fextdirs_EQ, nullptr, nullptr},
{prefix_3, "extra-warnings", nullptr, nullptr, OPT__extra_warnings, Option::FlagClass, 0, 0, OPT_INVALID, OPT_W_Joined, nullptr, nullptr},
{prefix_1, "E", "Only run the preprocessor", nullptr, OPT_E, Option::FlagClass, 0, DriverOption | CC1Option, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "E", "Preprocess to stdout", nullptr, OPT__SLASH_E, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_E, nullptr, nullptr},

{prefix_1, "e", nullptr, nullptr, OPT_e, Option::JoinedOrSeparateClass, 0, 0, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "faccess-control", nullptr, nullptr, OPT_faccess_control, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "faddress-space-map-mangling=", "Set the mode for address space map based mangling; OpenCL testing purposes only", "<yes|no|target>", OPT_faddress_space_map_mangling_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "faggressive-function-elimination", nullptr, nullptr, OPT_aggressive_function_elimination_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "falign-commons", nullptr, nullptr, OPT_align_commons_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "falign-functions=", nullptr, nullptr, OPT_falign_functions_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "falign-functions", nullptr, nullptr, OPT_align_functions_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "falign-jumps=", nullptr, nullptr, OPT_falign_jumps_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "falign-jumps", nullptr, nullptr, OPT_align_jumps_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "falign-labels=", nullptr, nullptr, OPT_falign_labels_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "falign-labels", nullptr, nullptr, OPT_align_labels_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "falign-loops=", nullptr, nullptr, OPT_falign_loops_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "falign-loops", nullptr, nullptr, OPT_align_loops_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "faligned-alloc-unavailable", "Aligned allocation/deallocation functions are unavailable", nullptr, OPT_aligned_alloc_unavailable, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "faligned-allocation", "Enable C++17 aligned allocation functions", nullptr, OPT_faligned_allocation, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "faligned-new=", nullptr, nullptr, OPT_faligned_new_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "faligned-new", nullptr, nullptr, OPT_anonymous_14, Option::FlagClass, 0, 0, OPT_INVALID, OPT_faligned_allocation, nullptr, nullptr},
{prefix_1, "fall-intrinsics", nullptr, nullptr, OPT_all_intrinsics_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "fallback", "Fall back to cl.exe if clang-cl fails to compile", nullptr, OPT__SLASH_fallback, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fallow-editor-placeholders", "Treat editor placeholders as valid source code", nullptr, OPT_fallow_editor_placeholders, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fallow-half-arguments-and-returns", "Allow function arguments and returns of type half", nullptr, OPT_fallow_half_arguments_and_returns, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fallow-pch-with-compiler-errors", "Accept a PCH file that was created with compiler errors", nullptr, OPT_fallow_pch_with_errors, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fallow-unsupported", nullptr, nullptr, OPT_fallow_unsupported, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "faltivec", nullptr, nullptr, OPT_faltivec, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fansi-escape-codes", "Use ANSI escape codes for diagnostics", nullptr, OPT_fansi_escape_codes, Option::FlagClass, 0, CoreOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fapple-kext", "Use Apple's kernel extensions ABI", nullptr, OPT_fapple_kext, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fapple-pragma-pack", "Enable Apple gcc-compatible #pragma pack handling", nullptr, OPT_fapple_pragma_pack, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fapplication-extension", "Restrict code to those available for App Extensions", nullptr, OPT_fapplication_extension, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fasm-blocks", nullptr, nullptr, OPT_fasm_blocks, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fasm", nullptr, nullptr, OPT_fasm, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fassociative-math", nullptr, nullptr, OPT_fassociative_math, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fassume-sane-operator-new", nullptr, nullptr, OPT_fassume_sane_operator_new, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fastcp", nullptr, nullptr, OPT_fastcp, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fastf", nullptr, nullptr, OPT_fastf, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fast", nullptr, nullptr, OPT_fast, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fasynchronous-unwind-tables", nullptr, nullptr, OPT_fasynchronous_unwind_tables, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fauto-profile-accurate", nullptr, nullptr, OPT_fauto_profile_accurate, Option::FlagClass, 0, 0, OPT_f_Group, OPT_fprofile_sample_accurate, nullptr, nullptr},
{prefix_1, "fauto-profile=", nullptr, nullptr, OPT_fauto_profile_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_fprofile_sample_use_EQ, nullptr, nullptr},
{prefix_1, "fauto-profile", nullptr, nullptr, OPT_fauto_profile, Option::FlagClass, 0, 0, OPT_f_Group, OPT_fprofile_sample_use, nullptr, nullptr},
{prefix_1, "fautolink", nullptr, nullptr, OPT_fautolink, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fautomatic", nullptr, nullptr, OPT_automatic_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "favor", nullptr, nullptr, OPT__SLASH_favor, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "FA", "Output assembly code file during compilation", nullptr, OPT__SLASH_FA, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "FA", nullptr, nullptr, OPT__SLASH_FA_joined, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Fa", "Output assembly code to this file during compilation (with /FA)", "<file or directory>", OPT__SLASH_Fa, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fbackslash", nullptr, nullptr, OPT_backslash_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fbacktrace", nullptr, nullptr, OPT_backtrace_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fblas-matmul-limit=", nullptr, nullptr, OPT_fblas_matmul_limit_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fblocks-runtime-optional", "Weakly link in the blocks runtime", nullptr, OPT_fblocks_runtime_optional, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fblocks", "Enable the 'blocks' language feature", nullptr, OPT_fblocks, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fbootclasspath=", nullptr, nullptr, OPT_fbootclasspath_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fborland-extensions", "Accept non-standard constructs supported by the Borland compiler", nullptr, OPT_fborland_extensions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fbounds-check", nullptr, nullptr, OPT_bounds_check_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fbracket-depth=", nullptr, nullptr, OPT_fbracket_depth_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fbracket-depth", "Maximum nesting level for parentheses, brackets, and braces", nullptr, OPT_fbracket_depth, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fbranch-count-reg", nullptr, nullptr, OPT_branch_count_reg_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fbuild-session-file=", "Use the last modification time of <file> as the build session timestamp", "<file>", OPT_fbuild_session_file, Option::JoinedClass, 0, 0, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fbuild-session-timestamp=", "Time when the current build session started", "<time since Epoch in seconds>", OPT_fbuild_session_timestamp, Option::JoinedClass, 0, CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fbuiltin-module-map", "Load the clang builtins module map file.", nullptr, OPT_fbuiltin_module_map, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fbuiltin", nullptr, nullptr, OPT_fbuiltin, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcaller-saves", nullptr, nullptr, OPT_caller_saves_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcaret-diagnostics-max-lines", "Set the maximum number of source lines to show in a caret diagnostic", "<N>", OPT_fcaret_diagnostics_max_lines, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcaret-diagnostics", nullptr, nullptr, OPT_fcaret_diagnostics, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcheck-array-temporaries", nullptr, nullptr, OPT_check_array_temporaries_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcheck-new", nullptr, nullptr, OPT_fcheck_new_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcheck=", nullptr, nullptr, OPT_fcheck_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fclang-abi-compat=", "Attempt to match the ABI of Clang <version>", "<version>", OPT_fclang_abi_compat_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, "<major>.<minor>,latest"},

{prefix_1, "fclasspath=", nullptr, nullptr, OPT_fclasspath_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcoarray=", nullptr, nullptr, OPT_fcoarray_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcolor-diagnostics", "Use colors in diagnostics", nullptr, OPT_fcolor_diagnostics, Option::FlagClass, 0, CoreOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcomment-block-commands=", "Treat each comma separated argument in <arg> as a documentation comment block command", "<arg>", OPT_fcomment_block_commands, Option::CommaJoinedClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcommon", nullptr, nullptr, OPT_fcommon, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcompile-resource=", nullptr, nullptr, OPT_fcompile_resource_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fconcepts-ts", "Enable C++ Extensions for Concepts.", nullptr, OPT_fconcepts_ts, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fconst-strings", "Use a const qualified type for string literals in C and ObjC", nullptr, OPT_fconst_strings, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fconstant-cfstrings", nullptr, nullptr, OPT_fconstant_cfstrings, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fconstant-string-class=", nullptr, nullptr, OPT_fconstant_string_class_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fconstant-string-class", "Specify the class to use for constant Objective-C string objects.", "<class name>", OPT_fconstant_string_class, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fconstexpr-backtrace-limit=", nullptr, nullptr, OPT_fconstexpr_backtrace_limit_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fconstexpr-backtrace-limit", "Set the maximum number of entries to print in a constexpr evaluation backtrace (0 = no limit).", "<N>", OPT_fconstexpr_backtrace_limit, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fconstexpr-depth=", nullptr, nullptr, OPT_fconstexpr_depth_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fconstexpr-depth", "Maximum depth of recursive constexpr function calls", nullptr, OPT_fconstexpr_depth, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fconstexpr-steps=", nullptr, nullptr, OPT_fconstexpr_steps_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fconstexpr-steps", "Maximum number of steps in constexpr function evaluation", nullptr, OPT_fconstexpr_steps, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fconvert=", nullptr, nullptr, OPT_fconvert_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcoroutines-ts", "Enable support for the C++ Coroutines TS", nullptr, OPT_fcoroutines_ts, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcoverage-mapping", "Generate coverage mapping to enable code coverage analysis", nullptr, OPT_fcoverage_mapping, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcray-pointer", nullptr, nullptr, OPT_cray_pointer_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcreate-profile", nullptr, nullptr, OPT_fcreate_profile, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fcuda-allow-variadic-functions", "Allow variadic functions in CUDA device code.", nullptr, OPT_fcuda_allow_variadic_functions, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcuda-approx-transcendentals", "Use approximate transcendental functions", nullptr, OPT_fcuda_approx_transcendentals, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcuda-flush-denormals-to-zero", "Flush denormal floating point values to zero in CUDA device mode.", nullptr, OPT_fcuda_flush_denormals_to_zero, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcuda-include-gpubinary", "Incorporate CUDA device-side binary into host object file.", nullptr, OPT_fcuda_include_gpubinary, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcuda-is-device", "Generate code for CUDA device", nullptr, OPT_fcuda_is_device, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcxx-exceptions", "Enable C++ exceptions", nullptr, OPT_fcxx_exceptions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fcxx-modules", nullptr, nullptr, OPT_fcxx_modules, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "FC", nullptr, nullptr, OPT__SLASH_FC, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fd-lines-as-code", nullptr, nullptr, OPT_d_lines_as_code_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fd-lines-as-comments", nullptr, nullptr, OPT_d_lines_as_comments_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdata-sections", "Place each data in its own section (ELF Only)", nullptr, OPT_fdata_sections, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdebug-compilation-dir", "The compilation directory to embed in the debug info.", nullptr, OPT_fdebug_compilation_dir, Option::SeparateClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdebug-info-for-profiling", "Emit extra debug info to make sample profile more accurate.", nullptr, OPT_fdebug_info_for_profiling, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdebug-macro", "Emit macro debug information", nullptr, OPT_fdebug_macro, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdebug-pass-arguments", nullptr, nullptr, OPT_fdebug_pass_arguments, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdebug-pass-manager", "Prints debug information for the new pass manager", nullptr, OPT_fdebug_pass_manager, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdebug-pass-structure", nullptr, nullptr, OPT_fdebug_pass_structure, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdebug-prefix-map=", "remap file source paths in debug info", nullptr, OPT_fdebug_prefix_map_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdebug-types-section", "Place debug types in their own section (ELF Only)", nullptr, OPT_fdebug_types_section, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdebugger-cast-result-to-id", "Enable casting unknown expression results to id", nullptr, OPT_fdebugger_cast_result_to_id, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdebugger-objc-literal", "Enable special debugger support for Objective-C subscripting and literals", nullptr, OPT_fdebugger_objc_literal, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdebugger-support", "Enable special debugger support behavior", nullptr, OPT_fdebugger_support, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdeclspec", "Allow __declspec as a keyword", nullptr, OPT_fdeclspec, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdefault-calling-conv=", "Set default calling convention", nullptr, OPT_fdefault_calling_conv_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, "cdecl,fastcall,stdcall,vectorcall,regcall"},

{prefix_1, "fdefault-double-8", nullptr, nullptr, OPT_default_double_8_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdefault-inline", nullptr, nullptr, OPT_default_inline_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdefault-integer-8", nullptr, nullptr, OPT_default_integer_8_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdefault-real-8", nullptr, nullptr, OPT_default_real_8_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdefer-pop", nullptr, nullptr, OPT_anonymous_6, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdelayed-template-parsing", "Parse templated function definitions at the end of the translation unit", nullptr, OPT_fdelayed_template_parsing, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdelete-null-pointer-checks", nullptr, nullptr, OPT_delete_null_pointer_checks_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdenormal-fp-math=", nullptr, nullptr, OPT_fdenormal_fp_math_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdepfile-entry=", nullptr, nullptr, OPT_fdepfile_entry, Option::JoinedClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdeprecated-macro", "Defines the __DEPRECATED macro", nullptr, OPT_fdeprecated_macro, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdevirtualize-speculatively", nullptr, nullptr, OPT_devirtualize_speculatively_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdevirtualize", nullptr, nullptr, OPT_devirtualize_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdiagnostics-absolute-paths", "Print absolute paths in diagnostics", nullptr, OPT_fdiagnostics_absolute_paths, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdiagnostics-color=", nullptr, nullptr, OPT_fdiagnostics_color_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdiagnostics-color", nullptr, nullptr, OPT_fdiagnostics_color, Option::FlagClass, 0, CoreOption | DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdiagnostics-fixit-info", nullptr, nullptr, OPT_fdiagnostics_fixit_info, Option::FlagClass, 0, 0, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdiagnostics-format=", nullptr, nullptr, OPT_fdiagnostics_format_EQ, Option::JoinedClass, 0, 0, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdiagnostics-format", "Change diagnostic formatting to match IDE and command line tools", nullptr, OPT_fdiagnostics_format, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, "clang,msvc,msvc-fallback,vi"},

{prefix_1, "fdiagnostics-hotness-threshold=", "Prevent optimization remarks from being output if they do not have at least this profile count", "<number>", OPT_fdiagnostics_hotness_threshold_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdiagnostics-parseable-fixits", "Print fix-its in machine parseable form", nullptr, OPT_fdiagnostics_parseable_fixits, Option::FlagClass, 0, CoreOption | CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdiagnostics-print-source-range-info", "Print source range spans in numeric form", nullptr, OPT_fdiagnostics_print_source_range_info, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdiagnostics-show-category=", nullptr, nullptr, OPT_fdiagnostics_show_category_EQ, Option::JoinedClass, 0, 0, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdiagnostics-show-category", "Print diagnostic category", nullptr, OPT_fdiagnostics_show_category, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, "none,id,name"},

{prefix_1, "fdiagnostics-show-hotness", "Enable profile hotness information in diagnostic line", nullptr, OPT_fdiagnostics_show_hotness, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdiagnostics-show-location=", nullptr, nullptr, OPT_fdiagnostics_show_location_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdiagnostics-show-note-include-stack", "Display include stacks for diagnostic notes", nullptr, OPT_fdiagnostics_show_note_include_stack, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdiagnostics-show-option", "Print option name with mappable diagnostics", nullptr, OPT_fdiagnostics_show_option, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdiagnostics-show-template-tree", "Print a template comparison tree for differing templates", nullptr, OPT_fdiagnostics_show_template_tree, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdisable-module-hash", "Disable the module hash", nullptr, OPT_fdisable_module_hash, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdollar-ok", nullptr, nullptr, OPT_dollar_ok_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdollars-in-identifiers", "Allow '$' in identifiers", nullptr, OPT_fdollars_in_identifiers, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdouble-square-bracket-attributes", "Enable '[[]]' attributes in all C and C++ language modes", nullptr, OPT_fdouble_square_bracket_attributes, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdump-fortran-optimized", nullptr, nullptr, OPT_dump_fortran_optimized_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdump-fortran-original", nullptr, nullptr, OPT_dump_fortran_original_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdump-parse-tree", nullptr, nullptr, OPT_dump_parse_tree_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdump-record-layouts-simple", "Dump record layout information in a simple form used for testing", nullptr, OPT_fdump_record_layouts_simple, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdump-record-layouts", "Dump record layout information", nullptr, OPT_fdump_record_layouts, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdump-vtable-layouts", "Dump the layouts of all vtables that will be emitted in a translation unit", nullptr, OPT_fdump_vtable_layouts, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdwarf-directory-asm", nullptr, nullptr, OPT_fdwarf_directory_asm, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fdwarf-exceptions", "Use DWARF style exceptions", nullptr, OPT_fdwarf_exceptions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fdwarf2-cfi-asm", nullptr, nullptr, OPT_fdwarf2_cfi_asm, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Fd", nullptr, nullptr, OPT__SLASH_Fd, Option::JoinedClass, 0, CLOption | DriverOption | HelpHidden, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "felide-constructors", nullptr, nullptr, OPT_felide_constructors, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "feliminate-unused-debug-symbols", nullptr, nullptr, OPT_feliminate_unused_debug_symbols, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "feliminate-unused-debug-types", nullptr, nullptr, OPT_eliminate_unused_debug_types_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fembed-bitcode-marker", "Embed placeholder LLVM IR data as a marker", nullptr, OPT_fembed_bitcode_marker, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fembed_bitcode_EQ, "marker\0", nullptr},

{prefix_1, "fembed-bitcode=", "Embed LLVM bitcode (option: off, all, bitcode, marker)", "<option>", OPT_fembed_bitcode_EQ, Option::JoinedClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fembed-bitcode", "Embed LLVM IR bitcode as data", nullptr, OPT_fembed_bitcode, Option::FlagClass, 0, 0, OPT_f_Group, OPT_fembed_bitcode_EQ, "all\0", nullptr},

{prefix_1, "femit-all-decls", "Emit all declarations, even if unused", nullptr, OPT_femit_all_decls, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "femit-coverage-data", "Instrument the program to emit gcov coverage data when run.", nullptr, OPT_femit_coverage_data, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "femit-coverage-notes", "Emit a gcov coverage notes file when compiling.", nullptr, OPT_femit_coverage_notes, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "femulated-tls", "Use emutls functions to access thread_local variables", nullptr, OPT_femulated_tls, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fencode-extended-block-signature", "enable extended encoding of block type signature", nullptr, OPT_fencode_extended_block_signature, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fencoding=", nullptr, nullptr, OPT_fencoding_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ferror-limit=", nullptr, nullptr, OPT_ferror_limit_EQ, Option::JoinedClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ferror-limit", "Set the maximum number of errors to emit before stopping (0 = no limit).", "<N>", OPT_ferror_limit, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fexceptions", "Enable support for exception handling", nullptr, OPT_fexceptions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fexcess-precision=", nullptr, nullptr, OPT_fexcess_precision_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fexec-charset=", nullptr, nullptr, OPT_fexec_charset_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fexpensive-optimizations", nullptr, nullptr, OPT_anonymous_4, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fexperimental-isel", "Enables the experimental global instruction selector", nullptr, OPT_fexperimental_isel, Option::FlagClass, 0, 0, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fexperimental-new-pass-manager", "Enables an experimental new pass manager in LLVM.", nullptr, OPT_fexperimental_new_pass_manager, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fextdirs=", nullptr, nullptr, OPT_fextdirs_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fextended-identifiers", nullptr, nullptr, OPT_anonymous_8, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fexternal-blas", nullptr, nullptr, OPT_external_blas_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fexternc-nounwind", "Assume all functions with C linkage do not unwind", nullptr, OPT_fexternc_nounwind, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Fe", "Set output executable file or directory (ends in / or \\)", "<file or directory>", OPT__SLASH_Fe, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ff2c", nullptr, nullptr, OPT_f2c_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffake-address-space-map", "Use a fake address space map; OpenCL testing purposes only", nullptr, OPT_ffake_address_space_map, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ffast-math", "Allow aggressive, lossy floating-point optimizations", nullptr, OPT_ffast_math, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ffat-lto-objects", nullptr, nullptr, OPT_fat_lto_objects_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffine-grained-bitfield-accesses", "Use separate accesses for bitfields with legal widths and alignments.", nullptr, OPT_ffine_grained_bitfield_accesses, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ffinite-math-only", nullptr, nullptr, OPT_ffinite_math_only, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffixed-form", nullptr, nullptr, OPT_fixed_form_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffixed-line-length-", nullptr, nullptr, OPT_ffixed_line_length_VALUE, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffixed-r9", "Reserve the r9 register (ARM only)", nullptr, OPT_ffixed_r9, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ffixed-x18", "Reserve the x18 register (AArch64 only)", nullptr, OPT_ffixed_x18, Option::FlagClass, 0, 0, OPT_m_aarch64_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ffloat-store", nullptr, nullptr, OPT_float_store_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffor-scope", nullptr, nullptr, OPT_ffor_scope, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fforbid-guard-variables", "Emit an error if a C++ static local initializer would need a guard variable", nullptr, OPT_fforbid_guard_variables, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fforce-addr", nullptr, nullptr, OPT_force_addr, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffp-contract=", "Form fused FP ops (e.g. FMAs): fast (everywhere) | on (according to FP_CONTRACT pragma, default) | off (never fuse)", nullptr, OPT_ffp_contract, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, "fast,on,off"},

{prefix_1, "ffpe-trap=", nullptr, nullptr, OPT_ffpe_trap_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffree-form", nullptr, nullptr, OPT_free_form_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffree-line-length-", nullptr, nullptr, OPT_ffree_line_length_VALUE, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffreestanding", "Assert that the compilation takes place in a freestanding environment", nullptr, OPT_ffreestanding, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ffriend-injection", nullptr, nullptr, OPT_friend_injection_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffrontend-optimize", nullptr, nullptr, OPT_frontend_optimize_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffunction-attribute-list", nullptr, nullptr, OPT_function_attribute_list_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ffunction-sections", "Place each function in its own section (ELF Only)", nullptr, OPT_ffunction_sections, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fgcse-after-reload", nullptr, nullptr, OPT_gcse_after_reload_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fgcse-las", nullptr, nullptr, OPT_gcse_las_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fgcse-sm", nullptr, nullptr, OPT_gcse_sm_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fgcse", nullptr, nullptr, OPT_gcse_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fgnu-inline-asm", nullptr, nullptr, OPT_fgnu_inline_asm, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fgnu-keywords", "Allow GNU-extension keywords regardless of language standard", nullptr, OPT_fgnu_keywords, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fgnu-runtime", "Generate output compatible with the standard GNU Objective-C runtime", nullptr, OPT_fgnu_runtime, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fgnu89-inline", "Use the gnu89 inline semantics", nullptr, OPT_fgnu89_inline, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fgnu", nullptr, nullptr, OPT_gnu_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fheinous-gnu-extensions", nullptr, nullptr, OPT_fheinous_gnu_extensions, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fhonor-infinites", nullptr, nullptr, OPT_anonymous_10, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fhonor_infinities, nullptr, nullptr},
{prefix_1, "fhonor-infinities", nullptr, nullptr, OPT_fhonor_infinities, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fhonor-nans", nullptr, nullptr, OPT_fhonor_nans, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fhosted", nullptr, nullptr, OPT_fhosted, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fident", nullptr, nullptr, OPT_ident_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "filelist", nullptr, nullptr, OPT_filelist, Option::SeparateClass, 0, LinkerInput, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "filetype", "Specify the output file type ('asm', 'null', or 'obj')", nullptr, OPT_filetype, Option::SeparateClass, 0, CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fimplement-inlines", nullptr, nullptr, OPT_implement_inlines_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fimplicit-module-maps", "Implicitly search the file system for module map files.", nullptr, OPT_fimplicit_module_maps, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fimplicit-modules", nullptr, nullptr, OPT_fimplicit_modules, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fimplicit-none", nullptr, nullptr, OPT_implicit_none_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fimplicit-templates", nullptr, nullptr, OPT_implicit_templates_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finclude-default-header", "Include the default header file for OpenCL", nullptr, OPT_finclude_default_header, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "find-pch-source=", "When building a pch, try to find the input file in include directories, as if it had been included by the argument passed to this flag.", nullptr, OPT_find_pch_source_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "findirect-virtual-calls", nullptr, nullptr, OPT_anonymous_12, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fapple_kext, nullptr, nullptr},
{prefix_1, "finit-character=", nullptr, nullptr, OPT_finit_character_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finit-integer=", nullptr, nullptr, OPT_finit_integer_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finit-local-zero", nullptr, nullptr, OPT_init_local_zero_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finit-logical=", nullptr, nullptr, OPT_finit_logical_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finit-real=", nullptr, nullptr, OPT_finit_real_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finline-functions-called-once", nullptr, nullptr, OPT_inline_functions_called_once_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finline-functions", "Inline suitable functions", nullptr, OPT_finline_functions, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "finline-hint-functions", "Inline functions which are (explicitly or implicitly) marked inline", nullptr, OPT_finline_hint_functions, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "finline-limit=", nullptr, nullptr, OPT_finline_limit_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finline-limit", nullptr, nullptr, OPT_finline_limit_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finline-small-functions", nullptr, nullptr, OPT_inline_small_functions_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finline", nullptr, nullptr, OPT_finline, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finput-charset=", nullptr, nullptr, OPT_finput_charset_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "finstrument-function-entry-bare", "Instrument function entry only, after inlining, without arguments to the instrumentation call", nullptr, OPT_finstrument_function_entry_bare, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "finstrument-functions-after-inlining", "Like -finstrument-functions, but insert the calls after inlining", nullptr, OPT_finstrument_functions_after_inlining, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "finstrument-functions", "Generate calls to instrument function entry and exit", nullptr, OPT_finstrument_functions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "finteger-4-integer-8", nullptr, nullptr, OPT_integer_4_integer_8_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fintegrated-as", "Enable the integrated assembler", nullptr, OPT_fintegrated_as, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fintrinsic-modules-path", nullptr, nullptr, OPT_intrinsic_modules_path_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fipa-cp", nullptr, nullptr, OPT_ipa_cp_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fivopts", nullptr, nullptr, OPT_ivopts_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fix-only-warnings", "Apply fix-it advice only for warnings, not errors", nullptr, OPT_fix_only_warnings, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fix-what-you-can", "Apply fix-it advice even in the presence of unfixable errors", nullptr, OPT_fix_what_you_can, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fixit-recompile", "Apply fix-it changes and recompile", nullptr, OPT_fixit_recompile, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fixit-to-temporary", "Apply fix-it changes to temporary files", nullptr, OPT_fixit_to_temp, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fixit=", "Apply fix-it advice creating a file with the given suffix", nullptr, OPT_fixit_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fixit", "Apply fix-it advice to the input source", nullptr, OPT_fixit, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "FI", "Include file before parsing", nullptr, OPT__SLASH_FI, Option::JoinedOrSeparateClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_include, nullptr, nullptr},

{prefix_2, "Fi", "Set preprocess output file name (with /P)", "<file>", OPT__SLASH_Fi, Option::JoinedClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fjump-tables", nullptr, nullptr, OPT_fjump_tables, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fkeep-inline-functions", nullptr, nullptr, OPT_anonymous_26_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "flat_namespace", nullptr, nullptr, OPT_flat__namespace, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "flax-vector-conversions", nullptr, nullptr, OPT_flax_vector_conversions, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "flimit-debug-info", nullptr, nullptr, OPT_flimit_debug_info, Option::FlagClass, 0, CoreOption, OPT_INVALID, OPT_fno_standalone_debug, nullptr, nullptr},
{prefix_1, "flimited-precision=", nullptr, nullptr, OPT_flimited_precision_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "flto-jobs=", "Controls the backend parallelism of -flto=thin (default of 0 means the number of threads will be derived from the number of CPUs detected)", nullptr, OPT_flto_jobs_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "flto-unit", "Emit IR to support LTO unit features (CFI, whole program vtable opt)", nullptr, OPT_flto_unit, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "flto-visibility-public-std", "Use public LTO visibility for classes in std and stdext namespaces", nullptr, OPT_flto_visibility_public_std, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "flto=", "Set LTO mode to either 'full' or 'thin'", nullptr, OPT_flto_EQ, Option::JoinedClass, 0, CoreOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, "thin,full"},

{prefix_1, "flto", "Enable LTO in 'full' mode", nullptr, OPT_flto, Option::FlagClass, 0, CoreOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmacro-backtrace-limit=", nullptr, nullptr, OPT_fmacro_backtrace_limit_EQ, Option::JoinedClass, 0, DriverOption | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmacro-backtrace-limit", "Set the maximum number of entries to print in a macro expansion backtrace (0 = no limit).", "<N>", OPT_fmacro_backtrace_limit, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmath-errno", "Require math functions to indicate errors by setting errno", nullptr, OPT_fmath_errno, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmax-array-constructor=", nullptr, nullptr, OPT_fmax_array_constructor_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmax-errors=", nullptr, nullptr, OPT_fmax_errors_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmax-identifier-length", nullptr, nullptr, OPT_max_identifier_length_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmax-stack-var-size=", nullptr, nullptr, OPT_fmax_stack_var_size_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmax-subrecord-length=", nullptr, nullptr, OPT_fmax_subrecord_length_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmax-type-align=", "Specify the maximum alignment to enforce on pointers lacking an explicit alignment", nullptr, OPT_fmax_type_align_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmerge-all-constants", "Allow merging of constants", nullptr, OPT_fmerge_all_constants, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmerge-constants", nullptr, nullptr, OPT_merge_constants_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmerge-functions", "Permit merging of identical functions when optimizing.", nullptr, OPT_fmerge_functions, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmessage-length=", nullptr, nullptr, OPT_fmessage_length_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmessage-length", "Format message diagnostics so that they fit within N columns or fewer, when possible.", "<N>", OPT_fmessage_length, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodule-feature", "Enable <feature> in module map requires declarations", "<feature>", OPT_fmodule_feature, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodule-file-deps", nullptr, nullptr, OPT_fmodule_file_deps, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmodule-file=", "Specify the mapping of module name to precompiled module file, or load a module file if name is omitted.", "[<name>=]<file>", OPT_fmodule_file, Option::JoinedClass, 0, DriverOption | CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodule-format=", "Select the container format for clang modules and PCH. Supported options are 'raw' and 'obj'.", nullptr, OPT_fmodule_format_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodule-implementation-of", nullptr, nullptr, OPT_fmodule_implementation_of, Option::SeparateClass, 0, CC1Option, OPT_INVALID, OPT_fmodule_name_EQ, nullptr, nullptr},
{prefix_1, "fmodule-map-file-home-is-cwd", "Use the current working directory as the home directory of module maps specified by -fmodule-map-file=<FILE>", nullptr, OPT_fmodule_map_file_home_is_cwd, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodule-map-file=", "Load this module map file", "<file>", OPT_fmodule_map_file, Option::JoinedClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodule-maps", nullptr, nullptr, OPT_fmodule_maps, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fimplicit_module_maps, nullptr, nullptr},
{prefix_1, "fmodule-name=", "Specify the name of the module to build", "<name>", OPT_fmodule_name_EQ, Option::JoinedClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodule-name", nullptr, nullptr, OPT_fmodule_name, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_fmodule_name_EQ, nullptr, nullptr},
{prefix_1, "fmodule-private", nullptr, nullptr, OPT_module_private_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmodules-cache-path=", "Specify the module cache path", "<directory>", OPT_fmodules_cache_path, Option::JoinedClass, 0, DriverOption | CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-codegen", "Generate code for uses of this module that assumes an explicit object file will be built for the module", nullptr, OPT_fmodules_codegen, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-debuginfo", "Generate debug info for types in an object file built from this module and do not generate them elsewhere", nullptr, OPT_fmodules_debuginfo, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-decluse", "Require declaration of modules used within a module", nullptr, OPT_fmodules_decluse, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-disable-diagnostic-validation", "Disable validation of the diagnostic options when loading the module", nullptr, OPT_fmodules_disable_diagnostic_validation, Option::FlagClass, 0, CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-embed-all-files", "Embed the contents of all files read by this compilation into the produced module file.", nullptr, OPT_fmodules_embed_all_files, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-embed-file=", "Embed the contents of the specified file into the module file being compiled.", "<file>", OPT_fmodules_embed_file_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-hash-content", "Enable hashing the content of a module file", nullptr, OPT_fmodules_hash_content, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-ignore-macro=", "Ignore the definition of the given macro when building and loading modules", nullptr, OPT_fmodules_ignore_macro, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-local-submodule-visibility", "Enforce name visibility rules across submodules of the same top-level module.", nullptr, OPT_fmodules_local_submodule_visibility, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-prune-after=", "Specify the interval (in seconds) after which a module file will be considered unused", "<seconds>", OPT_fmodules_prune_after, Option::JoinedClass, 0, CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-prune-interval=", "Specify the interval (in seconds) between attempts to prune the module cache", "<seconds>", OPT_fmodules_prune_interval, Option::JoinedClass, 0, CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-search-all", "Search even non-imported modules to resolve references", nullptr, OPT_fmodules_search_all, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-strict-decluse", "Like -fmodules-decluse but requires all headers to be in modules", nullptr, OPT_fmodules_strict_decluse, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-ts", "Enable support for the C++ Modules TS", nullptr, OPT_fmodules_ts, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-user-build-path", "Specify the module user build path", "<directory>", OPT_fmodules_user_build_path, Option::SeparateClass, 0, DriverOption | CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-validate-once-per-build-session", "Don't verify input files for the modules if the module has been successfully validated or loaded during this build session", nullptr, OPT_fmodules_validate_once_per_build_session, Option::FlagClass, 0, CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules-validate-system-headers", "Validate the system headers that a module depends on when loading the module", nullptr, OPT_fmodules_validate_system_headers, Option::FlagClass, 0, CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodules", "Enable the 'modules' language feature", nullptr, OPT_fmodules, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmodulo-sched-allow-regmoves", nullptr, nullptr, OPT_modulo_sched_allow_regmoves_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmodulo-sched", nullptr, nullptr, OPT_modulo_sched_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fms-compatibility-version=", "Dot-separated value representing the Microsoft compiler version number to report in _MSC_VER (0 = don't define it (default))", nullptr, OPT_fms_compatibility_version, Option::JoinedClass, 0, CC1Option | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fms-compatibility", "Enable full Microsoft Visual C++ compatibility", nullptr, OPT_fms_compatibility, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fms-extensions", "Accept some non-standard constructs supported by the Microsoft compiler", nullptr, OPT_fms_extensions, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fms-memptr-rep=", nullptr, nullptr, OPT_fms_memptr_rep_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fms-volatile", nullptr, nullptr, OPT_fms_volatile, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmsc-version=", "Microsoft compiler version number to report in _MSC_VER (0 = don't define it (default))", nullptr, OPT_fmsc_version, Option::JoinedClass, 0, DriverOption | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fmudflapth", nullptr, nullptr, OPT_fmudflapth, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fmudflap", nullptr, nullptr, OPT_fmudflap, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Fm", nullptr, nullptr, OPT__SLASH_Fm, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fnative-half-arguments-and-returns", "Use the native __fp16 type for arguments and returns (and skip ABI-specific lowering)", nullptr, OPT_fnative_half_arguments_and_returns, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fnative-half-type", "Use the native half type for __fp16 instead of promoting to float", nullptr, OPT_fnative_half_type, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fnested-functions", nullptr, nullptr, OPT_fnested_functions, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fnew-alignment=", "Specifies the largest alignment guaranteed by '::operator new(size_t)'", "<align>", OPT_fnew_alignment_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fnew-alignment", nullptr, nullptr, OPT_anonymous_13, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_fnew_alignment_EQ, nullptr, nullptr},
{prefix_1, "fnext-runtime", nullptr, nullptr, OPT_fnext_runtime, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-access-control", "Disable C++ access control", nullptr, OPT_fno_access_control, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-aggressive-function-elimination", nullptr, nullptr, OPT_aggressive_function_elimination_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-align-commons", nullptr, nullptr, OPT_align_commons_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-align-functions", nullptr, nullptr, OPT_align_functions_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-align-jumps", nullptr, nullptr, OPT_align_jumps_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-align-labels", nullptr, nullptr, OPT_align_labels_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-align-loops", nullptr, nullptr, OPT_align_loops_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-aligned-allocation", nullptr, nullptr, OPT_fno_aligned_allocation, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-aligned-new", nullptr, nullptr, OPT_anonymous_15, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fno_aligned_allocation, nullptr, nullptr},
{prefix_1, "fno-all-intrinsics", nullptr, nullptr, OPT_all_intrinsics_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-allow-editor-placeholders", nullptr, nullptr, OPT_fno_allow_editor_placeholders, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-altivec", nullptr, nullptr, OPT_fno_altivec, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-apple-pragma-pack", nullptr, nullptr, OPT_fno_apple_pragma_pack, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-application-extension", nullptr, nullptr, OPT_fno_application_extension, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-asm-blocks", nullptr, nullptr, OPT_fno_asm_blocks, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-asm", nullptr, nullptr, OPT_fno_asm, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-associative-math", nullptr, nullptr, OPT_fno_associative_math, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-assume-sane-operator-new", "Don't assume that C++'s global operator new can't alias any pointer", nullptr, OPT_fno_assume_sane_operator_new, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-asynchronous-unwind-tables", nullptr, nullptr, OPT_fno_asynchronous_unwind_tables, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-auto-profile-accurate", nullptr, nullptr, OPT_fno_auto_profile_accurate, Option::FlagClass, 0, 0, OPT_f_Group, OPT_fno_profile_sample_accurate, nullptr, nullptr},
{prefix_1, "fno-auto-profile", nullptr, nullptr, OPT_fno_auto_profile, Option::FlagClass, 0, 0, OPT_f_Group, OPT_fno_profile_sample_use, nullptr, nullptr},
{prefix_1, "fno-autolink", "Disable generation of linker directives for automatic library linking", nullptr, OPT_fno_autolink, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-automatic", nullptr, nullptr, OPT_automatic_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-backslash", nullptr, nullptr, OPT_backslash_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-backtrace", nullptr, nullptr, OPT_backtrace_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-bitfield-type-align", "Ignore bit-field types when aligning structures", nullptr, OPT_fno_bitfield_type_align, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-blocks", nullptr, nullptr, OPT_fno_blocks, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-borland-extensions", nullptr, nullptr, OPT_fno_borland_extensions, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-bounds-check", nullptr, nullptr, OPT_bounds_check_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-branch-count-reg", nullptr, nullptr, OPT_branch_count_reg_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-builtin-", "Disable implicit builtin knowledge of a specific function", nullptr, OPT_fno_builtin_, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-builtin", "Disable implicit builtin knowledge of functions", nullptr, OPT_fno_builtin, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-caller-saves", nullptr, nullptr, OPT_caller_saves_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-caret-diagnostics", nullptr, nullptr, OPT_fno_caret_diagnostics, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-check-array-temporaries", nullptr, nullptr, OPT_check_array_temporaries_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-check-new", nullptr, nullptr, OPT_fcheck_new_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-color-diagnostics", nullptr, nullptr, OPT_fno_color_diagnostics, Option::FlagClass, 0, CoreOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-common", "Compile common globals like normal definitions", nullptr, OPT_fno_common, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-const-strings", "Don't use a const qualified type for string literals in C and ObjC", nullptr, OPT_fno_const_strings, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-constant-cfstrings", "Disable creation of CodeFoundation-type constant strings", nullptr, OPT_fno_constant_cfstrings, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-coroutines-ts", nullptr, nullptr, OPT_fno_coroutines_ts, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-coverage-mapping", "Disable code coverage analysis", nullptr, OPT_fno_coverage_mapping, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-crash-diagnostics", "Disable auto-generation of preprocessed source files and a script for reproduction during a clang crash", nullptr, OPT_fno_crash_diagnostics, Option::FlagClass, 0, NoArgumentUnused, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-cray-pointer", nullptr, nullptr, OPT_cray_pointer_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-cuda-approx-transcendentals", nullptr, nullptr, OPT_fno_cuda_approx_transcendentals, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-cuda-flush-denormals-to-zero", nullptr, nullptr, OPT_fno_cuda_flush_denormals_to_zero, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-cuda-host-device-constexpr", "Don't treat unattributed constexpr functions as __host__ __device__.", nullptr, OPT_fno_cuda_host_device_constexpr, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-cxx-exceptions", nullptr, nullptr, OPT_fno_cxx_exceptions, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-cxx-modules", nullptr, nullptr, OPT_fno_cxx_modules, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-d-lines-as-code", nullptr, nullptr, OPT_d_lines_as_code_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-d-lines-as-comments", nullptr, nullptr, OPT_d_lines_as_comments_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-data-sections", nullptr, nullptr, OPT_fno_data_sections, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-debug-info-for-profiling", "Do not emit extra debug info for sample profiler.", nullptr, OPT_fno_debug_info_for_profiling, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-debug-macro", "Do not emit macro debug information", nullptr, OPT_fno_debug_macro, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-debug-pass-manager", "Disables debug printing for the new pass manager", nullptr, OPT_fno_debug_pass_manager, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-debug-types-section", nullptr, nullptr, OPT_fno_debug_types_section, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-declspec", "Disallow __declspec as a keyword", nullptr, OPT_fno_declspec, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-default-double-8", nullptr, nullptr, OPT_default_double_8_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-default-inline", nullptr, nullptr, OPT_default_inline_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-default-integer-8", nullptr, nullptr, OPT_default_integer_8_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-default-real-8", nullptr, nullptr, OPT_default_real_8_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-defer-pop", nullptr, nullptr, OPT_anonymous_7, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-delayed-template-parsing", "Disable delayed template parsing", nullptr, OPT_fno_delayed_template_parsing, Option::FlagClass, 0, DriverOption | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-delete-null-pointer-checks", nullptr, nullptr, OPT_delete_null_pointer_checks_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-deprecated-macro", "Undefines the __DEPRECATED macro", nullptr, OPT_fno_deprecated_macro, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-devirtualize-speculatively", nullptr, nullptr, OPT_devirtualize_speculatively_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-devirtualize", nullptr, nullptr, OPT_devirtualize_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-diagnostics-color", nullptr, nullptr, OPT_fno_diagnostics_color, Option::FlagClass, 0, CoreOption | DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-diagnostics-fixit-info", "Do not include fixit information in diagnostics", nullptr, OPT_fno_diagnostics_fixit_info, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-diagnostics-show-hotness", nullptr, nullptr, OPT_fno_diagnostics_show_hotness, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-diagnostics-show-note-include-stack", nullptr, nullptr, OPT_fno_diagnostics_show_note_include_stack, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-diagnostics-show-option", nullptr, nullptr, OPT_fno_diagnostics_show_option, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-diagnostics-use-presumed-location", "Ignore #line directives when displaying diagnostic locations", nullptr, OPT_fno_diagnostics_use_presumed_location, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-dollar-ok", nullptr, nullptr, OPT_dollar_ok_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-dollars-in-identifiers", "Disallow '$' in identifiers", nullptr, OPT_fno_dollars_in_identifiers, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-double-square-bracket-attributes", "Disable '[[]]' attributes in all C and C++ language modes", nullptr, OPT_fno_double_square_bracket_attributes, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-dump-fortran-optimized", nullptr, nullptr, OPT_dump_fortran_optimized_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-dump-fortran-original", nullptr, nullptr, OPT_dump_fortran_original_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-dump-parse-tree", nullptr, nullptr, OPT_dump_parse_tree_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-dwarf-directory-asm", nullptr, nullptr, OPT_fno_dwarf_directory_asm, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-dwarf2-cfi-asm", nullptr, nullptr, OPT_fno_dwarf2_cfi_asm, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-elide-constructors", "Disable C++ copy constructor elision", nullptr, OPT_fno_elide_constructors, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-elide-type", "Do not elide types when printing diagnostics", nullptr, OPT_fno_elide_type, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-eliminate-unused-debug-symbols", nullptr, nullptr, OPT_fno_eliminate_unused_debug_symbols, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-eliminate-unused-debug-types", nullptr, nullptr, OPT_eliminate_unused_debug_types_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-emulated-tls", nullptr, nullptr, OPT_fno_emulated_tls, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-exceptions", nullptr, nullptr, OPT_fno_exceptions, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-expensive-optimizations", nullptr, nullptr, OPT_anonymous_5, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-experimental-isel", "Disables the experimental global instruction selector", nullptr, OPT_fno_experimental_isel, Option::FlagClass, 0, 0, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-experimental-new-pass-manager", "Disables an experimental new pass manager in LLVM.", nullptr, OPT_fno_experimental_new_pass_manager, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-extended-identifiers", nullptr, nullptr, OPT_anonymous_9, Option::FlagClass, 0, Unsupported, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-external-blas", nullptr, nullptr, OPT_external_blas_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-f2c", nullptr, nullptr, OPT_f2c_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-fast-math", nullptr, nullptr, OPT_fno_fast_math, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-fat-lto-objects", nullptr, nullptr, OPT_fat_lto_objects_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-fine-grained-bitfield-accesses", "Use large-integer access for consecutive bitfield runs.", nullptr, OPT_fno_fine_grained_bitfield_accesses, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-finite-math-only", nullptr, nullptr, OPT_fno_finite_math_only, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-fixed-form", nullptr, nullptr, OPT_fixed_form_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-float-store", nullptr, nullptr, OPT_float_store_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-for-scope", nullptr, nullptr, OPT_fno_for_scope, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-free-form", nullptr, nullptr, OPT_free_form_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-friend-injection", nullptr, nullptr, OPT_friend_injection_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-frontend-optimize", nullptr, nullptr, OPT_frontend_optimize_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-function-attribute-list", nullptr, nullptr, OPT_function_attribute_list_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-function-sections", nullptr, nullptr, OPT_fno_function_sections, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-gcse-after-reload", nullptr, nullptr, OPT_gcse_after_reload_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-gcse-las", nullptr, nullptr, OPT_gcse_las_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-gcse-sm", nullptr, nullptr, OPT_gcse_sm_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-gcse", nullptr, nullptr, OPT_gcse_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-gnu-inline-asm", "Disable GNU style inline asm", nullptr, OPT_fno_gnu_inline_asm, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-gnu-keywords", nullptr, nullptr, OPT_fno_gnu_keywords, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-gnu89-inline", nullptr, nullptr, OPT_fno_gnu89_inline, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-gnu", nullptr, nullptr, OPT_gnu_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-honor-infinites", nullptr, nullptr, OPT_anonymous_11, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fno_honor_infinities, nullptr, nullptr},
{prefix_1, "fno-honor-infinities", nullptr, nullptr, OPT_fno_honor_infinities, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-honor-nans", nullptr, nullptr, OPT_fno_honor_nans, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-ident", nullptr, nullptr, OPT_ident_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-implement-inlines", nullptr, nullptr, OPT_implement_inlines_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-implicit-module-maps", nullptr, nullptr, OPT_fno_implicit_module_maps, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-implicit-modules", nullptr, nullptr, OPT_fno_implicit_modules, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-implicit-none", nullptr, nullptr, OPT_implicit_none_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-implicit-templates", nullptr, nullptr, OPT_implicit_templates_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-init-local-zero", nullptr, nullptr, OPT_init_local_zero_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-inline-functions-called-once", nullptr, nullptr, OPT_inline_functions_called_once_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-inline-functions", nullptr, nullptr, OPT_fno_inline_functions, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-inline-limit", nullptr, nullptr, OPT_finline_limit_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-inline-small-functions", nullptr, nullptr, OPT_inline_small_functions_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-inline", nullptr, nullptr, OPT_fno_inline, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-integer-4-integer-8", nullptr, nullptr, OPT_integer_4_integer_8_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-integrated-as", "Disable the integrated assembler", nullptr, OPT_fno_integrated_as, Option::FlagClass, 0, CC1Option | DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-intrinsic-modules-path", nullptr, nullptr, OPT_intrinsic_modules_path_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-ipa-cp", nullptr, nullptr, OPT_ipa_cp_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-ivopts", nullptr, nullptr, OPT_ivopts_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-jump-tables", "Do not use jump tables for lowering switches", nullptr, OPT_fno_jump_tables, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-keep-inline-functions", nullptr, nullptr, OPT_anonymous_26_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-lax-vector-conversions", "Disallow implicit conversions between vectors with a different number of elements or different element types", nullptr, OPT_fno_lax_vector_conversions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-limit-debug-info", nullptr, nullptr, OPT_fno_limit_debug_info, Option::FlagClass, 0, CoreOption, OPT_INVALID, OPT_fstandalone_debug, nullptr, nullptr},
{prefix_1, "fno-lto-unit", nullptr, nullptr, OPT_fno_lto_unit, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-lto", "Disable LTO mode (default)", nullptr, OPT_fno_lto, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-math-builtin", "Disable implicit builtin knowledge of math functions", nullptr, OPT_fno_math_builtin, Option::FlagClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-math-errno", nullptr, nullptr, OPT_fno_math_errno, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-max-identifier-length", nullptr, nullptr, OPT_max_identifier_length_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-max-type-align", nullptr, nullptr, OPT_fno_max_type_align, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-merge-all-constants", "Disallow merging of constants", nullptr, OPT_fno_merge_all_constants, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-merge-constants", nullptr, nullptr, OPT_merge_constants_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-module-file-deps", nullptr, nullptr, OPT_fno_module_file_deps, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-module-maps", nullptr, nullptr, OPT_fno_module_maps, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fno_implicit_module_maps, nullptr, nullptr},
{prefix_1, "fno-module-private", nullptr, nullptr, OPT_module_private_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-modules-decluse", nullptr, nullptr, OPT_fno_modules_decluse, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-modules-error-recovery", "Do not automatically import modules for error recovery", nullptr, OPT_fno_modules_error_recovery, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-modules-global-index", "Do not automatically generate or update the global module index", nullptr, OPT_fno_modules_global_index, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-modules-search-all", nullptr, nullptr, OPT_fno_modules_search_all, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-modules", nullptr, nullptr, OPT_fno_modules, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-modulo-sched-allow-regmoves", nullptr, nullptr, OPT_modulo_sched_allow_regmoves_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-modulo-sched", nullptr, nullptr, OPT_modulo_sched_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-ms-compatibility", nullptr, nullptr, OPT_fno_ms_compatibility, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-ms-extensions", nullptr, nullptr, OPT_fno_ms_extensions, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-non-call-exceptions", nullptr, nullptr, OPT_non_call_exceptions_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-objc-arc-exceptions", nullptr, nullptr, OPT_fno_objc_arc_exceptions, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-objc-arc", nullptr, nullptr, OPT_fno_objc_arc, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-objc-exceptions", nullptr, nullptr, OPT_fno_objc_exceptions, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-objc-infer-related-result-type", "do not infer Objective-C related result type based on method family", nullptr, OPT_fno_objc_infer_related_result_type, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-objc-legacy-dispatch", nullptr, nullptr, OPT_fno_objc_legacy_dispatch, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-objc-nonfragile-abi", nullptr, nullptr, OPT_fno_objc_nonfragile_abi, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-objc-weak", nullptr, nullptr, OPT_fno_objc_weak, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-omit-frame-pointer", nullptr, nullptr, OPT_fno_omit_frame_pointer, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-openmp-simd", "Disable OpenMP code for SIMD-based constructs.", nullptr, OPT_fno_openmp_simd, Option::FlagClass, 0, CC1Option | NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-openmp", nullptr, nullptr, OPT_fno_openmp, Option::FlagClass, 0, NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-operator-names", "Do not treat C++ operator name keywords as synonyms for operators", nullptr, OPT_fno_operator_names, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-optimize-sibling-calls", nullptr, nullptr, OPT_fno_optimize_sibling_calls, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-pack-derived", nullptr, nullptr, OPT_pack_derived_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-pack-struct", nullptr, nullptr, OPT_fno_pack_struct, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-pascal-strings", nullptr, nullptr, OPT_fno_pascal_strings, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-pch-timestamp", "Disable inclusion of timestamp in precompiled headers", nullptr, OPT_fno_pch_timestamp, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-peel-loops", nullptr, nullptr, OPT_peel_loops_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-permissive", nullptr, nullptr, OPT_permissive_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-PIC", nullptr, nullptr, OPT_fno_PIC, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-pic", nullptr, nullptr, OPT_fno_pic, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-PIE", nullptr, nullptr, OPT_fno_PIE, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-pie", nullptr, nullptr, OPT_fno_pie, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-plt", "Do not use the PLT to make function calls", nullptr, OPT_fno_plt, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-prefetch-loop-arrays", nullptr, nullptr, OPT_prefetch_loop_arrays_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-preserve-as-comments", "Do not preserve comments in inline assembly", nullptr, OPT_fno_preserve_as_comments, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-printf", nullptr, nullptr, OPT_printf_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-profile-arcs", nullptr, nullptr, OPT_fno_profile_arcs, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-profile-correction", nullptr, nullptr, OPT_profile_correction_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-profile-generate-sampling", nullptr, nullptr, OPT_profile_generate_sampling_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-profile-generate", "Disable generation of profile instrumentation.", nullptr, OPT_fno_profile_generate, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-profile-instr-generate", "Disable generation of profile instrumentation.", nullptr, OPT_fno_profile_instr_generate, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-profile-instr-use", "Disable using instrumentation data for profile-guided optimization", nullptr, OPT_fno_profile_instr_use, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-profile-reusedist", nullptr, nullptr, OPT_profile_reusedist_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-profile-sample-accurate", nullptr, nullptr, OPT_fno_profile_sample_accurate, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-profile-sample-use", nullptr, nullptr, OPT_fno_profile_sample_use, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-profile-use", nullptr, nullptr, OPT_fno_profile_use, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fno_profile_instr_use, nullptr, nullptr},
{prefix_1, "fno-profile-values", nullptr, nullptr, OPT_profile_values_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-profile", nullptr, nullptr, OPT_profile_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-protect-parens", nullptr, nullptr, OPT_protect_parens_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-range-check", nullptr, nullptr, OPT_range_check_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-real-4-real-10", nullptr, nullptr, OPT_real_4_real_10_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-real-4-real-16", nullptr, nullptr, OPT_real_4_real_16_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-real-4-real-8", nullptr, nullptr, OPT_real_4_real_8_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-real-8-real-10", nullptr, nullptr, OPT_real_8_real_10_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-real-8-real-16", nullptr, nullptr, OPT_real_8_real_16_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-real-8-real-4", nullptr, nullptr, OPT_real_8_real_4_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-realloc-lhs", nullptr, nullptr, OPT_realloc_lhs_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-reciprocal-math", nullptr, nullptr, OPT_fno_reciprocal_math, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-recursive", nullptr, nullptr, OPT_recursive_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-regs-graph", nullptr, nullptr, OPT_regs_graph_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-relaxed-template-template-args", nullptr, nullptr, OPT_fno_relaxed_template_template_args, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-rename-registers", nullptr, nullptr, OPT_rename_registers_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-reorder-blocks", nullptr, nullptr, OPT_reorder_blocks_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-repack-arrays", nullptr, nullptr, OPT_repack_arrays_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-reroll-loops", "Turn off loop reroller", nullptr, OPT_fno_reroll_loops, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-rewrite-imports", nullptr, nullptr, OPT_fno_rewrite_imports, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-rewrite-includes", nullptr, nullptr, OPT_fno_rewrite_includes, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-ripa", nullptr, nullptr, OPT_ripa_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-ropi", nullptr, nullptr, OPT_fno_ropi, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-rounding-math", nullptr, nullptr, OPT_rounding_math_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-rtlib-add-rpath", "Do not add -rpath with architecture-specific resource directory to the linker flags", nullptr, OPT_fno_rtlib_add_rpath, Option::FlagClass, 0, NoArgumentUnused, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-rtti-data", "Control emission of RTTI data", nullptr, OPT_fno_rtti_data, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-rtti", "Disable generation of rtti information", nullptr, OPT_fno_rtti, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-rwpi", nullptr, nullptr, OPT_fno_rwpi, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-sanitize-address-use-after-scope", "Disable use-after-scope detection in AddressSanitizer", nullptr, OPT_fno_sanitize_address_use_after_scope, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-blacklist", "Don't use blacklist file for sanitizers", nullptr, OPT_fno_sanitize_blacklist, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-cfi-cross-dso", "Disable control flow integrity (CFI) checks for cross-DSO calls.", nullptr, OPT_fno_sanitize_cfi_cross_dso, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-coverage=", "Disable specified features of coverage instrumentation for Sanitizers", nullptr, OPT_fno_sanitize_coverage, Option::CommaJoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, "func,bb,edge,indirect-calls,trace-bb,trace-cmp,trace-div,trace-gep,8bit-counters,trace-pc,trace-pc-guard,no-prune,inline-8bit-counters"},

{prefix_1, "fno-sanitize-memory-track-origins", "Disable origins tracking in MemorySanitizer", nullptr, OPT_fno_sanitize_memory_track_origins, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-memory-use-after-dtor", "Disable use-after-destroy detection in MemorySanitizer", nullptr, OPT_fno_sanitize_memory_use_after_dtor, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-minimal-runtime", nullptr, nullptr, OPT_fno_sanitize_minimal_runtime, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-sanitize-recover=", "Disable recovery for specified sanitizers", nullptr, OPT_fno_sanitize_recover_EQ, Option::CommaJoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-recover", nullptr, nullptr, OPT_fno_sanitize_recover, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-sanitize-stats", "Disable sanitizer statistics gathering.", nullptr, OPT_fno_sanitize_stats, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-thread-atomics", "Disable atomic operations instrumentation in ThreadSanitizer", nullptr, OPT_fno_sanitize_thread_atomics, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-thread-func-entry-exit", "Disable function entry/exit instrumentation in ThreadSanitizer", nullptr, OPT_fno_sanitize_thread_func_entry_exit, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-thread-memory-access", "Disable memory access instrumentation in ThreadSanitizer", nullptr, OPT_fno_sanitize_thread_memory_access, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-trap=", "Disable trapping for specified sanitizers", nullptr, OPT_fno_sanitize_trap_EQ, Option::CommaJoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sanitize-undefined-trap-on-error", nullptr, nullptr, OPT_fno_sanitize_undefined_trap_on_error, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-sanitize=", nullptr, nullptr, OPT_fno_sanitize_EQ, Option::CommaJoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-save-optimization-record", nullptr, nullptr, OPT_fno_save_optimization_record, Option::FlagClass, 0, NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-schedule-insns2", nullptr, nullptr, OPT_schedule_insns2_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-schedule-insns", nullptr, nullptr, OPT_schedule_insns_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-second-underscore", nullptr, nullptr, OPT_second_underscore_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-see", nullptr, nullptr, OPT_see_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-short-enums", nullptr, nullptr, OPT_fno_short_enums, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-short-wchar", "Force wchar_t to be an unsigned int", nullptr, OPT_fno_short_wchar, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-show-column", "Do not include column number on diagnostics", nullptr, OPT_fno_show_column, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-show-source-location", "Do not include source location information with diagnostics", nullptr, OPT_fno_show_source_location, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-sign-zero", nullptr, nullptr, OPT_sign_zero_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-signaling-math", nullptr, nullptr, OPT_fno_signaling_math, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-signaling-nans", nullptr, nullptr, OPT_signaling_nans_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-signed-char", "Char is unsigned", nullptr, OPT_fno_signed_char, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-signed-wchar", "Use an unsigned type for wchar_t", nullptr, OPT_fno_signed_wchar, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-signed-zeros", "Allow optimizations that ignore the sign of floating point zeros", nullptr, OPT_fno_signed_zeros, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-single-precision-constant", nullptr, nullptr, OPT_single_precision_constant_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-sized-deallocation", nullptr, nullptr, OPT_fno_sized_deallocation, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-slp-vectorize-aggressive", nullptr, nullptr, OPT_anonymous_1, Option::FlagClass, 0, Ignored, OPT_clang_ignored_legacy_options_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-slp-vectorize", nullptr, nullptr, OPT_fno_slp_vectorize, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-spec-constr-count", nullptr, nullptr, OPT_spec_constr_count_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-spell-checking", "Disable spell-checking", nullptr, OPT_fno_spell_checking, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-split-dwarf-inlining", nullptr, nullptr, OPT_fno_split_dwarf_inlining, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-stack-arrays", nullptr, nullptr, OPT_stack_arrays_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-stack-check", nullptr, nullptr, OPT_stack_check_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-stack-protector", "Disable the use of stack protectors", nullptr, OPT_fno_stack_protector, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-standalone-debug", "Limit debug information produced to reduce size of debug binary", nullptr, OPT_fno_standalone_debug, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-strength-reduce", nullptr, nullptr, OPT_strength_reduce_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-strict-aliasing", nullptr, nullptr, OPT_fno_strict_aliasing, Option::FlagClass, 0, DriverOption | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-strict-enums", nullptr, nullptr, OPT_fno_strict_enums, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-strict-modules-decluse", nullptr, nullptr, OPT_fno_modules_strict_decluse, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-strict-overflow", nullptr, nullptr, OPT_fno_strict_overflow, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-strict-return", nullptr, nullptr, OPT_fno_strict_return, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-strict-vtable-pointers", nullptr, nullptr, OPT_fno_strict_vtable_pointers, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-struct-path-tbaa", nullptr, nullptr, OPT_fno_struct_path_tbaa, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-threadsafe-statics", "Do not emit code to make initialization of local statics thread safe", nullptr, OPT_fno_threadsafe_statics, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-tls-model", nullptr, nullptr, OPT_tls_model_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-tracer", nullptr, nullptr, OPT_tracer_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-trapping-math", nullptr, nullptr, OPT_fno_trapping_math, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-tree-dce", nullptr, nullptr, OPT_tree_dce_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-tree-salias", nullptr, nullptr, OPT_tree_salias_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-tree-slp-vectorize", nullptr, nullptr, OPT_anonymous_20, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fno_slp_vectorize, nullptr, nullptr},
{prefix_1, "fno-tree-ter", nullptr, nullptr, OPT_tree_ter_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-tree-vectorizer-verbose", nullptr, nullptr, OPT_tree_vectorizer_verbose_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-tree-vectorize", nullptr, nullptr, OPT_anonymous_18, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fno_vectorize, nullptr, nullptr},
{prefix_1, "fno-tree-vrp", nullptr, nullptr, OPT_tree_vrp_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-tree_loop_im", nullptr, nullptr, OPT_tree_loop_im_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-tree_loop_ivcanon", nullptr, nullptr, OPT_tree_loop_ivcanon_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-tree_loop_linear", nullptr, nullptr, OPT_tree_loop_linear_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-trigraphs", "Do not process trigraph sequences", nullptr, OPT_fno_trigraphs, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-underscoring", nullptr, nullptr, OPT_underscoring_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-unique-section-names", nullptr, nullptr, OPT_fno_unique_section_names, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-unit-at-a-time", nullptr, nullptr, OPT_fno_unit_at_a_time, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-unroll-all-loops", nullptr, nullptr, OPT_unroll_all_loops_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-unroll-loops", "Turn off loop unroller", nullptr, OPT_fno_unroll_loops, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-unsafe-loop-optimizations", nullptr, nullptr, OPT_unsafe_loop_optimizations_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-unsafe-math-optimizations", nullptr, nullptr, OPT_fno_unsafe_math_optimizations, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-unsigned-char", nullptr, nullptr, OPT_fno_unsigned_char, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-unswitch-loops", nullptr, nullptr, OPT_unswitch_loops_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-unwind-tables", nullptr, nullptr, OPT_fno_unwind_tables, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-use-cxa-atexit", "Don't use __cxa_atexit for calling destructors", nullptr, OPT_fno_use_cxa_atexit, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-use-init-array", "Don't use .init_array instead of .ctors", nullptr, OPT_fno_use_init_array, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-use-line-directives", nullptr, nullptr, OPT_fno_use_line_directives, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-use-linker-plugin", nullptr, nullptr, OPT_use_linker_plugin_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-validate-pch", "Disable validation of precompiled headers", nullptr, OPT_fno_validate_pch, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-var-tracking", nullptr, nullptr, OPT_fno_var_tracking, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-variable-expansion-in-unroller", nullptr, nullptr, OPT_variable_expansion_in_unroller_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-vect-cost-model", nullptr, nullptr, OPT_vect_cost_model_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-vectorize", nullptr, nullptr, OPT_fno_vectorize, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-verbose-asm", nullptr, nullptr, OPT_fno_verbose_asm, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-wchar", "Disable C++ builtin type wchar_t", nullptr, OPT_fno_wchar, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fno-web", nullptr, nullptr, OPT_web_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-whole-file", nullptr, nullptr, OPT_whole_file_fno, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-whole-program-vtables", nullptr, nullptr, OPT_fno_whole_program_vtables, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-whole-program", nullptr, nullptr, OPT_whole_program_fno, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-working-directory", nullptr, nullptr, OPT_fno_working_directory, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-wrapv", nullptr, nullptr, OPT_fno_wrapv, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-xray-always-emit-customevents", nullptr, nullptr, OPT_fnoxray_always_emit_customevents, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-xray-instrument", nullptr, nullptr, OPT_fnoxray_instrument, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-zero-initialized-in-bss", nullptr, nullptr, OPT_fno_zero_initialized_in_bss, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fno-zvector", nullptr, nullptr, OPT_fno_zvector, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fnon-call-exceptions", nullptr, nullptr, OPT_non_call_exceptions_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fnoopenmp-relocatable-target", "Do not compile OpenMP target code as relocatable.", nullptr, OPT_fnoopenmp_relocatable_target, Option::FlagClass, 0, CC1Option | NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fnoopenmp-use-tls", nullptr, nullptr, OPT_fnoopenmp_use_tls, Option::FlagClass, 0, CC1Option | NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-abi-version=", nullptr, nullptr, OPT_fobjc_abi_version_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-arc-cxxlib=", "Objective-C++ Automatic Reference Counting standard library kind", nullptr, OPT_fobjc_arc_cxxlib_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, "libc++,libstdc++,none"},

{prefix_1, "fobjc-arc-exceptions", "Use EH-safe code when synthesizing retains and releases in -fobjc-arc", nullptr, OPT_fobjc_arc_exceptions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fobjc-arc", "Synthesize retain and release calls for Objective-C pointers", nullptr, OPT_fobjc_arc, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fobjc-atdefs", nullptr, nullptr, OPT_fobjc_atdefs, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-call-cxx-cdtors", nullptr, nullptr, OPT_fobjc_call_cxx_cdtors, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-dispatch-method=", "Objective-C dispatch method to use", nullptr, OPT_fobjc_dispatch_method_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, "legacy,non-legacy,mixed"},

{prefix_1, "fobjc-exceptions", "Enable Objective-C exceptions", nullptr, OPT_fobjc_exceptions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fobjc-gc-only", "Use GC exclusively for Objective-C related memory management", nullptr, OPT_fobjc_gc_only, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fobjc-gc", "Enable Objective-C garbage collection", nullptr, OPT_fobjc_gc, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fobjc-infer-related-result-type", nullptr, nullptr, OPT_fobjc_infer_related_result_type, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-legacy-dispatch", nullptr, nullptr, OPT_fobjc_legacy_dispatch, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-link-runtime", nullptr, nullptr, OPT_fobjc_link_runtime, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-new-property", nullptr, nullptr, OPT_fobjc_new_property, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-nonfragile-abi-version=", nullptr, nullptr, OPT_fobjc_nonfragile_abi_version_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-nonfragile-abi", nullptr, nullptr, OPT_fobjc_nonfragile_abi, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-runtime-has-weak", "The target Objective-C runtime supports ARC weak operations", nullptr, OPT_fobjc_runtime_has_weak, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fobjc-runtime=", "Specify the target Objective-C runtime kind and version", nullptr, OPT_fobjc_runtime_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fobjc-sender-dependent-dispatch", nullptr, nullptr, OPT_fobjc_sender_dependent_dispatch, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fobjc-subscripting-legacy-runtime", "Allow Objective-C array and dictionary subscripting in legacy runtime", nullptr, OPT_fobjc_subscripting_legacy_runtime, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fobjc-weak", "Enable ARC-style weak references in Objective-C", nullptr, OPT_fobjc_weak, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fomit-frame-pointer", nullptr, nullptr, OPT_fomit_frame_pointer, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fopenmp-dump-offload-linker-script", nullptr, nullptr, OPT_fopenmp_dump_offload_linker_script, Option::FlagClass, 0, NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fopenmp-host-ir-file-path", "Path to the IR file produced by the frontend for the host.", nullptr, OPT_fopenmp_host_ir_file_path, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fopenmp-is-device", "Generate code only for an OpenMP target device.", nullptr, OPT_fopenmp_is_device, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fopenmp-relocatable-target", "OpenMP target code is compiled as relocatable using the -c flag. For OpenMP targets the code is relocatable by default.", nullptr, OPT_fopenmp_relocatable_target, Option::FlagClass, 0, CC1Option | NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fopenmp-simd", "Emit OpenMP code only for SIMD-based constructs.", nullptr, OPT_fopenmp_simd, Option::FlagClass, 0, CC1Option | NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fopenmp-targets=", "Specify comma-separated list of triples OpenMP offloading targets to be supported", nullptr, OPT_fopenmp_targets_EQ, Option::CommaJoinedClass, 0, DriverOption | CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fopenmp-use-tls", nullptr, nullptr, OPT_fopenmp_use_tls, Option::FlagClass, 0, NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fopenmp-version=", nullptr, nullptr, OPT_fopenmp_version_EQ, Option::JoinedClass, 0, CC1Option | NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fopenmp=", nullptr, nullptr, OPT_fopenmp_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fopenmp", nullptr, nullptr, OPT_fopenmp, Option::FlagClass, 0, CC1Option | NoArgumentUnused, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "foperator-arrow-depth=", nullptr, nullptr, OPT_foperator_arrow_depth_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "foperator-arrow-depth", "Maximum number of 'operator->'s to call for a member access", nullptr, OPT_foperator_arrow_depth, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "foptimization-record-file=", "Specify the file name of any generated YAML optimization record", nullptr, OPT_foptimization_record_file_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "foptimize-sibling-calls", nullptr, nullptr, OPT_foptimize_sibling_calls, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "for-linker=", nullptr, nullptr, OPT__for_linker_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_Xlinker, nullptr, nullptr},
{prefix_3, "for-linker", nullptr, nullptr, OPT__for_linker, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_Xlinker, nullptr, nullptr},
{prefix_3, "force-link=", nullptr, nullptr, OPT__force_link_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_u, nullptr, nullptr},
{prefix_3, "force-link", nullptr, nullptr, OPT__force_link, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_u, nullptr, nullptr},
{prefix_1, "force_cpusubtype_ALL", nullptr, nullptr, OPT_force__cpusubtype__ALL, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "force_flat_namespace", nullptr, nullptr, OPT_force__flat__namespace, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "force_load", nullptr, nullptr, OPT_force__load, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "foutput-class-dir=", nullptr, nullptr, OPT_foutput_class_dir_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "foverride-record-layout=", "Override record layouts with those in the given file", nullptr, OPT_foverride_record_layout_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Fo", "Set output object file, or directory (ends in / or \\) (with /c)", "<file or directory>", OPT__SLASH_Fo, Option::JoinedClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "fp:except-", "", nullptr, OPT__SLASH_fp_except_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_trapping_math, nullptr, nullptr},

{prefix_2, "fp:except", "", nullptr, OPT__SLASH_fp_except, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_ftrapping_math, nullptr, nullptr},

{prefix_2, "fp:fast", "", nullptr, OPT__SLASH_fp_fast, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_ffast_math, nullptr, nullptr},

{prefix_2, "fp:precise", "", nullptr, OPT__SLASH_fp_precise, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_fast_math, nullptr, nullptr},

{prefix_2, "fp:strict", "", nullptr, OPT__SLASH_fp_strict, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_fast_math, nullptr, nullptr},

{prefix_1, "fpack-derived", nullptr, nullptr, OPT_pack_derived_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fpack-struct=", "Specify the default maximum struct packing alignment", nullptr, OPT_fpack_struct_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fpack-struct", nullptr, nullptr, OPT_fpack_struct, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fparse-all-comments", nullptr, nullptr, OPT_fparse_all_comments, Option::FlagClass, 0, CC1Option, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fpascal-strings", "Recognize and construct Pascal-style string literals", nullptr, OPT_fpascal_strings, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fpcc-struct-return", "Override the default ABI to return all structs on the stack", nullptr, OPT_fpcc_struct_return, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fpch-preprocess", nullptr, nullptr, OPT_fpch_preprocess, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fpeel-loops", nullptr, nullptr, OPT_peel_loops_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fpermissive", nullptr, nullptr, OPT_permissive_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fPIC", nullptr, nullptr, OPT_fPIC, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fpic", nullptr, nullptr, OPT_fpic, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fPIE", nullptr, nullptr, OPT_fPIE, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fpie", nullptr, nullptr, OPT_fpie, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fplt", "Use the PLT to make function calls", nullptr, OPT_fplt, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fplugin=", "Load the named plugin (dynamic shared object)", "<dsopath>", OPT_fplugin_EQ, Option::JoinedClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprebuilt-module-path=", "Specify the prebuilt module path", "<directory>", OPT_fprebuilt_module_path, Option::JoinedClass, 0, DriverOption | CC1Option, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprefetch-loop-arrays", nullptr, nullptr, OPT_prefetch_loop_arrays_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fpreserve-as-comments", nullptr, nullptr, OPT_fpreserve_as_comments, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fpreserve-vec3-type", "Preserve 3-component vector type", nullptr, OPT_fpreserve_vec3_type, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprintf", nullptr, nullptr, OPT_printf_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprofile-arcs", nullptr, nullptr, OPT_fprofile_arcs, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprofile-correction", nullptr, nullptr, OPT_profile_correction_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprofile-dir=", nullptr, nullptr, OPT_fprofile_dir, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprofile-generate-sampling", nullptr, nullptr, OPT_profile_generate_sampling_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprofile-generate=", "Generate instrumented code to collect execution counts into <directory>/default.profraw (overridden by LLVM_PROFILE_FILE env var)", "<directory>", OPT_fprofile_generate_EQ, Option::JoinedClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-generate", "Generate instrumented code to collect execution counts into default.profraw (overridden by LLVM_PROFILE_FILE env var)", nullptr, OPT_fprofile_generate, Option::FlagClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-instr-generate=", "Generate instrumented code to collect execution counts into <file> (overridden by LLVM_PROFILE_FILE env var)", "<file>", OPT_fprofile_instr_generate_EQ, Option::JoinedClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-instr-generate", "Generate instrumented code to collect execution counts into default.profraw file (overridden by '=' form of option or LLVM_PROFILE_FILE env var)", nullptr, OPT_fprofile_instr_generate, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-instr-use=", "Use instrumentation data for profile-guided optimization", nullptr, OPT_fprofile_instr_use_EQ, Option::JoinedClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-instr-use", nullptr, nullptr, OPT_fprofile_instr_use, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprofile-instrument-path=", "Generate instrumented code to collect execution counts into <file> (overridden by LLVM_PROFILE_FILE env var)", nullptr, OPT_fprofile_instrument_path_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-instrument-use-path=", "Specify the profile path in PGO use compilation", nullptr, OPT_fprofile_instrument_use_path_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-instrument=", "Enable PGO instrumentation. The accepted value is clang, llvm, or none", nullptr, OPT_fprofile_instrument_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, "none,clang,llvm"},

{prefix_1, "fprofile-reusedist", nullptr, nullptr, OPT_profile_reusedist_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprofile-sample-accurate", "Specifies that the sample profile is accurate", nullptr, OPT_fprofile_sample_accurate, Option::FlagClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-sample-use=", "Enable sample-based profile guided optimizations", nullptr, OPT_fprofile_sample_use_EQ, Option::JoinedClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-sample-use", nullptr, nullptr, OPT_fprofile_sample_use, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprofile-use=", "Use instrumentation data for profile-guided optimization. If pathname is a directory, it reads from <pathname>/default.profdata. Otherwise, it reads from file <pathname>.", "<pathname>", OPT_fprofile_use_EQ, Option::JoinedClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fprofile-use", nullptr, nullptr, OPT_fprofile_use, Option::FlagClass, 0, 0, OPT_f_Group, OPT_fprofile_instr_use, nullptr, nullptr},
{prefix_1, "fprofile-values", nullptr, nullptr, OPT_profile_values_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprofile", nullptr, nullptr, OPT_profile_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fprotect-parens", nullptr, nullptr, OPT_protect_parens_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Fp", "Set pch filename (with /Yc and /Yu)", "<filename>", OPT__SLASH_Fp, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "framework", nullptr, nullptr, OPT_framework, Option::SeparateClass, 0, LinkerInput, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frandom-seed=", nullptr, nullptr, OPT_frandom_seed_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frange-check", nullptr, nullptr, OPT_range_check_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freal-4-real-10", nullptr, nullptr, OPT_real_4_real_10_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freal-4-real-16", nullptr, nullptr, OPT_real_4_real_16_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freal-4-real-8", nullptr, nullptr, OPT_real_4_real_8_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freal-8-real-10", nullptr, nullptr, OPT_real_8_real_10_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freal-8-real-16", nullptr, nullptr, OPT_real_8_real_16_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freal-8-real-4", nullptr, nullptr, OPT_real_8_real_4_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frealloc-lhs", nullptr, nullptr, OPT_realloc_lhs_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freciprocal-math", "Allow division operations to be reassociated", nullptr, OPT_freciprocal_math, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "frecord-marker=", nullptr, nullptr, OPT_frecord_marker_EQ, Option::JoinedClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frecursive", nullptr, nullptr, OPT_recursive_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freg-struct-return", "Override the default ABI to return small structs in registers", nullptr, OPT_freg_struct_return, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fregs-graph", nullptr, nullptr, OPT_regs_graph_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frelaxed-template-template-args", "Enable C++17 relaxed template template argument matching", nullptr, OPT_frelaxed_template_template_args, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "frename-registers", nullptr, nullptr, OPT_rename_registers_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freorder-blocks", nullptr, nullptr, OPT_reorder_blocks_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frepack-arrays", nullptr, nullptr, OPT_repack_arrays_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "freroll-loops", "Turn on loop reroller", nullptr, OPT_freroll_loops, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fretain-comments-from-system-headers", nullptr, nullptr, OPT_fretain_comments_from_system_headers, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frewrite-imports", nullptr, nullptr, OPT_frewrite_imports, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frewrite-includes", nullptr, nullptr, OPT_frewrite_includes, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frewrite-map-file=", nullptr, nullptr, OPT_frewrite_map_file_EQ, Option::JoinedClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frewrite-map-file", nullptr, nullptr, OPT_frewrite_map_file, Option::SeparateClass, 0, DriverOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fripa", nullptr, nullptr, OPT_ripa_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fropi", nullptr, nullptr, OPT_fropi, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frounding-math", nullptr, nullptr, OPT_rounding_math_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frtlib-add-rpath", "Add -rpath with architecture-specific resource directory to the linker flags", nullptr, OPT_frtlib_add_rpath, Option::FlagClass, 0, NoArgumentUnused, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "frtti", nullptr, nullptr, OPT_frtti, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "frwpi", nullptr, nullptr, OPT_frwpi, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "FR", nullptr, nullptr, OPT__SLASH_FR, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Fr", nullptr, nullptr, OPT__SLASH_Fr, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsanitize-address-field-padding=", "Level of field padding for AddressSanitizer", nullptr, OPT_fsanitize_address_field_padding, Option::JoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-address-globals-dead-stripping", "Enable linker dead stripping of globals in AddressSanitizer", nullptr, OPT_fsanitize_address_globals_dead_stripping, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-address-use-after-scope", "Enable use-after-scope detection in AddressSanitizer", nullptr, OPT_fsanitize_address_use_after_scope, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-blacklist=", "Path to blacklist file for sanitizers", nullptr, OPT_fsanitize_blacklist, Option::JoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-cfi-cross-dso", "Enable control flow integrity (CFI) checks for cross-DSO calls.", nullptr, OPT_fsanitize_cfi_cross_dso, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-cfi-icall-generalize-pointers", "Generalize pointers in CFI indirect call type signature checks", nullptr, OPT_fsanitize_cfi_icall_generalize_pointers, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-8bit-counters", "Enable frequency counters in sanitizer coverage", nullptr, OPT_fsanitize_coverage_8bit_counters, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-indirect-calls", "Enable sanitizer coverage for indirect calls", nullptr, OPT_fsanitize_coverage_indirect_calls, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-inline-8bit-counters", "Enable inline 8-bit counters in sanitizer coverage", nullptr, OPT_fsanitize_coverage_inline_8bit_counters, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-no-prune", "Disable coverage pruning (i.e. instrument all blocks/edges)", nullptr, OPT_fsanitize_coverage_no_prune, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-pc-table", "Create a table of coverage-instrumented PCs", nullptr, OPT_fsanitize_coverage_pc_table, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-stack-depth", "Enable max stack depth tracing", nullptr, OPT_fsanitize_coverage_stack_depth, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-trace-bb", "Enable basic block tracing in sanitizer coverage", nullptr, OPT_fsanitize_coverage_trace_bb, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-trace-cmp", "Enable cmp instruction tracing in sanitizer coverage", nullptr, OPT_fsanitize_coverage_trace_cmp, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-trace-div", "Enable div instruction tracing in sanitizer coverage", nullptr, OPT_fsanitize_coverage_trace_div, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-trace-gep", "Enable gep instruction tracing in sanitizer coverage", nullptr, OPT_fsanitize_coverage_trace_gep, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-trace-pc-guard", "Enable PC tracing with guard in sanitizer coverage", nullptr, OPT_fsanitize_coverage_trace_pc_guard, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-trace-pc", "Enable PC tracing in sanitizer coverage", nullptr, OPT_fsanitize_coverage_trace_pc, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage-type=", "Sanitizer coverage type", nullptr, OPT_fsanitize_coverage_type, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-coverage=", "Specify the type of coverage instrumentation for Sanitizers", nullptr, OPT_fsanitize_coverage, Option::CommaJoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-link-c++-runtime", nullptr, nullptr, OPT_fsanitize_link_cxx_runtime, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsanitize-memory-track-origins=", "Enable origins tracking in MemorySanitizer", nullptr, OPT_fsanitize_memory_track_origins_EQ, Option::JoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-memory-track-origins", "Enable origins tracking in MemorySanitizer", nullptr, OPT_fsanitize_memory_track_origins, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-memory-use-after-dtor", "Enable use-after-destroy detection in MemorySanitizer", nullptr, OPT_fsanitize_memory_use_after_dtor, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-minimal-runtime", nullptr, nullptr, OPT_fsanitize_minimal_runtime, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsanitize-recover=", "Enable recovery for specified sanitizers", nullptr, OPT_fsanitize_recover_EQ, Option::CommaJoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-recover", nullptr, nullptr, OPT_fsanitize_recover, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsanitize-stats", "Enable sanitizer statistics gathering.", nullptr, OPT_fsanitize_stats, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-thread-atomics", "Enable atomic operations instrumentation in ThreadSanitizer (default)", nullptr, OPT_fsanitize_thread_atomics, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-thread-func-entry-exit", "Enable function entry/exit instrumentation in ThreadSanitizer (default)", nullptr, OPT_fsanitize_thread_func_entry_exit, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-thread-memory-access", "Enable memory access instrumentation in ThreadSanitizer (default)", nullptr, OPT_fsanitize_thread_memory_access, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-trap=", "Enable trapping for specified sanitizers", nullptr, OPT_fsanitize_trap_EQ, Option::CommaJoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-undefined-strip-path-components=", "Strip (or keep only, if negative) a given number of path components when emitting check metadata.", "<number>", OPT_fsanitize_undefined_strip_path_components_EQ, Option::JoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsanitize-undefined-trap-on-error", nullptr, nullptr, OPT_fsanitize_undefined_trap_on_error, Option::FlagClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsanitize=", "Turn on runtime checks for various forms of undefined or suspicious behavior. See user manual for available checks", "<check>", OPT_fsanitize_EQ, Option::CommaJoinedClass, 0, CC1Option | CoreOption, OPT_f_clang_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsave-optimization-record", "Generate a YAML optimization record file", nullptr, OPT_fsave_optimization_record, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsched-interblock", nullptr, nullptr, OPT_anonymous_16, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fschedule-insns2", nullptr, nullptr, OPT_schedule_insns2_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fschedule-insns", nullptr, nullptr, OPT_schedule_insns_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsecond-underscore", nullptr, nullptr, OPT_second_underscore_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsee", nullptr, nullptr, OPT_see_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fseh-exceptions", "Use SEH style exceptions", nullptr, OPT_fseh_exceptions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fshort-enums", "Allocate to an enum type only as many bytes as it needs for the declared range of possible values", nullptr, OPT_fshort_enums, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fshort-wchar", "Force wchar_t to be a short unsigned int", nullptr, OPT_fshort_wchar, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fshow-column", nullptr, nullptr, OPT_fshow_column, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fshow-overloads=", "Which overload candidates to show when overload resolution fails: best|all; defaults to all", nullptr, OPT_fshow_overloads_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, "best,all"},

{prefix_1, "fshow-source-location", nullptr, nullptr, OPT_fshow_source_location, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsign-zero", nullptr, nullptr, OPT_sign_zero_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsignaling-math", nullptr, nullptr, OPT_fsignaling_math, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsignaling-nans", nullptr, nullptr, OPT_signaling_nans_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsigned-bitfields", nullptr, nullptr, OPT_fsigned_bitfields, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsigned-char", nullptr, nullptr, OPT_fsigned_char, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsigned-wchar", "Use a signed type for wchar_t", nullptr, OPT_fsigned_wchar, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsigned-zeros", nullptr, nullptr, OPT_fsigned_zeros, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsingle-precision-constant", nullptr, nullptr, OPT_single_precision_constant_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsized-deallocation", "Enable C++14 sized global deallocation functions", nullptr, OPT_fsized_deallocation, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsjlj-exceptions", "Use SjLj style exceptions", nullptr, OPT_fsjlj_exceptions, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fslp-vectorize-aggressive", nullptr, nullptr, OPT_anonymous_0, Option::FlagClass, 0, Ignored, OPT_clang_ignored_legacy_options_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fslp-vectorize", "Enable the superword-level parallelism vectorization passes", nullptr, OPT_fslp_vectorize, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fspec-constr-count", nullptr, nullptr, OPT_spec_constr_count_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fspell-checking-limit=", nullptr, nullptr, OPT_fspell_checking_limit_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fspell-checking-limit", "Set the maximum number of times to perform spell checking on unrecognized identifiers (0 = no limit).", "<N>", OPT_fspell_checking_limit, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fspell-checking", nullptr, nullptr, OPT_fspell_checking, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsplit-dwarf-inlining", "Place debug types in their own section (ELF Only)", nullptr, OPT_fsplit_dwarf_inlining, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fsplit-stack", nullptr, nullptr, OPT_fsplit_stack, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fstack-arrays", nullptr, nullptr, OPT_stack_arrays_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fstack-check", nullptr, nullptr, OPT_stack_check_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fstack-protector-all", "Force the usage of stack protectors for all functions", nullptr, OPT_fstack_protector_all, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fstack-protector-strong", "Use a strong heuristic to apply stack protectors to functions", nullptr, OPT_fstack_protector_strong, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fstack-protector", "Enable stack protectors for functions potentially vulnerable to stack smashing", nullptr, OPT_fstack_protector, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fstandalone-debug", "Emit full debug info for all types used by the program", nullptr, OPT_fstandalone_debug, Option::FlagClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fstrength-reduce", nullptr, nullptr, OPT_strength_reduce_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fstrict-aliasing", nullptr, nullptr, OPT_fstrict_aliasing, Option::FlagClass, 0, DriverOption | CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fstrict-enums", "Enable optimizations based on the strict definition of an enum's value range", nullptr, OPT_fstrict_enums, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fstrict-overflow", nullptr, nullptr, OPT_fstrict_overflow, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fstrict-return", "Always treat control flow paths that fall off the end of a non-void function as unreachable", nullptr, OPT_fstrict_return, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fstrict-vtable-pointers", "Enable optimizations based on the strict rules for overwriting polymorphic C++ objects", nullptr, OPT_fstrict_vtable_pointers, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fstruct-path-tbaa", nullptr, nullptr, OPT_fstruct_path_tbaa, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fsyntax-only", nullptr, nullptr, OPT_fsyntax_only, Option::FlagClass, 0, DriverOption | CoreOption | CC1Option, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "FS", nullptr, nullptr, OPT__SLASH_FS, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftabstop=", nullptr, nullptr, OPT_ftabstop_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftabstop", "Set the tab stop distance.", "<N>", OPT_ftabstop, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ftemplate-backtrace-limit=", nullptr, nullptr, OPT_ftemplate_backtrace_limit_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftemplate-backtrace-limit", "Set the maximum number of entries to print in a template instantiation backtrace (0 = no limit).", "<N>", OPT_ftemplate_backtrace_limit, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ftemplate-depth-", nullptr, nullptr, OPT_ftemplate_depth_, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftemplate-depth=", nullptr, nullptr, OPT_ftemplate_depth_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftemplate-depth", "Maximum depth of recursive template instantiation", nullptr, OPT_ftemplate_depth, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fterminated-vtables", nullptr, nullptr, OPT_anonymous_21, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fapple_kext, nullptr, nullptr},
{prefix_1, "ftest-coverage", nullptr, nullptr, OPT_ftest_coverage, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftest-module-file-extension=", "introduce a module file extension for testing purposes. The argument is parsed as blockname:major:minor:hashed:user info", nullptr, OPT_ftest_module_file_extension_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fthin-link-bitcode=", "Write minimized bitcode to <file> for the ThinLTO thin link only", nullptr, OPT_fthin_link_bitcode_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fthinlto-index=", "Perform ThinLTO importing using provided function summary index", nullptr, OPT_fthinlto_index_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fthreadsafe-statics", nullptr, nullptr, OPT_fthreadsafe_statics, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftime-report", nullptr, nullptr, OPT_ftime_report, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftls-model=", nullptr, nullptr, OPT_ftlsmodel_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftls-model", nullptr, nullptr, OPT_tls_model_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftracer", nullptr, nullptr, OPT_tracer_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftrap-function=", "Issue call to specified function rather than a trap instruction", nullptr, OPT_ftrap_function_EQ, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ftrapping-math", nullptr, nullptr, OPT_ftrapping_math, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftrapv-handler=", "Specify the function to be called on overflow", "<function name>", OPT_ftrapv_handler_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ftrapv-handler", nullptr, nullptr, OPT_ftrapv_handler, Option::SeparateClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftrapv", "Trap on integer overflow", nullptr, OPT_ftrapv, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ftree-dce", nullptr, nullptr, OPT_tree_dce_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftree-salias", nullptr, nullptr, OPT_tree_salias_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftree-slp-vectorize", nullptr, nullptr, OPT_anonymous_19, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fslp_vectorize, nullptr, nullptr},
{prefix_1, "ftree-ter", nullptr, nullptr, OPT_tree_ter_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftree-vectorizer-verbose", nullptr, nullptr, OPT_tree_vectorizer_verbose_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftree-vectorize", nullptr, nullptr, OPT_anonymous_17, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fvectorize, nullptr, nullptr},
{prefix_1, "ftree-vrp", nullptr, nullptr, OPT_tree_vrp_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftree_loop_im", nullptr, nullptr, OPT_tree_loop_im_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftree_loop_ivcanon", nullptr, nullptr, OPT_tree_loop_ivcanon_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftree_loop_linear", nullptr, nullptr, OPT_tree_loop_linear_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ftrigraphs", "Process trigraph sequences", nullptr, OPT_ftrigraphs, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ftype-visibility", "Default type visibility", nullptr, OPT_ftype_visibility, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "funderscoring", nullptr, nullptr, OPT_underscoring_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "funique-section-names", "Use unique names for text and data sections (ELF Only)", nullptr, OPT_funique_section_names, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "funit-at-a-time", nullptr, nullptr, OPT_funit_at_a_time, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "funknown-anytype", "Enable parser support for the __unknown_anytype type; for testing purposes only", nullptr, OPT_funknown_anytype, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "funroll-all-loops", nullptr, nullptr, OPT_unroll_all_loops_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "funroll-loops", "Turn on loop unroller", nullptr, OPT_funroll_loops, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "funsafe-loop-optimizations", nullptr, nullptr, OPT_unsafe_loop_optimizations_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "funsafe-math-optimizations", nullptr, nullptr, OPT_funsafe_math_optimizations, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "funsigned-bitfields", nullptr, nullptr, OPT_funsigned_bitfields, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "funsigned-char", nullptr, nullptr, OPT_funsigned_char, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "funswitch-loops", nullptr, nullptr, OPT_unswitch_loops_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "funwind-tables", nullptr, nullptr, OPT_funwind_tables, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fuse-cxa-atexit", nullptr, nullptr, OPT_fuse_cxa_atexit, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fuse-init-array", "Use .init_array instead of .ctors", nullptr, OPT_fuse_init_array, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fuse-ld=", nullptr, nullptr, OPT_fuse_ld_EQ, Option::JoinedClass, 0, CoreOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fuse-line-directives", nullptr, nullptr, OPT_fuse_line_directives, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fuse-linker-plugin", nullptr, nullptr, OPT_use_linker_plugin_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fuse-register-sized-bitfield-access", "Use register sized accesses to bit-fields, when possible.", nullptr, OPT_fuse_register_sized_bitfield_access, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "FU", nullptr, nullptr, OPT__SLASH_FU, Option::JoinedOrSeparateClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fvariable-expansion-in-unroller", nullptr, nullptr, OPT_variable_expansion_in_unroller_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fveclib=", "Use the given vector functions library", nullptr, OPT_fveclib, Option::JoinedClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, "Accelerate,SVML,none"},

{prefix_1, "fvect-cost-model", nullptr, nullptr, OPT_vect_cost_model_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fvectorize", "Enable the loop vectorization passes", nullptr, OPT_fvectorize, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fverbose-asm", nullptr, nullptr, OPT_fverbose_asm, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fvisibility-inlines-hidden", "Give inline C++ member functions default visibility by default", nullptr, OPT_fvisibility_inlines_hidden, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fvisibility-ms-compat", "Give global types 'default' visibility and global functions and variables 'hidden' visibility by default", nullptr, OPT_fvisibility_ms_compat, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fvisibility=", "Set the default symbol visibility for all global declarations", nullptr, OPT_fvisibility_EQ, Option::JoinedClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, "hidden,default"},

{prefix_1, "fvisibility", "Default type and symbol visibility", nullptr, OPT_fvisibility, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fwchar-type=", "Select underlying type for wchar_t", nullptr, OPT_fwchar_type_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, "char,short,int"},

{prefix_1, "fweb", nullptr, nullptr, OPT_web_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fwhole-file", nullptr, nullptr, OPT_whole_file_f, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fwhole-program-vtables", "Enables whole-program vtable optimization. Requires -flto", nullptr, OPT_fwhole_program_vtables, Option::FlagClass, 0, CoreOption | CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fwhole-program", nullptr, nullptr, OPT_whole_program_f, Option::FlagClass, 0, Ignored, OPT_clang_ignored_gcc_optimization_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fwrapv", "Treat signed integer overflow as two's complement", nullptr, OPT_fwrapv, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fwritable-strings", "Store string literals as writable data", nullptr, OPT_fwritable_strings, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fxray-always-emit-customevents", "Determine whether to always emit __xray_customevent(...) calls even if the function it appears in is not always instrumented.", nullptr, OPT_fxray_always_emit_customevents, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fxray-always-instrument=", "Filename defining the whitelist for imbuing the 'always instrument' XRay attribute.", nullptr, OPT_fxray_always_instrument, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fxray-instruction-threshold=", "Sets the minimum function size to instrument with XRay", nullptr, OPT_fxray_instruction_threshold_EQ, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fxray-instruction-threshold", nullptr, nullptr, OPT_fxray_instruction_threshold_, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fxray-instrument", "Generate XRay instrumentation sleds on function entry and exit", nullptr, OPT_fxray_instrument, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "fxray-never-instrument=", "Filename defining the whitelist for imbuing the 'never instrument' XRay attribute.", nullptr, OPT_fxray_never_instrument, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Fx", nullptr, nullptr, OPT__SLASH_Fx, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fzero-initialized-in-bss", nullptr, nullptr, OPT_fzero_initialized_in_bss, Option::FlagClass, 0, 0, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "fzvector", "Enable System z vector language extension", nullptr, OPT_fzvector, Option::FlagClass, 0, CC1Option, OPT_f_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "F", "Add directory to framework include search path", nullptr, OPT_F, Option::JoinedOrSeparateClass, 0, RenderJoined | CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "F", nullptr, nullptr, OPT__SLASH_F, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "g0", nullptr, nullptr, OPT_g0, Option::FlagClass, 0, 0, OPT_gN_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "G1", nullptr, nullptr, OPT__SLASH_G1, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "g1", nullptr, nullptr, OPT_g1, Option::FlagClass, 0, 0, OPT_gN_Group, OPT_gline_tables_only, nullptr, nullptr},
{prefix_2, "G2", nullptr, nullptr, OPT__SLASH_G2, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "g2", nullptr, nullptr, OPT_g2, Option::FlagClass, 0, 0, OPT_gN_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "g3", nullptr, nullptr, OPT_g3, Option::FlagClass, 0, 0, OPT_gN_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "G=", nullptr, nullptr, OPT_G_EQ, Option::JoinedClass, 0, DriverOption, OPT_m_Group, OPT_G, nullptr, nullptr},
{prefix_2, "GA", "Assume thread-local variables are defined in the executable", nullptr, OPT__SLASH_GA, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_ftlsmodel_EQ, "local-exec\0", nullptr},

{prefix_3, "gcc-toolchain=", "Use the gcc toolchain at the given directory", nullptr, OPT_gcc_toolchain, Option::JoinedClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gcc-toolchain", nullptr, nullptr, OPT_gcc_toolchain_legacy_spelling, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_gcc_toolchain, nullptr, nullptr},
{prefix_1, "gcodeview", "Generate CodeView debug information", nullptr, OPT_gcodeview, Option::FlagClass, 0, CC1Option | CC1AsOption | CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gcoff", nullptr, nullptr, OPT_gcoff, Option::JoinedClass, 0, Unsupported, OPT_g_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gcolumn-info", nullptr, nullptr, OPT_gcolumn_info, Option::FlagClass, 0, CoreOption, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gdwarf-2", "Generate source-level debug information with dwarf version 2", nullptr, OPT_gdwarf_2, Option::FlagClass, 0, 0, OPT_g_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gdwarf-3", "Generate source-level debug information with dwarf version 3", nullptr, OPT_gdwarf_3, Option::FlagClass, 0, 0, OPT_g_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gdwarf-4", "Generate source-level debug information with dwarf version 4", nullptr, OPT_gdwarf_4, Option::FlagClass, 0, 0, OPT_g_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gdwarf-5", "Generate source-level debug information with dwarf version 5", nullptr, OPT_gdwarf_5, Option::FlagClass, 0, 0, OPT_g_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gdwarf-aranges", nullptr, nullptr, OPT_gdwarf_aranges, Option::FlagClass, 0, 0, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gdwarf", nullptr, nullptr, OPT_gdwarf, Option::FlagClass, 0, CoreOption, OPT_INVALID, OPT_gdwarf_4, nullptr, nullptr},
{prefix_2, "Gd", "Set __cdecl as a default calling convention", nullptr, OPT__SLASH_Gd, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gen-reproducer", "Auto-generates preprocessed source files and a reproduction script", nullptr, OPT_gen_reproducer, Option::FlagClass, 0, DriverOption | HelpHidden | CoreOption, OPT_internal_debug_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Ge", nullptr, nullptr, OPT__SLASH_Ge, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "GF-", "Disable string pooling", nullptr, OPT__SLASH_GF_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fwritable_strings, nullptr, nullptr},

{prefix_1, "gfull", nullptr, nullptr, OPT_gfull, Option::FlagClass, 0, 0, OPT_g_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "GF", nullptr, nullptr, OPT__SLASH_GF, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ggdb0", nullptr, nullptr, OPT_ggdb0, Option::FlagClass, 0, 0, OPT_ggdbN_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ggdb1", nullptr, nullptr, OPT_ggdb1, Option::FlagClass, 0, 0, OPT_ggdbN_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ggdb2", nullptr, nullptr, OPT_ggdb2, Option::FlagClass, 0, 0, OPT_ggdbN_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ggdb3", nullptr, nullptr, OPT_ggdb3, Option::FlagClass, 0, 0, OPT_ggdbN_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ggdb", nullptr, nullptr, OPT_ggdb, Option::FlagClass, 0, 0, OPT_gTune_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ggnu-pubnames", nullptr, nullptr, OPT_ggnu_pubnames, Option::FlagClass, 0, CC1Option, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "GH", nullptr, nullptr, OPT__SLASH_GH, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Gh", nullptr, nullptr, OPT__SLASH_Gh, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "GL-", nullptr, nullptr, OPT__SLASH_GL_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gline-tables-only", "Emit debug line number tables only", nullptr, OPT_gline_tables_only, Option::FlagClass, 0, CoreOption, OPT_gN_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "glldb", nullptr, nullptr, OPT_glldb, Option::FlagClass, 0, 0, OPT_gTune_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "GL", nullptr, nullptr, OPT__SLASH_GL, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Gm-", nullptr, nullptr, OPT__SLASH_Gm_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gmlt", nullptr, nullptr, OPT_gmlt, Option::FlagClass, 0, 0, OPT_INVALID, OPT_gline_tables_only, nullptr, nullptr},
{prefix_1, "gmodules", "Generate debug info with external references to clang modules or precompiled headers", nullptr, OPT_gmodules, Option::FlagClass, 0, 0, OPT_gN_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Gm", nullptr, nullptr, OPT__SLASH_Gm, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gno-column-info", nullptr, nullptr, OPT_gno_column_info, Option::FlagClass, 0, CoreOption, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gno-record-gcc-switches", nullptr, nullptr, OPT_gno_record_gcc_switches, Option::FlagClass, 0, 0, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gno-strict-dwarf", nullptr, nullptr, OPT_gno_strict_dwarf, Option::FlagClass, 0, 0, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gnu-pubnames", "Emit newer GNU style pubnames", nullptr, OPT_gnu_pubnames, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "GR-", "Disable emission of RTTI data", nullptr, OPT__SLASH_GR_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "grecord-gcc-switches", nullptr, nullptr, OPT_grecord_gcc_switches, Option::FlagClass, 0, 0, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Gregcall", "Set __regcall as a default calling convention", nullptr, OPT__SLASH_Gregcall, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "GR", "Enable emission of RTTI data", nullptr, OPT__SLASH_GR, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Gr", "Set __fastcall as a default calling convention", nullptr, OPT__SLASH_Gr, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "GS-", "Disable buffer security check", nullptr, OPT__SLASH_GS_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gsce", nullptr, nullptr, OPT_gsce, Option::FlagClass, 0, 0, OPT_gTune_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gsplit-dwarf", nullptr, nullptr, OPT_gsplit_dwarf, Option::FlagClass, 0, 0, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gstabs", nullptr, nullptr, OPT_gstabs, Option::JoinedClass, 0, Unsupported, OPT_g_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gstrict-dwarf", nullptr, nullptr, OPT_gstrict_dwarf, Option::FlagClass, 0, 0, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "GS", "Enable buffer security check", nullptr, OPT__SLASH_GS, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Gs", "Set stack probe size", nullptr, OPT__SLASH_Gs, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_mstack_probe_size, nullptr, nullptr},

{prefix_1, "gtoggle", nullptr, nullptr, OPT_gtoggle, Option::FlagClass, 0, Unsupported, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "GT", nullptr, nullptr, OPT__SLASH_GT, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "guard:", nullptr, nullptr, OPT__SLASH_Guard, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gused", nullptr, nullptr, OPT_gused, Option::FlagClass, 0, 0, OPT_g_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "gvms", nullptr, nullptr, OPT_gvms, Option::JoinedClass, 0, Unsupported, OPT_g_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Gv", "Set __vectorcall as a default calling convention", nullptr, OPT__SLASH_Gv, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Gw-", "Don't put each data item in its own section", nullptr, OPT__SLASH_Gw_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_data_sections, nullptr, nullptr},

{prefix_2, "Gw", "Put each data item in its own section", nullptr, OPT__SLASH_Gw, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fdata_sections, nullptr, nullptr},

{prefix_2, "GX-", "Disable exception handling", nullptr, OPT__SLASH_GX_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gxcoff", nullptr, nullptr, OPT_gxcoff, Option::JoinedClass, 0, Unsupported, OPT_g_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "GX", "Enable exception handling", nullptr, OPT__SLASH_GX, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Gy-", "Don't put each function in its own section", nullptr, OPT__SLASH_Gy_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_function_sections, nullptr, nullptr},

{prefix_2, "Gy", "Put each function in its own section", nullptr, OPT__SLASH_Gy, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_ffunction_sections, nullptr, nullptr},

{prefix_1, "gz=", "DWARF debug sections compression type", nullptr, OPT_gz_EQ, Option::JoinedClass, 0, 0, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "GZ", nullptr, nullptr, OPT__SLASH_GZ, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Gz", "Set __stdcall as a default calling convention", nullptr, OPT__SLASH_Gz, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "gz", "DWARF debug sections compression type", nullptr, OPT_gz, Option::FlagClass, 0, 0, OPT_g_flags_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "G", "Put objects of at most <size> bytes into small data section (MIPS / Hexagon)", "<size>", OPT_G, Option::JoinedOrSeparateClass, 0, DriverOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "g", "Generate source-level debug information", nullptr, OPT_g_Flag, Option::FlagClass, 0, 0, OPT_g_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "header-include-file", "Filename (or -) to write header include output to", nullptr, OPT_header_include_file, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "headerpad_max_install_names", nullptr, nullptr, OPT_headerpad__max__install__names, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "help-hidden", nullptr, nullptr, OPT__help_hidden, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "HELP", nullptr, nullptr, OPT__SLASH_HELP, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_help, nullptr, nullptr},
{prefix_4, "help", "Display available options", nullptr, OPT_help, Option::FlagClass, 0, CC1Option | CC1AsOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "help", "Display available options", nullptr, OPT__SLASH_help, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_help, nullptr, nullptr},

{prefix_2, "homeparams", nullptr, nullptr, OPT__SLASH_homeparams, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "hotpatch", nullptr, nullptr, OPT__SLASH_hotpatch, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "H", "Show header includes and nesting depth", nullptr, OPT_H, Option::FlagClass, 0, CC1Option, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "H", nullptr, nullptr, OPT__SLASH_H, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "I-", "Restrict all prior -I flags to double-quoted inclusion and remove current directory from include path", nullptr, OPT_I_, Option::FlagClass, 0, 0, OPT_I_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "idirafter", "Add directory to AFTER include search path", nullptr, OPT_idirafter, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "iframeworkwithsysroot", "Add directory to SYSTEM framework search path, absolute paths are relative to -isysroot", "<directory>", OPT_iframeworkwithsysroot, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "iframework", "Add directory to SYSTEM framework search path", nullptr, OPT_iframework, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "imacros=", nullptr, nullptr, OPT__imacros_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_imacros, nullptr, nullptr},
{prefix_4, "imacros", "Include macros from file before parsing", "<file>", OPT_imacros, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "image_base", nullptr, nullptr, OPT_image__base, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "imsvc", "Add directory to system include search path, as if part of %INCLUDE%", "<dir>", OPT__SLASH_imsvc, Option::JoinedOrSeparateClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "include-barrier", nullptr, nullptr, OPT__include_barrier, Option::FlagClass, 0, 0, OPT_INVALID, OPT_I_, nullptr, nullptr},
{prefix_3, "include-directory-after=", nullptr, nullptr, OPT__include_directory_after_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_idirafter, nullptr, nullptr},
{prefix_3, "include-directory-after", nullptr, nullptr, OPT__include_directory_after, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_idirafter, nullptr, nullptr},
{prefix_3, "include-directory=", nullptr, nullptr, OPT__include_directory_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_I, nullptr, nullptr},
{prefix_3, "include-directory", nullptr, nullptr, OPT__include_directory, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_I, nullptr, nullptr},
{prefix_1, "include-pch", "Include precompiled header file", "<file>", OPT_include_pch, Option::SeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "include-prefix=", nullptr, nullptr, OPT__include_prefix_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_iprefix, nullptr, nullptr},
{prefix_3, "include-prefix", nullptr, nullptr, OPT__include_prefix, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_iprefix, nullptr, nullptr},
{prefix_1, "include-pth", "Include file before parsing", "<file>", OPT_include_pth, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "include-with-prefix-after=", nullptr, nullptr, OPT__include_with_prefix_after_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_iwithprefix, nullptr, nullptr},
{prefix_3, "include-with-prefix-after", nullptr, nullptr, OPT__include_with_prefix_after, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_iwithprefix, nullptr, nullptr},
{prefix_3, "include-with-prefix-before=", nullptr, nullptr, OPT__include_with_prefix_before_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_iwithprefixbefore, nullptr, nullptr},
{prefix_3, "include-with-prefix-before", nullptr, nullptr, OPT__include_with_prefix_before, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_iwithprefixbefore, nullptr, nullptr},
{prefix_3, "include-with-prefix=", nullptr, nullptr, OPT__include_with_prefix_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_iwithprefix, nullptr, nullptr},
{prefix_3, "include-with-prefix", nullptr, nullptr, OPT__include_with_prefix, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_iwithprefix, nullptr, nullptr},
{prefix_3, "include=", nullptr, nullptr, OPT__include_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_include, nullptr, nullptr},
{prefix_4, "include", "Include file before parsing", "<file>", OPT_include, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "index-header-map", "Make the next included directory (-I or -F) an indexer header map", nullptr, OPT_index_header_map, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "init-only", "Only execute frontend initialization", nullptr, OPT_init_only, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "init", nullptr, nullptr, OPT_init, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "install_name", nullptr, nullptr, OPT_install__name, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "integrated-as", nullptr, nullptr, OPT_anonymous_24, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_fintegrated_as, nullptr, nullptr},
{prefix_1, "internal-externc-isystem", "Add directory to the internal system include search path with implicit extern \"C\" semantics; these are assumed to not be user-provided and are used to model system and standard headers' paths.", "<directory>", OPT_internal_externc_isystem, Option::JoinedOrSeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "internal-isystem", "Add directory to the internal system include search path; these are assumed to not be user-provided and are used to model system and standard headers' paths.", "<directory>", OPT_internal_isystem, Option::JoinedOrSeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "iprefix", "Set the -iwithprefix/-iwithprefixbefore prefix", "<dir>", OPT_iprefix, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "iquote", "Add directory to QUOTE include search path", "<directory>", OPT_iquote, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "isysroot", "Set the system root directory (usually /)", "<dir>", OPT_isysroot, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "isystem-after", "Add directory to end of the SYSTEM include search path", "<directory>", OPT_isystem_after, Option::JoinedOrSeparateClass, 0, DriverOption, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "isystem", "Add directory to SYSTEM include search path", "<directory>", OPT_isystem, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ivfsoverlay", "Overlay the virtual filesystem described by file over the real file system", nullptr, OPT_ivfsoverlay, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "iwithprefixbefore", "Set directory to include search path with prefix", "<dir>", OPT_iwithprefixbefore, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "iwithprefix", "Set directory to SYSTEM include search path with prefix", "<dir>", OPT_iwithprefix, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "iwithsysroot", "Add directory to SYSTEM include search path, absolute paths are relative to -isysroot", "<directory>", OPT_iwithsysroot, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "I", "Add directory to include search path", "<dir>", OPT_I, Option::JoinedOrSeparateClass, 0, CC1Option | CC1AsOption, OPT_I_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "I", "Add directory to include search path", "<dir>", OPT__SLASH_I, Option::JoinedOrSeparateClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_I, nullptr, nullptr},

{prefix_1, "i", nullptr, nullptr, OPT_i, Option::JoinedClass, 0, 0, OPT_i_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "J", nullptr, nullptr, OPT_J, Option::JoinedOrSeparateClass, 0, RenderJoined, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "J", "Make char type unsigned", nullptr, OPT__SLASH_J, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_funsigned_char, nullptr, nullptr},

{prefix_1, "keep_private_externs", nullptr, nullptr, OPT_keep__private__externs, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "kernel-", nullptr, nullptr, OPT__SLASH_kernel_, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "kernel", nullptr, nullptr, OPT__SLASH_kernel, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "language=", nullptr, nullptr, OPT__language_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_x, nullptr, nullptr},
{prefix_3, "language", nullptr, nullptr, OPT__language, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_x, nullptr, nullptr},
{prefix_1, "lazy_framework", nullptr, nullptr, OPT_lazy__framework, Option::SeparateClass, 0, LinkerInput, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "lazy_library", nullptr, nullptr, OPT_lazy__library, Option::SeparateClass, 0, LinkerInput, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "LDd", "Create debug DLL", nullptr, OPT__SLASH_LDd, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "LD", "Create DLL", nullptr, OPT__SLASH_LD, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "library-directory=", nullptr, nullptr, OPT__library_directory_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_L, nullptr, nullptr},
{prefix_3, "library-directory", nullptr, nullptr, OPT__library_directory, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_L, nullptr, nullptr},
{prefix_3, "linker-option=", "Add linker option", nullptr, OPT_linker_option, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "link", "Forward options to the linker", "<options>", OPT__SLASH_link, Option::RemainingArgsJoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "LN", nullptr, nullptr, OPT__SLASH_LN, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "load", "Load the named plugin (dynamic shared object)", "<dsopath>", OPT_load, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "L", "Add directory to library search path", "<dir>", OPT_L, Option::JoinedOrSeparateClass, 0, RenderJoined, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "l", nullptr, nullptr, OPT_l, Option::JoinedOrSeparateClass, 0, LinkerInput | RenderJoined, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "m16", nullptr, nullptr, OPT_m16, Option::FlagClass, 0, DriverOption | CoreOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "m32", nullptr, nullptr, OPT_m32, Option::FlagClass, 0, DriverOption | CoreOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "m3dnowa", nullptr, nullptr, OPT_m3dnowa, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "m3dnow", nullptr, nullptr, OPT_m3dnow, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "m64", nullptr, nullptr, OPT_m64, Option::FlagClass, 0, DriverOption | CoreOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "m80387", nullptr, nullptr, OPT_m80387, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mx87, nullptr, nullptr},
{prefix_1, "mabi=", nullptr, nullptr, OPT_mabi_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mabicalls", "Enable SVR4-style position-independent code (Mips only)", nullptr, OPT_mabicalls, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mabs=", nullptr, nullptr, OPT_mabs_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Mach", nullptr, nullptr, OPT_Mach, Option::FlagClass, 0, 0, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "madx", nullptr, nullptr, OPT_madx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "maes", nullptr, nullptr, OPT_maes, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "main-file-name", "Main file name to use for debug info", nullptr, OPT_main_file_name, Option::SeparateClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "malign-double", "Align doubles to two words in structs (x86 only)", nullptr, OPT_malign_double, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "malign-functions=", nullptr, nullptr, OPT_malign_functions_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "malign-jumps=", nullptr, nullptr, OPT_malign_jumps_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "malign-loops=", nullptr, nullptr, OPT_malign_loops_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "maltivec", nullptr, nullptr, OPT_maltivec, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mamdgpu-debugger-abi=", "Generate additional code for specified <version> of debugger ABI (AMDGPU only)", "<version>", OPT_mamdgpu_debugger_abi, Option::JoinedClass, 0, HelpHidden, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mappletvos-version-min=", nullptr, nullptr, OPT_mappletvos_version_min_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_mtvos_version_min_EQ, nullptr, nullptr},
{prefix_1, "mappletvsimulator-version-min=", nullptr, nullptr, OPT_mappletvsimulator_version_min_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_mtvos_simulator_version_min_EQ, nullptr, nullptr},
{prefix_1, "march=", nullptr, nullptr, OPT_march_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "marm", nullptr, nullptr, OPT_marm, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mno_thumb, nullptr, nullptr},
{prefix_1, "masm-verbose", "Generate verbose assembly output", nullptr, OPT_masm_verbose, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "masm=", nullptr, nullptr, OPT_masm_EQ, Option::JoinedClass, 0, DriverOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "massembler-fatal-warnings", "Make assembler warnings fatal", nullptr, OPT_massembler_fatal_warnings, Option::FlagClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mavx2", nullptr, nullptr, OPT_mavx2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512bitalg", nullptr, nullptr, OPT_mavx512bitalg, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512bw", nullptr, nullptr, OPT_mavx512bw, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512cd", nullptr, nullptr, OPT_mavx512cd, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512dq", nullptr, nullptr, OPT_mavx512dq, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512er", nullptr, nullptr, OPT_mavx512er, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512f", nullptr, nullptr, OPT_mavx512f, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512ifma", nullptr, nullptr, OPT_mavx512ifma, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512pf", nullptr, nullptr, OPT_mavx512pf, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512vbmi2", nullptr, nullptr, OPT_mavx512vbmi2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512vbmi", nullptr, nullptr, OPT_mavx512vbmi, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512vl", nullptr, nullptr, OPT_mavx512vl, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512vnni", nullptr, nullptr, OPT_mavx512vnni, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx512vpopcntdq", nullptr, nullptr, OPT_mavx512vpopcntdq, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mavx", nullptr, nullptr, OPT_mavx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mbackchain", "Link stack frames through backchain on System Z", nullptr, OPT_mbackchain, Option::FlagClass, 0, DriverOption | CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mbig-endian", nullptr, nullptr, OPT_mbig_endian, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mbmi2", nullptr, nullptr, OPT_mbmi2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mbmi", nullptr, nullptr, OPT_mbmi, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mbranch-likely", nullptr, nullptr, OPT_mbranch_likely, Option::FlagClass, 0, HelpHidden, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mcheck-zero-division", nullptr, nullptr, OPT_mcheck_zero_division, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mclflushopt", nullptr, nullptr, OPT_mclflushopt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mclwb", nullptr, nullptr, OPT_mclwb, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mclzero", nullptr, nullptr, OPT_mclzero, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mcmodel=", nullptr, nullptr, OPT_mcmodel_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mcmpb", nullptr, nullptr, OPT_mcmpb, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mcode-model", "The code model to use", nullptr, OPT_mcode_model, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, "small,kernel,medium,large"},

{prefix_1, "mcompact-branches=", nullptr, nullptr, OPT_mcompact_branches_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mconsole", nullptr, nullptr, OPT_mconsole, Option::JoinedClass, 0, DriverOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mconstant-cfstrings", nullptr, nullptr, OPT_mconstant_cfstrings, Option::FlagClass, 0, Ignored, OPT_clang_ignored_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mconstructor-aliases", "Emit complete constructors and destructors as aliases when possible", nullptr, OPT_mconstructor_aliases, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mcpu=", nullptr, nullptr, OPT_mcpu_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mcrbits", nullptr, nullptr, OPT_mcrbits, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mcrc", "Allow use of CRC instructions (ARM only)", nullptr, OPT_mcrc, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mcrypto", nullptr, nullptr, OPT_mpower8_crypto, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mcx16", nullptr, nullptr, OPT_mcx16, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "MDd", "Use DLL debug run-time", nullptr, OPT__SLASH_MDd, Option::FlagClass, 0, CLOption | DriverOption, OPT__SLASH_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mdebug-pass", "Enable additional debug output", nullptr, OPT_mdebug_pass, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mdefault-build-attributes", nullptr, nullptr, OPT_mdefault_build_attributes, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mdirect-move", nullptr, nullptr, OPT_mdirect_move, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mdisable-fp-elim", "Disable frame pointer elimination optimization", nullptr, OPT_mdisable_fp_elim, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mdisable-tail-calls", "Disable tail call optimization, keeping the call stack accurate", nullptr, OPT_mdisable_tail_calls, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mdll", nullptr, nullptr, OPT_mdll, Option::JoinedClass, 0, DriverOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mdouble-float", nullptr, nullptr, OPT_mdouble_float, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mdspr2", nullptr, nullptr, OPT_mdspr2, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mdsp", nullptr, nullptr, OPT_mdsp, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mdynamic-no-pic", nullptr, nullptr, OPT_mdynamic_no_pic, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "MD", "Write a depfile containing user and system headers", nullptr, OPT_MD, Option::FlagClass, 0, 0, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "MD", "Use DLL run-time", nullptr, OPT__SLASH_MD, Option::FlagClass, 0, CLOption | DriverOption, OPT__SLASH_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "meabi", "Set EABI type, e.g. 4, 5 or gnu (default depends on triple)", nullptr, OPT_meabi, Option::SeparateClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, "default,4,5,gnu"},

{prefix_1, "membedded-data", "Place constants in the .rodata section instead of the .sdata section even if they meet the -G <size> threshold (MIPS)", nullptr, OPT_membedded_data, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "menable-no-infs", "Allow optimization to assume there are no infinities.", nullptr, OPT_menable_no_infinities, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "menable-no-nans", "Allow optimization to assume there are no NaNs.", nullptr, OPT_menable_no_nans, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "menable-unsafe-fp-math", "Allow unsafe floating-point math optimizations which may decrease precision", nullptr, OPT_menable_unsafe_fp_math, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mexecute-only", "Disallow generation of data access to code sections (ARM only)", nullptr, OPT_mexecute_only, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mextern-sdata", "Assume that externally defined data is in the small data if it meets the -G <size> threshold (MIPS)", nullptr, OPT_mextern_sdata, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mf16c", nullptr, nullptr, OPT_mf16c, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfancy-math-387", nullptr, nullptr, OPT_mfancy_math_387, Option::FlagClass, 0, Ignored, OPT_clang_ignored_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfentry", "Insert calls to fentry at function entry (x86 only)", nullptr, OPT_mfentry, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mfix-and-continue", nullptr, nullptr, OPT_mfix_and_continue, Option::FlagClass, 0, Ignored, OPT_clang_ignored_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfix-cortex-a53-835769", "Workaround Cortex-A53 erratum 835769 (AArch64 only)", nullptr, OPT_mfix_cortex_a53_835769, Option::FlagClass, 0, 0, OPT_m_aarch64_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mfloat-abi=", nullptr, nullptr, OPT_mfloat_abi_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, "soft,softfp,hard"},
{prefix_1, "mfloat-abi", "The float ABI to use", nullptr, OPT_mfloat_abi, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mfloat128", nullptr, nullptr, OPT_mfloat128, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfma4", nullptr, nullptr, OPT_mfma4, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfma", nullptr, nullptr, OPT_mfma, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfp32", "Use 32-bit floating point registers (MIPS only)", nullptr, OPT_mfp32, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mfp64", "Use 64-bit floating point registers (MIPS only)", nullptr, OPT_mfp64, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mfpmath=", nullptr, nullptr, OPT_mfpmath_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfpmath", "Which unit to use for fp math", nullptr, OPT_mfpmath, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mfprnd", nullptr, nullptr, OPT_mfprnd, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfpu=", nullptr, nullptr, OPT_mfpu_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfpxx", "Avoid FPU mode dependent operations when used with the O32 ABI", nullptr, OPT_mfpxx, Option::FlagClass, 0, HelpHidden, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mfsgsbase", nullptr, nullptr, OPT_mfsgsbase, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mfxsr", nullptr, nullptr, OPT_mfxsr, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "MF", "Write depfile output from -MMD, -MD, -MM, or -M to <file>", "<file>", OPT_MF, Option::JoinedOrSeparateClass, 0, 0, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mgeneral-regs-only", "Generate code which only uses the general purpose registers (AArch64 only)", nullptr, OPT_mgeneral_regs_only, Option::FlagClass, 0, 0, OPT_m_aarch64_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mgfni", nullptr, nullptr, OPT_mgfni, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mglibc", nullptr, nullptr, OPT_mglibc, Option::FlagClass, 0, HelpHidden | HelpHidden, OPT_m_libc_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mglobal-merge", "Enable merging of globals", nullptr, OPT_mglobal_merge, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mgpopt", "Use GP relative accesses for symbols known to be in a small data section (MIPS)", nullptr, OPT_mgpopt, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "MG", "Add missing headers to depfile", nullptr, OPT_MG, Option::FlagClass, 0, CC1Option, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mhard-float", nullptr, nullptr, OPT_mhard_float, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mhtm", nullptr, nullptr, OPT_mhtm, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mhvx-double", "Enable Hexagon Double Vector eXtensions", nullptr, OPT_mhexagon_hvx_double, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_HVX_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mhvx-length=", "Set Hexagon Vector Length", nullptr, OPT_mhexagon_hvx_length_EQ, Option::JoinedClass, 0, 0, OPT_m_hexagon_Features_HVX_Group, OPT_INVALID, nullptr, "64B,128B"},

{prefix_1, "mhvx=", "Enable Hexagon Vector eXtensions", nullptr, OPT_mhexagon_hvx_EQ, Option::JoinedClass, 0, 0, OPT_m_hexagon_Features_HVX_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mhvx", "Enable Hexagon Vector eXtensions", nullptr, OPT_mhexagon_hvx, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_HVX_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "mhwdiv=", nullptr, nullptr, OPT__mhwdiv_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_mhwdiv_EQ, nullptr, nullptr},
{prefix_1, "mhwdiv=", nullptr, nullptr, OPT_mhwdiv_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "mhwdiv", nullptr, nullptr, OPT__mhwdiv, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_mhwdiv_EQ, nullptr, nullptr},
{prefix_1, "miamcu", "Use Intel MCU ABI", nullptr, OPT_miamcu, Option::FlagClass, 0, DriverOption | CoreOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mibt", nullptr, nullptr, OPT_mibt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mieee-fp", nullptr, nullptr, OPT_mieee_fp, Option::FlagClass, 0, Ignored, OPT_clang_ignored_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mieee-rnd-near", nullptr, nullptr, OPT_mieee_rnd_near, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "migrate", "Run the migrator", nullptr, OPT__migrate, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "migrate", "Migrate source code", nullptr, OPT_migrate, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mimplicit-float", nullptr, nullptr, OPT_mimplicit_float, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mimplicit-it=", nullptr, nullptr, OPT_mimplicit_it_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mincremental-linker-compatible", "(integrated-as) Emit an object file which can be used with an incremental linker", nullptr, OPT_mincremental_linker_compatible, Option::FlagClass, 0, CC1Option | CC1AsOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mindirect-jump=", "Change indirect jump instructions to inhibit speculation", nullptr, OPT_mindirect_jump_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "minline-all-stringops", nullptr, nullptr, OPT_minline_all_stringops, Option::FlagClass, 0, Ignored, OPT_clang_ignored_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "minvariant-function-descriptors", nullptr, nullptr, OPT_minvariant_function_descriptors, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mios-simulator-version-min=", nullptr, nullptr, OPT_mios_simulator_version_min_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mios-version-min=", "Set iOS deployment target", nullptr, OPT_mios_version_min_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_miphoneos_version_min_EQ, nullptr, nullptr},

{prefix_1, "miphoneos-version-min=", nullptr, nullptr, OPT_miphoneos_version_min_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "miphonesimulator-version-min=", nullptr, nullptr, OPT_miphonesimulator_version_min_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_mios_simulator_version_min_EQ, nullptr, nullptr},
{prefix_1, "mips16", nullptr, nullptr, OPT_mips16, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mips1", "Equivalent to -march=mips1", nullptr, OPT_mips1, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips1\0", nullptr},

{prefix_1, "mips2", "Equivalent to -march=mips2", nullptr, OPT_mips2, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips2\0", nullptr},

{prefix_1, "mips32r2", "Equivalent to -march=mips32r2", nullptr, OPT_mips32r2, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips32r2\0", nullptr},

{prefix_1, "mips32r3", "Equivalent to -march=mips32r3", nullptr, OPT_mips32r3, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips32r3\0", nullptr},

{prefix_1, "mips32r5", "Equivalent to -march=mips32r5", nullptr, OPT_mips32r5, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips32r5\0", nullptr},

{prefix_1, "mips32r6", "Equivalent to -march=mips32r6", nullptr, OPT_mips32r6, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips32r6\0", nullptr},

{prefix_1, "mips32", "Equivalent to -march=mips32", nullptr, OPT_mips32, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips32\0", nullptr},

{prefix_1, "mips3", "Equivalent to -march=mips3", nullptr, OPT_mips3, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips3\0", nullptr},

{prefix_1, "mips4", "Equivalent to -march=mips4", nullptr, OPT_mips4, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips4\0", nullptr},

{prefix_1, "mips5", "Equivalent to -march=mips5", nullptr, OPT_mips5, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips5\0", nullptr},

{prefix_1, "mips64r2", "Equivalent to -march=mips64r2", nullptr, OPT_mips64r2, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips64r2\0", nullptr},

{prefix_1, "mips64r3", "Equivalent to -march=mips64r3", nullptr, OPT_mips64r3, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips64r3\0", nullptr},

{prefix_1, "mips64r5", "Equivalent to -march=mips64r5", nullptr, OPT_mips64r5, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips64r5\0", nullptr},

{prefix_1, "mips64r6", "Equivalent to -march=mips64r6", nullptr, OPT_mips64r6, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips64r6\0", nullptr},

{prefix_1, "mips64", "Equivalent to -march=mips64", nullptr, OPT_mips64, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_march_EQ, "mips64\0", nullptr},

{prefix_1, "misel", nullptr, nullptr, OPT_misel, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "MJ", "Write a compilation database entry per input", nullptr, OPT_MJ, Option::JoinedOrSeparateClass, 0, 0, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mkernel", nullptr, nullptr, OPT_mkernel, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mldc1-sdc1", nullptr, nullptr, OPT_mldc1_sdc1, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mlimit-float-precision", "Limit float precision to the given value", nullptr, OPT_mlimit_float_precision, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mlink-bitcode-file", "Link the given bitcode file before performing optimizations.", nullptr, OPT_mlink_bitcode_file, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mlink-cuda-bitcode", "Link and internalize needed symbols from the given bitcode file before performing optimizations.", nullptr, OPT_mlink_cuda_bitcode, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mlinker-version=", nullptr, nullptr, OPT_mlinker_version_EQ, Option::JoinedClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mlittle-endian", nullptr, nullptr, OPT_mlittle_endian, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mllvm", "Additional arguments to forward to LLVM's option processing", nullptr, OPT_mllvm, Option::SeparateClass, 0, CC1Option | CC1AsOption | CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mlocal-sdata", "Extend the -G behaviour to object local data (MIPS)", nullptr, OPT_mlocal_sdata, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mlong-calls", "Generate branches with extended addressability, usually via indirect jumps.", nullptr, OPT_mlong_calls, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mlongcall", nullptr, nullptr, OPT_mlongcall, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mlwp", nullptr, nullptr, OPT_mlwp, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mlzcnt", nullptr, nullptr, OPT_mlzcnt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mmacos-version-min=", nullptr, nullptr, OPT_mmacos_version_min_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_mmacosx_version_min_EQ, nullptr, nullptr},
{prefix_1, "mmacosx-version-min=", "Set Mac OS X deployment target", nullptr, OPT_mmacosx_version_min_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mmadd4", "Enable the generation of 4-operand madd.s, madd.d and related instructions.", nullptr, OPT_mmadd4, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mmcu=", nullptr, nullptr, OPT_mmcu_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "MMD", "Write a depfile containing user headers", nullptr, OPT_MMD, Option::FlagClass, 0, 0, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mmfcrf", nullptr, nullptr, OPT_mmfcrf, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mmfocrf, nullptr, nullptr},
{prefix_1, "mmfocrf", nullptr, nullptr, OPT_mmfocrf, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mmicromips", nullptr, nullptr, OPT_mmicromips, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mmmx", nullptr, nullptr, OPT_mmmx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mmovbe", nullptr, nullptr, OPT_mmovbe, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mmpx", nullptr, nullptr, OPT_mmpx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mms-bitfields", "Set the default structure layout to be compatible with the Microsoft compiler standard", nullptr, OPT_mms_bitfields, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mmsa", "Enable MSA ASE (MIPS only)", nullptr, OPT_mmsa, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mmt", "Enable MT ASE (MIPS only)", nullptr, OPT_mmt, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mmwaitx", nullptr, nullptr, OPT_mmwaitx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "MM", "Like -MMD, but also implies -E and writes to stdout by default", nullptr, OPT_MM, Option::FlagClass, 0, 0, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mnan=", nullptr, nullptr, OPT_mnan_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-3dnowa", nullptr, nullptr, OPT_mno_3dnowa, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-3dnow", nullptr, nullptr, OPT_mno_3dnow, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-80387", nullptr, nullptr, OPT_mno_80387, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mno_x87, nullptr, nullptr},
{prefix_1, "mno-abicalls", "Disable SVR4-style position-independent code (Mips only)", nullptr, OPT_mno_abicalls, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-adx", nullptr, nullptr, OPT_mno_adx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-aes", nullptr, nullptr, OPT_mno_aes, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-altivec", nullptr, nullptr, OPT_mno_altivec, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx2", nullptr, nullptr, OPT_mno_avx2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512bitalg", nullptr, nullptr, OPT_mno_avx512bitalg, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512bw", nullptr, nullptr, OPT_mno_avx512bw, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512cd", nullptr, nullptr, OPT_mno_avx512cd, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512dq", nullptr, nullptr, OPT_mno_avx512dq, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512er", nullptr, nullptr, OPT_mno_avx512er, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512f", nullptr, nullptr, OPT_mno_avx512f, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512ifma", nullptr, nullptr, OPT_mno_avx512ifma, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512pf", nullptr, nullptr, OPT_mno_avx512pf, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512vbmi2", nullptr, nullptr, OPT_mno_avx512vbmi2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512vbmi", nullptr, nullptr, OPT_mno_avx512vbmi, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512vl", nullptr, nullptr, OPT_mno_avx512vl, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512vnni", nullptr, nullptr, OPT_mno_avx512vnni, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx512vpopcntdq", nullptr, nullptr, OPT_mno_avx512vpopcntdq, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-avx", nullptr, nullptr, OPT_mno_avx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-backchain", nullptr, nullptr, OPT_mno_backchain, Option::FlagClass, 0, DriverOption | CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-bmi2", nullptr, nullptr, OPT_mno_bmi2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-bmi", nullptr, nullptr, OPT_mno_bmi, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-branch-likely", nullptr, nullptr, OPT_mno_branch_likely, Option::FlagClass, 0, HelpHidden, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-check-zero-division", nullptr, nullptr, OPT_mno_check_zero_division, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-clflushopt", nullptr, nullptr, OPT_mno_clflushopt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-clwb", nullptr, nullptr, OPT_mno_clwb, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-clzero", nullptr, nullptr, OPT_mno_clzero, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-cmpb", nullptr, nullptr, OPT_mno_cmpb, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-constant-cfstrings", nullptr, nullptr, OPT_mno_constant_cfstrings, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-crbits", nullptr, nullptr, OPT_mno_crbits, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-crypto", nullptr, nullptr, OPT_mnopower8_crypto, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-cx16", nullptr, nullptr, OPT_mno_cx16, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-default-build-attributes", nullptr, nullptr, OPT_mno_default_build_attributes, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-direct-move", nullptr, nullptr, OPT_mnodirect_move, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-dspr2", nullptr, nullptr, OPT_mno_dspr2, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-dsp", nullptr, nullptr, OPT_mno_dsp, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-embedded-data", "Do not place constants in the .rodata section instead of the .sdata if they meet the -G <size> threshold (MIPS)", nullptr, OPT_mno_embedded_data, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-execute-only", "Allow generation of data access to code sections (ARM only)", nullptr, OPT_mno_execute_only, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-extern-sdata", "Do not assume that externally defined data is in the small data if it meets the -G <size> threshold (MIPS)", nullptr, OPT_mno_extern_sdata, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-f16c", nullptr, nullptr, OPT_mno_f16c, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-fix-cortex-a53-835769", "Don't workaround Cortex-A53 erratum 835769 (AArch64 only)", nullptr, OPT_mno_fix_cortex_a53_835769, Option::FlagClass, 0, 0, OPT_m_aarch64_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-float128", nullptr, nullptr, OPT_mno_float128, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-fma4", nullptr, nullptr, OPT_mno_fma4, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-fma", nullptr, nullptr, OPT_mno_fma, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-fprnd", nullptr, nullptr, OPT_mno_fprnd, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-fsgsbase", nullptr, nullptr, OPT_mno_fsgsbase, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-fxsr", nullptr, nullptr, OPT_mno_fxsr, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-gfni", nullptr, nullptr, OPT_mno_gfni, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-global-merge", "Disable merging of globals", nullptr, OPT_mno_global_merge, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-gpopt", "Do not use GP relative accesses for symbols known to be in a small data section (MIPS)", nullptr, OPT_mno_gpopt, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-htm", nullptr, nullptr, OPT_mno_htm, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-hvx-double", "Disable Hexagon Double Vector eXtensions", nullptr, OPT_mno_hexagon_hvx_double, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_HVX_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-hvx", "Disable Hexagon Vector eXtensions", nullptr, OPT_mno_hexagon_hvx, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_HVX_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-iamcu", nullptr, nullptr, OPT_mno_iamcu, Option::FlagClass, 0, DriverOption | CoreOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-ibt", nullptr, nullptr, OPT_mno_ibt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-implicit-float", "Don't generate implicit floating point instructions", nullptr, OPT_mno_implicit_float, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-incremental-linker-compatible", "(integrated-as) Emit an object file which cannot be used with an incremental linker", nullptr, OPT_mno_incremental_linker_compatible, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-inline-all-stringops", nullptr, nullptr, OPT_mno_inline_all_stringops, Option::FlagClass, 0, Ignored, OPT_clang_ignored_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-invariant-function-descriptors", nullptr, nullptr, OPT_mno_invariant_function_descriptors, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-isel", nullptr, nullptr, OPT_mno_isel, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-ldc1-sdc1", nullptr, nullptr, OPT_mno_ldc1_sdc1, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-local-sdata", "Do not extend the -G behaviour to object local data (MIPS)", nullptr, OPT_mno_local_sdata, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-long-calls", "Restore the default behaviour of not generating long calls", nullptr, OPT_mno_long_calls, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-longcall", nullptr, nullptr, OPT_mno_longcall, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-lwp", nullptr, nullptr, OPT_mno_lwp, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-lzcnt", nullptr, nullptr, OPT_mno_lzcnt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-madd4", "Disable the generation of 4-operand madd.s, madd.d and related instructions.", nullptr, OPT_mno_madd4, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-mfcrf", nullptr, nullptr, OPT_mno_mfcrf, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mno_mfocrf, nullptr, nullptr},
{prefix_1, "mno-mfocrf", nullptr, nullptr, OPT_mno_mfocrf, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-micromips", nullptr, nullptr, OPT_mno_micromips, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-mips16", nullptr, nullptr, OPT_mno_mips16, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-mmx", nullptr, nullptr, OPT_mno_mmx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-movbe", nullptr, nullptr, OPT_mno_movbe, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-movt", "Disallow use of movt/movw pairs (ARM only)", nullptr, OPT_mno_movt, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-mpx", nullptr, nullptr, OPT_mno_mpx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-ms-bitfields", "Do not set the default structure layout to be compatible with the Microsoft compiler standard", nullptr, OPT_mno_ms_bitfields, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-msa", "Disable MSA ASE (MIPS only)", nullptr, OPT_mno_msa, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-mt", "Disable MT ASE (MIPS only)", nullptr, OPT_mno_mt, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-mwaitx", nullptr, nullptr, OPT_mno_mwaitx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-neg-immediates", "Disallow converting instructions with negative immediates to their negation or inversion.", nullptr, OPT_mno_neg_immediates, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-nontrapping-fptoint", nullptr, nullptr, OPT_mno_nontrapping_fptoint, Option::FlagClass, 0, 0, OPT_m_wasm_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-odd-spreg", "Disable odd single-precision floating point registers", nullptr, OPT_mno_odd_spreg, Option::FlagClass, 0, HelpHidden, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-omit-leaf-frame-pointer", nullptr, nullptr, OPT_mno_omit_leaf_frame_pointer, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-pascal-strings", nullptr, nullptr, OPT_mno_pascal_strings, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fno_pascal_strings, nullptr, nullptr},
{prefix_1, "mno-pclmul", nullptr, nullptr, OPT_mno_pclmul, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-pie-copy-relocations", nullptr, nullptr, OPT_mno_pie_copy_relocations, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-pku", nullptr, nullptr, OPT_mno_pku, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-popcntd", nullptr, nullptr, OPT_mno_popcntd, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-popcnt", nullptr, nullptr, OPT_mno_popcnt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-power8-vector", nullptr, nullptr, OPT_mno_power8_vector, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-power9-vector", nullptr, nullptr, OPT_mno_power9_vector, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-prefetchwt1", nullptr, nullptr, OPT_mno_prefetchwt1, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-prfchw", nullptr, nullptr, OPT_mno_prfchw, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-pure-code", nullptr, nullptr, OPT_mno_pure_code, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mno_execute_only, nullptr, nullptr},
{prefix_1, "mno-qpx", nullptr, nullptr, OPT_mno_qpx, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-rdrnd", nullptr, nullptr, OPT_mno_rdrnd, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-rdseed", nullptr, nullptr, OPT_mno_rdseed, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-red-zone", nullptr, nullptr, OPT_mno_red_zone, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-relax-all", nullptr, nullptr, OPT_mno_relax_all, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-restrict-it", "Allow generation of deprecated IT blocks for ARMv8. It is off by default for ARMv8 Thumb mode", nullptr, OPT_mno_restrict_it, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-retpoline-external-thunk", nullptr, nullptr, OPT_mno_retpoline_external_thunk, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-retpoline", nullptr, nullptr, OPT_mno_retpoline, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-rtd", nullptr, nullptr, OPT_mno_rtd, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-rtm", nullptr, nullptr, OPT_mno_rtm, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-sahf", nullptr, nullptr, OPT_mno_sahf, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-sgx", nullptr, nullptr, OPT_mno_sgx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-sha", nullptr, nullptr, OPT_mno_sha, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-shstk", nullptr, nullptr, OPT_mno_shstk, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-simd128", nullptr, nullptr, OPT_mno_simd128, Option::FlagClass, 0, 0, OPT_m_wasm_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-soft-float", nullptr, nullptr, OPT_mno_soft_float, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-sse2", nullptr, nullptr, OPT_mno_sse2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-sse3", nullptr, nullptr, OPT_mno_sse3, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-sse4.1", nullptr, nullptr, OPT_mno_sse4_1, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-sse4.2", nullptr, nullptr, OPT_mno_sse4_2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-sse4a", nullptr, nullptr, OPT_mno_sse4a, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-sse4", nullptr, nullptr, OPT_mno_sse4, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mno_sse4_1, nullptr, nullptr},
{prefix_1, "mno-sse", nullptr, nullptr, OPT_mno_sse, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-ssse3", nullptr, nullptr, OPT_mno_ssse3, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-stackrealign", nullptr, nullptr, OPT_mno_stackrealign, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-tbm", nullptr, nullptr, OPT_mno_tbm, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-thumb", nullptr, nullptr, OPT_mno_thumb, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-unaligned-access", "Force all memory accesses to be aligned (AArch32/AArch64 only)", nullptr, OPT_mno_unaligned_access, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-vaes", nullptr, nullptr, OPT_mno_vaes, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-vpclmulqdq", nullptr, nullptr, OPT_mno_vpclmulqdq, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-vsx", nullptr, nullptr, OPT_mno_vsx, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-vx", nullptr, nullptr, OPT_mno_vx, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-warn-nonportable-cfstrings", nullptr, nullptr, OPT_mno_warn_nonportable_cfstrings, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-x87", nullptr, nullptr, OPT_mno_x87, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-xgot", nullptr, nullptr, OPT_mno_xgot, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-xnack", "Disable XNACK (AMDGPU only)", nullptr, OPT_mno_xnack, Option::FlagClass, 0, 0, OPT_m_amdgpu_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-xop", nullptr, nullptr, OPT_mno_xop, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-xsavec", nullptr, nullptr, OPT_mno_xsavec, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-xsaveopt", nullptr, nullptr, OPT_mno_xsaveopt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-xsaves", nullptr, nullptr, OPT_mno_xsaves, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-xsave", nullptr, nullptr, OPT_mno_xsave, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mno-zero-initialized-in-bss", "Do not put zero initialized data in the BSS", nullptr, OPT_mno_zero_initialized_in_bss, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mno-zvector", nullptr, nullptr, OPT_mno_zvector, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fno_zvector, nullptr, nullptr},
{prefix_1, "mnocrc", "Disallow use of CRC instructions (ARM only)", nullptr, OPT_mnocrc, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mnoexecstack", "Mark the file as not needing an executable stack", nullptr, OPT_mno_exec_stack, Option::FlagClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mnontrapping-fptoint", nullptr, nullptr, OPT_mnontrapping_fptoint, Option::FlagClass, 0, 0, OPT_m_wasm_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "modd-spreg", "Enable odd single-precision floating point registers", nullptr, OPT_modd_spreg, Option::FlagClass, 0, HelpHidden, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "module-dependency-dir", "Directory to dump module dependencies to", nullptr, OPT_module_dependency_dir, Option::SeparateClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "module-file-deps", "Include module files in dependency output", nullptr, OPT_module_file_deps, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "module-file-info", "Provide information about a particular module file", nullptr, OPT_module_file_info, Option::FlagClass, 0, DriverOption | CC1Option, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "momit-leaf-frame-pointer", "Omit frame pointer setup for leaf functions", nullptr, OPT_momit_leaf_frame_pointer, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "moslib=", nullptr, nullptr, OPT_moslib_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mpascal-strings", nullptr, nullptr, OPT_mpascal_strings, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fpascal_strings, nullptr, nullptr},
{prefix_1, "mpclmul", nullptr, nullptr, OPT_mpclmul, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mpie-copy-relocations", "Use copy relocations support for PIE builds", nullptr, OPT_mpie_copy_relocations, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mpku", nullptr, nullptr, OPT_mpku, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mpopcntd", nullptr, nullptr, OPT_mpopcntd, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mpopcnt", nullptr, nullptr, OPT_mpopcnt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mpower8-vector", nullptr, nullptr, OPT_mpower8_vector, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mpower9-vector", nullptr, nullptr, OPT_mpower9_vector, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mprefer-vector-width=", "Specifies preferred vector width for auto-vectorization. Defaults to 'none' which allows target specific decisions.", nullptr, OPT_mprefer_vector_width_EQ, Option::JoinedClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mprefetchwt1", nullptr, nullptr, OPT_mprefetchwt1, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mprfchw", nullptr, nullptr, OPT_mprfchw, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mpure-code", nullptr, nullptr, OPT_mpure_code, Option::FlagClass, 0, 0, OPT_INVALID, OPT_mexecute_only, nullptr, nullptr},
{prefix_1, "MP", "Create phony target for each dependency (other than main file)", nullptr, OPT_MP, Option::FlagClass, 0, CC1Option, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "MP", nullptr, nullptr, OPT__SLASH_MP, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mqdsp6-compat", "Enable hexagon-qdsp6 backward compatibility", nullptr, OPT_mqdsp6_compat, Option::FlagClass, 0, DriverOption | CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mqpx", nullptr, nullptr, OPT_mqpx, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "MQ", "Specify name of main file output to quote in depfile", nullptr, OPT_MQ, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mrdrnd", nullptr, nullptr, OPT_mrdrnd, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mrdseed", nullptr, nullptr, OPT_mrdseed, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mreassociate", "Allow reassociation transformations for floating-point instructions", nullptr, OPT_mreassociate, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mrecip=", nullptr, nullptr, OPT_mrecip_EQ, Option::CommaJoinedClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mrecip", nullptr, nullptr, OPT_mrecip, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mred-zone", nullptr, nullptr, OPT_mred_zone, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mregparm=", nullptr, nullptr, OPT_mregparm_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mregparm", "Limit the number of registers available for integer arguments", nullptr, OPT_mregparm, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mrelax-all", "(integrated-as) Relax all machine instructions", nullptr, OPT_mrelax_all, Option::FlagClass, 0, CC1Option | CC1AsOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "mrelax-relocations", "Use relaxable elf relocations", nullptr, OPT_mrelax_relocations, Option::FlagClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mrelocation-model", "The relocation model to use", nullptr, OPT_mrelocation_model, Option::SeparateClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, "static,pic,ropi,rwpi,ropi-rwpi,dynamic-no-pic"},

{prefix_1, "mrestrict-it", "Disallow generation of deprecated IT blocks for ARMv8. It is on by default for ARMv8 Thumb mode.", nullptr, OPT_mrestrict_it, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mretpoline-external-thunk", nullptr, nullptr, OPT_mretpoline_external_thunk, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mretpoline", nullptr, nullptr, OPT_mretpoline, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mrtd", "Make StdCall calling convention the default", nullptr, OPT_mrtd, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mrtm", nullptr, nullptr, OPT_mrtm, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msahf", nullptr, nullptr, OPT_msahf, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msave-temp-labels", "Save temporary labels in the symbol table. Note this may change .s semantics and shouldn't generally be used on compiler-generated code.", nullptr, OPT_msave_temp_labels, Option::FlagClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "msgx", nullptr, nullptr, OPT_msgx, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msha", nullptr, nullptr, OPT_msha, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mshstk", nullptr, nullptr, OPT_mshstk, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msimd128", nullptr, nullptr, OPT_msimd128, Option::FlagClass, 0, 0, OPT_m_wasm_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msingle-float", nullptr, nullptr, OPT_msingle_float, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msmall-data-threshold=", nullptr, nullptr, OPT_msmall_data_threshold_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_G, nullptr, nullptr},
{prefix_1, "msoft-float", "Use software floating point", nullptr, OPT_msoft_float, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "msse2", nullptr, nullptr, OPT_msse2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msse3", nullptr, nullptr, OPT_msse3, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msse4.1", nullptr, nullptr, OPT_msse4_1, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msse4.2", nullptr, nullptr, OPT_msse4_2, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msse4a", nullptr, nullptr, OPT_msse4a, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "msse4", nullptr, nullptr, OPT_msse4, Option::FlagClass, 0, 0, OPT_INVALID, OPT_msse4_2, nullptr, nullptr},
{prefix_1, "msse", nullptr, nullptr, OPT_msse, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mssse3", nullptr, nullptr, OPT_mssse3, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mstack-alignment=", "Set the stack alignment", nullptr, OPT_mstack_alignment, Option::JoinedClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mstack-probe-size=", "Set the stack probe size", nullptr, OPT_mstack_probe_size, Option::JoinedClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mstackrealign", "Force realign the stack at entry to every function", nullptr, OPT_mstackrealign, Option::FlagClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mstrict-align", "Force all memory accesses to be aligned (same as mno-unaligned-access)", nullptr, OPT_mstrict_align, Option::FlagClass, 0, CC1Option | HelpHidden, OPT_INVALID, OPT_mno_unaligned_access, nullptr, nullptr},

{prefix_1, "mt-migrate-directory", "Directory for temporary files produced during ARC or ObjC migration", nullptr, OPT_mt_migrate_directory, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mtbm", nullptr, nullptr, OPT_mtbm, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "MTd", "Use static debug run-time", nullptr, OPT__SLASH_MTd, Option::FlagClass, 0, CLOption | DriverOption, OPT__SLASH_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mthread-model", "The thread model to use, e.g. posix, single (posix by default)", nullptr, OPT_mthread_model, Option::SeparateClass, 0, CC1Option, OPT_m_Group, OPT_INVALID, nullptr, "posix,single"},

{prefix_1, "mthreads", nullptr, nullptr, OPT_mthreads, Option::JoinedClass, 0, DriverOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mthumb", nullptr, nullptr, OPT_mthumb, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mtp=", "Read thread pointer from coprocessor register (ARM only)", nullptr, OPT_mtp_mode_EQ, Option::JoinedClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, "soft, cp15"},

{prefix_1, "mtp", "Mode for reading thread pointer", nullptr, OPT_mtp, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mtune=", nullptr, nullptr, OPT_mtune_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mtvos-simulator-version-min=", nullptr, nullptr, OPT_mtvos_simulator_version_min_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mtvos-version-min=", nullptr, nullptr, OPT_mtvos_version_min_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "MT", "Specify name of main file output in depfile", nullptr, OPT_MT, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "MT", "Use static run-time", nullptr, OPT__SLASH_MT, Option::FlagClass, 0, CLOption | DriverOption, OPT__SLASH_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "muclibc", nullptr, nullptr, OPT_muclibc, Option::FlagClass, 0, HelpHidden | HelpHidden, OPT_m_libc_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "multi_module", nullptr, nullptr, OPT_multi__module, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "multiply_defined_unused", nullptr, nullptr, OPT_multiply__defined__unused, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "multiply_defined", nullptr, nullptr, OPT_multiply__defined, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "munaligned-access", "Allow memory accesses to be unaligned (AArch32/AArch64 only)", nullptr, OPT_munaligned_access, Option::FlagClass, 0, 0, OPT_m_arm_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "municode", nullptr, nullptr, OPT_municode, Option::JoinedClass, 0, DriverOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "munwind-tables", "Generate unwinding tables for all functions", nullptr, OPT_munwind_tables, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mv4", nullptr, nullptr, OPT_mv4, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_Group, OPT_mcpu_EQ, "hexagonv4\0", nullptr},
{prefix_1, "mv55", nullptr, nullptr, OPT_mv55, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_Group, OPT_mcpu_EQ, "hexagonv55\0", nullptr},
{prefix_1, "mv5", nullptr, nullptr, OPT_mv5, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_Group, OPT_mcpu_EQ, "hexagonv5\0", nullptr},
{prefix_1, "mv60", nullptr, nullptr, OPT_mv60, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_Group, OPT_mcpu_EQ, "hexagonv60\0", nullptr},
{prefix_1, "mv62", nullptr, nullptr, OPT_mv62, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_Group, OPT_mcpu_EQ, "hexagonv62\0", nullptr},
{prefix_1, "mv65", nullptr, nullptr, OPT_mv65, Option::FlagClass, 0, 0, OPT_m_hexagon_Features_Group, OPT_mcpu_EQ, "hexagonv65\0", nullptr},
{prefix_1, "mvaes", nullptr, nullptr, OPT_mvaes, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mvpclmulqdq", nullptr, nullptr, OPT_mvpclmulqdq, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mvsx", nullptr, nullptr, OPT_mvsx, Option::FlagClass, 0, 0, OPT_m_ppc_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mvx", nullptr, nullptr, OPT_mvx, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "MV", "Use NMake/Jom format for the depfile", nullptr, OPT_MV, Option::FlagClass, 0, CC1Option, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mwarn-nonportable-cfstrings", nullptr, nullptr, OPT_mwarn_nonportable_cfstrings, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mwatchos-simulator-version-min=", nullptr, nullptr, OPT_mwatchos_simulator_version_min_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mwatchos-version-min=", nullptr, nullptr, OPT_mwatchos_version_min_EQ, Option::JoinedClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mwatchsimulator-version-min=", nullptr, nullptr, OPT_mwatchsimulator_version_min_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_mwatchos_simulator_version_min_EQ, nullptr, nullptr},
{prefix_1, "mwindows", nullptr, nullptr, OPT_mwindows, Option::JoinedClass, 0, DriverOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mx32", nullptr, nullptr, OPT_mx32, Option::FlagClass, 0, DriverOption | CoreOption, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mx87", nullptr, nullptr, OPT_mx87, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mxgot", nullptr, nullptr, OPT_mxgot, Option::FlagClass, 0, 0, OPT_m_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mxnack", "Enable XNACK (AMDGPU only)", nullptr, OPT_mxnack, Option::FlagClass, 0, 0, OPT_m_amdgpu_Features_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "mxop", nullptr, nullptr, OPT_mxop, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mxsavec", nullptr, nullptr, OPT_mxsavec, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mxsaveopt", nullptr, nullptr, OPT_mxsaveopt, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mxsaves", nullptr, nullptr, OPT_mxsaves, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mxsave", nullptr, nullptr, OPT_mxsave, Option::FlagClass, 0, CoreOption, OPT_m_x86_Features_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "mzvector", nullptr, nullptr, OPT_mzvector, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fzvector, nullptr, nullptr},
{prefix_1, "M", "Like -MD, but also implies -E and writes to stdout by default", nullptr, OPT_M, Option::FlagClass, 0, 0, OPT_M_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "new-struct-path-tbaa", "Enable enhanced struct-path aware Type Based Alias Analysis", nullptr, OPT_new_struct_path_tbaa, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "no-canonical-prefixes", "Use relative instead of canonical paths", nullptr, OPT_no_canonical_prefixes, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "no-code-completion-globals", "Do not include global declarations in code-completion results.", nullptr, OPT_no_code_completion_globals, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "no-code-completion-ns-level-decls", "Do not include declarations inside namespaces (incl. global namespace) in the code-completion results.", nullptr, OPT_no_code_completion_ns_level_decls, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "no-cpp-precomp", nullptr, nullptr, OPT_no_cpp_precomp, Option::FlagClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "no-cuda-gpu-arch=", "Remove GPU architecture (e.g. sm_35) from the list of GPUs to compile for. 'all' resets the list to its default value.", nullptr, OPT_no_cuda_gpu_arch_EQ, Option::JoinedClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "no-cuda-noopt-device-debug", nullptr, nullptr, OPT_no_cuda_noopt_device_debug, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "no-cuda-version-check", "Don't error out if the detected version of the CUDA install is too low for the requested CUDA gpu architecture.", nullptr, OPT_no_cuda_version_check, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "no-emit-llvm-uselists", "Don't preserve order of LLVM use-lists when serializing", nullptr, OPT_no_emit_llvm_uselists, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "no-finalize-removal", "Do not remove finalize method in gc mode", nullptr, OPT_migrator_no_finalize_removal, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "no-implicit-float", "Don't generate implicit floating point instructions", nullptr, OPT_no_implicit_float, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "no-integrated-as", nullptr, nullptr, OPT_anonymous_25, Option::FlagClass, 0, CC1Option | DriverOption, OPT_INVALID, OPT_fno_integrated_as, nullptr, nullptr},
{prefix_4, "no-integrated-cpp", nullptr, nullptr, OPT_no_integrated_cpp, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "no-line-commands", nullptr, nullptr, OPT__no_line_commands, Option::FlagClass, 0, 0, OPT_INVALID, OPT_P, nullptr, nullptr},
{prefix_1, "no-ns-alloc-error", "Do not error on use of NSAllocateCollectable/NSReallocateCollectable", nullptr, OPT_migrator_no_nsalloc_error, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "no-pedantic", nullptr, nullptr, OPT_no_pedantic, Option::FlagClass, 0, 0, OPT_pedantic_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "no-pie", nullptr, nullptr, OPT_no_pie, Option::FlagClass, 0, 0, OPT_INVALID, OPT_nopie, nullptr, nullptr},
{prefix_1, "no-pthread", nullptr, nullptr, OPT_no_pthread, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "no-standard-includes", nullptr, nullptr, OPT__no_standard_includes, Option::FlagClass, 0, 0, OPT_INVALID, OPT_nostdinc, nullptr, nullptr},
{prefix_3, "no-standard-libraries", nullptr, nullptr, OPT__no_standard_libraries, Option::FlagClass, 0, 0, OPT_INVALID, OPT_nostdlib, nullptr, nullptr},
{prefix_1, "no-struct-path-tbaa", "Turn off struct-path aware Type Based Alias Analysis", nullptr, OPT_no_struct_path_tbaa, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "no-system-header-prefix=", "Treat all #include paths starting with <prefix> as not including a system header.", "<prefix>", OPT_no_system_header_prefix, Option::JoinedClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "no-system-header-prefix", nullptr, nullptr, OPT_anonymous_23, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_no_system_header_prefix, nullptr, nullptr},
{prefix_3, "no-undefined", nullptr, nullptr, OPT__no_undefined, Option::FlagClass, 0, LinkerInput, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "no-warnings", nullptr, nullptr, OPT__no_warnings, Option::FlagClass, 0, 0, OPT_INVALID, OPT_w, nullptr, nullptr},
{prefix_1, "no_dead_strip_inits_and_terms", nullptr, nullptr, OPT_no__dead__strip__inits__and__terms, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nobuiltininc", "Disable builtin #include directories", nullptr, OPT_nobuiltininc, Option::FlagClass, 0, CC1Option | CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "nocpp", nullptr, nullptr, OPT_nocpp, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nocudainc", nullptr, nullptr, OPT_nocudainc, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nocudalib", nullptr, nullptr, OPT_nocudalib, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nodefaultlibs", nullptr, nullptr, OPT_nodefaultlibs, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nofixprebinding", nullptr, nullptr, OPT_nofixprebinding, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nolibc", nullptr, nullptr, OPT_nolibc, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "nologo", nullptr, nullptr, OPT__SLASH_nologo, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nomultidefs", nullptr, nullptr, OPT_nomultidefs, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nopie", nullptr, nullptr, OPT_nopie, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "noprebind", nullptr, nullptr, OPT_noprebind, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "noseglinkedit", nullptr, nullptr, OPT_noseglinkedit, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nostartfiles", nullptr, nullptr, OPT_nostartfiles, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nostdinc++", "Disable standard #include directories for the C++ standard library", nullptr, OPT_nostdincxx, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "nostdinc", nullptr, nullptr, OPT_nostdinc, Option::FlagClass, 0, CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nostdlib++", nullptr, nullptr, OPT_nostdlibxx, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nostdlibinc", nullptr, nullptr, OPT_nostdlibinc, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nostdlib", nullptr, nullptr, OPT_nostdlib, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "nostdsysteminc", "Disable standard system #include directories", nullptr, OPT_nostdsysteminc, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "n", "Don't automatically start assembly file with a text section", nullptr, OPT_n, Option::FlagClass, 0, CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "O0", nullptr, nullptr, OPT_O0, Option::FlagClass, 0, CC1Option | HelpHidden, OPT_O_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "O0", nullptr, nullptr, OPT__SLASH_O0, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_O0, nullptr, nullptr},
{prefix_1, "O4", nullptr, nullptr, OPT_O4, Option::FlagClass, 0, CC1Option | HelpHidden, OPT_O_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "ObjC++", "Treat source input files as Objective-C++ inputs", nullptr, OPT_ObjCXX, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objc-isystem", "Add directory to the ObjC SYSTEM include search path", "<directory>", OPT_objc_isystem, Option::JoinedOrSeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-atomic-property", "Make migration to 'atomic' properties", nullptr, OPT_objcmt_atomic_property, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-all", "Enable migration to modern ObjC", nullptr, OPT_objcmt_migrate_all, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-annotation", "Enable migration to property and method annotations", nullptr, OPT_objcmt_migrate_annotation, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-designated-init", "Enable migration to infer NS_DESIGNATED_INITIALIZER for initializer methods", nullptr, OPT_objcmt_migrate_designated_init, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-instancetype", "Enable migration to infer instancetype for method result type", nullptr, OPT_objcmt_migrate_instancetype, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-literals", "Enable migration to modern ObjC literals", nullptr, OPT_objcmt_migrate_literals, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-ns-macros", "Enable migration to NS_ENUM/NS_OPTIONS macros", nullptr, OPT_objcmt_migrate_nsmacros, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-property-dot-syntax", "Enable migration of setter/getter messages to property-dot syntax", nullptr, OPT_objcmt_migrate_property_dot_syntax, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-property", "Enable migration to modern ObjC property", nullptr, OPT_objcmt_migrate_property, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-protocol-conformance", "Enable migration to add protocol conformance on classes", nullptr, OPT_objcmt_migrate_protocol_conformance, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-readonly-property", "Enable migration to modern ObjC readonly property", nullptr, OPT_objcmt_migrate_readonly_property, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-readwrite-property", "Enable migration to modern ObjC readwrite property", nullptr, OPT_objcmt_migrate_readwrite_property, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-migrate-subscripting", "Enable migration to modern ObjC subscripting", nullptr, OPT_objcmt_migrate_subscripting, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-ns-nonatomic-iosonly", "Enable migration to use NS_NONATOMIC_IOSONLY macro for setting property's 'atomic' attribute", nullptr, OPT_objcmt_ns_nonatomic_iosonly, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-returns-innerpointer-property", "Enable migration to annotate property with NS_RETURNS_INNER_POINTER", nullptr, OPT_objcmt_returns_innerpointer_property, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcmt-white-list-dir-path=", nullptr, nullptr, OPT_anonymous_2, Option::JoinedClass, 0, CC1Option, OPT_INVALID, OPT_objcmt_whitelist_dir_path, nullptr, nullptr},
{prefix_1, "objcmt-whitelist-dir-path=", "Only modify files with a filename contained in the provided directory path", nullptr, OPT_objcmt_whitelist_dir_path, Option::JoinedClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "objcxx-isystem", "Add directory to the ObjC++ SYSTEM include search path", "<directory>", OPT_objcxx_isystem, Option::JoinedOrSeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "ObjC", "Treat source input files as Objective-C inputs", nullptr, OPT_ObjC, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "object", nullptr, nullptr, OPT_object, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Od", "Disable optimization", nullptr, OPT__SLASH_Od, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_O0, nullptr, nullptr},

{prefix_1, "Ofast", nullptr, nullptr, OPT_Ofast, Option::JoinedClass, 0, CC1Option, OPT_O_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Og", nullptr, nullptr, OPT__SLASH_Og, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Oi-", "Disable use of builtin functions", nullptr, OPT__SLASH_Oi_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_builtin, nullptr, nullptr},

{prefix_2, "Oi", "Enable use of builtin functions", nullptr, OPT__SLASH_Oi, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fbuiltin, nullptr, nullptr},

{prefix_2, "openmp-", nullptr, nullptr, OPT__SLASH_openmp_, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "openmp", nullptr, nullptr, OPT__SLASH_openmp, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "opt-record-file", "File name to use for YAML optimization record output", nullptr, OPT_opt_record_file, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "optimize=", nullptr, nullptr, OPT__optimize_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_O, nullptr, nullptr},
{prefix_3, "optimize", nullptr, nullptr, OPT__optimize, Option::FlagClass, 0, 0, OPT_INVALID, OPT_O, nullptr, nullptr},
{prefix_2, "Os", "Optimize for size", nullptr, OPT__SLASH_Os, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_O, "s\0", nullptr},

{prefix_2, "Ot", "Optimize for speed", nullptr, OPT__SLASH_Ot, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_O, "2\0", nullptr},

{prefix_1, "output-asm-variant", "Select the asm variant index to use for output", nullptr, OPT_output_asm_variant, Option::SeparateClass, 0, CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "output-class-directory=", nullptr, nullptr, OPT__output_class_directory_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_foutput_class_dir_EQ, nullptr, nullptr},
{prefix_3, "output-class-directory", nullptr, nullptr, OPT__output_class_directory, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_foutput_class_dir_EQ, nullptr, nullptr},
{prefix_3, "output=", nullptr, nullptr, OPT__output_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_o, nullptr, nullptr},
{prefix_3, "output", nullptr, nullptr, OPT__output, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_o, nullptr, nullptr},
{prefix_1, "O", nullptr, nullptr, OPT_O_flag, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_O, "2\0", nullptr},
{prefix_1, "O", nullptr, nullptr, OPT_O, Option::JoinedClass, 0, CC1Option, OPT_O_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "O", "Optimization level", nullptr, OPT__SLASH_O, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "o", "Write output to <file>", "<file>", OPT_o, Option::JoinedOrSeparateClass, 0, DriverOption | RenderAsInput | CC1Option | CC1AsOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "o", "Set output file or directory (ends in / or \\)", "<file or directory>", OPT__SLASH_o, Option::JoinedOrSeparateClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "pagezero_size", nullptr, nullptr, OPT_pagezero__size, Option::JoinedOrSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "param=", nullptr, nullptr, OPT__param_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT__param, nullptr, nullptr},
{prefix_3, "param", nullptr, nullptr, OPT__param, Option::SeparateClass, 0, 0, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},
{prefix_4, "pass-exit-codes", nullptr, nullptr, OPT_pass_exit_codes, Option::FlagClass, 0, Unsupported, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_4, "pedantic-errors", nullptr, nullptr, OPT_pedantic_errors, Option::FlagClass, 0, CC1Option, OPT_pedantic_Group, OPT_INVALID, nullptr, nullptr},
{prefix_4, "pedantic", nullptr, nullptr, OPT_pedantic, Option::FlagClass, 0, CC1Option, OPT_pedantic_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "pg", "Enable mcount instrumentation", nullptr, OPT_pg, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "pic-is-pie", "File is for a position independent executable", nullptr, OPT_pic_is_pie, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "pic-level", "Value for __PIC__", nullptr, OPT_pic_level, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "pie", nullptr, nullptr, OPT_pie, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_4, "pipe", "Use pipes between commands, when possible", nullptr, OPT_pipe, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "plugin-arg-", "Pass <arg> to plugin <name>", "<name> <arg>", OPT_plugin_arg, Option::JoinedAndSeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "plugin", "Use the named plugin action instead of the default action (use \"help\" to list available options)", "<name>", OPT_plugin, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "preamble-bytes=", "Assume that the precompiled header is a precompiled preamble covering the first N bytes of the main file", nullptr, OPT_preamble_bytes_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "prebind_all_twolevel_modules", nullptr, nullptr, OPT_prebind__all__twolevel__modules, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "prebind", nullptr, nullptr, OPT_prebind, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "precompile", "Only precompile the input", nullptr, OPT__precompile, Option::FlagClass, 0, DriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "prefix=", nullptr, nullptr, OPT__prefix_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_B, nullptr, nullptr},
{prefix_3, "prefix", nullptr, nullptr, OPT__prefix, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_B, nullptr, nullptr},
{prefix_1, "preload", nullptr, nullptr, OPT_preload, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "preprocess", nullptr, nullptr, OPT__preprocess, Option::FlagClass, 0, 0, OPT_INVALID, OPT_E, nullptr, nullptr},
{prefix_1, "print-decl-contexts", "Print DeclContexts and their Decls", nullptr, OPT_print_decl_contexts, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "print-diagnostic-categories", nullptr, nullptr, OPT__print_diagnostic_categories, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_4, "print-file-name=", "Print the full library path of <file>", "<file>", OPT_print_file_name_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "print-file-name", nullptr, nullptr, OPT__print_file_name, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_print_file_name_EQ, nullptr, nullptr},
{prefix_1, "print-ivar-layout", "Enable Objective-C Ivar layout bitmap print trace", nullptr, OPT_print_ivar_layout, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "print-libgcc-file-name", "Print the library path for the currently used compiler runtime library (\"libgcc.a\" or \"libclang_rt.builtins.*.a\")", nullptr, OPT_print_libgcc_file_name, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "print-missing-file-dependencies", nullptr, nullptr, OPT__print_missing_file_dependencies, Option::FlagClass, 0, 0, OPT_INVALID, OPT_MG, nullptr, nullptr},
{prefix_4, "print-multi-directory", nullptr, nullptr, OPT_print_multi_directory, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_4, "print-multi-lib", nullptr, nullptr, OPT_print_multi_lib, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_4, "print-multi-os-directory", nullptr, nullptr, OPT_print_multi_os_directory, Option::FlagClass, 0, Unsupported, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "print-preamble", "Print the \"preamble\" of a file, which is a candidate for implicit precompiled headers.", nullptr, OPT_print_preamble, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_4, "print-prog-name=", "Print the full program path of <name>", "<name>", OPT_print_prog_name_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "print-prog-name", nullptr, nullptr, OPT__print_prog_name, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_print_prog_name_EQ, nullptr, nullptr},
{prefix_4, "print-resource-dir", "Print the resource directory pathname", nullptr, OPT_print_resource_dir, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "print-search-dirs", "Print the paths used for finding libraries and programs", nullptr, OPT_print_search_dirs, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "print-stats", "Print performance metrics and statistics", nullptr, OPT_print_stats, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "private_bundle", nullptr, nullptr, OPT_private__bundle, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "profile-blocks", nullptr, nullptr, OPT__profile_blocks, Option::FlagClass, 0, 0, OPT_INVALID, OPT_a, nullptr, nullptr},
{prefix_3, "profile", nullptr, nullptr, OPT__profile, Option::FlagClass, 0, 0, OPT_INVALID, OPT_p, nullptr, nullptr},
{prefix_1, "pthreads", nullptr, nullptr, OPT_pthreads, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "pthread", "Support POSIX threads in generated code", nullptr, OPT_pthread, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "ptxas-path=", "Path to ptxas (used for compiling CUDA code)", nullptr, OPT_ptxas_path_EQ, Option::JoinedClass, 0, 0, OPT_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "P", "Disable linemarker output in -E mode", nullptr, OPT_P, Option::FlagClass, 0, CC1Option, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "P", "Preprocess to file", nullptr, OPT__SLASH_P, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "p", nullptr, nullptr, OPT_p, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Qfast_transcendentals", nullptr, nullptr, OPT__SLASH_Qfast_transcendentals, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "QIfist", nullptr, nullptr, OPT__SLASH_QIfist, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Qimprecise_fwaits", nullptr, nullptr, OPT__SLASH_Qimprecise_fwaits, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Qn", nullptr, nullptr, OPT_Qn, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Qpar", nullptr, nullptr, OPT__SLASH_Qpar, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Qunused-arguments", "Don't emit warning for unused driver arguments", nullptr, OPT_Qunused_arguments, Option::FlagClass, 0, DriverOption | CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Qvec-report", nullptr, nullptr, OPT__SLASH_Qvec_report, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Qvec-", "Disable the loop vectorization passes", nullptr, OPT__SLASH_Qvec_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_vectorize, nullptr, nullptr},

{prefix_2, "Qvec", "Enable the loop vectorization passes", nullptr, OPT__SLASH_Qvec, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fvectorize, nullptr, nullptr},

{prefix_1, "Q", nullptr, nullptr, OPT_Q, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "rdynamic", nullptr, nullptr, OPT_rdynamic, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "read_only_relocs", nullptr, nullptr, OPT_read__only__relocs, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "relaxed-aliasing", "Turn off Type Based Alias Analysis", nullptr, OPT_relaxed_aliasing, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "relocatable-pch", "Whether to build a relocatable precompiled header", nullptr, OPT_relocatable_pch, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "remap-file", "Replace the contents of the <from> file with the contents of the <to> file", "<from>;<to>", OPT_remap_file, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "remap", nullptr, nullptr, OPT_remap, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "resource-dir=", nullptr, nullptr, OPT_resource_dir_EQ, Option::JoinedClass, 0, DriverOption | CoreOption, OPT_INVALID, OPT_resource_dir, nullptr, nullptr},
{prefix_1, "resource-dir", "The directory which holds the compiler resource files", nullptr, OPT_resource_dir, Option::SeparateClass, 0, DriverOption | CC1Option | CoreOption | HelpHidden, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "resource=", nullptr, nullptr, OPT__resource_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_fcompile_resource_EQ, nullptr, nullptr},
{prefix_3, "resource", nullptr, nullptr, OPT__resource, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_fcompile_resource_EQ, nullptr, nullptr},
{prefix_1, "rewrite-legacy-objc", "Rewrite Legacy Objective-C source to C++", nullptr, OPT_rewrite_legacy_objc, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "rewrite-macros", "Expand macros without full preprocessing", nullptr, OPT_rewrite_macros, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "rewrite-objc", "Rewrite Objective-C source to C++", nullptr, OPT_rewrite_objc, Option::FlagClass, 0, DriverOption | CC1Option, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "rewrite-test", "Rewriter playground", nullptr, OPT_rewrite_test, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Rpass-analysis=", "Report transformation analysis from optimization passes whose name matches the given POSIX regular expression", nullptr, OPT_Rpass_analysis_EQ, Option::JoinedClass, 0, CC1Option, OPT_R_value_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Rpass-missed=", "Report missed transformations by optimization passes whose name matches the given POSIX regular expression", nullptr, OPT_Rpass_missed_EQ, Option::JoinedClass, 0, CC1Option, OPT_R_value_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Rpass=", "Report transformations performed by optimization passes whose name matches the given POSIX regular expression", nullptr, OPT_Rpass_EQ, Option::JoinedClass, 0, CC1Option, OPT_R_value_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "rpath", nullptr, nullptr, OPT_rpath, Option::SeparateClass, 0, LinkerInput, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "rsp-quoting=", "Set the rsp quoting to either 'posix', or 'windows'", nullptr, OPT_rsp_quoting, Option::JoinedClass, 0, CoreOption | DriverOption | HelpHidden, OPT_internal_driver_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "RTC", nullptr, nullptr, OPT__SLASH_RTC, Option::JoinedClass, 0, CLOption | DriverOption | HelpHidden, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_4, "rtlib=", "Compiler runtime library to use", nullptr, OPT_rtlib_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "rtlib", nullptr, nullptr, OPT__rtlib, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_rtlib_EQ, nullptr, nullptr},
{prefix_1, "R", "Enable the specified remark", "<remark>", OPT_R_Joined, Option::JoinedClass, 0, CC1Option | CoreOption, OPT_R_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "r", nullptr, nullptr, OPT_r, Option::FlagClass, 0, LinkerInput | NoArgumentUnused, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_4, "save-stats=", "Save llvm statistics.", nullptr, OPT_save_stats_EQ, Option::JoinedClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "save-stats", "Save llvm statistics.", nullptr, OPT_save_stats, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_save_stats_EQ, "cwd\0", nullptr},

{prefix_4, "save-temps=", "Save intermediate compilation results.", nullptr, OPT_save_temps_EQ, Option::JoinedClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "save-temps", "Save intermediate compilation results", nullptr, OPT_save_temps, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_save_temps_EQ, "cwd\0", nullptr},

{prefix_2, "sdl-", nullptr, nullptr, OPT__SLASH_sdl_, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "sdl", nullptr, nullptr, OPT__SLASH_sdl, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "sectalign", nullptr, nullptr, OPT_sectalign, Option::MultiArgClass, 3, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "sectcreate", nullptr, nullptr, OPT_sectcreate, Option::MultiArgClass, 3, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "sectobjectsymbols", nullptr, nullptr, OPT_sectobjectsymbols, Option::MultiArgClass, 2, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "sectorder", nullptr, nullptr, OPT_sectorder, Option::MultiArgClass, 3, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "seg1addr", nullptr, nullptr, OPT_seg1addr, Option::JoinedOrSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "seg_addr_table_filename", nullptr, nullptr, OPT_seg__addr__table__filename, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "seg_addr_table", nullptr, nullptr, OPT_seg__addr__table, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "segaddr", nullptr, nullptr, OPT_segaddr, Option::MultiArgClass, 2, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "segcreate", nullptr, nullptr, OPT_segcreate, Option::MultiArgClass, 3, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "seglinkedit", nullptr, nullptr, OPT_seglinkedit, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "segprot", nullptr, nullptr, OPT_segprot, Option::MultiArgClass, 3, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "segs_read_only_addr", nullptr, nullptr, OPT_segs__read__only__addr, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "segs_read_write_addr", nullptr, nullptr, OPT_segs__read__write__addr, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "segs_read_", nullptr, nullptr, OPT_segs__read__, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "serialize-diagnostic-file", "File for serializing diagnostics in a binary format", "<filename>", OPT_diagnostic_serialized_file, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "serialize-diagnostics", "Serialize compiler diagnostics to a file", nullptr, OPT__serialize_diags, Option::SeparateClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "shared-libasan", nullptr, nullptr, OPT_anonymous_3, Option::FlagClass, 0, 0, OPT_INVALID, OPT_shared_libsan, nullptr, nullptr},
{prefix_1, "shared-libgcc", nullptr, nullptr, OPT_shared_libgcc, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "shared-libsan", nullptr, nullptr, OPT_shared_libsan, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_4, "shared", nullptr, nullptr, OPT_shared, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "show-encoding", "Show instruction encoding information in transliterate mode", nullptr, OPT_show_encoding, Option::FlagClass, 0, CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "show-includes", "Print cl.exe style /showIncludes to stdout", nullptr, OPT_show_includes, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "show-inst", "Show internal instruction representation in transliterate mode", nullptr, OPT_show_inst, Option::FlagClass, 0, CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "showIncludes", "Print info about included files to stderr", nullptr, OPT__SLASH_showIncludes, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_show_includes, nullptr, nullptr},

{prefix_3, "signed-char", nullptr, nullptr, OPT__signed_char, Option::FlagClass, 0, 0, OPT_INVALID, OPT_fsigned_char, nullptr, nullptr},
{prefix_1, "single_module", nullptr, nullptr, OPT_single__module, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "source-charset:", "Source encoding, supports only UTF-8", nullptr, OPT__SLASH_source_charset, Option::JoinedClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_finput_charset_EQ, nullptr, nullptr},

{prefix_4, "specs=", nullptr, nullptr, OPT_specs_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_4, "specs", nullptr, nullptr, OPT_specs, Option::SeparateClass, 0, Unsupported, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "split-dwarf-file", "File name to use for split dwarf debug info output", nullptr, OPT_split_dwarf_file, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "split-dwarf", "Split out the dwarf .dwo sections", nullptr, OPT_split_dwarf, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "split-stacks", "Try to use a split stack if possible.", nullptr, OPT_split_stacks, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "stack-protector-buffer-size", "Lower bound for a buffer to be considered for stack protection", nullptr, OPT_stack_protector_buffer_size, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "stack-protector", "Enable stack protectors", nullptr, OPT_stack_protector, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "static-define", "Should __STATIC__ be defined", nullptr, OPT_static_define, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "static-libgcc", nullptr, nullptr, OPT_static_libgcc, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "static-libgfortran", nullptr, nullptr, OPT_static_libgfortran, Option::FlagClass, 0, 0, OPT_gfortran_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "static-libsan", nullptr, nullptr, OPT_static_libsan, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "static-libstdc++", nullptr, nullptr, OPT_static_libstdcxx, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_4, "static", nullptr, nullptr, OPT_static, Option::FlagClass, 0, NoArgumentUnused, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "stats-file=", "Filename to write statistics to", nullptr, OPT_stats_file, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "std-default=", nullptr, nullptr, OPT_std_default_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "std:", "Language standard to compile for", nullptr, OPT__SLASH_std, Option::JoinedClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_4, "std=", "Language standard to compile for", nullptr, OPT_std_EQ, Option::JoinedClass, 0, CC1Option, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},

{prefix_4, "stdlib=", "C++ standard library to use", nullptr, OPT_stdlib_EQ, Option::JoinedClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, "libc++,libstdc++,platform"},

{prefix_3, "stdlib", nullptr, nullptr, OPT__stdlib, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_stdlib_EQ, nullptr, nullptr},
{prefix_3, "std", nullptr, nullptr, OPT__std, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_std_EQ, nullptr, nullptr},
{prefix_1, "sub_library", nullptr, nullptr, OPT_sub__library, Option::JoinedOrSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "sub_umbrella", nullptr, nullptr, OPT_sub__umbrella, Option::JoinedOrSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "sys-header-deps", "Include system headers in dependency output", nullptr, OPT_sys_header_deps, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "sysroot=", nullptr, nullptr, OPT__sysroot_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "sysroot", nullptr, nullptr, OPT__sysroot, Option::SeparateClass, 0, 0, OPT_INVALID, OPT__sysroot_EQ, nullptr, nullptr},
{prefix_3, "system-header-prefix=", "Treat all #include paths starting with <prefix> as including a system header.", "<prefix>", OPT_system_header_prefix, Option::JoinedClass, 0, CC1Option, OPT_clang_i_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "system-header-prefix", nullptr, nullptr, OPT_anonymous_22, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_system_header_prefix, nullptr, nullptr},
{prefix_1, "S", "Only run preprocess and compilation steps", nullptr, OPT_S, Option::FlagClass, 0, DriverOption | CC1Option, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "s", nullptr, nullptr, OPT_s, Option::FlagClass, 0, 0, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "target-abi", "Target a particular ABI type", nullptr, OPT_target_abi, Option::SeparateClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "target-cpu", "Target a specific cpu type", nullptr, OPT_target_cpu, Option::SeparateClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "target-feature", "Target specific attributes", nullptr, OPT_target_feature, Option::SeparateClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "target-help", nullptr, nullptr, OPT__target_help, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "target-linker-version", "Target linker version", nullptr, OPT_target_linker_version, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "target=", "Generate code for the given target", nullptr, OPT_target, Option::JoinedClass, 0, DriverOption | CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "target", nullptr, nullptr, OPT_target_legacy_spelling, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_target, nullptr, nullptr},
{prefix_1, "Tbss", "Set starting address of BSS to <addr>", "<addr>", OPT_Tbss, Option::JoinedOrSeparateClass, 0, 0, OPT_T_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "TC", "Treat all source files as C", nullptr, OPT__SLASH_TC, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Tc", "Specify a C source file", "<filename>", OPT__SLASH_Tc, Option::JoinedOrSeparateClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Tdata", "Set starting address of BSS to <addr>", "<addr>", OPT_Tdata, Option::JoinedOrSeparateClass, 0, 0, OPT_T_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "test-coverage", "Do not generate coverage files or remove coverage changes from IR", nullptr, OPT_test_coverage, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "time", "Time individual commands", nullptr, OPT_time, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "token-cache", "Use specified token cache file", "<path>", OPT_token_cache, Option::SeparateClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "TP", "Treat all source files as C++", nullptr, OPT__SLASH_TP, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Tp", "Specify a C++ source file", "<filename>", OPT__SLASH_Tp, Option::JoinedOrSeparateClass, 0, CLOption | DriverOption, OPT_cl_compile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "trace-includes", nullptr, nullptr, OPT__trace_includes, Option::FlagClass, 0, 0, OPT_INVALID, OPT_H, nullptr, nullptr},
{prefix_4, "traditional-cpp", "Enable some traditional CPP emulation", nullptr, OPT_traditional_cpp, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "traditional", nullptr, nullptr, OPT_traditional, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_4, "trigraphs", "Process trigraph sequences", nullptr, OPT_trigraphs, Option::FlagClass, 0, 0, OPT_INVALID, OPT_ftrigraphs, nullptr, nullptr},

{prefix_1, "trim-egraph", "Only show error-related paths in the analysis graph", nullptr, OPT_trim_egraph, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "triple=", nullptr, nullptr, OPT_triple_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_triple, nullptr, nullptr},
{prefix_1, "triple", "Specify target triple (e.g. i686-apple-darwin9)", nullptr, OPT_triple, Option::SeparateClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Ttext", "Set starting address of BSS to <addr>", "<addr>", OPT_Ttext, Option::JoinedOrSeparateClass, 0, 0, OPT_T_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "twolevel_namespace_hints", nullptr, nullptr, OPT_twolevel__namespace__hints, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "twolevel_namespace", nullptr, nullptr, OPT_twolevel__namespace, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "T", "Specify <script> as linker script", "<script>", OPT_T, Option::JoinedOrSeparateClass, 0, 0, OPT_T_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "t", nullptr, nullptr, OPT_t, Option::FlagClass, 0, 0, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "umbrella", nullptr, nullptr, OPT_umbrella, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "undefine-macro=", nullptr, nullptr, OPT__undefine_macro_EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_U, nullptr, nullptr},
{prefix_3, "undefine-macro", nullptr, nullptr, OPT__undefine_macro, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_U, nullptr, nullptr},
{prefix_1, "undefined", nullptr, nullptr, OPT_undefined, Option::JoinedOrSeparateClass, 0, 0, OPT_u_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "undef", "undef all system defines", nullptr, OPT_undef, Option::FlagClass, 0, CC1Option, OPT_u_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "unexported_symbols_list", nullptr, nullptr, OPT_unexported__symbols__list, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "unoptimized-cfg", "Generate unoptimized CFGs for all analyses", nullptr, OPT_analysis_UnoptimizedCFG, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "unsigned-char", nullptr, nullptr, OPT__unsigned_char, Option::FlagClass, 0, 0, OPT_INVALID, OPT_funsigned_char, nullptr, nullptr},
{prefix_3, "user-dependencies", nullptr, nullptr, OPT__user_dependencies, Option::FlagClass, 0, 0, OPT_INVALID, OPT_MM, nullptr, nullptr},
{prefix_2, "utf-8", "Set source and runtime encoding to UTF-8 (default)", nullptr, OPT__SLASH_utf8, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "U", "Undefine macro <macro>", "<macro>", OPT_U, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "U", "Undefine macro", "<macro>", OPT__SLASH_U, Option::JoinedOrSeparateClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_U, nullptr, nullptr},

{prefix_1, "u", nullptr, nullptr, OPT_u, Option::JoinedOrSeparateClass, 0, 0, OPT_u_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "u", nullptr, nullptr, OPT__SLASH_u, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "validate-charset-", nullptr, nullptr, OPT__SLASH_validate_charset_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "no-invalid-source-encoding\0", nullptr},
{prefix_2, "validate-charset", nullptr, nullptr, OPT__SLASH_validate_charset, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "invalid-source-encoding\0", nullptr},
{prefix_2, "vd", "Control vtordisp placement", nullptr, OPT__SLASH_vd, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_vtordisp_mode_EQ, nullptr, nullptr},

{prefix_1, "vectorize-loops", "Run the Loop vectorization passes", nullptr, OPT_vectorize_loops, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "vectorize-slp", "Run the SLP vectorization passes", nullptr, OPT_vectorize_slp, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "verbose", nullptr, nullptr, OPT__verbose, Option::FlagClass, 0, 0, OPT_INVALID, OPT_v, nullptr, nullptr},
{prefix_3, "verify-debug-info", "Verify the binary representation of debug output", nullptr, OPT_verify_debug_info, Option::FlagClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "verify-ignore-unexpected=", "Ignore unexpected diagnostic messages", nullptr, OPT_verify_ignore_unexpected_EQ, Option::CommaJoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "verify-ignore-unexpected", "Ignore unexpected diagnostic messages", nullptr, OPT_verify_ignore_unexpected, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "verify-pch", "Load and verify that a pre-compiled header file is not stale", nullptr, OPT_verify_pch, Option::FlagClass, 0, CC1Option, OPT_Action_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "verify=", "Verify diagnostic output using comment directives that start with prefixes in the comma-separated sequence <prefixes>", "<prefixes>", OPT_verify_EQ, Option::CommaJoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "verify", "Equivalent to -verify=expected", nullptr, OPT_verify, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_3, "version", "Print version information", nullptr, OPT__version, Option::FlagClass, 0, CoreOption | CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "version", "Print the compiler version", nullptr, OPT_version, Option::FlagClass, 0, CC1Option | CC1AsOption | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_4, "via-file-asm", "Write assembly to file for input to assemble jobs", nullptr, OPT_via_file_asm, Option::FlagClass, 0, DriverOption | HelpHidden | CoreOption, OPT_internal_debug_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "vmb", "Use a best-case representation method for member pointers", nullptr, OPT__SLASH_vmb, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "vmg", "Use a most-general representation for member pointers", nullptr, OPT__SLASH_vmg, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "vmm", "Set the default most-general representation to multiple inheritance", nullptr, OPT__SLASH_vmm, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "vms", "Set the default most-general representation to single inheritance", nullptr, OPT__SLASH_vms, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "vmv", "Set the default most-general representation to virtual inheritance", nullptr, OPT__SLASH_vmv, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "volatile:iso", "Volatile loads and stores have standard semantics", nullptr, OPT__SLASH_volatile_iso, Option::FlagClass, 0, CLOption | DriverOption, OPT__SLASH_volatile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "volatile:ms", "Volatile loads and stores have acquire and release semantics", nullptr, OPT__SLASH_volatile_ms, Option::FlagClass, 0, CLOption | DriverOption, OPT__SLASH_volatile_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "vtordisp-mode=", "Control vtordisp placement on win32 targets", nullptr, OPT_vtordisp_mode_EQ, Option::JoinedClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "V", nullptr, nullptr, OPT_V, Option::JoinedOrSeparateClass, 0, DriverOption | Unsupported, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "V", nullptr, nullptr, OPT__SLASH_V, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "v", "Show commands to run and use verbose output", nullptr, OPT_v, Option::FlagClass, 0, CC1Option | CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "W0", "Disable all warnings", nullptr, OPT__SLASH_W0, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_w, nullptr, nullptr},

{prefix_2, "W1", "Enable -Wall", nullptr, OPT__SLASH_W1, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_Wall, nullptr, nullptr},

{prefix_2, "W2", "Enable -Wall", nullptr, OPT__SLASH_W2, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_Wall, nullptr, nullptr},

{prefix_2, "W3", "Enable -Wall", nullptr, OPT__SLASH_W3, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_Wall, nullptr, nullptr},

{prefix_2, "W4", "Enable -Wall and -Wextra", nullptr, OPT__SLASH_W4, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_WCL4, nullptr, nullptr},

{prefix_1, "Wa,", "Pass the comma separated arguments in <arg> to the assembler", "<arg>", OPT_Wa_COMMA, Option::CommaJoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Wall", nullptr, nullptr, OPT_Wall, Option::FlagClass, 0, CC1Option | HelpHidden, OPT_W_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Wall", "Enable -Weverything", nullptr, OPT__SLASH_Wall, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "everything\0", nullptr},

{prefix_3, "warn-=", nullptr, nullptr, OPT__warn__EQ, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_W_Joined, nullptr, nullptr},
{prefix_3, "warn-", nullptr, nullptr, OPT__warn_, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_W_Joined, nullptr, nullptr},
{prefix_1, "WCL4", nullptr, nullptr, OPT_WCL4, Option::FlagClass, 0, CC1Option | HelpHidden, OPT_W_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "wd4005", nullptr, nullptr, OPT__SLASH_wd4005, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "no-macro-redefined\0", nullptr},
{prefix_2, "wd4018", nullptr, nullptr, OPT__SLASH_wd4018, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "no-sign-compare\0", nullptr},
{prefix_2, "wd4100", nullptr, nullptr, OPT__SLASH_wd4100, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "no-unused-parameter\0", nullptr},
{prefix_2, "wd4910", nullptr, nullptr, OPT__SLASH_wd4910, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "no-dllexport-explicit-instantiation-decl\0", nullptr},
{prefix_2, "wd4996", nullptr, nullptr, OPT__SLASH_wd4996, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "no-deprecated-declarations\0", nullptr},
{prefix_1, "Wdeprecated", "Enable warnings for deprecated constructs and define __DEPRECATED", nullptr, OPT_Wdeprecated, Option::FlagClass, 0, CC1Option, OPT_W_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "weak-l", nullptr, nullptr, OPT_weak_l, Option::JoinedClass, 0, LinkerInput, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "weak_framework", nullptr, nullptr, OPT_weak__framework, Option::SeparateClass, 0, LinkerInput, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "weak_library", nullptr, nullptr, OPT_weak__library, Option::SeparateClass, 0, LinkerInput, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "weak_reference_mismatches", nullptr, nullptr, OPT_weak__reference__mismatches, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Wframe-larger-than=", nullptr, nullptr, OPT_Wframe_larger_than_EQ, Option::JoinedClass, 0, DriverOption, OPT_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "whatsloaded", nullptr, nullptr, OPT_whatsloaded, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "whyload", nullptr, nullptr, OPT_whyload, Option::FlagClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Wl,", "Pass the comma separated arguments in <arg> to the linker", "<arg>", OPT_Wl_COMMA, Option::CommaJoinedClass, 0, LinkerInput | RenderAsInput, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Wlarge-by-value-copy=", nullptr, nullptr, OPT_Wlarge_by_value_copy_EQ, Option::JoinedClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Wlarge-by-value-copy", "Warn if a function definition returns or accepts an object larger in bytes than a given value", nullptr, OPT_Wlarge_by_value_copy_def, Option::FlagClass, 0, HelpHidden, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Wlarger-than-", nullptr, nullptr, OPT_Wlarger_than_, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_Wlarger_than_EQ, nullptr, nullptr},
{prefix_1, "Wlarger-than=", nullptr, nullptr, OPT_Wlarger_than_EQ, Option::JoinedClass, 0, Ignored, OPT_clang_ignored_f_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "WL", nullptr, nullptr, OPT__SLASH_WL, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Wno-deprecated", nullptr, nullptr, OPT_Wno_deprecated, Option::FlagClass, 0, CC1Option, OPT_W_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Wno-nonportable-cfstrings", nullptr, nullptr, OPT_Wno_nonportable_cfstrings, Option::JoinedClass, 0, CC1Option, OPT_W_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Wno-rewrite-macros", "Silence ObjC rewriting warnings", nullptr, OPT_Wno_rewrite_macros, Option::FlagClass, 0, CC1Option | NoDriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Wno-write-strings", nullptr, nullptr, OPT_Wno_write_strings, Option::FlagClass, 0, CC1Option | HelpHidden, OPT_W_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Wnonportable-cfstrings", nullptr, nullptr, OPT_Wnonportable_cfstrings, Option::JoinedClass, 0, CC1Option, OPT_W_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "working-directory=", nullptr, nullptr, OPT_working_directory_EQ, Option::JoinedClass, 0, CC1Option, OPT_INVALID, OPT_working_directory, nullptr, nullptr},
{prefix_1, "working-directory", "Resolve file paths relative to the specified directory", nullptr, OPT_working_directory, Option::JoinedOrSeparateClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Wp,", "Pass the comma separated arguments in <arg> to the preprocessor", "<arg>", OPT_Wp_COMMA, Option::CommaJoinedClass, 0, 0, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Wp64", nullptr, nullptr, OPT__SLASH_Wp64, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_3, "write-dependencies", nullptr, nullptr, OPT__write_dependencies, Option::FlagClass, 0, 0, OPT_INVALID, OPT_MD, nullptr, nullptr},
{prefix_3, "write-user-dependencies", nullptr, nullptr, OPT__write_user_dependencies, Option::FlagClass, 0, 0, OPT_INVALID, OPT_MMD, nullptr, nullptr},
{prefix_1, "Wwrite-strings", nullptr, nullptr, OPT_Wwrite_strings, Option::FlagClass, 0, CC1Option | HelpHidden, OPT_W_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "WX-", "Do not treat warnings as errors", nullptr, OPT__SLASH_WX_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "no-error\0", nullptr},

{prefix_2, "WX", "Treat warnings as errors", nullptr, OPT__SLASH_WX, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "error\0", nullptr},

{prefix_1, "W", "Enable the specified warning", "<warning>", OPT_W_Joined, Option::JoinedClass, 0, CC1Option | CoreOption, OPT_W_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "w", "Suppress all warnings", nullptr, OPT_w, Option::FlagClass, 0, CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "w", "Disable all warnings", nullptr, OPT__SLASH_w_flag, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_w, nullptr, nullptr},

{prefix_2, "w", nullptr, nullptr, OPT__SLASH_w, Option::JoinedClass, 0, CLOption | DriverOption | HelpHidden, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Xanalyzer", "Pass <arg> to the static analyzer", "<arg>", OPT_Xanalyzer, Option::SeparateClass, 0, 0, OPT_StaticAnalyzer_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Xarch_", nullptr, nullptr, OPT_Xarch__, Option::JoinedAndSeparateClass, 0, DriverOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Xassembler", "Pass <arg> to the assembler", "<arg>", OPT_Xassembler, Option::SeparateClass, 0, 0, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Xclang", "Pass <arg> to the clang compiler", "<arg>", OPT_Xclang, Option::SeparateClass, 0, DriverOption | CoreOption, OPT_CompileOnly_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Xcuda-fatbinary", "Pass <arg> to fatbinary invocation", "<arg>", OPT_Xcuda_fatbinary, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Xcuda-ptxas", "Pass <arg> to the ptxas assembler", "<arg>", OPT_Xcuda_ptxas, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Xlinker", "Pass <arg> to the linker", "<arg>", OPT_Xlinker, Option::SeparateClass, 0, LinkerInput | RenderAsInput, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Xopenmp-target=", "Pass <arg> to the specified target offloading toolchain. The triple that identifies the toolchain must be provided after the equals sign.", "<arg>", OPT_Xopenmp_target_EQ, Option::JoinedAndSeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Xopenmp-target", "Pass <arg> to the target offloading toolchain.", "<arg>", OPT_Xopenmp_target, Option::SeparateClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_1, "Xpreprocessor", "Pass <arg> to the preprocessor", "<arg>", OPT_Xpreprocessor, Option::SeparateClass, 0, 0, OPT_Preprocessor_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "X", nullptr, nullptr, OPT_X_Flag, Option::FlagClass, 0, 0, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "X", nullptr, nullptr, OPT_X_Joined, Option::JoinedClass, 0, HelpHidden, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "X", nullptr, nullptr, OPT__SLASH_X, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "x", "Treat subsequent input files as having type <language>", "<language>", OPT_x, Option::JoinedOrSeparateClass, 0, DriverOption | CC1Option, OPT_INVALID, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Y-", "Disable precompiled headers, overrides /Yc and /Yu", nullptr, OPT__SLASH_Y_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Yc", "Generate a pch file for all code up to and including <filename>", "<filename>", OPT__SLASH_Yc, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Yd", nullptr, nullptr, OPT__SLASH_Yd, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Yl", nullptr, nullptr, OPT__SLASH_Yl, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Yu", "Load a pch file and use it instead of all code up to and including <filename>", "<filename>", OPT__SLASH_Yu, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_1, "y", nullptr, nullptr, OPT_y, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Z-reserved-lib-cckext", nullptr, nullptr, OPT_Z_reserved_lib_cckext, Option::FlagClass, 0, LinkerInput | NoArgumentUnused | Unsupported | Unsupported, OPT_reserved_lib_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Z-reserved-lib-stdc++", nullptr, nullptr, OPT_Z_reserved_lib_stdcxx, Option::FlagClass, 0, LinkerInput | NoArgumentUnused | Unsupported | Unsupported, OPT_reserved_lib_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Z-Xlinker-no-demangle", nullptr, nullptr, OPT_Z_Xlinker__no_demangle, Option::FlagClass, 0, Unsupported | NoArgumentUnused, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Z7", "Enable CodeView debug information in object files", nullptr, OPT__SLASH_Z7, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Za", nullptr, nullptr, OPT__SLASH_Za, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zc:auto", nullptr, nullptr, OPT__SLASH_Zc_auto, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zc:forScope", nullptr, nullptr, OPT__SLASH_Zc_forScope, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zc:inline", nullptr, nullptr, OPT__SLASH_Zc_inline, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zc:rvalueCast", nullptr, nullptr, OPT__SLASH_Zc_rvalueCast, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zc:sizedDealloc-", "Disable C++14 sized global deallocation functions", nullptr, OPT__SLASH_Zc_sizedDealloc_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_sized_deallocation, nullptr, nullptr},

{prefix_2, "Zc:sizedDealloc", "Enable C++14 sized global deallocation functions", nullptr, OPT__SLASH_Zc_sizedDealloc, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fsized_deallocation, nullptr, nullptr},

{prefix_2, "Zc:strictStrings", "Treat string literals as const", nullptr, OPT__SLASH_Zc_strictStrings, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_W_Joined, "error=c++11-compat-deprecated-writable-strings\0", nullptr},

{prefix_2, "Zc:ternary", nullptr, nullptr, OPT__SLASH_Zc_ternary, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zc:threadSafeInit-", "Disable thread-safe initialization of static variables", nullptr, OPT__SLASH_Zc_threadSafeInit_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_threadsafe_statics, nullptr, nullptr},

{prefix_2, "Zc:threadSafeInit", "Enable thread-safe initialization of static variables", nullptr, OPT__SLASH_Zc_threadSafeInit, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fthreadsafe_statics, nullptr, nullptr},

{prefix_2, "Zc:trigraphs-", "Disable trigraphs (default)", nullptr, OPT__SLASH_Zc_trigraphs_off, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_trigraphs, nullptr, nullptr},

{prefix_2, "Zc:trigraphs", "Enable trigraphs", nullptr, OPT__SLASH_Zc_trigraphs, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_ftrigraphs, nullptr, nullptr},

{prefix_2, "Zc:twoPhase-", "Disable two-phase name lookup in templates", nullptr, OPT__SLASH_Zc_twoPhase_, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fdelayed_template_parsing, nullptr, nullptr},

{prefix_2, "Zc:twoPhase", "Enable two-phase name lookup in templates", nullptr, OPT__SLASH_Zc_twoPhase, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fno_delayed_template_parsing, nullptr, nullptr},

{prefix_2, "Zc:wchar_t", nullptr, nullptr, OPT__SLASH_Zc_wchar_t, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zc:", nullptr, nullptr, OPT__SLASH_Zc, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zd", "Emit debug line number tables only", nullptr, OPT__SLASH_Zd, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Ze", nullptr, nullptr, OPT__SLASH_Ze, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zg", nullptr, nullptr, OPT__SLASH_Zg, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "ZI", nullptr, nullptr, OPT__SLASH_ZI, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zi", "Alias for /Z7. Does not produce PDBs.", nullptr, OPT__SLASH_Zi, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT__SLASH_Z7, nullptr, nullptr},

{prefix_1, "Zlinker-input", nullptr, nullptr, OPT_Zlinker_input, Option::SeparateClass, 0, Unsupported | NoArgumentUnused, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zl", "Don't mention any default libraries in the object file", nullptr, OPT__SLASH_Zl, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},

{prefix_2, "Zm", nullptr, nullptr, OPT__SLASH_Zm, Option::JoinedClass, 0, CLOption | DriverOption | HelpHidden, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zo-", nullptr, nullptr, OPT__SLASH_Zo_, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zo", nullptr, nullptr, OPT__SLASH_Zo, Option::FlagClass, 0, CLOption | DriverOption, OPT_cl_ignored_Group, OPT_INVALID, nullptr, nullptr},
{prefix_2, "Zp", "Set the default maximum struct packing alignment to 1", nullptr, OPT__SLASH_Zp_flag, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fpack_struct_EQ, "1\0", nullptr},

{prefix_2, "Zp", "Specify the default maximum struct packing alignment", nullptr, OPT__SLASH_Zp, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fpack_struct_EQ, nullptr, nullptr},

{prefix_2, "Zs", "Syntax-check only", nullptr, OPT__SLASH_Zs, Option::FlagClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_fsyntax_only, nullptr, nullptr},

{prefix_2, "ZW", nullptr, nullptr, OPT__SLASH_ZW, Option::JoinedClass, 0, CLOption | DriverOption | CLOption, OPT_cl_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Z", nullptr, nullptr, OPT_Z_Flag, Option::FlagClass, 0, 0, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},
{prefix_1, "Z", nullptr, nullptr, OPT_Z_Joined, Option::JoinedClass, 0, 0, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_1, "z", "Pass -z <arg> to the linker", "<arg>", OPT_z, Option::SeparateClass, 0, LinkerInput | RenderAsInput, OPT_Link_Group, OPT_INVALID, nullptr, nullptr},

{prefix_3, "", nullptr, nullptr, OPT__DASH_DASH, Option::RemainingArgsClass, 0, DriverOption | CoreOption, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
{prefix_3, "", nullptr, nullptr, OPT__, Option::JoinedClass, 0, Unsupported, OPT_INVALID, OPT_INVALID, nullptr, nullptr},
# 30 "/home/juzix/Pictures/llvm-6.0.1.src/tools/clang/lib/Driver/DriverOptions.cpp" 2

};

namespace {

class DriverOptTable : public OptTable {
public:
  DriverOptTable()
    : OptTable(InfoTable) {}
};

}

std::unique_ptr<OptTable> clang::driver::createDriverOptTable() {
  auto Result = llvm::make_unique<DriverOptTable>();



  OptTable &Opt = *Result;


# 1 "/home/juzix/Pictures/release-build/tools/clang/include/clang/Driver/Options.inc" 1
# 3197 "/home/juzix/Pictures/release-build/tools/clang/include/clang/Driver/Options.inc"
{
bool ValuesWereAdded;

    const char *Values =



# 1 "/home/juzix/Pictures/release-build/tools/clang/include/clang/StaticAnalyzer/Checkers/Checkers.inc" 1
# 50 "/home/juzix/Pictures/release-build/tools/clang/include/clang/StaticAnalyzer/Checkers/Checkers.inc"
"debug.AnalysisOrder" ","
"debug.Stats" ","
"alpha.security.ArrayBound" ","
"alpha.security.ArrayBoundV2" ","
"alpha.unix.BlockInCriticalSection" ","
"alpha.core.BoolAssignment" ","
"core.builtin.BuiltinFunctions" ","
"osx.coreFoundation.CFError" ","
"debug.DumpCFG" ","
"debug.ViewCFG" ","
"osx.coreFoundation.CFNumber" ","
"osx.coreFoundation.CFRetainRelease" ","
"alpha.unix.cstring.BufferOverlap" ","
"alpha.unix.cstring.NotNullTerminated" ","
"unix.cstring.NullArg" ","
"alpha.unix.cstring.OutOfBounds" ","
"unix.cstring.BadSizeArg" ","
"cplusplus.SelfAssignment" ","
"core.CallAndMessage" ","
"alpha.core.CallAndMessageUnInitRefArg" ","
"debug.DumpCalls" ","
"debug.DumpCallGraph" ","
"debug.ViewCallGraph" ","
"alpha.core.CastSize" ","
"alpha.core.CastToStruct" ","
"alpha.unix.Chroot" ","
"osx.cocoa.ClassRelease" ","
"alpha.clone.CloneChecker" ","
"debug.ConfigDumper" ","
"alpha.core.Conversion" ","
"valist.CopyToSelf" ","
"deadcode.DeadStores" ","
"alpha.cplusplus.DeleteWithNonVirtualDtor" ","
"core.NullDereference" ","
"alpha.osx.cocoa.DirectIvarAssignment" ","
"alpha.osx.cocoa.DirectIvarAssignmentForAnnotatedFunctions" ","
"core.DivideZero" ","
"debug.DumpDominators" ","
"alpha.core.DynamicTypeChecker" ","
"core.DynamicTypePropagation" ","
"optin.osx.cocoa.localizability.EmptyLocalizationContextChecker" ","
"debug.ViewExplodedGraph" ","
"debug.ExprInspection" ","
"alpha.core.FixedAddr" ","
"security.FloatLoopCounter" ","
"apiModeling.google.GTest" ","
"alpha.security.taint.TaintPropagation" ","
"alpha.core.IdenticalExpr" ","
"alpha.osx.cocoa.InstanceVariableInvalidation" ","
"alpha.cplusplus.IteratorRange" ","
"llvm.Conventions" ","
"debug.DumpLiveVars" ","
"optin.mpi.MPI-Checker" ","
"osx.SecKeychainAPI" ","
"osx.API" ","
"unix.Malloc" ","
"alpha.security.MallocOverflow" ","
"unix.MallocSizeof" ","
"unix.MismatchedDeallocator" ","
"alpha.osx.cocoa.MissingInvalidationMethod" ","
"alpha.cplusplus.MisusedMovedObject" ","
"osx.cocoa.NSAutoreleasePool" ","
"osx.cocoa.NSError" ","
"cplusplus.NewDelete" ","
"cplusplus.NewDeleteLeaks" ","
"osx.cocoa.NilArg" ","
"core.builtin.NoReturnFunctions" ","
"optin.osx.cocoa.localizability.NonLocalizedStringChecker" ","
"core.NonNullParamChecker" ","
"core.NonnilStringConstants" ","
"nullability.NullPassedToNonnull" ","
"nullability.NullReturnedFromNonnull" ","
"nullability.NullableDereferenced" ","
"nullability.NullablePassedToNonnull" ","
"nullability.NullableReturnedFromNonnull" ","
"osx.NumberObjectConversion" ","
"osx.cocoa.AtSync" ","
"osx.coreFoundation.containers.PointerSizedValues" ","
"osx.coreFoundation.containers.OutOfBounds" ","
"osx.cocoa.Dealloc" ","
"osx.cocoa.ObjCGenerics" ","
"osx.cocoa.Loops" ","
"osx.cocoa.IncompatibleMethodTypes" ","
"osx.cocoa.NonNilReturnValue" ","
"osx.ObjCProperty" ","
"osx.cocoa.SelfInit" ","
"osx.cocoa.MissingSuperCall" ","
"osx.cocoa.SuperDealloc" ","
"osx.cocoa.UnusedIvars" ","
"optin.performance.Padding" ","
"alpha.osx.cocoa.localizability.PluralMisuseChecker" ","
"alpha.core.PointerArithm" ","
"alpha.core.PointerSub" ","
"alpha.unix.PthreadLock" ","
"osx.cocoa.RetainCount" ","
"alpha.security.ReturnPtrRange" ","
"core.uninitialized.UndefReturn" ","
"alpha.unix.SimpleStream" ","
"alpha.core.SizeofPtr" ","
"alpha.core.StackAddressAsyncEscape" ","
"core.StackAddressEscape" ","
"unix.StdCLibraryFunctions" ","
"alpha.unix.Stream" ","
"debug.TaintTest" ","
"alpha.core.TestAfterDivZero" ","
"debug.DumpTraversal" ","
"security.insecureAPI.UncheckedReturn" ","
"core.uninitialized.Branch" ","
"core.uninitialized.CapturedBlockVariable" ","
"core.UndefinedBinaryOperatorResult" ","
"core.uninitialized.ArraySubscript" ","
"core.uninitialized.Assign" ","
"valist.Uninitialized" ","
"unix.API" ","
"optin.portability.UnixAPI" ","
"alpha.deadcode.UnreachableCode" ","
"valist.Unterminated" ","
"core.VLASize" ","
"osx.cocoa.VariadicMethodTypes" ","
"unix.Vfork" ","
"optin.cplusplus.VirtualCall" ","
"security.insecureAPI.getpw" ","
"security.insecureAPI.gets" ","
"security.insecureAPI.mkstemp" ","
"security.insecureAPI.mktemp" ","
"security.insecureAPI.rand" ","
"security.insecureAPI.strcpy" ","
"security.insecureAPI.vfork" ","
# 3204 "/home/juzix/Pictures/release-build/tools/clang/include/clang/Driver/Options.inc" 2



# 1 "/home/juzix/Pictures/release-build/tools/clang/include/clang/StaticAnalyzer/Checkers/Checkers.inc" 1






"alpha" ","
"alpha.clone" ","
"alpha.core" ","
"alpha.cplusplus" ","
"alpha.deadcode" ","
"alpha.osx" ","
"alpha.osx.cocoa" ","
"alpha.osx.cocoa.localizability" ","
"alpha.security" ","
"alpha.security.taint" ","
"alpha.unix" ","
"alpha.unix.cstring" ","
"apiModeling" ","
"apiModeling.google" ","
"core" ","
"core.builtin" ","
"core.uninitialized" ","
"cplusplus" ","
"deadcode" ","
"debug" ","
"llvm" ","
"nullability" ","
"optin" ","
"optin.cplusplus" ","
"optin.mpi" ","
"optin.osx" ","
"optin.osx.cocoa" ","
"optin.osx.cocoa.localizability" ","
"optin.performance" ","
"optin.portability" ","
"osx" ","
"osx.cocoa" ","
"osx.coreFoundation" ","
"osx.coreFoundation.containers" ","
"security" ","
"security.insecureAPI" ","
"unix" ","
"unix.cstring" ","
"valist" ","
# 3208 "/home/juzix/Pictures/release-build/tools/clang/include/clang/Driver/Options.inc" 2

    ;

ValuesWereAdded = Opt.addValues("-analyzer-checker", Values);
(void)ValuesWereAdded;
(static_cast<void> (0));
}
{
bool ValuesWereAdded;

    const char *Values =



# 1 "/home/juzix/Pictures/llvm-6.0.1.src/tools/clang/include/clang/Frontend/LangStandards.def" 1
# 39 "/home/juzix/Pictures/llvm-6.0.1.src/tools/clang/include/clang/Frontend/LangStandards.def"
"c89" ","


"c90" ","
"iso9899:1990" ","

"iso9899:199409" ","



"gnu89" ","


"gnu90" ","


"c99" ","


"iso9899:1999" ","
"c9x" ","
"iso9899:199x" ","

"gnu99" ","


"gnu9x" ","


"c11" ","


"iso9899:2011" ","
"c1x" ","
"iso9899:201x" ","

"gnu11" ","


"gnu1x" ","


"c17" ","


"iso9899:2017" ","
"gnu17" ","




"c++98" ","


"c++03" ","

"gnu++98" ","


"gnu++03" ","

"c++11" ","


"c++0x" ","

"gnu++11" ","


"gnu++0x" ","

"c++14" ","


"c++1y" ","

"gnu++14" ","



"gnu++1y" ","

"c++17" ","



"c++1z" ","

"gnu++17" ","



"gnu++1z" ","

"c++2a" ","




"gnu++2a" ","





"cl1.0" ","


"cl" ","

"cl1.1" ","


"cl1.2" ","


"cl2.0" ","



"CL" ","
"CL1.1" ","
"CL1.2" ","
"CL2.0" ","


"cuda" ","
# 3222 "/home/juzix/Pictures/release-build/tools/clang/include/clang/Driver/Options.inc" 2
 ;

ValuesWereAdded = Opt.addValues("-std=", Values);
(void)ValuesWereAdded;
(static_cast<void> (0));
ValuesWereAdded = Opt.addValues("--std=", Values);
(void)ValuesWereAdded;
(static_cast<void> (0));
}
# 51 "/home/juzix/Pictures/llvm-6.0.1.src/tools/clang/lib/Driver/DriverOptions.cpp" 2

  return std::move(Result);
}
