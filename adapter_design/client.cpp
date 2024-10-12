#include<iostream>

using namespace std;

class XmlData{
    private:
        string data;
    public:
        XmlData(string data){
            this->data = data;
        }
        string getXmldata(){
            return data;
        }
};

class DataAnalyseTool{
    string jsonData;
    public:
        DataAnalyseTool(){}
        DataAnalyseTool(string jsonData){
            this->jsonData = jsonData;
        }
        virtual void analyseData(){
            cout<<"DataAnalyseTool analyseData: "<<jsonData<<endl;
        };
};

class Adapter: public DataAnalyseTool{
    private:
        XmlData* xmlData;
        string jsonData;
    public:
        Adapter(XmlData* xmlData){
            this->xmlData = xmlData;
            convertData();
        }
        void convertData(){
            cout<<"Converting XML data to json data"<<endl;
            jsonData = xmlData->getXmldata();
        }
        void analyseData() override{
            cout<<"Adapter analyseData: "<<jsonData<<endl;
        }
};

class Client{
    public:
        void process(DataAnalyseTool* dataAnalyseTool){
            dataAnalyseTool->analyseData();
        }
};

int main(){
    XmlData* xmldata = new XmlData("my xml data");
    // DataAnalyseTool should be used here
    DataAnalyseTool *dataAnalyseTool = new Adapter(xmldata);

    Client *client = new Client();
    client->process(dataAnalyseTool);
    return 0;
}