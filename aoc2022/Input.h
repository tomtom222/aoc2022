#pragma once
#include "Types.h"
#include <bitset>
#include <vector>

static const std::string day1 = 
R"(6750
6538
5292
4635
6855
4137
3840
4691
1633
6008
2447
1448
4061

4261
6778
1531
2914
2102
4098
2451
1219
6488
3941
2158

9058
3441
9318
1976
6115
9451
10090
5850

4921
3202
3193
4170
1079
1757
5828
1757
2849
1586
5661
2607
2047
5385

7272
20573
13163

10682
5428
3751
9040
1556
1778
8657
9901

4889
6751
5090

12074
19421
3745
10856

15209
13798
15398
15838
4569

2572
4413
3683
12331
6840

8924
7301
1912
7526
4090
6867
3223
1083
2215

1728
12054
13145
4353
12434
3579

24525
23626

4395
11502
14008
10243
1463

4565
5888
3039
5295
1034
3440
2668
7161
5646

6367
8398
5485
8919
6618
2850
6855
5865

6788
7063
6797
3168
7176
1193
1846
1873
5291
1712
2802

3991
4976
2611
3576
3919
3522
3877
2822
3726
5944
4658
6066
4618

6675
12989
2094
2264
13116
11464

6322
2429
4887

6282
11135
3600
3977
6564
1687
3041

48760

3670
16233
6513
15868
12383

10008
9791
3299
4085
5778
10435
7349

5393
1162
4273
3179
3259
1892
8713
7147
8921

7793
5170
3658
6938
5040
6680
1682
1411
4675
2435

19306
33764

5046
5534
5683
4581
5515
4866
1520
1469
3747
3969
4070
3201
4376
3453
5877

13009
23239
20343

11867
14880

2716
1627
2914
2171
3475
4131
2816
2237
1538
3209
4589
4920
2222
3873
5492

4059
3824
2008
1651
5992
5777
6401
5129
1919
2921
1897
5831
5123

5504
6492
3528
5206
5682
5635
6720
3617
1625
5082
1140

3202
4433
8085
6145
1788
5332
5737
2561
1502
5880

19360
15037
9234
1425

6289
2249
6150
5228
4380
4528
4320
1979
3716
2908
4012
7181

2027
5508
3895
8700

6981
5136
2006
2955
7964
8445
1394
4874
5100
6794

5929
7003
3703
7981
7682
4386
8325
7086

6000
8868
12326
3747
2003
6186

5770
5634
1784
9951
8578
13924

2935
24789
21603

8239
10654
12558
5657
14398

1306
7030
4126
3092
7155
3949
5040
5951
6263
5587
1561
6046

34556

5474
3194
1962
7296
8065
2107
7355
4748
4752
7983
7051

19407

7778
1987
7642
1268
5019
3694
2161
6285
1600
5145

8850
14656
2486
10361
2067

6012
4885
4612
1807
7657
6930
1790
6035
5725

6047
2033
6994
2344
5801
1207
5190
3118
3153
1869
6065
3754

4721
1639
2235
3834
4052
4763
1649
2470
4294
2716
5381
6453

2751
7038
1463
2756
2256
3708
1921
4682

7439
1232
3630
7889
2564
7272
5764
5655
7827
6832

7254
6038
3702
6855
4473
1957
1597
7394
2850
3529
6832
6855

3486
3877
6424
5280
5080
4055
1830
1737
4379
1980
5148
5972

10069
4487
14451
7309
8744

8751
4856
4594
3986
4709
4361
4205
1401
5873
5059

2548
6623
3418
6848
2165
6466
4259
2792
1663
5537
1343

15745
5468
8877
18074

6055
14504
12291
8253
5828

25661

7301
9470
9040
1483
2974
7741
8556
7457

1465
4805
2485
2431
6956
2712
7434
1079
2500
1670

2537
5815
5604
2453
3919
2488
2866
5500
4009
1219
6109
3118
4932
4514
1732

2589
6885
7099
8389
4576
4904
3223
4645
1076
1453

6236
9825
7747
4682

2958
4351
3057
2951
6734
1766
4026
2957
8567
7559

5472
5402
4469
4762
3408
5000
3805
3535
4942
3180
3477
1599
5597
1030

2651
4374
6259
3969
6953
5116
3336
4486
5499
3027
1109
6419
4552

2876
6394
5562
5153
2408
6503
1909
3958
2908
1817
5627

1662
7210
5719
4019
3414
9539
7163
5050
7793

1003
4450
5580
2140
3531
4093
4189
2347
4990
2177
5204
3731
1673
2567
2206

5589
3205
6409
7776
4005
1250
7219
6491

22563
24898
3671

1628
4812
6709
1969
1128
2526
5606
3184
3590
5067
7267

6073
4594
2346
1819
2383
5765
1530
3850
2453
2015
4712
5945
3990

5700
2022
4971
2569
2226
5599
2661
3097
4126
6015
1328
4067
6088
4550
3083

5833
2291
1397
6032
2359
4478
2480
2217
3012
2212
2551
3894
1144
2494
5242

10165
5568
5967
10286
5835
6187
6443

2460
2361
5067
2008
6812
6381
4005
6778
5942
4981
3141
5420
1137

8977
11981
4701
4392
7377

6702
1053
5682
2280
4750
5451
5425
5739
3052
1884
5115
3447
1355

15207

23476
24176

4357
6421
4897
6452
5591
3745
4225
3902
4382
6200
3521
1158
6742

7327
4654
4242
4063
2551
2845
5636
1645
6300
3800
3324
5186

2671
4674
5368
10396
7250
8983
10080

5132
9545
4031
2698
2741
3072
1542
1419
3958

1736
6254
7696
5803
4724
2811
7429
3568
8717
1015

3616
3437
1285
2201
3597
2818
1859
4828
2644
4907
5468
3424
6160
4025

7153
1979
3198
2506
1838
5274
2904
5671
1300
3064
2447
2756

8583
8107
14984
10437
9655

4628
1643
2052
4833
3918
6200
6348
1551
7568
7647
5621

4470
4926
1971
6085
2990
4674
1927
2155
6489
6878
3445
6810
1998

3804
5867
3159
3385
3765
3175
1265
3572
3718
4562
5117
3938
1977
3606
2281

3352
15576
7744
3992
1217

4426
12388
12828
5208
2784
12502

1762
4751
3595
4360
1064
4224
3268
5411
3390
2589
1513
3075
5845
1738
4082

13785
6062
7074
3574
11195
8335

8519
22618
10403

12822
12248
9591
13299
10619

7025
6943
5930
3343
3430
7089
6784
7879
9007

3920
7809
7363
6740
1326
2578
2518
7446
7417

3603
10150
8180
5872
7075

3118
10518
8824
2675
8445
9206
3724
4329

9885
10933
1372
3905
12731
6330

3884
3392
3455
3560
3093
2778
4630
4742
4959
2883
4820

5796
1645
14987
6986
15074

3281
1335
3725
5414
6439
1619
4557
4583
1522
1009
1835
2371
5955
2289

43920

2477
1999
4809
5084
3606
4850
5977
3763
1108
4160
2322
6356
5461

5000
3267
5171
7136
9932
1281
11676

3689
3319
3508
7243
7766
1685
3809
4093
2539
7137
3167

8322
11802
6949
15451

2806
6035
4881
1152
5328
4693
5930
1610
5849
4853
2049
1263
5736
5234
1525

1616
2945
23855

2062
8376
10728
9744
2777
4101
5612
5133

13599
14149
8082
12680

5143
6807
6474
7390
2308
3201
7265
4492
6646
1664
6422
7428

15425
4319
15222
7365

5186
4698
4556
6355
1879
5436
3440
4223
6103
1027

6897
5842
1932
3726
3608
3011
6812
2384
2285
1388
3211
6414

37328
20417

1127
2001
6357
1978
5528
4675
7215
1097

4258
3189
4748
3973
3492
4496
1123
6485
4969
3947
4079
2657
4920
1940

5593
3590
7069
6526
3404
8501
5189
9022
3399

4146
4305
3820
2260
3144
1288
3812
2815
1553
2301
5655
1298
2531
4350

1200
2871
7637
2279
7747
5740
2103
2373
2471
3658

3108
4947
2258
1073
9635
7326
7712
9458
1008

6679
16292
11474
10212
11418

4018
6049
1942
5851
3480
1108
1769
4176
1911
2497
2904
5108
4018
4839

9257
5081
3816
1487
8582
5317
8506
2749
7187

10033
12757
9353
6820
2459
12843

17725
16704
1919
14770

11941
8538
2984
6435
1242
2782
11283

4787
1630
2456
4425
5434
1684
2066
4657
3419
6536
1132
4288
4319

7364
6179
5832
4077
4003
8781
6022
5672
5784

4582
8233
9135
8448
7295
3450
5941
5678
8945

3673
11877
8079
5830
13123
8819

2464
4267
1275
4036
3019
7571
6808
2291
4975
4857
7037

4663
5328
2021
1593
5605
2423
6565
1077
3076
2521

2712
10855
10943
6416
2654
11960
9471

5053
2896
2868
2508
3712
2086
1028
5985
1312
2486
3561
3789
1747
4241

1244
3146
3768
5090
4881
1565
4007
5283
8189
2266

11599
6170
7253

1596
2215
6018
5848
3357
5971
1395
5412
4413
2907
3398
6191
1502

5562
1955
3203
4835
5426
5409
4020
3987
4922
1332
1355
2244
4977
1559
5507

8879
3197
11212
4477
8238
1800
3684

15121
7384
14501
12667
9620

1767
4997
6039
1889
3620
2880
4305
1292
6176
3125
5876
6515

3829
5030
2670
6937
7747
1587
3837
3222
3607
3325
5323

27071
32218

5593
3592
2311

2628
2562
1322
5307
4337
4761
4451
2981
4279
4828
2008
3109
3016
1927
5636

1218
1205
2913
1892
4268
5360
5622
4694
1721
3315
1886
1798
2418
2954
2479

2125
7128
2112
5163
6536
7023
7026
2662
7967
3376
4663

11505
9288

4193
5100
1922
3258
1133
3906
6049
1211
3743
3952
1546
2818
1795
3697

13660
13843

10925
4229
10107
10541
3950
6892
7594

3726
4753
3245
2459
5362
4514
1635
1875
2196
3379
4391
3278
3942
5488

6838
7367
5133
4229
8382
5748
4408
1149
2712

5790
7280
1537
6596
4167
7905
4829
1875
5374
3432

18774
12470
2680

1481
4005
8336
9616
9360
9601
8805
1857
7736

2372
16287
11904
4931

6023
3192
2630
2712
5403
7077
3310
2386
3072
6322
6850

20799
2284
9823

4705
5625
1830
1374
1770
1125
2395
5050
1311
4818
3497
2829
6509
2301

3318
10761
10053
11006
4726

3055
8238
8388
10499
16116

4145
1135
6326
3248
3734
2661
4180
1240
6488
5394
4859
6312
2128
2689

31894
27468

7845
2959
2719
2650
3442
2128
2702
3306
2590
2887
2655

4595
6230
11249
2158
3494
7055
5763

4473
6469
6779
3344
5325
7869
1481
6709
5553
8648

5459
12649
10227
19725

4389
4566
2761
5106
4064
4118
1923
3564
2935
1084
5351
6416
6170
1642

63220

3978
7803
9714
6796
5812
7324

6757
3868
18800
1352

2034
1060
4800
5866
2625
3222
2281
2911
3698
2632
2504
2993
5809
1805
4196

5613
2702
1140
2398
2584
3877
2934
1496
4237
4305
2103
5801
2201
1100
4737

4454
24314
4677

6100
1297
4199
6261
5518
1942
1875
3137
5217
2370
4628
4854
6484

2790
5473
6457
4180
1133
6134
3019
3479
5472
3336
5414
4040
6459
5327

24399
21223
12711

7774
10176
10388
2864
2575
8018
3420
6435

9838
14038
11004
7468
1242

6915
5378
5586
7725
5101
1569
3073
4346
1253

2633
4195
6287
4192
8015
9520
6870
9894

7014
2252
3296
2288
5613
2615
1903
7348
5555
1460
2770
4373

8013
8256
3029
8246
2830
6447
8885
9633
9081

6296
6768
4904
3649
2623
1577
7764
1959
6686
7329
3986

13311
5670
6954
7407
12264

1832
6503
7209
7871
5590
1952
4496
4698
3591
5818
1756

3584
6327
6639
7100
3409
1023
4365
5607
6419
7887
5419

23730
7283
7943

5497
4917
1514
1399
6628
3835
5718
2071
6030
2238
2187
4433
6289

6897
2972
3174
2134
6927
3165
2072
6086
5119
4199
3256
3257
6808

23297
8152
1449

4807
4900
7997
13646
10133

60078

1764
4796
7749
1069
5594
2802
3850
1878
3212

8476
1982
3141
2647
10087
1170
5975
3683

4310
5495
1374
1462
1852
5149
5976
3397
1280
3545
3021
2969
5261
3474
4938

14240
36288

3977
6268
1396
2707
6344
5279
3026
1237
4671
1545
3049
1235
3322
1226

7877
10542
10800
11760
7013
11468
10914

1883
6346
8428
2097
12309
1747

6919
4606
4133
6376
6127
3131
5530
1041
6161
4321
6201
7080

9683
19478
7509
7186

15598
23816
9973

1740
5245
7924
2086
3354
5989
1788
7710
5233
4330
6087

5063
3096
7629
6728
5995
6789
5294
8760
5424
6981

3548
2507
2274
1434
4003
3988
2009
5501
3583
4751
3335
1793
3450
4458
5667

9998
12172
10851
13296
12712
5534

3552
2877
3870
4505
5234
4130
5405
5460
5840
4405
1839
3764
2418
4602

11031
11643
9905
8111
10798
12365

38360

3952
19297
16495
16016

9608
2121
5670
3593
8530
2474
9402
1305

2152
6691
5395
7779
5215
6785
1282
7910
3591
1320

6767
5293
5630
5654
9330
2438
5614
8125
5418

8336
6170
1224
3646
4163
8049
9345
6148

2815
2907
4811
1271
2410
3790
4602
3684
2711
2756
3535
1877
3902

3492
4651
2158
6059
2071
8046
3863
4920
2427
5702

4846
14976
16005
17415

4171
3820
1051
3655
1972
1510
6213
2666
5479
3776
2680
4844
3361

68996

1046
3913
6469
3566
5521
2615
5167
1535
1842
4028
2505
6146
5646

30144
31365

2582
5925
1480
3378
7508
6960
5834
4230
4839
5744
5675

32883

13628
14364
15147

3863
1397
8149
3836
6434
1847
6078
5762
4318
2934

4426
1851
4825
5352
5998
4412
2592
5786
3582
3180
2682
3928
2112

6674
1167
4238
4532
4175
2308
4963
5452
7397
7163
4460

)";

static std::string day2 =
	R"(A Y
