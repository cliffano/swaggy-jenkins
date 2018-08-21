/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (3.2.1-SNAPSHOT).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.api;

import org.openapitools.model.FreeStyleBuild;
import org.openapitools.model.FreeStyleProject;
import io.swagger.annotations.*;
import org.springframework.http.HttpStatus;
import org.springframework.http.MediaType;
import org.springframework.http.ResponseEntity;
import org.springframework.validation.annotation.Validated;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestHeader;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RequestPart;
import org.springframework.web.context.request.NativeWebRequest;
import org.springframework.web.multipart.MultipartFile;

import javax.validation.Valid;
import javax.validation.constraints.*;
import java.util.List;
import java.util.Map;
import java.util.Optional;
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2018-08-21T02:15:19.934Z[GMT]")

@Validated
@Api(value = "job", description = "the job API")
public interface JobApi {

    default Optional<NativeWebRequest> getRequest() {
        return Optional.empty();
    }

    @ApiOperation(value = "", nickname = "getJob", notes = "Retrieve job details", response = FreeStyleProject.class, authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully retrieved job details", response = FreeStyleProject.class),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/api/json",
        produces = { "application/json" }, 
        method = RequestMethod.GET)
    default ResponseEntity<FreeStyleProject> getJob(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    ApiUtil.setExampleResponse(request, "application/json", "{  \"color\" : \"color\",  \"displayName\" : \"displayName\",  \"lastSuccessfulBuild\" : {    \"queueId\" : 5,    \"displayName\" : \"displayName\",    \"keepLog\" : true,    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"estimatedDuration\" : 5,    \"url\" : \"url\",    \"building\" : true,    \"changeSet\" : {      \"kind\" : \"kind\",      \"_class\" : \"_class\"    },    \"duration\" : 1,    \"result\" : \"result\",    \"number\" : 6,    \"executor\" : \"executor\",    \"builtOn\" : \"builtOn\",    \"_class\" : \"_class\",    \"id\" : \"id\",    \"actions\" : [ {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    }, {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    } ],    \"timestamp\" : 2  },  \"description\" : \"description\",  \"fullDisplayName\" : \"fullDisplayName\",  \"lastUnstableBuild\" : \"lastUnstableBuild\",  \"queueItem\" : \"queueItem\",  \"buildable\" : true,  \"firstBuild\" : {    \"queueId\" : 5,    \"displayName\" : \"displayName\",    \"keepLog\" : true,    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"estimatedDuration\" : 5,    \"url\" : \"url\",    \"building\" : true,    \"changeSet\" : {      \"kind\" : \"kind\",      \"_class\" : \"_class\"    },    \"duration\" : 1,    \"result\" : \"result\",    \"number\" : 6,    \"executor\" : \"executor\",    \"builtOn\" : \"builtOn\",    \"_class\" : \"_class\",    \"id\" : \"id\",    \"actions\" : [ {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    }, {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    } ],    \"timestamp\" : 2  },  \"lastFailedBuild\" : \"lastFailedBuild\",  \"lastBuild\" : {    \"queueId\" : 5,    \"displayName\" : \"displayName\",    \"keepLog\" : true,    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"estimatedDuration\" : 5,    \"url\" : \"url\",    \"building\" : true,    \"changeSet\" : {      \"kind\" : \"kind\",      \"_class\" : \"_class\"    },    \"duration\" : 1,    \"result\" : \"result\",    \"number\" : 6,    \"executor\" : \"executor\",    \"builtOn\" : \"builtOn\",    \"_class\" : \"_class\",    \"id\" : \"id\",    \"actions\" : [ {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    }, {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    } ],    \"timestamp\" : 2  },  \"nextBuildNumber\" : 9,  \"builds\" : [ {    \"queueId\" : 5,    \"displayName\" : \"displayName\",    \"keepLog\" : true,    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"estimatedDuration\" : 5,    \"url\" : \"url\",    \"building\" : true,    \"changeSet\" : {      \"kind\" : \"kind\",      \"_class\" : \"_class\"    },    \"duration\" : 1,    \"result\" : \"result\",    \"number\" : 6,    \"executor\" : \"executor\",    \"builtOn\" : \"builtOn\",    \"_class\" : \"_class\",    \"id\" : \"id\",    \"actions\" : [ {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    }, {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    } ],    \"timestamp\" : 2  }, {    \"queueId\" : 5,    \"displayName\" : \"displayName\",    \"keepLog\" : true,    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"estimatedDuration\" : 5,    \"url\" : \"url\",    \"building\" : true,    \"changeSet\" : {      \"kind\" : \"kind\",      \"_class\" : \"_class\"    },    \"duration\" : 1,    \"result\" : \"result\",    \"number\" : 6,    \"executor\" : \"executor\",    \"builtOn\" : \"builtOn\",    \"_class\" : \"_class\",    \"id\" : \"id\",    \"actions\" : [ {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    }, {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    } ],    \"timestamp\" : 2  } ],  \"scm\" : {    \"_class\" : \"_class\"  },  \"keepDependencies\" : true,  \"displayNameOrNull\" : \"displayNameOrNull\",  \"inQueue\" : true,  \"lastCompletedBuild\" : {    \"queueId\" : 5,    \"displayName\" : \"displayName\",    \"keepLog\" : true,    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"estimatedDuration\" : 5,    \"url\" : \"url\",    \"building\" : true,    \"changeSet\" : {      \"kind\" : \"kind\",      \"_class\" : \"_class\"    },    \"duration\" : 1,    \"result\" : \"result\",    \"number\" : 6,    \"executor\" : \"executor\",    \"builtOn\" : \"builtOn\",    \"_class\" : \"_class\",    \"id\" : \"id\",    \"actions\" : [ {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    }, {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    } ],    \"timestamp\" : 2  },  \"fullName\" : \"fullName\",  \"healthReport\" : [ {    \"score\" : 7,    \"description\" : \"description\",    \"iconClassName\" : \"iconClassName\",    \"iconUrl\" : \"iconUrl\",    \"_class\" : \"_class\"  }, {    \"score\" : 7,    \"description\" : \"description\",    \"iconClassName\" : \"iconClassName\",    \"iconUrl\" : \"iconUrl\",    \"_class\" : \"_class\"  } ],  \"lastStableBuild\" : {    \"queueId\" : 5,    \"displayName\" : \"displayName\",    \"keepLog\" : true,    \"description\" : \"description\",    \"fullDisplayName\" : \"fullDisplayName\",    \"estimatedDuration\" : 5,    \"url\" : \"url\",    \"building\" : true,    \"changeSet\" : {      \"kind\" : \"kind\",      \"_class\" : \"_class\"    },    \"duration\" : 1,    \"result\" : \"result\",    \"number\" : 6,    \"executor\" : \"executor\",    \"builtOn\" : \"builtOn\",    \"_class\" : \"_class\",    \"id\" : \"id\",    \"actions\" : [ {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    }, {      \"causes\" : [ {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      }, {        \"_class\" : \"_class\",        \"shortDescription\" : \"shortDescription\",        \"userName\" : \"userName\",        \"userId\" : \"userId\"      } ],      \"_class\" : \"_class\"    } ],    \"timestamp\" : 2  },  \"lastUnsuccessfulBuild\" : \"lastUnsuccessfulBuild\",  \"url\" : \"url\",  \"concurrentBuild\" : true,  \"name\" : \"name\",  \"_class\" : \"_class\",  \"actions\" : [ {    \"_class\" : \"_class\"  }, {    \"_class\" : \"_class\"  } ]}");
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "getJobConfig", notes = "Retrieve job configuration", response = String.class, authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully retrieved job configuration in config.xml format", response = String.class),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/config.xml",
        produces = { "text/xml" }, 
        method = RequestMethod.GET)
    default ResponseEntity<String> getJobConfig(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "getJobLastBuild", notes = "Retrieve job's last build details", response = FreeStyleBuild.class, authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully retrieved job's last build details", response = FreeStyleBuild.class),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/lastBuild/api/json",
        produces = { "application/json" }, 
        method = RequestMethod.GET)
    default ResponseEntity<FreeStyleBuild> getJobLastBuild(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name) {
        getRequest().ifPresent(request -> {
            for (MediaType mediaType: MediaType.parseMediaTypes(request.getHeader("Accept"))) {
                if (mediaType.isCompatibleWith(MediaType.valueOf("application/json"))) {
                    ApiUtil.setExampleResponse(request, "application/json", "{  \"queueId\" : 5,  \"displayName\" : \"displayName\",  \"keepLog\" : true,  \"description\" : \"description\",  \"fullDisplayName\" : \"fullDisplayName\",  \"estimatedDuration\" : 5,  \"url\" : \"url\",  \"building\" : true,  \"changeSet\" : {    \"kind\" : \"kind\",    \"_class\" : \"_class\"  },  \"duration\" : 1,  \"result\" : \"result\",  \"number\" : 6,  \"executor\" : \"executor\",  \"builtOn\" : \"builtOn\",  \"_class\" : \"_class\",  \"id\" : \"id\",  \"actions\" : [ {    \"causes\" : [ {      \"_class\" : \"_class\",      \"shortDescription\" : \"shortDescription\",      \"userName\" : \"userName\",      \"userId\" : \"userId\"    }, {      \"_class\" : \"_class\",      \"shortDescription\" : \"shortDescription\",      \"userName\" : \"userName\",      \"userId\" : \"userId\"    } ],    \"_class\" : \"_class\"  }, {    \"causes\" : [ {      \"_class\" : \"_class\",      \"shortDescription\" : \"shortDescription\",      \"userName\" : \"userName\",      \"userId\" : \"userId\"    }, {      \"_class\" : \"_class\",      \"shortDescription\" : \"shortDescription\",      \"userName\" : \"userName\",      \"userId\" : \"userId\"    } ],    \"_class\" : \"_class\"  } ],  \"timestamp\" : 2}");
                    break;
                }
            }
        });
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "getJobProgressiveText", notes = "Retrieve job's build progressive text output", authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully retrieved job's build progressive text output"),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/{number}/logText/progressiveText",
        method = RequestMethod.GET)
    default ResponseEntity<Void> getJobProgressiveText(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name,@ApiParam(value = "Build number",required=true) @PathVariable("number") String number,@NotNull @ApiParam(value = "Starting point of progressive text output", required = true) @Valid @RequestParam(value = "start", required = true) String start) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "postJobBuild", notes = "Build a job", authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully built the job (backward compatibility for older versions of Jenkins)"),
        @ApiResponse(code = 201, message = "Successfully built the job"),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/build",
        method = RequestMethod.POST)
    default ResponseEntity<Void> postJobBuild(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name,@NotNull @ApiParam(value = "", required = true) @Valid @RequestParam(value = "json", required = true) String json,@ApiParam(value = "") @Valid @RequestParam(value = "token", required = false) String token,@ApiParam(value = "CSRF protection token" ) @RequestHeader(value="Jenkins-Crumb", required=false) String jenkinsCrumb) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "postJobConfig", notes = "Update job configuration", authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully retrieved job configuration in config.xml format"),
        @ApiResponse(code = 400, message = "An error has occurred - error message is embedded inside the HTML response", response = String.class),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/config.xml",
        produces = { "*/*" }, 
        consumes = { "application/json" },
        method = RequestMethod.POST)
    default ResponseEntity<Void> postJobConfig(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name,@ApiParam(value = "Job configuration in config.xml format" ,required=true )  @Valid @RequestBody String body,@ApiParam(value = "CSRF protection token" ) @RequestHeader(value="Jenkins-Crumb", required=false) String jenkinsCrumb) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "postJobDelete", notes = "Delete a job", authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully deleted the job"),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/doDelete",
        method = RequestMethod.POST)
    default ResponseEntity<Void> postJobDelete(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name,@ApiParam(value = "CSRF protection token" ) @RequestHeader(value="Jenkins-Crumb", required=false) String jenkinsCrumb) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "postJobDisable", notes = "Disable a job", authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully disabled the job"),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/disable",
        method = RequestMethod.POST)
    default ResponseEntity<Void> postJobDisable(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name,@ApiParam(value = "CSRF protection token" ) @RequestHeader(value="Jenkins-Crumb", required=false) String jenkinsCrumb) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "postJobEnable", notes = "Enable a job", authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully enabled the job"),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/enable",
        method = RequestMethod.POST)
    default ResponseEntity<Void> postJobEnable(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name,@ApiParam(value = "CSRF protection token" ) @RequestHeader(value="Jenkins-Crumb", required=false) String jenkinsCrumb) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "postJobLastBuildStop", notes = "Stop a job", authorizations = {
        @Authorization(value = "jenkins_auth")
    }, tags={ "remoteAccess", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully stopped the job"),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password"),
        @ApiResponse(code = 404, message = "Job cannot be found on Jenkins instance") })
    @RequestMapping(value = "/job/{name}/lastBuild/stop",
        method = RequestMethod.POST)
    default ResponseEntity<Void> postJobLastBuildStop(@ApiParam(value = "Name of the job",required=true) @PathVariable("name") String name,@ApiParam(value = "CSRF protection token" ) @RequestHeader(value="Jenkins-Crumb", required=false) String jenkinsCrumb) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }

}
