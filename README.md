# icecx
DDS to Cortex bridge for the MDPnP ICE demo

## Building icecx
This repository depends on cortexlang/cortex. Download the latest version of cortex, build it and ensure your environment is setup for cortex (`source configure` in the cortex installation directory).

After cortex is setup, just run make in the root of this repository. This will build the Ice package as well as the examples.

## Usage
To run the C example, simply type `monitor`. It will display events whenever data is published in DDS.

To run the cortex scripting example, go to the `examples/cxmonitor` directory and type `cortex monitor`. This will start the equivalent cortex scripting example.

To run the DDP example, go to the `examples/ddpmonitor` directory and type `cortex ddpmonitor`. This will start a DDP server and DDS connector, thereby exposing DDS data to a Meteor front end.