A Y
B X
A Y
C Y
B Y
B Z
B Y
A X
B X
C Z
B Y
B Y
B Y
B Y
C X
A Z
B X
A Y
A Y
B Y
A X
C X
B Y
A Y
B Y
C X
A Z
B Y
A X
A Y
B Y
A Y
A X
B Y
B Y
B Y
B X
A X
C Y
A X
C Z
B Z
A Z
A Z
C X
A X
A X
B Y
B Y
C Y
B Y
B X
B Y
B Y
B X
C X
A X
A X
A Z
C X
A Z
A X
B Y
B Y
A Y
A Z
B Y
B X
B Y
B Y
B X
C Z
A X
B X
B X
A Y
B X
C Z
B Y
A X
C Z
A Y
B Y
B Y
A X
A Z
B Y
B Y
A Z
A Z
B Y
A X
A Z
C Y
A X
B Y
C X
A X
B Y
A X
A Z
C X
A Y
A X
B X
A X
B Z
B X
B Y
A X
A Y
B Y
B Z
C X
B X
A X
C Z
C Y
A Y
B Y
A X
B Y
C Y
B Y
C Y
B Y
C Z
C X
A Y
B Y
B X
A X
A X
A Y
A Y
B Y
A Z
B Y
A X
C X
B Y
B X
C X
A Y
B Z
B Y
B X
B Y
B Y
C Z
B X
B Z
A X
B Y
A X
B Y
C Z
A X
A Y
B Z
A X
B X
A Z
B Y
A Y
A X
B Y
C Z
B X
B Y
C X
B X
A X
C X
B X
B Y
B Z
B Y
B Y
A X
B Y
A X
A X
B X
A X
A X
B Y
B Y
B Y
C X
B Y
A Z
A X
B Y
A Y
A Z
B Y
A Z
C X
B Y
C X
B Y
B Y
A X
B Y
A X
B Y
B X
B Y
B Y
B Z
B Y
A Y
A X
A X
A X
C Z
A Y
A X
C Y
A X
B Z
B Y
B Y
B Y
A Z
B Y
B X
A Z
B Y
A Y
B Y
A Z
B Y
A X
B Z
A Z
C X
B Y
B Y
B Y
B X
A X
B X
A Y
B X
B Y
B Y
A X
B Y
B Z
B Y
B Y
B X
B X
C Z
A Y
B Y
B Y
B Y
B X
A X
B X
A Y
A Z
A Z
A Z
A X
A Y
B Y
C Y
A Z
A Z
A Z
C X
A X
C X
A Z
B X
A Y
B Y
A Z
B Y
B X
C Y
A Z
A X
C X
C X
C X
B Y
A X
A Y
C X
B Y
C Z
B Y
B Y
A Y
B Y
A Y
B Y
B Y
B X
A X
A X
A Z
A Y
B X
B Y
A Z
C X
A Y
A X
B Y
B Y
B X
A Z
B Y
A X
A X
B Y
A X
C X
A Z
A Z
B Y
A Z
A Y
A Y
A Y
B Y
A Y
A Z
A Y
A X
A Z
B Y
B Y
C X
B X
C Z
B X
A Z
C Y
B Y
A X
B Y
A Y
A X
B Y
B X
C Z
A Z
A Z
B Y
A Z
B Y
B Y
A X
A X
A X
B Z
A Y
B Z
A Y
C Y
A X
B X
A Y
B X
B Y
A X
A Y
A X
C X
C Z
B Y
A Y
B Y
B Z
A X
B Y
C Y
A Y
A Z
B Y
A X
A Z
A Y
B Y
B Y
A Z
C Z
B X
A Y
C Y
A X
A X
A X
B Y
C Z
A X
A X
B X
A X
A X
A Y
A X
C X
A X
A Y
B Z
A X
C X
A X
B X
A Y
A X
A X
A X
C Z
A X
A X
B X
B Y
A Y
A X
A Z
A Y
A Y
A Y
A Z
B X
A X
A X
A X
A Z
B Y
A X
A Y
B X
C X
B Y
A Z
A Z
A Z
B Z
B Y
A Z
A Z
A X
A Y
A X
A X
A X
A Y
A Z
B Y
A Z
B X
B X
A Y
A X
B X
B X
C Z
B X
A X
A Z
C X
A X
A X
B Z
A X
B X
A X
A X
A X
B Z
A Z
A Y
A Z
B Y
A X
A Y
A Y
B X
C Z
A X
A X
A X
B Y
B Y
A X
A X
B Y
A X
B X
A Y
C X
B X
B Y
C Z
B Y
A X
C Z
B Z
B Y
A Z
B X
B Y
B X
B Y
B Y
B Y
B X
B Y
A X
B Z
B Y
C X
B Y
C X
A Z
B X
A Z
A X
A Z
A Y
A X
A Z
B Y
B X
B X
B Y
B X
B X
B Z
B Z
B Y
A X
C X
B Y
B X
B X
C X
B X
B X
B Y
A Z
A Z
B Y
C Y
A Z
B Y
B Z
A Z
C Y
C X
A X
B Y
A Y
B X
B Y
B Z
A Y
A Z
A X
A X
C X
B Z
A Y
A Z
B Y
A Y
A Z
B Y
A Z
C Z
B Y
A X
A Z
B Y
B Y
A Y
A X
C Z
B Y
B X
A X
C Z
B Y
B Y
B Z
B Y
A Y
B Y
A Z
C Z
B Y
B X
B Z
B X
A X
A Y
A Z
A Z
A X
A X
B Y
B X
A Z
A X
B Y
B Y
B X
A Y
B Y
C Y
B Y
A X
B Y
B X
B Z
A X
B Y
B Y
A X
A X
A X
C X
B X
A Z
B X
C X
B Y
A Y
B Y
C X
B Y
B Y
B X
A X
A X
A X
A X
B Y
B Y
B Z
A Z
A Z
A Z
A Y
B X
A Y
B Y
C Z
C X
B Y
B Y
B Y
B Y
A X
A X
A Z
C Y
B X
A Y
B Y
B Y
C Z
B X
A X
A X
A Z
C X
B Y
B X
C Z
B X
A Y
B X
B X
B Z
C X
A Z
B Y
B X
B Y
B Y
A X
B Y
A X
A X
A Y
A Z
B Z
B Y
A Y
A Y
C Z
A Y
A X
B Y
B Y
C Z
B Y
A X
B X
A X
B Y
A X
A Z
B Z
B Y
A X
C X
A X
A X
B Y
A Y
A X
A Z
B Y
C Z
C X
A X
B X
B X
B Y
B X
B Y
B Y
A Z
A Y
A Z
A X
B Y
B X
B Y
C X
B Z
B X
C X
B Y
A X
A Y
A Y
B X
A X
B Y
B X
A X
B X
B Y
C Y
A Z
C Z
B X
B X
B Y
A Z
C Y
B X
A Z
B Y
A Y
A Z
B Y
A X
A Y
C Z
B Y
A X
B Y
B X
A Y
B Y
C X
A Y
B Y
B Y
A X
C Z
B Y
B X
A X
B X
B Y
A X
B Y
B Y
B Z
A X
C Z
A Y
B X
A X
C X
B Z
B Y
A Z
B X
A Z
B Y
C Z
A X
B Y
B X
B Y
A X
B Y
A X
A Y
A Y
A X
B Y
A X
B Y
A X
A Y
A Y
C X
B X
B Y
A Z
B X
A X
B Y
A Y
B X
B Y
A Z
B X
B X
A Y
B Y
A Z
B X
B Y
A Y
A X
A X
B X
C Z
A Y
B Y
A Z
A Z
A Z
B Y
A Y
A X
A Z
B X
B Y
C Y
A X
A X
C X
A Z
B X
B Y
B X
B Y
B Y
B Y
A X
B Z
B Z
B Z
B Y
A X
A X
B Y
A Z
B Y
C Y
B X
B X
B X
B Y
B Y
A Y
A X
B X
A X
A Z
A Y
C Y
B Y
B Z
B Z
A Y
B Y
A Z
B X
B Y
B Y
B X
B X
B Y
A X
C Z
B Y
A X
A X
A Y
B X
B Y
A Z
A Y
B Y
A Y
A X
A Z
A Y
A X
A X
A Y
B X
A X
B Y
B Y
B X
B Y
B Y
B Y
A Y
B X
A X
C Y
A Y
B Y
C X
C X
B Y
B Z
A Z
A Y
B Y
B Y
A Y
B Z
A Z
A X
B Y
A X
C Z
B Y
B Y
A Z
A Y
B Y
A Z
B Y
A Z
A Y
A Z
C Y
A Z
A X
A X
A Z
A X
B Y
A Z
B X
A Y
B Y
A Z
B X
B Z
B X
A Y
A Y
B Y
A Z
A X
B X
A Z
A X
B Y
B X
C X
A Z
C X
C X
B Z
A X
B Y
A Y
A Y
A Z
B Y
C X
A Z
A X
A Y
A Z
A X
A Y
A Y
A X
C X
B Y
B Y
B Y
A Z
B Y
A Z
B Y
C X
B Y
A X
B X
B Y
C X
A Z
B Y
B Y
B Y
A X
C Z
A Z
B Z
A X
A X
A X
A X
B Z
A Y
B X
B Z
A X
B X
A Y
A Y
C Z
B Y
B Y
A X
C Y
B X
B Y
A Y
C Z
A X
B X
A Z
C Z
C Z
B X
A Z
A X
B Z
A Z
B Y
B X
B Y
A Z
A Y
B Y
B Z
A X
B Z
A Z
A Y
C Y
A X
B Y
C Y
A Z
A Z
B X
B X
C X
A Y
B X
B X
B Y
A Y
C Z
A Z
A Y
B X
B Y
B Y
A X
C X
B X
A X
A Z
B Y
B Y
A X
A Y
B Y
C Z
A X
A X
B Y
A Y
A X
C Z
B X
C Y
A X
A X
A Y
B X
B Y
A X
B Y
A Y
B Y
B Y
B Y
B X
C X
A Z
A Z
A X
C Y
A Y
C X
A Z
A X
A X
B Y
A X
A X
B X
B Y
A Y
B Y
A X
B X
B Y
B Y
B X
C X
A Z
B Y
A Y
A Z
B Y
B Y
B Z
B Z
A X
B Y
A Y
A Z
A Y
A X
A Z
B X
A X
B X
A Y
C X
C X
A X
B X
A X
C X
A X
A Z
A Y
B Y
C X
A Y
A Y
B Y
B X
B Y
B Y
A Z
A Y
A Z
C X
B Y
B Y
A X
A X
B Y
A X
B Z
B X
B Y
A X
A Z
B Y
A Y
B Y
A X
C Z
A Z
A Y
B Y
B Y
B Y
B X
A Z
A Y
A X
B X
A Y
B Y
A Y
B Y
A Z
A Z
B Y
B X
B Y
A Y
C Y
B Z
B Y
A Y
C X
A Y
B Y
B Y
B Y
B Y
A X
B X
A Z
B Y
A Y
B Z
C X
B Y
A X
B X
B Y
B Y
A Y
A X
A Y
C X
B Y
A Y
A X
B Y
C X
A Y
B X
C Z
B Y
B Y
C Z
A X
A X
A X
A X
B Y
A Z
A Z
B X
A Z
A Z
A X
C Y
A Z
B Y
B Y
A Z
A Z
C Z
B Y
B X
C Z
C Z
B Y
B X
A Z
B X
C Z
C X
B Z
A Y
C Z
B Y
B Y
A Z
B Y
C X
C Y
B Y
C X
A X
A X
B Z
A Y
B Z
B Y
A X
B Z
A X
C X
B Y
A Y
A X
A X
B X
A X
A Y
A Y
B Y
B Z
B Y
A X
A Z
B Y
A Y
B Y
C Y
A X
B X
A X
B Y
A X
A X
B X
B Y
A Z
A Y
A X
C X
B X
C X
B Y
A X
B Y
A Z
A Z
C X
A Z
B Y
A Y
B Y
C X
B Y
B Z
A X
B Y
B X
A Z
B Z
B Y
A X
A Y
A Z
A Y
B Z
A X
A Y
A Z
A Y
C X
B Y
C Z
B Y
B Z
B X
B Y
A Z
C X
C Z
A Y
A Z
B Y
B X
B Y
B X
B X
A Y
A X
B X
B Y
A X
A X
B X
B Y
C X
A Y
C Y
A Z
C X
A Y
A Z
A Y
A X
A Z
B Y
C X
B Y
A Z
A Y
B Y
B Y
B X
B Y
C Z
A X
B X
A X
A X
A X
B Y
A X
B Z
B X
B Y
B Y
A X
B Z
A X
A Y
B Y
A X
B X
B Y
B X
A Z
A X
B Y
C X
B Y
A Z
B X
B Y
A Y
B X
A X
A X
A Y
A Y
B X
B Y
B Y
A X
A Y
B Y
A X
A X
A X
B X
B Y
A Y
A X
B Y
A X
B X
B Y
B Y
A Z
B X
B Y
B Z
A X
B X
A Z
A X
A Y
A X
B Y
B Y
A X
B Z
A X
B Y
B Z
A Y
A Y
A Z
A Y
B Y
A Y
B Y
A X
C Z
A Y
B X
B X
A Y
A X
B Y
C X
B X
B Z
A Y
A Y
C X
A X
B X
A X
A X
A Y
C X
A X
B Z
C Z
B X
B Y
A Z
C X
A X
B Y
B Y
A Y
B Z
B Y
B Y
A X
A X
C Z
B Y
B Y
B Y
A Z
A Z
B X
A X
B Y
A X
B Z
A X
B Y
B X
B Y
B Y
B Y
B Y
B Z
B Y
A Z
A X
C X
B Y
B Y
A X
B Y
B Y
A Z
A Z
A Z
A Z
A X
A Z
B X
B Y
B X
C Y
A Y
C X
B X
C X
A Z
B Y
B Y
A Y
B X
B Y
A Y
A X
A X
B Y
B X
A Y
B Y
B Y
C Z
C X
B X
B Y
A Y
A Z
B Y
A X
C Z
B Y
A Y
B Y
B Z
A X
A Z
A Y
A X
A Z
B Z
A Z
B Y
A Y
A X
A Z
B Y
B Y
B Y
B Y
B Y
A Z
B Y
C X
B Y
A Y
B X
B X
B Y
B Y
C X
C X
B Y
A Y
B Y
B Y
B X
A Z
B Y
B Y
B Y
A X
B Y
A Z
B Y
A X
B Y
B Y
A Z
B Y
A Z
C Z
B X
B Y
A Y
C Z
B Y
B X
B Y
A Z
A Z
B Y
C X
B Y
A Y
B Z
B Y
B Y
B X
A Z
A X
B Y
A X
A X
B X
B Y
A Z
B Y
C Z
A Z
A X
C Z
B Y
B X
C X
A X
A Z
A X
B Y
B Y
B X
A Z
B Y
B Y
C Z
A X
B Y
B Y
B X
B Y
B Y
C X
B Z
B Y
A X
B X
B X
B Y
A X
A Z
B Y
A X
A Z
A X
B Y
C Z
C X
C Z
A Z
B X
B Y
A X
B Z
A Y
A Z
A Z
A Z
A X
C Y
A X
B X
A Y
C Z
A X
B Y
B Y
A X
A Z
B Y
A Z
A X
A Z
B Y
A Y
B Y
A Y
C Y
B X
A Y
B Y
A X
B X
B Y
A Y
B Y
C Y
C X
B Y
B Y
B Z
B X
A Y
B Y
B Y
A X
C Y
C X
A X
B Y
B Y
B X
A X
B X
B Y
B Y
C X
B Y
B X
B X
A X
A X
B Y
B Y
B Y
B Y
B Y
C Z
A Y
B Y
C Z
B Y
C X
B Z
B Y
A X
A Z
B Y
A Y
A X
B Y
B Z
A X
C Y
B Y
B Y
A Z
A Y
B X
B Y
B Y
B Y
A Y
C Y
B X
B Y
B Y
B Y
B Y
B Y
A Y
B Y
A Z
B X
A Y
B X
B Y
B Y
A Z
B Z
B Y
C Y
A X
A Z
A X
B Y
C X
C Z
C Z
B Y
B Y
B Y
A Y
B X
B Y
C X
B Y
A Y
A Z
A X
A X
A Z
B Y
A Z
A X
B X
B Y
B Y
B Y
A Y
B Y
A Y
A Z
C Y
B X
C X
C X
A Y
B Y
A X
A X
A Y
A X
B Y
B Y
C X
B Y
C X
C X
C X
B Y
B X
B Z
A Y
C X
A Y
B Y
A Z
A Z
C Z
C X
A X
A X
A Z
B Y
C Z
B X
B Y
B Y
B Y
A Z
B Y
B X
B Y
B Y
A Z
A Z
B X
A X
B Z
A X
B Y
A Z
B Y
A Y
A X
B Y
B Y
C X
A X
B Y
C Y
B Y
B Y
A Y
A X
B X
B X
B Z
C X
B Y
B Y
C Y
B Y
A Y
B X
B Y
B X
A X
C X
C X
A X
A Y
A Y
B Y
A X
A X
B Y
A X
B Z
C X
B Y
A X
B Y
B Y
A Y
B Y
B Y
A X
B Z
B Y
B Y
A Z
B Z
B Z
B X
B Y
A Y
A Y
A X
B Y
A Y
B Y
A Z
B Y
A X
C Z
C Z
C X
B Y
B Z
B Z
C Z
B Z
B Y
C X
A Y
B Y
B Y
A X
C Z
A Y
A X
A Y
C X
A X
B X
C X
A Z
B Y
A X
A X
B Y
B Y
A X
B Y
A Z
A X
C X
B Y
C Z
B X
B Y
C Z
A X
B Z
A Y
A Y
B Y
C X
C Z
A X
A X
A Y
A Y
A Y
B Y
A X
A X
B Z
C Y
A Y
B Y
B Y
B Y
A X
A X
C Z
B Y
B Y
A X
B Y
B Y
A Y
A X
A Z
A Z
A Z
B X
A X
B Y
C Y
B Y
C Y
B X
A Y
C Z
A Y
B Y
A X
C X
A X
B Y
C X
A X
A X
B X
A Z
B X
C Z
A X
B X
A Y
C Y
C X
A X
A Y
A X
A X
B Y
A Z
A X
A Z
A Y
B Y
A Y
A X
B Y
A Y
A X
A X
B X
B Z
B Y
B X
C X
A Z
C X
B Y
A Y
B X
A Z
B Y
A Y
B Y
C X
B Y
B Y
C Z
B Z
B Y
A Z
A Y
B X
A X
A Z
A X
A Y
B X
A Z
A Y
A X
A X
B X
B Y
A X
C X
C Z
B Y
C X
B Y
A X
A X
B X
A X
A Z
B X
B Y
C X
B Y
B Y
A Z
A Y
A X
B X
A Z
A Y
C Z
A X
A X
A Z
C X
B Y
A Z
A Y
B Y
A Y
B X
B Y
C Y
B Y
C X
B Y
B Y
B Y
B X
C X
A X
B Y
B X
B X
B Y
A Z
B Y
A X
A X
A X
A X
C Y
A Z
A Y
C X
B X
A X
B Y
C X
C Z
B Y
A Z
B Z
B Y
B Y
A Y
B X
B Y
C X
B Y
A Y
B Z
A Z
A X
A X
A Y
C X
B Y
A Y
B X
B X
B Y
B Y
A Z
A Y
A Z
B Y
A Y
A X
B Y
C X
A X
B Y
A Y
A X
B Y
B Y
C Y
A X
A Z
A Y
B Y
B X
B X
B Y
A X
B Y
B X
A Y
B X
B Y
B Y
B Y
A Z
B Y
B Z
C X
A Z
B Y
B Y
C Y
A Y
B X
B Z
B X
A Z
B Y
B X
A Y
B X
B Z
A Z
C X
B X
B X
B Z
B Y
B Y
A Y
A Y
A Y
A Y
B Y
B Z
C X
A X
B Y
B X
A Y
C Z
B Y
A X
A Z
C X
A Z
A Z
C Y
B Y
A X
A X
C X
A Z
B Y
B Y
B Z
B Y
A X
C X
A X
A Z
A X
A X
A Y
C X
A Z
A X
C Y
A Y
C X
B Y
B Y
A X
B Y
A X
B Y
C X
B X
A X
A Z
A X
B Y
A Y
B Y
C X
B X
C Z
B Y
B Y
B Y
A X
B Y
A Y
A Z
C Z
A Y
B Y
C Y
C Z
A X
A Y
B Y
A Y
B X
C X
C Z
B X
A Z
A Z
B Y
A Y
A Z
B Z
C X
A Z
C X
B X
B Y
A Y
B X
A Z
A Y
A X
A X
B Y
A Y
C X
B Y
A X
B Z
B X
B Y
A Y
B Y
B X
A Z
A X
A X
B Y
A Z
B X
A Y
C Z
A Y
A X
B Y
B X
A Z
C Z
B X
A Z
A Y
A Z
B Y
B Y
C X
B Y
A Y
A Y
A Y
A X
B Y
B Y
A Z
A X
B X
A X
B Y
B Y
A Y
A Y
A X
B Y
B Y
B Y
C Z
B Y
A X
C X
A X
C X
B X
A X
A X
B Y
B Y
A X
B Y
B Y
A X
A Z
A Y
B Y
A X
C Y
C X
B Y
B X
B Y
B Z
B Y
A Y
B Y
A Z
C Z
A Y
A Y
B Y
B Y
A X
B Y
B Y
A Y
B Y
B Y
A X
A Z
A Z
A Y
B Y
A X
A Z
B Y
A X
B X
C Y
A X
A Y
B X
A X
A Y
A Z
C X
A X
A X
B Y
B Y
B Y
A X
A Z
A X
B Y
B Y
C Y
C Z
B Y
B Y
B Y
C X
B Y
A Z
A X
B X
B Y
C Z
A Z
A Z
B Y
A Z
A X
A Z
B Y
A X
C X
B X
A Y
B Y
C Y
A X
A X
B Y
A Z
A X
A X
A Y
A Y
A Y
B Y
A Y
)";

static std::string day7 =
	R"($ cd /
