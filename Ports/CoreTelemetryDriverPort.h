/*Copyright (c) 2020 AUAC-Technologies

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
//Author - Nyameaama Gambrah

#ifndef CORE_TELEMETRY_DRIVER_PORT
#define CORE_TELEMETRY_DRIVER_PORT

#include"../AUAC_TYPEDEFS/AUAC_TYPES.h"
#include"../Pipeline/Pipeline-Format.h"

//Object
PIPELINE_FORMAT *tempObject = new PIPELINE_FORMAT();

class CoreTelemetryDriverPort {
    public:
        //Standard Error log 
        AUAC_UBASE_8 ERROR_LOG(AUAC_BASE_STRING code){}

        //Standard Data log
        AUAC_UBASE_8 STANDARD_DATA_LOG(AUAC_BASE_STRING code){}

        //Destructor 
        ~CoreTelemetryDriverPort(){delete tempObject;}

};
#endif //CORE_TELEMETRY_DRIVER_PORT