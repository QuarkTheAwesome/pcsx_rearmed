
#if __WORDSIZE == 32
#if defined(__ARM_PCS_VFP)
#define JIT_INSTR_MAX 48
    0,	/* data */
    0,	/* live */
    2,	/* align */
    0,	/* save */
    0,	/* load */
    2,	/* #name */
    0,	/* #note */
    0,	/* label */
    34,	/* prolog */
    0,	/* ellipsis */
    0,	/* va_push */
    0,	/* allocai */
    0,	/* allocar */
    0,	/* arg */
    0,	/* getarg_c */
    0,	/* getarg_uc */
    0,	/* getarg_s */
    0,	/* getarg_us */
    0,	/* getarg_i */
    0,	/* getarg_ui */
    0,	/* getarg_l */
    0,	/* putargr */
    0,	/* putargi */
    4,	/* va_start */
    8,	/* va_arg */
    16,	/* va_arg_d */
    0,	/* va_end */
    4,	/* addr */
    12,	/* addi */
    4,	/* addcr */
    8,	/* addci */
    4,	/* addxr */
    4,	/* addxi */
    4,	/* subr */
    12,	/* subi */
    4,	/* subcr */
    8,	/* subci */
    4,	/* subxr */
    4,	/* subxi */
    16,	/* rsbi */
    4,	/* mulr */
    12,	/* muli */
    4,	/* qmulr */
    12,	/* qmuli */
    4,	/* qmulr_u */
    8,	/* qmuli_u */
    40,	/* divr */
    48,	/* divi */
    40,	/* divr_u */
    44,	/* divi_u */
    34,	/* qdivr */
    38,	/* qdivi */
    34,	/* qdivr_u */
    38,	/* qdivi_u */
    40,	/* remr */
    48,	/* remi */
    40,	/* remr_u */
    44,	/* remi_u */
    4,	/* andr */
    12,	/* andi */
    4,	/* orr */
    12,	/* ori */
    4,	/* xorr */
    12,	/* xori */
    4,	/* lshr */
    4,	/* lshi */
    4,	/* rshr */
    4,	/* rshi */
    4,	/* rshr_u */
    4,	/* rshi_u */
    4,	/* negr */
    4,	/* comr */
    14,	/* ltr */
    14,	/* lti */
    14,	/* ltr_u */
    14,	/* lti_u */
    14,	/* ler */
    14,	/* lei */
    14,	/* ler_u */
    14,	/* lei_u */
    14,	/* eqr */
    14,	/* eqi */
    14,	/* ger */
    14,	/* gei */
    14,	/* ger_u */
    14,	/* gei_u */
    14,	/* gtr */
    14,	/* gti */
    14,	/* gtr_u */
    14,	/* gti_u */
    14,	/* ner */
    14,	/* nei */
    4,	/* movr */
    8,	/* movi */
    8,	/* movnr */
    8,	/* movzr */
    4,	/* extr_c */
    4,	/* extr_uc */
    4,	/* extr_s */
    4,	/* extr_us */
    0,	/* extr_i */
    0,	/* extr_ui */
    8,	/* htonr_us */
    4,	/* htonr_ui */
    0,	/* htonr_ul */
    4,	/* ldr_c */
    12,	/* ldi_c */
    4,	/* ldr_uc */
    12,	/* ldi_uc */
    4,	/* ldr_s */
    12,	/* ldi_s */
    4,	/* ldr_us */
    12,	/* ldi_us */
    4,	/* ldr_i */
    12,	/* ldi_i */
    0,	/* ldr_ui */
    0,	/* ldi_ui */
    0,	/* ldr_l */
    0,	/* ldi_l */
    4,	/* ldxr_c */
    12,	/* ldxi_c */
    4,	/* ldxr_uc */
    12,	/* ldxi_uc */
    4,	/* ldxr_s */
    12,	/* ldxi_s */
    4,	/* ldxr_us */
    12,	/* ldxi_us */
    4,	/* ldxr_i */
    12,	/* ldxi_i */
    0,	/* ldxr_ui */
    0,	/* ldxi_ui */
    0,	/* ldxr_l */
    0,	/* ldxi_l */
    4,	/* str_c */
    12,	/* sti_c */
    4,	/* str_s */
    12,	/* sti_s */
    4,	/* str_i */
    12,	/* sti_i */
    0,	/* str_l */
    0,	/* sti_l */
    4,	/* stxr_c */
    12,	/* stxi_c */
    4,	/* stxr_s */
    12,	/* stxi_s */
    4,	/* stxr_i */
    12,	/* stxi_i */
    0,	/* stxr_l */
    0,	/* stxi_l */
    8,	/* bltr */
    8,	/* blti */
    8,	/* bltr_u */
    8,	/* blti_u */
    8,	/* bler */
    8,	/* blei */
    8,	/* bler_u */
    8,	/* blei_u */
    8,	/* beqr */
    16,	/* beqi */
    8,	/* bger */
    8,	/* bgei */
    8,	/* bger_u */
    8,	/* bgei_u */
    8,	/* bgtr */
    8,	/* bgti */
    8,	/* bgtr_u */
    8,	/* bgti_u */
    8,	/* bner */
    16,	/* bnei */
    8,	/* bmsr */
    8,	/* bmsi */
    8,	/* bmcr */
    8,	/* bmci */
    8,	/* boaddr */
    8,	/* boaddi */
    8,	/* boaddr_u */
    8,	/* boaddi_u */
    8,	/* bxaddr */
    8,	/* bxaddi */
    8,	/* bxaddr_u */
    8,	/* bxaddi_u */
    8,	/* bosubr */
    8,	/* bosubi */
    8,	/* bosubr_u */
    8,	/* bosubi_u */
    8,	/* bxsubr */
    8,	/* bxsubi */
    8,	/* bxsubr_u */
    8,	/* bxsubi_u */
    4,	/* jmpr */
    8,	/* jmpi */
    4,	/* callr */
    20,	/* calli */
    0,	/* prepare */
    0,	/* pushargr */
    0,	/* pushargi */
    0,	/* finishr */
    0,	/* finishi */
    0,	/* ret */
    0,	/* retr */
    0,	/* reti */
    0,	/* retval_c */
    0,	/* retval_uc */
    0,	/* retval_s */
    0,	/* retval_us */
    0,	/* retval_i */
    0,	/* retval_ui */
    0,	/* retval_l */
    24,	/* epilog */
    0,	/* arg_f */
    0,	/* getarg_f */
    0,	/* putargr_f */
    0,	/* putargi_f */
    4,	/* addr_f */
    8,	/* addi_f */
    4,	/* subr_f */
    8,	/* subi_f */
    8,	/* rsbi_f */
    4,	/* mulr_f */
    8,	/* muli_f */
    4,	/* divr_f */
    8,	/* divi_f */
    4,	/* negr_f */
    4,	/* absr_f */
    4,	/* sqrtr_f */
    18,	/* ltr_f */
    30,	/* lti_f */
    20,	/* ler_f */
    32,	/* lei_f */
    18,	/* eqr_f */
    30,	/* eqi_f */
    18,	/* ger_f */
    30,	/* gei_f */
    18,	/* gtr_f */
    30,	/* gti_f */
    18,	/* ner_f */
    30,	/* nei_f */
    18,	/* unltr_f */
    30,	/* unlti_f */
    18,	/* unler_f */
    30,	/* unlei_f */
    24,	/* uneqr_f */
    36,	/* uneqi_f */
    18,	/* unger_f */
    30,	/* ungei_f */
    18,	/* ungtr_f */
    30,	/* ungti_f */
    24,	/* ltgtr_f */
    36,	/* ltgti_f */
    18,	/* ordr_f */
    30,	/* ordi_f */
    18,	/* unordr_f */
    30,	/* unordi_f */
    8,	/* truncr_f_i */
    0,	/* truncr_f_l */
    8,	/* extr_f */
    4,	/* extr_d_f */
    4,	/* movr_f */
    12,	/* movi_f */
    4,	/* ldr_f */
    12,	/* ldi_f */
    8,	/* ldxr_f */
    16,	/* ldxi_f */
    4,	/* str_f */
    12,	/* sti_f */
    8,	/* stxr_f */
    16,	/* stxi_f */
    12,	/* bltr_f */
    24,	/* blti_f */
    12,	/* bler_f */
    24,	/* blei_f */
    12,	/* beqr_f */
    24,	/* beqi_f */
    12,	/* bger_f */
    24,	/* bgei_f */
    12,	/* bgtr_f */
    24,	/* bgti_f */
    12,	/* bner_f */
    24,	/* bnei_f */
    16,	/* bunltr_f */
    28,	/* bunlti_f */
    16,	/* bunler_f */
    28,	/* bunlei_f */
    20,	/* buneqr_f */
    32,	/* buneqi_f */
    16,	/* bunger_f */
    28,	/* bungei_f */
    12,	/* bungtr_f */
    24,	/* bungti_f */
    20,	/* bltgtr_f */
    32,	/* bltgti_f */
    12,	/* bordr_f */
    24,	/* bordi_f */
    12,	/* bunordr_f */
    24,	/* bunordi_f */
    0,	/* pushargr_f */
    0,	/* pushargi_f */
    0,	/* retr_f */
    0,	/* reti_f */
    0,	/* retval_f */
    0,	/* arg_d */
    0,	/* getarg_d */
    0,	/* putargr_d */
    0,	/* putargi_d */
    4,	/* addr_d */
    20,	/* addi_d */
    4,	/* subr_d */
    20,	/* subi_d */
    20,	/* rsbi_d */
    4,	/* mulr_d */
    20,	/* muli_d */
    4,	/* divr_d */
    20,	/* divi_d */
    4,	/* negr_d */
    4,	/* absr_d */
    4,	/* sqrtr_d */
    18,	/* ltr_d */
    34,	/* lti_d */
    20,	/* ler_d */
    36,	/* lei_d */
    18,	/* eqr_d */
    34,	/* eqi_d */
    18,	/* ger_d */
    34,	/* gei_d */
    18,	/* gtr_d */
    34,	/* gti_d */
    18,	/* ner_d */
    34,	/* nei_d */
    18,	/* unltr_d */
    34,	/* unlti_d */
    18,	/* unler_d */
    34,	/* unlei_d */
    24,	/* uneqr_d */
    40,	/* uneqi_d */
    18,	/* unger_d */
    34,	/* ungei_d */
    18,	/* ungtr_d */
    34,	/* ungti_d */
    24,	/* ltgtr_d */
    40,	/* ltgti_d */
    18,	/* ordr_d */
    34,	/* ordi_d */
    18,	/* unordr_d */
    34,	/* unordi_d */
    8,	/* truncr_d_i */
    0,	/* truncr_d_l */
    8,	/* extr_d */
    4,	/* extr_f_d */
    4,	/* movr_d */
    16,	/* movi_d */
    4,	/* ldr_d */
    12,	/* ldi_d */
    8,	/* ldxr_d */
    16,	/* ldxi_d */
    4,	/* str_d */
    12,	/* sti_d */
    8,	/* stxr_d */
    16,	/* stxi_d */
    12,	/* bltr_d */
    28,	/* blti_d */
    12,	/* bler_d */
    28,	/* blei_d */
    12,	/* beqr_d */
    28,	/* beqi_d */
    12,	/* bger_d */
    28,	/* bgei_d */
    12,	/* bgtr_d */
    28,	/* bgti_d */
    12,	/* bner_d */
    28,	/* bnei_d */
    16,	/* bunltr_d */
    32,	/* bunlti_d */
    16,	/* bunler_d */
    32,	/* bunlei_d */
    20,	/* buneqr_d */
    36,	/* buneqi_d */
    16,	/* bunger_d */
    32,	/* bungei_d */
    12,	/* bungtr_d */
    28,	/* bungti_d */
    20,	/* bltgtr_d */
    36,	/* bltgti_d */
    12,	/* bordr_d */
    28,	/* bordi_d */
    12,	/* bunordr_d */
    28,	/* bunordi_d */
    0,	/* pushargr_d */
    0,	/* pushargi_d */
    0,	/* retr_d */
    0,	/* reti_d */
    0,	/* retval_d */
    0,	/* movr_w_f */
    4,	/* movr_ww_d */
    0,	/* movr_w_d */
    0,	/* movr_f_w */
    0,	/* movi_f_w */
    4,	/* movr_d_ww */
    12,	/* movi_d_ww */
    0,	/* movr_d_w */
    0,	/* movi_d_w */
    8,	/* bswapr_us */
    4,	/* bswapr_ui */
    0,	/* bswapr_ul */
