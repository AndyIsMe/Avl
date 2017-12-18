#include "build/temp/_test_AvlString.c"
#include "NodeHelper.h"
#include "NodeVerifier.h"
#include "AvlString.h"
#include "unity.h"




void setUp(void)

{

  giveInitdata();

  giveInitStrdata();

}



void tearDown(void)

{

}



void test_CompareString_given_string_is_Andy_with_Andy_expect_0(void){



     char *string = "Andy";

     StringNode *root = (StringNode *)&nodeAndy;

     UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((compareString(string,root))), (

    ((void *)0)

    ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);

}



void test_CompareString_given_string_is_RexG_Rex_expect_1(void){



     char *string = "RexG";

     StringNode *root = (StringNode *)&nodeRex;

     UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((compareString(string,root))), (

    ((void *)0)

    ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}



void test_CompareString_given_string_is_Jsta_Jstan_expect_minus_1(void){



     char *string = "Jsta";

     StringNode *root = (StringNode *)&nodeJstan;

     UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((compareString(string,root))), (

    ((void *)0)

    ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);

}



void test_CompareString_given_string_is_Rex_Armin_expect_minus_1(void){



     char *string = "Armin";

     StringNode *root = (StringNode *)&nodeRex;

     UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((compareString(string,root))), (

    ((void *)0)

    ), (UNITY_UINT)(42), UNITY_DISPLAY_STYLE_INT);

}



void test_CompareString_given_string_is_Rex_Ali_expect_1(void){



     char *string = "Yeager";

     StringNode *root = (StringNode *)&nodeRex;

     UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((compareString(string,root))), (

    ((void *)0)

    ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_INT);

}
