{\rtf1\ansi\ansicpg1251\cocoartf2709
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 // Online C compiler to run C program online\
#include <stdio.h>\
\
//  3.	\uc0\u1056 \u1077 \u1072 \u1083 \u1080 \u1079 \u1086 \u1074 \u1072 \u1090 \u1100  \u1092 \u1091 \u1085 \u1082 \u1094 \u1080 \u1102 , \u1082 \u1086 \u1090 \u1086 \u1088 \u1072 \u1103  \u1085 \u1072  \u1074 \u1093 \u1086 \u1076  \u1087 \u1086 \u1083 \u1091 \u1095 \u1072 \u1077 \u1090  \u1086 \u1076 \u1085 \u1086 \u1084 \u1077 \u1088 \u1085 \u1099 \u1081  \u1084 \u1072 \u1089 \u1089 \u1080 \u1074  \u1080  \u1073 \u1091 \u1083 \u1077 \u1074 \u1089 \u1082 \u1091 \u1102  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1091 \u1102 . \u1060 \u1091 \u1085 \u1082 \u1094 \u1080 \u1103  \u1074 \u1086 \u1079 \u1074 \u1088 \u1072 \u1097 \u1072 \u1077 \u1090  \u1084 \u1072 \u1089 \u1089 \u1080 \u1074  \u1090 \u1086 \u1081  \u1078 \u1077  \u1088 \u1072 \u1079 \u1084 \u1077 \u1088 \u1085 \u1086 \u1089 \u1090 \u1080 , \u1080  \u1086 \u1090 \u1089 \u1086 \u1088 \u1090 \u1080 \u1088 \u1086 \u1074 \u1072 \u1085 \u1085 \u1086 \u1081  \u1074  \u1079 \u1072 \u1074 \u1080 \u1089 \u1080 \u1084 \u1086 \u1089 \u1090 \u1080  \u1086 \u1090  \u1073 \u1091 \u1083 \u1077 \u1074 \u1089 \u1082 \u1086 \u1081  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1086 \u1081  (true \'96 \u1087 \u1086  \u1074 \u1086 \u1079 \u1088 \u1072 \u1089 \u1090 \u1072 \u1085 \u1080 \u1102 , false \'96 \u1087 \u1086  \u1091 \u1073 \u1099 \u1074 \u1072 \u1085 \u1080 \u1102 )\
\
int sortArray(int arr[], int size, int ascending) \{\
    int temp;\
    for (int i = 0; i < size - 1; i++) \{\
        for (int j = i + 1; j < size; j++) \{\
            if (ascending) \{\
                if (arr[i] > arr[j]) \{\
                    temp = arr[i];\
                    arr[i] = arr[j];\
                    arr[j] = temp;\
                \}\
            \} else \{\
                if (arr[i] < arr[j]) \{\
                    temp = arr[i];\
                    arr[i] = arr[j];\
                    arr[j] = temp;\
                \}\
            \}\
        \}\
    \}\
\}\
\
int main() \{\
    int arr[] = \{5, 2, 8, 3, 1\};\
    int size = sizeof(arr) / sizeof(arr[0]);\
\
    printf("\uc0\u1048 \u1079 \u1085 \u1072 \u1095 \u1072 \u1083 \u1100 \u1085 \u1099 \u1081  \u1084 \u1072 \u1089 \u1089 \u1080 \u1074 : ");\
    for (int i = 0; i < size; i++) \{\
        printf("%d ", arr[i]);\
    \}\
\
    sortArray(arr, size, 1);\
    printf("\\n\uc0\u1057 \u1086 \u1088 \u1090 \u1080 \u1088 \u1086 \u1074 \u1082 \u1072  \u1087 \u1086  \u1074 \u1086 \u1079 \u1088 \u1072 \u1089 \u1090 \u1072 \u1085 \u1080 \u1102 : ");\
    for (int i = 0; i < size; i++) \{\
        printf("%d ", arr[i]);\
    \}\
\
    sortArray(arr, size, 0);\
    printf("\\n\uc0\u1057 \u1086 \u1088 \u1090 \u1080 \u1088 \u1086 \u1074 \u1082 \u1072  \u1087 \u1086  \u1091 \u1073 \u1099 \u1074 \u1072 \u1085 \u1080 \u1102 : ");\
    for (int i = 0; i < size; i++) \{\
        printf("%d ", arr[i]);\
    \}\
\
    return 0;\
\}}