$ ls
dir cdnhnmcb
dir dmccnsqv
290229 dsm
dir gsszlj
dir hmw
dir jhmrn
dir ncb
dir npclt
dir rvvjbz
$ cd cdnhnmcb
$ ls
170937 fsjwz.css
281758 jmfcfs.gsq
109017 jwwv.zlz
295735 tsrqvpbq
$ cd ..
$ cd dmccnsqv
$ ls
273438 fsjwz.css
dir jtntzqfd
dir tqmbq
211769 vmgpwrbz.nbp
205895 wqz.qcg
$ cd jtntzqfd
$ ls
4635 wqfvvzth.vdz
$ cd ..
$ cd tqmbq
$ ls
dir bnvspstf
22264 bqcvlnw.pmq
dir hwv
200690 jlwjsbw.bzf
dir npclt
243708 qvnbwvt.sbv
157861 tsrqvpbq.mtf
$ cd bnvspstf
$ ls
46133 mwvz.vwh
289236 rjcp.gqj
$ cd ..
$ cd hwv
$ ls
dir tsrqvpbq
$ cd tsrqvpbq
$ ls
292872 rvvjbz.mgh
$ cd ..
$ cd ..
$ cd npclt
$ ls
191646 bhllwpr
26548 jlwjsbw.bzf
214302 nnqz
74637 szdjtbt.tmw
$ cd ..
$ cd ..
$ cd ..
$ cd gsszlj
$ ls
dir bjvqcfwc
dir dfzhdhs
179837 dsm.hzf
112354 gnrzhsw.jcf
175236 jlwjsbw.bzf
dir mfnllhfw
dir nwvcgb
dir rvvjbz
dir vcvmq
$ cd bjvqcfwc
$ ls
125387 rvvjbz
$ cd ..
$ cd dfzhdhs
$ ls
218291 jlwjsbw.bzf
dir jsmjbfg
dir rvvjbz
272548 zdrtjvzj.rlt
196309 ztdcrnl.hjj
$ cd jsmjbfg
$ ls
72259 bmszdt
242641 fsjwz.css
109294 mwtlz
149525 sgngzrnn.mww
$ cd ..
$ cd rvvjbz
$ ls
175613 rqjmjhrb
$ cd ..
$ cd ..
$ cd mfnllhfw
$ ls
119986 fcjrv.dvh
dir gwjgjljj
157962 jjjbv.fdp
dir mwttp
30246 vhzdjv.fqh
197554 zdrtjvzj.rlt
288875 zhdn.dtj
$ cd gwjgjljj
$ ls
237890 mlmmfh
dir ncjzqll
10935 zdrtjvzj.rlt
$ cd ncjzqll
$ ls
152092 gwwh.ttt
$ cd ..
$ cd ..
$ cd mwttp
$ ls
217929 fsjwz.css
$ cd ..
$ cd ..
$ cd nwvcgb
$ ls
131410 fsjwz.css
dir nqrdmvjm
82487 qwbg.hcb
dir tsrqvpbq
123617 tsrqvpbq.wqw
$ cd nqrdmvjm
$ ls
dir btjwzz
dir dsm
dir fcrsj
141465 fsjwz.css
133916 ztdcrnl.hjj
$ cd btjwzz
$ ls
dir nqrdmvjm
dir tsrqvpbq
150003 zdrtjvzj.rlt
$ cd nqrdmvjm
$ ls
dir dsm
160109 gzv.wzw
33187 mcgmjn.ftg
dir pbgdcwd
167821 ztdcrnl.hjj
$ cd dsm
$ ls
84979 gwwh.ttt
dir rvvjbz
$ cd rvvjbz
$ ls
189309 btvjmhp.dwm
$ cd ..
$ cd ..
$ cd pbgdcwd
$ ls
240743 rzgbfcg.dzg
$ cd ..
$ cd ..
$ cd tsrqvpbq
$ ls
284223 mmhvjn
188341 tnv.rcs
271396 zdrtjvzj.rlt
$ cd ..
$ cd ..
$ cd dsm
$ ls
128966 ptf
$ cd ..
$ cd fcrsj
$ ls
261786 qljq.nrv
$ cd ..
$ cd ..
$ cd tsrqvpbq
$ ls
57089 fsjwz.css
208087 ttfhpzll
$ cd ..
$ cd ..
$ cd rvvjbz
$ ls
dir ldglv
$ cd ldglv
$ ls
39389 wjwzdg.ldb
$ cd ..
$ cd ..
$ cd vcvmq
$ ls
dir jzgd
246541 lmfdrnnz.dcc
169613 npclt
264902 npclt.jsl
dir pwzbvvwz
82651 rch.bsc
223282 vddwtwz.pqf
dir wnb
$ cd jzgd
$ ls
91717 dqmhdw.mjr
69771 ztdcrnl.hjj
$ cd ..
$ cd pwzbvvwz
$ ls
dir cdmfv
dir fvqjbd
dir nhvhhs
dir npclt
dir rgdb
$ cd cdmfv
$ ls
172054 dsm.qjw
$ cd ..
$ cd fvqjbd
$ ls
212067 hclqv
dir tcjsbn
$ cd tcjsbn
$ ls
40576 wbzwnc.pqf
13447 wlrjhcf.jtg
$ cd ..
$ cd ..
$ cd nhvhhs
$ ls
92810 bgfgrzs
$ cd ..
$ cd npclt
$ ls
dir dcs
dir tsrqvpbq
$ cd dcs
$ ls
274856 nrqwg
$ cd ..
$ cd tsrqvpbq
$ ls
144678 jlwjsbw.bzf
dir nqrdmvjm
163728 qwddbflc.gjp
$ cd nqrdmvjm
$ ls
122069 btpm.vhg
105752 psrmw
149744 rvvjbz.bnn
126434 ztdcrnl.hjj
$ cd ..
$ cd ..
$ cd ..
$ cd rgdb
$ ls
75645 blzt
dir clz
dir ddmbzz
dir hrl
280472 jgmd.htc
217770 nqwgl.qqb
dir qjcrf
$ cd clz
$ ls
dir fshcptjq
125496 lhgsdhl.gss
291857 pfbjptg.lqh
78923 rdhmmqml.lrw
$ cd fshcptjq
$ ls
157704 btf
66314 qcpjsfr
225592 rsftvgr
$ cd ..
$ cd ..
$ cd ddmbzz
$ ls
217731 cbc.dmn
16389 cdwwz
256395 gwwh.ttt
233481 rvsslvbh
dir rvvjbz
dir zgc
$ cd rvvjbz
$ ls
dir zrwtdlzz
$ cd zrwtdlzz
$ ls
21488 gdgl.vbc
$ cd ..
$ cd ..
$ cd zgc
$ ls
222107 gwwh.ttt
35382 npclt.fpp
$ cd ..
$ cd ..
$ cd hrl
$ ls
dir rvvjbz
$ cd rvvjbz
$ ls
65335 dgn.mgd
$ cd ..
$ cd ..
$ cd qjcrf
$ ls
dir fjrdgbwh
$ cd fjrdgbwh
$ ls
143960 wvnzt.wvq
$ cd ..
$ cd ..
$ cd ..
$ cd ..
$ cd wnb
$ ls
66543 jlwjsbw.bzf
dir nqrdmvjm
dir pfwptjtl
3047 sbdlzbt.hlj
$ cd nqrdmvjm
$ ls
dir cqn
dir mnmbmb
182573 pmw.pdl
dir rvvjbz
92911 ztdcrnl.hjj
$ cd cqn
$ ls
38563 npclt.pcl
14353 sdlmtzzv
52230 ztdcrnl.hjj
$ cd ..
$ cd mnmbmb
$ ls
212337 fsjwz.css
24700 gwwh.ttt
10243 npclt
dir nqrdmvjm
238617 rvvjbz
$ cd nqrdmvjm
$ ls
19026 plrvst.bpd
$ cd ..
$ cd ..
$ cd rvvjbz
$ ls
23115 fsjwz.css
260656 jlwjsbw.bzf
113097 zdrtjvzj.rlt
$ cd ..
$ cd ..
$ cd pfwptjtl
$ ls
134817 jlwjsbw.bzf
80522 npclt
254529 nqrdmvjm.mbc
35322 ztdcrnl.hjj
$ cd ..
$ cd ..
$ cd ..
$ cd ..
$ cd hmw
$ ls
dir cfc
dir cmbtwjqm
dir dsm
81077 dzsj.bsl
dir gzgr
dir jrdhssrz
dir npclt
dir tsrqvpbq
dir vssgzdw
dir wngccwdr
5928 wrpd.zwq
113540 ztdcrnl.hjj
$ cd cfc
$ ls
159334 npclt
212665 ztdcrnl.hjj
$ cd ..
$ cd cmbtwjqm
$ ls
dir vzftvhhc
$ cd vzftvhhc
$ ls
86763 jlwjsbw.bzf
dir nbj
dir qzbf
$ cd nbj
$ ls
63776 jlwjsbw.bzf
$ cd ..
$ cd qzbf
$ ls
189850 rtszjp.zhq
$ cd ..
$ cd ..
$ cd ..
$ cd dsm
$ ls
dir bddwfjhv
258304 fltv
4285 jlwjsbw.bzf
dir nqrdmvjm
dir rvvjbz
258902 zdrtjvzj.rlt
$ cd bddwfjhv
$ ls
201408 zdrtjvzj.rlt
$ cd ..
$ cd nqrdmvjm
$ ls
250981 npclt.dnd
$ cd ..
$ cd rvvjbz
$ ls
181444 npclt.msj
146533 thzv.jbn
$ cd ..
$ cd ..
$ cd gzgr
$ ls
dir brmzzz
dir dsm
$ cd brmzzz
$ ls
40671 jlwjsbw.bzf
$ cd ..
$ cd dsm
$ ls
53299 bmdpw
dir npclt
223542 qdrlng
dir thjnrtq
$ cd npclt
$ ls
30938 bdldl
36847 gfwbhj.nvh
159051 qjpggrst.czp
233569 vwpr.drg
dir wwln
$ cd wwln
$ ls
153489 fsjwz.css
196950 lzcrjs
$ cd ..
$ cd ..
$ cd thjnrtq
$ ls
30861 fsjwz.css
$ cd ..
$ cd ..
$ cd ..
$ cd jrdhssrz
$ ls
194556 bqcn.ctq
dir gnhc
148157 gwwh.ttt
dir jcqcjbj
245407 jlwjsbw.bzf
248457 lmvh
$ cd gnhc
$ ls
183841 fsjwz.css
128648 hzcpmz
154895 mvznln
193794 ztdcrnl.hjj
$ cd ..
$ cd jcqcjbj
$ ls
266176 cbbfjsp
dir dsm
195555 sfq
$ cd dsm
$ ls
13098 bjhsqfpp.rvw
dir grpp
dir nqb
$ cd grpp
$ ls
259797 jvw.psl
32317 sfm.twr
$ cd ..
$ cd nqb
$ ls
82426 rvvjbz.fdm
$ cd ..
$ cd ..
$ cd ..
$ cd ..
$ cd npclt
$ ls
dir tqzmprzr
$ cd tqzmprzr
$ ls
278120 dsm.hqd
$ cd ..
$ cd ..
$ cd tsrqvpbq
$ ls
dir dqbnbl
dir dsm
dir lsglr
213028 rvvjbz.rvh
112991 tsrqvpbq.ptw
$ cd dqbnbl
$ ls
dir dhzs
281375 dsm
121452 gwwh.ttt
dir mbc
dir npclt
211213 tsrqvpbq.zsz
125518 zdrtjvzj.rlt
$ cd dhzs
$ ls
110840 gwwh.ttt
197645 tsrqvpbq
$ cd ..
$ cd mbc
$ ls
224503 drsrlls.ctp
dir dzm
65461 jlwjsbw.bzf
dir nqrdmvjm
137158 nqrdmvjm.vtq
dir rvvjbz
126868 rwrzljq
$ cd dzm
$ ls
279593 fsjwz.css
13111 gwwh.ttt
205453 hchlb.bdn
277556 jlwjsbw.bzf
dir jvd
dir nqrdmvjm
dir prqlqh
dir rhdhhfs
dir rvvjbz
$ cd jvd
$ ls
76776 fsjwz.css
85847 wqdzvs.vwf
$ cd ..
$ cd nqrdmvjm
$ ls
40200 npclt.fcq
$ cd ..
$ cd prqlqh
$ ls
267371 fsjwz.css
$ cd ..
$ cd rhdhhfs
$ ls
51224 dsm.qln
$ cd ..
$ cd rvvjbz
$ ls
dir npclt
dir wdhgmfb
60599 wjwgrq
$ cd npclt
$ ls
138588 bdqtq.slq
221322 rjmbd.pdj
279540 ztdcrnl.hjj
$ cd ..
$ cd wdhgmfb
$ ls
98271 jcg.pwz
$ cd ..
$ cd ..
$ cd ..
$ cd nqrdmvjm
$ ls
221950 swnsstls.zcl
7947 tqwhs
$ cd ..
$ cd rvvjbz
$ ls
272797 zdrtjvzj.rlt
$ cd ..
$ cd ..
$ cd npclt
$ ls
294537 bqlgnwwf.qqf
285887 flzmnmft
3041 fsjwz.css
dir npclt
dir rvvjbz
235966 zhwvl
$ cd npclt
$ ls
96669 sjcr.qmc
$ cd ..
$ cd rvvjbz
$ ls
240351 fsjwz.css
112539 rvvjbz.tlc
$ cd ..
$ cd ..
$ cd ..
$ cd dsm
$ ls
dir dpbsq
dir lmvjnd
dir vjnb
$ cd dpbsq
$ ls
dir vczm
$ cd vczm
$ ls
252709 jfzq.fvc
$ cd ..
$ cd ..
$ cd lmvjnd
$ ls
20118 rsp.njm
$ cd ..
$ cd vjnb
$ ls
192558 vvggw.ljj
$ cd ..
$ cd ..
$ cd lsglr
$ ls
222728 qvp
296718 ztdcrnl.hjj
$ cd ..
$ cd ..
$ cd vssgzdw
$ ls
dir smfhgcv
$ cd smfhgcv
$ ls
16174 dtpgsvfv.csm
43403 lhbqdpv
dir ndh
52985 pcj.csh
81157 vwsrt
278111 zdrtjvzj.rlt
$ cd ndh
$ ls
80287 jlwjsbw.bzf
$ cd ..
$ cd ..
$ cd ..
$ cd wngccwdr
$ ls
6088 ppjnslg
$ cd ..
$ cd ..
$ cd jhmrn
$ ls
dir qwqhhbth
$ cd qwqhhbth
$ ls
dir ggfmlp
dir qgflbldg
$ cd ggfmlp
$ ls
35739 dsm
38351 jlwjsbw.bzf
$ cd ..
$ cd qgflbldg
$ ls
dir pbw
dir rvvjbz
dir tqppnqmv
$ cd pbw
$ ls
dir nqrdmvjm
5912 nqrdmvjm.qvj
$ cd nqrdmvjm
$ ls
dir tnd
$ cd tnd
$ ls
dir lwsvwsl
$ cd lwsvwsl
$ ls
150503 jlwjsbw.bzf
$ cd ..
$ cd ..
$ cd ..
$ cd ..
$ cd rvvjbz
$ ls
dir dmrff
dir ssnbl
dir zgrgt
$ cd dmrff
$ ls
dir vmmzmf
$ cd vmmzmf
$ ls
211105 tsrqvpbq
$ cd ..
$ cd ..
$ cd ssnbl
$ ls
246210 mlj.qbv
$ cd ..
$ cd zgrgt
$ ls
207409 lnvqlhsj
$ cd ..
$ cd ..
$ cd tqppnqmv
$ ls
59007 gwwh.ttt
123705 jlwjsbw.bzf
277423 rvvjbz.hbn
170157 tbs
dir ztg
$ cd ztg
$ ls
8432 fsjwz.css
$ cd ..
$ cd ..
$ cd ..
$ cd ..
$ cd ..
$ cd ncb
$ ls
30859 dsm
74337 jvp.jwl
dir lgvwz
150310 lhl.rtq
$ cd lgvwz
$ ls
105307 fftbgl.tnh
69432 npclt.sdq
49765 zdrtjvzj.rlt
214149 ztdcrnl.hjj
$ cd ..
$ cd ..
$ cd npclt
$ ls
dir dsm
dir rvvjbz
dir trr
$ cd dsm
$ ls
dir bcccgpl
dir cvddqch
210401 fsjwz.css
96482 nqrdmvjm.tgr
dir nwctzch
29453 zdrtjvzj.rlt
$ cd bcccgpl
$ ls
237918 dshtjdcs
dir mtrcfbf
dir tgt
dir tsrqvpbq
99779 wpfsbnh.nbh
257112 ztdcrnl.hjj
$ cd mtrcfbf
$ ls
dir hms
49756 tsrqvpbq
$ cd hms
$ ls
185755 zdrtjvzj.rlt
$ cd ..
$ cd ..
$ cd tgt
$ ls
dir dsm
dir jmfdpdf
256858 zdrtjvzj.rlt
$ cd dsm
$ ls
71528 dsm.rvc
$ cd ..
$ cd jmfdpdf
$ ls
231263 hgsvvrqt.vbp
$ cd ..
$ cd ..
$ cd tsrqvpbq
$ ls
218774 clhqvp
$ cd ..
$ cd ..
$ cd cvddqch
$ ls
144164 fsjwz.css
dir gfszp
60880 nqrdmvjm
222198 vhhtgj
$ cd gfszp
$ ls
127091 fsjwz.css
$ cd ..
$ cd ..
$ cd nwctzch
$ ls
258292 rfvvc
$ cd ..
$ cd ..
$ cd rvvjbz
$ ls
dir cnv
dir dtpswgq
dir ggdhw
97538 jsjlq
218535 nqrdmvjm.fhj
134022 tsrqvpbq.mbs
51273 zdrtjvzj.rlt
$ cd cnv
$ ls
208016 gzvmv.dfg
$ cd ..
$ cd dtpswgq
$ ls
dir jfbgfts
$ cd jfbgfts
$ ls
273657 bbtbqv
77349 dsm.rnc
dir nqrdmvjm
208448 zdrtjvzj.rlt
$ cd nqrdmvjm
$ ls
dir bjdrqnt
dir msqc
dir npclt
dir rsms
dir vzhdtv
$ cd bjdrqnt
$ ls
103077 tph.bpz
264222 wmvzc
$ cd ..
$ cd msqc
$ ls
72288 ztdcrnl.hjj
$ cd ..
$ cd npclt
$ ls
dir tfbzdm
$ cd tfbzdm
$ ls
dir nqrdmvjm
35970 nqrdmvjm.gwj
54275 rvvjbz.pvs
dir wwrsrmn
179618 ztdcrnl.hjj
$ cd nqrdmvjm
$ ls
dir gljgj
$ cd gljgj
$ ls
135000 gwwh.ttt
$ cd ..
$ cd ..
$ cd wwrsrmn
$ ls
17120 npclt.vhz
$ cd ..
$ cd ..
$ cd ..
$ cd rsms
$ ls
198169 fsjwz.css
$ cd ..
$ cd vzhdtv
$ ls
234619 gwwh.ttt
$ cd ..
$ cd ..
$ cd ..
$ cd ..
$ cd ggdhw
$ ls
dir dsm
dir fmljfpfb
dir nqrdmvjm
dir qrhnjrn
dir vpsqmmp
$ cd dsm
$ ls
185390 rvvjbz.ljl
70843 scrzhct.shj
dir zqd
$ cd zqd
$ ls
197478 lrpnc.pqp
dir nljssvvw
228126 rfsnv
dir wzvvggdp
$ cd nljssvvw
$ ls
248489 dwdcnzb.ztq
$ cd ..
$ cd wzvvggdp
$ ls
40266 jlwjsbw.bzf
$ cd ..
$ cd ..
$ cd ..
$ cd fmljfpfb
$ ls
dir chc
232964 gwwh.ttt
283351 jlwjsbw.bzf
$ cd chc
$ ls
273399 cjtznvrq.jcd
250531 dsm.djs
dir lgqz
173885 pmlw.hcb
273356 swwzbpdm
7329 wtvs.qrr
$ cd lgqz
$ ls
9432 fst.nlb
$ cd ..
$ cd ..
$ cd ..
$ cd nqrdmvjm
$ ls
129926 zdrtjvzj.rlt
$ cd ..
$ cd qrhnjrn
$ ls
dir vnvchpr
dir zchcq
271220 ztdcrnl.hjj
$ cd vnvchpr
$ ls
257931 rvvjbz
132252 wtgs.btb
$ cd ..
$ cd zchcq
$ ls
dir hmf
215104 sshml
$ cd hmf
$ ls
253334 gbvbmwbf.lhs
$ cd ..
$ cd ..
$ cd ..
$ cd vpsqmmp
$ ls
32455 gwwh.ttt
170338 rfsvs.dfq
$ cd ..
$ cd ..
$ cd ..
$ cd trr
$ ls
dir bfjwfd
dir bhrvh
dir ggfc
187910 gwwh.ttt
dir mtqftj
$ cd bfjwfd
$ ls
dir npclt
dir wqqfszn
$ cd npclt
$ ls
269520 trrcw.jmq
$ cd ..
$ cd wqqfszn
$ ls
151594 rvvjbz.gvt
$ cd ..
$ cd ..
$ cd bhrvh
$ ls
251782 cpbvqrjj
$ cd ..
$ cd ggfc
$ ls
65357 gwwh.ttt
dir jqjtwf
$ cd jqjtwf
$ ls
65025 wzrp.pbp
$ cd ..
$ cd ..
$ cd mtqftj
$ ls
294942 vtjhwjr.qgc
88168 wvbnjp.blf
$ cd ..
$ cd ..
$ cd ..
$ cd rvvjbz
$ ls
dir csfp
141875 dsm
294580 jlwjsbw.bzf
dir jqlm
25928 lqhpn.jrh
224295 zdrtjvzj.rlt
113314 zww.ftt
$ cd csfp
$ ls
153717 ztdcrnl.hjj
$ cd ..
$ cd jqlm
$ ls
163455 jlwjsbw.bzf
)";

