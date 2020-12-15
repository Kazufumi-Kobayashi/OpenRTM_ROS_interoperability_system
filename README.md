# RTMとROSを用いた物体操作システム　　
## 更新  
サンプルスクリプトの名称変更、それに伴うマニュアルの変更  
## 概要　　
OpenRTM-aist-2.0の機能であるROS Transportを活用したOpenRTMとROSによる相互運用システム  
開発コンポーネントはロボットアーム共通インターフェースのブリッジとして利用可能になるため，様々なROS対応のマニピュレータに適用可能  
一例としてROS対応マニピュレータであるMOTOMAN-GP8による検証を行った  
検証済みマニピュレータ(MOTOMAN-GP8,CRANE+V2,CRANE-X7)
## 開発環境　　
言語：C++，Python  
OS：Linux (Ubuntu18.04)  
RTミドルウェア：OpenRTM-aist-2.0  
ROS：ROS melodic  
## 開発コンポーネント  
### [RTMtoROS](https://github.com/Kazufumi-Kobayashi/OpenRTM_ROS_interoperability_system/tree/master/RTC/RTMtoROS)  
ロボットアーム共通インターフェースのブリッジRTC  
RTM側のサービスポートからの情報をデータポートへと変換し，ROS TransportによりROS側へと送信する  
### [ManipulatorControlSample](https://github.com/Kazufumi-Kobayashi/OpenRTM_ROS_interoperability_system/tree/master/RTC/ManipulatorControlSample)  
マニピュレータの各軸の関節角度や手先位置をCUIにて指定するサンプルコントローラRTC
## サンプルスクリプト(ROS)  
### [manip.py](https://github.com/Kazufumi-Kobayashi/OpenRTM_ROS_interoperability_system/tree/master/sample_scripts)
RTM側から受信した関節角度等の情報を受け取り，マニピュレータを動作させるROSのサンプルスクリプト     
## ドキュメント  
### マニュアル　　
[ROSでMotoman GP8を利用するための環境構築と動作確認](http://www1.meijo-u.ac.jp/~kohara/cms/technicalreport/ros_motoman_gp8_setup)  
[RTMとROSを用いた物体操作システムマニュアル](https://github.com/Kazufumi-Kobayashi/OpenRTM_ROS_interoperability_system/blob/master/Documents/Manual.pdf)  
### 仕様書  
[RTMtoROS仕様書](https://github.com/Kazufumi-Kobayashi/OpenRTM_ROS_interoperability_system/blob/master/Documents/RTMtoROSSpecification.pdf)  
[ManipulatorControlSample仕様書](https://github.com/Kazufumi-Kobayashi/OpenRTM_ROS_interoperability_system/blob/master/Documents/ManipulatorControlSampleSpecification.pdf)  
### その他  
シミュレーション(rviz)検証動画・・・準備中  
RTMコンテストプレゼン資料・・・準備中
