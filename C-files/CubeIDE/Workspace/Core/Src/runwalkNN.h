#include "eml_net.h"
static const float runwalkNN_layer0_weights[72] = { 1.369375f, 0.573632f, 1.541257f, -1.209940f, -0.214946f, 0.198802f, -0.024848f, -3.003371f, 0.210967f, -0.079427f, 1.145996f, 0.291484f, 0.910746f, 0.154150f, 1.693557f, 0.890834f, -0.130029f, 1.103754f, -1.183133f, 1.714163f, 0.297120f, -0.906901f, -0.366800f, -1.660384f, -3.569293f, 0.351153f, 0.130127f, -0.582803f, -0.618312f, 4.066385f, -1.548143f, 0.816931f, 0.469524f, -1.314603f, -2.661405f, -1.291841f, 0.122389f, 0.641338f, 0.548608f, 0.529269f, -0.077262f, 0.213738f, 0.022384f, -1.101037f, 0.068598f, -0.255893f, -0.549023f, -0.259176f, -0.014593f, -0.255656f, -0.160896f, -0.103567f, -0.411152f, -0.028102f, 0.032534f, -0.080382f, 0.023501f, -0.082927f, 0.100934f, 0.057737f, -0.197926f, 0.163605f, -0.485758f, 1.150188f, 0.549076f, 0.084685f, -0.139044f, -0.428744f, -0.054543f, 0.222003f, 0.340801f, -0.048769f };
static const float runwalkNN_layer0_biases[12] = { -0.092508f, -0.760129f, 1.104316f, -0.704350f, 0.164723f, 1.379642f, -0.069786f, -0.102278f, -0.247003f, 0.197703f, -1.488938f, 0.161461f };
static const float runwalkNN_layer1_weights[12] = { 2.217078f, -1.192408f, 1.740635f, 1.637897f, -0.571377f, 2.591411f, -1.822992f, 2.179190f, -0.341104f, -0.813125f, 2.379962f, -1.201834f };
static const float runwalkNN_layer1_biases[1] = { 0.517051f };
static float runwalkNN_buf1[12];
static float runwalkNN_buf2[12];
static const EmlNetLayer runwalkNN_layers[2] = { 
{ 12, 6, runwalkNN_layer0_weights, runwalkNN_layer0_biases, EmlNetActivationRelu }, 
{ 1, 12, runwalkNN_layer1_weights, runwalkNN_layer1_biases, EmlNetActivationLogistic } };
static EmlNet runwalkNN = { 2, runwalkNN_layers, runwalkNN_buf1, runwalkNN_buf2, 12 };