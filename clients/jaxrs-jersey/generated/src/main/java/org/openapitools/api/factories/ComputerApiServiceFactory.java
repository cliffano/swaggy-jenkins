package org.openapitools.api.factories;

import org.openapitools.api.ComputerApiService;
import org.openapitools.api.impl.ComputerApiServiceImpl;

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaJerseyServerCodegen", date = "2018-08-21T02:12:27.523Z[GMT]")
public class ComputerApiServiceFactory {
    private final static ComputerApiService service = new ComputerApiServiceImpl();

    public static ComputerApiService getComputerApi() {
        return service;
    }
}
