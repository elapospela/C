{\rtf1\ansi\ansicpg1251\cocoartf2709
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
\
void rotateLeft(int arr[], int n) \{\
    int temp = arr[0];\
    for (int i = 0; i < n - 1; i++) \{\
        arr[i] = arr[i + 1];\
    \}\
    arr[n - 1] = temp;\
\}\
\
int main() \{\
    int arr[] = \{1, 2, 3, 4, 5\};\
    int n = sizeof(arr) / sizeof(arr[0]);\
\
    // \uc0\u1062 \u1080 \u1082 \u1083 \u1080 \u1095 \u1077 \u1089 \u1082 \u1080  \u1089 \u1076 \u1074 \u1080 \u1075 \u1072 \u1077 \u1084  \u1101 \u1083 \u1077 \u1084 \u1077 \u1085 \u1090 \u1099  \u1084 \u1072 \u1089 \u1089 \u1080 \u1074 \u1072  \u1085 \u1072  \u1076 \u1074 \u1077  \u1087 \u1086 \u1079 \u1080 \u1094 \u1080 \u1080  \u1074 \u1083 \u1077 \u1074 \u1086 \
    for (int i = 0; i < 2; i++) \{\
        rotateLeft(arr, n);\
    \}\
\
    // \uc0\u1042 \u1099 \u1074 \u1086 \u1076 \u1080 \u1084  \u1080 \u1079 \u1084 \u1077 \u1085 \u1077 \u1085 \u1085 \u1099 \u1081  \u1084 \u1072 \u1089 \u1089 \u1080 \u1074 \
    printf("\uc0\u1048 \u1079 \u1084 \u1077 \u1085 \u1077 \u1085 \u1085 \u1099 \u1081  \u1084 \u1072 \u1089 \u1089 \u1080 \u1074 :\\n");\
    for (int i = 0; i < n; i++) \{\
        printf("%d ", arr[i]);\
    \}\
\
    return 0;\
\}}