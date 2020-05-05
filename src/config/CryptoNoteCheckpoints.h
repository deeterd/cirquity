// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2019-2020, The Cirquity Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = {
        {0, "e0c6bc0d20a0be1ec393cff5cd6d052fd4f554a87a1fedb074dca8683d0b3603"},
        {1000, "2e6505edee5b110383381f6fc4ec47e064031a333b6e54b55b3959744ae376c1"},
        {5000, "b90860d0264c43daa7217c47c20fba6b4a32f2567c2d248b3b6c8cdb1ef888f1"},
        {10000, "2e49f0646ae1dcaba403a141da1a0184b72da558b9449e4f6c35e0ede3cc8c19"},
        {15000, "241b881d95a7c04e921ca15b1cb9a55176fce0382ded99c25e435d37d062fec8"},
        {20000, "fce5ff1e6777bc2a1336943f7952e94cd0d502e14cb9705338120b22d55e9929"},
        {25000, "abb7f9995e68334adc29f66696f07f5fdf385792d7537a24f0aeee6f1194b6a7"},
        {30000, "96b98509f10c9cec17747d7ebfdd538ac3ace7c0da51dcda8ae50d201da63134"},
        {35000, "9905a3efa0cd252468abb77a8b4368f8e1a663a6a20ade682d2a90ec3bab4697"},
        {40000, "328bd494e265742bcbe6da2c4b9b6cc6994d40c8775bc0cf6c6d2015522ffb08"},
        {45000, "b957db438ad761c625455089d50cd2a70e52767556f9de9aa6ad3b3110f2d2f2"},
        {50000, "fad41f77a0f1636ba04ecea708470eb20f089d5547daaa19adfcfad6ac247042"},
        {55000, "e0f5fca5eda6e32f157b00d1845bf293417fddd935c7845e04ef5028bf85864b"},
        {60000, "f028cb66da84d5152583bffa4871018d8648ac7eddd0f6783bab63db5ec6dc99"},
        {65000, "8016201e2fdace00febdc9a267c5914dd1545fd36f4576fb30ff321b59f883d5"},
        {70000, "aa7930d9dd9bf610af9c6cc67ef0a13d2f2448f3bbc60722cb9262bfbab81620"},
        {75000, "a033c1f9cbafdca6bb6eedeb1c9a99ded63e612cb0383ae062de80e568c04842"},
        {80000, "0de007bf0dd736b5a303bc1bcd22c0b4df72aa558634cfd714d645150d64c9b3"},
        {85000, "edebb0a708304154f64e8d527312831a7a372d9f394ca10b09940da5148ed509"},
        {90000, "ae6e54f2826aad7f9b382588f29e07e01394149309248a9c877f9e1833b21d9c"},
        {95000, "e506df18015462b7e560530552c282d3364d11325dc63eef9dd8f032d3b6c191"},
        {100000, "939e52286ff65752646882976dc65c3f8ee0b8f5d01e36c520d2457cb261ed13"},
        {105000, "0ab32f7e848ca69d805f3d26f1892e447360a2d6f8cb57017b0d9415518a13de"},
        {110000, "6a0ee6cc572ebe787230882bd60577dffcedc7c928ef0b41329e64307e192811"},
        {115000, "43d87f184597a89160150ab47173571d7a37fa4d16d359be3b93de2cf0091c36"},
        {120000, "aad696b41445daaa177c7d5a80466fcf7ce28c697882289c56b0929299502906"},
        {125000, "fdec53139bd65642b0ebd0e3c692d3c8f005add823cb7947ad15916d2da228d9"},
        {130000, "5c021c60a285bc025877c135c29925bc57a17d2d10dc4e03701b02bc2f7e1110"},
        {135000, "0d0064dec71c3e8c10fe8edb43a7ba46f398ed4ac4f5b0566aa140bc48348544"},
        {140000, "ed60dcd4fb71b9043a9f0cb9eeb6d38014242de9c8f3fd80c438d133d8eda1bd"},
        {145000, "290e2b14a9c30aec6596ad5a458ed23d14e957326f568520347d6d91f66ed8b1"},
        {150000, "f5f8cb75d95cc6fabe7dc797af079650469bea7f64b0da4d5c57afa6d2358de9"},
        {155000, "deff4fc423d5e1f9c646803ebe72934cd2f3b9811481bc981dd1e1d1a702e3ad"},
        {160000, "0ab549564a137def7ce5e77057054e0c00d37560ae6f54af3329237fe0609b8f"},
        {165000, "840e067bc900cb1af3c4d0c6796dba3373773286d258c8e8a5189d79b00de575"},
        {170000, "c9e867ffaadbf3d675684f2af3c0c94b9ebde765189ca0866fc41f5be13a3a5d"},
        {175000, "d9d2c9fee3d0e9b7a06224c0c3027bd944f0b04109907dd7279be5717a9383fa"},
        {180000, "8e04016161570b97690d63b2e4dd099e2e9fd3c7ac9e4566cc64dba05357fafe"},
        {185000, "b236fce67fa99c557fabb3e2deaeac972169242934ef46e0cd6728beff369397"},
        {190000, "9861aefe52a86ec6e21036cecccfdae03c0ad98d3f508b5868b2104793fc177d"},
        {195000, "1d48569fec0d6d419afcbf0bf0f02469250768aa74d65d59000260ef8764dc34"},
        {200000, "c2f5dc035d248f34a45bfada3600817ac55b43fb0f883327627a8a47fd9eb57b"},
        {205000, "151164d74ce4d4c5ba8a30e1e22d7265b52d63a3e216647db75acfe847a54643"},
        {210000, "4c1ede8d7c3a7abee22bfb9cc33d05ca04f9d98fed7af9fb0947b6716ac2d76c"},
        {215000, "ef1b534fbdda9625c4c9631c793cd5f8cdfb174c9b255d6f8bb1adb3dfdecdcb"},
        {220000, "c18abf260081ecc1df96b331ac1641730d633f8b171ea1d26555c192796715f0"},
        {225000, "61ef1f81cb10babb629171fc165b09dad9ebf11d4eec92d6f492dc88024691a6"},
        {230000, "fc6bfdb1611318077882b40b7731d7f83fb235db7dcd872d4a98cf6f558fa1fb"},
        {235000, "e4ea230a20d9c6d4c7803401bb8f8309b6b06ab82569c301d2d23ebe9f755b01"}};
} // namespace CryptoNote
