TelemetryBuild.out: TelemetryClientPort.o TelemetryDriverPort.o PackageJSON.o PipelineFormat.o -lArduinoJson-6.16.1
		g++ -o TelemetryBuild TelemetryClientPort.o TelemetryDriverPort.o PackageJSON.o PipelineFormat.o

TelemetryClientPort.o: CoreTelemetryClientPort.h
		g++ -c CoreTelemetryClientPort.h

TelemetryDriverPort.o: CoreTelemetryDriverPort.h
		g++ -c CoreTelemetryDriverPort.h

PackageJSON.o: PACKAGE_JSON.cpp PACKAGE_JSON.h
		g++ -c PACKAGE_JSON.cpp PACKAGE_JSON.h

PipelineFormat.o: PipelineFormat.h
	g++ -c PipelineFormat.h