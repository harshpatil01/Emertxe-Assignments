/*Name : Harsh Patil
 *Date : 29-07-2021
 *Description : WAP to print all ASCII Characters
  *Input: gcc assignment4.c
   *Output:
   Dec	Oct	Hex	Char
-------------------------------0	0	0	Non Printable
1	1	1	Non Printable
2	2	2	Non Printable
3	3	3	Non Printable
4	4	4	Non Printable
5	5	5	Non Printable
6	6	6	Non Printable
7	7	7	Non Printable
8	10	8	Non Printable
9	11	9	Non Printable
10	12	a	Non Printable
11	13	b	Non Printable
12	14	c	Non Printable
13	15	d	Non Printable
14	16	e	Non Printable
15	17	f	Non Printable
16	20	10	Non Printable
17	21	11	Non Printable
18	22	12	Non Printable
19	23	13	Non Printable
20	24	14	Non Printable
21	25	15	Non Printable
22	26	16	Non Printable
23	27	17	Non Printable
24	30	18	Non Printable
25	31	19	Non Printable
26	32	1a	Non Printable
27	33	1b	Non Printable
28	34	1c	Non Printable
29	35	1d	Non Printable
30	36	1e	Non Printable
31	37	1f	Non Printable
32	40	20
33	41	21	!
34	42	22	"
35	43	23	#
36	44	24	$
37	45	25	%
38	46	26	&
39	47	27	'
40	50	28	(
41	51	29	)
42	52	2a	*
43	53	2b	+
44	54	2c	,
45	55	2d	-
46	56	2e	.
47	57	2f	/
48	60	30	0
49	61	31	1
50	62	32	2
51	63	33	3
52	64	34	4
53	65	35	5
54	66	36	6
55	67	37	7
56	70	38	8
57	71	39	9
58	72	3a	:
59	73	3b	;
60	74	3c	<
61	75	3d	=
62	76	3e	>
63	77	3f	?
64	100	40	@
65	101	41	A
66	102	42	B
67	103	43	C
68	104	44	D
69	105	45	E
70	106	46	F
71	107	47	G
72	110	48	H
73	111	49	I
74	112	4a	J
75	113	4b	K
76	114	4c	L
77	115	4d	M
78	116	4e	N
79	117	4f	O
80	120	50	P
81	121	51	Q
82	122	52	R
83	123	53	S
84	124	54	T
85	125	55	U
86	126	56	V
87	127	57	W
88	130	58	X
89	131	59	Y
90	132	5a	Z
91	133	5b	[
92	134	5c	\
93	135	5d	]
94	136	5e	^
95	137	5f	_
96	140	60	`
97	141	61	a
98	142	62	b
99	143	63	c
100	144	64	d
101	145	65	e
102	146	66	f
103	147	67	g
104	150	68	h
105	151	69	i
106	152	6a	j
107	153	6b	k
108	154	6c	l
109	155	6d	m
110	156	6e	n
111	157	6f	o
112	160	70	p
113	161	71	q
114	162	72	r
115	163	73	s
116	164	74	t
117	165	75	u
118	166	76	v
119	167	77	w
120	170	78	x
121	171	79	y
122	172	7a	z
123	173	7b	{
124	174	7c	|
125	175	7d	}
126	176	7e	~
127	177	7f	Non Printable
*/ 

#include<stdio.h>
int main()
{
    /*Declaring variables such as integer*/
    int i;
    /*Printing the decimal , octal ,Hex and character represenatation*/
    printf("Dec\tOct\tHex\tChar\n");
    printf("-------------------------------");

	for(i=0;i<=127;i++)
	{
	/*Do not print character if the decimal value is less than 32 or a perfect number*/
	    if( (i < 32) || (i ==127) )
	 	{
		 /*Printing the ascii characters*/   
		printf("%d\t%o\t%x\tNon Printable\n",i,i,i);
    	    	}
		else
		{
		/*Printing the ascii characters*/
		printf("%d\t%o\t%x\t%c\n",i,i,i,i);
	 	}
	}
return 0;

}