#endif /* __ARM_PCS_VFP */
#endif /* __WORDSIZE */

#if __WORDSIZE == 32
#if !defined(__ARM_PCS_VFP)
#define JIT_INSTR_MAX 160
    0,	/* data */
    0,	/* live */
    2,	/* align */
    0,	/* save */
    0,	/* load */
    2,	/* #name */
    0,	/* #note */
    0,	/* label */
    30,	/* prolog */
    0,	/* ellipsis */
    0,	/* va_push */
    0,	/* allocai */
    0,	/* allocar */
    0,	/* arg */
    0,	/* getarg_c */
    0,	/* getarg_uc */
    0,	/* getarg_s */
    0,	/* getarg_us */
    0,	/* getarg_i */
    0,	/* getarg_ui */
    0,	/* getarg_l */
    0,	/* putargr */
    0,	/* putargi */
    4,	/* va_start */
    8,	/* va_arg */
    28,	/* va_arg_d */
    0,	/* va_end */
    4,	/* addr */
    12,	/* addi */
    4,	/* addcr */
    8,	/* addci */
    4,	/* addxr */
    4,	/* addxi */
    4,	/* subr */
    12,	/* subi */
    4,	/* subcr */
    8,	/* subci */
    4,	/* subxr */
    4,	/* subxi */
    16,	/* rsbi */
    8,	/* mulr */
    12,	/* muli */
    4,	/* qmulr */
    12,	/* qmuli */
    4,	/* qmulr_u */
    8,	/* qmuli_u */
    40,	/* divr */
    48,	/* divi */
    40,	/* divr_u */
    44,	/* divi_u */
    34,	/* qdivr */
    38,	/* qdivi */
    34,	/* qdivr_u */
    38,	/* qdivi_u */
    40,	/* remr */
    48,	/* remi */
    40,	/* remr_u */
    44,	/* remi_u */
    4,	/* andr */
    12,	/* andi */
    4,	/* orr */
    12,	/* ori */
    4,	/* xorr */
    12,	/* xori */
    4,	/* lshr */
    4,	/* lshi */
    4,	/* rshr */
    4,	/* rshi */
    4,	/* rshr_u */
    4,	/* rshi_u */
    4,	/* negr */
    4,	/* comr */
    14,	/* ltr */
    14,	/* lti */
    14,	/* ltr_u */
    14,	/* lti_u */
    14,	/* ler */
    14,	/* lei */
    14,	/* ler_u */
    14,	/* lei_u */
    14,	/* eqr */
    14,	/* eqi */
    14,	/* ger */
    14,	/* gei */
    14,	/* ger_u */
    14,	/* gei_u */
    14,	/* gtr */
    14,	/* gti */
    14,	/* gtr_u */
    14,	/* gti_u */
    14,	/* ner */
    14,	/* nei */
    4,	/* movr */
    8,	/* movi */
    22,	/* movnr */
    22,	/* movzr */
    8,	/* extr_c */
    4,	/* extr_uc */
    8,	/* extr_s */
    8,	/* extr_us */
    0,	/* extr_i */
    0,	/* extr_ui */
    20,	/* htonr_us */
    16,	/* htonr_ui */
    0,	/* htonr_ul */
    4,	/* ldr_c */
    12,	/* ldi_c */
    4,	/* ldr_uc */
    12,	/* ldi_uc */
    4,	/* ldr_s */
    12,	/* ldi_s */
    4,	/* ldr_us */
    12,	/* ldi_us */
    4,	/* ldr_i */
    12,	/* ldi_i */
    0,	/* ldr_ui */
    0,	/* ldi_ui */
    0,	/* ldr_l */
    0,	/* ldi_l */
    4,	/* ldxr_c */
    12,	/* ldxi_c */
    4,	/* ldxr_uc */
    12,	/* ldxi_uc */
    4,	/* ldxr_s */
    12,	/* ldxi_s */
    4,	/* ldxr_us */
    12,	/* ldxi_us */
    4,	/* ldxr_i */
    12,	/* ldxi_i */
    0,	/* ldxr_ui */
    0,	/* ldxi_ui */
    0,	/* ldxr_l */
    0,	/* ldxi_l */
    4,	/* str_c */
    12,	/* sti_c */
    4,	/* str_s */
    12,	/* sti_s */
    4,	/* str_i */
    12,	/* sti_i */
    0,	/* str_l */
    0,	/* sti_l */
    4,	/* stxr_c */
    12,	/* stxi_c */
    4,	/* stxr_s */
    12,	/* stxi_s */
    4,	/* stxr_i */
    12,	/* stxi_i */
    0,	/* stxr_l */
    0,	/* stxi_l */
    8,	/* bltr */
    8,	/* blti */
    8,	/* bltr_u */
    8,	/* blti_u */
    8,	/* bler */
    8,	/* blei */
    8,	/* bler_u */
    8,	/* blei_u */
    8,	/* beqr */
    16,	/* beqi */
    8,	/* bger */
    8,	/* bgei */
    8,	/* bger_u */
    8,	/* bgei_u */
    8,	/* bgtr */
    8,	/* bgti */
    8,	/* bgtr_u */
    8,	/* bgti_u */
    8,	/* bner */
    16,	/* bnei */
    8,	/* bmsr */
    8,	/* bmsi */
    8,	/* bmcr */
    8,	/* bmci */
    8,	/* boaddr */
    8,	/* boaddi */
    8,	/* boaddr_u */
    8,	/* boaddi_u */
    8,	/* bxaddr */
    8,	/* bxaddi */
    8,	/* bxaddr_u */
    8,	/* bxaddi_u */
    8,	/* bosubr */
    8,	/* bosubi */
    8,	/* bosubr_u */
    8,	/* bosubi_u */
    8,	/* bxsubr */
    8,	/* bxsubi */
    8,	/* bxsubr_u */
    8,	/* bxsubi_u */
    12,	/* jmpr */
    72,	/* jmpi */
    4,	/* callr */
    20,	/* calli */
    0,	/* prepare */
    0,	/* pushargr */
    0,	/* pushargi */
    0,	/* finishr */
    0,	/* finishi */
    0,	/* ret */
    0,	/* retr */
    0,	/* reti */
    0,	/* retval_c */
    0,	/* retval_uc */
    0,	/* retval_s */
    0,	/* retval_us */
    0,	/* retval_i */
    0,	/* retval_ui */
    0,	/* retval_l */
    160,	/* epilog */
    0,	/* arg_f */
    0,	/* getarg_f */
    0,	/* putargr_f */
    0,	/* putargi_f */
    40,	/* addr_f */
    40,	/* addi_f */
    40,	/* subr_f */
    40,	/* subi_f */
    40,	/* rsbi_f */
    40,	/* mulr_f */
    40,	/* muli_f */
    40,	/* divr_f */
    40,	/* divi_f */
    12,	/* negr_f */
    12,	/* absr_f */
    36,	/* sqrtr_f */
    40,	/* ltr_f */
    44,	/* lti_f */
    40,	/* ler_f */
    44,	/* lei_f */
    40,	/* eqr_f */
    44,	/* eqi_f */
    40,	/* ger_f */
    44,	/* gei_f */
    40,	/* gtr_f */
    44,	/* gti_f */
    44,	/* ner_f */
    48,	/* nei_f */
    72,	/* unltr_f */
    80,	/* unlti_f */
    72,	/* unler_f */
    80,	/* unlei_f */
    72,	/* uneqr_f */
    80,	/* uneqi_f */
    72,	/* unger_f */
    80,	/* ungei_f */
    72,	/* ungtr_f */
    80,	/* ungti_f */
    76,	/* ltgtr_f */
    84,	/* ltgti_f */
    44,	/* ordr_f */
    48,	/* ordi_f */
    72,	/* unordr_f */
    80,	/* unordi_f */
    36,	/* truncr_f_i */
    0,	/* truncr_f_l */
    36,	/* extr_f */
    38,	/* extr_d_f */
    8,	/* movr_f */
    12,	/* movi_f */
    8,	/* ldr_f */
    16,	/* ldi_f */
    8,	/* ldxr_f */
    16,	/* ldxi_f */
    8,	/* str_f */
    16,	/* sti_f */
    8,	/* stxr_f */
    16,	/* stxi_f */
    44,	/* bltr_f */
    48,	/* blti_f */
    44,	/* bler_f */
    48,	/* blei_f */
    44,	/* beqr_f */
    52,	/* beqi_f */
    44,	/* bger_f */
    48,	/* bgei_f */
    44,	/* bgtr_f */
    48,	/* bgti_f */
    44,	/* bner_f */
    48,	/* bnei_f */
    44,	/* bunltr_f */
    48,	/* bunlti_f */
    44,	/* bunler_f */
    48,	/* bunlei_f */
    76,	/* buneqr_f */
    84,	/* buneqi_f */
    44,	/* bunger_f */
    48,	/* bungei_f */
    44,	/* bungtr_f */
    48,	/* bungti_f */
    76,	/* bltgtr_f */
    84,	/* bltgti_f */
    44,	/* bordr_f */
    48,	/* bordi_f */
    44,	/* bunordr_f */
    48,	/* bunordi_f */
    0,	/* pushargr_f */
    0,	/* pushargi_f */
    0,	/* retr_f */
    0,	/* reti_f */
    0,	/* retval_f */
    0,	/* arg_d */
    0,	/* getarg_d */
    0,	/* putargr_d */
    0,	/* putargi_d */
    50,	/* addr_d */
    52,	/* addi_d */
    50,	/* subr_d */
    52,	/* subi_d */
    52,	/* rsbi_d */
    50,	/* mulr_d */
    52,	/* muli_d */
    50,	/* divr_d */
    52,	/* divi_d */
    20,	/* negr_d */
    20,	/* absr_d */
    42,	/* sqrtr_d */
    44,	/* ltr_d */
    48,	/* lti_d */
    44,	/* ler_d */
    48,	/* lei_d */
    44,	/* eqr_d */
    48,	/* eqi_d */
    44,	/* ger_d */
    48,	/* gei_d */
    44,	/* gtr_d */
    48,	/* gti_d */
    48,	/* ner_d */
    52,	/* nei_d */
    82,	/* unltr_d */
    88,	/* unlti_d */
    82,	/* unler_d */
    88,	/* unlei_d */
    82,	/* uneqr_d */
    88,	/* uneqi_d */
    82,	/* unger_d */
    88,	/* ungei_d */
    82,	/* ungtr_d */
    88,	/* ungti_d */
    86,	/* ltgtr_d */
    92,	/* ltgti_d */
    48,	/* ordr_d */
    52,	/* ordi_d */
    82,	/* unordr_d */
    88,	/* unordi_d */
    36,	/* truncr_d_i */
    0,	/* truncr_d_l */
    36,	/* extr_d */
    38,	/* extr_f_d */
    16,	/* movr_d */
    20,	/* movi_d */
    16,	/* ldr_d */
    24,	/* ldi_d */
    20,	/* ldxr_d */
    28,	/* ldxi_d */
    16,	/* str_d */
    24,	/* sti_d */
    20,	/* stxr_d */
    28,	/* stxi_d */
    48,	/* bltr_d */
    52,	/* blti_d */
    48,	/* bler_d */
    52,	/* blei_d */
    48,	/* beqr_d */
    60,	/* beqi_d */
    48,	/* bger_d */
    52,	/* bgei_d */
    48,	/* bgtr_d */
    52,	/* bgti_d */
    48,	/* bner_d */
    52,	/* bnei_d */
    48,	/* bunltr_d */
    52,	/* bunlti_d */
    48,	/* bunler_d */
    52,	/* bunlei_d */
    84,	/* buneqr_d */
    92,	/* buneqi_d */
    48,	/* bunger_d */
    52,	/* bungei_d */
    48,	/* bungtr_d */
    52,	/* bungti_d */
    84,	/* bltgtr_d */
    92,	/* bltgti_d */
    48,	/* bordr_d */
    52,	/* bordi_d */
    48,	/* bunordr_d */
    52,	/* bunordi_d */
    0,	/* pushargr_d */
    0,	/* pushargi_d */
    0,	/* retr_d */
    0,	/* reti_d */
    0,	/* retval_d */
    4,	/* movr_w_f */
    8,	/* movr_ww_d */
    0,	/* movr_w_d */
    8,	/* movr_f_w */
    8,	/* movi_f_w */
    16,	/* movr_d_ww */
    12,	/* movi_d_ww */
    0,	/* movr_d_w */
    0,	/* movi_d_w */
    20,	/* bswapr_us */
    16,	/* bswapr_ui */
    0,	/* bswapr_ul */
#endif /* __ARM_PCS_VFP */
#endif /* __WORDSIZE */
