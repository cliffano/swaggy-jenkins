# Rust API client for openapi

Jenkins API clients generated from Swagger / Open API specification

## Overview
This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project.  By using the [openapi-spec](https://openapis.org) from a remote server, you can easily generate an API client.

- API version: 1.0.0
- Package version: 1.0.0
- Build package: org.openapitools.codegen.languages.RustClientCodegen
For more information, please visit [http://github.com/cliffano/swaggy-jenkins](http://github.com/cliffano/swaggy-jenkins)

## Installation
Put the package under your project folder and add the following in import:
```
    "./openapi"
```

## Documentation for API Endpoints

All URIs are relative to *http://localhost*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*BlueOceanApi* | [**delete_pipeline_queue_item**](docs/BlueOceanApi.md#delete_pipeline_queue_item) | **Delete** /blue/rest/organizations/{organization}/pipelines/{pipeline}/queue/{queue} | 
*BlueOceanApi* | [**get_authenticated_user**](docs/BlueOceanApi.md#get_authenticated_user) | **Get** /blue/rest/organizations/{organization}/user/ | 
*BlueOceanApi* | [**get_classes**](docs/BlueOceanApi.md#get_classes) | **Get** /blue/rest/classes/{class} | 
*BlueOceanApi* | [**get_json_web_key**](docs/BlueOceanApi.md#get_json_web_key) | **Get** /jwt-auth/jwks/{key} | 
*BlueOceanApi* | [**get_json_web_token**](docs/BlueOceanApi.md#get_json_web_token) | **Get** /jwt-auth/token | 
*BlueOceanApi* | [**get_organisation**](docs/BlueOceanApi.md#get_organisation) | **Get** /blue/rest/organizations/{organization} | 
*BlueOceanApi* | [**get_organisations**](docs/BlueOceanApi.md#get_organisations) | **Get** /blue/rest/organizations/ | 
*BlueOceanApi* | [**get_pipeline**](docs/BlueOceanApi.md#get_pipeline) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline} | 
*BlueOceanApi* | [**get_pipeline_activities**](docs/BlueOceanApi.md#get_pipeline_activities) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/activities | 
*BlueOceanApi* | [**get_pipeline_branch**](docs/BlueOceanApi.md#get_pipeline_branch) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/branches/{branch}/ | 
*BlueOceanApi* | [**get_pipeline_branch_run**](docs/BlueOceanApi.md#get_pipeline_branch_run) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/branches/{branch}/runs/{run} | 
*BlueOceanApi* | [**get_pipeline_branches**](docs/BlueOceanApi.md#get_pipeline_branches) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/branches | 
*BlueOceanApi* | [**get_pipeline_folder**](docs/BlueOceanApi.md#get_pipeline_folder) | **Get** /blue/rest/organizations/{organization}/pipelines/{folder}/ | 
*BlueOceanApi* | [**get_pipeline_folder_pipeline**](docs/BlueOceanApi.md#get_pipeline_folder_pipeline) | **Get** /blue/rest/organizations/{organization}/pipelines/{folder}/pipelines/{pipeline} | 
*BlueOceanApi* | [**get_pipeline_queue**](docs/BlueOceanApi.md#get_pipeline_queue) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/queue | 
*BlueOceanApi* | [**get_pipeline_run**](docs/BlueOceanApi.md#get_pipeline_run) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run} | 
*BlueOceanApi* | [**get_pipeline_run_log**](docs/BlueOceanApi.md#get_pipeline_run_log) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/log | 
*BlueOceanApi* | [**get_pipeline_run_node**](docs/BlueOceanApi.md#get_pipeline_run_node) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node} | 
*BlueOceanApi* | [**get_pipeline_run_node_step**](docs/BlueOceanApi.md#get_pipeline_run_node_step) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step} | 
*BlueOceanApi* | [**get_pipeline_run_node_step_log**](docs/BlueOceanApi.md#get_pipeline_run_node_step_log) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step}/log | 
*BlueOceanApi* | [**get_pipeline_run_node_steps**](docs/BlueOceanApi.md#get_pipeline_run_node_steps) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps | 
*BlueOceanApi* | [**get_pipeline_run_nodes**](docs/BlueOceanApi.md#get_pipeline_run_nodes) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes | 
*BlueOceanApi* | [**get_pipeline_runs**](docs/BlueOceanApi.md#get_pipeline_runs) | **Get** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs | 
*BlueOceanApi* | [**get_pipelines**](docs/BlueOceanApi.md#get_pipelines) | **Get** /blue/rest/organizations/{organization}/pipelines/ | 
*BlueOceanApi* | [**get_scm**](docs/BlueOceanApi.md#get_scm) | **Get** /blue/rest/organizations/{organization}/scm/{scm} | 
*BlueOceanApi* | [**get_scm_organisation_repositories**](docs/BlueOceanApi.md#get_scm_organisation_repositories) | **Get** /blue/rest/organizations/{organization}/scm/{scm}/organizations/{scmOrganisation}/repositories | 
*BlueOceanApi* | [**get_scm_organisation_repository**](docs/BlueOceanApi.md#get_scm_organisation_repository) | **Get** /blue/rest/organizations/{organization}/scm/{scm}/organizations/{scmOrganisation}/repositories/{repository} | 
*BlueOceanApi* | [**get_scm_organisations**](docs/BlueOceanApi.md#get_scm_organisations) | **Get** /blue/rest/organizations/{organization}/scm/{scm}/organizations | 
*BlueOceanApi* | [**get_user**](docs/BlueOceanApi.md#get_user) | **Get** /blue/rest/organizations/{organization}/users/{user} | 
*BlueOceanApi* | [**get_user_favorites**](docs/BlueOceanApi.md#get_user_favorites) | **Get** /blue/rest/users/{user}/favorites | 
*BlueOceanApi* | [**get_users**](docs/BlueOceanApi.md#get_users) | **Get** /blue/rest/organizations/{organization}/users/ | 
*BlueOceanApi* | [**post_pipeline_run**](docs/BlueOceanApi.md#post_pipeline_run) | **Post** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/replay | 
*BlueOceanApi* | [**post_pipeline_runs**](docs/BlueOceanApi.md#post_pipeline_runs) | **Post** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs | 
*BlueOceanApi* | [**put_pipeline_favorite**](docs/BlueOceanApi.md#put_pipeline_favorite) | **Put** /blue/rest/organizations/{organization}/pipelines/{pipeline}/favorite | 
*BlueOceanApi* | [**put_pipeline_run**](docs/BlueOceanApi.md#put_pipeline_run) | **Put** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/stop | 
*BlueOceanApi* | [**search**](docs/BlueOceanApi.md#search) | **Get** /blue/rest/search/ | 
*BlueOceanApi* | [**search_classes**](docs/BlueOceanApi.md#search_classes) | **Get** /blue/rest/classes/ | 
*RemoteAccessApi* | [**get_computer**](docs/RemoteAccessApi.md#get_computer) | **Get** /computer/api/json | 
*RemoteAccessApi* | [**get_crumb**](docs/RemoteAccessApi.md#get_crumb) | **Get** /crumbIssuer/api/json | 
*RemoteAccessApi* | [**get_jenkins**](docs/RemoteAccessApi.md#get_jenkins) | **Get** /api/json | 
*RemoteAccessApi* | [**get_job**](docs/RemoteAccessApi.md#get_job) | **Get** /job/{name}/api/json | 
*RemoteAccessApi* | [**get_job_config**](docs/RemoteAccessApi.md#get_job_config) | **Get** /job/{name}/config.xml | 
*RemoteAccessApi* | [**get_job_last_build**](docs/RemoteAccessApi.md#get_job_last_build) | **Get** /job/{name}/lastBuild/api/json | 
*RemoteAccessApi* | [**get_job_progressive_text**](docs/RemoteAccessApi.md#get_job_progressive_text) | **Get** /job/{name}/{number}/logText/progressiveText | 
*RemoteAccessApi* | [**get_queue**](docs/RemoteAccessApi.md#get_queue) | **Get** /queue/api/json | 
*RemoteAccessApi* | [**get_queue_item**](docs/RemoteAccessApi.md#get_queue_item) | **Get** /queue/item/{number}/api/json | 
*RemoteAccessApi* | [**get_view**](docs/RemoteAccessApi.md#get_view) | **Get** /view/{name}/api/json | 
*RemoteAccessApi* | [**get_view_config**](docs/RemoteAccessApi.md#get_view_config) | **Get** /view/{name}/config.xml | 
*RemoteAccessApi* | [**head_jenkins**](docs/RemoteAccessApi.md#head_jenkins) | **Head** /api/json | 
*RemoteAccessApi* | [**post_create_item**](docs/RemoteAccessApi.md#post_create_item) | **Post** /createItem | 
*RemoteAccessApi* | [**post_create_view**](docs/RemoteAccessApi.md#post_create_view) | **Post** /createView | 
*RemoteAccessApi* | [**post_job_build**](docs/RemoteAccessApi.md#post_job_build) | **Post** /job/{name}/build | 
*RemoteAccessApi* | [**post_job_config**](docs/RemoteAccessApi.md#post_job_config) | **Post** /job/{name}/config.xml | 
*RemoteAccessApi* | [**post_job_delete**](docs/RemoteAccessApi.md#post_job_delete) | **Post** /job/{name}/doDelete | 
*RemoteAccessApi* | [**post_job_disable**](docs/RemoteAccessApi.md#post_job_disable) | **Post** /job/{name}/disable | 
*RemoteAccessApi* | [**post_job_enable**](docs/RemoteAccessApi.md#post_job_enable) | **Post** /job/{name}/enable | 
*RemoteAccessApi* | [**post_job_last_build_stop**](docs/RemoteAccessApi.md#post_job_last_build_stop) | **Post** /job/{name}/lastBuild/stop | 
*RemoteAccessApi* | [**post_view_config**](docs/RemoteAccessApi.md#post_view_config) | **Post** /view/{name}/config.xml | 


## Documentation For Models

 - [AllView](docs/AllView.md)
 - [Body](docs/Body.md)
 - [BranchImpl](docs/BranchImpl.md)
 - [BranchImpllinks](docs/BranchImpllinks.md)
 - [BranchImplpermissions](docs/BranchImplpermissions.md)
 - [CauseAction](docs/CauseAction.md)
 - [CauseUserIdCause](docs/CauseUserIdCause.md)
 - [ClassesByClass](docs/ClassesByClass.md)
 - [ClockDifference](docs/ClockDifference.md)
 - [ComputerSet](docs/ComputerSet.md)
 - [DefaultCrumbIssuer](docs/DefaultCrumbIssuer.md)
 - [DiskSpaceMonitorDescriptorDiskSpace](docs/DiskSpaceMonitorDescriptorDiskSpace.md)
 - [EmptyChangeLogSet](docs/EmptyChangeLogSet.md)
 - [ExtensionClassContainerImpl1](docs/ExtensionClassContainerImpl1.md)
 - [ExtensionClassContainerImpl1links](docs/ExtensionClassContainerImpl1links.md)
 - [ExtensionClassContainerImpl1map](docs/ExtensionClassContainerImpl1map.md)
 - [ExtensionClassImpl](docs/ExtensionClassImpl.md)
 - [ExtensionClassImpllinks](docs/ExtensionClassImpllinks.md)
 - [FavoriteImpl](docs/FavoriteImpl.md)
 - [FavoriteImpllinks](docs/FavoriteImpllinks.md)
 - [FreeStyleBuild](docs/FreeStyleBuild.md)
 - [FreeStyleProject](docs/FreeStyleProject.md)
 - [FreeStyleProjectactions](docs/FreeStyleProjectactions.md)
 - [FreeStyleProjecthealthReport](docs/FreeStyleProjecthealthReport.md)
 - [GenericResource](docs/GenericResource.md)
 - [GithubContent](docs/GithubContent.md)
 - [GithubFile](docs/GithubFile.md)
 - [GithubOrganization](docs/GithubOrganization.md)
 - [GithubOrganizationlinks](docs/GithubOrganizationlinks.md)
 - [GithubRepositories](docs/GithubRepositories.md)
 - [GithubRepositorieslinks](docs/GithubRepositorieslinks.md)
 - [GithubRepository](docs/GithubRepository.md)
 - [GithubRepositorylinks](docs/GithubRepositorylinks.md)
 - [GithubRepositorypermissions](docs/GithubRepositorypermissions.md)
 - [GithubRespositoryContainer](docs/GithubRespositoryContainer.md)
 - [GithubRespositoryContainerlinks](docs/GithubRespositoryContainerlinks.md)
 - [GithubScm](docs/GithubScm.md)
 - [GithubScmlinks](docs/GithubScmlinks.md)
 - [Hudson](docs/Hudson.md)
 - [HudsonMasterComputer](docs/HudsonMasterComputer.md)
 - [HudsonMasterComputerexecutors](docs/HudsonMasterComputerexecutors.md)
 - [HudsonMasterComputermonitorData](docs/HudsonMasterComputermonitorData.md)
 - [HudsonassignedLabels](docs/HudsonassignedLabels.md)
 - [InputStepImpl](docs/InputStepImpl.md)
 - [InputStepImpllinks](docs/InputStepImpllinks.md)
 - [Label1](docs/Label1.md)
 - [Link](docs/Link.md)
 - [ListView](docs/ListView.md)
 - [MultibranchPipeline](docs/MultibranchPipeline.md)
 - [NullScm](docs/NullScm.md)
 - [Organisation](docs/Organisation.md)
 - [Organisations](docs/Organisations.md)
 - [Pipeline](docs/Pipeline.md)
 - [PipelineActivities](docs/PipelineActivities.md)
 - [PipelineActivity](docs/PipelineActivity.md)
 - [PipelineActivityartifacts](docs/PipelineActivityartifacts.md)
 - [PipelineBranches](docs/PipelineBranches.md)
 - [PipelineBranchesitem](docs/PipelineBranchesitem.md)
 - [PipelineBranchesitemlatestRun](docs/PipelineBranchesitemlatestRun.md)
 - [PipelineBranchesitempullRequest](docs/PipelineBranchesitempullRequest.md)
 - [PipelineBranchesitempullRequestlinks](docs/PipelineBranchesitempullRequestlinks.md)
 - [PipelineFolderImpl](docs/PipelineFolderImpl.md)
 - [PipelineImpl](docs/PipelineImpl.md)
 - [PipelineImpllinks](docs/PipelineImpllinks.md)
 - [PipelineQueue](docs/PipelineQueue.md)
 - [PipelineRun](docs/PipelineRun.md)
 - [PipelineRunImpl](docs/PipelineRunImpl.md)
 - [PipelineRunImpllinks](docs/PipelineRunImpllinks.md)
 - [PipelineRunNode](docs/PipelineRunNode.md)
 - [PipelineRunNodeSteps](docs/PipelineRunNodeSteps.md)
 - [PipelineRunNodeedges](docs/PipelineRunNodeedges.md)
 - [PipelineRunNodes](docs/PipelineRunNodes.md)
 - [PipelineRunSteps](docs/PipelineRunSteps.md)
 - [PipelineRunartifacts](docs/PipelineRunartifacts.md)
 - [PipelineRuns](docs/PipelineRuns.md)
 - [PipelineStepImpl](docs/PipelineStepImpl.md)
 - [PipelineStepImpllinks](docs/PipelineStepImpllinks.md)
 - [PipelinelatestRun](docs/PipelinelatestRun.md)
 - [PipelinelatestRunartifacts](docs/PipelinelatestRunartifacts.md)
 - [Pipelines](docs/Pipelines.md)
 - [Queue](docs/Queue.md)
 - [QueueBlockedItem](docs/QueueBlockedItem.md)
 - [QueueItemImpl](docs/QueueItemImpl.md)
 - [QueueLeftItem](docs/QueueLeftItem.md)
 - [ResponseTimeMonitorData](docs/ResponseTimeMonitorData.md)
 - [ScmOrganisations](docs/ScmOrganisations.md)
 - [StringParameterDefinition](docs/StringParameterDefinition.md)
 - [StringParameterValue](docs/StringParameterValue.md)
 - [SwapSpaceMonitorMemoryUsage2](docs/SwapSpaceMonitorMemoryUsage2.md)
 - [UnlabeledLoadStatistics](docs/UnlabeledLoadStatistics.md)
 - [User](docs/User.md)
 - [UserFavorites](docs/UserFavorites.md)
 - [Users](docs/Users.md)


## Documentation For Authorization

## jenkins_auth
- **Type**: HTTP basic authentication

Example
```
	auth := context.WithValue(context.TODO(), sw.ContextBasicAuth, sw.BasicAuth{
		UserName: "username",
		Password: "password",
	})
    r, err := client.Service.Operation(auth, args)
```
## jwt_auth
- **Type**: API key 

Example
```
	auth := context.WithValue(context.TODO(), sw.ContextAPIKey, sw.APIKey{
		Key: "APIKEY",
		Prefix: "Bearer", // Omit if not necessary.
	})
    r, err := client.Service.Operation(auth, args)
```

## Author

blah@cliffano.com