Trees day8 = 
{
	{2, 0, 0, 2, 1, 0, 1, 0, 1, 3, 0, 2, 1, 2, 3, 0, 0, 1, 2, 0, 1, 2, 3, 2, 0, 0, 3, 2, 1, 4, 4, 1, 3, 3, 0, 4, 0, 4, 2, 4, 2, 4, 0, 2, 4, 2, 2, 2, 1, 1, 1, 4, 5, 5, 3, 3, 4, 4, 2, 1, 3, 3, 3, 4, 1, 2, 0, 2, 0, 1, 1, 3, 1, 2, 1, 3, 3, 2, 3, 2, 2, 1, 0, 1, 3, 3, 1, 1, 3, 0, 1, 0, 1, 2, 2, 2, 1, 2, 1},
	{1, 2, 0, 1, 0, 0, 0, 0, 2, 0, 1, 0, 2, 0, 3, 2, 1, 0, 1, 3, 0, 4, 2, 1, 3, 0, 1, 2, 0, 1, 4, 0, 4, 2, 3, 1, 1, 0, 1, 2, 5, 4, 5, 3, 5, 2, 4, 2, 3, 2, 2, 1, 1, 2, 2, 2, 4, 5, 2, 4, 2, 5, 4, 0, 3, 1, 3, 3, 3, 2, 2, 4, 2, 0, 2, 4, 1, 3, 3, 3, 1, 3, 2, 0, 0, 1, 0, 3, 0, 2, 2, 0, 2, 0, 2, 2, 2, 2, 0},
	{0, 0, 1, 2, 0, 0, 1, 0, 0, 2, 0, 0, 1, 3, 3, 3, 0, 0, 1, 0, 3, 2, 4, 1, 1, 4, 4, 4, 0, 3, 0, 3, 3, 1, 2, 4, 1, 3, 3, 3, 4, 1, 4, 3, 5, 5, 2, 4, 3, 2, 4, 1, 4, 3, 4, 2, 3, 3, 4, 1, 1, 3, 3, 2, 5, 2, 1, 4, 4, 0, 4, 0, 0, 0, 0, 4, 2, 3, 1, 2, 1, 4, 3, 0, 2, 0, 0, 1, 0, 0, 0, 2, 2, 2, 1, 1, 2, 1, 1},
	{0, 0, 0, 0, 1, 2, 3, 2, 1, 2, 0, 2, 3, 2, 0, 0, 2, 4, 0, 3, 0, 3, 2, 0, 4, 2, 1, 2, 3, 0, 2, 0, 2, 2, 1, 3, 1, 3, 1, 5, 1, 4, 3, 4, 5, 3, 2, 5, 4, 2, 2, 5, 1, 3, 1, 4, 5, 2, 2, 1, 2, 1, 2, 4, 5, 1, 2, 3, 3, 2, 0, 2, 0, 2, 3, 4, 0, 2, 4, 1, 1, 0, 4, 0, 3, 0, 1, 1, 1, 3, 1, 3, 2, 1, 3, 1, 1, 2, 1},
	{1, 1, 1, 1, 0, 3, 0, 2, 2, 3, 1, 2, 2, 1, 1, 3, 4, 0, 1, 0, 3, 0, 4, 2, 3, 1, 3, 0, 2, 2, 5, 1, 3, 4, 1, 3, 5, 3, 2, 2, 5, 3, 1, 1, 4, 3, 5, 2, 1, 1, 3, 2, 5, 2, 4, 3, 2, 2, 1, 3, 3, 3, 5, 1, 3, 5, 1, 4, 1, 5, 5, 2, 0, 0, 3, 0, 2, 3, 3, 1, 3, 1, 4, 2, 4, 2, 3, 3, 2, 1, 3, 2, 0, 3, 2, 1, 2, 1, 2},
	{0, 1, 2, 1, 1, 2, 3, 3, 1, 0, 2, 0, 1, 0, 2, 4, 1, 1, 4, 4, 2, 4, 0, 4, 1, 0, 2, 1, 3, 2, 2, 4, 1, 5, 5, 3, 1, 5, 4, 4, 2, 1, 5, 1, 3, 5, 5, 5, 4, 1, 5, 2, 3, 3, 3, 1, 2, 4, 3, 2, 5, 1, 5, 4, 4, 5, 1, 5, 4, 4, 2, 2, 4, 0, 2, 4, 4, 4, 3, 1, 4, 0, 3, 3, 0, 0, 3, 3, 0, 3, 3, 2, 3, 3, 2, 0, 1, 0, 2},
	{2, 0, 0, 1, 1, 0, 2, 0, 1, 2, 3, 0, 1, 4, 2, 3, 2, 2, 0, 4, 3, 2, 2, 2, 3, 4, 5, 2, 4, 1, 2, 1, 5, 4, 4, 2, 2, 2, 4, 2, 2, 1, 5, 2, 3, 5, 3, 4, 5, 2, 1, 1, 2, 3, 3, 2, 2, 5, 5, 5, 1, 3, 5, 4, 5, 4, 4, 2, 2, 1, 2, 1, 1, 4, 2, 3, 2, 0, 1, 0, 2, 3, 0, 0, 3, 4, 0, 2, 1, 1, 1, 0, 0, 1, 2, 0, 3, 1, 0},
	{1, 2, 0, 0, 1, 2, 1, 2, 1, 3, 3, 0, 3, 1, 1, 2, 2, 3, 1, 3, 2, 0, 1, 2, 3, 4, 2, 5, 4, 3, 2, 1, 3, 5, 5, 3, 3, 3, 4, 4, 3, 1, 5, 4, 4, 1, 5, 5, 6, 4, 3, 4, 6, 3, 4, 4, 3, 1, 1, 5, 4, 4, 1, 5, 1, 5, 1, 4, 3, 1, 2, 1, 1, 3, 2, 4, 4, 2, 4, 3, 3, 1, 0, 2, 4, 2, 0, 4, 3, 3, 3, 0, 1, 2, 2, 1, 0, 3, 0},
	{2, 3, 2, 2, 0, 2, 0, 0, 1, 1, 2, 1, 0, 3, 1, 4, 3, 2, 4, 0, 3, 4, 4, 5, 3, 4, 1, 3, 3, 2, 2, 4, 3, 4, 1, 4, 4, 1, 4, 4, 4, 3, 3, 2, 6, 5, 4, 5, 5, 5, 6, 5, 2, 6, 4, 2, 3, 4, 2, 5, 6, 1, 2, 1, 1, 4, 1, 5, 3, 3, 5, 1, 2, 3, 4, 1, 1, 1, 4, 3, 2, 1, 3, 0, 3, 1, 4, 2, 0, 2, 3, 3, 0, 2, 2, 0, 0, 1, 0},
	{1, 3, 3, 0, 3, 3, 3, 0, 2, 0, 0, 4, 4, 3, 0, 2, 2, 1, 3, 0, 0, 4, 3, 1, 2, 1, 3, 1, 4, 4, 1, 3, 5, 4, 2, 2, 4, 2, 4, 5, 4, 6, 3, 4, 4, 2, 4, 3, 4, 3, 2, 3, 6, 3, 6, 6, 5, 2, 4, 6, 2, 4, 4, 3, 4, 1, 2, 4, 3, 4, 3, 2, 3, 5, 2, 5, 1, 4, 3, 3, 2, 1, 4, 2, 0, 4, 4, 4, 3, 4, 0, 2, 3, 1, 3, 1, 0, 0, 3},
	{3, 2, 3, 0, 3, 0, 0, 0, 3, 4, 4, 0, 2, 1, 2, 1, 2, 2, 3, 4, 1, 1, 2, 3, 5, 5, 1, 2, 3, 1, 4, 5, 3, 3, 5, 2, 4, 6, 4, 3, 3, 4, 3, 6, 2, 3, 4, 3, 2, 4, 5, 6, 6, 5, 3, 3, 5, 5, 6, 3, 5, 6, 5, 3, 4, 3, 4, 2, 1, 5, 1, 2, 4, 3, 1, 4, 2, 5, 2, 1, 3, 1, 1, 1, 4, 4, 1, 3, 0, 4, 3, 4, 0, 0, 1, 1, 2, 3, 1},
	{0, 0, 3, 0, 0, 0, 0, 3, 4, 4, 1, 3, 3, 2, 1, 4, 0, 2, 5, 1, 4, 2, 5, 4, 4, 3, 5, 2, 2, 4, 1, 1, 5, 3, 6, 6, 5, 3, 3, 4, 2, 5, 2, 4, 4, 6, 6, 3, 6, 3, 4, 3, 3, 6, 6, 2, 5, 2, 3, 2, 2, 3, 2, 5, 5, 3, 2, 2, 6, 3, 1, 2, 5, 2, 2, 1, 4, 2, 5, 3, 5, 2, 1, 2, 4, 1, 4, 0, 4, 0, 0, 0, 4, 1, 1, 3, 2, 2, 1},
	{2, 0, 3, 2, 0, 3, 2, 3, 4, 0, 2, 0, 4, 1, 1, 0, 2, 1, 4, 1, 1, 5, 3, 2, 5, 5, 2, 1, 4, 4, 4, 5, 6, 6, 4, 4, 5, 5, 3, 4, 3, 4, 3, 6, 2, 4, 5, 5, 3, 4, 2, 6, 6, 4, 6, 2, 4, 5, 4, 6, 6, 4, 2, 2, 4, 5, 5, 4, 3, 5, 6, 3, 5, 2, 4, 4, 5, 1, 5, 2, 3, 1, 3, 3, 3, 3, 4, 2, 0, 1, 1, 4, 1, 4, 1, 1, 1, 1, 3},
	{1, 0, 3, 0, 3, 2, 4, 4, 2, 4, 2, 4, 1, 0, 1, 3, 4, 1, 2, 1, 4, 4, 2, 1, 5, 4, 3, 4, 3, 3, 2, 5, 3, 5, 6, 3, 5, 3, 5, 4, 2, 2, 2, 6, 2, 3, 3, 3, 5, 5, 5, 2, 2, 2, 6, 3, 2, 2, 2, 4, 4, 6, 2, 4, 6, 3, 4, 2, 3, 5, 2, 6, 6, 3, 5, 4, 2, 2, 3, 5, 4, 5, 4, 1, 1, 1, 3, 0, 3, 4, 4, 3, 3, 4, 2, 3, 0, 0, 0},
	{0, 2, 0, 1, 3, 3, 3, 1, 4, 4, 4, 0, 1, 2, 3, 5, 3, 2, 1, 2, 4, 3, 5, 1, 2, 3, 3, 3, 2, 5, 2, 4, 5, 6, 6, 5, 4, 2, 4, 3, 4, 5, 5, 4, 6, 3, 2, 3, 7, 4, 7, 7, 5, 6, 2, 6, 4, 6, 5, 6, 5, 6, 6, 3, 4, 6, 3, 6, 6, 6, 6, 5, 3, 3, 3, 4, 4, 4, 3, 5, 4, 2, 5, 2, 5, 2, 3, 3, 1, 4, 3, 0, 0, 3, 0, 3, 0, 2, 0},
	{3, 0, 3, 1, 0, 2, 3, 4, 1, 1, 0, 3, 4, 2, 5, 5, 4, 4, 4, 4, 3, 1, 3, 1, 2, 5, 3, 3, 2, 5, 2, 6, 6, 5, 2, 2, 3, 3, 4, 5, 4, 4, 5, 4, 5, 6, 6, 6, 7, 4, 4, 3, 3, 5, 5, 5, 7, 4, 7, 3, 3, 6, 6, 2, 5, 6, 3, 2, 3, 6, 3, 4, 2, 6, 6, 2, 1, 3, 4, 1, 5, 3, 2, 4, 3, 2, 4, 3, 4, 1, 1, 3, 4, 2, 1, 1, 1, 1, 2},
	{0, 2, 3, 0, 4, 4, 0, 2, 0, 2, 0, 3, 4, 5, 1, 4, 1, 4, 5, 3, 5, 5, 3, 5, 6, 2, 5, 6, 3, 3, 2, 2, 4, 4, 4, 5, 2, 2, 3, 3, 6, 4, 3, 5, 7, 4, 3, 5, 3, 6, 3, 3, 4, 3, 5, 3, 6, 4, 5, 5, 5, 7, 7, 6, 6, 6, 3, 6, 2, 4, 4, 4, 5, 4, 2, 2, 4, 5, 1, 1, 3, 5, 5, 3, 3, 1, 1, 4, 3, 4, 0, 1, 1, 1, 4, 0, 2, 0, 1},
	{1, 3, 0, 0, 3, 1, 0, 2, 0, 3, 0, 4, 3, 2, 4, 2, 3, 5, 2, 5, 5, 5, 1, 6, 6, 5, 2, 5, 3, 3, 5, 4, 4, 6, 2, 5, 4, 5, 4, 3, 4, 7, 6, 4, 3, 3, 6, 3, 4, 3, 4, 5, 5, 4, 5, 5, 7, 4, 3, 6, 6, 5, 4, 3, 4, 3, 4, 4, 2, 3, 5, 6, 5, 4, 3, 3, 2, 3, 2, 2, 5, 5, 2, 4, 2, 3, 2, 3, 4, 1, 2, 3, 0, 4, 2, 1, 3, 2, 0},
	{2, 2, 0, 4, 0, 3, 3, 0, 2, 2, 0, 5, 2, 5, 2, 4, 3, 1, 2, 4, 2, 5, 5, 4, 3, 3, 2, 5, 5, 3, 6, 3, 5, 5, 7, 5, 3, 4, 5, 7, 4, 4, 4, 7, 4, 6, 4, 7, 5, 7, 3, 3, 7, 6, 6, 5, 5, 3, 6, 5, 4, 6, 5, 3, 3, 3, 3, 6, 5, 2, 4, 6, 6, 4, 5, 6, 3, 2, 4, 2, 5, 2, 1, 1, 4, 2, 3, 3, 3, 5, 3, 2, 2, 1, 3, 1, 2, 4, 1},
	{2, 1, 4, 4, 0, 0, 2, 0, 2, 0, 0, 3, 4, 5, 1, 3, 2, 2, 1, 4, 3, 3, 4, 6, 2, 4, 2, 3, 3, 4, 3, 2, 4, 3, 5, 6, 4, 5, 6, 7, 5, 3, 4, 3, 4, 6, 5, 5, 7, 7, 5, 6, 6, 3, 7, 5, 6, 7, 5, 5, 6, 5, 4, 5, 5, 5, 6, 5, 7, 2, 4, 5, 5, 6, 3, 3, 4, 2, 3, 3, 3, 1, 2, 4, 5, 1, 5, 4, 1, 2, 3, 1, 1, 1, 3, 1, 0, 4, 2},
	{1, 4, 4, 3, 3, 3, 3, 4, 2, 0, 2, 1, 1, 3, 1, 1, 2, 4, 4, 5, 2, 3, 3, 4, 3, 4, 6, 3, 5, 5, 6, 5, 3, 7, 6, 7, 6, 6, 3, 5, 6, 5, 5, 6, 5, 4, 4, 3, 5, 7, 3, 4, 4, 4, 7, 5, 7, 5, 7, 7, 7, 3, 6, 3, 6, 3, 6, 5, 4, 6, 6, 5, 2, 6, 6, 6, 6, 6, 5, 2, 5, 6, 3, 3, 3, 1, 4, 5, 1, 4, 3, 4, 1, 1, 3, 4, 0, 4, 1},
	{1, 1, 1, 4, 3, 3, 2, 4, 3, 1, 3, 4, 2, 2, 4, 4, 4, 3, 3, 4, 4, 5, 2, 2, 5, 2, 3, 6, 3, 6, 6, 3, 5, 5, 5, 6, 7, 3, 6, 6, 3, 3, 6, 4, 5, 4, 3, 4, 6, 7, 6, 4, 7, 5, 3, 7, 7, 4, 3, 7, 4, 5, 7, 7, 4, 5, 5, 6, 6, 7, 4, 4, 6, 4, 6, 6, 6, 6, 5, 4, 4, 6, 3, 2, 5, 2, 2, 2, 3, 5, 3, 4, 4, 0, 1, 4, 0, 2, 1},
	{4, 2, 1, 1, 0, 2, 3, 4, 2, 5, 2, 5, 3, 2, 5, 5, 2, 1, 2, 5, 6, 2, 6, 6, 2, 3, 5, 4, 3, 4, 7, 3, 6, 5, 6, 7, 4, 7, 6, 6, 5, 4, 6, 6, 4, 7, 4, 4, 4, 5, 5, 6, 4, 7, 5, 7, 4, 5, 6, 4, 4, 3, 3, 7, 6, 7, 6, 5, 3, 3, 5, 7, 6, 2, 6, 2, 6, 4, 2, 3, 5, 3, 6, 1, 3, 5, 4, 5, 3, 3, 3, 4, 1, 2, 2, 3, 3, 3, 4},
	{0, 3, 0, 1, 0, 3, 2, 0, 4, 3, 5, 3, 1, 4, 2, 1, 3, 4, 3, 3, 6, 5, 6, 2, 3, 6, 3, 4, 4, 7, 3, 6, 6, 7, 6, 7, 4, 5, 4, 3, 7, 5, 7, 6, 6, 8, 5, 5, 7, 5, 6, 7, 8, 8, 8, 5, 6, 4, 6, 6, 5, 6, 6, 6, 7, 4, 5, 6, 6, 4, 4, 7, 4, 3, 3, 5, 2, 3, 2, 5, 4, 4, 5, 6, 4, 4, 4, 3, 1, 4, 5, 2, 5, 3, 3, 1, 0, 0, 2},
	{4, 1, 0, 4, 0, 4, 4, 2, 1, 3, 1, 5, 1, 1, 5, 4, 5, 6, 6, 3, 5, 4, 3, 5, 3, 2, 3, 7, 3, 7, 6, 3, 4, 5, 7, 3, 6, 6, 8, 5, 5, 4, 6, 6, 8, 6, 6, 6, 4, 6, 6, 4, 7, 4, 7, 7, 7, 6, 6, 7, 4, 8, 6, 3, 3, 4, 4, 6, 7, 6, 3, 7, 5, 6, 7, 3, 5, 6, 5, 6, 4, 4, 5, 2, 6, 2, 2, 2, 2, 3, 2, 1, 2, 3, 0, 0, 0, 3, 3},
	{0, 1, 2, 1, 4, 0, 2, 3, 1, 3, 5, 1, 3, 1, 2, 6, 2, 2, 6, 5, 3, 2, 4, 2, 2, 6, 6, 6, 6, 4, 7, 5, 6, 7, 4, 3, 7, 4, 7, 6, 5, 5, 4, 6, 4, 5, 4, 8, 6, 7, 7, 5, 4, 5, 7, 5, 4, 7, 8, 7, 8, 5, 5, 7, 5, 4, 6, 4, 6, 7, 7, 7, 4, 5, 6, 5, 4, 2, 6, 6, 3, 5, 6, 3, 4, 5, 1, 1, 5, 1, 1, 2, 5, 1, 3, 0, 0, 0, 1},
	{1, 2, 2, 2, 0, 2, 5, 4, 1, 4, 3, 5, 4, 4, 3, 2, 2, 5, 4, 4, 3, 5, 2, 3, 3, 7, 6, 3, 6, 7, 3, 3, 6, 3, 7, 8, 5, 7, 5, 4, 7, 4, 4, 4, 6, 6, 6, 5, 6, 6, 6, 5, 7, 8, 5, 6, 4, 4, 8, 5, 7, 6, 7, 5, 8, 6, 6, 5, 3, 5, 5, 7, 6, 3, 6, 5, 5, 3, 2, 4, 3, 5, 4, 3, 2, 2, 6, 5, 1, 4, 1, 2, 3, 4, 3, 3, 0, 2, 4},
	{3, 2, 2, 3, 4, 1, 2, 1, 3, 1, 4, 5, 5, 1, 6, 6, 2, 5, 4, 6, 3, 3, 5, 6, 6, 6, 5, 4, 3, 7, 4, 5, 3, 6, 8, 7, 6, 7, 5, 7, 8, 8, 6, 5, 6, 7, 6, 8, 5, 6, 8, 5, 8, 6, 8, 8, 5, 6, 4, 4, 4, 5, 6, 8, 5, 6, 6, 4, 3, 7, 7, 7, 4, 3, 5, 6, 5, 4, 2, 4, 2, 6, 6, 3, 5, 2, 5, 1, 5, 4, 2, 1, 4, 5, 1, 2, 2, 1, 0},
	{1, 4, 0, 2, 2, 3, 3, 4, 2, 3, 4, 3, 4, 6, 4, 3, 6, 3, 3, 4, 6, 5, 5, 6, 3, 3, 3, 7, 5, 3, 3, 5, 4, 8, 5, 8, 8, 5, 7, 7, 7, 7, 5, 4, 4, 6, 8, 6, 5, 5, 7, 6, 7, 7, 4, 6, 6, 8, 8, 6, 5, 5, 5, 4, 8, 8, 5, 8, 5, 4, 7, 3, 3, 7, 3, 3, 3, 4, 7, 6, 5, 2, 3, 3, 5, 5, 2, 6, 2, 3, 5, 4, 3, 3, 1, 2, 2, 0, 0},
	{4, 2, 2, 4, 0, 3, 1, 2, 4, 1, 5, 2, 1, 4, 3, 2, 4, 3, 4, 4, 5, 5, 5, 4, 3, 6, 3, 6, 5, 5, 5, 7, 7, 8, 5, 8, 8, 7, 8, 4, 8, 7, 5, 4, 6, 8, 9, 8, 9, 5, 8, 5, 8, 7, 7, 9, 6, 7, 8, 7, 4, 7, 5, 6, 5, 7, 6, 5, 4, 7, 4, 7, 6, 5, 6, 3, 6, 6, 5, 3, 2, 6, 6, 2, 6, 2, 6, 4, 4, 5, 4, 2, 4, 4, 2, 4, 4, 1, 0},
	{3, 2, 1, 2, 3, 1, 2, 5, 5, 2, 2, 3, 5, 2, 4, 2, 3, 4, 2, 4, 7, 7, 6, 6, 4, 4, 7, 6, 4, 6, 8, 6, 6, 6, 5, 6, 6, 4, 6, 4, 5, 4, 7, 9, 5, 5, 6, 5, 8, 5, 9, 7, 9, 5, 7, 8, 8, 5, 5, 7, 6, 4, 7, 5, 5, 4, 4, 8, 5, 8, 4, 4, 6, 7, 3, 4, 6, 6, 3, 3, 5, 4, 3, 4, 2, 5, 6, 3, 4, 1, 5, 2, 2, 4, 4, 5, 2, 3, 0},
	{4, 3, 4, 1, 4, 5, 3, 3, 4, 3, 1, 3, 6, 2, 3, 4, 4, 6, 6, 6, 4, 5, 5, 6, 6, 4, 6, 6, 5, 5, 8, 8, 6, 6, 6, 7, 5, 5, 7, 4, 9, 5, 5, 8, 9, 6, 7, 5, 9, 8, 6, 9, 9, 8, 7, 6, 5, 9, 7, 6, 6, 8, 4, 6, 6, 4, 8, 7, 5, 6, 5, 4, 4, 7, 4, 4, 3, 7, 7, 7, 5, 4, 5, 4, 3, 4, 2, 4, 4, 5, 5, 5, 1, 5, 2, 3, 5, 1, 3},
	{4, 3, 3, 4, 3, 2, 5, 2, 2, 5, 4, 6, 6, 4, 5, 4, 5, 2, 3, 4, 5, 4, 4, 6, 3, 4, 4, 3, 7, 6, 8, 5, 7, 7, 6, 8, 8, 4, 8, 9, 8, 9, 7, 8, 7, 6, 5, 5, 5, 7, 6, 7, 5, 6, 7, 6, 8, 9, 8, 8, 8, 8, 9, 7, 6, 8, 8, 5, 6, 6, 4, 4, 7, 4, 3, 3, 7, 4, 3, 5, 4, 3, 2, 6, 6, 5, 5, 3, 5, 3, 2, 2, 2, 1, 1, 2, 4, 2, 2},
	{4, 2, 0, 5, 1, 2, 3, 2, 2, 4, 1, 5, 6, 5, 5, 3, 4, 4, 5, 7, 4, 6, 6, 6, 4, 5, 7, 7, 4, 5, 7, 5, 5, 7, 5, 4, 7, 6, 8, 7, 7, 8, 7, 8, 5, 9, 7, 9, 5, 6, 9, 6, 5, 5, 8, 8, 7, 6, 7, 9, 7, 9, 9, 6, 6, 4, 7, 6, 4, 7, 4, 6, 7, 8, 6, 6, 7, 7, 6, 5, 5, 3, 6, 6, 6, 6, 3, 4, 6, 3, 4, 3, 4, 1, 2, 5, 3, 5, 3},
	{1, 2, 4, 1, 5, 5, 3, 3, 5, 4, 6, 6, 2, 4, 2, 2, 6, 2, 7, 5, 6, 7, 3, 5, 4, 6, 6, 4, 4, 6, 8, 6, 6, 6, 7, 6, 9, 8, 6, 6, 9, 8, 9, 9, 7, 5, 7, 6, 5, 7, 5, 5, 5, 7, 9, 6, 6, 8, 5, 5, 8, 9, 5, 6, 9, 7, 5, 8, 7, 7, 6, 7, 4, 5, 4, 4, 5, 4, 5, 4, 3, 4, 7, 2, 4, 4, 2, 6, 6, 6, 6, 2, 3, 4, 3, 5, 5, 2, 4},
	{4, 1, 5, 3, 4, 5, 1, 5, 3, 3, 6, 3, 4, 4, 3, 6, 4, 2, 7, 6, 6, 6, 5, 5, 6, 4, 4, 4, 6, 4, 8, 5, 4, 7, 4, 7, 9, 6, 7, 8, 9, 9, 5, 8, 8, 7, 6, 6, 9, 5, 7, 7, 9, 7, 5, 7, 6, 6, 9, 7, 7, 8, 8, 7, 7, 9, 5, 8, 6, 5, 7, 4, 5, 7, 8, 6, 4, 4, 7, 3, 7, 7, 7, 4, 6, 2, 4, 6, 3, 2, 6, 4, 4, 5, 4, 5, 1, 1, 3},
	{4, 4, 1, 3, 3, 3, 5, 2, 4, 3, 2, 3, 3, 6, 2, 4, 4, 3, 7, 4, 5, 3, 7, 5, 6, 8, 8, 4, 4, 5, 6, 6, 5, 7, 5, 5, 7, 6, 9, 6, 5, 8, 7, 8, 9, 7, 9, 7, 7, 6, 9, 8, 7, 8, 5, 7, 8, 5, 8, 5, 5, 7, 9, 7, 9, 7, 5, 4, 7, 5, 8, 5, 7, 8, 6, 6, 7, 6, 6, 7, 7, 3, 6, 4, 3, 2, 2, 3, 3, 3, 5, 1, 1, 2, 4, 1, 4, 2, 3},
	{4, 3, 4, 2, 4, 1, 4, 1, 4, 2, 4, 4, 5, 5, 6, 3, 5, 3, 6, 3, 3, 4, 5, 5, 4, 4, 8, 6, 8, 4, 4, 5, 5, 5, 9, 7, 5, 7, 6, 7, 6, 5, 6, 9, 7, 8, 6, 9, 9, 9, 7, 6, 8, 9, 8, 7, 9, 7, 5, 5, 7, 6, 9, 7, 9, 9, 7, 7, 8, 6, 4, 6, 7, 8, 6, 8, 5, 6, 6, 3, 3, 6, 6, 7, 5, 5, 4, 4, 3, 6, 2, 4, 4, 5, 5, 3, 4, 3, 5},
	{2, 4, 5, 3, 1, 4, 5, 2, 3, 6, 6, 4, 3, 4, 2, 3, 6, 6, 6, 4, 3, 4, 6, 6, 6, 6, 7, 4, 8, 5, 8, 8, 8, 7, 6, 7, 5, 6, 8, 8, 9, 7, 9, 9, 9, 9, 8, 8, 6, 9, 9, 9, 9, 7, 8, 8, 9, 9, 6, 7, 7, 5, 9, 9, 8, 8, 6, 8, 6, 5, 4, 6, 4, 4, 5, 6, 8, 5, 7, 7, 6, 3, 4, 6, 6, 5, 4, 5, 5, 3, 2, 6, 5, 3, 5, 4, 5, 2, 3},
	{3, 2, 1, 4, 3, 2, 2, 1, 1, 4, 2, 5, 6, 5, 3, 3, 6, 6, 3, 6, 3, 6, 5, 7, 6, 5, 7, 4, 4, 7, 5, 6, 8, 6, 6, 5, 8, 7, 7, 9, 5, 7, 9, 7, 9, 9, 8, 7, 7, 8, 6, 7, 7, 9, 6, 9, 7, 8, 6, 8, 5, 7, 7, 8, 8, 8, 5, 9, 5, 6, 7, 5, 8, 5, 5, 4, 5, 6, 7, 3, 4, 6, 3, 6, 5, 2, 4, 4, 5, 6, 4, 2, 5, 4, 3, 1, 1, 4, 2},
	{0, 3, 3, 4, 2, 2, 3, 1, 3, 6, 3, 2, 3, 4, 2, 6, 5, 5, 3, 6, 4, 3, 4, 5, 5, 6, 7, 6, 4, 4, 7, 5, 5, 8, 9, 8, 7, 8, 5, 7, 9, 6, 6, 9, 9, 9, 9, 6, 8, 8, 8, 7, 7, 6, 8, 8, 6, 7, 9, 6, 6, 5, 7, 7, 5, 7, 7, 9, 7, 8, 5, 7, 6, 8, 8, 8, 7, 6, 3, 7, 6, 3, 5, 4, 3, 6, 3, 5, 3, 2, 5, 3, 6, 2, 3, 2, 3, 1, 4},
	{0, 5, 2, 2, 4, 2, 3, 5, 5, 5, 4, 2, 3, 2, 3, 6, 4, 7, 5, 7, 6, 3, 3, 4, 4, 5, 8, 5, 7, 6, 6, 8, 9, 5, 7, 9, 5, 8, 6, 9, 6, 8, 8, 6, 7, 9, 9, 6, 6, 8, 9, 8, 7, 8, 7, 9, 7, 7, 9, 9, 9, 6, 9, 5, 8, 7, 6, 5, 9, 8, 7, 5, 5, 4, 7, 6, 5, 6, 6, 4, 4, 7, 6, 5, 6, 4, 6, 3, 6, 3, 2, 2, 4, 2, 5, 3, 4, 4, 4},
	{2, 3, 4, 4, 3, 4, 3, 4, 2, 6, 5, 3, 2, 2, 6, 5, 4, 6, 4, 3, 6, 6, 5, 8, 8, 5, 5, 7, 7, 5, 8, 9, 6, 9, 6, 8, 8, 6, 7, 8, 7, 6, 7, 9, 7, 9, 9, 7, 9, 9, 6, 7, 6, 8, 7, 7, 9, 6, 7, 7, 6, 6, 7, 6, 9, 9, 8, 8, 9, 7, 9, 6, 7, 4, 5, 7, 6, 8, 3, 3, 7, 3, 6, 6, 4, 3, 6, 6, 3, 4, 6, 3, 2, 2, 4, 5, 2, 1, 3},
	{4, 4, 5, 2, 2, 2, 2, 1, 3, 2, 3, 5, 3, 4, 6, 7, 3, 5, 7, 5, 3, 6, 6, 7, 7, 5, 5, 6, 7, 6, 6, 6, 9, 8, 7, 8, 5, 9, 8, 8, 9, 8, 6, 9, 7, 9, 8, 6, 6, 8, 7, 9, 9, 8, 6, 9, 6, 9, 7, 6, 9, 9, 6, 9, 8, 7, 7, 6, 9, 8, 5, 8, 6, 5, 6, 4, 7, 6, 7, 5, 7, 6, 6, 7, 3, 3, 2, 3, 3, 2, 6, 2, 5, 3, 5, 1, 5, 1, 4},
	{4, 3, 5, 3, 5, 5, 5, 4, 6, 4, 4, 2, 3, 6, 3, 5, 7, 5, 3, 4, 5, 3, 7, 6, 5, 8, 8, 6, 5, 7, 9, 8, 9, 9, 8, 8, 5, 8, 9, 8, 7, 7, 7, 8, 8, 8, 9, 8, 9, 8, 7, 7, 8, 8, 9, 9, 8, 9, 8, 7, 8, 8, 8, 9, 6, 9, 8, 5, 8, 6, 9, 7, 6, 7, 4, 6, 7, 7, 8, 7, 6, 7, 4, 4, 3, 4, 4, 6, 5, 4, 3, 5, 3, 3, 1, 2, 1, 5, 1},
	{1, 3, 3, 5, 5, 3, 5, 5, 6, 3, 5, 2, 6, 3, 3, 6, 6, 5, 3, 5, 7, 7, 8, 7, 6, 8, 6, 7, 7, 5, 7, 9, 9, 5, 7, 7, 7, 7, 9, 9, 9, 7, 8, 7, 8, 7, 8, 7, 7, 8, 7, 8, 9, 7, 7, 9, 7, 6, 9, 9, 9, 9, 8, 8, 7, 8, 9, 6, 5, 7, 8, 7, 4, 5, 5, 8, 8, 5, 6, 6, 3, 5, 5, 7, 5, 4, 5, 3, 5, 5, 6, 2, 4, 3, 2, 4, 1, 1, 5},
	{5, 4, 5, 2, 3, 3, 3, 5, 4, 5, 4, 4, 5, 4, 4, 4, 3, 5, 5, 7, 3, 3, 7, 6, 5, 7, 8, 4, 5, 8, 6, 5, 5, 5, 8, 7, 5, 9, 8, 7, 8, 9, 6, 7, 7, 8, 7, 7, 7, 8, 7, 8, 9, 9, 8, 9, 7, 8, 6, 9, 8, 9, 6, 6, 5, 8, 7, 8, 8, 7, 6, 6, 5, 8, 8, 6, 5, 6, 8, 3, 7, 7, 4, 7, 7, 6, 4, 3, 6, 3, 6, 5, 5, 3, 4, 1, 5, 2, 1},
	{2, 1, 1, 5, 5, 5, 4, 5, 3, 5, 4, 2, 4, 6, 6, 7, 3, 5, 3, 6, 6, 7, 8, 7, 6, 8, 5, 6, 5, 8, 8, 6, 6, 8, 5, 6, 9, 7, 9, 6, 7, 6, 8, 8, 7, 7, 8, 8, 9, 8, 7, 9, 9, 7, 9, 8, 9, 7, 6, 9, 9, 7, 8, 9, 6, 8, 9, 9, 6, 9, 6, 8, 5, 4, 6, 6, 8, 5, 8, 3, 4, 5, 7, 6, 5, 4, 2, 6, 2, 2, 2, 4, 3, 2, 1, 3, 1, 5, 5},
	{1, 4, 4, 1, 1, 3, 1, 2, 3, 2, 6, 4, 4, 2, 6, 7, 7, 7, 4, 6, 3, 7, 7, 7, 4, 8, 8, 5, 8, 7, 6, 9, 9, 8, 6, 9, 7, 6, 7, 9, 7, 7, 8, 8, 9, 9, 8, 7, 7, 8, 7, 9, 9, 7, 7, 8, 8, 8, 8, 7, 6, 9, 6, 9, 7, 9, 7, 5, 6, 8, 5, 8, 5, 7, 6, 8, 8, 5, 6, 7, 7, 4, 7, 3, 6, 3, 5, 6, 5, 3, 2, 3, 3, 5, 4, 3, 2, 4, 3},
	{3, 1, 1, 3, 1, 3, 2, 3, 5, 5, 4, 3, 3, 6, 6, 6, 3, 5, 7, 5, 4, 5, 5, 8, 4, 5, 7, 5, 7, 6, 7, 9, 5, 9, 9, 8, 7, 6, 9, 7, 7, 8, 6, 7, 9, 7, 7, 8, 8, 8, 9, 8, 8, 9, 8, 8, 9, 9, 8, 7, 6, 6, 8, 8, 8, 8, 9, 6, 8, 9, 8, 8, 7, 7, 4, 4, 4, 8, 5, 4, 3, 7, 5, 7, 7, 3, 3, 3, 2, 5, 6, 4, 3, 2, 3, 1, 4, 2, 2},
	{4, 4, 3, 3, 5, 5, 3, 4, 2, 2, 5, 4, 4, 2, 5, 4, 4, 6, 7, 6, 7, 4, 6, 8, 6, 5, 6, 4, 7, 6, 5, 9, 5, 8, 6, 5, 8, 8, 7, 9, 8, 6, 7, 8, 7, 8, 9, 7, 9, 9, 8, 8, 7, 9, 9, 7, 9, 9, 6, 9, 9, 6, 7, 7, 7, 5, 8, 6, 5, 5, 8, 7, 5, 4, 6, 5, 8, 7, 6, 4, 4, 7, 7, 7, 6, 5, 5, 2, 3, 5, 2, 3, 4, 3, 2, 4, 3, 4, 4},
	{4, 4, 2, 4, 4, 3, 3, 5, 5, 3, 2, 4, 5, 6, 4, 3, 3, 4, 3, 6, 5, 7, 6, 7, 8, 8, 7, 8, 8, 5, 6, 6, 8, 5, 8, 9, 6, 8, 6, 8, 6, 6, 9, 8, 9, 9, 9, 7, 8, 9, 8, 8, 8, 7, 7, 9, 7, 8, 7, 9, 9, 6, 7, 6, 6, 8, 9, 7, 8, 5, 7, 5, 8, 5, 5, 8, 6, 6, 8, 3, 6, 6, 5, 6, 3, 3, 4, 5, 5, 2, 6, 2, 3, 6, 3, 2, 3, 5, 1},
	{4, 1, 3, 4, 3, 3, 1, 4, 4, 6, 6, 5, 5, 4, 7, 4, 6, 5, 4, 3, 6, 4, 6, 4, 8, 4, 7, 7, 6, 8, 7, 6, 8, 7, 7, 7, 9, 9, 6, 9, 7, 7, 9, 6, 8, 7, 7, 7, 7, 8, 8, 9, 7, 7, 7, 9, 7, 9, 7, 7, 6, 7, 9, 8, 9, 5, 6, 8, 5, 7, 6, 8, 6, 7, 6, 5, 5, 6, 6, 3, 4, 6, 4, 3, 4, 3, 6, 4, 2, 2, 3, 3, 4, 4, 4, 2, 4, 5, 5},
	{4, 5, 3, 1, 4, 2, 5, 6, 6, 3, 4, 5, 2, 5, 4, 4, 5, 3, 3, 3, 3, 4, 4, 4, 8, 8, 5, 5, 8, 7, 5, 6, 5, 5, 7, 8, 6, 7, 7, 6, 8, 8, 7, 7, 9, 9, 7, 7, 8, 8, 9, 9, 9, 9, 7, 8, 9, 8, 8, 8, 7, 9, 6, 8, 7, 7, 7, 7, 8, 5, 5, 7, 8, 4, 7, 6, 7, 5, 8, 6, 7, 4, 7, 7, 6, 5, 2, 5, 3, 5, 5, 4, 6, 2, 1, 5, 4, 2, 2},
	{1, 5, 1, 3, 3, 2, 2, 6, 5, 2, 6, 5, 4, 4, 4, 7, 7, 7, 3, 6, 4, 5, 8, 5, 7, 4, 5, 7, 7, 8, 9, 5, 6, 6, 8, 7, 9, 6, 9, 8, 8, 8, 7, 8, 7, 9, 8, 9, 7, 8, 9, 8, 9, 7, 9, 7, 8, 8, 6, 8, 7, 8, 8, 7, 8, 7, 6, 8, 6, 6, 5, 5, 7, 6, 4, 4, 6, 5, 5, 5, 3, 5, 7, 7, 7, 4, 5, 6, 3, 2, 6, 2, 5, 2, 3, 1, 4, 5, 5},
	{4, 4, 5, 2, 2, 3, 2, 5, 4, 6, 4, 6, 3, 2, 2, 7, 6, 6, 4, 4, 5, 7, 7, 4, 5, 4, 6, 6, 8, 9, 8, 8, 7, 9, 6, 8, 5, 6, 6, 9, 6, 7, 6, 6, 8, 7, 9, 8, 7, 9, 8, 8, 9, 7, 9, 7, 6, 8, 7, 6, 9, 9, 9, 6, 6, 8, 9, 5, 6, 8, 6, 9, 4, 5, 8, 4, 5, 6, 6, 5, 4, 3, 4, 4, 4, 6, 5, 4, 5, 2, 4, 2, 5, 3, 4, 5, 5, 2, 3},
	{3, 5, 4, 1, 2, 2, 3, 1, 4, 4, 6, 3, 4, 3, 4, 7, 4, 7, 4, 3, 6, 6, 5, 4, 6, 4, 4, 4, 8, 4, 9, 7, 9, 6, 9, 6, 6, 7, 7, 6, 8, 6, 8, 9, 8, 9, 7, 8, 8, 8, 7, 8, 7, 8, 7, 9, 7, 9, 7, 6, 7, 7, 9, 6, 6, 9, 6, 7, 7, 6, 9, 4, 4, 5, 4, 4, 8, 5, 5, 5, 5, 6, 3, 5, 7, 5, 2, 6, 6, 4, 6, 5, 6, 5, 1, 3, 1, 3, 3},
	{0, 1, 2, 2, 3, 2, 3, 5, 5, 2, 6, 6, 6, 2, 5, 6, 3, 5, 3, 7, 3, 3, 7, 8, 6, 8, 5, 6, 5, 6, 7, 6, 7, 7, 6, 7, 8, 8, 7, 6, 6, 8, 7, 6, 9, 9, 8, 6, 9, 8, 8, 9, 8, 9, 9, 8, 7, 7, 7, 8, 7, 7, 7, 7, 6, 9, 6, 8, 5, 6, 9, 8, 4, 6, 7, 8, 5, 8, 4, 3, 7, 7, 5, 4, 3, 4, 3, 5, 5, 3, 2, 5, 5, 3, 2, 2, 4, 4, 4},
	{0, 2, 4, 5, 5, 5, 2, 1, 3, 2, 2, 4, 4, 6, 4, 7, 7, 4, 3, 5, 3, 4, 3, 5, 4, 8, 5, 6, 5, 6, 6, 8, 7, 8, 7, 9, 7, 9, 7, 9, 8, 9, 7, 6, 8, 6, 8, 6, 7, 7, 8, 8, 6, 7, 6, 7, 6, 9, 6, 9, 7, 9, 8, 5, 9, 6, 8, 9, 9, 5, 7, 5, 6, 5, 6, 7, 8, 6, 4, 6, 6, 3, 3, 3, 4, 5, 5, 5, 5, 3, 3, 5, 5, 3, 4, 5, 2, 3, 4},
	{1, 3, 2, 4, 3, 2, 4, 4, 4, 2, 3, 3, 6, 6, 4, 5, 4, 4, 6, 7, 6, 7, 3, 5, 8, 4, 8, 5, 8, 5, 6, 6, 7, 8, 5, 6, 9, 9, 7, 8, 6, 9, 7, 7, 7, 8, 8, 6, 8, 8, 7, 7, 9, 7, 6, 6, 7, 9, 8, 9, 7, 6, 7, 5, 7, 8, 7, 6, 5, 6, 8, 8, 5, 7, 6, 6, 8, 6, 4, 5, 7, 3, 4, 3, 4, 3, 6, 4, 4, 2, 5, 4, 6, 5, 3, 3, 1, 4, 2},
	{4, 4, 4, 1, 4, 3, 4, 3, 5, 6, 2, 4, 2, 4, 4, 4, 7, 7, 3, 3, 3, 4, 4, 8, 5, 5, 8, 4, 4, 8, 6, 6, 7, 5, 7, 7, 6, 6, 5, 6, 6, 7, 7, 6, 6, 7, 8, 8, 7, 9, 8, 9, 7, 9, 7, 8, 6, 9, 8, 7, 8, 5, 8, 9, 5, 9, 6, 9, 9, 6, 7, 7, 7, 4, 8, 7, 8, 4, 6, 6, 5, 7, 7, 4, 7, 4, 5, 2, 3, 5, 2, 6, 2, 4, 1, 4, 3, 1, 1},
	{2, 3, 1, 5, 4, 1, 2, 3, 1, 6, 4, 6, 6, 5, 2, 2, 7, 3, 4, 6, 7, 7, 4, 3, 5, 7, 8, 6, 5, 8, 7, 5, 6, 9, 6, 7, 6, 5, 6, 5, 9, 9, 8, 9, 7, 9, 8, 6, 6, 6, 6, 8, 9, 8, 7, 8, 7, 9, 9, 8, 5, 9, 8, 8, 6, 8, 8, 7, 8, 5, 5, 8, 8, 8, 4, 8, 4, 7, 3, 7, 3, 7, 6, 3, 7, 4, 3, 4, 3, 6, 3, 3, 3, 4, 4, 2, 2, 2, 2},
	{4, 5, 2, 1, 1, 5, 1, 4, 1, 2, 5, 6, 2, 4, 4, 2, 3, 5, 6, 3, 7, 5, 5, 4, 5, 5, 6, 5, 8, 4, 8, 4, 9, 5, 7, 5, 7, 9, 6, 7, 6, 8, 9, 6, 9, 6, 9, 9, 7, 6, 9, 8, 8, 7, 7, 6, 7, 7, 9, 7, 5, 9, 7, 8, 6, 6, 9, 8, 9, 7, 8, 5, 5, 4, 5, 7, 6, 4, 7, 6, 5, 4, 3, 7, 5, 5, 2, 5, 6, 4, 3, 4, 5, 1, 3, 1, 4, 5, 5},
	{4, 2, 5, 2, 4, 4, 5, 1, 3, 3, 6, 6, 2, 6, 3, 3, 3, 6, 5, 7, 5, 4, 4, 6, 5, 8, 8, 8, 5, 7, 8, 4, 6, 9, 7, 6, 8, 8, 8, 7, 6, 7, 6, 5, 8, 8, 6, 8, 6, 7, 6, 6, 9, 6, 6, 6, 7, 9, 5, 8, 8, 9, 9, 5, 6, 8, 8, 5, 7, 7, 6, 7, 4, 5, 8, 7, 7, 3, 7, 4, 4, 6, 3, 7, 3, 3, 3, 4, 5, 2, 4, 2, 3, 5, 3, 3, 5, 3, 2},
	{1, 0, 5, 1, 3, 1, 4, 3, 5, 4, 4, 3, 6, 2, 6, 3, 2, 4, 5, 7, 6, 4, 3, 5, 6, 7, 6, 5, 5, 5, 4, 7, 8, 7, 8, 6, 5, 6, 7, 7, 5, 7, 9, 9, 9, 6, 8, 9, 9, 9, 9, 6, 6, 8, 8, 9, 7, 7, 8, 9, 5, 9, 9, 5, 9, 9, 8, 5, 6, 8, 7, 5, 6, 7, 4, 7, 7, 4, 6, 5, 6, 4, 7, 7, 3, 6, 4, 6, 2, 3, 2, 2, 5, 1, 2, 3, 1, 5, 1},
	{0, 3, 2, 3, 1, 5, 2, 3, 2, 4, 5, 3, 4, 2, 6, 4, 5, 3, 4, 6, 5, 7, 6, 5, 5, 7, 4, 6, 4, 4, 5, 7, 5, 4, 4, 6, 8, 9, 6, 5, 9, 8, 6, 7, 8, 8, 9, 9, 5, 8, 6, 7, 5, 9, 7, 7, 7, 5, 8, 8, 7, 7, 5, 5, 6, 5, 7, 5, 8, 6, 6, 8, 4, 7, 4, 7, 4, 5, 5, 7, 5, 3, 4, 4, 5, 6, 6, 4, 2, 5, 6, 1, 5, 3, 5, 5, 4, 3, 3},
	{4, 1, 4, 3, 4, 1, 3, 1, 4, 4, 2, 6, 2, 3, 5, 2, 6, 4, 6, 4, 7, 5, 4, 3, 6, 4, 5, 7, 4, 6, 4, 5, 7, 6, 5, 7, 9, 6, 7, 6, 9, 5, 5, 5, 8, 9, 6, 5, 9, 7, 5, 7, 6, 9, 8, 9, 8, 7, 8, 5, 9, 8, 5, 6, 5, 4, 5, 7, 6, 8, 6, 7, 6, 5, 8, 6, 5, 7, 6, 3, 5, 4, 7, 5, 6, 6, 6, 6, 2, 4, 3, 5, 2, 1, 3, 4, 1, 4, 4},
	{1, 0, 0, 3, 2, 3, 3, 1, 1, 2, 4, 2, 2, 3, 6, 2, 4, 2, 2, 5, 5, 3, 4, 7, 7, 4, 4, 5, 7, 5, 4, 7, 6, 7, 7, 6, 8, 5, 8, 8, 7, 9, 6, 8, 8, 6, 9, 8, 7, 9, 7, 8, 7, 8, 5, 7, 9, 9, 6, 9, 9, 7, 5, 8, 7, 4, 7, 4, 8, 6, 7, 5, 4, 4, 4, 5, 7, 3, 7, 4, 7, 3, 4, 4, 6, 5, 3, 5, 5, 5, 2, 1, 1, 3, 5, 2, 2, 2, 1},
	{0, 1, 4, 3, 1, 1, 4, 4, 1, 5, 4, 4, 3, 3, 6, 3, 5, 5, 4, 5, 4, 5, 7, 5, 4, 4, 5, 6, 8, 6, 7, 5, 7, 6, 8, 8, 6, 8, 9, 6, 6, 6, 8, 8, 8, 7, 5, 8, 9, 9, 6, 9, 6, 5, 6, 8, 5, 5, 9, 6, 9, 6, 6, 4, 4, 4, 8, 4, 5, 5, 7, 8, 8, 5, 5, 5, 7, 6, 5, 4, 3, 5, 4, 6, 4, 6, 5, 5, 5, 4, 2, 4, 3, 1, 5, 4, 1, 4, 2},
	{3, 4, 2, 2, 5, 4, 5, 4, 2, 1, 2, 3, 6, 5, 6, 6, 5, 6, 5, 4, 6, 3, 5, 6, 3, 6, 6, 7, 7, 8, 6, 7, 5, 5, 7, 4, 8, 4, 5, 6, 9, 7, 6, 7, 5, 5, 6, 9, 5, 5, 6, 6, 8, 7, 6, 8, 8, 5, 8, 6, 5, 5, 8, 6, 4, 6, 4, 4, 7, 6, 6, 7, 4, 3, 4, 4, 5, 6, 6, 6, 5, 3, 5, 2, 6, 3, 3, 4, 2, 2, 2, 5, 5, 2, 4, 4, 4, 1, 4},
	{2, 1, 1, 4, 5, 3, 1, 4, 3, 3, 5, 3, 4, 3, 4, 5, 6, 6, 5, 6, 3, 4, 6, 5, 6, 7, 5, 7, 4, 5, 8, 6, 4, 8, 8, 5, 6, 7, 4, 6, 8, 7, 5, 8, 8, 9, 9, 8, 9, 9, 6, 6, 8, 5, 9, 7, 7, 6, 7, 6, 7, 8, 4, 5, 6, 7, 4, 7, 4, 5, 6, 6, 4, 3, 4, 5, 4, 4, 4, 6, 6, 5, 2, 2, 5, 3, 3, 3, 4, 3, 3, 5, 3, 1, 1, 4, 2, 3, 1},
	{3, 1, 3, 0, 2, 2, 3, 3, 2, 1, 3, 3, 4, 6, 6, 3, 3, 2, 3, 3, 6, 4, 7, 7, 6, 3, 4, 6, 6, 7, 4, 6, 5, 8, 6, 7, 8, 8, 8, 7, 8, 5, 6, 4, 8, 5, 7, 6, 7, 7, 5, 8, 6, 5, 6, 6, 8, 4, 8, 7, 4, 8, 7, 5, 4, 4, 4, 8, 4, 8, 4, 5, 3, 6, 6, 5, 3, 5, 5, 7, 5, 4, 4, 2, 3, 2, 6, 6, 2, 4, 3, 5, 1, 4, 3, 1, 0, 1, 2},
	{1, 1, 4, 2, 1, 1, 1, 5, 5, 1, 2, 1, 5, 3, 5, 4, 3, 4, 2, 4, 3, 6, 5, 6, 6, 4, 4, 4, 5, 4, 6, 4, 7, 4, 4, 7, 8, 4, 8, 4, 5, 8, 4, 8, 6, 6, 4, 8, 8, 7, 6, 8, 5, 6, 8, 5, 8, 7, 6, 7, 4, 5, 8, 4, 4, 6, 7, 6, 5, 5, 4, 4, 7, 3, 6, 7, 3, 7, 6, 5, 6, 6, 4, 3, 2, 2, 2, 5, 2, 5, 4, 3, 2, 5, 4, 4, 2, 3, 2},
	{0, 1, 0, 1, 2, 2, 5, 2, 5, 3, 4, 4, 1, 5, 6, 2, 6, 3, 3, 5, 4, 2, 2, 7, 7, 5, 6, 6, 3, 6, 4, 3, 4, 5, 8, 7, 4, 5, 8, 6, 6, 5, 6, 7, 6, 5, 8, 6, 8, 8, 7, 7, 8, 7, 8, 5, 8, 7, 4, 8, 5, 5, 4, 6, 8, 6, 6, 6, 6, 6, 7, 3, 7, 5, 5, 5, 7, 7, 5, 5, 2, 3, 5, 2, 3, 4, 3, 3, 5, 4, 5, 3, 4, 1, 5, 2, 0, 4, 0},
	{4, 1, 2, 3, 2, 1, 5, 3, 5, 2, 3, 1, 5, 4, 2, 5, 2, 3, 4, 6, 2, 3, 3, 4, 6, 5, 3, 3, 7, 4, 6, 5, 7, 3, 5, 8, 6, 8, 5, 5, 8, 6, 4, 8, 8, 7, 8, 5, 4, 8, 5, 6, 7, 8, 5, 6, 4, 8, 6, 4, 4, 4, 6, 8, 7, 8, 7, 3, 4, 6, 7, 5, 5, 5, 7, 7, 3, 5, 4, 2, 3, 6, 6, 5, 4, 4, 2, 1, 5, 4, 5, 5, 2, 3, 4, 2, 0, 1, 1},
	{1, 0, 4, 4, 2, 4, 3, 3, 3, 4, 1, 5, 3, 3, 3, 4, 4, 4, 6, 2, 6, 3, 4, 5, 5, 3, 6, 6, 4, 3, 3, 7, 4, 5, 5, 5, 5, 5, 7, 4, 6, 5, 4, 6, 4, 7, 7, 7, 6, 7, 8, 4, 6, 6, 8, 4, 7, 5, 7, 4, 4, 5, 4, 8, 7, 5, 6, 6, 6, 7, 4, 4, 4, 7, 4, 7, 6, 6, 2, 3, 4, 4, 6, 4, 2, 4, 1, 2, 4, 2, 5, 5, 3, 1, 1, 0, 4, 4, 1},
	{1, 2, 4, 1, 1, 2, 3, 1, 4, 3, 3, 1, 2, 5, 5, 3, 6, 2, 6, 2, 2, 4, 4, 6, 2, 2, 5, 6, 3, 3, 6, 3, 6, 3, 3, 5, 3, 4, 5, 6, 4, 4, 8, 6, 6, 8, 7, 6, 4, 7, 4, 8, 4, 8, 8, 5, 4, 6, 7, 8, 4, 8, 7, 6, 3, 4, 6, 5, 5, 6, 4, 6, 5, 7, 3, 2, 4, 5, 6, 4, 4, 3, 3, 4, 3, 2, 4, 3, 3, 1, 2, 5, 1, 4, 4, 4, 4, 0, 0},
	{3, 1, 2, 0, 0, 0, 4, 4, 5, 3, 2, 3, 4, 4, 3, 2, 1, 5, 4, 3, 3, 5, 5, 5, 5, 6, 4, 3, 3, 7, 3, 4, 5, 4, 5, 5, 7, 7, 6, 7, 4, 4, 6, 7, 5, 6, 7, 4, 4, 7, 8, 8, 8, 8, 4, 7, 4, 5, 7, 8, 7, 4, 5, 3, 4, 4, 3, 6, 3, 5, 7, 3, 7, 4, 4, 2, 4, 2, 6, 3, 3, 4, 2, 6, 2, 3, 3, 3, 1, 3, 3, 5, 1, 4, 2, 2, 2, 3, 3},
	{4, 3, 0, 0, 2, 2, 2, 3, 4, 5, 1, 2, 2, 5, 1, 4, 2, 3, 4, 2, 4, 3, 2, 6, 2, 6, 4, 6, 3, 7, 4, 6, 5, 3, 5, 5, 3, 5, 5, 7, 4, 6, 6, 3, 7, 4, 4, 7, 6, 4, 8, 7, 5, 7, 8, 5, 7, 4, 7, 3, 7, 4, 3, 7, 4, 6, 6, 5, 4, 7, 7, 6, 5, 2, 5, 2, 6, 2, 5, 5, 3, 6, 4, 2, 2, 2, 1, 5, 2, 4, 4, 1, 4, 0, 4, 1, 3, 2, 3},
	{2, 3, 3, 1, 0, 2, 1, 3, 4, 4, 1, 4, 2, 3, 2, 4, 1, 2, 3, 3, 2, 3, 5, 6, 2, 2, 6, 4, 3, 5, 4, 6, 5, 6, 4, 6, 4, 6, 5, 4, 4, 3, 5, 4, 6, 3, 3, 5, 4, 3, 6, 3, 6, 5, 3, 6, 5, 7, 5, 5, 4, 4, 6, 6, 5, 5, 4, 3, 4, 3, 4, 3, 2, 4, 6, 5, 5, 2, 3, 2, 3, 3, 2, 4, 4, 3, 3, 1, 4, 3, 1, 3, 0, 0, 0, 2, 1, 1, 1},
	{1, 1, 1, 4, 0, 4, 3, 1, 3, 1, 5, 3, 1, 5, 3, 4, 4, 2, 1, 2, 3, 6, 6, 6, 3, 5, 5, 2, 2, 4, 7, 4, 7, 7, 4, 6, 3, 5, 6, 3, 7, 6, 5, 6, 4, 4, 7, 5, 4, 4, 4, 4, 5, 7, 3, 5, 3, 5, 4, 5, 5, 4, 6, 7, 7, 4, 7, 3, 7, 5, 7, 5, 4, 2, 4, 3, 4, 5, 4, 4, 6, 3, 5, 3, 3, 5, 4, 3, 4, 2, 2, 4, 4, 3, 1, 3, 4, 1, 2},
	{2, 3, 4, 3, 3, 4, 4, 4, 0, 4, 2, 4, 3, 2, 5, 3, 5, 1, 2, 1, 2, 5, 2, 3, 2, 3, 2, 5, 2, 6, 4, 6, 6, 5, 7, 5, 4, 4, 5, 5, 6, 5, 5, 4, 5, 6, 4, 7, 6, 7, 6, 3, 6, 3, 3, 3, 5, 4, 4, 5, 7, 7, 4, 5, 3, 6, 6, 4, 7, 3, 3, 2, 2, 2, 4, 5, 2, 4, 3, 6, 3, 4, 4, 1, 4, 1, 5, 3, 5, 1, 4, 3, 4, 4, 2, 3, 2, 0, 3},
	{1, 2, 3, 1, 3, 0, 3, 4, 0, 3, 4, 4, 4, 4, 1, 3, 2, 3, 4, 3, 2, 4, 6, 4, 6, 4, 4, 5, 6, 5, 4, 4, 5, 4, 5, 5, 6, 5, 5, 7, 3, 7, 6, 5, 3, 4, 5, 5, 7, 6, 3, 5, 7, 5, 4, 5, 7, 3, 7, 4, 5, 6, 6, 4, 6, 7, 7, 5, 3, 2, 6, 6, 2, 6, 2, 3, 3, 3, 3, 5, 5, 2, 5, 3, 1, 4, 4, 4, 3, 4, 1, 2, 1, 3, 4, 1, 4, 1, 3},
	{0, 3, 2, 1, 3, 3, 4, 1, 4, 0, 4, 1, 2, 4, 4, 5, 4, 1, 2, 3, 3, 1, 5, 3, 4, 4, 6, 2, 2, 3, 2, 2, 4, 3, 3, 4, 6, 6, 5, 5, 6, 6, 6, 5, 4, 3, 6, 4, 4, 3, 6, 7, 3, 3, 4, 6, 5, 4, 5, 5, 4, 3, 6, 3, 6, 2, 2, 4, 2, 4, 2, 4, 3, 5, 3, 3, 3, 4, 3, 5, 4, 4, 2, 3, 4, 4, 4, 5, 4, 2, 3, 4, 2, 3, 2, 3, 1, 2, 0},
	{3, 3, 1, 1, 2, 0, 0, 0, 0, 4, 2, 1, 3, 4, 2, 2, 4, 3, 3, 2, 5, 1, 1, 5, 4, 5, 6, 2, 5, 5, 3, 6, 4, 5, 2, 2, 6, 2, 6, 4, 5, 7, 5, 3, 6, 5, 3, 7, 7, 5, 5, 3, 4, 3, 4, 3, 6, 5, 4, 5, 7, 4, 7, 2, 6, 3, 4, 6, 6, 6, 6, 3, 6, 3, 6, 5, 2, 4, 5, 3, 3, 2, 3, 5, 4, 1, 1, 3, 1, 1, 1, 2, 1, 4, 1, 1, 3, 3, 2},
	{3, 3, 2, 2, 3, 0, 4, 0, 4, 2, 1, 3, 3, 0, 3, 3, 5, 3, 1, 3, 3, 1, 1, 1, 2, 5, 6, 2, 5, 4, 3, 6, 3, 6, 5, 5, 2, 5, 5, 4, 3, 4, 7, 4, 4, 6, 7, 4, 4, 7, 4, 7, 5, 4, 4, 3, 4, 6, 4, 6, 3, 4, 3, 4, 5, 4, 3, 5, 4, 4, 3, 3, 4, 3, 3, 5, 1, 5, 5, 1, 3, 1, 3, 5, 3, 3, 4, 4, 4, 2, 2, 2, 2, 0, 0, 4, 0, 1, 0},
	{2, 0, 2, 1, 2, 1, 3, 1, 3, 2, 2, 3, 2, 2, 2, 5, 1, 1, 4, 5, 3, 5, 1, 2, 3, 2, 2, 2, 5, 5, 5, 6, 6, 4, 4, 4, 5, 6, 5, 5, 4, 4, 6, 4, 3, 5, 5, 6, 4, 5, 4, 4, 5, 2, 4, 4, 3, 4, 5, 4, 5, 2, 4, 2, 2, 3, 5, 3, 5, 6, 5, 5, 4, 3, 4, 3, 5, 4, 3, 3, 5, 5, 5, 2, 4, 4, 4, 0, 4, 2, 3, 1, 4, 1, 3, 4, 3, 3, 2},
	{2, 1, 3, 3, 0, 0, 0, 3, 0, 0, 1, 0, 0, 4, 0, 3, 3, 1, 5, 4, 1, 1, 4, 1, 4, 4, 1, 2, 4, 2, 6, 4, 5, 4, 2, 4, 3, 5, 4, 3, 3, 4, 6, 3, 5, 2, 3, 4, 5, 6, 5, 6, 6, 2, 3, 6, 2, 5, 2, 6, 3, 5, 4, 2, 2, 4, 2, 4, 6, 5, 3, 3, 4, 5, 4, 5, 2, 3, 2, 4, 2, 5, 1, 2, 4, 1, 4, 4, 3, 0, 3, 0, 3, 0, 4, 3, 3, 0, 2},
	{3, 0, 3, 3, 0, 0, 0, 0, 2, 3, 2, 1, 2, 1, 2, 0, 0, 4, 2, 4, 4, 5, 3, 5, 2, 4, 4, 4, 5, 1, 2, 4, 2, 6, 5, 4, 2, 5, 2, 6, 4, 6, 6, 3, 6, 5, 5, 4, 6, 6, 2, 6, 3, 6, 2, 6, 3, 6, 6, 4, 6, 4, 6, 2, 3, 5, 2, 6, 3, 2, 3, 1, 3, 1, 5, 3, 3, 1, 1, 4, 2, 3, 5, 2, 1, 0, 2, 1, 2, 0, 1, 3, 0, 1, 2, 2, 3, 0, 3},
	{3, 3, 1, 1, 0, 1, 0, 1, 4, 0, 2, 4, 4, 4, 0, 1, 3, 1, 3, 4, 2, 1, 2, 2, 2, 5, 1, 1, 2, 3, 4, 1, 5, 2, 2, 3, 6, 3, 3, 3, 3, 5, 6, 3, 5, 4, 5, 3, 3, 5, 4, 2, 6, 3, 6, 3, 6, 2, 2, 6, 6, 3, 6, 2, 6, 2, 2, 5, 6, 5, 4, 1, 1, 3, 1, 4, 4, 3, 2, 1, 5, 3, 5, 4, 3, 0, 4, 0, 2, 3, 2, 4, 3, 3, 0, 2, 1, 0, 2},
	{3, 3, 1, 2, 0, 2, 0, 3, 3, 4, 3, 1, 0, 3, 2, 2, 2, 1, 2, 4, 4, 2, 3, 2, 1, 2, 5, 4, 5, 5, 3, 1, 3, 2, 3, 3, 6, 4, 2, 6, 3, 5, 4, 3, 2, 3, 3, 6, 5, 3, 4, 4, 6, 4, 3, 3, 3, 6, 3, 5, 3, 3, 5, 6, 3, 5, 4, 2, 3, 5, 2, 4, 4, 1, 1, 5, 2, 5, 2, 1, 5, 0, 3, 3, 3, 2, 3, 3, 1, 3, 1, 2, 0, 3, 3, 3, 0, 1, 3},
	{0, 3, 3, 0, 3, 0, 2, 0, 2, 0, 0, 2, 1, 0, 0, 3, 1, 3, 1, 1, 1, 5, 2, 3, 4, 3, 2, 3, 1, 1, 2, 4, 2, 3, 2, 1, 3, 5, 2, 2, 6, 6, 3, 3, 2, 5, 4, 3, 4, 3, 6, 3, 2, 2, 5, 3, 6, 3, 6, 5, 5, 3, 5, 4, 1, 5, 4, 3, 4, 2, 4, 5, 4, 3, 3, 2, 5, 1, 2, 4, 2, 1, 2, 2, 3, 1, 3, 0, 1, 4, 0, 3, 1, 2, 1, 2, 3, 1, 3},
	{2, 2, 2, 2, 1, 1, 1, 0, 0, 3, 3, 3, 3, 3, 2, 3, 1, 0, 2, 4, 2, 3, 4, 3, 2, 5, 2, 2, 2, 1, 2, 5, 1, 5, 4, 3, 4, 1, 4, 4, 4, 3, 2, 2, 6, 3, 5, 5, 3, 2, 5, 6, 3, 2, 3, 6, 4, 2, 6, 2, 6, 2, 5, 1, 3, 5, 2, 5, 1, 5, 2, 1, 3, 3, 2, 2, 3, 2, 5, 2, 2, 2, 3, 0, 2, 4, 4, 4, 4, 0, 2, 0, 1, 3, 3, 2, 0, 2, 3},
	{0, 0, 0, 2, 0, 3, 3, 1, 0, 2, 1, 3, 0, 1, 1, 2, 1, 3, 4, 1, 2, 3, 4, 4, 3, 1, 5, 2, 5, 5, 1, 3, 1, 5, 1, 2, 3, 3, 5, 2, 2, 3, 4, 5, 3, 5, 5, 2, 4, 6, 5, 3, 3, 5, 4, 2, 5, 4, 1, 3, 2, 5, 2, 3, 2, 2, 4, 2, 2, 2, 5, 3, 3, 3, 4, 4, 4, 0, 3, 1, 0, 2, 2, 3, 3, 4, 0, 3, 1, 3, 2, 3, 1, 3, 3, 2, 0, 2, 0},
	{0, 1, 1, 3, 3, 2, 2, 3, 1, 3, 2, 3, 1, 3, 0, 1, 4, 1, 3, 1, 0, 4, 3, 1, 0, 3, 1, 2, 2, 2, 1, 3, 2, 5, 3, 3, 2, 3, 2, 4, 5, 3, 3, 5, 3, 1, 2, 4, 4, 1, 2, 3, 4, 1, 2, 5, 4, 1, 2, 2, 2, 5, 5, 4, 2, 4, 3, 3, 1, 1, 5, 3, 3, 4, 4, 3, 4, 1, 3, 4, 0, 1, 1, 3, 3, 1, 1, 3, 1, 0, 0, 1, 0, 0, 3, 3, 1, 3, 0},
	{0, 1, 0, 0, 2, 1, 0, 3, 3, 1, 0, 0, 3, 1, 0, 3, 1, 2, 1, 2, 3, 2, 4, 2, 1, 3, 1, 1, 2, 2, 5, 2, 4, 2, 2, 1, 5, 5, 5, 4, 1, 1, 4, 5, 5, 5, 2, 3, 4, 2, 1, 2, 5, 3, 2, 5, 3, 1, 4, 2, 5, 4, 5, 5, 1, 5, 3, 2, 3, 4, 2, 3, 3, 2, 2, 4, 4, 4, 3, 0, 0, 1, 4, 2, 4, 2, 4, 3, 3, 3, 2, 0, 1, 3, 3, 2, 0, 2, 1},
	{1, 1, 0, 1, 0, 1, 2, 2, 0, 2, 0, 2, 2, 0, 1, 1, 1, 4, 3, 1, 0, 0, 0, 3, 4, 0, 1, 4, 2, 0, 5, 1, 3, 3, 2, 4, 3, 3, 4, 5, 2, 5, 2, 5, 3, 1, 1, 2, 5, 3, 3, 4, 3, 5, 3, 5, 5, 2, 4, 4, 4, 4, 2, 3, 4, 4, 3, 1, 1, 1, 1, 2, 4, 2, 1, 3, 2, 0, 0, 2, 4, 2, 3, 4, 3, 3, 3, 1, 3, 2, 2, 2, 2, 0, 2, 1, 0, 0, 0},
	{0, 2, 0, 0, 1, 1, 1, 2, 3, 3, 3, 3, 2, 2, 2, 2, 0, 0, 0, 0, 3, 2, 4, 4, 0, 3, 2, 4, 3, 0, 3, 0, 5, 1, 2, 3, 2, 5, 5, 5, 3, 1, 3, 4, 2, 3, 2, 1, 4, 1, 3, 2, 4, 2, 5, 3, 4, 5, 2, 2, 5, 5, 2, 1, 2, 5, 4, 4, 4, 3, 1, 3, 0, 1, 4, 0, 0, 2, 4, 2, 4, 2, 3, 3, 3, 3, 0, 3, 3, 1, 1, 3, 0, 2, 2, 2, 2, 0, 0},
	{1, 0, 0, 2, 2, 0, 0, 0, 0, 3, 1, 2, 0, 2, 3, 3, 0, 2, 1, 1, 4, 1, 1, 4, 4, 4, 0, 2, 0, 1, 0, 3, 3, 3, 0, 4, 3, 2, 3, 4, 3, 1, 1, 5, 5, 2, 1, 2, 1, 5, 5, 5, 2, 2, 5, 4, 1, 4, 1, 5, 5, 1, 5, 2, 1, 1, 1, 2, 3, 2, 4, 3, 0, 0, 0, 4, 4, 4, 2, 2, 1, 3, 4, 3, 0, 0, 2, 0, 0, 1, 1, 2, 1, 2, 0, 2, 1, 0, 2},
};

