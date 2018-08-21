/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef ModelFactory_H_
#define ModelFactory_H_

#include "OAIObject.h"

#include "OAIAllView.h"
#include "OAIBody.h"
#include "OAIBranchImpl.h"
#include "OAIBranchImpllinks.h"
#include "OAIBranchImplpermissions.h"
#include "OAICauseAction.h"
#include "OAICauseUserIdCause.h"
#include "OAIClassesByClass.h"
#include "OAIClockDifference.h"
#include "OAIComputerSet.h"
#include "OAIDefaultCrumbIssuer.h"
#include "OAIDiskSpaceMonitorDescriptorDiskSpace.h"
#include "OAIEmptyChangeLogSet.h"
#include "OAIExtensionClassContainerImpl1.h"
#include "OAIExtensionClassContainerImpl1links.h"
#include "OAIExtensionClassContainerImpl1map.h"
#include "OAIExtensionClassImpl.h"
#include "OAIExtensionClassImpllinks.h"
#include "OAIFavoriteImpl.h"
#include "OAIFavoriteImpllinks.h"
#include "OAIFreeStyleBuild.h"
#include "OAIFreeStyleProject.h"
#include "OAIFreeStyleProjectactions.h"
#include "OAIFreeStyleProjecthealthReport.h"
#include "OAIGenericResource.h"
#include "OAIGithubContent.h"
#include "OAIGithubFile.h"
#include "OAIGithubOrganization.h"
#include "OAIGithubOrganizationlinks.h"
#include "OAIGithubRepositories.h"
#include "OAIGithubRepositorieslinks.h"
#include "OAIGithubRepository.h"
#include "OAIGithubRepositorylinks.h"
#include "OAIGithubRepositorypermissions.h"
#include "OAIGithubRespositoryContainer.h"
#include "OAIGithubRespositoryContainerlinks.h"
#include "OAIGithubScm.h"
#include "OAIGithubScmlinks.h"
#include "OAIHudson.h"
#include "OAIHudsonMasterComputer.h"
#include "OAIHudsonMasterComputerexecutors.h"
#include "OAIHudsonMasterComputermonitorData.h"
#include "OAIHudsonassignedLabels.h"
#include "OAIInputStepImpl.h"
#include "OAIInputStepImpllinks.h"
#include "OAILabel1.h"
#include "OAILink.h"
#include "OAIListView.h"
#include "OAIMultibranchPipeline.h"
#include "OAINullSCM.h"
#include "OAIOrganisation.h"
#include "OAIOrganisations.h"
#include "OAIPipeline.h"
#include "OAIPipelineActivities.h"
#include "OAIPipelineActivity.h"
#include "OAIPipelineActivityartifacts.h"
#include "OAIPipelineBranches.h"
#include "OAIPipelineBranchesitem.h"
#include "OAIPipelineBranchesitemlatestRun.h"
#include "OAIPipelineBranchesitempullRequest.h"
#include "OAIPipelineBranchesitempullRequestlinks.h"
#include "OAIPipelineFolderImpl.h"
#include "OAIPipelineImpl.h"
#include "OAIPipelineImpllinks.h"
#include "OAIPipelineQueue.h"
#include "OAIPipelineRun.h"
#include "OAIPipelineRunImpl.h"
#include "OAIPipelineRunImpllinks.h"
#include "OAIPipelineRunNode.h"
#include "OAIPipelineRunNodeSteps.h"
#include "OAIPipelineRunNodeedges.h"
#include "OAIPipelineRunNodes.h"
#include "OAIPipelineRunSteps.h"
#include "OAIPipelineRunartifacts.h"
#include "OAIPipelineRuns.h"
#include "OAIPipelineStepImpl.h"
#include "OAIPipelineStepImpllinks.h"
#include "OAIPipelinelatestRun.h"
#include "OAIPipelinelatestRunartifacts.h"
#include "OAIPipelines.h"
#include "OAIQueue.h"
#include "OAIQueueBlockedItem.h"
#include "OAIQueueItemImpl.h"
#include "OAIQueueLeftItem.h"
#include "OAIResponseTimeMonitorData.h"
#include "OAIScmOrganisations.h"
#include "OAIStringParameterDefinition.h"
#include "OAIStringParameterValue.h"
#include "OAISwapSpaceMonitorMemoryUsage2.h"
#include "OAIUnlabeledLoadStatistics.h"
#include "OAIUser.h"
#include "OAIUserFavorites.h"
#include "OAIUsers.h"

