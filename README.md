# icecx
DDS to Cortex bridge for the MDPnP ICE demo

## Building icecx
This repository depends on cortexlang/cortex. Download the latest version of cortex, build it and ensure your environment is setup for cortex (`source configure` in the cortex installation directory).

After cortex is setup, just run make in the root of this repository. This will build the Ice package as well as the examples.

## Usage
To run the C example, simply type `icemon`. It will display events whenever data is published in DDS.

To run the cortex scripting example, go to the `examples/cxmonitor` directory and type `cortex monitor`. This will start the equivalent cortex example.

## Run with web
This code can be easily enhanced with web functionality. To set this up, download and build the web package (cortexlang/web).

To start the DDS ICE connector with web functionality, simply open a `cxsh` console and give the following two commands:
```
web::server s: 8000
Ice::DdsConnector ddsx: 0, "ICE"
```
This will start both the webserver and ICE DDS connector. To use the webconsole, open a browser and go to the following URL: `http://localhost:8000` (assuming the webserver is on the same host). To test the REST API, use the following convention in the URL: `http://localhost:8000/_/<object name>/<nested object>`. The `_` lets the webserver know that it should not serve the web console.

The REST API can be instructed to show the value, metadata and scope contents of an object. For example, to get the metadata of a device called foo, one would type:
```
http://localhost:8000/_/Foo?meta=true
```
To see what's in the scope of Foo, type:
```
http://localhost:8000/_/Foo?scope=true
```
By default, the server will serve as if `value=true` was provided. These flags can be mixed to avoid sending multiple requests.

Note that the webserver can theoretically serve any website. It looks for its files in $(CORTEX_HOME)/interfaces/web. Modify these files to change the contents that the webserver serves. Future versions will allow for a custom path to the file resources.

