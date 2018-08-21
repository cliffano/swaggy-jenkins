/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech) (3.2.1-SNAPSHOT).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.api;

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
@Api(value = "jwt-auth", description = "the jwt-auth API")
public interface JwtAuthApi {

    default Optional<NativeWebRequest> getRequest() {
        return Optional.empty();
    }

    @ApiOperation(value = "", nickname = "getJsonWebKey", notes = "Retrieve JSON Web Key", response = String.class, tags={ "blueOcean", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully retrieved JWT token", response = String.class),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password") })
    @RequestMapping(value = "/jwt-auth/jwks/{key}",
        produces = { "application/json" }, 
        method = RequestMethod.GET)
    default ResponseEntity<String> getJsonWebKey(@ApiParam(value = "Key ID received as part of JWT header field kid",required=true) @PathVariable("key") Integer key) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }


    @ApiOperation(value = "", nickname = "getJsonWebToken", notes = "Retrieve JSON Web Token", response = String.class, tags={ "blueOcean", })
    @ApiResponses(value = { 
        @ApiResponse(code = 200, message = "Successfully retrieved JWT token", response = String.class),
        @ApiResponse(code = 401, message = "Authentication failed - incorrect username and/or password"),
        @ApiResponse(code = 403, message = "Jenkins requires authentication - please set username and password") })
    @RequestMapping(value = "/jwt-auth/token",
        produces = { "application/json" }, 
        method = RequestMethod.GET)
    default ResponseEntity<String> getJsonWebToken(@ApiParam(value = "Token expiry time in minutes, default: 30 minutes") @Valid @RequestParam(value = "expiryTimeInMins", required = false) Integer expiryTimeInMins,@ApiParam(value = "Maximum token expiry time in minutes, default: 480 minutes") @Valid @RequestParam(value = "maxExpiryTimeInMins", required = false) Integer maxExpiryTimeInMins) {
        return new ResponseEntity<>(HttpStatus.NOT_IMPLEMENTED);

    }

}