namespace OpenAPI {

  inline void* create(QString type) {
    if(QString("OAIAllView").compare(type) == 0) {
      return new OAIAllView();
    }
    if(QString("OAIBody").compare(type) == 0) {
      return new OAIBody();
    }
    if(QString("OAIBranchImpl").compare(type) == 0) {
      return new OAIBranchImpl();
    }
    if(QString("OAIBranchImpllinks").compare(type) == 0) {
      return new OAIBranchImpllinks();
    }
    if(QString("OAIBranchImplpermissions").compare(type) == 0) {
      return new OAIBranchImplpermissions();
    }
    if(QString("OAICauseAction").compare(type) == 0) {
      return new OAICauseAction();
    }
    if(QString("OAICauseUserIdCause").compare(type) == 0) {
      return new OAICauseUserIdCause();
    }
    if(QString("OAIClassesByClass").compare(type) == 0) {
      return new OAIClassesByClass();
    }
    if(QString("OAIClockDifference").compare(type) == 0) {
      return new OAIClockDifference();
    }
    if(QString("OAIComputerSet").compare(type) == 0) {
      return new OAIComputerSet();
    }
    if(QString("OAIDefaultCrumbIssuer").compare(type) == 0) {
      return new OAIDefaultCrumbIssuer();
    }
    if(QString("OAIDiskSpaceMonitorDescriptorDiskSpace").compare(type) == 0) {
      return new OAIDiskSpaceMonitorDescriptorDiskSpace();
    }
    if(QString("OAIEmptyChangeLogSet").compare(type) == 0) {
      return new OAIEmptyChangeLogSet();
    }
    if(QString("OAIExtensionClassContainerImpl1").compare(type) == 0) {
      return new OAIExtensionClassContainerImpl1();
    }
    if(QString("OAIExtensionClassContainerImpl1links").compare(type) == 0) {
      return new OAIExtensionClassContainerImpl1links();
    }
    if(QString("OAIExtensionClassContainerImpl1map").compare(type) == 0) {
      return new OAIExtensionClassContainerImpl1map();
    }
    if(QString("OAIExtensionClassImpl").compare(type) == 0) {
      return new OAIExtensionClassImpl();
    }
    if(QString("OAIExtensionClassImpllinks").compare(type) == 0) {
      return new OAIExtensionClassImpllinks();
    }
    if(QString("OAIFavoriteImpl").compare(type) == 0) {
      return new OAIFavoriteImpl();
    }
    if(QString("OAIFavoriteImpllinks").compare(type) == 0) {
      return new OAIFavoriteImpllinks();
    }
    if(QString("OAIFreeStyleBuild").compare(type) == 0) {
      return new OAIFreeStyleBuild();
    }
    if(QString("OAIFreeStyleProject").compare(type) == 0) {
      return new OAIFreeStyleProject();
    }
    if(QString("OAIFreeStyleProjectactions").compare(type) == 0) {
      return new OAIFreeStyleProjectactions();
    }
    if(QString("OAIFreeStyleProjecthealthReport").compare(type) == 0) {
      return new OAIFreeStyleProjecthealthReport();
    }
    if(QString("OAIGenericResource").compare(type) == 0) {
      return new OAIGenericResource();
    }
    if(QString("OAIGithubContent").compare(type) == 0) {
      return new OAIGithubContent();
    }
    if(QString("OAIGithubFile").compare(type) == 0) {
      return new OAIGithubFile();
    }
    if(QString("OAIGithubOrganization").compare(type) == 0) {
      return new OAIGithubOrganization();
    }
    if(QString("OAIGithubOrganizationlinks").compare(type) == 0) {
      return new OAIGithubOrganizationlinks();
    }
    if(QString("OAIGithubRepositories").compare(type) == 0) {
      return new OAIGithubRepositories();
    }
    if(QString("OAIGithubRepositorieslinks").compare(type) == 0) {
      return new OAIGithubRepositorieslinks();
    }
    if(QString("OAIGithubRepository").compare(type) == 0) {
      return new OAIGithubRepository();
    }
    if(QString("OAIGithubRepositorylinks").compare(type) == 0) {
      return new OAIGithubRepositorylinks();
    }
    if(QString("OAIGithubRepositorypermissions").compare(type) == 0) {
      return new OAIGithubRepositorypermissions();
    }
    if(QString("OAIGithubRespositoryContainer").compare(type) == 0) {
      return new OAIGithubRespositoryContainer();
    }
    if(QString("OAIGithubRespositoryContainerlinks").compare(type) == 0) {
      return new OAIGithubRespositoryContainerlinks();
    }
    if(QString("OAIGithubScm").compare(type) == 0) {
      return new OAIGithubScm();
    }
    if(QString("OAIGithubScmlinks").compare(type) == 0) {
      return new OAIGithubScmlinks();
    }
    if(QString("OAIHudson").compare(type) == 0) {
      return new OAIHudson();
    }
    if(QString("OAIHudsonMasterComputer").compare(type) == 0) {
      return new OAIHudsonMasterComputer();
    }
    if(QString("OAIHudsonMasterComputerexecutors").compare(type) == 0) {
      return new OAIHudsonMasterComputerexecutors();
    }
    if(QString("OAIHudsonMasterComputermonitorData").compare(type) == 0) {
      return new OAIHudsonMasterComputermonitorData();
    }
    if(QString("OAIHudsonassignedLabels").compare(type) == 0) {
      return new OAIHudsonassignedLabels();
    }
    if(QString("OAIInputStepImpl").compare(type) == 0) {
      return new OAIInputStepImpl();
    }
    if(QString("OAIInputStepImpllinks").compare(type) == 0) {
      return new OAIInputStepImpllinks();
    }
    if(QString("OAILabel1").compare(type) == 0) {
      return new OAILabel1();
    }
    if(QString("OAILink").compare(type) == 0) {
      return new OAILink();
    }
    if(QString("OAIListView").compare(type) == 0) {
      return new OAIListView();
    }
    if(QString("OAIMultibranchPipeline").compare(type) == 0) {
      return new OAIMultibranchPipeline();
    }
    if(QString("OAINullSCM").compare(type) == 0) {
      return new OAINullSCM();
    }
    if(QString("OAIOrganisation").compare(type) == 0) {
      return new OAIOrganisation();
    }
    if(QString("OAIOrganisations").compare(type) == 0) {
      return new OAIOrganisations();
    }
    if(QString("OAIPipeline").compare(type) == 0) {
      return new OAIPipeline();
    }
    if(QString("OAIPipelineActivities").compare(type) == 0) {
      return new OAIPipelineActivities();
    }
    if(QString("OAIPipelineActivity").compare(type) == 0) {
      return new OAIPipelineActivity();
    }
    if(QString("OAIPipelineActivityartifacts").compare(type) == 0) {
      return new OAIPipelineActivityartifacts();
    }
    if(QString("OAIPipelineBranches").compare(type) == 0) {
      return new OAIPipelineBranches();
    }
    if(QString("OAIPipelineBranchesitem").compare(type) == 0) {
      return new OAIPipelineBranchesitem();
    }
    if(QString("OAIPipelineBranchesitemlatestRun").compare(type) == 0) {
      return new OAIPipelineBranchesitemlatestRun();
    }
    if(QString("OAIPipelineBranchesitempullRequest").compare(type) == 0) {
      return new OAIPipelineBranchesitempullRequest();
    }
    if(QString("OAIPipelineBranchesitempullRequestlinks").compare(type) == 0) {
      return new OAIPipelineBranchesitempullRequestlinks();
    }
    if(QString("OAIPipelineFolderImpl").compare(type) == 0) {
      return new OAIPipelineFolderImpl();
    }
    if(QString("OAIPipelineImpl").compare(type) == 0) {
      return new OAIPipelineImpl();
    }
    if(QString("OAIPipelineImpllinks").compare(type) == 0) {
      return new OAIPipelineImpllinks();
    }
    if(QString("OAIPipelineQueue").compare(type) == 0) {
      return new OAIPipelineQueue();
    }
    if(QString("OAIPipelineRun").compare(type) == 0) {
      return new OAIPipelineRun();
    }
    if(QString("OAIPipelineRunImpl").compare(type) == 0) {
      return new OAIPipelineRunImpl();
    }
    if(QString("OAIPipelineRunImpllinks").compare(type) == 0) {
      return new OAIPipelineRunImpllinks();
    }
    if(QString("OAIPipelineRunNode").compare(type) == 0) {
      return new OAIPipelineRunNode();
    }
    if(QString("OAIPipelineRunNodeSteps").compare(type) == 0) {
      return new OAIPipelineRunNodeSteps();
    }
    if(QString("OAIPipelineRunNodeedges").compare(type) == 0) {
      return new OAIPipelineRunNodeedges();
    }
    if(QString("OAIPipelineRunNodes").compare(type) == 0) {
      return new OAIPipelineRunNodes();
    }
    if(QString("OAIPipelineRunSteps").compare(type) == 0) {
      return new OAIPipelineRunSteps();
    }
    if(QString("OAIPipelineRunartifacts").compare(type) == 0) {
      return new OAIPipelineRunartifacts();
    }
    if(QString("OAIPipelineRuns").compare(type) == 0) {
      return new OAIPipelineRuns();
    }
    if(QString("OAIPipelineStepImpl").compare(type) == 0) {
      return new OAIPipelineStepImpl();
    }
    if(QString("OAIPipelineStepImpllinks").compare(type) == 0) {
      return new OAIPipelineStepImpllinks();
    }
    if(QString("OAIPipelinelatestRun").compare(type) == 0) {
      return new OAIPipelinelatestRun();
    }
    if(QString("OAIPipelinelatestRunartifacts").compare(type) == 0) {
      return new OAIPipelinelatestRunartifacts();
    }
    if(QString("OAIPipelines").compare(type) == 0) {
      return new OAIPipelines();
    }
    if(QString("OAIQueue").compare(type) == 0) {
      return new OAIQueue();
    }
    if(QString("OAIQueueBlockedItem").compare(type) == 0) {
      return new OAIQueueBlockedItem();
    }
    if(QString("OAIQueueItemImpl").compare(type) == 0) {
      return new OAIQueueItemImpl();
    }
    if(QString("OAIQueueLeftItem").compare(type) == 0) {
      return new OAIQueueLeftItem();
    }
    if(QString("OAIResponseTimeMonitorData").compare(type) == 0) {
      return new OAIResponseTimeMonitorData();
    }
    if(QString("OAIScmOrganisations").compare(type) == 0) {
      return new OAIScmOrganisations();
    }
    if(QString("OAIStringParameterDefinition").compare(type) == 0) {
      return new OAIStringParameterDefinition();
    }
    if(QString("OAIStringParameterValue").compare(type) == 0) {
      return new OAIStringParameterValue();
    }
    if(QString("OAISwapSpaceMonitorMemoryUsage2").compare(type) == 0) {
      return new OAISwapSpaceMonitorMemoryUsage2();
    }
    if(QString("OAIUnlabeledLoadStatistics").compare(type) == 0) {
      return new OAIUnlabeledLoadStatistics();
    }
    if(QString("OAIUser").compare(type) == 0) {
      return new OAIUser();
    }
    if(QString("OAIUserFavorites").compare(type) == 0) {
      return new OAIUserFavorites();
    }
    if(QString("OAIUsers").compare(type) == 0) {
      return new OAIUsers();
    }
    
    return nullptr;
  }

  inline void* create(QString json, QString type) {
    if(type.startsWith("QString")) {
      return new QString();
    }    
    auto val = static_cast<OAIObject*>(create(type));
    if(val != nullptr) {
      return val->fromJson(json);
    }
    return nullptr;
  }

}

#endif /* ModelFactory_H_ */
