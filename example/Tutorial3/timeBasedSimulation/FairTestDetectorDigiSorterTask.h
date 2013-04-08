/*
 * FairTestDetectorDigiSorterTask.h
 *
 *  Created on: Sep 9, 2011
 *      Author: stockman
 */

#ifndef FairTestDetectorDigiSorterTask_H_
#define FairTestDetectorDigiSorterTask_H_

#include <FairRingSorterTask.h>
#include <FairRingSorter.h>

class FairTestDetectorDigiSorterTask: public FairRingSorterTask
{
  public:
    FairTestDetectorDigiSorterTask();
    FairTestDetectorDigiSorterTask(const char* name):FairRingSorterTask(name) {};
    FairTestDetectorDigiSorterTask(Int_t numberOfCells, Double_t widthOfCells, TString inputBranch, TString outputBranch, TString folderName):
      FairRingSorterTask(numberOfCells, widthOfCells, inputBranch, outputBranch, folderName) {};

    virtual ~FairTestDetectorDigiSorterTask();

    virtual void AddNewDataToTClonesArray(FairTimeStamp* data);
    virtual FairRingSorter* InitSorter(Int_t numberOfCells, Double_t widthOfCells) const;

    ClassDef(FairTestDetectorDigiSorterTask, 1);
};

#endif /* FairTestDetectorDigiSorterTask_H_ */