static std::string day9 = R"(U 1
R 1
D 2
L 1
R 2
U 1
L 1
U 1
L 2
R 1
D 2
U 1
R 2
L 2
U 2
R 2
D 2
R 1
D 2
L 2
R 2
U 1
D 2
L 1
U 2
D 2
L 1
D 2
R 1
D 1
R 2
L 2
D 1
R 2
U 1
L 1
D 2
R 2
U 2
L 2
D 2
R 1
L 1
U 1
R 2
U 1
L 2
R 1
U 1
R 2
D 1
R 1
D 1
L 2
U 2
L 2
U 2
L 1
R 2
L 2
R 2
L 1
D 2
U 1
R 2
D 1
R 2
D 1
R 2
D 2
U 1
L 1
D 2
R 2
L 2
R 2
L 2
U 1
L 2
R 2
D 2
L 1
D 1
L 1
U 1
D 1
U 2
L 1
D 2
L 2
U 1
R 1
L 2
U 1
R 2
U 2
R 2
D 2
U 1
L 2
D 2
U 2
D 1
U 2
L 2
U 1
L 2
R 1
U 1
L 1
R 2
U 1
R 3
D 3
L 2
D 2
R 1
D 3
R 3
D 1
U 2
R 1
D 3
R 1
L 3
D 1
R 3
L 3
R 2
L 2
U 3
R 2
D 2
L 2
D 1
R 2
L 3
D 1
R 1
U 1
D 3
U 2
L 2
R 3
U 3
L 2
D 1
L 2
R 1
L 2
R 2
D 2
R 3
L 3
D 2
L 3
D 2
L 3
D 2
R 1
L 3
U 3
R 1
L 2
D 3
U 1
D 2
L 3
D 3
R 1
D 1
U 3
L 3
U 2
R 1
D 2
L 1
R 3
L 1
D 2
U 1
R 3
L 3
D 3
U 1
L 3
R 1
L 3
D 3
U 2
R 3
D 1
L 1
D 2
L 1
U 1
D 2
L 2
D 1
U 3
D 1
U 2
L 2
D 1
U 2
L 2
U 3
R 2
L 1
U 1
D 1
L 2
D 1
U 2
D 3
U 3
R 1
L 3
R 3
L 2
U 3
R 3
U 3
R 2
U 1
R 3
U 3
R 1
U 4
D 3
R 2
L 3
R 3
L 4
R 2
L 1
U 2
D 4
U 4
D 3
L 2
U 3
R 3
U 4
R 4
D 3
U 4
R 3
U 4
L 4
D 4
R 4
U 2
L 3
D 4
L 1
U 2
R 1
D 3
U 1
R 1
U 3
D 2
L 3
D 2
U 4
D 4
L 3
U 4
R 1
D 3
L 3
D 2
L 1
R 1
U 1
D 2
L 2
U 4
D 1
R 3
L 2
R 2
L 3
U 4
D 1
R 4
L 1
U 4
D 2
U 3
R 2
U 1
D 2
U 2
R 1
L 1
U 4
L 1
R 4
U 2
L 2
D 3
R 2
U 1
D 4
L 3
D 2
U 3
D 3
L 1
U 4
L 3
R 2
L 4
R 3
D 2
U 3
R 1
D 4
L 2
D 3
R 2
U 3
R 2
U 2
L 3
D 1
R 4
L 1
R 1
D 2
R 1
D 5
L 4
U 2
D 5
R 4
L 2
U 4
D 5
L 3
U 1
R 2
D 1
R 4
U 5
L 2
D 2
R 4
D 2
R 5
L 5
D 3
U 1
R 2
D 1
U 1
D 2
U 5
D 2
U 5
R 4
L 2
U 4
D 1
U 1
L 4
U 4
D 1
U 5
D 4
L 3
D 2
U 3
R 4
D 2
L 3
R 4
D 1
U 2
L 2
R 1
D 3
R 5
U 1
R 4
U 1
R 3
U 5
L 5
D 4
L 5
R 2
D 3
R 4
D 2
U 4
D 3
U 1
L 2
U 3
L 2
R 1
U 5
D 2
R 1
D 3
R 1
U 2
R 1
U 2
L 3
R 1
L 3
U 1
D 4
R 5
L 3
D 1
U 4
D 1
U 1
R 3
D 5
R 3
D 3
U 2
L 4
R 3
L 5
U 3
L 2
D 1
U 5
R 3
U 5
R 3
L 1
U 3
L 4
R 1
D 2
L 2
U 5
D 3
L 3
U 6
R 3
L 4
D 4
R 3
D 5
R 3
U 6
D 1
L 5
D 5
L 2
U 1
R 2
L 4
U 5
R 4
L 6
U 2
D 3
L 5
D 2
R 3
L 5
R 4
D 6
R 6
L 3
U 5
R 3
L 2
R 1
D 6
R 1
L 1
R 1
U 5
R 1
D 1
R 5
L 1
R 6
L 1
R 3
U 2
D 3
U 4
D 4
R 5
U 4
D 2
R 1
D 6
R 3
D 1
R 3
U 2
R 3
U 2
D 3
U 2
R 1
L 4
D 4
L 3
D 2
U 3
L 6
D 6
R 5
U 3
L 4
R 6
D 3
R 1
U 4
D 1
L 3
U 5
D 2
L 2
U 5
L 3
U 6
D 5
L 1
U 4
L 6
D 6
U 3
D 2
R 6
D 4
R 1
U 5
R 5
U 2
R 5
D 4
R 2
U 2
L 3
D 3
R 5
D 3
U 1
L 1
U 6
D 5
R 2
L 4
D 1
R 6
L 4
D 2
L 7
U 7
L 1
D 4
U 3
D 7
L 6
R 5
D 7
R 4
L 6
U 3
D 7
U 6
D 2
U 2
L 5
D 3
U 1
L 1
U 7
D 7
L 1
R 1
D 6
R 7
L 7
D 3
L 6
R 7
U 4
D 7
R 6
L 2
R 1
U 1
D 1
R 3
U 1
L 5
R 7
L 4
R 5
L 2
R 3
L 7
D 5
L 3
R 4
U 1
R 7
D 4
R 3
U 1
D 1
L 1
D 4
R 4
L 2
D 3
U 4
R 5
D 6
U 4
L 7
R 6
L 7
U 3
D 7
R 4
U 7
R 5
U 2
L 5
R 7
L 5
U 3
L 7
U 6
D 7
R 7
D 6
U 1
R 1
D 6
U 3
L 7
D 1
R 1
D 2
L 2
R 2
U 5
L 2
U 1
R 5
U 5
L 3
R 6
D 1
L 7
D 7
R 1
L 1
R 1
U 5
R 1
L 8
D 6
R 6
U 2
L 7
U 3
L 4
R 3
D 3
R 8
U 6
R 3
D 4
U 8
R 5
U 3
R 3
D 2
R 4
U 6
R 2
D 2
L 2
D 7
U 4
L 3
R 4
L 8
R 1
U 2
D 1
L 8
U 8
R 6
U 1
L 8
D 6
L 7
U 5
L 3
D 1
R 2
L 8
R 7
D 7
R 7
D 7
R 8
U 5
R 4
U 3
D 5
U 3
L 8
D 2
L 2
D 4
R 2
D 7
R 4
U 8
R 1
L 2
D 7
U 1
L 3
R 1
L 8
D 1
R 7
U 2
L 2
R 8
D 8
U 7
R 1
U 7
L 1
R 1
L 3
U 7
R 3
D 4
R 3
D 4
R 3
U 7
L 4
R 7
L 1
D 8
R 7
U 6
R 4
D 2
R 7
L 8
D 6
R 1
U 8
L 6
D 4
L 4
U 8
R 3
D 4
U 4
L 5
U 9
L 5
R 1
L 1
U 7
L 7
U 3
D 4
L 4
U 3
D 7
R 3
D 6
R 2
U 8
D 7
U 1
D 1
L 8
R 6
L 4
D 2
L 7
D 9
R 6
D 8
R 4
D 9
L 4
D 3
L 4
U 6
L 2
U 3
D 4
R 9
D 5
L 5
U 3
R 9
U 9
D 3
R 1
D 7
R 1
D 8
R 1
D 3
R 6
L 5
D 1
L 3
R 3
U 1
D 4
U 6
D 9
U 9
L 6
D 6
R 1
U 4
D 6
L 7
R 1
L 8
R 8
D 1
R 6
L 7
D 3
U 8
R 8
L 9
R 8
L 7
U 5
L 2
R 4
D 8
U 9
D 3
L 6
U 3
L 2
R 1
D 3
U 9
D 9
U 6
R 8
L 1
U 8
L 5
R 2
L 4
R 6
L 6
D 4
R 6
L 9
R 8
U 1
D 8
R 7
D 1
L 9
D 6
L 1
R 7
D 9
R 8
L 6
U 7
R 1
D 7
U 9
R 10
D 10
U 7
D 5
R 9
U 6
L 8
R 4
D 5
R 10
U 7
D 10
R 5
L 9
R 3
U 9
R 9
D 4
L 2
R 4
D 1
L 6
R 9
L 1
D 2
R 8
D 1
R 10
D 4
L 2
D 5
L 3
U 5
L 8
R 2
L 6
U 5
D 3
L 2
R 2
L 9
R 1
L 9
U 10
D 7
U 6
R 3
L 9
U 7
L 9
U 2
L 3
D 10
U 1
L 9
U 8
D 5
U 5
D 1
L 9
D 3
U 9
L 3
R 3
D 2
R 5
D 7
U 4
R 3
U 1
R 8
U 1
D 2
R 3
D 4
U 5
R 10
U 6
D 1
L 7
D 4
L 6
R 6
U 2
L 3
D 2
L 3
D 7
R 1
D 4
L 9
R 9
D 1
L 9
U 3
R 9
L 6
U 6
D 1
U 10
L 2
D 4
R 8
U 2
R 4
D 2
R 4
L 9
R 7
D 10
R 10
L 8
D 11
U 6
L 8
D 7
U 8
L 5
R 9
L 1
U 1
D 6
R 10
U 11
L 9
U 4
L 5
R 6
D 11
U 9
R 4
D 11
R 4
D 3
L 7
R 9
D 1
R 3
U 11
L 5
D 1
U 7
R 8
U 4
D 10
U 4
R 9
U 7
L 6
U 8
L 6
U 2
R 7
L 3
U 5
D 9
R 3
D 6
U 6
L 7
D 11
U 1
D 11
U 9
R 10
L 11
R 4
D 10
R 6
L 4
D 11
L 7
R 2
L 6
U 9
D 2
R 4
D 11
L 4
D 9
U 11
L 7
R 2
D 2
U 6
L 4
R 4
U 10
L 3
R 7
U 10
L 3
U 3
D 6
U 11
D 1
R 6
U 7
L 3
D 6
L 3
D 7
R 8
U 4
R 5
D 8
L 11
D 11
R 8
D 5
L 1
U 4
D 1
R 6
D 9
L 9
D 9
U 6
D 6
R 6
D 6
U 1
L 5
D 10
U 4
L 6
D 3
L 12
R 11
D 7
R 12
U 9
R 8
D 1
U 9
D 2
L 4
U 10
D 7
L 8
U 5
D 7
R 4
U 4
R 11
U 11
D 1
L 5
R 2
L 9
D 11
L 9
R 9
U 1
R 4
U 4
L 10
R 1
D 8
U 1
D 2
U 6
D 1
R 6
L 10
U 5
D 11
U 11
L 9
D 1
R 5
D 3
L 2
R 8
U 8
R 5
L 2
U 12
L 9
R 9
D 1
U 3
D 4
R 1
D 11
L 4
U 7
D 11
U 6
L 2
R 3
U 8
L 9
D 9
L 12
R 1
L 3
R 2
L 3
D 5
R 9
U 9
R 8
D 10
U 9
R 6
L 9
D 8
U 11
R 3
L 7
D 10
R 9
D 7
R 11
D 5
U 2
L 10
R 1
U 10
D 5
R 5
L 4
R 9
D 4
R 3
L 9
D 9
L 5
R 4
L 12
R 7
U 13
D 6
U 9
D 13
U 5
R 11
D 6
R 13
U 2
R 10
D 2
L 11
R 9
D 12
L 4
D 11
L 1
D 5
L 3
D 5
U 11
R 8
L 2
D 13
L 1
R 6
D 4
U 8
D 8
R 5
D 1
U 7
R 13
U 13
D 2
L 4
U 1
R 5
L 13
U 2
L 7
D 12
U 10
D 13
L 8
R 5
L 13
U 5
D 6
L 11
D 10
R 1
U 7
R 6
D 12
L 6
D 2
U 9
D 10
L 7
D 2
U 3
R 3
L 9
D 1
R 5
U 10
L 3
R 3
U 4
L 13
R 4
D 13
R 8
L 10
U 7
R 9
L 4
U 5
R 4
D 2
L 12
R 11
L 10
U 13
L 2
U 11
L 11
R 6
D 4
L 7
R 11
L 12
D 13
U 4
L 11
R 7
D 12
L 7
R 7
D 10
U 11
L 12
U 5
R 8
U 7
L 9
R 2
U 7
L 12
D 6
U 4
R 12
D 2
R 8
U 14
L 2
R 1
U 2
R 8
U 4
D 14
U 13
R 7
D 5
R 6
U 9
L 12
U 11
L 7
R 1
U 2
D 8
R 4
D 2
R 11
L 8
R 6
D 10
L 3
R 12
D 6
R 10
L 4
D 14
U 9
L 3
D 3
L 12
D 14
R 14
D 12
U 4
L 10
R 13
U 4
D 9
L 11
R 1
U 13
D 5
U 2
D 6
U 8
R 12
U 3
D 4
L 8
D 7
R 9
L 6
D 13
L 10
D 4
R 13
D 14
U 5
D 7
U 14
L 14
R 7
L 2
D 6
R 9
U 14
L 10
D 14
L 10
D 8
R 5
L 3
U 3
D 9
R 1
L 8
R 9
D 9
R 12
U 10
R 14
L 9
U 9
R 14
L 14
R 6
D 5
R 6
U 11
D 8
U 8
D 5
L 7
D 2
U 14
R 1
L 9
R 6
U 13
R 15
U 15
D 8
U 7
D 3
L 10
U 11
D 9
R 14
D 1
L 2
U 3
R 7
L 4
D 2
L 12
D 11
L 6
U 9
D 9
L 3
R 1
D 12
L 8
U 4
L 2
U 9
R 12
L 14
U 6
D 4
U 10
R 4
U 7
D 4
R 10
U 11
R 11
L 4
U 3
D 2
L 9
D 1
L 15
R 2
D 3
R 5
U 6
D 12
R 2
U 6
D 6
L 9
U 8
R 10
U 10
R 3
U 1
R 14
U 2
L 13
D 10
U 2
D 6
U 5
L 15
R 4
U 6
R 9
U 10
L 9
R 13
L 9
R 13
D 8
U 15
L 11
R 2
U 2
D 15
R 14
D 2
L 15
D 14
R 4
D 13
R 9
L 5
D 1
U 4
D 13
L 9
D 14
U 2
D 8
L 13
U 2
D 10
U 5
L 3
R 2
L 1
U 5
L 3
D 7
U 3
D 7
R 2
L 1
D 5
U 8
D 11
L 10
U 12
D 9
U 5
D 9
U 15
R 9
D 13
R 2
D 5
U 4
L 8
R 2
U 1
R 6
U 6
D 9
U 8
L 8
D 7
U 14
D 3
R 8
D 3
U 10
D 2
R 15
U 8
L 8
D 10
L 7
D 7
L 2
U 7
D 13
L 11
D 16
L 15
U 16
L 12
U 14
R 4
U 1
R 10
U 5
L 2
U 6
L 9
R 8
L 16
D 11
R 1
L 7
D 10
U 9
R 3
D 13
R 15
L 9
D 13
R 11
L 1
D 16
L 2
R 9
L 4
R 14
L 1
D 14
R 5
L 1
D 11
U 8
D 12
R 13
U 8
L 4
U 11
R 7
D 4
R 15
U 6
L 2
D 11
L 13
R 16
U 13
D 16
U 4
R 10
D 2
R 8
D 3
R 15
U 9
L 1
U 10
L 13
D 5
L 1
D 14
U 6
L 14
D 8
U 10
R 5
L 8
U 9
D 2
R 6
U 17
L 6
U 9
L 4
R 14
D 1
L 7
U 1
R 11
D 3
R 8
D 5
R 11
U 3
L 12
U 5
R 12
D 7
R 12
L 7
U 11
D 17
L 12
R 15
D 16
R 6
D 16
L 3
U 17
L 3
D 4
L 12
R 10
L 3
D 14
L 5
R 2
U 1
D 8
R 4
D 9
L 8
R 15
L 16
U 5
R 3
U 3
D 15
R 2
D 8
R 17
D 11
U 8
R 1
L 7
D 14
U 14
L 9
R 8
D 2
L 14
D 5
R 10
L 12
U 5
L 7
U 11
L 14
R 17
D 14
R 1
L 1
U 15
D 13
R 15
L 17
D 3
R 1
L 2
R 3
U 16
D 8
U 9
R 8
L 7
R 11
U 9
D 6
U 11
D 4
U 11
D 16
R 6
D 15
U 11
L 3
U 12
D 10
U 14
R 4
D 9
R 6
U 2
R 10
L 1
R 3
D 5
L 5
D 17
U 11
L 17
R 4
U 3
L 15
R 3
L 3
R 16
L 12
R 6
L 2
D 5
L 17
U 17
R 1
D 6
L 9
D 6
R 15
D 9
R 4
L 6
U 15
L 16
R 10
D 11
U 8
D 7
U 1
R 7
L 16
U 5
D 14
R 16
D 6
R 2
L 2
R 3
L 8
D 4
U 11
R 9
U 5
D 11
U 3
R 9
L 5
D 14
U 1
D 11
L 6
U 16
L 17
U 7
L 13
R 13
U 11
L 10
D 2
R 7
D 16
R 9
U 17
L 13
U 17
L 4
D 7
U 16
D 8
L 7
R 16
L 11
D 9
R 18
U 1
D 12
R 16
L 8
D 7
U 10
L 9
U 6
R 5
D 5
R 8
D 7
L 9
R 8
L 11
R 3
D 6
L 6
D 18
U 14
D 11
U 13
R 10
L 2
R 6
L 13
R 1
U 6
R 8
D 10
L 8
R 15
U 4
L 7
R 17
L 8
R 3
D 6
L 13
R 10
D 1
R 5
D 11
U 10
D 4
L 5
R 13
D 2
L 14
D 8
U 5
R 10
L 17
D 2
U 4
R 1
L 10
R 2
L 9
D 2
L 4
R 4
U 9
L 7
U 3
D 1
L 9
U 1
D 18
U 14
L 7
R 3
D 12
L 19
R 13
D 16
U 18
D 16
R 2
D 11
U 16
R 1
D 17
U 8
D 1
U 17
L 4
D 16
L 8
U 3
R 13
U 1
D 1
U 1
R 17
U 14
R 17
D 16
U 8
L 6
D 9
R 1
D 9
L 2
D 14
R 1
L 9
U 5
D 1
R 15
L 14
U 4
R 15
U 9
D 10
L 5
R 1
L 14
U 7
R 8
L 8
R 14
L 7
D 14
L 17
R 2
U 13
R 13
L 3
R 18
L 6
D 9
U 5
R 14
U 11
D 13
L 15
D 1
U 10
R 13
D 6
U 15
D 15
R 5
U 15
D 2
U 2
D 10
L 19
R 8
D 3)";